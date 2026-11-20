#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826A0E70"))) PPC_WEAK_FUNC(sub_826A0E70);
PPC_FUNC_IMPL(__imp__sub_826A0E70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8269fe90
	sub_8269FE90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0E78"))) PPC_WEAK_FUNC(sub_826A0E78);
PPC_FUNC_IMPL(__imp__sub_826A0E78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8269f900
	sub_8269F900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0E80"))) PPC_WEAK_FUNC(sub_826A0E80);
PPC_FUNC_IMPL(__imp__sub_826A0E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,25084
	ctx.r3.s64 = ctx.r11.s64 + 25084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0E90"))) PPC_WEAK_FUNC(sub_826A0E90);
PPC_FUNC_IMPL(__imp__sub_826A0E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a0ec8
	if (ctx.cr6.eq) goto loc_826A0EC8;
	// bl 0x826a1370
	ctx.lr = 0x826A0EB8;
	sub_826A1370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a0ec8
	if (!ctx.cr6.eq) goto loc_826A0EC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a0ed4
	goto loc_826A0ED4;
loc_826A0EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269fa70
	ctx.lr = 0x826A0ED4;
	sub_8269FA70(ctx, base);
loc_826A0ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0EF0"))) PPC_WEAK_FUNC(sub_826A0EF0);
PPC_FUNC_IMPL(__imp__sub_826A0EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a1370
	sub_826A1370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0EF8"))) PPC_WEAK_FUNC(sub_826A0EF8);
PPC_FUNC_IMPL(__imp__sub_826A0EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a1370
	ctx.lr = 0x826A0F18;
	sub_826A1370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a0f2c
	if (ctx.cr6.eq) goto loc_826A0F2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x826A0F2C;
	sub_8269FAC8(ctx, base);
loc_826A0F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0F48"))) PPC_WEAK_FUNC(sub_826A0F48);
PPC_FUNC_IMPL(__imp__sub_826A0F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,25112
	ctx.r3.s64 = ctx.r11.s64 + 25112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0F58"))) PPC_WEAK_FUNC(sub_826A0F58);
PPC_FUNC_IMPL(__imp__sub_826A0F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a0f90
	if (ctx.cr6.eq) goto loc_826A0F90;
	// bl 0x826a14f0
	ctx.lr = 0x826A0F80;
	sub_826A14F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a0f90
	if (!ctx.cr6.eq) goto loc_826A0F90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a0f9c
	goto loc_826A0F9C;
loc_826A0F90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a0e90
	ctx.lr = 0x826A0F9C;
	sub_826A0E90(ctx, base);
loc_826A0F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A0FB8"))) PPC_WEAK_FUNC(sub_826A0FB8);
PPC_FUNC_IMPL(__imp__sub_826A0FB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a14f0
	sub_826A14F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A0FC0"))) PPC_WEAK_FUNC(sub_826A0FC0);
PPC_FUNC_IMPL(__imp__sub_826A0FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,852
	ctx.r3.s64 = 852;
	// bl 0x82833108
	ctx.lr = 0x826A0FE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a1008
	if (ctx.cr0.eq) goto loc_826A1008;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a10f0
	ctx.lr = 0x826A0FF4;
	sub_826A10F0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25312
	ctx.r11.s64 = ctx.r11.s64 + 25312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826a100c
	goto loc_826A100C;
loc_826A1008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A100C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1028"))) PPC_WEAK_FUNC(sub_826A1028);
PPC_FUNC_IMPL(__imp__sub_826A1028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a14f0
	ctx.lr = 0x826A1048;
	sub_826A14F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a1058
	if (!ctx.cr6.eq) goto loc_826A1058;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a1070
	goto loc_826A1070;
loc_826A1058:
	// bl 0x826a1370
	ctx.lr = 0x826A105C;
	sub_826A1370(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a1070
	if (ctx.cr6.eq) goto loc_826A1070;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269fac8
	ctx.lr = 0x826A1070;
	sub_8269FAC8(ctx, base);
loc_826A1070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1088"))) PPC_WEAK_FUNC(sub_826A1088);
PPC_FUNC_IMPL(__imp__sub_826A1088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,824
	ctx.r3.s64 = ctx.r31.s64 + 824;
	// bl 0x826a1240
	ctx.lr = 0x826A10AC;
	sub_826A1240(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x826A10C0;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a10d0
	if (ctx.cr0.eq) goto loc_826A10D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A10D0;
	sub_82332DB8(ctx, base);
loc_826A10D0:
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

__attribute__((alias("__imp__sub_826A10F0"))) PPC_WEAK_FUNC(sub_826A10F0);
PPC_FUNC_IMPL(__imp__sub_826A10F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A10F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8269fcb8
	ctx.lr = 0x826A1108;
	sub_8269FCB8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,25184
	ctx.r11.s64 = ctx.r11.s64 + 25184;
	// addi r31,r27,824
	ctx.r31.s64 = ctx.r27.s64 + 824;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r29,r26,824
	ctx.r29.s64 = ctx.r26.s64 + 824;
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r30,832(r27)
	PPC_STORE_U32(ctx.r27.u32 + 832, ctx.r30.u32);
	// stw r30,836(r27)
	PPC_STORE_U32(ctx.r27.u32 + 836, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,828(r27)
	PPC_STORE_U32(ctx.r27.u32 + 828, ctx.r11.u32);
	// stw r30,840(r27)
	PPC_STORE_U32(ctx.r27.u32 + 840, ctx.r30.u32);
	// stw r30,844(r27)
	PPC_STORE_U32(ctx.r27.u32 + 844, ctx.r30.u32);
	// stw r30,824(r27)
	PPC_STORE_U32(ctx.r27.u32 + 824, ctx.r30.u32);
	// beq cr6,0x826a11c4
	if (ctx.cr6.eq) goto loc_826A11C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a11c4
	if (!ctx.cr6.gt) goto loc_826A11C4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a1170
	if (ctx.cr0.eq) goto loc_826A1170;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A1170;
	sub_82332C38(ctx, base);
loc_826A1170:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a11c4
	if (!ctx.cr6.gt) goto loc_826A11C4;
loc_826A1180:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x826A1194;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 * 80;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a11b0
	if (ctx.cr0.eq) goto loc_826A11B0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x826a1550
	ctx.lr = 0x826A11B0;
	sub_826A1550(ctx, base);
loc_826A11B0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a1180
	if (ctx.cr6.lt) goto loc_826A1180;
loc_826A11C4:
	// lwz r11,848(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 848);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,848(r27)
	PPC_STORE_U32(ctx.r27.u32 + 848, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A11D8"))) PPC_WEAK_FUNC(sub_826A11D8);
PPC_FUNC_IMPL(__imp__sub_826A11D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r10,836(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 468, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 472, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 476, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 548, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,812(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 812, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1230"))) PPC_WEAK_FUNC(sub_826A1230);
PPC_FUNC_IMPL(__imp__sub_826A1230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1240"))) PPC_WEAK_FUNC(sub_826A1240);
PPC_FUNC_IMPL(__imp__sub_826A1240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A1248;
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
	// ble cr6,0x826a1280
	if (!ctx.cr6.gt) goto loc_826A1280;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_826A1268:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x826A1274;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// bne 0x826a1268
	if (!ctx.cr0.eq) goto loc_826A1268;
loc_826A1280:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,80
	ctx.r6.s64 = 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826A1298;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a12a8
	if (ctx.cr6.eq) goto loc_826A12A8;
	// bl 0x82332db8
	ctx.lr = 0x826A12A8;
	sub_82332DB8(ctx, base);
loc_826A12A8:
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

__attribute__((alias("__imp__sub_826A12C0"))) PPC_WEAK_FUNC(sub_826A12C0);
PPC_FUNC_IMPL(__imp__sub_826A12C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,852
	ctx.r3.s64 = 852;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A12C8"))) PPC_WEAK_FUNC(sub_826A12C8);
PPC_FUNC_IMPL(__imp__sub_826A12C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a1308
	if (!ctx.cr0.eq) goto loc_826A1308;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24344, ctx.r11.u32);
	// addi r3,r9,25084
	ctx.r3.s64 = ctx.r9.s64 + 25084;
	// bl 0x82816528
	ctx.lr = 0x826A1300;
	sub_82816528(ctx, base);
	// stw r3,24340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24340, ctx.r3.u32);
	// b 0x826a130c
	goto loc_826A130C;
loc_826A1308:
	// lwz r3,24340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24340);
loc_826A130C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1320"))) PPC_WEAK_FUNC(sub_826A1320);
PPC_FUNC_IMPL(__imp__sub_826A1320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a1370
	ctx.lr = 0x826A1340;
	sub_826A1370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A1354;
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

__attribute__((alias("__imp__sub_826A1370"))) PPC_WEAK_FUNC(sub_826A1370);
PPC_FUNC_IMPL(__imp__sub_826A1370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13628
	ctx.r31.s64 = ctx.r11.s64 + 13628;
	// lwz r11,13624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a13b8
	if (!ctx.cr0.eq) goto loc_826A13B8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25288
	ctx.r9.s64 = ctx.r9.s64 + 25288;
	// stw r11,13624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13624, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27808
	ctx.r3.s64 = ctx.r11.s64 + 27808;
	// bl 0x82a4c758
	ctx.lr = 0x826A13B8;
	sub_82A4C758(ctx, base);
loc_826A13B8:
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

__attribute__((alias("__imp__sub_826A13D0"))) PPC_WEAK_FUNC(sub_826A13D0);
PPC_FUNC_IMPL(__imp__sub_826A13D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,852
	ctx.r3.s64 = 852;
	// bl 0x82833108
	ctx.lr = 0x826A13E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a142c
	if (ctx.cr0.eq) goto loc_826A142C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ee8f8
	ctx.lr = 0x826A13F8;
	sub_827EE8F8(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r10,r10,25312
	ctx.r10.s64 = ctx.r10.s64 + 25312;
	// stw r11,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r11.u32);
	// stw r9,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x826a1430
	goto loc_826A1430;
loc_826A142C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A1430:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1448"))) PPC_WEAK_FUNC(sub_826A1448);
PPC_FUNC_IMPL(__imp__sub_826A1448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a1488
	if (!ctx.cr0.eq) goto loc_826A1488;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24336, ctx.r11.u32);
	// addi r3,r9,25112
	ctx.r3.s64 = ctx.r9.s64 + 25112;
	// bl 0x82816528
	ctx.lr = 0x826A1480;
	sub_82816528(ctx, base);
	// stw r3,24332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24332, ctx.r3.u32);
	// b 0x826a148c
	goto loc_826A148C;
loc_826A1488:
	// lwz r3,24332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24332);
loc_826A148C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A14A0"))) PPC_WEAK_FUNC(sub_826A14A0);
PPC_FUNC_IMPL(__imp__sub_826A14A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a14f0
	ctx.lr = 0x826A14C0;
	sub_826A14F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A14D4;
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

__attribute__((alias("__imp__sub_826A14F0"))) PPC_WEAK_FUNC(sub_826A14F0);
PPC_FUNC_IMPL(__imp__sub_826A14F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13620
	ctx.r31.s64 = ctx.r11.s64 + 13620;
	// lwz r11,13616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a1538
	if (!ctx.cr0.eq) goto loc_826A1538;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25416
	ctx.r9.s64 = ctx.r9.s64 + 25416;
	// stw r11,13616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13616, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27784
	ctx.r3.s64 = ctx.r11.s64 + 27784;
	// bl 0x82a4c758
	ctx.lr = 0x826A1538;
	sub_82A4C758(ctx, base);
loc_826A1538:
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

__attribute__((alias("__imp__sub_826A1550"))) PPC_WEAK_FUNC(sub_826A1550);
PPC_FUNC_IMPL(__imp__sub_826A1550) {
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
	// bl 0x823339b8
	ctx.lr = 0x826A1570;
	sub_823339B8(ctx, base);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1600"))) PPC_WEAK_FUNC(sub_826A1600);
PPC_FUNC_IMPL(__imp__sub_826A1600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,25436
	ctx.r3.s64 = ctx.r11.s64 + 25436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1610"))) PPC_WEAK_FUNC(sub_826A1610);
PPC_FUNC_IMPL(__imp__sub_826A1610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a1648
	if (ctx.cr6.eq) goto loc_826A1648;
	// bl 0x826a4400
	ctx.lr = 0x826A1638;
	sub_826A4400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a1648
	if (!ctx.cr6.eq) goto loc_826A1648;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a1654
	goto loc_826A1654;
loc_826A1648:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82699840
	ctx.lr = 0x826A1654;
	sub_82699840(ctx, base);
loc_826A1654:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1670"))) PPC_WEAK_FUNC(sub_826A1670);
PPC_FUNC_IMPL(__imp__sub_826A1670) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a4400
	sub_826A4400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1678"))) PPC_WEAK_FUNC(sub_826A1678);
PPC_FUNC_IMPL(__imp__sub_826A1678) {
	PPC_FUNC_PROLOGUE();
	// b 0x825873f8
	sub_825873F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1680"))) PPC_WEAK_FUNC(sub_826A1680);
PPC_FUNC_IMPL(__imp__sub_826A1680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2160
	ctx.r3.s64 = 2160;
	// bl 0x82833108
	ctx.lr = 0x826A169C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a16b0
	if (ctx.cr0.eq) goto loc_826A16B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a1728
	ctx.lr = 0x826A16AC;
	sub_826A1728(ctx, base);
	// b 0x826a16b4
	goto loc_826A16B4;
loc_826A16B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A16B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A16C8"))) PPC_WEAK_FUNC(sub_826A16C8);
PPC_FUNC_IMPL(__imp__sub_826A16C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4400
	ctx.lr = 0x826A16E8;
	sub_826A4400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a16f8
	if (!ctx.cr6.eq) goto loc_826A16F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a1710
	goto loc_826A1710;
loc_826A16F8:
	// bl 0x825873f8
	ctx.lr = 0x826A16FC;
	sub_825873F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a1710
	if (ctx.cr6.eq) goto loc_826A1710;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x826A1710;
	sub_826997D0(ctx, base);
loc_826A1710:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1728"))) PPC_WEAK_FUNC(sub_826A1728);
PPC_FUNC_IMPL(__imp__sub_826A1728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A1730;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82699938
	ctx.lr = 0x826A1740;
	sub_82699938(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,25464
	ctx.r11.s64 = ctx.r11.s64 + 25464;
	// addi r10,r10,26600
	ctx.r10.s64 = ctx.r10.s64 + 26600;
	// addi r9,r9,26652
	ctx.r9.s64 = ctx.r9.s64 + 26652;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1616
	ctx.r4.s64 = ctx.r30.s64 + 1616;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82a4ea80
	ctx.lr = 0x826A1774;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1760
	ctx.r4.s64 = ctx.r30.s64 + 1760;
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826A1784;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1792
	ctx.r4.s64 = ctx.r30.s64 + 1792;
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x826A1794;
	sub_82A4EA80(ctx, base);
	// addi r11,r30,1816
	ctx.r11.s64 = ctx.r30.s64 + 1816;
	// addi r10,r31,1816
	ctx.r10.s64 = ctx.r31.s64 + 1816;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// lwz r10,1816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
	// lfs f0,1820(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// bl 0x82855048
	ctx.lr = 0x826A17C0;
	sub_82855048(ctx, base);
	// lwz r11,1848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// lwz r10,1848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// addi r4,r30,1876
	ctx.r4.s64 = ctx.r30.s64 + 1876;
	// addi r3,r31,1876
	ctx.r3.s64 = ctx.r31.s64 + 1876;
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,6,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1848(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1848);
	// rlwimi r11,r10,0,9,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x400000) | (ctx.r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lfs f0,1852(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// lwz r11,1860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// lwz r11,1864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
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
	// bl 0x82a4ea80
	ctx.lr = 0x826A18A0;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1908
	ctx.r4.s64 = ctx.r30.s64 + 1908;
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826A18B0;
	sub_82A4EA80(ctx, base);
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,1984
	ctx.r29.s64 = ctx.r31.s64 + 1984;
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r27,r30,1984
	ctx.r27.s64 = ctx.r30.s64 + 1984;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lbz r11,1944(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1944);
	// stb r11,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r11.u8);
	// lwz r11,1948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lwz r11,1956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
	// lwz r11,1960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1960);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
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
	// stw r26,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r26.u32);
	// stw r28,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r28.u32);
	// stw r28,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r28.u32);
	// stw r28,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r28.u32);
	// stw r28,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r28.u32);
	// stw r28,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r28.u32);
	// beq cr6,0x826a1980
	if (ctx.cr6.eq) goto loc_826A1980;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a1980
	if (!ctx.cr6.gt) goto loc_826A1980;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a1964
	if (ctx.cr0.eq) goto loc_826A1964;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A1964;
	sub_82332C38(ctx, base);
loc_826A1964:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A1978;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_826A1980:
	// lfs f0,2008(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,2068
	ctx.r29.s64 = ctx.r31.s64 + 2068;
	// stfs f0,2008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2008, temp.u32);
	// addi r27,r30,2068
	ctx.r27.s64 = ctx.r30.s64 + 2068;
	// lfs f0,2012(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2012, temp.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
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
	// lfs f0,2028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2028, temp.u32);
	// lfs f0,2032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lfs f0,2036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// lfs f0,2040(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// lfs f0,2044(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2044);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2044, temp.u32);
	// lfs f0,2048(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// lfs f0,2052(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2052);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2052, temp.u32);
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
	// stw r26,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r26.u32);
	// stw r28,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r28.u32);
	// stw r28,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r28.u32);
	// stw r28,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r28.u32);
	// stw r28,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r28.u32);
	// stw r28,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r28.u32);
	// beq cr6,0x826a1a68
	if (ctx.cr6.eq) goto loc_826A1A68;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a1a68
	if (!ctx.cr6.gt) goto loc_826A1A68;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a1a4c
	if (ctx.cr0.eq) goto loc_826A1A4C;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A1A4C;
	sub_82332C38(ctx, base);
loc_826A1A4C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A1A60;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_826A1A68:
	// lfs f0,2092(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,2092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2092, temp.u32);
	// lfs f0,2096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2096, temp.u32);
	// lfs f0,2100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2100, temp.u32);
	// lfs f0,2104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2104, temp.u32);
	// lfs f0,2108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2108, temp.u32);
	// lfs f0,2112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2112, temp.u32);
	// lfs f0,2116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// lfs f0,2120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2120, temp.u32);
	// lfs f0,2124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2124, temp.u32);
	// lfs f0,2128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2128, temp.u32);
	// lfs f0,2132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2132, temp.u32);
	// lfs f0,2136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// lfs f0,2140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// lfs f0,2144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2144, temp.u32);
	// lwz r11,2148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2148);
	// stw r11,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1AF0"))) PPC_WEAK_FUNC(sub_826A1AF0);
PPC_FUNC_IMPL(__imp__sub_826A1AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,2068
	ctx.r3.s64 = ctx.r31.s64 + 2068;
	// bl 0x8239d768
	ctx.lr = 0x826A1B14;
	sub_8239D768(ctx, base);
	// addi r3,r31,1984
	ctx.r3.s64 = ctx.r31.s64 + 1984;
	// bl 0x8239d768
	ctx.lr = 0x826A1B1C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1824
	ctx.r3.s64 = ctx.r31.s64 + 1824;
	// bl 0x82855110
	ctx.lr = 0x826A1B24;
	sub_82855110(ctx, base);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// bl 0x8269b2f8
	ctx.lr = 0x826A1B2C;
	sub_8269B2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x826A1B34;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a1b44
	if (ctx.cr0.eq) goto loc_826A1B44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A1B44;
	sub_82332DB8(ctx, base);
loc_826A1B44:
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

__attribute__((alias("__imp__sub_826A1B60"))) PPC_WEAK_FUNC(sub_826A1B60);
PPC_FUNC_IMPL(__imp__sub_826A1B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826A1B68;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d73c0
	ctx.lr = 0x826A1B74;
	sub_827D73C0(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,25464
	ctx.r11.s64 = ctx.r11.s64 + 25464;
	// addi r10,r10,26600
	ctx.r10.s64 = ctx.r10.s64 + 26600;
	// addi r9,r9,26652
	ctx.r9.s64 = ctx.r9.s64 + 26652;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// bl 0x82a455d0
	ctx.lr = 0x826A1BA8;
	sub_82A455D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r30.u32);
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// stw r30,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a455d0
	ctx.lr = 0x826A1BCC;
	sub_82A455D0(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1792
	ctx.r3.s64 = ctx.r31.s64 + 1792;
	// bl 0x82a455d0
	ctx.lr = 0x826A1BDC;
	sub_82A455D0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// addi r3,r31,1816
	ctx.r3.s64 = ctx.r31.s64 + 1816;
	// stw r30,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// stw r11,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r11.u32);
	// bl 0x82a455d0
	ctx.lr = 0x826A1C08;
	sub_82A455D0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r7,r10,-11456
	ctx.r7.s64 = ctx.r10.s64 + -11456;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f11,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,-15872(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15872);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f0,1904(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1904, temp.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// stfs f13,1900(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f0,1936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1936, temp.u32);
	// stfs f13,1932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
	// lfs f0,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r30.u32);
	// lfs f12,-15844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15844);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r30.u32);
	// lfs f13,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r30.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// stfs f12,1868(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1868, temp.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r6,1848(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r5,1452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwimi r6,r8,23,0,9
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 23) & 0xFFC00000) | (ctx.r6.u64 & 0xFFFFFFFF003FFFFF);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// rlwinm r5,r5,0,5,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r6.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r5,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r5.u32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,2008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2008, temp.u32);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,2012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2012, temp.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,2028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2028, temp.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,2040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,2048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// stfs f0,2092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2092, temp.u32);
	// stw r3,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r3.u32);
	// stfs f0,2096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2096, temp.u32);
	// stw r30,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r30.u32);
	// stfs f0,2100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2100, temp.u32);
	// stw r30,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r30.u32);
	// stfs f0,2104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2104, temp.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stfs f0,2108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2108, temp.u32);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// stfs f0,2112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2112, temp.u32);
	// stb r4,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r4.u8);
	// stfs f0,2116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// stfs f0,2120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2120, temp.u32);
	// stw r28,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r28.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f0,2124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2124, temp.u32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f0,2128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2128, temp.u32);
	// stfs f0,2132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2132, temp.u32);
	// stw r27,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r27.u32);
	// stfs f0,2136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// stw r26,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r26.u32);
	// lfs f0,16604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16604);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r25.u32);
	// stfs f12,1872(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1872, temp.u32);
	// stw r24,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r24.u32);
	// stfs f13,2036(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2036, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,2044(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2044, temp.u32);
	// stw r11,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r11.u32);
	// stfs f13,2052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2052, temp.u32);
	// stw r10,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r10.u32);
	// stfs f11,2140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2140, temp.u32);
	// stw r8,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r8.u32);
	// stfs f13,2144(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2144, temp.u32);
	// stw r6,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r6.u32);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// stw r5,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r5.u32);
	// stw r9,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1DC0"))) PPC_WEAK_FUNC(sub_826A1DC0);
PPC_FUNC_IMPL(__imp__sub_826A1DC0) {
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
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x827d7bb0
	ctx.lr = 0x826A1DEC;
	sub_827D7BB0(ctx, base);
	// lwz r10,1848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// beq cr6,0x826a1e3c
	if (ctx.cr6.eq) goto loc_826A1E3C;
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,2008(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2008, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,2012(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2012, temp.u32);
	// stw r10,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r10.u32);
	// bl 0x826a3da0
	ctx.lr = 0x826A1E18;
	sub_826A3DA0(ctx, base);
	// bl 0x826a3f88
	ctx.lr = 0x826A1E1C;
	sub_826A3F88(ctx, base);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// stfs f31,2032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stfs f31,2040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// stfs f31,2048(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2048, temp.u32);
	// stfs f31,2028(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2028, temp.u32);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// b 0x826a1e54
	goto loc_826A1E54;
loc_826A1E3C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// stw r9,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r9.u32);
	// stw r10,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r10.u32);
loc_826A1E54:
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

__attribute__((alias("__imp__sub_826A1E70"))) PPC_WEAK_FUNC(sub_826A1E70);
PPC_FUNC_IMPL(__imp__sub_826A1E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A1E78;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826a1fc0
	if (ctx.cr6.eq) goto loc_826A1FC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r27,r11,-11424
	ctx.r27.s64 = ctx.r11.s64 + -11424;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-15904(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -15904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x826a1f08
	if (ctx.cr6.eq) goto loc_826A1F08;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826a1eec
	if (ctx.cr6.eq) goto loc_826A1EEC;
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a1eec
	if (ctx.cr0.eq) goto loc_826A1EEC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// b 0x826a1f04
	goto loc_826A1F04;
loc_826A1EEC:
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
loc_826A1F04:
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
loc_826A1F08:
	// addi r4,r31,1876
	ctx.r4.s64 = ctx.r31.s64 + 1876;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826A1F18;
	sub_82A4EA80(ctx, base);
	// lwz r11,1860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// lwz r3,1896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1896);
	// bl 0x8269cb70
	ctx.lr = 0x826A1F24;
	sub_8269CB70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A1F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826a1f8c
	if (ctx.cr6.eq) goto loc_826A1F8C;
	// lwz r3,80(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a1f8c
	if (ctx.cr6.eq) goto loc_826A1F8C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,1440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1048);
	// lwz r5,1488(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A1F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826A1F8C:
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a1fb8
	if (ctx.cr6.eq) goto loc_826A1FB8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826a1fb8
	if (ctx.cr6.eq) goto loc_826A1FB8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a3958
	ctx.lr = 0x826A1FB8;
	sub_826A3958(ctx, base);
loc_826A1FB8:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1900, temp.u32);
loc_826A1FC0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1FD0"))) PPC_WEAK_FUNC(sub_826A1FD0);
PPC_FUNC_IMPL(__imp__sub_826A1FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,2144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,16544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16544);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,2144(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2144, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,2144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2000"))) PPC_WEAK_FUNC(sub_826A2000);
PPC_FUNC_IMPL(__imp__sub_826A2000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1856(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a20b0
	if (ctx.cr6.eq) goto loc_826A20B0;
	// lwz r10,1848(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1848);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a20b0
	if (ctx.cr0.eq) goto loc_826A20B0;
	// lwz r10,1940(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1940);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826a20b0
	if (!ctx.cr6.eq) goto loc_826A20B0;
	// lfs f0,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lfs f13,1876(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1876);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1880(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1880);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1884);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,23968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,-27804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f0,f8,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f0,f7,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
loc_826A20B0:
	// b 0x827d9658
	sub_827D9658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A20B8"))) PPC_WEAK_FUNC(sub_826A20B8);
PPC_FUNC_IMPL(__imp__sub_826A20B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A20C0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r3,1856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a2268
	if (ctx.cr6.eq) goto loc_826A2268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r31,1876
	ctx.r27.s64 = ctx.r31.s64 + 1876;
	// lwz r10,1864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,2360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// lwz r4,1408(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A210C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r31,1948
	ctx.r28.s64 = ctx.r31.s64 + 1948;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826A2118:
	// lwz r11,1836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82817bb8
	ctx.lr = 0x826A212C;
	sub_82817BB8(ctx, base);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// blt cr6,0x826a2118
	if (ctx.cr6.lt) goto loc_826A2118;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,1824
	ctx.r5.s64 = ctx.r31.s64 + 1824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a40b0
	ctx.lr = 0x826A21A4;
	sub_826A40B0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826a224c
	if (ctx.cr6.lt) goto loc_826A224C;
	// fmuls f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a2268
	if (ctx.cr6.lt) goto loc_826A2268;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// beq cr6,0x826a2268
	if (ctx.cr6.eq) goto loc_826A2268;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1932(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// stw r10,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r10.u32);
	// stw r9,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r9.u32);
	// stw r8,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r8.u32);
	// stw r7,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r7.u32);
	// stw r6,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r6.u32);
	// b 0x826a226c
	goto loc_826A226C;
loc_826A224C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,2136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1852(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,2136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
loc_826A2268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A226C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_826A2280"))) PPC_WEAK_FUNC(sub_826A2280);
PPC_FUNC_IMPL(__imp__sub_826A2280) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1940);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x826a23e8
	if (ctx.cr6.lt) goto loc_826A23E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x826a23e8
	if (ctx.cr6.gt) goto loc_826A23E8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1720(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// ori r11,r11,60983
	ctx.r11.u64 = ctx.r11.u64 | 60983;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826a2350
	if (!ctx.cr6.gt) goto loc_826A2350;
	// stw r11,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r11.u32);
	// addi r4,r30,1708
	ctx.r4.s64 = ctx.r30.s64 + 1708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817280
	ctx.lr = 0x826A22D4;
	sub_82817280(ctx, base);
	// lfs f0,1712(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,1708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4551
	ctx.r11.s64 = 4551;
	// lfs f12,1716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817bb8
	ctx.lr = 0x826A2304;
	sub_82817BB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1852, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r11.u32);
	// stw r9,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r9.u32);
	// stw r10,1708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1708, ctx.r10.u32);
	// b 0x826a23e8
	goto loc_826A23E8;
loc_826A2350:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,57343
	ctx.r11.u64 = ctx.r11.u64 | 57343;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826a23e8
	if (!ctx.cr6.gt) goto loc_826A23E8;
	// stw r11,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r11.u32);
	// addi r4,r30,1708
	ctx.r4.s64 = ctx.r30.s64 + 1708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817280
	ctx.lr = 0x826A2370;
	sub_82817280(ctx, base);
	// lfs f0,1712(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,1708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	ctx.f13.f64 = double(temp.f32);
	// li r11,8191
	ctx.r11.s64 = 8191;
	// lfs f12,1716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817bb8
	ctx.lr = 0x826A23A0;
	sub_82817BB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1852(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1852, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,1708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1708, ctx.r11.u32);
	// stw r10,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r10.u32);
loc_826A23E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_826A2408"))) PPC_WEAK_FUNC(sub_826A2408);
PPC_FUNC_IMPL(__imp__sub_826A2408) {
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
	// lwz r11,1856(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a2468
	if (ctx.cr6.eq) goto loc_826A2468;
	// lwz r11,1940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1940);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826a2468
	if (!ctx.cr6.eq) goto loc_826A2468;
	// lfs f0,1708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1712(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,1716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f2,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a20b8
	ctx.lr = 0x826A2468;
	sub_826A20B8(ctx, base);
loc_826A2468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2478"))) PPC_WEAK_FUNC(sub_826A2478);
PPC_FUNC_IMPL(__imp__sub_826A2478) {
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
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826a2514
	if (ctx.cr6.eq) goto loc_826A2514;
	// ble cr6,0x826a251c
	if (!ctx.cr6.gt) goto loc_826A251C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x826a251c
	if (ctx.cr6.gt) goto loc_826A251C;
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x826A24BC;
	sub_82817BB8(ctx, base);
	// lfs f0,1736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x826a20b8
	ctx.lr = 0x826A2510;
	sub_826A20B8(ctx, base);
	// b 0x826a251c
	goto loc_826A251C;
loc_826A2514:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1944(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1944, ctx.r11.u8);
loc_826A251C:
	// stfs f31,1852(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2538"))) PPC_WEAK_FUNC(sub_826A2538);
PPC_FUNC_IMPL(__imp__sub_826A2538) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a26ac
	if (ctx.cr0.eq) goto loc_826A26AC;
	// lfs f0,1852(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1852);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a26ac
	if (ctx.cr6.eq) goto loc_826A26AC;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a2588
	if (ctx.cr6.eq) goto loc_826A2588;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a258c
	goto loc_826A258C;
loc_826A2588:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A258C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a26ac
	if (!ctx.cr6.eq) goto loc_826A26AC;
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826a266c
	if (ctx.cr6.eq) goto loc_826A266C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826a25b8
	if (ctx.cr6.eq) goto loc_826A25B8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2136(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// b 0x826a26ac
	goto loc_826A26AC;
loc_826A25B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a25f8
	if (!ctx.cr6.gt) goto loc_826A25F8;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a20b8
	ctx.lr = 0x826A25F8;
	sub_826A20B8(ctx, base);
loc_826A25F8:
	// lfs f0,2140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a26ac
	if (ctx.cr6.lt) goto loc_826A26AC;
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// lwz r10,1864(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// lwz r11,1592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1592);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1592, ctx.r11.u32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r11,1796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1796);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r11,1796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1796);
	// stfs f31,40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r11,1796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1796);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r11,1796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1796);
	// stfs f31,44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f31,2136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2136, temp.u32);
	// b 0x826a26ac
	goto loc_826A26AC;
loc_826A266C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a26ac
	if (!ctx.cr6.gt) goto loc_826A26AC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a20b8
	ctx.lr = 0x826A26AC;
	sub_826A20B8(ctx, base);
loc_826A26AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_826A26C8"))) PPC_WEAK_FUNC(sub_826A26C8);
PPC_FUNC_IMPL(__imp__sub_826A26C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a2704
	if (ctx.cr6.eq) goto loc_826A2704;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
loc_826A2704:
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// addi r30,r31,1876
	ctx.r30.s64 = ctx.r31.s64 + 1876;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,1492
	ctx.r4.s64 = ctx.r11.s64 + 1492;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826A271C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826A272C;
	sub_82A4EA80(ctx, base);
	// lfs f13,1956(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1888);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,1892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// lwz r9,1896(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1896);
	// lwz r8,1940(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,1948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1880(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// stw r9,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r9.u32);
	// stw r8,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r8.u32);
	// stw r7,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r7.u32);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// beq cr6,0x826a286c
	if (ctx.cr6.eq) goto loc_826A286C;
	// lfs f0,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826A27CC;
	sub_82332E18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x826A27D8;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82648440
	ctx.lr = 0x826A27E4;
	sub_82648440(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,62804
	ctx.r11.u64 = ctx.r11.u64 | 62804;
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r9.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r9,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r9.u32);
	// bge cr6,0x826a281c
	if (!ctx.cr6.lt) goto loc_826A281C;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x826a281c
	if (!ctx.cr6.gt) goto loc_826A281C;
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
loc_826A281C:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,16816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// stw r9,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r9.u32);
	// stw r10,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r10.u32);
loc_826A286C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f0,-32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r31,100(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r31,1700
	ctx.r4.s64 = ctx.r31.s64 + 1700;
	// addi r3,r31,1556
	ctx.r3.s64 = ctx.r31.s64 + 1556;
	// bl 0x82a4ea80
	ctx.lr = 0x826A2894;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stfs f0,1596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
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

__attribute__((alias("__imp__sub_826A28C8"))) PPC_WEAK_FUNC(sub_826A28C8);
PPC_FUNC_IMPL(__imp__sub_826A28C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,1788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a2a20
	if (ctx.cr0.eq) goto loc_826A2A20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,1760
	ctx.r3.s64 = ctx.r31.s64 + 1760;
	// bl 0x8281d9b0
	ctx.lr = 0x826A2904;
	sub_8281D9B0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1784(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826a2938
	if (!ctx.cr6.gt) goto loc_826A2938;
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// stfs f13,1784(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x826a2938
	if (ctx.cr6.gt) goto loc_826A2938;
	// lwz r11,1788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// stfs f0,1784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1784, temp.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
loc_826A2938:
	// lfs f0,1948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// addi r11,r31,1948
	ctx.r11.s64 = ctx.r31.s64 + 1948;
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826A297C;
	sub_82332E18(ctx, base);
	// lfs f13,1952(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,1948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,1908(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1908);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,1908
	ctx.r11.s64 = ctx.r31.s64 + 1908;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,1908(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1908, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,1912(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1912, temp.u32);
	// lfs f12,1916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// lfs f13,1912(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x826A2A08;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
loc_826A2A20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_826A2A40"))) PPC_WEAK_FUNC(sub_826A2A40);
PPC_FUNC_IMPL(__imp__sub_826A2A40) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1744
	ctx.r4.s64 = ctx.r31.s64 + 1744;
	// bl 0x82817bb8
	ctx.lr = 0x826A2A64;
	sub_82817BB8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x826A2A74;
	sub_82817BB8(ctx, base);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f11,f9,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826a2acc
	if (!ctx.cr6.lt) goto loc_826A2ACC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r10,30248
	ctx.r10.s64 = ctx.r10.s64 + 30248;
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,17756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9832(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9832);
	ctx.f0.f64 = double(temp.f32);
	// b 0x826a2ae8
	goto loc_826A2AE8;
loc_826A2ACC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,30248
	ctx.r9.s64 = ctx.r11.s64 + 30248;
	// lfs f13,30248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30248);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,17756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9832);
	ctx.f0.f64 = double(temp.f32);
loc_826A2AE8:
	// fmadds f0,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
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

__attribute__((alias("__imp__sub_826A2B18"))) PPC_WEAK_FUNC(sub_826A2B18);
PPC_FUNC_IMPL(__imp__sub_826A2B18) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x826a2a40
	ctx.lr = 0x826A2B3C;
	sub_826A2A40(ctx, base);
	// lfs f0,1740(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f13,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,1708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,1732
	ctx.r11.s64 = ctx.r31.s64 + 1732;
	// lfs f10,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,1712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// stw r10,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r10.u32);
	// stw r9,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x826A2BB0;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x826A2BBC;
	sub_82817F30(ctx, base);
	// addi r4,r31,1744
	ctx.r4.s64 = ctx.r31.s64 + 1744;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824f97d8
	ctx.lr = 0x826A2BC8;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x826A2BD4;
	sub_82817F30(ctx, base);
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
	ctx.lr = 0x826A2BE8;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817b48
	ctx.lr = 0x826A2BF4;
	sub_82817B48(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r9.u32);
	// lwz r11,1816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1816);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r10.u32);
	// lfs f13,1948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1748(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// lfs f12,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,1752(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r9.u32);
	// stw r6,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r6.u32);
	// stw r8,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r8.u32);
	// stw r10,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r10.u32);
	// stw r7,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r7.u32);
	// stw r5,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r5.u32);
	// beq 0x826a2c9c
	if (ctx.cr0.eq) goto loc_826A2C9C;
	// lfs f0,1820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,1820(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1820, temp.u32);
	// lfs f0,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a2c9c
	if (ctx.cr6.lt) goto loc_826A2C9C;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
loc_826A2C9C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_826A2CB8"))) PPC_WEAK_FUNC(sub_826A2CB8);
PPC_FUNC_IMPL(__imp__sub_826A2CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A2CC0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61710
	ctx.lr = 0x826A2CC8;
	__savefpr_14(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r31,1876
	ctx.r4.s64 = ctx.r31.s64 + 1876;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// ld r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 460);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x826A2CFC;
	sub_828191B8(ctx, base);
	// lwz r10,1956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// lfs f30,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// lfs f29,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f29.f64 = double(temp.f32);
	// lwz r9,1952(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lfs f27,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f28.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f26,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f26.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f25,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f23,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f10,f27,f0
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f24,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f22,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f8,f26,f13,f11
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f21,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f21.f64 = double(temp.f32);
	// lfs f19,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f19.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f20,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f20.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f18,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f18.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f17,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f17.f64 = double(temp.f32);
	// lfs f15,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f15.f64 = double(temp.f32);
	// lfs f16,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f9,f25,f12,f9
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f31,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f10,f23,f12,f10
	ctx.f10.f64 = double(float(ctx.f23.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f11,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f24,f12,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f14,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f12,f22,f12,f8
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f9,f21,f13,f9
	ctx.f9.f64 = double(float(ctx.f21.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f10,f19,f13,f10
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f20,f13,f0
	ctx.f8.f64 = double(float(ctx.f20.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f12,f18
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f18.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f9,f17
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f17.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f10,f15
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f15.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f12,f8,f16
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f16.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// blt cr6,0x826a2e2c
	if (ctx.cr6.lt) goto loc_826A2E2C;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, ctx.f14.f64);
	// blt cr6,0x826a2e2c
	if (ctx.cr6.lt) goto loc_826A2E2C;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x826a2e2c
	if (ctx.cr6.gt) goto loc_826A2E2C;
	// fcmpu cr6,f13,f14
	ctx.cr6.compare(ctx.f13.f64, ctx.f14.f64);
	// blt cr6,0x826a2e2c
	if (ctx.cr6.lt) goto loc_826A2E2C;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x826a2e30
	if (!ctx.cr6.gt) goto loc_826A2E30;
loc_826A2E2C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_826A2E30:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,2000(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2000);
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ori r27,r10,62804
	ctx.r27.u64 = ctx.r10.u64 | 62804;
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// beq cr6,0x826a3170
	if (ctx.cr6.eq) goto loc_826A3170;
	// lwz r30,1996(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1996);
	// lfs f0,1948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x826A2E90;
	sub_82332E18(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// ble cr6,0x826a306c
	if (!ctx.cr6.gt) goto loc_826A306C;
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
loc_826A2EBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,1948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne 0x826a2fdc
	if (!ctx.cr0.eq) goto loc_826A2FDC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f22,f0
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// fmuls f11,f27,f13
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// fmuls f8,f28,f13
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmadds f13,f30,f13,f10
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f11,f23,f0,f11
	ctx.f11.f64 = double(float(ctx.f23.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f10,f25,f0,f9
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f9,f24,f0,f8
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f13,f26,f12,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f11,f19,f12,f11
	ctx.f11.f64 = double(float(ctx.f19.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f13,f18
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f18.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f11,f15
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f15.f64));
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmadds f11,f21,f12,f10
	ctx.f11.f64 = double(float(ctx.f21.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f12,f20,f12,f9
	ctx.f12.f64 = double(float(ctx.f20.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fadds f11,f11,f17
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f17.f64));
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f12,f12,f16
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f16.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// blt cr6,0x826a2fd8
	if (ctx.cr6.lt) goto loc_826A2FD8;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, ctx.f14.f64);
	// blt cr6,0x826a2fd8
	if (ctx.cr6.lt) goto loc_826A2FD8;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x826a2fd8
	if (ctx.cr6.gt) goto loc_826A2FD8;
	// fcmpu cr6,f13,f14
	ctx.cr6.compare(ctx.f13.f64, ctx.f14.f64);
	// blt cr6,0x826a2fd8
	if (ctx.cr6.lt) goto loc_826A2FD8;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x826a2fdc
	if (!ctx.cr6.gt) goto loc_826A2FDC;
loc_826A2FD8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_826A2FDC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826A2FE8;
	sub_82332E18(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a3000
	if (!ctx.cr6.gt) goto loc_826A3000;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// b 0x826a3010
	goto loc_826A3010;
loc_826A3000:
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826a3010
	if (!ctx.cr6.lt) goto loc_826A3010;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_826A3010:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a3028
	if (!ctx.cr6.gt) goto loc_826A3028;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x826a3038
	goto loc_826A3038;
loc_826A3028:
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826a3038
	if (!ctx.cr6.lt) goto loc_826A3038;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_826A3038:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a3050
	if (!ctx.cr6.gt) goto loc_826A3050;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x826a3060
	goto loc_826A3060;
loc_826A3050:
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826a3060
	if (!ctx.cr6.lt) goto loc_826A3060;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_826A3060:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826a2ebc
	if (!ctx.cr0.eq) goto loc_826A2EBC;
loc_826A306C:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82817280
	ctx.lr = 0x826A30D4;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82648440
	ctx.lr = 0x826A30E0;
	sub_82648440(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4551
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4551, ctx.xer);
	// ble cr6,0x826a30fc
	if (!ctx.cr6.gt) goto loc_826A30FC;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// bge cr6,0x826a30fc
	if (!ctx.cr6.lt) goto loc_826A30FC;
	// li r11,4551
	ctx.r11.s64 = 4551;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826A30FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x826A3108;
	sub_82817BB8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f0,-10428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10428);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x826a3160
	if (!ctx.cr6.lt) goto loc_826A3160;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a3160
	if (!ctx.cr6.lt) goto loc_826A3160;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a3160
	if (!ctx.cr6.lt) goto loc_826A3160;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x826a31b4
	goto loc_826A31B4;
loc_826A3160:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826A316C;
	sub_82332E18(ctx, base);
	// b 0x826a31b4
	goto loc_826A31B4;
loc_826A3170:
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,1748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,1752(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826A3198;
	sub_82817BB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_826A31B4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a31d4
	if (!ctx.cr0.eq) goto loc_826A31D4;
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x826a31d4
	if (!ctx.cr6.lt) goto loc_826A31D4;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x826a31d4
	if (!ctx.cr6.gt) goto loc_826A31D4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_826A31D4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a32b4
	if (ctx.cr0.eq) goto loc_826A32B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817280
	ctx.lr = 0x826A31E8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,1744
	ctx.r30.s64 = ctx.r31.s64 + 1744;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// bl 0x826a2a40
	ctx.lr = 0x826A3210;
	sub_826A2A40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x824f97d8
	ctx.lr = 0x826A3220;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82817f30
	ctx.lr = 0x826A322C;
	sub_82817F30(ctx, base);
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x824f97d8
	ctx.lr = 0x826A3238;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82817f30
	ctx.lr = 0x826A3244;
	sub_82817F30(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cbe0
	ctx.lr = 0x826A3258;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817b48
	ctx.lr = 0x826A3264;
	sub_82817B48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r10.u32);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// lwz r7,1928(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// lwz r10,1924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,1920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r7,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r7.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r10,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r10.u32);
	// stw r6,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r6.u32);
	// stw r9,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r9.u32);
	// stw r8,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r8.u32);
loc_826A32B4:
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817bb8
	ctx.lr = 0x826A32C0;
	sub_82817BB8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f31,1700(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f12,1812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,1708
	ctx.r30.s64 = ctx.r31.s64 + 1708;
	// lfs f13,1808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f11,1804(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stw r9,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r9.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r9.u32);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
	// stw r10,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r10.u32);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// lfs f13,1708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f0,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x826a33bc
	if (!ctx.cr6.lt) goto loc_826A33BC;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x826A3380;
	sub_82332E18(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r10.u32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
loc_826A33BC:
	// lfs f13,1948(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1956(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r10.u32);
	// stw r11,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a6175c
	ctx.lr = 0x826A3410;
	__restfpr_14(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3418"))) PPC_WEAK_FUNC(sub_826A3418);
PPC_FUNC_IMPL(__imp__sub_826A3418) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r31,1720
	ctx.r4.s64 = ctx.r31.s64 + 1720;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,1708(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,1712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f31,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r31,1732
	ctx.r11.s64 = ctx.r31.s64 + 1732;
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// stw r10,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r10.u32);
	// stw r9,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x826A34A8;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817f30
	ctx.lr = 0x826A34B4;
	sub_82817F30(ctx, base);
	// addi r4,r31,1744
	ctx.r4.s64 = ctx.r31.s64 + 1744;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824f97d8
	ctx.lr = 0x826A34C0;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x826A34CC;
	sub_82817F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cbe0
	ctx.lr = 0x826A34E0;
	sub_8269CBE0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817b48
	ctx.lr = 0x826A34EC;
	sub_82817B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// lfs f13,1956(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,1732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f12,1948(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,1748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// lwz r9,1752(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,1736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r7.u32);
	// stw r6,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r6.u32);
	// stw r8,1916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1916, ctx.r8.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
	// stw r9,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r9.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3580"))) PPC_WEAK_FUNC(sub_826A3580);
PPC_FUNC_IMPL(__imp__sub_826A3580) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f13,1956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,1856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// lfs f0,1812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,1860(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,1804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,1808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,1952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f31,572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,1968(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1968, ctx.r10.u32);
	// stw r9,1960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1960, ctx.r9.u32);
	// stw r8,1964(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1964, ctx.r8.u32);
	// bl 0x82438130
	ctx.lr = 0x826A3604;
	sub_82438130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a3690
	if (ctx.cr0.eq) goto loc_826A3690;
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a362c
	if (ctx.cr0.eq) goto loc_826A362C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826a362c
	if (ctx.cr6.eq) goto loc_826A362C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826a3630
	goto loc_826A3630;
loc_826A362C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A3630:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826a3678
	if (ctx.cr6.eq) goto loc_826A3678;
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
	// beq cr6,0x826a3678
	if (ctx.cr6.eq) goto loc_826A3678;
	// bl 0x82396c60
	ctx.lr = 0x826A365C;
	sub_82396C60(ctx, base);
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
	ctx.lr = 0x826A3674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826a367c
	goto loc_826A367C;
loc_826A3678:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A367C:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a3700
	if (!ctx.cr6.eq) goto loc_826A3700;
loc_826A3690:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a36b4
	if (!ctx.cr6.lt) goto loc_826A36B4;
	// fabs f13,f30
	ctx.f13.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a3700
	if (ctx.cr6.lt) goto loc_826A3700;
loc_826A36B4:
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x826a36e0
	if (!ctx.cr6.lt) goto loc_826A36E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x826a36f4
	goto loc_826A36F4;
loc_826A36E0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
loc_826A36F4:
	// stfs f0,1792(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1792, temp.u32);
	// stfs f13,1796(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1796, temp.u32);
	// b 0x826a372c
	goto loc_826A372C;
loc_826A3700:
	// addi r4,r30,1888
	ctx.r4.s64 = ctx.r30.s64 + 1888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817bb8
	ctx.lr = 0x826A370C;
	sub_82817BB8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,1792(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1792, temp.u32);
	// addi r3,r30,1792
	ctx.r3.s64 = ctx.r30.s64 + 1792;
	// stfs f13,1796(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1796, temp.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x826A372C;
	sub_82332E18(ctx, base);
loc_826A372C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_826A3750"))) PPC_WEAK_FUNC(sub_826A3750);
PPC_FUNC_IMPL(__imp__sub_826A3750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A3758;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61740
	ctx.lr = 0x826A3760;
	__savefpr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,1876
	ctx.r29.s64 = ctx.r30.s64 + 1876;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f0,1804(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	ctx.f0.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f13,1948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,1952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f12,f11
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,1956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1956);
	ctx.f9.f64 = double(temp.f32);
	// stw r31,1896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1896, ctx.r31.u32);
	// fadds f26,f10,f9
	ctx.f26.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f27,84(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,1928(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1928, ctx.r31.u32);
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826A37B8;
	sub_82A4EA80(ctx, base);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// addi r5,r30,1908
	ctx.r5.s64 = ctx.r30.s64 + 1908;
	// addi r11,r28,-27328
	ctx.r11.s64 = ctx.r28.s64 + -27328;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f1,-13484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82819320
	ctx.lr = 0x826A37DC;
	sub_82819320(ctx, base);
	// lfs f30,-27328(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27328);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,1896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1896, ctx.r31.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// lfs f29,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,8324
	ctx.r8.s64 = 8324;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x826A3874;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a3944
	if (!ctx.cr0.eq) goto loc_826A3944;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r8,8324
	ctx.r8.s64 = 8324;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x826A38F4;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a3944
	if (!ctx.cr0.eq) goto loc_826A3944;
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x826a3944
	if (!ctx.cr6.gt) goto loc_826A3944;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_826A3944:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a6178c
	ctx.lr = 0x826A3954;
	__restfpr_26(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3958"))) PPC_WEAK_FUNC(sub_826A3958);
PPC_FUNC_IMPL(__imp__sub_826A3958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A3960;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61730
	ctx.lr = 0x826A3968;
	__savefpr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r3,r31,1984
	ctx.r3.s64 = ctx.r31.s64 + 1984;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// stw r29,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r29.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826a39a8
	if (ctx.cr6.eq) goto loc_826A39A8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x826A39A8;
	sub_82332C38(ctx, base);
loc_826A39A8:
	// lwz r3,1860(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	// bl 0x82438130
	ctx.lr = 0x826A39B0;
	sub_82438130(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-27328
	ctx.r28.s64 = ctx.r11.s64 + -27328;
	// beq 0x826a39e4
	if (ctx.cr0.eq) goto loc_826A39E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f1,15904(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15904);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r31,1908
	ctx.r5.s64 = ctx.r31.s64 + 1908;
	// addi r6,r10,-15728
	ctx.r6.s64 = ctx.r10.s64 + -15728;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A39E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A39E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826a3580
	ctx.lr = 0x826A39F0;
	sub_826A3580(ctx, base);
	// lwz r11,1940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826a3a6c
	if (ctx.cr6.eq) goto loc_826A3A6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826a3a5c
	if (ctx.cr6.eq) goto loc_826A3A5C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826a3a4c
	if (ctx.cr6.eq) goto loc_826A3A4C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826a3a3c
	if (ctx.cr6.eq) goto loc_826A3A3C;
	// lwz r30,1848(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// rlwinm. r11,r30,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a3a78
	if (ctx.cr0.eq) goto loc_826A3A78;
	// addi r4,r31,1876
	ctx.r4.s64 = ctx.r31.s64 + 1876;
	// addi r3,r31,1908
	ctx.r3.s64 = ctx.r31.s64 + 1908;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826A3A30;
	sub_82A4EA80(ctx, base);
	// rlwinm r11,r30,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// b 0x826a3a78
	goto loc_826A3A78;
loc_826A3A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826a3418
	ctx.lr = 0x826A3A48;
	sub_826A3418(ctx, base);
	// b 0x826a3a78
	goto loc_826A3A78;
loc_826A3A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826a2b18
	ctx.lr = 0x826A3A58;
	sub_826A2B18(ctx, base);
	// b 0x826a3a78
	goto loc_826A3A78;
loc_826A3A5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826a2b18
	ctx.lr = 0x826A3A68;
	sub_826A2B18(ctx, base);
	// b 0x826a3a78
	goto loc_826A3A78;
loc_826A3A6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x826a2cb8
	ctx.lr = 0x826A3A78;
	sub_826A2CB8(ctx, base);
loc_826A3A78:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-32760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1932, temp.u32);
	// bl 0x826a28c8
	ctx.lr = 0x826A3A90;
	sub_826A28C8(ctx, base);
	// lfs f0,1956(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a3aa4
	if (!ctx.cr6.lt) goto loc_826A3AA4;
	// stfs f0,1916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1916, temp.u32);
loc_826A3AA4:
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a3ab8
	if (ctx.cr0.eq) goto loc_826A3AB8;
	// lwz r10,2056(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// stw r10,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r10.u32);
loc_826A3AB8:
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a3ac8
	if (ctx.cr0.eq) goto loc_826A3AC8;
	// lwz r10,2060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// stw r10,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r10.u32);
loc_826A3AC8:
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a3ad8
	if (ctx.cr0.eq) goto loc_826A3AD8;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
loc_826A3AD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-13484(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -13484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a3750
	ctx.lr = 0x826A3AE4;
	sub_826A3750(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a3ba8
	if (!ctx.cr0.eq) goto loc_826A3BA8;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r31,1876
	ctx.r7.s64 = ctx.r31.s64 + 1876;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r6,r31,1948
	ctx.r6.s64 = ctx.r31.s64 + 1948;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// bl 0x82825330
	ctx.lr = 0x826A3B84;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a3ba8
	if (!ctx.cr0.eq) goto loc_826A3BA8;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a3ba8
	if (ctx.cr6.eq) goto loc_826A3BA8;
	// lwz r10,1856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826a3ba8
	if (ctx.cr6.eq) goto loc_826A3BA8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_826A3BA8:
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// addi r30,r31,1876
	ctx.r30.s64 = ctx.r31.s64 + 1876;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// ld r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 460);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828191b8
	ctx.lr = 0x826A3BD0;
	sub_828191B8(ctx, base);
	// lwz r11,1856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lfs f9,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,-28800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28800);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,-28788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f28,f13,f10
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f26,f12,f10
	ctx.f26.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f24,f12,f0
	ctx.f24.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f25,f13,f0
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f23,f9,f28
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f8,f28
	ctx.f22.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f9.f64));
	// lfs f10,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f28,f7,f28
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f8,f26,f8
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fmuls f7,f26,f7
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f7.f64));
	// fmadds f26,f6,f27,f23
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f27.f64 + ctx.f23.f64));
	// fmadds f23,f5,f27,f22
	ctx.f23.f64 = double(float(ctx.f5.f64 * ctx.f27.f64 + ctx.f22.f64));
	// fmadds f9,f6,f24,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f9.f64));
	// fmadds f6,f4,f27,f28
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f27.f64 + ctx.f28.f64));
	// fmadds f8,f24,f5,f8
	ctx.f8.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f7,f4,f24,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f24.f64 + ctx.f7.f64));
	// fmadds f5,f3,f25,f26
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f25.f64 + ctx.f26.f64));
	// fmadds f4,f2,f25,f23
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f25.f64 + ctx.f23.f64));
	// fmadds f9,f0,f3,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f6,f1,f25,f6
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f25.f64 + ctx.f6.f64));
	// fmadds f8,f0,f2,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f0,f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fadds f7,f5,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f5,f4,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f13,f31,f7
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fdivs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x826a3ce4
	if (ctx.cr6.lt) goto loc_826A3CE4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826a3ce4
	if (ctx.cr6.gt) goto loc_826A3CE4;
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x826a3ce4
	if (ctx.cr6.lt) goto loc_826A3CE4;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x826a3d08
	if (!ctx.cr6.gt) goto loc_826A3D08;
loc_826A3CE4:
	// fcmpu cr6,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x826a3d04
	if (ctx.cr6.lt) goto loc_826A3D04;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x826a3d04
	if (ctx.cr6.gt) goto loc_826A3D04;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x826a3d04
	if (ctx.cr6.lt) goto loc_826A3D04;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x826a3d08
	if (!ctx.cr6.gt) goto loc_826A3D08;
loc_826A3D04:
	// li r27,1
	ctx.r27.s64 = 1;
loc_826A3D08:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x826a3d3c
	if (ctx.cr6.eq) goto loc_826A3D3C;
	// lfs f0,2032(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f13,2036(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,2032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826a3d40
	if (ctx.cr6.lt) goto loc_826A3D40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A3D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A3D3C:
	// stfs f30,2032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2032, temp.u32);
loc_826A3D40:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x826a3d78
	if (ctx.cr6.eq) goto loc_826A3D78;
	// lfs f0,2040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f13,2044(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,2040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826a3d7c
	if (ctx.cr6.lt) goto loc_826A3D7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A3D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826a3d7c
	goto loc_826A3D7C;
loc_826A3D78:
	// stfs f30,2040(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2040, temp.u32);
loc_826A3D7C:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826A3D8C;
	sub_82A4EA80(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a6177c
	ctx.lr = 0x826A3D98;
	__restfpr_22(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3DA0"))) PPC_WEAK_FUNC(sub_826A3DA0);
PPC_FUNC_IMPL(__imp__sub_826A3DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826A3DA8;
	__savegprlr_22(ctx, base);
	// lwz r11,1940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1940);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826a3e90
	if (ctx.cr6.eq) goto loc_826A3E90;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826a3f80
	if (!ctx.cr6.eq) goto loc_826A3F80;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f12,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16684);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,30280(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30280);
	ctx.f11.f64 = double(temp.f32);
	// stb r10,1944(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1944, ctx.r10.u8);
	// stfs f12,-128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r10,-128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stfs f12,-124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r9,-124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r8,-120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// lfs f10,23664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23664);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,17056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17056);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,-128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r7,-128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stfs f11,-124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r6,-124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r5,-120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// stfs f10,-128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r4,-128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stfs f10,-124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r31,-124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r30,-120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// stfs f9,-128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r29,-128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stfs f9,-124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r28,-124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r27,-120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// lfs f8,17052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17052);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r11,-104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// stfs f8,-128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r26,-128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// stfs f8,-124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r25,-124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// stfs f0,-120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// lwz r24,-120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lwz r23,-112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lwz r22,-108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// b 0x826a3f38
	goto loc_826A3F38;
loc_826A3E90:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,17052(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17052);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lwz r9,-108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// lfs f0,17056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17056);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lwz r6,-108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r8,-104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r31,-108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stfs f0,-108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lwz r28,-108(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f12,-112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lwz r10,-112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lwz r7,-112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r5,-104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// stfs f12,-112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r4,-112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r30,-104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r29,-112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r27,-104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// stfs f13,-120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// stfs f12,-112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lwz r11,-120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// lwz r26,-112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// lwz r25,-108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stfs f0,-124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// lwz r24,-104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// lwz r23,-128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// lwz r22,-124(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
loc_826A3F38:
	// stw r24,1692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1692, ctx.r24.u32);
	// stw r25,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r25.u32);
	// stw r26,1684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1684, ctx.r26.u32);
	// stw r27,1680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1680, ctx.r27.u32);
	// stw r28,1676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1676, ctx.r28.u32);
	// stw r29,1672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1672, ctx.r29.u32);
	// stw r30,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r30.u32);
	// stw r31,1660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1660, ctx.r31.u32);
	// stw r4,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r4.u32);
	// stw r5,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r5.u32);
	// stw r6,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r6.u32);
	// stw r7,1644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1644, ctx.r7.u32);
	// stw r8,1636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1636, ctx.r8.u32);
	// stw r9,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r9.u32);
	// stw r10,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r10.u32);
	// stw r11,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r11.u32);
	// stw r23,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r23.u32);
	// stw r22,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r22.u32);
loc_826A3F80:
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3F88"))) PPC_WEAK_FUNC(sub_826A3F88);
PPC_FUNC_IMPL(__imp__sub_826A3F88) {
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
	// lbz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1944);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826a4038
	if (ctx.cr6.eq) goto loc_826A4038;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826a4004
	if (ctx.cr6.eq) goto loc_826A4004;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826a4098
	if (!ctx.cr6.eq) goto loc_826A4098;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r9,-32760
	ctx.r9.s64 = ctx.r9.s64 + -32760;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-27804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
loc_826A3FE8:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,1700(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// stw r7,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r7.u32);
	// stw r10,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r10.u32);
	// b 0x826a4090
	goto loc_826A4090;
loc_826A4004:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r9,r9,-32760
	ctx.r9.s64 = ctx.r9.s64 + -32760;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,16816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// b 0x826a3fe8
	goto loc_826A3FE8;
loc_826A4038:
	// lwz r3,1856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	// bl 0x82895f78
	ctx.lr = 0x826A4040;
	sub_82895F78(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x826a405c
	if (ctx.cr0.eq) goto loc_826A405C;
	// lfs f13,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// b 0x826a4060
	goto loc_826A4060;
loc_826A405C:
	// stfs f0,1700(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
loc_826A4060:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r10,-32760
	ctx.r8.s64 = ctx.r10.s64 + -32760;
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lfs f0,-32760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32760);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1704(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
loc_826A4090:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
loc_826A4098:
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

__attribute__((alias("__imp__sub_826A40B0"))) PPC_WEAK_FUNC(sub_826A40B0);
PPC_FUNC_IMPL(__imp__sub_826A40B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x826A40B8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61734
	ctx.lr = 0x826A40C0;
	__savefpr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r30,r11,-27300
	ctx.r30.s64 = ctx.r11.s64 + -27300;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f13,16540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// li r5,44
	ctx.r5.s64 = 44;
	// lfs f0,-28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// bl 0x82a455d0
	ctx.lr = 0x826A4104;
	sub_82A455D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r4,r27,12
	ctx.r4.s64 = ctx.r27.s64 + 12;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f28,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,1864(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1864);
	// lwz r22,1408(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stfs f28,0(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826A412C;
	sub_82817BB8(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a4300
	if (!ctx.cr6.gt) goto loc_826A4300;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f29,-7956(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -7956);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f26,-17840(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -17840);
	ctx.f26.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f25,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f24,-32460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32460);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,17952(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17952);
	ctx.f23.f64 = double(temp.f32);
	// lfs f30,23664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23664);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,16668(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16668);
	ctx.f27.f64 = double(temp.f32);
loc_826A416C:
	// lwz r3,1856(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1856);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r30,r23,r11
	ctx.r30.u64 = ctx.r23.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,2360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A4190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x826a42ec
	if (!ctx.cr6.gt) goto loc_826A42EC;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82648440
	ctx.lr = 0x826A41B0;
	sub_82648440(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826A41D8;
	sub_82817BB8(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1948(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1948);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,1952(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1952);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,1956(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1956);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
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
	// bl 0x82332e18
	ctx.lr = 0x826A4214;
	sub_82332E18(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f12,f9,f12,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x826a42ec
	if (ctx.cr6.lt) goto loc_826A42EC;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f28,112(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f11,f0,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bgt cr6,0x826a4264
	if (ctx.cr6.gt) goto loc_826A4264;
	// fmuls f31,f31,f26
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// li r25,1
	ctx.r25.s64 = 1;
loc_826A4264:
	// lfs f12,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f11,f28,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x826a4288
	if (ctx.cr6.lt) goto loc_826A4288;
	// fmuls f31,f31,f25
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f25.f64));
loc_826A4288:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r10,62805
	ctx.r10.u64 = ctx.r10.u64 | 62805;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826a42b8
	if (!ctx.cr6.lt) goto loc_826A42B8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bgt cr6,0x826a42bc
	if (ctx.cr6.gt) goto loc_826A42BC;
loc_826A42B8:
	// fmuls f31,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
loc_826A42BC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x826a42ec
	if (!ctx.cr6.gt) goto loc_826A42EC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwimi r11,r25,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x826A42EC;
	sub_82A4EA80(ctx, base);
loc_826A42EC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a416c
	if (ctx.cr6.lt) goto loc_826A416C;
loc_826A4300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61780
	ctx.lr = 0x826A4310;
	__restfpr_23(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4318"))) PPC_WEAK_FUNC(sub_826A4318);
PPC_FUNC_IMPL(__imp__sub_826A4318) {
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
	// li r3,2160
	ctx.r3.s64 = 2160;
	// bl 0x82833108
	ctx.lr = 0x826A432C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a433c
	if (ctx.cr0.eq) goto loc_826A433C;
	// bl 0x826a1b60
	ctx.lr = 0x826A4338;
	sub_826A1B60(ctx, base);
	// b 0x826a4340
	goto loc_826A4340;
loc_826A433C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4340:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4350"))) PPC_WEAK_FUNC(sub_826A4350);
PPC_FUNC_IMPL(__imp__sub_826A4350) {
	PPC_FUNC_PROLOGUE();
	// li r3,2160
	ctx.r3.s64 = 2160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4358"))) PPC_WEAK_FUNC(sub_826A4358);
PPC_FUNC_IMPL(__imp__sub_826A4358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4398
	if (!ctx.cr0.eq) goto loc_826A4398;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24328, ctx.r11.u32);
	// addi r3,r9,25436
	ctx.r3.s64 = ctx.r9.s64 + 25436;
	// bl 0x82816528
	ctx.lr = 0x826A4390;
	sub_82816528(ctx, base);
	// stw r3,24324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24324, ctx.r3.u32);
	// b 0x826a439c
	goto loc_826A439C;
loc_826A4398:
	// lwz r3,24324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24324);
loc_826A439C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A43B0"))) PPC_WEAK_FUNC(sub_826A43B0);
PPC_FUNC_IMPL(__imp__sub_826A43B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4400
	ctx.lr = 0x826A43D0;
	sub_826A4400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A43E4;
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

__attribute__((alias("__imp__sub_826A4400"))) PPC_WEAK_FUNC(sub_826A4400);
PPC_FUNC_IMPL(__imp__sub_826A4400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13636
	ctx.r31.s64 = ctx.r11.s64 + 13636;
	// lwz r11,13632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4448
	if (!ctx.cr0.eq) goto loc_826A4448;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26676
	ctx.r9.s64 = ctx.r9.s64 + 26676;
	// stw r11,13632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13632, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27832
	ctx.r3.s64 = ctx.r11.s64 + 27832;
	// bl 0x82a4c758
	ctx.lr = 0x826A4448;
	sub_82A4C758(ctx, base);
loc_826A4448:
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

__attribute__((alias("__imp__sub_826A4460"))) PPC_WEAK_FUNC(sub_826A4460);
PPC_FUNC_IMPL(__imp__sub_826A4460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a16c8
	sub_826A16C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4468"))) PPC_WEAK_FUNC(sub_826A4468);
PPC_FUNC_IMPL(__imp__sub_826A4468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826a1af0
	sub_826A1AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4470"))) PPC_WEAK_FUNC(sub_826A4470);
PPC_FUNC_IMPL(__imp__sub_826A4470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a1af0
	sub_826A1AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4478"))) PPC_WEAK_FUNC(sub_826A4478);
PPC_FUNC_IMPL(__imp__sub_826A4478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18488
	ctx.r3.s64 = ctx.r11.s64 + 18488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4488"))) PPC_WEAK_FUNC(sub_826A4488);
PPC_FUNC_IMPL(__imp__sub_826A4488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a44c0
	if (ctx.cr6.eq) goto loc_826A44C0;
	// bl 0x8247a068
	ctx.lr = 0x826A44B0;
	sub_8247A068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a44c0
	if (!ctx.cr6.eq) goto loc_826A44C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a44cc
	goto loc_826A44CC;
loc_826A44C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x826A44CC;
	sub_82370018(ctx, base);
loc_826A44CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A44E8"))) PPC_WEAK_FUNC(sub_826A44E8);
PPC_FUNC_IMPL(__imp__sub_826A44E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247a068
	sub_8247A068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A44F0"))) PPC_WEAK_FUNC(sub_826A44F0);
PPC_FUNC_IMPL(__imp__sub_826A44F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x826A450C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a4520
	if (ctx.cr0.eq) goto loc_826A4520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a4598
	ctx.lr = 0x826A451C;
	sub_826A4598(ctx, base);
	// b 0x826a4524
	goto loc_826A4524;
loc_826A4520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4538"))) PPC_WEAK_FUNC(sub_826A4538);
PPC_FUNC_IMPL(__imp__sub_826A4538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a068
	ctx.lr = 0x826A4558;
	sub_8247A068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a4568
	if (!ctx.cr6.eq) goto loc_826A4568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a4580
	goto loc_826A4580;
loc_826A4568:
	// bl 0x823bd878
	ctx.lr = 0x826A456C;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a4580
	if (ctx.cr6.eq) goto loc_826A4580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x826A4580;
	sub_8236FC08(ctx, base);
loc_826A4580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4598"))) PPC_WEAK_FUNC(sub_826A4598);
PPC_FUNC_IMPL(__imp__sub_826A4598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82370118
	ctx.lr = 0x826A45B8;
	sub_82370118(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,26784
	ctx.r11.s64 = ctx.r11.s64 + 26784;
	// addi r10,r10,27840
	ctx.r10.s64 = ctx.r10.s64 + 27840;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4650"))) PPC_WEAK_FUNC(sub_826A4650);
PPC_FUNC_IMPL(__imp__sub_826A4650) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,26696
	ctx.r3.s64 = ctx.r11.s64 + 26696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4660"))) PPC_WEAK_FUNC(sub_826A4660);
PPC_FUNC_IMPL(__imp__sub_826A4660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a4698
	if (ctx.cr6.eq) goto loc_826A4698;
	// bl 0x826a4b78
	ctx.lr = 0x826A4688;
	sub_826A4B78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a4698
	if (!ctx.cr6.eq) goto loc_826A4698;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a46a4
	goto loc_826A46A4;
loc_826A4698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826A46A4;
	sub_82333C70(ctx, base);
loc_826A46A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A46C0"))) PPC_WEAK_FUNC(sub_826A46C0);
PPC_FUNC_IMPL(__imp__sub_826A46C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a4b78
	sub_826A4B78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A46C8"))) PPC_WEAK_FUNC(sub_826A46C8);
PPC_FUNC_IMPL(__imp__sub_826A46C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A46E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a4744
	if (ctx.cr0.eq) goto loc_826A4744;
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
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,27896
	ctx.r9.s64 = ctx.r9.s64 + 27896;
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
	// b 0x826a4748
	goto loc_826A4748;
loc_826A4744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4760"))) PPC_WEAK_FUNC(sub_826A4760);
PPC_FUNC_IMPL(__imp__sub_826A4760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4b78
	ctx.lr = 0x826A4780;
	sub_826A4B78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a4794
	if (ctx.cr6.eq) goto loc_826A4794;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826A4794;
	sub_82333B08(ctx, base);
loc_826A4794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A47B0"))) PPC_WEAK_FUNC(sub_826A47B0);
PPC_FUNC_IMPL(__imp__sub_826A47B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,26740
	ctx.r3.s64 = ctx.r11.s64 + 26740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A47C0"))) PPC_WEAK_FUNC(sub_826A47C0);
PPC_FUNC_IMPL(__imp__sub_826A47C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a47f8
	if (ctx.cr6.eq) goto loc_826A47F8;
	// bl 0x826a4c80
	ctx.lr = 0x826A47E8;
	sub_826A4C80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a47f8
	if (!ctx.cr6.eq) goto loc_826A47F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a4804
	goto loc_826A4804;
loc_826A47F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826A4804;
	sub_82333C70(ctx, base);
loc_826A4804:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4820"))) PPC_WEAK_FUNC(sub_826A4820);
PPC_FUNC_IMPL(__imp__sub_826A4820) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a4c80
	sub_826A4C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4828"))) PPC_WEAK_FUNC(sub_826A4828);
PPC_FUNC_IMPL(__imp__sub_826A4828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A4844;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a48a4
	if (ctx.cr0.eq) goto loc_826A48A4;
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
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,28000
	ctx.r9.s64 = ctx.r9.s64 + 28000;
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
	// b 0x826a48a8
	goto loc_826A48A8;
loc_826A48A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A48A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A48C0"))) PPC_WEAK_FUNC(sub_826A48C0);
PPC_FUNC_IMPL(__imp__sub_826A48C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4c80
	ctx.lr = 0x826A48E0;
	sub_826A4C80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a48f4
	if (ctx.cr6.eq) goto loc_826A48F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826A48F4;
	sub_82333B08(ctx, base);
loc_826A48F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4910"))) PPC_WEAK_FUNC(sub_826A4910);
PPC_FUNC_IMPL(__imp__sub_826A4910) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a6d60
	sub_828A6D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4918"))) PPC_WEAK_FUNC(sub_826A4918);
PPC_FUNC_IMPL(__imp__sub_826A4918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829bcd88
	ctx.lr = 0x826A4938;
	sub_829BCD88(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r10,1716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// rlwinm r10,r10,31,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// rlwinm r10,r10,29,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xFF;
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A49B8"))) PPC_WEAK_FUNC(sub_826A49B8);
PPC_FUNC_IMPL(__imp__sub_826A49B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A49C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a7700
	ctx.lr = 0x826A49D0;
	sub_828A7700(ctx, base);
	// lwz r28,1608(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826a4a2c
	if (ctx.cr6.eq) goto loc_826A4A2C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826A49E4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// beq 0x826a4a1c
	if (ctx.cr0.eq) goto loc_826A4A1C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826A4A04;
	sub_82333A80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,28000
	ctx.r11.s64 = ctx.r11.s64 + 28000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826a4a20
	goto loc_826A4A20;
loc_826A4A1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A4A20:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826A4A2C;
	sub_82833A30(ctx, base);
loc_826A4A2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4A38"))) PPC_WEAK_FUNC(sub_826A4A38);
PPC_FUNC_IMPL(__imp__sub_826A4A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A4A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x826A4A50;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a4ac4
	if (ctx.cr0.eq) goto loc_826A4AC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a4ac0
	if (ctx.cr6.eq) goto loc_826A4AC0;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82411b98
	ctx.lr = 0x826A4A68;
	sub_82411B98(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826a4ac0
	if (ctx.cr0.eq) goto loc_826A4AC0;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x826A4A78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// beq 0x826a4ab0
	if (ctx.cr0.eq) goto loc_826A4AB0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826A4A98;
	sub_82333A80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,27896
	ctx.r11.s64 = ctx.r11.s64 + 27896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826a4ab4
	goto loc_826A4AB4;
loc_826A4AB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A4AB4:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826A4AC0;
	sub_82833A30(ctx, base);
loc_826A4AC0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826A4AC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4AD0"))) PPC_WEAK_FUNC(sub_826A4AD0);
PPC_FUNC_IMPL(__imp__sub_826A4AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4b10
	if (!ctx.cr0.eq) goto loc_826A4B10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24320, ctx.r11.u32);
	// addi r3,r9,26696
	ctx.r3.s64 = ctx.r9.s64 + 26696;
	// bl 0x82816528
	ctx.lr = 0x826A4B08;
	sub_82816528(ctx, base);
	// stw r3,24316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24316, ctx.r3.u32);
	// b 0x826a4b14
	goto loc_826A4B14;
loc_826A4B10:
	// lwz r3,24316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24316);
loc_826A4B14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4B28"))) PPC_WEAK_FUNC(sub_826A4B28);
PPC_FUNC_IMPL(__imp__sub_826A4B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4b78
	ctx.lr = 0x826A4B48;
	sub_826A4B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A4B5C;
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

__attribute__((alias("__imp__sub_826A4B78"))) PPC_WEAK_FUNC(sub_826A4B78);
PPC_FUNC_IMPL(__imp__sub_826A4B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13644
	ctx.r31.s64 = ctx.r11.s64 + 13644;
	// lwz r11,13640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13640);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4bc0
	if (!ctx.cr0.eq) goto loc_826A4BC0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27976
	ctx.r9.s64 = ctx.r9.s64 + 27976;
	// stw r11,13640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13640, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27880
	ctx.r3.s64 = ctx.r11.s64 + 27880;
	// bl 0x82a4c758
	ctx.lr = 0x826A4BC0;
	sub_82A4C758(ctx, base);
loc_826A4BC0:
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

__attribute__((alias("__imp__sub_826A4BD8"))) PPC_WEAK_FUNC(sub_826A4BD8);
PPC_FUNC_IMPL(__imp__sub_826A4BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4c18
	if (!ctx.cr0.eq) goto loc_826A4C18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24312, ctx.r11.u32);
	// addi r3,r9,26740
	ctx.r3.s64 = ctx.r9.s64 + 26740;
	// bl 0x82816528
	ctx.lr = 0x826A4C10;
	sub_82816528(ctx, base);
	// stw r3,24308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24308, ctx.r3.u32);
	// b 0x826a4c1c
	goto loc_826A4C1C;
loc_826A4C18:
	// lwz r3,24308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24308);
loc_826A4C1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4C30"))) PPC_WEAK_FUNC(sub_826A4C30);
PPC_FUNC_IMPL(__imp__sub_826A4C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a4c80
	ctx.lr = 0x826A4C50;
	sub_826A4C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A4C64;
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

__attribute__((alias("__imp__sub_826A4C80"))) PPC_WEAK_FUNC(sub_826A4C80);
PPC_FUNC_IMPL(__imp__sub_826A4C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13652
	ctx.r31.s64 = ctx.r11.s64 + 13652;
	// lwz r11,13648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a4cc8
	if (!ctx.cr0.eq) goto loc_826A4CC8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28080
	ctx.r9.s64 = ctx.r9.s64 + 28080;
	// stw r11,13648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13648, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27856
	ctx.r3.s64 = ctx.r11.s64 + 27856;
	// bl 0x82a4c758
	ctx.lr = 0x826A4CC8;
	sub_82A4C758(ctx, base);
loc_826A4CC8:
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

__attribute__((alias("__imp__sub_826A4CE0"))) PPC_WEAK_FUNC(sub_826A4CE0);
PPC_FUNC_IMPL(__imp__sub_826A4CE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a4538
	sub_826A4538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4CE8"))) PPC_WEAK_FUNC(sub_826A4CE8);
PPC_FUNC_IMPL(__imp__sub_826A4CE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,21392
	ctx.r3.s64 = ctx.r11.s64 + 21392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4CF8"))) PPC_WEAK_FUNC(sub_826A4CF8);
PPC_FUNC_IMPL(__imp__sub_826A4CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a4d30
	if (ctx.cr6.eq) goto loc_826A4D30;
	// bl 0x824844a0
	ctx.lr = 0x826A4D20;
	sub_824844A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a4d30
	if (!ctx.cr6.eq) goto loc_826A4D30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a4d3c
	goto loc_826A4D3C;
loc_826A4D30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x826A4D3C;
	sub_82370018(ctx, base);
loc_826A4D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4D58"))) PPC_WEAK_FUNC(sub_826A4D58);
PPC_FUNC_IMPL(__imp__sub_826A4D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x824844a0
	sub_824844A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4D60"))) PPC_WEAK_FUNC(sub_826A4D60);
PPC_FUNC_IMPL(__imp__sub_826A4D60) {
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
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x826A4D80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a4e00
	if (ctx.cr0.eq) goto loc_826A4E00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x826A4D94;
	sub_82370118(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,28200
	ctx.r11.s64 = ctx.r11.s64 + 28200;
	// addi r10,r10,29256
	ctx.r10.s64 = ctx.r10.s64 + 29256;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lfs f0,1716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
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
	// lwz r11,1732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// lwz r11,1736(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// lwz r11,1740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1740);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// b 0x826a4e04
	goto loc_826A4E04;
loc_826A4E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4E04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4E20"))) PPC_WEAK_FUNC(sub_826A4E20);
PPC_FUNC_IMPL(__imp__sub_826A4E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824844a0
	ctx.lr = 0x826A4E40;
	sub_824844A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a4e50
	if (!ctx.cr6.eq) goto loc_826A4E50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a4e68
	goto loc_826A4E68;
loc_826A4E50:
	// bl 0x823bd878
	ctx.lr = 0x826A4E54;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a4e68
	if (ctx.cr6.eq) goto loc_826A4E68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x826A4E68;
	sub_8236FC08(ctx, base);
loc_826A4E68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4E80"))) PPC_WEAK_FUNC(sub_826A4E80);
PPC_FUNC_IMPL(__imp__sub_826A4E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,28100
	ctx.r3.s64 = ctx.r11.s64 + 28100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4E90"))) PPC_WEAK_FUNC(sub_826A4E90);
PPC_FUNC_IMPL(__imp__sub_826A4E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a4ec8
	if (ctx.cr6.eq) goto loc_826A4EC8;
	// bl 0x826a5468
	ctx.lr = 0x826A4EB8;
	sub_826A5468(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a4ec8
	if (!ctx.cr6.eq) goto loc_826A4EC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a4ed4
	goto loc_826A4ED4;
loc_826A4EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826A4ED4;
	sub_82333C70(ctx, base);
loc_826A4ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4EF0"))) PPC_WEAK_FUNC(sub_826A4EF0);
PPC_FUNC_IMPL(__imp__sub_826A4EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a5468
	sub_826A5468(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4EF8"))) PPC_WEAK_FUNC(sub_826A4EF8);
PPC_FUNC_IMPL(__imp__sub_826A4EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A4F14;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a4f6c
	if (ctx.cr0.eq) goto loc_826A4F6C;
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
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,29336
	ctx.r9.s64 = ctx.r9.s64 + 29336;
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
	// b 0x826a4f70
	goto loc_826A4F70;
loc_826A4F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4F70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4F88"))) PPC_WEAK_FUNC(sub_826A4F88);
PPC_FUNC_IMPL(__imp__sub_826A4F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a5468
	ctx.lr = 0x826A4FA8;
	sub_826A5468(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a4fbc
	if (ctx.cr6.eq) goto loc_826A4FBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826A4FBC;
	sub_82333B08(ctx, base);
loc_826A4FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4FD8"))) PPC_WEAK_FUNC(sub_826A4FD8);
PPC_FUNC_IMPL(__imp__sub_826A4FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,28148
	ctx.r3.s64 = ctx.r11.s64 + 28148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4FE8"))) PPC_WEAK_FUNC(sub_826A4FE8);
PPC_FUNC_IMPL(__imp__sub_826A4FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a5020
	if (ctx.cr6.eq) goto loc_826A5020;
	// bl 0x826a5570
	ctx.lr = 0x826A5010;
	sub_826A5570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a5020
	if (!ctx.cr6.eq) goto loc_826A5020;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a502c
	goto loc_826A502C;
loc_826A5020:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826A502C;
	sub_82333C70(ctx, base);
loc_826A502C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5048"))) PPC_WEAK_FUNC(sub_826A5048);
PPC_FUNC_IMPL(__imp__sub_826A5048) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a5570
	sub_826A5570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A5050"))) PPC_WEAK_FUNC(sub_826A5050);
PPC_FUNC_IMPL(__imp__sub_826A5050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A506C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a50c4
	if (ctx.cr0.eq) goto loc_826A50C4;
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
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,29440
	ctx.r9.s64 = ctx.r9.s64 + 29440;
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
	// b 0x826a50c8
	goto loc_826A50C8;
loc_826A50C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A50C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A50E0"))) PPC_WEAK_FUNC(sub_826A50E0);
PPC_FUNC_IMPL(__imp__sub_826A50E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a5570
	ctx.lr = 0x826A5100;
	sub_826A5570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a5114
	if (ctx.cr6.eq) goto loc_826A5114;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826A5114;
	sub_82333B08(ctx, base);
loc_826A5114:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5130"))) PPC_WEAK_FUNC(sub_826A5130);
PPC_FUNC_IMPL(__imp__sub_826A5130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A5138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x826A514C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x826a5180
	if (ctx.cr0.eq) goto loc_826A5180;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826A516C;
	sub_82333A80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826a5184
	goto loc_826A5184;
loc_826A5180:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A5184:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826A5190;
	sub_82833A30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a74e8
	ctx.lr = 0x826A519C;
	sub_828A74E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A51A8"))) PPC_WEAK_FUNC(sub_826A51A8);
PPC_FUNC_IMPL(__imp__sub_826A51A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A51B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x826A51C4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x826a51f8
	if (ctx.cr0.eq) goto loc_826A51F8;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x826A51E4;
	sub_82333A80(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,29440
	ctx.r11.s64 = ctx.r11.s64 + 29440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826a51fc
	goto loc_826A51FC;
loc_826A51F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A51FC:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826A5208;
	sub_82833A30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a7700
	ctx.lr = 0x826A5214;
	sub_828A7700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A5220"))) PPC_WEAK_FUNC(sub_826A5220);
PPC_FUNC_IMPL(__imp__sub_826A5220) {
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
	// bl 0x828a6d60
	ctx.lr = 0x826A5240;
	sub_828A6D60(ctx, base);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lfs f0,204(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// lfs f0,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// lfs f0,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1724, temp.u32);
	// lfs f0,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1728, temp.u32);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5298"))) PPC_WEAK_FUNC(sub_826A5298);
PPC_FUNC_IMPL(__imp__sub_826A5298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A52A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,10648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a53b4
	if (ctx.cr6.eq) goto loc_826A53B4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x826A52C4;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// beq 0x826a5320
	if (ctx.cr0.eq) goto loc_826A5320;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826a52f4
	if (ctx.cr6.eq) goto loc_826A52F4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826A52E8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826A52EC;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a52f8
	goto loc_826A52F8;
loc_826A52F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A52F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r29,1712(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f1c68
	ctx.lr = 0x826A5308;
	sub_827F1C68(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x826a5324
	goto loc_826A5324;
loc_826A5320:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826A5324:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lfs f0,1728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f12,1720(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,48(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stfs f11,52(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stfs f10,56(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// stfs f13,60(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// beq cr6,0x826a5380
	if (ctx.cr6.eq) goto loc_826A5380;
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stfs f11,44(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826A5380:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,1732(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r10,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r10.u32);
	// stw r9,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r9.u32);
	// lfs f0,1716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lwz r10,1736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// stw r10,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r10.u32);
	// lwz r10,1740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826A53B4;
	sub_82833A30(ctx, base);
loc_826A53B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A53C0"))) PPC_WEAK_FUNC(sub_826A53C0);
PPC_FUNC_IMPL(__imp__sub_826A53C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24288);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a5400
	if (!ctx.cr0.eq) goto loc_826A5400;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24288(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24288, ctx.r11.u32);
	// addi r3,r9,28100
	ctx.r3.s64 = ctx.r9.s64 + 28100;
	// bl 0x82816528
	ctx.lr = 0x826A53F8;
	sub_82816528(ctx, base);
	// stw r3,24284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24284, ctx.r3.u32);
	// b 0x826a5404
	goto loc_826A5404;
loc_826A5400:
	// lwz r3,24284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24284);
loc_826A5404:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5418"))) PPC_WEAK_FUNC(sub_826A5418);
PPC_FUNC_IMPL(__imp__sub_826A5418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a5468
	ctx.lr = 0x826A5438;
	sub_826A5468(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A544C;
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

__attribute__((alias("__imp__sub_826A5468"))) PPC_WEAK_FUNC(sub_826A5468);
PPC_FUNC_IMPL(__imp__sub_826A5468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24296
	ctx.r31.s64 = ctx.r11.s64 + 24296;
	// lwz r11,24304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a54b0
	if (!ctx.cr0.eq) goto loc_826A54B0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29416
	ctx.r9.s64 = ctx.r9.s64 + 29416;
	// stw r11,24304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24304, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27928
	ctx.r3.s64 = ctx.r11.s64 + 27928;
	// bl 0x82a4c758
	ctx.lr = 0x826A54B0;
	sub_82A4C758(ctx, base);
loc_826A54B0:
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

__attribute__((alias("__imp__sub_826A54C8"))) PPC_WEAK_FUNC(sub_826A54C8);
PPC_FUNC_IMPL(__imp__sub_826A54C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a5508
	if (!ctx.cr0.eq) goto loc_826A5508;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24280(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24280, ctx.r11.u32);
	// addi r3,r9,28148
	ctx.r3.s64 = ctx.r9.s64 + 28148;
	// bl 0x82816528
	ctx.lr = 0x826A5500;
	sub_82816528(ctx, base);
	// stw r3,24276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24276, ctx.r3.u32);
	// b 0x826a550c
	goto loc_826A550C;
loc_826A5508:
	// lwz r3,24276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24276);
loc_826A550C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5520"))) PPC_WEAK_FUNC(sub_826A5520);
PPC_FUNC_IMPL(__imp__sub_826A5520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a5570
	ctx.lr = 0x826A5540;
	sub_826A5570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A5554;
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

__attribute__((alias("__imp__sub_826A5570"))) PPC_WEAK_FUNC(sub_826A5570);
PPC_FUNC_IMPL(__imp__sub_826A5570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24292
	ctx.r31.s64 = ctx.r11.s64 + 24292;
	// lwz r11,24300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a55b8
	if (!ctx.cr0.eq) goto loc_826A55B8;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29520
	ctx.r9.s64 = ctx.r9.s64 + 29520;
	// stw r11,24300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24300, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27904
	ctx.r3.s64 = ctx.r11.s64 + 27904;
	// bl 0x82a4c758
	ctx.lr = 0x826A55B8;
	sub_82A4C758(ctx, base);
loc_826A55B8:
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

__attribute__((alias("__imp__sub_826A55D0"))) PPC_WEAK_FUNC(sub_826A55D0);
PPC_FUNC_IMPL(__imp__sub_826A55D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a4e20
	sub_826A4E20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A55D8"))) PPC_WEAK_FUNC(sub_826A55D8);
PPC_FUNC_IMPL(__imp__sub_826A55D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18512
	ctx.r3.s64 = ctx.r11.s64 + 18512;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A55E8"))) PPC_WEAK_FUNC(sub_826A55E8);
PPC_FUNC_IMPL(__imp__sub_826A55E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a5620
	if (ctx.cr6.eq) goto loc_826A5620;
	// bl 0x8247a1e8
	ctx.lr = 0x826A5610;
	sub_8247A1E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a5620
	if (!ctx.cr6.eq) goto loc_826A5620;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a562c
	goto loc_826A562C;
loc_826A5620:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x826A562C;
	sub_82370018(ctx, base);
loc_826A562C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5648"))) PPC_WEAK_FUNC(sub_826A5648);
PPC_FUNC_IMPL(__imp__sub_826A5648) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247a1e8
	sub_8247A1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A5650"))) PPC_WEAK_FUNC(sub_826A5650);
PPC_FUNC_IMPL(__imp__sub_826A5650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82833108
	ctx.lr = 0x826A5670;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a56b0
	if (ctx.cr0.eq) goto loc_826A56B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82370118
	ctx.lr = 0x826A5684;
	sub_82370118(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,29544
	ctx.r11.s64 = ctx.r11.s64 + 29544;
	// addi r10,r10,30600
	ctx.r10.s64 = ctx.r10.s64 + 30600;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826a56b4
	goto loc_826A56B4;
loc_826A56B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A56B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A56D0"))) PPC_WEAK_FUNC(sub_826A56D0);
PPC_FUNC_IMPL(__imp__sub_826A56D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a1e8
	ctx.lr = 0x826A56F0;
	sub_8247A1E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a5700
	if (!ctx.cr6.eq) goto loc_826A5700;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a5718
	goto loc_826A5718;
loc_826A5700:
	// bl 0x823bd878
	ctx.lr = 0x826A5704;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a5718
	if (ctx.cr6.eq) goto loc_826A5718;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x826A5718;
	sub_8236FC08(ctx, base);
loc_826A5718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5730"))) PPC_WEAK_FUNC(sub_826A5730);
PPC_FUNC_IMPL(__imp__sub_826A5730) {
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
	// bl 0x828a74e8
	ctx.lr = 0x826A5740;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a5764
	if (ctx.cr0.eq) goto loc_826A5764;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r10,1932(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1932, ctx.r10.u8);
	// stb r10,1933(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1933, ctx.r10.u8);
	// b 0x826a5768
	goto loc_826A5768;
loc_826A5764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A5768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5778"))) PPC_WEAK_FUNC(sub_826A5778);
PPC_FUNC_IMPL(__imp__sub_826A5778) {
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
	// bl 0x828a7700
	ctx.lr = 0x826A5788;
	sub_828A7700(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stb r10,1932(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1932, ctx.r10.u8);
	// stb r10,1933(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1933, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A57B0"))) PPC_WEAK_FUNC(sub_826A57B0);
PPC_FUNC_IMPL(__imp__sub_826A57B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a56d0
	sub_826A56D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A57B8"))) PPC_WEAK_FUNC(sub_826A57B8);
PPC_FUNC_IMPL(__imp__sub_826A57B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lfs f0,32716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A57E0"))) PPC_WEAK_FUNC(sub_826A57E0);
PPC_FUNC_IMPL(__imp__sub_826A57E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82643c20
	ctx.lr = 0x826A580C;
	sub_82643C20(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r8,r11,0,2,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// beq 0x826a5894
	if (ctx.cr0.eq) goto loc_826A5894;
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a5894
	if (!ctx.cr0.eq) goto loc_826A5894;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x826a5894
	if (ctx.cr6.gt) goto loc_826A5894;
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// lwz r10,1812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826a5888
	if (!ctx.cr6.eq) goto loc_826A5888;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r10,1940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1940, ctx.r10.u32);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r10,1848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1848, ctx.r10.u32);
	// b 0x826a5894
	goto loc_826A5894;
loc_826A5888:
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,1776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// bl 0x826b3770
	ctx.lr = 0x826A5894;
	sub_826B3770(ctx, base);
loc_826A5894:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a58e8
	if (ctx.cr0.eq) goto loc_826A58E8;
	// lwz r4,1812(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r11,1848(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1848);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a58d8
	if (ctx.cr0.eq) goto loc_826A58D8;
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x826a58d8
	if (!ctx.cr6.eq) goto loc_826A58D8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,30656
	ctx.r3.s64 = ctx.r11.s64 + 30656;
	// bl 0x825d6ef8
	ctx.lr = 0x826A58C8;
	sub_825D6EF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1416(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// bl 0x827dccb0
	ctx.lr = 0x826A58D8;
	sub_827DCCB0(ctx, base);
loc_826A58D8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,29,2,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x30000000) | (ctx.r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_826A58E8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a5910
	if (!ctx.cr0.eq) goto loc_826A5910;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a5920
	if (!ctx.cr0.eq) goto loc_826A5920;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a5928
	if (ctx.cr0.eq) goto loc_826A5928;
	// b 0x826a5920
	goto loc_826A5920;
loc_826A5910:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826a5928
	if (ctx.cr6.eq) goto loc_826A5928;
loc_826A5920:
	// oris r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 1073741824;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A5928:
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a5998
	if (ctx.cr6.eq) goto loc_826A5998;
	// lwz r10,1812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bne cr6,0x826a5960
	if (!ctx.cr6.eq) goto loc_826A5960;
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a598c
	if (!ctx.cr0.eq) goto loc_826A598C;
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a598c
	if (!ctx.cr0.eq) goto loc_826A598C;
	// lwz r10,1848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1848);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x826a596c
	goto loc_826A596C;
loc_826A5960:
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a598c
	if (!ctx.cr0.eq) goto loc_826A598C;
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_826A596C:
	// bne 0x826a598c
	if (!ctx.cr0.eq) goto loc_826A598C;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a598c
	if (!ctx.cr0.eq) goto loc_826A598C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lbz r11,1939(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1939);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826a5998
	if (!ctx.cr0.eq) goto loc_826A5998;
loc_826A598C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A5998:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_826A59C0"))) PPC_WEAK_FUNC(sub_826A59C0);
PPC_FUNC_IMPL(__imp__sub_826A59C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82643c20
	ctx.lr = 0x826A59E0;
	sub_82643C20(ctx, base);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r7,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a5b7c
	if (!ctx.cr0.eq) goto loc_826A5B7C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// clrlwi r10,r6,2
	ctx.r10.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// oris r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 2147483648;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r8,10548(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r9,1940(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1940);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826a5a88
	if (ctx.cr0.eq) goto loc_826A5A88;
	// lwz r9,1776(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// b 0x826a5a8c
	goto loc_826A5A8C;
loc_826A5A88:
	// lwz r9,1812(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
loc_826A5A8C:
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,1816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1816, ctx.r9.u32);
	// lwz r9,1812(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826a5ab0
	if (!ctx.cr6.eq) goto loc_826A5AB0;
	// lfs f0,1868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1868);
	ctx.f0.f64 = double(temp.f32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x826a5ab4
	goto loc_826A5AB4;
loc_826A5AB0:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_826A5AB4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,17640(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17640);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,1816(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,1416(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1416);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-27300(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,1412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x827dcbd8
	ctx.lr = 0x826A5B0C;
	sub_827DCBD8(ctx, base);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a5b68
	if (!ctx.cr6.eq) goto loc_826A5B68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,1876
	ctx.r3.s64 = ctx.r11.s64 + 1876;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r10,1492
	ctx.r4.s64 = ctx.r10.s64 + 1492;
	// bl 0x82a4ea80
	ctx.lr = 0x826A5B30;
	sub_82A4EA80(ctx, base);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,1876
	ctx.r4.s64 = ctx.r11.s64 + 1876;
	// addi r3,r11,1908
	ctx.r3.s64 = ctx.r11.s64 + 1908;
	// bl 0x82a4ea80
	ctx.lr = 0x826A5B44;
	sub_82A4EA80(ctx, base);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r10,1848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1848, ctx.r10.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r10,1812(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r11,1940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1940, ctx.r11.u32);
	// b 0x826a5c40
	goto loc_826A5C40;
loc_826A5B68:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r3,1776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// bl 0x826b3770
	ctx.lr = 0x826A5B78;
	sub_826B3770(ctx, base);
	// b 0x826a5c40
	goto loc_826A5C40;
loc_826A5B7C:
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x826a5be4
	if (ctx.cr6.eq) goto loc_826A5BE4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826a5c40
	if (ctx.cr6.eq) goto loc_826A5C40;
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a5bc0
	if (!ctx.cr6.eq) goto loc_826A5BC0;
	// stw r4,1940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1940, ctx.r4.u32);
	// lwz r3,1812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// bl 0x826a3da0
	ctx.lr = 0x826A5BB4;
	sub_826A3DA0(ctx, base);
	// lwz r3,1812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// bl 0x826a3f88
	ctx.lr = 0x826A5BBC;
	sub_826A3F88(ctx, base);
	// b 0x826a5bc8
	goto loc_826A5BC8;
loc_826A5BC0:
	// lwz r3,1776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// bl 0x826b3770
	ctx.lr = 0x826A5BC8;
	sub_826B3770(ctx, base);
loc_826A5BC8:
	// lwz r3,1816(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A5BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826a5c40
	goto loc_826A5C40;
loc_826A5BE4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x826a5bf4
	if (ctx.cr6.eq) goto loc_826A5BF4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_826A5BF4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a5c08
	if (!ctx.cr0.eq) goto loc_826A5C08;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a5c40
	if (ctx.cr0.eq) goto loc_826A5C40;
loc_826A5C08:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// rlwinm r11,r11,0,4,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r10,1816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a5c40
	if (!ctx.cr6.eq) goto loc_826A5C40;
	// lwz r10,1848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1848);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,1848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1848, ctx.r10.u32);
loc_826A5C40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5C58"))) PPC_WEAK_FUNC(sub_826A5C58);
PPC_FUNC_IMPL(__imp__sub_826A5C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a5cb0
	if (ctx.cr6.eq) goto loc_826A5CB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A5CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble 0x826a5cb0
	if (!ctx.cr0.gt) goto loc_826A5CB0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826A5CB0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a5cd0
	if (!ctx.cr0.eq) goto loc_826A5CD0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lbz r11,1939(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1939);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826a5ce0
	if (!ctx.cr0.eq) goto loc_826A5CE0;
loc_826A5CD0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A5CE0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826a5d0c
	if (ctx.cr6.eq) goto loc_826A5D0C;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826a5d0c
	if (!ctx.cr6.eq) goto loc_826A5D0C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A5D0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a5d40
	if (!ctx.cr0.eq) goto loc_826A5D40;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a5d40
	if (!ctx.cr6.eq) goto loc_826A5D40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826a5d40
	if (!ctx.cr6.eq) goto loc_826A5D40;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A5D40:
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

__attribute__((alias("__imp__sub_826A5D60"))) PPC_WEAK_FUNC(sub_826A5D60);
PPC_FUNC_IMPL(__imp__sub_826A5D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A5D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82643c20
	ctx.lr = 0x826A5D78;
	sub_82643C20(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r30,-32243
	ctx.r30.s64 = -2113077248;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r29,r9,2
	ctx.r29.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// clrlwi r27,r7,2
	ctx.r27.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
	// lfs f13,17640(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-27300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -27300);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r7,r5,2
	ctx.r7.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lwz r4,1816(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,1812(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// bne cr6,0x826a5e2c
	if (!ctx.cr6.eq) goto loc_826A5E2C;
	// oris r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 2147483648;
	// lfs f0,1872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x826a5e34
	goto loc_826A5E34;
loc_826A5E2C:
	// clrlwi r11,r7,1
	ctx.r11.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_826A5E34:
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r6,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r5,1416(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x827dcd88
	ctx.lr = 0x826A5E60;
	sub_827DCD88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A5E68"))) PPC_WEAK_FUNC(sub_826A5E68);
PPC_FUNC_IMPL(__imp__sub_826A5E68) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82643c20
	ctx.lr = 0x826A5E8C;
	sub_82643C20(ctx, base);
	// lwz r10,1812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1812);
	// lwz r11,1816(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826a5ec4
	if (!ctx.cr6.eq) goto loc_826A5EC4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a5ebc
	if (!ctx.cr0.eq) goto loc_826A5EBC;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a5ebc
	if (!ctx.cr0.eq) goto loc_826A5EBC;
	// lwz r11,1848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1848);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a5ec4
	if (ctx.cr0.eq) goto loc_826A5EC4;
loc_826A5EBC:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// b 0x826a5ec8
	goto loc_826A5EC8;
loc_826A5EC4:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_826A5EC8:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x826a5ef0
	if (ctx.cr6.eq) goto loc_826A5EF0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x826a5f08
	if (!ctx.cr6.eq) goto loc_826A5F08;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x826a5f04
	goto loc_826A5F04;
loc_826A5EF0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_826A5F04:
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_826A5F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F20"))) PPC_WEAK_FUNC(sub_826A5F20);
PPC_FUNC_IMPL(__imp__sub_826A5F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F30"))) PPC_WEAK_FUNC(sub_826A5F30);
PPC_FUNC_IMPL(__imp__sub_826A5F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F40"))) PPC_WEAK_FUNC(sub_826A5F40);
PPC_FUNC_IMPL(__imp__sub_826A5F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// beq 0x826a5f70
	if (ctx.cr0.eq) goto loc_826A5F70;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_826A5F70:
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F78"))) PPC_WEAK_FUNC(sub_826A5F78);
PPC_FUNC_IMPL(__imp__sub_826A5F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r3,1608(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1608);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A5FB8"))) PPC_WEAK_FUNC(sub_826A5FB8);
PPC_FUNC_IMPL(__imp__sub_826A5FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r3,1608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1608);
	// bl 0x827eea48
	ctx.lr = 0x826A5FE4;
	sub_827EEA48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,1416(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A5FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6028"))) PPC_WEAK_FUNC(sub_826A6028);
PPC_FUNC_IMPL(__imp__sub_826A6028) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,1608(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1608);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A606C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6090"))) PPC_WEAK_FUNC(sub_826A6090);
PPC_FUNC_IMPL(__imp__sub_826A6090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r7,r11,1
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_826A60C0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// clrlwi r8,r8,1
	ctx.r8.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x826a60c0
	if (!ctx.cr0.eq) goto loc_826A60C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A60E0"))) PPC_WEAK_FUNC(sub_826A60E0);
PPC_FUNC_IMPL(__imp__sub_826A60E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bne 0x826a6108
	if (!ctx.cr0.eq) goto loc_826A6108;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_826A6108:
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// li r10,5
	ctx.r10.s64 = 5;
loc_826A6128:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x826a6128
	if (!ctx.cr0.eq) goto loc_826A6128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6150"))) PPC_WEAK_FUNC(sub_826A6150);
PPC_FUNC_IMPL(__imp__sub_826A6150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6178"))) PPC_WEAK_FUNC(sub_826A6178);
PPC_FUNC_IMPL(__imp__sub_826A6178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6198"))) PPC_WEAK_FUNC(sub_826A6198);
PPC_FUNC_IMPL(__imp__sub_826A6198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,30844
	ctx.r3.s64 = ctx.r11.s64 + 30844;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A61A8"))) PPC_WEAK_FUNC(sub_826A61A8);
PPC_FUNC_IMPL(__imp__sub_826A61A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a61e0
	if (ctx.cr6.eq) goto loc_826A61E0;
	// bl 0x826a8068
	ctx.lr = 0x826A61D0;
	sub_826A8068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a61e0
	if (!ctx.cr6.eq) goto loc_826A61E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a61ec
	goto loc_826A61EC;
loc_826A61E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x826A61EC;
	sub_82338A28(ctx, base);
loc_826A61EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6208"))) PPC_WEAK_FUNC(sub_826A6208);
PPC_FUNC_IMPL(__imp__sub_826A6208) {
	PPC_FUNC_PROLOGUE();
	// b 0x826a8068
	sub_826A8068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A6210"))) PPC_WEAK_FUNC(sub_826A6210);
PPC_FUNC_IMPL(__imp__sub_826A6210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x826A622C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a6240
	if (ctx.cr0.eq) goto loc_826A6240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a62b8
	ctx.lr = 0x826A623C;
	sub_826A62B8(ctx, base);
	// b 0x826a6244
	goto loc_826A6244;
loc_826A6240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A6244:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6258"))) PPC_WEAK_FUNC(sub_826A6258);
PPC_FUNC_IMPL(__imp__sub_826A6258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a8068
	ctx.lr = 0x826A6278;
	sub_826A8068(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a6288
	if (!ctx.cr6.eq) goto loc_826A6288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a62a0
	goto loc_826A62A0;
loc_826A6288:
	// bl 0x82338750
	ctx.lr = 0x826A628C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a62a0
	if (ctx.cr6.eq) goto loc_826A62A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x826A62A0;
	sub_82338858(ctx, base);
loc_826A62A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A62B8"))) PPC_WEAK_FUNC(sub_826A62B8);
PPC_FUNC_IMPL(__imp__sub_826A62B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A62C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x826A62D0;
	sub_82338B88(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,30968
	ctx.r11.s64 = ctx.r11.s64 + 30968;
	// addi r10,r10,32016
	ctx.r10.s64 = ctx.r10.s64 + 32016;
	// addi r9,r9,32068
	ctx.r9.s64 = ctx.r9.s64 + 32068;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r28,r31,1432
	ctx.r28.s64 = ctx.r31.s64 + 1432;
	// addi r27,r30,1432
	ctx.r27.s64 = ctx.r30.s64 + 1432;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r26,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r26.u32);
	// stw r29,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r29.u32);
	// stw r29,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r29.u32);
	// stw r29,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// stw r29,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
	// stw r29,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r29.u32);
	// beq cr6,0x826a639c
	if (ctx.cr6.eq) goto loc_826A639C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a639c
	if (!ctx.cr6.gt) goto loc_826A639C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6380
	if (ctx.cr0.eq) goto loc_826A6380;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A6380;
	sub_82332C38(ctx, base);
loc_826A6380:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A6394;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_826A639C:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r31,1456
	ctx.r11.s64 = ctx.r31.s64 + 1456;
	// addi r28,r10,15852
	ctx.r28.s64 = ctx.r10.s64 + 15852;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// addi r4,r30,1460
	ctx.r4.s64 = ctx.r30.s64 + 1460;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x826A63BC;
	sub_82A4EA80(ctx, base);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// addi r4,r30,1492
	ctx.r4.s64 = ctx.r30.s64 + 1492;
	// addi r3,r31,1492
	ctx.r3.s64 = ctx.r31.s64 + 1492;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826A63D4;
	sub_82A4EA80(ctx, base);
	// lwz r7,1524(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// lwz r10,1572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r11,r31,1620
	ctx.r11.s64 = ctx.r31.s64 + 1620;
	// lwz r9,1592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// addi r4,r30,1624
	ctx.r4.s64 = ctx.r30.s64 + 1624;
	// lwz r8,1604(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r7,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r7.u32);
	// lwz r7,1528(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r7,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r7.u32);
	// lwz r7,1532(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r7,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r7.u32);
	// lwz r7,1536(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r7,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r7.u32);
	// lwz r7,1540(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r7,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r7.u32);
	// lwz r7,1544(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r7,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r7.u32);
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
	// lfs f0,1568(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// lwz r7,1572(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// rlwimi r7,r10,0,1,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r7.u64 & 0xFFFFFFFF80000000);
	// stw r7,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,1572(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// rlwimi r7,r10,0,1,1
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r7.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r7,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r10,1572(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// rlwimi r7,r10,0,2,2
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r7.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r7,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r7.u32);
	// lfs f0,1576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// lfs f0,1580(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1580, temp.u32);
	// lfs f0,1584(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// lfs f0,1588(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// lwz r10,1592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// rlwimi r10,r9,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r10.u32);
	// lwz r10,1592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// lwz r9,1592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r9.u32);
	// lwz r10,1596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r10,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r10.u32);
	// lwz r10,1600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// lwz r10,1604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// rlwimi r10,r8,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// lwz r10,1608(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r10,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r10.u32);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r28,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r28.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826A64F4;
	sub_82A4EA80(ctx, base);
	// addi r28,r31,1652
	ctx.r28.s64 = ctx.r31.s64 + 1652;
	// addi r27,r30,1652
	ctx.r27.s64 = ctx.r30.s64 + 1652;
	// stw r26,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r26.u32);
	// stw r29,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r29.u32);
	// stw r29,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// stw r29,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r29.u32);
	// stw r29,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r29.u32);
	// beq cr6,0x826a6564
	if (ctx.cr6.eq) goto loc_826A6564;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a6564
	if (!ctx.cr6.gt) goto loc_826A6564;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6548
	if (ctx.cr0.eq) goto loc_826A6548;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A6548;
	sub_82332C38(ctx, base);
loc_826A6548:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A655C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_826A6564:
	// addi r28,r31,1676
	ctx.r28.s64 = ctx.r31.s64 + 1676;
	// stw r26,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r26.u32);
	// addi r27,r30,1676
	ctx.r27.s64 = ctx.r30.s64 + 1676;
	// stw r29,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r29.u32);
	// stw r29,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r29.u32);
	// stw r29,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r29,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r29.u32);
	// stw r29,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r29.u32);
	// beq cr6,0x826a65d4
	if (ctx.cr6.eq) goto loc_826A65D4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a65d4
	if (!ctx.cr6.gt) goto loc_826A65D4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a65b8
	if (ctx.cr0.eq) goto loc_826A65B8;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A65B8;
	sub_82332C38(ctx, base);
loc_826A65B8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A65CC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_826A65D4:
	// lwz r11,1700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// lwz r11,1704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1704);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// lfs f0,1708(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1708, temp.u32);
	// lfs f0,1712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1712, temp.u32);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A6610"))) PPC_WEAK_FUNC(sub_826A6610);
PPC_FUNC_IMPL(__imp__sub_826A6610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a6660
	ctx.lr = 0x826A6630;
	sub_826A6660(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6640
	if (ctx.cr0.eq) goto loc_826A6640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A6640;
	sub_82332DB8(ctx, base);
loc_826A6640:
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

__attribute__((alias("__imp__sub_826A6660"))) PPC_WEAK_FUNC(sub_826A6660);
PPC_FUNC_IMPL(__imp__sub_826A6660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A6668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r28,r29,1676
	ctx.r28.s64 = ctx.r29.s64 + 1676;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,1692(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1692);
	// bl 0x82332ca8
	ctx.lr = 0x826A668C;
	sub_82332CA8(ctx, base);
	// lwz r3,1688(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1688);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a669c
	if (ctx.cr6.eq) goto loc_826A669C;
	// bl 0x82332db8
	ctx.lr = 0x826A669C;
	sub_82332DB8(ctx, base);
loc_826A669C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,1652
	ctx.r30.s64 = ctx.r29.s64 + 1652;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1668(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1668);
	// bl 0x82332ca8
	ctx.lr = 0x826A66C8;
	sub_82332CA8(ctx, base);
	// lwz r3,1664(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1664);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a66d8
	if (ctx.cr6.eq) goto loc_826A66D8;
	// bl 0x82332db8
	ctx.lr = 0x826A66D8;
	sub_82332DB8(ctx, base);
loc_826A66D8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r30,r29,1432
	ctx.r30.s64 = ctx.r29.s64 + 1432;
	// stw r11,1620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1620, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1448(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1448);
	// bl 0x82332ca8
	ctx.lr = 0x826A6710;
	sub_82332CA8(ctx, base);
	// lwz r3,1444(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6720
	if (ctx.cr6.eq) goto loc_826A6720;
	// bl 0x82332db8
	ctx.lr = 0x826A6720;
	sub_82332DB8(ctx, base);
loc_826A6720:
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x826A6734;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A6740"))) PPC_WEAK_FUNC(sub_826A6740);
PPC_FUNC_IMPL(__imp__sub_826A6740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,19800
	ctx.r3.s64 = ctx.r11.s64 + 19800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6750"))) PPC_WEAK_FUNC(sub_826A6750);
PPC_FUNC_IMPL(__imp__sub_826A6750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a6788
	if (ctx.cr6.eq) goto loc_826A6788;
	// bl 0x8249b5a8
	ctx.lr = 0x826A6778;
	sub_8249B5A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a6788
	if (!ctx.cr6.eq) goto loc_826A6788;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a6794
	goto loc_826A6794;
loc_826A6788:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a61a8
	ctx.lr = 0x826A6794;
	sub_826A61A8(ctx, base);
loc_826A6794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A67B0"))) PPC_WEAK_FUNC(sub_826A67B0);
PPC_FUNC_IMPL(__imp__sub_826A67B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8249b5a8
	sub_8249B5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A67B8"))) PPC_WEAK_FUNC(sub_826A67B8);
PPC_FUNC_IMPL(__imp__sub_826A67B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A67D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a67e8
	if (ctx.cr0.eq) goto loc_826A67E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a6850
	ctx.lr = 0x826A67E4;
	sub_826A6850(ctx, base);
	// b 0x826a67ec
	goto loc_826A67EC;
loc_826A67E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A67EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6800"))) PPC_WEAK_FUNC(sub_826A6800);
PPC_FUNC_IMPL(__imp__sub_826A6800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8249b5a8
	ctx.lr = 0x826A6820;
	sub_8249B5A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a6834
	if (ctx.cr6.eq) goto loc_826A6834;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a6258
	ctx.lr = 0x826A6834;
	sub_826A6258(ctx, base);
loc_826A6834:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6850"))) PPC_WEAK_FUNC(sub_826A6850);
PPC_FUNC_IMPL(__imp__sub_826A6850) {
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
	// bl 0x826a62b8
	ctx.lr = 0x826A6870;
	sub_826A62B8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,32112
	ctx.r11.s64 = ctx.r11.s64 + 32112;
	// addi r10,r10,-32376
	ctx.r10.s64 = ctx.r10.s64 + -32376;
	// addi r9,r9,-32324
	ctx.r9.s64 = ctx.r9.s64 + -32324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1740
	ctx.r3.s64 = ctx.r31.s64 + 1740;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1740
	ctx.r4.s64 = ctx.r30.s64 + 1740;
	// lwz r11,1728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// lfs f0,1732(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// lfs f0,1736(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x826A68B8;
	sub_82873B58(ctx, base);
	// lwz r11,1764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// lfs f0,1768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1768, temp.u32);
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
	// lwz r11,1792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// lwz r11,1796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// stw r11,1796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1796, ctx.r11.u32);
	// lwz r11,1800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// lwz r11,1804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// lwz r11,1808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// lwz r11,1816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1816);
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6948"))) PPC_WEAK_FUNC(sub_826A6948);
PPC_FUNC_IMPL(__imp__sub_826A6948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a6a40
	ctx.lr = 0x826A6968;
	sub_826A6A40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a6978
	if (ctx.cr0.eq) goto loc_826A6978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A6978;
	sub_82332DB8(ctx, base);
loc_826A6978:
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

__attribute__((alias("__imp__sub_826A6998"))) PPC_WEAK_FUNC(sub_826A6998);
PPC_FUNC_IMPL(__imp__sub_826A6998) {
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
	// bl 0x827db200
	ctx.lr = 0x826A69B0;
	sub_827DB200(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r9,r9,32112
	ctx.r9.s64 = ctx.r9.s64 + 32112;
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r10,r8,-32376
	ctx.r10.s64 = ctx.r8.s64 + -32376;
	// lfs f0,17616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r8,r7,-32324
	ctx.r8.s64 = ctx.r7.s64 + -32324;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,1732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1732, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f13,1736(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1736, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lfs f0,-32760(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32760);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r9.u32);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// stfs f0,1516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// stw r10,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6A40"))) PPC_WEAK_FUNC(sub_826A6A40);
PPC_FUNC_IMPL(__imp__sub_826A6A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826A6A48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,32112
	ctx.r11.s64 = ctx.r11.s64 + 32112;
	// lwz r3,1784(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1784);
	// addi r10,r10,-32376
	ctx.r10.s64 = ctx.r10.s64 + -32376;
	// addi r9,r9,-32324
	ctx.r9.s64 = ctx.r9.s64 + -32324;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r10,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r24)
	PPC_STORE_U32(ctx.r24.u32 + 396, ctx.r9.u32);
	// beq cr6,0x826a6a94
	if (ctx.cr6.eq) goto loc_826A6A94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A6A94:
	// lwz r3,1788(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6ab4
	if (ctx.cr6.eq) goto loc_826A6AB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A6AB4:
	// lwz r3,1792(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1792);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6ac4
	if (ctx.cr6.eq) goto loc_826A6AC4;
	// bl 0x82332db8
	ctx.lr = 0x826A6AC4;
	sub_82332DB8(ctx, base);
loc_826A6AC4:
	// lwz r31,1796(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1796);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a6ae0
	if (ctx.cr6.eq) goto loc_826A6AE0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8239d768
	ctx.lr = 0x826A6AD8;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A6AE0;
	sub_82332DB8(ctx, base);
loc_826A6AE0:
	// lwz r3,1800(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6af0
	if (ctx.cr6.eq) goto loc_826A6AF0;
	// bl 0x82332db8
	ctx.lr = 0x826A6AF0;
	sub_82332DB8(ctx, base);
loc_826A6AF0:
	// lwz r3,1804(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6b00
	if (ctx.cr6.eq) goto loc_826A6B00;
	// bl 0x82332db8
	ctx.lr = 0x826A6B00;
	sub_82332DB8(ctx, base);
loc_826A6B00:
	// lwz r3,1808(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1808);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a6b10
	if (ctx.cr6.eq) goto loc_826A6B10;
	// bl 0x82332db8
	ctx.lr = 0x826A6B10;
	sub_82332DB8(ctx, base);
loc_826A6B10:
	// lwz r31,1764(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1764);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a6c4c
	if (ctx.cr6.eq) goto loc_826A6C4C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x826A6B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a6b64
	if (!ctx.cr6.gt) goto loc_826A6B64;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x826a6c38
	goto loc_826A6C38;
loc_826A6B64:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a6c04
	if (!ctx.cr6.eq) goto loc_826A6C04;
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a6be4
	if (!ctx.cr6.gt) goto loc_826A6BE4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826A6BA0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x826a6bd0
	if (!ctx.cr6.eq) goto loc_826A6BD0;
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
	ctx.lr = 0x826A6BC8;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826A6BD0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a6ba0
	if (ctx.cr6.lt) goto loc_826A6BA0;
loc_826A6BE4:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A6C04:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a6c38
	if (!ctx.cr0.eq) goto loc_826A6C38;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a6c38
	if (ctx.cr0.eq) goto loc_826A6C38;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x826A6C38;
	sub_82410060(ctx, base);
loc_826A6C38:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A6C4C:
	// addi r3,r24,1740
	ctx.r3.s64 = ctx.r24.s64 + 1740;
	// bl 0x8239d768
	ctx.lr = 0x826A6C54;
	sub_8239D768(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826a6660
	ctx.lr = 0x826A6C5C;
	sub_826A6660(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A6C68"))) PPC_WEAK_FUNC(sub_826A6C68);
PPC_FUNC_IMPL(__imp__sub_826A6C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827dc7f8
	ctx.lr = 0x826A6C88;
	sub_827DC7F8(ctx, base);
	// lwz r10,1812(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826a6c9c
	if (!ctx.cr6.eq) goto loc_826A6C9C;
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
loc_826A6C9C:
	// lwz r10,1776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826a6cac
	if (!ctx.cr6.eq) goto loc_826A6CAC;
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
loc_826A6CAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6CC8"))) PPC_WEAK_FUNC(sub_826A6CC8);
PPC_FUNC_IMPL(__imp__sub_826A6CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A6CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,4592
	ctx.r3.s64 = 4592;
	// bl 0x82833108
	ctx.lr = 0x826A6CE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x826a6d28
	if (ctx.cr0.eq) goto loc_826A6D28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e0e20
	ctx.lr = 0x826A6CF4;
	sub_827E0E20(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r10,r10,23800
	ctx.r10.s64 = ctx.r10.s64 + 23800;
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f0,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r9,24988
	ctx.r11.s64 = ctx.r9.s64 + 24988;
	// stfs f0,2600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2600, temp.u32);
	// addi r10,r8,25040
	ctx.r10.s64 = ctx.r8.s64 + 25040;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// b 0x826a6d2c
	goto loc_826A6D2C;
loc_826A6D28:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_826A6D2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a6dd0
	if (ctx.cr6.eq) goto loc_826A6DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,1416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,1412(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x827dcb18
	ctx.lr = 0x826A6DC8;
	sub_827DCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e4c58
	ctx.lr = 0x826A6DD0;
	sub_827E4C58(ctx, base);
loc_826A6DD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A6DE0"))) PPC_WEAK_FUNC(sub_826A6DE0);
PPC_FUNC_IMPL(__imp__sub_826A6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A6DE8;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827dc378
	ctx.lr = 0x826A6DFC;
	sub_827DC378(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a7554
	if (ctx.cr0.eq) goto loc_826A7554;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1792(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x826a6ee8
	if (!ctx.cr6.eq) goto loc_826A6EE8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82333900
	ctx.lr = 0x826A6E2C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a6ea0
	if (ctx.cr0.eq) goto loc_826A6EA0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f30,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r9,r10,30824
	ctx.r9.s64 = ctx.r10.s64 + 30824;
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_826A6E70:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x826a6e70
	if (!ctx.cr0.lt) goto loc_826A6E70;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// b 0x826a6ea4
	goto loc_826A6EA4;
loc_826A6EA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A6EA4:
	// stw r3,1792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1792, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,1676
	ctx.r3.s64 = ctx.r30.s64 + 1676;
	// lwz r29,1792(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1792);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r28,1692(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A6EDC;
	sub_823327E0(ctx, base);
	// lwz r10,1688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_826A6EE8:
	// lwz r10,1796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-32760
	ctx.r28.s64 = ctx.r11.s64 + -32760;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826a6ff8
	if (!ctx.cr6.eq) goto loc_826A6FF8;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82333900
	ctx.lr = 0x826A6F04;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a6fb0
	if (ctx.cr0.eq) goto loc_826A6FB0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r10,r10,30764
	ctx.r10.s64 = ctx.r10.s64 + 30764;
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lfs f0,-60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -60);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f13,-27804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// lfs f12,24020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24020);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r31,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r31.u32);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r31.u32);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r11,r11,7
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFF;
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stfs f31,48(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stfs f31,68(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x826a6fb4
	goto loc_826A6FB4;
loc_826A6FB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A6FB4:
	// stw r3,1796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1796, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A6FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,1676
	ctx.r3.s64 = ctx.r30.s64 + 1676;
	// lwz r29,1796(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r27,1692(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A6FEC;
	sub_823327E0(ctx, base);
	// lwz r10,1688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_826A6FF8:
	// lwz r11,1800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a70a0
	if (!ctx.cr6.eq) goto loc_826A70A0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826A700C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7058
	if (ctx.cr0.eq) goto loc_826A7058;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// stfs f31,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r9,r9,30804
	ctx.r9.s64 = ctx.r9.s64 + 30804;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stfs f30,12(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// b 0x826a705c
	goto loc_826A705C;
loc_826A7058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A705C:
	// stw r3,1800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1800, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,1676
	ctx.r3.s64 = ctx.r30.s64 + 1676;
	// lwz r29,1800(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1800);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r27,1692(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A7094;
	sub_823327E0(ctx, base);
	// lwz r10,1688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_826A70A0:
	// lwz r11,1804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a7168
	if (!ctx.cr6.eq) goto loc_826A7168;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82333900
	ctx.lr = 0x826A70B4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7120
	if (ctx.cr0.eq) goto loc_826A7120;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f30,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r9,r10,30784
	ctx.r9.s64 = ctx.r10.s64 + 30784;
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_826A70F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bge 0x826a70f8
	if (!ctx.cr0.lt) goto loc_826A70F8;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// b 0x826a7124
	goto loc_826A7124;
loc_826A7120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A7124:
	// stw r3,1804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1804, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,1676
	ctx.r3.s64 = ctx.r30.s64 + 1676;
	// lwz r29,1804(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1804);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r27,1692(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A715C;
	sub_823327E0(ctx, base);
	// lwz r10,1688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_826A7168:
	// lwz r11,1808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a7204
	if (!ctx.cr6.eq) goto loc_826A7204;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82333900
	ctx.lr = 0x826A717C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a71bc
	if (ctx.cr0.eq) goto loc_826A71BC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stfs f30,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f31,32(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r10,30784
	ctx.r11.s64 = ctx.r10.s64 + 30784;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x826a71c0
	goto loc_826A71C0;
loc_826A71BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A71C0:
	// stw r3,1808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1808, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A71D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r30,1676
	ctx.r3.s64 = ctx.r30.s64 + 1676;
	// lwz r29,1808(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1808);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// lwz r27,1692(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1692);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823327e0
	ctx.lr = 0x826A71F8;
	sub_823327E0(ctx, base);
	// lwz r10,1688(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1688);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
loc_826A7204:
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a7448
	if (ctx.cr6.eq) goto loc_826A7448;
	// lwz r11,1812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a7334
	if (!ctx.cr6.eq) goto loc_826A7334;
	// li r3,2160
	ctx.r3.s64 = 2160;
	// bl 0x82833108
	ctx.lr = 0x826A722C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a723c
	if (ctx.cr0.eq) goto loc_826A723C;
	// bl 0x826a1b60
	ctx.lr = 0x826A7238;
	sub_826A1B60(ctx, base);
	// b 0x826a7240
	goto loc_826A7240;
loc_826A723C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A7240:
	// stw r3,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a7334
	if (ctx.cr6.eq) goto loc_826A7334;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A729C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r4,1416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A72B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,1416(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// lwz r29,1812(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// lwz r3,1412(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1412);
	// bl 0x82332988
	ctx.lr = 0x826A72C4;
	sub_82332988(ctx, base);
	// stw r3,1856(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1856, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,1860(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1860, ctx.r26.u32);
	// bl 0x8249b9e0
	ctx.lr = 0x826A72D4;
	sub_8249B9E0(ctx, base);
	// stw r3,1864(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1864, ctx.r3.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r29,1824
	ctx.r3.s64 = ctx.r29.s64 + 1824;
	// bl 0x82332d50
	ctx.lr = 0x826A72EC;
	sub_82332D50(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_826A72F8:
	// lwz r11,1836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1836);
	// lis r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r8,r8,62804
	ctx.r8.u64 = ctx.r8.u64 | 62804;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r9,r9,4095
	ctx.r9.s64 = ctx.r9.s64 + 4095;
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// blt cr6,0x826a72f8
	if (ctx.cr6.lt) goto loc_826A72F8;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r3,1812(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1812);
	// bl 0x829bd3a8
	ctx.lr = 0x826A7334;
	sub_829BD3A8(ctx, base);
loc_826A7334:
	// lwz r11,1776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a7448
	if (!ctx.cr6.eq) goto loc_826A7448;
	// li r3,4720
	ctx.r3.s64 = 4720;
	// bl 0x82833108
	ctx.lr = 0x826A7348;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7358
	if (ctx.cr0.eq) goto loc_826A7358;
	// bl 0x826b32f8
	ctx.lr = 0x826A7354;
	sub_826B32F8(ctx, base);
	// b 0x826a735c
	goto loc_826A735C;
loc_826A7358:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A735C:
	// stw r3,1776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1776, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a7448
	if (ctx.cr6.eq) goto loc_826A7448;
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A73B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// lwz r4,1416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A73D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// lwz r29,1412(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x82411c50
	ctx.lr = 0x826A73DC;
	sub_82411C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333a20
	ctx.lr = 0x826A73E8;
	sub_82333A20(ctx, base);
	// lwz r29,1776(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827e1a10
	ctx.lr = 0x826A7400;
	sub_827E1A10(ctx, base);
	// lwz r3,4612(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4612);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,4616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4616, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332988
	ctx.lr = 0x826A7424;
	sub_82332988(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stw r3,4592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4592, ctx.r3.u32);
	// stw r28,4596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4596, ctx.r28.u32);
	// stw r30,4600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4600, ctx.r30.u32);
	// lfs f0,16800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2832(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 2832, temp.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r3,1776(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1776);
	// bl 0x829bd3a8
	ctx.lr = 0x826A7448;
	sub_829BD3A8(ctx, base);
loc_826A7448:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,1728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1728, ctx.r31.u32);
	// addi r29,r30,1728
	ctx.r29.s64 = ctx.r30.s64 + 1728;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7484
	if (ctx.cr0.eq) goto loc_826A7484;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r5,r10,30896
	ctx.r5.s64 = ctx.r10.s64 + 30896;
	// addi r4,r9,30924
	ctx.r4.s64 = ctx.r9.s64 + 30924;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5680
	ctx.lr = 0x826A7484;
	sub_828C5680(ctx, base);
loc_826A7484:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a74ac
	if (!ctx.cr6.gt) goto loc_826A74AC;
loc_826A7494:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a7bd0
	ctx.lr = 0x826A749C;
	sub_826A7BD0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a7494
	if (ctx.cr6.lt) goto loc_826A7494;
loc_826A74AC:
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x826A74B4;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826a74f4
	if (ctx.cr0.eq) goto loc_826A74F4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829bc540
	ctx.lr = 0x826A74C4;
	sub_829BC540(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r27,828(r29)
	PPC_STORE_U32(ctx.r29.u32 + 828, ctx.r27.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,5152
	ctx.r11.s64 = ctx.r11.s64 + 5152;
	// addi r10,r10,6160
	ctx.r10.s64 = ctx.r10.s64 + 6160;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// b 0x826a74f8
	goto loc_826A74F8;
loc_826A74F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826A74F8:
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r3,1764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1764, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a7558
	goto loc_826A7558;
loc_826A7554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A7558:
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
}

__attribute__((alias("__imp__sub_826A7568"))) PPC_WEAK_FUNC(sub_826A7568);
PPC_FUNC_IMPL(__imp__sub_826A7568) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7600
	if (!ctx.cr6.eq) goto loc_826A7600;
	// lwz r11,1420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a75b0
	if (ctx.cr6.eq) goto loc_826A75B0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a75b4
	goto loc_826A75B4;
loc_826A75B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826A75B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a75f4
	if (ctx.cr6.eq) goto loc_826A75F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a75cc
	if (ctx.cr6.eq) goto loc_826A75CC;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a75d0
	goto loc_826A75D0;
loc_826A75CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826A75D0:
	// bl 0x82643270
	ctx.lr = 0x826A75D4;
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
	ctx.lr = 0x826A75EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a7600
	if (!ctx.cr0.eq) goto loc_826A7600;
loc_826A75F4:
	// lfs f0,1736(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1736);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// b 0x826a7608
	goto loc_826A7608;
loc_826A7600:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_826A7608:
	// stfs f0,1736(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1736, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826a7640
	ctx.lr = 0x826A7618;
	sub_826A7640(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827db760
	ctx.lr = 0x826A7624;
	sub_827DB760(ctx, base);
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

__attribute__((alias("__imp__sub_826A7640"))) PPC_WEAK_FUNC(sub_826A7640);
PPC_FUNC_IMPL(__imp__sub_826A7640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x826A7648;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// bl 0x82438130
	ctx.lr = 0x826A7658;
	sub_82438130(ctx, base);
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// lfs f0,1732(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a785c
	if (ctx.cr6.lt) goto loc_826A785C;
	// lfs f13,1736(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1736);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x826a7684
	if (!ctx.cr6.lt) goto loc_826A7684;
	// lwz r10,3128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826a785c
	if (ctx.cr6.eq) goto loc_826A785C;
loc_826A7684:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82411c50
	ctx.lr = 0x826A768C;
	sub_82411C50(ctx, base);
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r27,1412(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// beq 0x826a7870
	if (ctx.cr0.eq) goto loc_826A7870;
	// lwz r11,1780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826a7870
	if (!ctx.cr6.eq) goto loc_826A7870;
	// bl 0x82a4cd78
	ctx.lr = 0x826A76AC;
	sub_82A4CD78(ctx, base);
	// lwz r9,1944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r10,1940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// divw r8,r3,r9
	ctx.r8.s32 = ctx.r3.s32 / ctx.r9.s32;
	// twllei r9,0
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r25,r8,r3
	ctx.r25.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mulli r11,r25,12
	ctx.r11.s64 = ctx.r25.s64 * 12;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andc r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twlgei r11,-1
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827d1fe0
	ctx.lr = 0x826A76E8;
	sub_827D1FE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8284da30
	ctx.lr = 0x826A7700;
	sub_8284DA30(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a7870
	if (ctx.cr6.eq) goto loc_826A7870;
	// li r7,10
	ctx.r7.s64 = 10;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f14c8
	ctx.lr = 0x826A7720;
	sub_827F14C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a7870
	if (ctx.cr0.eq) goto loc_826A7870;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r8,r11,2
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r11,1420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1420);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// oris r5,r8,32768
	ctx.r5.u64 = ctx.r8.u64 | 2147483648;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// clrlwi r7,r7,2
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// lwz r28,164(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// clrlwi r6,r6,2
	ctx.r6.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// oris r5,r5,16384
	ctx.r5.u64 = ctx.r5.u64 | 1073741824;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// stw r4,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r4.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// beq cr6,0x826a77bc
	if (ctx.cr6.eq) goto loc_826A77BC;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a77c0
	goto loc_826A77C0;
loc_826A77BC:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_826A77C0:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826a77f0
	if (ctx.cr6.eq) goto loc_826A77F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A77E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826a77f0
	if (!ctx.cr6.eq) goto loc_826A77F0;
	// stw r26,1772(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1772, ctx.r26.u32);
	// b 0x826a77f4
	goto loc_826A77F4;
loc_826A77F0:
	// stw r31,1772(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1772, ctx.r31.u32);
loc_826A77F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r25,1780(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1780, ctx.r25.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// lwz r6,1428(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1428);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r26,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r26.u8);
	// stb r31,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r31.u8);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r31.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x827da8d8
	ctx.lr = 0x826A7858;
	sub_827DA8D8(ctx, base);
	// b 0x826a7870
	goto loc_826A7870;
loc_826A785C:
	// lwz r11,1780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826a7870
	if (ctx.cr6.eq) goto loc_826A7870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826a7878
	ctx.lr = 0x826A7870;
	sub_826A7878(ctx, base);
loc_826A7870:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A7878"))) PPC_WEAK_FUNC(sub_826A7878);
PPC_FUNC_IMPL(__imp__sub_826A7878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A7880;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// bl 0x82411c50
	ctx.lr = 0x826A7890;
	sub_82411C50(ctx, base);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,1412(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// beq 0x826a798c
	if (ctx.cr0.eq) goto loc_826A798C;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r4,r10,2
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,1780(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,1940(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1940);
	// lfs f0,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// mulli r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 * 12;
	// lwz r3,1772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// clrlwi r11,r6,2
	ctx.r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// clrlwi r10,r5,2
	ctx.r10.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// oris r9,r4,32768
	ctx.r9.u64 = ctx.r4.u64 | 2147483648;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a7940
	if (ctx.cr6.eq) goto loc_826A7940;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1692, ctx.r10.u32);
loc_826A7940:
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,28
	ctx.r5.s64 = 28;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x826A7960;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,1428(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1428);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827daca8
	ctx.lr = 0x826A798C;
	sub_827DACA8(ctx, base);
loc_826A798C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A79A0"))) PPC_WEAK_FUNC(sub_826A79A0);
PPC_FUNC_IMPL(__imp__sub_826A79A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A79A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,1756(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a7a5c
	if (!ctx.cr6.gt) goto loc_826A7A5C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_826A79CC:
	// lwz r10,1752(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1752);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826A79E0;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826a7a0c
	if (ctx.cr0.eq) goto loc_826A7A0C;
	// bl 0x824844a0
	ctx.lr = 0x826A79EC;
	sub_824844A0(ctx, base);
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
	ctx.lr = 0x826A7A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a7a10
	if (!ctx.cr0.eq) goto loc_826A7A10;
loc_826A7A0C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826A7A10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a7a50
	if (ctx.cr6.eq) goto loc_826A7A50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,628(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,620(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a7a50
	if (ctx.cr0.eq) goto loc_826A7A50;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a5298
	ctx.lr = 0x826A7A50;
	sub_826A5298(ctx, base);
loc_826A7A50:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826a79cc
	if (!ctx.cr0.eq) goto loc_826A79CC;
loc_826A7A5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A7A68"))) PPC_WEAK_FUNC(sub_826A7A68);
PPC_FUNC_IMPL(__imp__sub_826A7A68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a7af8
	if (ctx.cr6.eq) goto loc_826A7AF8;
	// lwz r30,1796(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a7ad4
	if (ctx.cr6.eq) goto loc_826A7AD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826a7af8
	if (!ctx.cr0.gt) goto loc_826A7AF8;
loc_826A7AD4:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7af0
	if (!ctx.cr6.eq) goto loc_826A7AF0;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x826a7af4
	if (ctx.cr6.eq) goto loc_826A7AF4;
loc_826A7AF0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_826A7AF4:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_826A7AF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7ba4
	if (ctx.cr0.eq) goto loc_826A7BA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-27328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827db948
	ctx.lr = 0x826A7B68;
	sub_827DB948(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,1492
	ctx.r3.s64 = ctx.r31.s64 + 1492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826A7BA4;
	sub_82A4EA80(ctx, base);
loc_826A7BA4:
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_826A7BD0"))) PPC_WEAK_FUNC(sub_826A7BD0);
PPC_FUNC_IMPL(__imp__sub_826A7BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7cb8
	if (!ctx.cr6.eq) goto loc_826A7CB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7c5c
	if (ctx.cr0.eq) goto loc_826A7C5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a8210
	ctx.lr = 0x826A7C28;
	sub_826A8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7c5c
	if (ctx.cr0.eq) goto loc_826A7C5C;
	// lwz r11,4580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a7c5c
	if (ctx.cr6.eq) goto loc_826A7C5C;
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r9,840(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826a7c5c
	if (ctx.cr6.lt) goto loc_826A7C5C;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
loc_826A7C5C:
	// lwz r31,1776(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826a7cb8
	if (ctx.cr6.eq) goto loc_826A7CB8;
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r9,840(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826a7c8c
	if (ctx.cr6.lt) goto loc_826A7C8C;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
loc_826A7C8C:
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// bl 0x826b2ae8
	ctx.lr = 0x826A7C94;
	sub_826B2AE8(ctx, base);
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lwz r9,840(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826a7cb8
	if (ctx.cr6.lt) goto loc_826A7CB8;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
loc_826A7CB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A7CD0"))) PPC_WEAK_FUNC(sub_826A7CD0);
PPC_FUNC_IMPL(__imp__sub_826A7CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7d9c
	if (!ctx.cr6.eq) goto loc_826A7D9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7d58
	if (ctx.cr0.eq) goto loc_826A7D58;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a8210
	ctx.lr = 0x826A7D30;
	sub_826A8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7d58
	if (ctx.cr0.eq) goto loc_826A7D58;
	// lwz r11,4580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a7d58
	if (ctx.cr6.eq) goto loc_826A7D58;
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// bge 0x826a7d58
	if (!ctx.cr0.lt) goto loc_826A7D58;
	// stw r30,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r30.u32);
loc_826A7D58:
	// lwz r31,1776(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826a7d9c
	if (ctx.cr6.eq) goto loc_826A7D9C;
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// bge 0x826a7d7c
	if (!ctx.cr0.lt) goto loc_826A7D7C;
	// stw r30,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r30.u32);
loc_826A7D7C:
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// bl 0x826b2ae8
	ctx.lr = 0x826A7D84;
	sub_826B2AE8(ctx, base);
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// lwz r10,848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r10.u32);
	// bge 0x826a7d9c
	if (!ctx.cr0.lt) goto loc_826A7D9C;
	// stw r30,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r30.u32);
loc_826A7D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A7DB8"))) PPC_WEAK_FUNC(sub_826A7DB8);
PPC_FUNC_IMPL(__imp__sub_826A7DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7e40
	if (!ctx.cr6.eq) goto loc_826A7E40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7e20
	if (ctx.cr0.eq) goto loc_826A7E20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a8210
	ctx.lr = 0x826A7E10;
	sub_826A8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7e20
	if (ctx.cr0.eq) goto loc_826A7E20;
	// lwz r11,4580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4580);
	// b 0x826a7e30
	goto loc_826A7E30;
loc_826A7E20:
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a7e40
	if (ctx.cr6.eq) goto loc_826A7E40;
	// lwz r11,4580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4580);
loc_826A7E30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a7e40
	if (ctx.cr6.eq) goto loc_826A7E40;
	// lwz r3,848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// b 0x826a7e44
	goto loc_826A7E44;
loc_826A7E40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A7E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A7E58"))) PPC_WEAK_FUNC(sub_826A7E58);
PPC_FUNC_IMPL(__imp__sub_826A7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a7f70
	if (!ctx.cr6.eq) goto loc_826A7F70;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x826a7e94
	if (!ctx.cr6.eq) goto loc_826A7E94;
	// lwz r30,1728(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
loc_826A7E94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7efc
	if (ctx.cr0.eq) goto loc_826A7EFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A7EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a8210
	ctx.lr = 0x826A7EC8;
	sub_826A8210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7efc
	if (ctx.cr0.eq) goto loc_826A7EFC;
	// lwz r10,4580(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4580);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a7ee4
	if (ctx.cr6.eq) goto loc_826A7EE4;
	// lwz r11,840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 840);
	// b 0x826a7ee8
	goto loc_826A7EE8;
loc_826A7EE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A7EE8:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x826a7efc
	if (!ctx.cr6.gt) goto loc_826A7EFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a7efc
	if (ctx.cr6.eq) goto loc_826A7EFC;
	// stw r30,848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 848, ctx.r30.u32);
loc_826A7EFC:
	// lwz r31,1776(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826a7f70
	if (ctx.cr6.eq) goto loc_826A7F70;
	// bl 0x826a81b0
	ctx.lr = 0x826A7F0C;
	sub_826A81B0(ctx, base);
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
	ctx.lr = 0x826A7F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a7f30
	if (!ctx.cr0.eq) goto loc_826A7F30;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826A7F30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a7f70
	if (ctx.cr6.eq) goto loc_826A7F70;
	// lwz r11,4580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a7f4c
	if (ctx.cr6.eq) goto loc_826A7F4C;
	// lwz r11,840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// b 0x826a7f50
	goto loc_826A7F50;
loc_826A7F4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A7F50:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x826a7f70
	if (!ctx.cr6.gt) goto loc_826A7F70;
	// lwz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// stw r30,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r30.u32);
	// lwz r11,4604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4604);
	// stw r30,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r30.u32);
	// lwz r3,4608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4608);
	// bl 0x826b2ae8
	ctx.lr = 0x826A7F70;
	sub_826B2AE8(ctx, base);
loc_826A7F70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A7F88"))) PPC_WEAK_FUNC(sub_826A7F88);
PPC_FUNC_IMPL(__imp__sub_826A7F88) {
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
	// li r3,1728
	ctx.r3.s64 = 1728;
	// bl 0x82833108
	ctx.lr = 0x826A7F9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a7fac
	if (ctx.cr0.eq) goto loc_826A7FAC;
	// bl 0x827db200
	ctx.lr = 0x826A7FA8;
	sub_827DB200(ctx, base);
	// b 0x826a7fb0
	goto loc_826A7FB0;
loc_826A7FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A7FB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A7FC0"))) PPC_WEAK_FUNC(sub_826A7FC0);
PPC_FUNC_IMPL(__imp__sub_826A7FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a8000
	if (!ctx.cr0.eq) goto loc_826A8000;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24272, ctx.r11.u32);
	// addi r3,r9,30844
	ctx.r3.s64 = ctx.r9.s64 + 30844;
	// bl 0x82816528
	ctx.lr = 0x826A7FF8;
	sub_82816528(ctx, base);
	// stw r3,24268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24268, ctx.r3.u32);
	// b 0x826a8004
	goto loc_826A8004;
loc_826A8000:
	// lwz r3,24268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24268);
loc_826A8004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8018"))) PPC_WEAK_FUNC(sub_826A8018);
PPC_FUNC_IMPL(__imp__sub_826A8018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a8068
	ctx.lr = 0x826A8038;
	sub_826A8068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A804C;
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

__attribute__((alias("__imp__sub_826A8068"))) PPC_WEAK_FUNC(sub_826A8068);
PPC_FUNC_IMPL(__imp__sub_826A8068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13660
	ctx.r31.s64 = ctx.r11.s64 + 13660;
	// lwz r11,13656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13656);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a80b0
	if (!ctx.cr0.eq) goto loc_826A80B0;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,32092
	ctx.r9.s64 = ctx.r9.s64 + 32092;
	// stw r11,13656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13656, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27976
	ctx.r3.s64 = ctx.r11.s64 + 27976;
	// bl 0x82a4c758
	ctx.lr = 0x826A80B0;
	sub_82A4C758(ctx, base);
loc_826A80B0:
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

__attribute__((alias("__imp__sub_826A80C8"))) PPC_WEAK_FUNC(sub_826A80C8);
PPC_FUNC_IMPL(__imp__sub_826A80C8) {
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
	// li r3,4720
	ctx.r3.s64 = 4720;
	// bl 0x82833108
	ctx.lr = 0x826A80DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a80ec
	if (ctx.cr0.eq) goto loc_826A80EC;
	// bl 0x826b32f8
	ctx.lr = 0x826A80E8;
	sub_826B32F8(ctx, base);
	// b 0x826a80f0
	goto loc_826A80F0;
loc_826A80EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A80F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8100"))) PPC_WEAK_FUNC(sub_826A8100);
PPC_FUNC_IMPL(__imp__sub_826A8100) {
	PPC_FUNC_PROLOGUE();
	// li r3,4720
	ctx.r3.s64 = 4720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8108"))) PPC_WEAK_FUNC(sub_826A8108);
PPC_FUNC_IMPL(__imp__sub_826A8108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a8148
	if (!ctx.cr0.eq) goto loc_826A8148;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,24264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24264, ctx.r11.u32);
	// addi r3,r9,30868
	ctx.r3.s64 = ctx.r9.s64 + 30868;
	// bl 0x82816528
	ctx.lr = 0x826A8140;
	sub_82816528(ctx, base);
	// stw r3,24260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24260, ctx.r3.u32);
	// b 0x826a814c
	goto loc_826A814C;
loc_826A8148:
	// lwz r3,24260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24260);
loc_826A814C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8160"))) PPC_WEAK_FUNC(sub_826A8160);
PPC_FUNC_IMPL(__imp__sub_826A8160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826a81b0
	ctx.lr = 0x826A8180;
	sub_826A81B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8194;
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

__attribute__((alias("__imp__sub_826A81B0"))) PPC_WEAK_FUNC(sub_826A81B0);
PPC_FUNC_IMPL(__imp__sub_826A81B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13668
	ctx.r31.s64 = ctx.r11.s64 + 13668;
	// lwz r11,13664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826a81f8
	if (!ctx.cr0.eq) goto loc_826A81F8;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32300
	ctx.r9.s64 = ctx.r9.s64 + -32300;
	// stw r11,13664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27952
	ctx.r3.s64 = ctx.r11.s64 + 27952;
	// bl 0x82a4c758
	ctx.lr = 0x826A81F8;
	sub_82A4C758(ctx, base);
loc_826A81F8:
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

__attribute__((alias("__imp__sub_826A8210"))) PPC_WEAK_FUNC(sub_826A8210);
PPC_FUNC_IMPL(__imp__sub_826A8210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x826a8254
	if (ctx.cr6.eq) goto loc_826A8254;
	// bl 0x826a0df0
	ctx.lr = 0x826A8230;
	sub_826A0DF0(ctx, base);
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
	ctx.lr = 0x826A8248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x826a8258
	if (!ctx.cr0.eq) goto loc_826A8258;
loc_826A8254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A8258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8270"))) PPC_WEAK_FUNC(sub_826A8270);
PPC_FUNC_IMPL(__imp__sub_826A8270) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a6800
	sub_826A6800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8278"))) PPC_WEAK_FUNC(sub_826A8278);
PPC_FUNC_IMPL(__imp__sub_826A8278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a6948
	sub_826A6948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8280"))) PPC_WEAK_FUNC(sub_826A8280);
PPC_FUNC_IMPL(__imp__sub_826A8280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a6610
	sub_826A6610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8288"))) PPC_WEAK_FUNC(sub_826A8288);
PPC_FUNC_IMPL(__imp__sub_826A8288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a6258
	sub_826A6258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8290"))) PPC_WEAK_FUNC(sub_826A8290);
PPC_FUNC_IMPL(__imp__sub_826A8290) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826a6948
	sub_826A6948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8298"))) PPC_WEAK_FUNC(sub_826A8298);
PPC_FUNC_IMPL(__imp__sub_826A8298) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826a6610
	sub_826A6610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A82A0"))) PPC_WEAK_FUNC(sub_826A82A0);
PPC_FUNC_IMPL(__imp__sub_826A82A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,3856
	ctx.r3.s64 = ctx.r11.s64 + 3856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A82B0"))) PPC_WEAK_FUNC(sub_826A82B0);
PPC_FUNC_IMPL(__imp__sub_826A82B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a82e8
	if (ctx.cr6.eq) goto loc_826A82E8;
	// bl 0x826993d0
	ctx.lr = 0x826A82D8;
	sub_826993D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a82e8
	if (!ctx.cr6.eq) goto loc_826A82E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a82f4
	goto loc_826A82F4;
loc_826A82E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x826A82F4;
	sub_82338A28(ctx, base);
loc_826A82F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8310"))) PPC_WEAK_FUNC(sub_826A8310);
PPC_FUNC_IMPL(__imp__sub_826A8310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x826A832C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a8340
	if (ctx.cr0.eq) goto loc_826A8340;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a83b8
	ctx.lr = 0x826A833C;
	sub_826A83B8(ctx, base);
	// b 0x826a8344
	goto loc_826A8344;
loc_826A8340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A8344:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8358"))) PPC_WEAK_FUNC(sub_826A8358);
PPC_FUNC_IMPL(__imp__sub_826A8358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826993d0
	ctx.lr = 0x826A8378;
	sub_826993D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a8388
	if (!ctx.cr6.eq) goto loc_826A8388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a83a0
	goto loc_826A83A0;
loc_826A8388:
	// bl 0x82338750
	ctx.lr = 0x826A838C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a83a0
	if (ctx.cr6.eq) goto loc_826A83A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x826A83A0;
	sub_82338858(ctx, base);
loc_826A83A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A83B8"))) PPC_WEAK_FUNC(sub_826A83B8);
PPC_FUNC_IMPL(__imp__sub_826A83B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826A83C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x826A83D0;
	sub_82338B88(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r11,r11,-31752
	ctx.r11.s64 = ctx.r11.s64 + -31752;
	// addi r10,r10,-30700
	ctx.r10.s64 = ctx.r10.s64 + -30700;
	// addi r9,r9,-30648
	ctx.r9.s64 = ctx.r9.s64 + -30648;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// addi r30,r29,1408
	ctx.r30.s64 = ctx.r29.s64 + 1408;
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r31,1416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1416, ctx.r31.u32);
	// addi r28,r27,1408
	ctx.r28.s64 = ctx.r27.s64 + 1408;
	// stw r31,1420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1420, ctx.r31.u32);
	// stw r26,1412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1412, ctx.r26.u32);
	// stw r31,1424(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1424, ctx.r31.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r31,1428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1428, ctx.r31.u32);
	// stw r31,1408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1408, ctx.r31.u32);
	// beq cr6,0x826a846c
	if (ctx.cr6.eq) goto loc_826A846C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a846c
	if (!ctx.cr6.gt) goto loc_826A846C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8450
	if (ctx.cr0.eq) goto loc_826A8450;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A8450;
	sub_82332C38(ctx, base);
loc_826A8450:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A8464;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_826A846C:
	// addi r30,r29,1432
	ctx.r30.s64 = ctx.r29.s64 + 1432;
	// stw r26,1436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1436, ctx.r26.u32);
	// addi r28,r27,1432
	ctx.r28.s64 = ctx.r27.s64 + 1432;
	// stw r31,1440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1440, ctx.r31.u32);
	// stw r31,1444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1444, ctx.r31.u32);
	// stw r31,1448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1448, ctx.r31.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r31,1452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1452, ctx.r31.u32);
	// stw r31,1432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1432, ctx.r31.u32);
	// beq cr6,0x826a84dc
	if (ctx.cr6.eq) goto loc_826A84DC;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a84dc
	if (!ctx.cr6.gt) goto loc_826A84DC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a84c0
	if (ctx.cr0.eq) goto loc_826A84C0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A84C0;
	sub_82332C38(ctx, base);
loc_826A84C0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A84D4;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_826A84DC:
	// lwz r11,1456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A84F0"))) PPC_WEAK_FUNC(sub_826A84F0);
PPC_FUNC_IMPL(__imp__sub_826A84F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d9cf8
	ctx.lr = 0x826A8510;
	sub_827D9CF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8520
	if (ctx.cr0.eq) goto loc_826A8520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A8520;
	sub_82332DB8(ctx, base);
loc_826A8520:
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

__attribute__((alias("__imp__sub_826A8540"))) PPC_WEAK_FUNC(sub_826A8540);
PPC_FUNC_IMPL(__imp__sub_826A8540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,3904
	ctx.r3.s64 = ctx.r11.s64 + 3904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8550"))) PPC_WEAK_FUNC(sub_826A8550);
PPC_FUNC_IMPL(__imp__sub_826A8550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a8588
	if (ctx.cr6.eq) goto loc_826A8588;
	// bl 0x82699670
	ctx.lr = 0x826A8578;
	sub_82699670(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a8588
	if (!ctx.cr6.eq) goto loc_826A8588;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a8594
	goto loc_826A8594;
loc_826A8588:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a82b0
	ctx.lr = 0x826A8594;
	sub_826A82B0(ctx, base);
loc_826A8594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A85B0"))) PPC_WEAK_FUNC(sub_826A85B0);
PPC_FUNC_IMPL(__imp__sub_826A85B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82699670
	sub_82699670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A85B8"))) PPC_WEAK_FUNC(sub_826A85B8);
PPC_FUNC_IMPL(__imp__sub_826A85B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826993d0
	sub_826993D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A85C0"))) PPC_WEAK_FUNC(sub_826A85C0);
PPC_FUNC_IMPL(__imp__sub_826A85C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x826A85DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a85f0
	if (ctx.cr0.eq) goto loc_826A85F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a8658
	ctx.lr = 0x826A85EC;
	sub_826A8658(ctx, base);
	// b 0x826a85f4
	goto loc_826A85F4;
loc_826A85F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A85F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8608"))) PPC_WEAK_FUNC(sub_826A8608);
PPC_FUNC_IMPL(__imp__sub_826A8608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82699670
	ctx.lr = 0x826A8628;
	sub_82699670(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a863c
	if (ctx.cr6.eq) goto loc_826A863C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a8358
	ctx.lr = 0x826A863C;
	sub_826A8358(ctx, base);
loc_826A863C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8658"))) PPC_WEAK_FUNC(sub_826A8658);
PPC_FUNC_IMPL(__imp__sub_826A8658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A8660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x826a83b8
	ctx.lr = 0x826A8670;
	sub_826A83B8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-30624
	ctx.r11.s64 = ctx.r11.s64 + -30624;
	// addi r10,r10,-29572
	ctx.r10.s64 = ctx.r10.s64 + -29572;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-29520
	ctx.r9.s64 = ctx.r9.s64 + -29520;
	// addi r31,r30,1472
	ctx.r31.s64 = ctx.r30.s64 + 1472;
	// addi r29,r29,1472
	ctx.r29.s64 = ctx.r29.s64 + 1472;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1480, ctx.r11.u32);
	// stw r11,1484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1484, ctx.r11.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r11.u32);
	// stw r10,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r10.u32);
	// stw r11,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r11.u32);
	// stw r11,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r11.u32);
	// beq cr6,0x826a870c
	if (ctx.cr6.eq) goto loc_826A870C;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826a870c
	if (!ctx.cr6.gt) goto loc_826A870C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a86f0
	if (ctx.cr0.eq) goto loc_826A86F0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x826A86F0;
	sub_82332C38(ctx, base);
loc_826A86F0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x826A8704;
	sub_82A45878(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_826A870C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8718"))) PPC_WEAK_FUNC(sub_826A8718);
PPC_FUNC_IMPL(__imp__sub_826A8718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A8720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,1472
	ctx.r31.s64 = ctx.r30.s64 + 1472;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1488(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826A8748;
	sub_82332CA8(ctx, base);
	// lwz r3,1484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a8758
	if (ctx.cr6.eq) goto loc_826A8758;
	// bl 0x82332db8
	ctx.lr = 0x826A8758;
	sub_82332DB8(ctx, base);
loc_826A8758:
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
	// bl 0x827d9cf8
	ctx.lr = 0x826A8770;
	sub_827D9CF8(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8780
	if (ctx.cr0.eq) goto loc_826A8780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x826A8780;
	sub_82332DB8(ctx, base);
loc_826A8780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8790"))) PPC_WEAK_FUNC(sub_826A8790);
PPC_FUNC_IMPL(__imp__sub_826A8790) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bl 0x82833108
	ctx.lr = 0x826A87AC;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a87c4
	if (ctx.cr0.eq) goto loc_826A87C4;
	// bl 0x826a6998
	ctx.lr = 0x826A87BC;
	sub_826A6998(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826a87c8
	goto loc_826A87C8;
loc_826A87C4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_826A87C8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A8848"))) PPC_WEAK_FUNC(sub_826A8848);
PPC_FUNC_IMPL(__imp__sub_826A8848) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8908
	if (ctx.cr6.eq) goto loc_826A8908;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// bl 0x825d6ef8
	ctx.lr = 0x826A8890;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826A88A0;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8908
	if (ctx.cr0.eq) goto loc_826A8908;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a88e0
	if (ctx.cr6.eq) goto loc_826A88E0;
	// lwz r11,1812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1812);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a88e0
	if (ctx.cr6.eq) goto loc_826A88E0;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a88e0
	if (!ctx.cr0.eq) goto loc_826A88E0;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a88e0
	if (!ctx.cr0.eq) goto loc_826A88E0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826a5e68
	ctx.lr = 0x826A88E0;
	sub_826A5E68(ctx, base);
loc_826A88E0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x826a8904
	if (!ctx.cr0.eq) goto loc_826A8904;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
loc_826A8904:
	// stfs f0,1588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
loc_826A8908:
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

__attribute__((alias("__imp__sub_826A8920"))) PPC_WEAK_FUNC(sub_826A8920);
PPC_FUNC_IMPL(__imp__sub_826A8920) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a89d0
	if (ctx.cr6.eq) goto loc_826A89D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32076
	ctx.r3.s64 = ctx.r11.s64 + -32076;
	// bl 0x825d6ef8
	ctx.lr = 0x826A8968;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826A8978;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a89d0
	if (ctx.cr0.eq) goto loc_826A89D0;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643c20
	ctx.lr = 0x826A898C;
	sub_82643C20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a89a8
	if (ctx.cr0.eq) goto loc_826A89A8;
	// lwz r3,1796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a89a8
	if (ctx.cr6.eq) goto loc_826A89A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826a5e68
	ctx.lr = 0x826A89A8;
	sub_826A5E68(ctx, base);
loc_826A89A8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x826a89cc
	if (!ctx.cr0.eq) goto loc_826A89CC;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
loc_826A89CC:
	// stfs f0,1588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
loc_826A89D0:
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

__attribute__((alias("__imp__sub_826A89E8"))) PPC_WEAK_FUNC(sub_826A89E8);
PPC_FUNC_IMPL(__imp__sub_826A89E8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8aac
	if (ctx.cr6.eq) goto loc_826A8AAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32008
	ctx.r3.s64 = ctx.r11.s64 + -32008;
	// bl 0x825d6ef8
	ctx.lr = 0x826A8A30;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826A8A40;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8aac
	if (ctx.cr0.eq) goto loc_826A8AAC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r10.u32);
	// stfs f0,1816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
	// beq cr6,0x826a8a84
	if (ctx.cr6.eq) goto loc_826A8A84;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a8a84
	if (ctx.cr6.eq) goto loc_826A8A84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a5e68
	ctx.lr = 0x826A8A84;
	sub_826A5E68(ctx, base);
loc_826A8A84:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x826a8aa8
	if (!ctx.cr0.eq) goto loc_826A8AA8;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
loc_826A8AA8:
	// stfs f0,1588(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
loc_826A8AAC:
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

__attribute__((alias("__imp__sub_826A8AC8"))) PPC_WEAK_FUNC(sub_826A8AC8);
PPC_FUNC_IMPL(__imp__sub_826A8AC8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8bc8
	if (ctx.cr6.eq) goto loc_826A8BC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31944
	ctx.r3.s64 = ctx.r11.s64 + -31944;
	// bl 0x825d6ef8
	ctx.lr = 0x826A8B10;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826A8B20;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a8bc8
	if (ctx.cr0.eq) goto loc_826A8BC8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r10.u32);
	// stfs f0,1816(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1816, temp.u32);
	// beq cr6,0x826a8bb0
	if (ctx.cr6.eq) goto loc_826A8BB0;
	// lwz r31,1796(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8bb0
	if (ctx.cr6.eq) goto loc_826A8BB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a8b8c
	if (ctx.cr6.eq) goto loc_826A8B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826a8bb0
	if (!ctx.cr0.gt) goto loc_826A8BB0;
loc_826A8B8C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a8ba8
	if (!ctx.cr6.eq) goto loc_826A8BA8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x826a8bac
	if (ctx.cr6.eq) goto loc_826A8BAC;
loc_826A8BA8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_826A8BAC:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_826A8BB0:
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8bc8
	if (ctx.cr0.eq) goto loc_826A8BC8;
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r11.u32);
loc_826A8BC8:
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

__attribute__((alias("__imp__sub_826A8BE0"))) PPC_WEAK_FUNC(sub_826A8BE0);
PPC_FUNC_IMPL(__imp__sub_826A8BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826A8BE8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x827d1fe0
	ctx.lr = 0x826A8C10;
	sub_827D1FE0(ctx, base);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826a8f60
	if (ctx.cr6.eq) goto loc_826A8F60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826a8f60
	if (ctx.cr6.eq) goto loc_826A8F60;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1488(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1488);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// ble cr6,0x826a8cc8
	if (!ctx.cr6.gt) goto loc_826A8CC8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_826A8C6C:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826a8cc0
	if (!ctx.cr6.eq) goto loc_826A8CC0;
	// lwz r11,1484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1484);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a8cb0
	if (ctx.cr6.eq) goto loc_826A8CB0;
	// lwz r6,1620(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x826a8cb0
	if (!ctx.cr6.eq) goto loc_826A8CB0;
	// lwz r6,1632(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1632);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826a8cb0
	if (!ctx.cr6.eq) goto loc_826A8CB0;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x826a8cb0
	if (!ctx.cr6.eq) goto loc_826A8CB0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826A8CB0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826a8c6c
	if (ctx.cr6.lt) goto loc_826A8C6C;
loc_826A8CC0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x826a8d98
	if (!ctx.cr6.eq) goto loc_826A8D98;
loc_826A8CC8:
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82833108
	ctx.lr = 0x826A8CD0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a8ce4
	if (ctx.cr0.eq) goto loc_826A8CE4;
	// bl 0x8269c040
	ctx.lr = 0x826A8CDC;
	sub_8269C040(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826a8ce8
	goto loc_826A8CE8;
loc_826A8CE4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_826A8CE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8d84
	if (ctx.cr6.eq) goto loc_826A8D84;
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x826A8D54;
	sub_829BD3A8(ctx, base);
	// addi r3,r27,1472
	ctx.r3.s64 = ctx.r27.s64 + 1472;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x826A8D68;
	sub_82332D50(ctx, base);
	// lwz r11,1484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1484);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a8d7c
	if (ctx.cr0.eq) goto loc_826A8D7C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_826A8D7C:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x826a8d90
	goto loc_826A8D90;
loc_826A8D84:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-31880
	ctx.r3.s64 = ctx.r11.s64 + -31880;
	// bl 0x825d6ef8
	ctx.lr = 0x826A8D90;
	sub_825D6EF8(ctx, base);
loc_826A8D90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a8f60
	if (ctx.cr6.eq) goto loc_826A8F60;
loc_826A8D98:
	// stw r28,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r25,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r25.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// bl 0x82336ae8
	ctx.lr = 0x826A8DAC;
	sub_82336AE8(ctx, base);
	// stw r29,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r29.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a8dc0
	if (ctx.cr0.eq) goto loc_826A8DC0;
	// lwz r11,1428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
loc_826A8DC0:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stw r26,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r26.u32);
	// rlwimi r11,r24,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// beq 0x826a8e0c
	if (ctx.cr0.eq) goto loc_826A8E0C;
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a8e0c
	if (ctx.cr6.eq) goto loc_826A8E0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x826a8e0c
	if (ctx.cr0.eq) goto loc_826A8E0C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x82965960
	ctx.lr = 0x826A8E0C;
	sub_82965960(ctx, base);
loc_826A8E0C:
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// beq 0x826a8e5c
	if (ctx.cr0.eq) goto loc_826A8E5C;
	// lwz r3,1628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a8e5c
	if (ctx.cr6.eq) goto loc_826A8E5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1624(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x826a8e5c
	if (ctx.cr0.eq) goto loc_826A8E5C;
	// addi r4,r31,1660
	ctx.r4.s64 = ctx.r31.s64 + 1660;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82965960
	ctx.lr = 0x826A8E5C;
	sub_82965960(ctx, base);
loc_826A8E5C:
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwinm r9,r30,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF000000;
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// lwz r8,444(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r10,0,8,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r6,1644(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r5,484(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r7,r8,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r10,r5,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// rlwimi r6,r7,28,2,3
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 28) & 0x30000000) | (ctx.r6.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r6,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r6.u32);
	// beq cr6,0x826a8eb4
	if (ctx.cr6.eq) goto loc_826A8EB4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// stw r9,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r9.u32);
loc_826A8EB4:
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a8f60
	if (!ctx.cr6.gt) goto loc_826A8F60;
loc_826A8EC4:
	// lwz r11,1444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826a8f4c
	if (ctx.cr6.eq) goto loc_826A8F4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a8f14
	if (ctx.cr0.eq) goto loc_826A8F14;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a8f14
	if (ctx.cr6.eq) goto loc_826A8F14;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a8f14
	if (!ctx.cr0.eq) goto loc_826A8F14;
	// li r23,1
	ctx.r23.s64 = 1;
loc_826A8F14:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x826a8f2c
	if (ctx.cr6.eq) goto loc_826A8F2C;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// stfs f31,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
loc_826A8F2C:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r8,460(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r7,452(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827dcbd8
	ctx.lr = 0x826A8F4C;
	sub_827DCBD8(ctx, base);
loc_826A8F4C:
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a8ec4
	if (ctx.cr6.lt) goto loc_826A8EC4;
loc_826A8F60:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A8F70"))) PPC_WEAK_FUNC(sub_826A8F70);
PPC_FUNC_IMPL(__imp__sub_826A8F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826A8F78;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x827d1fe0
	ctx.lr = 0x826A8F98;
	sub_827D1FE0(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A8FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a9108
	if (ctx.cr6.eq) goto loc_826A9108;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a9108
	if (ctx.cr6.eq) goto loc_826A9108;
	// lwz r8,1488(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1488);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826a9108
	if (!ctx.cr6.gt) goto loc_826A9108;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826A8FE0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826a9034
	if (!ctx.cr6.eq) goto loc_826A9034;
	// lwz r11,1484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1484);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9024
	if (ctx.cr6.eq) goto loc_826A9024;
	// lwz r6,1620(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826a9024
	if (!ctx.cr6.eq) goto loc_826A9024;
	// lwz r6,1632(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1632);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a9024
	if (!ctx.cr6.eq) goto loc_826A9024;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x826a9024
	if (!ctx.cr6.eq) goto loc_826A9024;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826A9024:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826a8fe0
	if (ctx.cr6.lt) goto loc_826A8FE0;
loc_826A9034:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x826a9108
	if (ctx.cr6.eq) goto loc_826A9108;
	// lwz r11,1448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1448);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a90ac
	if (!ctx.cr6.gt) goto loc_826A90AC;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r30,0
	ctx.r30.s64 = 0;
loc_826A9054:
	// lwz r11,1444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1444);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a9098
	if (ctx.cr6.eq) goto loc_826A9098;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r23,8(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ld r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// ld r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// ld r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// bl 0x827dcd88
	ctx.lr = 0x826A9098;
	sub_827DCD88(ctx, base);
loc_826A9098:
	// lwz r11,1448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a9054
	if (ctx.cr6.lt) goto loc_826A9054;
loc_826A90AC:
	// addi r29,r29,1472
	ctx.r29.s64 = ctx.r29.s64 + 1472;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a9108
	if (!ctx.cr6.gt) goto loc_826A9108;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826A90C4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x826a90f4
	if (!ctx.cr6.eq) goto loc_826A90F4;
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
	ctx.lr = 0x826A90EC;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_826A90F4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826a90c4
	if (ctx.cr6.lt) goto loc_826A90C4;
loc_826A9108:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9110"))) PPC_WEAK_FUNC(sub_826A9110);
PPC_FUNC_IMPL(__imp__sub_826A9110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827db070
	ctx.lr = 0x826A9130;
	sub_827DB070(ctx, base);
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826a9170
	if (!ctx.cr6.gt) goto loc_826A9170;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A9144:
	// lwz r10,1484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x826a915c
	if (!ctx.cr6.eq) goto loc_826A915C;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_826A915C:
	// lwz r10,1488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826a9144
	if (ctx.cr6.lt) goto loc_826A9144;
loc_826A9170:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9188"))) PPC_WEAK_FUNC(sub_826A9188);
PPC_FUNC_IMPL(__imp__sub_826A9188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A9190;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826a91e0
	if (ctx.cr6.eq) goto loc_826A91E0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a91e0
	if (ctx.cr6.eq) goto loc_826A91E0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826a91e0
	if (ctx.cr6.eq) goto loc_826A91E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827da220
	ctx.lr = 0x826A91C0;
	sub_827DA220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a91e0
	if (ctx.cr0.eq) goto loc_826A91E0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8249b9e0
	ctx.lr = 0x826A91D0;
	sub_8249B9E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827dcb18
	ctx.lr = 0x826A91E0;
	sub_827DCB18(ctx, base);
loc_826A91E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A91E8"))) PPC_WEAK_FUNC(sub_826A91E8);
PPC_FUNC_IMPL(__imp__sub_826A91E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826A91F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826a9300
	if (ctx.cr6.eq) goto loc_826A9300;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826a9300
	if (ctx.cr6.eq) goto loc_826A9300;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826a9300
	if (ctx.cr6.eq) goto loc_826A9300;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827da220
	ctx.lr = 0x826A9220;
	sub_827DA220(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a92fc
	if (ctx.cr0.eq) goto loc_826A92FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8249b9e0
	ctx.lr = 0x826A9234;
	sub_8249B9E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827dccb0
	ctx.lr = 0x826A9244;
	sub_827DCCB0(ctx, base);
	// lwz r11,1776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// stw r28,4708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4708, ctx.r28.u32);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9260
	if (ctx.cr6.eq) goto loc_826A9260;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a9264
	goto loc_826A9264;
loc_826A9260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A9264:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x826a92fc
	if (!ctx.cr6.eq) goto loc_826A92FC;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9280
	if (ctx.cr6.eq) goto loc_826A9280;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826a9284
	goto loc_826A9284;
loc_826A9280:
	// li r29,0
	ctx.r29.s64 = 0;
loc_826A9284:
	// lwz r30,1776(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826a92b8
	if (ctx.cr6.eq) goto loc_826A92B8;
	// bl 0x825873f8
	ctx.lr = 0x826A9294;
	sub_825873F8(ctx, base);
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
	ctx.lr = 0x826A92AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x826a92bc
	if (!ctx.cr0.eq) goto loc_826A92BC;
loc_826A92B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A92BC:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a92fc
	if (!ctx.cr6.eq) goto loc_826A92FC;
	// lwz r29,1776(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// lwz r31,1632(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1632);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x826a92fc
	if (!ctx.cr6.gt) goto loc_826A92FC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826A92D8:
	// lwz r11,1628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1628);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A92F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x826a92d8
	if (!ctx.cr0.eq) goto loc_826A92D8;
loc_826A92FC:
	// stw r28,1456(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1456, ctx.r28.u32);
loc_826A9300:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9308"))) PPC_WEAK_FUNC(sub_826A9308);
PPC_FUNC_IMPL(__imp__sub_826A9308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A9310;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// beq cr6,0x826a9344
	if (ctx.cr6.eq) goto loc_826A9344;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A933C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a934c
	goto loc_826A934C;
loc_826A9344:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
loc_826A934C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-31812
	ctx.r3.s64 = ctx.r11.s64 + -31812;
	// bl 0x825d6ef8
	ctx.lr = 0x826A9358;
	sub_825D6EF8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826a93c8
	if (ctx.cr6.eq) goto loc_826A93C8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826a93c8
	if (ctx.cr6.eq) goto loc_826A93C8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827da2a8
	ctx.lr = 0x826A9378;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a93c8
	if (ctx.cr0.eq) goto loc_826A93C8;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a93c8
	if (!ctx.cr6.eq) goto loc_826A93C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A93A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827e5c20
	ctx.lr = 0x826A93AC;
	sub_827E5C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8249b9e0
	ctx.lr = 0x826A93B4;
	sub_8249B9E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a93c8
	if (ctx.cr0.eq) goto loc_826A93C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// bl 0x827e5c20
	ctx.lr = 0x826A93C8;
	sub_827E5C20(ctx, base);
loc_826A93C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A93D0"))) PPC_WEAK_FUNC(sub_826A93D0);
PPC_FUNC_IMPL(__imp__sub_826A93D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A93D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a9444
	if (ctx.cr6.eq) goto loc_826A9444;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827da2a8
	ctx.lr = 0x826A93F4;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9444
	if (ctx.cr0.eq) goto loc_826A9444;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a9428
	if (!ctx.cr6.eq) goto loc_826A9428;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A9420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827e5cb8
	ctx.lr = 0x826A9428;
	sub_827E5CB8(ctx, base);
loc_826A9428:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8249b9e0
	ctx.lr = 0x826A9430;
	sub_8249B9E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a9444
	if (ctx.cr0.eq) goto loc_826A9444;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1776(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1776);
	// bl 0x827e5cb8
	ctx.lr = 0x826A9444;
	sub_827E5CB8(ctx, base);
loc_826A9444:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9450"))) PPC_WEAK_FUNC(sub_826A9450);
PPC_FUNC_IMPL(__imp__sub_826A9450) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a8608
	sub_826A8608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9458"))) PPC_WEAK_FUNC(sub_826A9458);
PPC_FUNC_IMPL(__imp__sub_826A9458) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a8718
	sub_826A8718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9460"))) PPC_WEAK_FUNC(sub_826A9460);
PPC_FUNC_IMPL(__imp__sub_826A9460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a84f0
	sub_826A84F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9468"))) PPC_WEAK_FUNC(sub_826A9468);
PPC_FUNC_IMPL(__imp__sub_826A9468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a8358
	sub_826A8358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9470"))) PPC_WEAK_FUNC(sub_826A9470);
PPC_FUNC_IMPL(__imp__sub_826A9470) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826a8718
	sub_826A8718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9478"))) PPC_WEAK_FUNC(sub_826A9478);
PPC_FUNC_IMPL(__imp__sub_826A9478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826a84f0
	sub_826A84F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9480"))) PPC_WEAK_FUNC(sub_826A9480);
PPC_FUNC_IMPL(__imp__sub_826A9480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18620
	ctx.r3.s64 = ctx.r11.s64 + 18620;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9490"))) PPC_WEAK_FUNC(sub_826A9490);
PPC_FUNC_IMPL(__imp__sub_826A9490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826a94c8
	if (ctx.cr6.eq) goto loc_826A94C8;
	// bl 0x8247a7e8
	ctx.lr = 0x826A94B8;
	sub_8247A7E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a94c8
	if (!ctx.cr6.eq) goto loc_826A94C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a94d4
	goto loc_826A94D4;
loc_826A94C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82370018
	ctx.lr = 0x826A94D4;
	sub_82370018(ctx, base);
loc_826A94D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A94F0"))) PPC_WEAK_FUNC(sub_826A94F0);
PPC_FUNC_IMPL(__imp__sub_826A94F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8247a7e8
	sub_8247A7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A94F8"))) PPC_WEAK_FUNC(sub_826A94F8);
PPC_FUNC_IMPL(__imp__sub_826A94F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826A9514;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a9528
	if (ctx.cr0.eq) goto loc_826A9528;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a95a0
	ctx.lr = 0x826A9524;
	sub_826A95A0(ctx, base);
	// b 0x826a952c
	goto loc_826A952C;
loc_826A9528:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A952C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9540"))) PPC_WEAK_FUNC(sub_826A9540);
PPC_FUNC_IMPL(__imp__sub_826A9540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8247a7e8
	ctx.lr = 0x826A9560;
	sub_8247A7E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826a9570
	if (!ctx.cr6.eq) goto loc_826A9570;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826a9588
	goto loc_826A9588;
loc_826A9570:
	// bl 0x823bd878
	ctx.lr = 0x826A9574;
	sub_823BD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826a9588
	if (ctx.cr6.eq) goto loc_826A9588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x826A9588;
	sub_8236FC08(ctx, base);
loc_826A9588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A95A0"))) PPC_WEAK_FUNC(sub_826A95A0);
PPC_FUNC_IMPL(__imp__sub_826A95A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82370118
	ctx.lr = 0x826A95C0;
	sub_82370118(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,-29440
	ctx.r11.s64 = ctx.r11.s64 + -29440;
	// addi r10,r10,-28384
	ctx.r10.s64 = ctx.r10.s64 + -28384;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// rlwimi r10,r11,0,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// lwz r11,1728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1728);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// lwz r11,1732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A96E0"))) PPC_WEAK_FUNC(sub_826A96E0);
PPC_FUNC_IMPL(__imp__sub_826A96E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A96E8;
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
	// bl 0x829bcd88
	ctx.lr = 0x826A96FC;
	sub_829BCD88(ctx, base);
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,1712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// addi r3,r31,1716
	ctx.r3.s64 = ctx.r31.s64 + 1716;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// rlwinm r10,r10,31,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// rlwimi r11,r10,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// rlwinm r10,r10,29,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0xFF;
	// rlwimi r11,r10,28,3,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x10000000) | (ctx.r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// rlwinm r10,r10,28,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFF;
	// rlwimi r11,r10,27,4,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x8000000) | (ctx.r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwimi r11,r10,26,5,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x4000000) | (ctx.r11.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// lwz r5,204(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// bl 0x826a9ef8
	ctx.lr = 0x826A9784;
	sub_826A9EF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// lwz r5,208(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 208);
	// bl 0x824c5878
	ctx.lr = 0x826A9794;
	sub_824C5878(ctx, base);
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A97A8"))) PPC_WEAK_FUNC(sub_826A97A8);
PPC_FUNC_IMPL(__imp__sub_826A97A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A97B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x826A97C0;
	sub_828A74E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a985c
	if (ctx.cr0.eq) goto loc_826A985C;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a97e4
	if (ctx.cr0.eq) goto loc_826A97E4;
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// b 0x826a97e8
	goto loc_826A97E8;
loc_826A97E4:
	// stw r29,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r29.u32);
loc_826A97E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333a20
	ctx.lr = 0x826A97F0;
	sub_82333A20(ctx, base);
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// stw r3,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9858
	if (ctx.cr6.eq) goto loc_826A9858;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a9858
	if (ctx.cr6.eq) goto loc_826A9858;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A981C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a9858
	if (ctx.cr0.eq) goto loc_826A9858;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r11,1732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a984c
	if (ctx.cr6.eq) goto loc_826A984C;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r10,2088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2088, ctx.r10.u32);
	// b 0x826a9850
	goto loc_826A9850;
loc_826A984C:
	// stw r29,2088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2088, ctx.r29.u32);
loc_826A9850:
	// stw r29,2092(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2092, ctx.r29.u32);
	// stw r29,2096(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2096, ctx.r29.u32);
loc_826A9858:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826A985C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9868"))) PPC_WEAK_FUNC(sub_826A9868);
PPC_FUNC_IMPL(__imp__sub_826A9868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A9870;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r5,1496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x828a70b8
	ctx.lr = 0x826A98A0;
	sub_828A70B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333a20
	ctx.lr = 0x826A98A8;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r30.u32);
	// beq 0x826a9af8
	if (ctx.cr0.eq) goto loc_826A9AF8;
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm. r10,r9,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a9914
	if (ctx.cr0.eq) goto loc_826A9914;
	// lwz r8,620(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// addi r11,r31,1752
	ctx.r11.s64 = ctx.r31.s64 + 1752;
	// stw r8,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r8.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// lfs f0,1744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1760(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1760);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,1748(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1752);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1756(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x826a9918
	goto loc_826A9918;
loc_826A9914:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_826A9918:
	// rlwinm. r11,r9,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a9af0
	if (!ctx.cr0.eq) goto loc_826A9AF0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a9944
	if (ctx.cr6.eq) goto loc_826A9944;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826a9944
	if (!ctx.cr6.gt) goto loc_826A9944;
loc_826A993C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x826a9a68
	goto loc_826A9A68;
loc_826A9944:
	// rlwinm. r11,r9,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9a50
	if (ctx.cr0.eq) goto loc_826A9A50;
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9a50
	if (ctx.cr6.eq) goto loc_826A9A50;
	// lfs f13,624(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x826a99cc
	if (!ctx.cr6.eq) goto loc_826A99CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f29,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// b 0x826a9a04
	goto loc_826A9A04;
loc_826A99CC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// bge cr6,0x826a99f0
	if (!ctx.cr6.lt) goto loc_826A99F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x826a9a04
	goto loc_826A9A04;
loc_826A99F0:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f29,f13,f11
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_826A9A04:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826A9A28;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f29,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x826a993c
	if (ctx.cr6.lt) goto loc_826A993C;
loc_826A9A50:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x826a9a68
	if (!ctx.cr6.eq) goto loc_826A9A68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A9A68:
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x82411c50
	ctx.lr = 0x826A9A74;
	sub_82411C50(ctx, base);
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826a9a98
	if (ctx.cr6.eq) goto loc_826A9A98;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9a98
	if (ctx.cr0.eq) goto loc_826A9A98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a9d78
	ctx.lr = 0x826A9A94;
	sub_826A9D78(ctx, base);
	// b 0x826a9af8
	goto loc_826A9AF8;
loc_826A9A98:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a9af8
	if (ctx.cr6.eq) goto loc_826A9AF8;
	// lwa r9,1724(r31)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1724));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r10,1952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,1056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x826a9af8
	if (ctx.cr6.lt) goto loc_826A9AF8;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a9af8
	if (ctx.cr0.eq) goto loc_826A9AF8;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826a9af8
	if (!ctx.cr0.eq) goto loc_826A9AF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826a9bd8
	ctx.lr = 0x826A9AEC;
	sub_826A9BD8(ctx, base);
	// b 0x826a9af8
	goto loc_826A9AF8;
loc_826A9AF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
loc_826A9AF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_826A9B10"))) PPC_WEAK_FUNC(sub_826A9B10);
PPC_FUNC_IMPL(__imp__sub_826A9B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A9B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a7700
	ctx.lr = 0x826A9B28;
	sub_828A7700(ctx, base);
	// lwz r11,1720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9bc4
	if (ctx.cr6.eq) goto loc_826A9BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a20
	ctx.lr = 0x826A9B3C;
	sub_82333A20(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,1676(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1676, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A9B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826a9bc4
	if (ctx.cr0.eq) goto loc_826A9BC4;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bne cr6,0x826a9bc4
	if (!ctx.cr6.eq) goto loc_826A9BC4;
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826a9bc4
	if (!ctx.cr6.eq) goto loc_826A9BC4;
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x826a9bc4
	if (!ctx.cr6.eq) goto loc_826A9BC4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r29,2088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2088, ctx.r29.u32);
	// stw r29,2092(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2092, ctx.r29.u32);
	// stw r29,2096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2096, ctx.r29.u32);
loc_826A9BC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826a9d78
	ctx.lr = 0x826A9BCC;
	sub_826A9D78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9BD8"))) PPC_WEAK_FUNC(sub_826A9BD8);
PPC_FUNC_IMPL(__imp__sub_826A9BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A9BE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826a9d6c
	if (!ctx.cr6.eq) goto loc_826A9D6C;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9c04
	if (ctx.cr0.eq) goto loc_826A9C04;
	// bl 0x826a9d78
	ctx.lr = 0x826A9C04;
	sub_826A9D78(ctx, base);
loc_826A9C04:
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// oris r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 33554432;
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// beq 0x826a9c98
	if (ctx.cr0.eq) goto loc_826A9C98;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// bl 0x82816528
	ctx.lr = 0x826A9C24;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x826A9C34;
	sub_824CACF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// lwz r30,1732(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x82816528
	ctx.lr = 0x826A9C44;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-29476
	ctx.r3.s64 = ctx.r11.s64 + -29476;
	// bl 0x82816528
	ctx.lr = 0x826A9C54;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r28.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x8284dda8
	ctx.lr = 0x826A9C94;
	sub_8284DDA8(ctx, base);
	// b 0x826a9d6c
	goto loc_826A9D6C;
loc_826A9C98:
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9d20
	if (ctx.cr0.eq) goto loc_826A9D20;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// bl 0x82816528
	ctx.lr = 0x826A9CAC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x826A9CBC;
	sub_824CACF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// bl 0x82816528
	ctx.lr = 0x826A9CC8;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,1732(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// addi r3,r11,-29476
	ctx.r3.s64 = ctx.r11.s64 + -29476;
	// bl 0x82816528
	ctx.lr = 0x826A9CDC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r28.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8284dda8
	ctx.lr = 0x826A9D1C;
	sub_8284DDA8(ctx, base);
	// b 0x826a9d6c
	goto loc_826A9D6C;
loc_826A9D20:
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9d64
	if (ctx.cr6.eq) goto loc_826A9D64;
	// lwz r10,1732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r3,1608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1608);
	// bl 0x82411b98
	ctx.lr = 0x826A9D40;
	sub_82411B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A9D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826a9d6c
	goto loc_826A9D6C;
loc_826A9D64:
	// rlwinm r11,r10,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
loc_826A9D6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9D78"))) PPC_WEAK_FUNC(sub_826A9D78);
PPC_FUNC_IMPL(__imp__sub_826A9D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826A9D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826a9eec
	if (ctx.cr0.eq) goto loc_826A9EEC;
	// rlwinm r10,r11,0,7,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r10.u32);
	// beq 0x826a9e24
	if (ctx.cr0.eq) goto loc_826A9E24;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// bl 0x82816528
	ctx.lr = 0x826A9DB0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x826A9DC0;
	sub_824CACF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// lwz r30,1732(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// bl 0x82816528
	ctx.lr = 0x826A9DD0;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-29476
	ctx.r3.s64 = ctx.r11.s64 + -29476;
	// bl 0x82816528
	ctx.lr = 0x826A9DE0;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r28.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x8284dda8
	ctx.lr = 0x826A9E20;
	sub_8284DDA8(ctx, base);
	// b 0x826a9eec
	goto loc_826A9EEC;
loc_826A9E24:
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826a9eac
	if (ctx.cr0.eq) goto loc_826A9EAC;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// bl 0x82816528
	ctx.lr = 0x826A9E38;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x826A9E48;
	sub_824CACF0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-29464
	ctx.r3.s64 = ctx.r11.s64 + -29464;
	// bl 0x82816528
	ctx.lr = 0x826A9E54;
	sub_82816528(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,1732(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// addi r3,r11,-29476
	ctx.r3.s64 = ctx.r11.s64 + -29476;
	// bl 0x82816528
	ctx.lr = 0x826A9E68;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1736(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1736);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,3
	ctx.r28.s64 = 3;
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r28.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x8284dda8
	ctx.lr = 0x826A9EA8;
	sub_8284DDA8(ctx, base);
	// b 0x826a9eec
	goto loc_826A9EEC;
loc_826A9EAC:
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a9eec
	if (ctx.cr6.eq) goto loc_826A9EEC;
	// lwz r10,1732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1732);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r3,1608(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1608);
	// bl 0x82411b98
	ctx.lr = 0x826A9ECC;
	sub_82411B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A9EEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826A9EEC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9EF8"))) PPC_WEAK_FUNC(sub_826A9EF8);
PPC_FUNC_IMPL(__imp__sub_826A9EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826A9F00;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a9f80
	if (!ctx.cr6.eq) goto loc_826A9F80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82411dc0
	ctx.lr = 0x826A9F38;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a9fe0
	if (ctx.cr0.eq) goto loc_826A9FE0;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a9f74
	if (ctx.cr6.eq) goto loc_826A9F74;
	// bl 0x825873f8
	ctx.lr = 0x826A9F50;
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
	ctx.lr = 0x826A9F68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x826a9f78
	if (!ctx.cr0.eq) goto loc_826A9F78;
loc_826A9F74:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_826A9F78:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x826a9fe4
	goto loc_826A9FE4;
loc_826A9F80:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82846fb0
	ctx.lr = 0x826A9F88;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a9fa8
	if (ctx.cr6.eq) goto loc_826A9FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826A9FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826a9fac
	goto loc_826A9FAC;
loc_826A9FA8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_826A9FAC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826a9fe0
	if (ctx.cr6.eq) goto loc_826A9FE0;
	// bl 0x825873f8
	ctx.lr = 0x826A9FB8;
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
	ctx.lr = 0x826A9FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826a9fdc
	if (!ctx.cr0.eq) goto loc_826A9FDC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_826A9FDC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_826A9FE0:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_826A9FE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9FF0"))) PPC_WEAK_FUNC(sub_826A9FF0);
PPC_FUNC_IMPL(__imp__sub_826A9FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a9540
	sub_826A9540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9FF8"))) PPC_WEAK_FUNC(sub_826A9FF8);
PPC_FUNC_IMPL(__imp__sub_826A9FF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,19476
	ctx.r3.s64 = ctx.r11.s64 + 19476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA008"))) PPC_WEAK_FUNC(sub_826AA008);
PPC_FUNC_IMPL(__imp__sub_826AA008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aa040
	if (ctx.cr6.eq) goto loc_826AA040;
	// bl 0x8269c708
	ctx.lr = 0x826AA030;
	sub_8269C708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aa040
	if (!ctx.cr6.eq) goto loc_826AA040;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aa04c
	goto loc_826AA04C;
loc_826AA040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826996e0
	ctx.lr = 0x826AA04C;
	sub_826996E0(ctx, base);
loc_826AA04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA068"))) PPC_WEAK_FUNC(sub_826AA068);
PPC_FUNC_IMPL(__imp__sub_826AA068) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269c708
	sub_8269C708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA070"))) PPC_WEAK_FUNC(sub_826AA070);
PPC_FUNC_IMPL(__imp__sub_826AA070) {
	PPC_FUNC_PROLOGUE();
	// b 0x8269b298
	sub_8269B298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA078"))) PPC_WEAK_FUNC(sub_826AA078);
PPC_FUNC_IMPL(__imp__sub_826AA078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1456
	ctx.r3.s64 = 1456;
	// bl 0x82833108
	ctx.lr = 0x826AA094;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aa0a8
	if (ctx.cr0.eq) goto loc_826AA0A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa110
	ctx.lr = 0x826AA0A4;
	sub_826AA110(ctx, base);
	// b 0x826aa0ac
	goto loc_826AA0AC;
loc_826AA0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AA0AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA0C0"))) PPC_WEAK_FUNC(sub_826AA0C0);
PPC_FUNC_IMPL(__imp__sub_826AA0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8269c708
	ctx.lr = 0x826AA0E0;
	sub_8269C708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aa0f4
	if (ctx.cr6.eq) goto loc_826AA0F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826997d0
	ctx.lr = 0x826AA0F4;
	sub_826997D0(ctx, base);
loc_826AA0F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA110"))) PPC_WEAK_FUNC(sub_826AA110);
PPC_FUNC_IMPL(__imp__sub_826AA110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x826AA130;
	sub_82338B88(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,5352
	ctx.r11.s64 = ctx.r11.s64 + 5352;
	// addi r10,r10,6364
	ctx.r10.s64 = ctx.r10.s64 + 6364;
	// addi r9,r9,14028
	ctx.r9.s64 = ctx.r9.s64 + 14028;
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
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x826AA164;
	sub_82A4EA80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-28328
	ctx.r11.s64 = ctx.r11.s64 + -28328;
	// addi r10,r10,-27312
	ctx.r10.s64 = ctx.r10.s64 + -27312;
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
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA1B0"))) PPC_WEAK_FUNC(sub_826AA1B0);
PPC_FUNC_IMPL(__imp__sub_826AA1B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826aa0c0
	sub_826AA0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA1B8"))) PPC_WEAK_FUNC(sub_826AA1B8);
PPC_FUNC_IMPL(__imp__sub_826AA1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA1C0"))) PPC_WEAK_FUNC(sub_826AA1C0);
PPC_FUNC_IMPL(__imp__sub_826AA1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-27260
	ctx.r3.s64 = ctx.r11.s64 + -27260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA1D0"))) PPC_WEAK_FUNC(sub_826AA1D0);
PPC_FUNC_IMPL(__imp__sub_826AA1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aa208
	if (ctx.cr6.eq) goto loc_826AA208;
	// bl 0x826aa7e0
	ctx.lr = 0x826AA1F8;
	sub_826AA7E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aa208
	if (!ctx.cr6.eq) goto loc_826AA208;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aa214
	goto loc_826AA214;
loc_826AA208:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825da4b0
	ctx.lr = 0x826AA214;
	sub_825DA4B0(ctx, base);
loc_826AA214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA230"))) PPC_WEAK_FUNC(sub_826AA230);
PPC_FUNC_IMPL(__imp__sub_826AA230) {
	PPC_FUNC_PROLOGUE();
	// b 0x82611218
	sub_82611218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA238"))) PPC_WEAK_FUNC(sub_826AA238);
PPC_FUNC_IMPL(__imp__sub_826AA238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aa7e0
	ctx.lr = 0x826AA258;
	sub_826AA7E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aa268
	if (!ctx.cr6.eq) goto loc_826AA268;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826aa280
	goto loc_826AA280;
loc_826AA268:
	// bl 0x82611218
	ctx.lr = 0x826AA26C;
	sub_82611218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aa280
	if (ctx.cr6.eq) goto loc_826AA280;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x826AA280;
	sub_82333B08(ctx, base);
loc_826AA280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA298"))) PPC_WEAK_FUNC(sub_826AA298);
PPC_FUNC_IMPL(__imp__sub_826AA298) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82333900
	ctx.lr = 0x826AA2AC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aa320
	if (ctx.cr0.eq) goto loc_826AA320;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f12,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f11,16800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16800);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-27804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27804);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-27200
	ctx.r10.s64 = ctx.r10.s64 + -27200;
	// lfs f13,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-32516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x826aa324
	goto loc_826AA324;
loc_826AA320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AA324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA338"))) PPC_WEAK_FUNC(sub_826AA338);
PPC_FUNC_IMPL(__imp__sub_826AA338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,-27236
	ctx.r3.s64 = ctx.r11.s64 + -27236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA348"))) PPC_WEAK_FUNC(sub_826AA348);
PPC_FUNC_IMPL(__imp__sub_826AA348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826aa380
	if (ctx.cr6.eq) goto loc_826AA380;
	// bl 0x826aa8e8
	ctx.lr = 0x826AA370;
	sub_826AA8E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826aa380
	if (!ctx.cr6.eq) goto loc_826AA380;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826aa38c
	goto loc_826AA38C;
loc_826AA380:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826aa1d0
	ctx.lr = 0x826AA38C;
	sub_826AA1D0(ctx, base);
loc_826AA38C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA3A8"))) PPC_WEAK_FUNC(sub_826AA3A8);
PPC_FUNC_IMPL(__imp__sub_826AA3A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826aa8e8
	sub_826AA8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA3B0"))) PPC_WEAK_FUNC(sub_826AA3B0);
PPC_FUNC_IMPL(__imp__sub_826AA3B0) {
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
	ctx.lr = 0x826AA3D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826aa400
	if (ctx.cr0.eq) goto loc_826AA400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826aa470
	ctx.lr = 0x826AA3E4;
	sub_826AA470(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-27048
	ctx.r11.s64 = ctx.r11.s64 + -27048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x826aa404
	goto loc_826AA404;
loc_826AA400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AA404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA420"))) PPC_WEAK_FUNC(sub_826AA420);
PPC_FUNC_IMPL(__imp__sub_826AA420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826aa8e8
	ctx.lr = 0x826AA440;
	sub_826AA8E8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826aa454
	if (ctx.cr6.eq) goto loc_826AA454;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826aa238
	ctx.lr = 0x826AA454;
	sub_826AA238(ctx, base);
loc_826AA454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA470"))) PPC_WEAK_FUNC(sub_826AA470);
PPC_FUNC_IMPL(__imp__sub_826AA470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825da6c0
	ctx.lr = 0x826AA490;
	sub_825DA6C0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-27192
	ctx.r11.s64 = ctx.r11.s64 + -27192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA4D0"))) PPC_WEAK_FUNC(sub_826AA4D0);
PPC_FUNC_IMPL(__imp__sub_826AA4D0) {
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
	// bl 0x827f1c68
	ctx.lr = 0x826AA4E8;
	sub_827F1C68(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lfs f11,24088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r6,-27048
	ctx.r10.s64 = ctx.r6.s64 + -27048;
	// lfs f13,30356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x826aa55c
	if (ctx.cr6.eq) goto loc_826AA55C;
	// stfs f13,40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
loc_826AA55C:
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

__attribute__((alias("__imp__sub_826AA578"))) PPC_WEAK_FUNC(sub_826AA578);
PPC_FUNC_IMPL(__imp__sub_826AA578) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1888
	ctx.r3.s64 = 1888;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f0,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lfs f0,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x826AA600;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aa614
	if (ctx.cr0.eq) goto loc_826AA614;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f23a0
	ctx.lr = 0x826AA610;
	sub_827F23A0(ctx, base);
	// b 0x826aa618
	goto loc_826AA618;
loc_826AA614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826AA618:
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA640"))) PPC_WEAK_FUNC(sub_826AA640);
PPC_FUNC_IMPL(__imp__sub_826AA640) {
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
	// bl 0x827e81c8
	ctx.lr = 0x826AA65C;
	sub_827E81C8(ctx, base);
	// bl 0x824395b8
	ctx.lr = 0x826AA660;
	sub_824395B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8210
	ctx.lr = 0x826AA66C;
	sub_827E8210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f03c8
	ctx.lr = 0x826AA67C;
	sub_824F03C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826aa68c
	if (ctx.cr0.eq) goto loc_826AA68C;
loc_826AA684:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826aa6d0
	goto loc_826AA6D0;
loc_826AA68C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r6,r9,-18048
	ctx.r6.s64 = ctx.r9.s64 + -18048;
	// addi r7,r10,-18036
	ctx.r7.s64 = ctx.r10.s64 + -18036;
	// lfs f1,-11424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r8,13804
	ctx.r5.s64 = ctx.r8.s64 + 13804;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x827f2dd0
	ctx.lr = 0x826AA6BC;
	sub_827F2DD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826aa684
	if (ctx.cr0.eq) goto loc_826AA684;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,2180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2180, ctx.r11.u32);
loc_826AA6D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AA6E8"))) PPC_WEAK_FUNC(sub_826AA6E8);
PPC_FUNC_IMPL(__imp__sub_826AA6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826AA6F0;
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
	// bl 0x827e81c8
	ctx.lr = 0x826AA708;
	sub_827E81C8(ctx, base);
	// bl 0x824395b8
	ctx.lr = 0x826AA70C;
	sub_824395B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826aa71c
	if (ctx.cr0.eq) goto loc_826AA71C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2180, ctx.r11.u32);
loc_826AA71C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1d68
	ctx.lr = 0x826AA730;
	sub_827F1D68(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AA738"))) PPC_WEAK_FUNC(sub_826AA738);
PPC_FUNC_IMPL(__imp__sub_826AA738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826aa778
	if (!ctx.cr0.eq) goto loc_826AA778;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r11,24248(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24248, ctx.r11.u32);
	// addi r3,r9,-27260
	ctx.r3.s64 = ctx.r9.s64 + -27260;
	// bl 0x82816528
	ctx.lr = 0x826AA770;
	sub_82816528(ctx, base);
	// stw r3,24244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24244, ctx.r3.u32);
	// b 0x826aa77c
	goto loc_826AA77C;
loc_826AA778:
	// lwz r3,24244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24244);
loc_826AA77C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

