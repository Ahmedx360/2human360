#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8259CA90"))) PPC_WEAK_FUNC(sub_8259CA90);
PPC_FUNC_IMPL(__imp__sub_8259CA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259c2d0
	sub_8259C2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAA0"))) PPC_WEAK_FUNC(sub_8259CAA0);
PPC_FUNC_IMPL(__imp__sub_8259CAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259c0d0
	sub_8259C0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAB0"))) PPC_WEAK_FUNC(sub_8259CAB0);
PPC_FUNC_IMPL(__imp__sub_8259CAB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259be10
	sub_8259BE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAC0"))) PPC_WEAK_FUNC(sub_8259CAC0);
PPC_FUNC_IMPL(__imp__sub_8259CAC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8259c550
	sub_8259C550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAD0"))) PPC_WEAK_FUNC(sub_8259CAD0);
PPC_FUNC_IMPL(__imp__sub_8259CAD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82598170
	sub_82598170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAE0"))) PPC_WEAK_FUNC(sub_8259CAE0);
PPC_FUNC_IMPL(__imp__sub_8259CAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82597510
	sub_82597510(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CAF0"))) PPC_WEAK_FUNC(sub_8259CAF0);
PPC_FUNC_IMPL(__imp__sub_8259CAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22748
	ctx.r3.s64 = ctx.r11.s64 + 22748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CB00"))) PPC_WEAK_FUNC(sub_8259CB00);
PPC_FUNC_IMPL(__imp__sub_8259CB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259cb38
	if (ctx.cr6.eq) goto loc_8259CB38;
	// bl 0x8259d758
	ctx.lr = 0x8259CB28;
	sub_8259D758(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259cb38
	if (!ctx.cr6.eq) goto loc_8259CB38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259cb44
	goto loc_8259CB44;
loc_8259CB38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259CB44;
	sub_82333C70(ctx, base);
loc_8259CB44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CB60"))) PPC_WEAK_FUNC(sub_8259CB60);
PPC_FUNC_IMPL(__imp__sub_8259CB60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d758
	sub_8259D758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CB68"))) PPC_WEAK_FUNC(sub_8259CB68);
PPC_FUNC_IMPL(__imp__sub_8259CB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x8259CB84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259cc04
	if (ctx.cr0.eq) goto loc_8259CC04;
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
	// addi r9,r9,22992
	ctx.r9.s64 = ctx.r9.s64 + 22992;
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
	// b 0x8259cc08
	goto loc_8259CC08;
loc_8259CC04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259CC08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CC20"))) PPC_WEAK_FUNC(sub_8259CC20);
PPC_FUNC_IMPL(__imp__sub_8259CC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d758
	ctx.lr = 0x8259CC40;
	sub_8259D758(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259cc54
	if (ctx.cr6.eq) goto loc_8259CC54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259CC54;
	sub_82333B08(ctx, base);
loc_8259CC54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CC70"))) PPC_WEAK_FUNC(sub_8259CC70);
PPC_FUNC_IMPL(__imp__sub_8259CC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22784
	ctx.r3.s64 = ctx.r11.s64 + 22784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CC80"))) PPC_WEAK_FUNC(sub_8259CC80);
PPC_FUNC_IMPL(__imp__sub_8259CC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259ccb8
	if (ctx.cr6.eq) goto loc_8259CCB8;
	// bl 0x8259d860
	ctx.lr = 0x8259CCA8;
	sub_8259D860(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259ccb8
	if (!ctx.cr6.eq) goto loc_8259CCB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259ccc4
	goto loc_8259CCC4;
loc_8259CCB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259CCC4;
	sub_82333C70(ctx, base);
loc_8259CCC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CCE0"))) PPC_WEAK_FUNC(sub_8259CCE0);
PPC_FUNC_IMPL(__imp__sub_8259CCE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d860
	sub_8259D860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CCE8"))) PPC_WEAK_FUNC(sub_8259CCE8);
PPC_FUNC_IMPL(__imp__sub_8259CCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8259CD04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259cd5c
	if (ctx.cr0.eq) goto loc_8259CD5C;
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
	// addi r9,r9,23096
	ctx.r9.s64 = ctx.r9.s64 + 23096;
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
	// b 0x8259cd60
	goto loc_8259CD60;
loc_8259CD5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259CD60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CD78"))) PPC_WEAK_FUNC(sub_8259CD78);
PPC_FUNC_IMPL(__imp__sub_8259CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d860
	ctx.lr = 0x8259CD98;
	sub_8259D860(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259cdac
	if (ctx.cr6.eq) goto loc_8259CDAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259CDAC;
	sub_82333B08(ctx, base);
loc_8259CDAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CDC8"))) PPC_WEAK_FUNC(sub_8259CDC8);
PPC_FUNC_IMPL(__imp__sub_8259CDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22820
	ctx.r3.s64 = ctx.r11.s64 + 22820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CDD8"))) PPC_WEAK_FUNC(sub_8259CDD8);
PPC_FUNC_IMPL(__imp__sub_8259CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259ce10
	if (ctx.cr6.eq) goto loc_8259CE10;
	// bl 0x8259d968
	ctx.lr = 0x8259CE00;
	sub_8259D968(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259ce10
	if (!ctx.cr6.eq) goto loc_8259CE10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259ce1c
	goto loc_8259CE1C;
loc_8259CE10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259CE1C;
	sub_82333C70(ctx, base);
loc_8259CE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CE38"))) PPC_WEAK_FUNC(sub_8259CE38);
PPC_FUNC_IMPL(__imp__sub_8259CE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259d968
	sub_8259D968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CE40"))) PPC_WEAK_FUNC(sub_8259CE40);
PPC_FUNC_IMPL(__imp__sub_8259CE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8259CE5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259ceb4
	if (ctx.cr0.eq) goto loc_8259CEB4;
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
	// addi r9,r9,23200
	ctx.r9.s64 = ctx.r9.s64 + 23200;
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
	// b 0x8259ceb8
	goto loc_8259CEB8;
loc_8259CEB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259CEB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CED0"))) PPC_WEAK_FUNC(sub_8259CED0);
PPC_FUNC_IMPL(__imp__sub_8259CED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d968
	ctx.lr = 0x8259CEF0;
	sub_8259D968(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259cf04
	if (ctx.cr6.eq) goto loc_8259CF04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259CF04;
	sub_82333B08(ctx, base);
loc_8259CF04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CF20"))) PPC_WEAK_FUNC(sub_8259CF20);
PPC_FUNC_IMPL(__imp__sub_8259CF20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22860
	ctx.r3.s64 = ctx.r11.s64 + 22860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CF30"))) PPC_WEAK_FUNC(sub_8259CF30);
PPC_FUNC_IMPL(__imp__sub_8259CF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259cf68
	if (ctx.cr6.eq) goto loc_8259CF68;
	// bl 0x8259da70
	ctx.lr = 0x8259CF58;
	sub_8259DA70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259cf68
	if (!ctx.cr6.eq) goto loc_8259CF68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259cf74
	goto loc_8259CF74;
loc_8259CF68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259CF74;
	sub_82333C70(ctx, base);
loc_8259CF74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259CF90"))) PPC_WEAK_FUNC(sub_8259CF90);
PPC_FUNC_IMPL(__imp__sub_8259CF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259da70
	sub_8259DA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259CF98"))) PPC_WEAK_FUNC(sub_8259CF98);
PPC_FUNC_IMPL(__imp__sub_8259CF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8259CFB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d00c
	if (ctx.cr0.eq) goto loc_8259D00C;
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
	// addi r9,r9,23304
	ctx.r9.s64 = ctx.r9.s64 + 23304;
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
	// b 0x8259d010
	goto loc_8259D010;
loc_8259D00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259D010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D028"))) PPC_WEAK_FUNC(sub_8259D028);
PPC_FUNC_IMPL(__imp__sub_8259D028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259da70
	ctx.lr = 0x8259D048;
	sub_8259DA70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259d05c
	if (ctx.cr6.eq) goto loc_8259D05C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259D05C;
	sub_82333B08(ctx, base);
loc_8259D05C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D078"))) PPC_WEAK_FUNC(sub_8259D078);
PPC_FUNC_IMPL(__imp__sub_8259D078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22904
	ctx.r3.s64 = ctx.r11.s64 + 22904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D088"))) PPC_WEAK_FUNC(sub_8259D088);
PPC_FUNC_IMPL(__imp__sub_8259D088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259d0c0
	if (ctx.cr6.eq) goto loc_8259D0C0;
	// bl 0x8259db78
	ctx.lr = 0x8259D0B0;
	sub_8259DB78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259d0c0
	if (!ctx.cr6.eq) goto loc_8259D0C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259d0cc
	goto loc_8259D0CC;
loc_8259D0C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259D0CC;
	sub_82333C70(ctx, base);
loc_8259D0CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D0E8"))) PPC_WEAK_FUNC(sub_8259D0E8);
PPC_FUNC_IMPL(__imp__sub_8259D0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259db78
	sub_8259DB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259D0F0"))) PPC_WEAK_FUNC(sub_8259D0F0);
PPC_FUNC_IMPL(__imp__sub_8259D0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x8259D10C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d18c
	if (ctx.cr0.eq) goto loc_8259D18C;
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
	// addi r9,r9,23408
	ctx.r9.s64 = ctx.r9.s64 + 23408;
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
	// b 0x8259d190
	goto loc_8259D190;
loc_8259D18C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259D190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D1A8"))) PPC_WEAK_FUNC(sub_8259D1A8);
PPC_FUNC_IMPL(__imp__sub_8259D1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259db78
	ctx.lr = 0x8259D1C8;
	sub_8259DB78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259d1dc
	if (ctx.cr6.eq) goto loc_8259D1DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259D1DC;
	sub_82333B08(ctx, base);
loc_8259D1DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D1F8"))) PPC_WEAK_FUNC(sub_8259D1F8);
PPC_FUNC_IMPL(__imp__sub_8259D1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,22948
	ctx.r3.s64 = ctx.r11.s64 + 22948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D208"))) PPC_WEAK_FUNC(sub_8259D208);
PPC_FUNC_IMPL(__imp__sub_8259D208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259d240
	if (ctx.cr6.eq) goto loc_8259D240;
	// bl 0x8259dc80
	ctx.lr = 0x8259D230;
	sub_8259DC80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259d240
	if (!ctx.cr6.eq) goto loc_8259D240;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259d24c
	goto loc_8259D24C;
loc_8259D240:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8259D24C;
	sub_82333C70(ctx, base);
loc_8259D24C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D268"))) PPC_WEAK_FUNC(sub_8259D268);
PPC_FUNC_IMPL(__imp__sub_8259D268) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259dc80
	sub_8259DC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259D270"))) PPC_WEAK_FUNC(sub_8259D270);
PPC_FUNC_IMPL(__imp__sub_8259D270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8259D28C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d2ec
	if (ctx.cr0.eq) goto loc_8259D2EC;
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
	// addi r9,r9,23512
	ctx.r9.s64 = ctx.r9.s64 + 23512;
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
	// b 0x8259d2f0
	goto loc_8259D2F0;
loc_8259D2EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259D2F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D308"))) PPC_WEAK_FUNC(sub_8259D308);
PPC_FUNC_IMPL(__imp__sub_8259D308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259dc80
	ctx.lr = 0x8259D328;
	sub_8259DC80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259d33c
	if (ctx.cr6.eq) goto loc_8259D33C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8259D33C;
	sub_82333B08(ctx, base);
loc_8259D33C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D358"))) PPC_WEAK_FUNC(sub_8259D358);
PPC_FUNC_IMPL(__imp__sub_8259D358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8259D360;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823fb9b8
	ctx.lr = 0x8259D370;
	sub_823FB9B8(ctx, base);
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
	ctx.lr = 0x8259D388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bne 0x8259d398
	if (!ctx.cr0.eq) goto loc_8259D398;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8259D398:
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259d45c
	if (!ctx.cr6.gt) goto loc_8259D45C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// addi r27,r11,23408
	ctx.r27.s64 = ctx.r11.s64 + 23408;
loc_8259D3B4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825670f0
	ctx.lr = 0x8259D3C0;
	sub_825670F0(ctx, base);
	// bl 0x82332868
	ctx.lr = 0x8259D3C4;
	sub_82332868(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8259d44c
	if (ctx.cr0.eq) goto loc_8259D44C;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x8259D3D4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259d43c
	if (ctx.cr0.eq) goto loc_8259D43C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r24,80(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r23,28(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r22,24(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r21,32(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r20,36(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r19,40(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82833180
	ctx.lr = 0x8259D400;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r24,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r22,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r22.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r21,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r21.u32);
	// stw r20,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r20.u32);
	// stw r19,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r19.u32);
	// b 0x8259d440
	goto loc_8259D440;
loc_8259D43C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8259D440:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8259D44C;
	sub_82833A30(ctx, base);
loc_8259D44C:
	// lwz r11,1436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1436);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8259d3b4
	if (ctx.cr6.lt) goto loc_8259D3B4;
loc_8259D45C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259D468"))) PPC_WEAK_FUNC(sub_8259D468);
PPC_FUNC_IMPL(__imp__sub_8259D468) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824090e0
	ctx.lr = 0x8259D480;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259d4d8
	if (ctx.cr0.eq) goto loc_8259D4D8;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82438130
	ctx.lr = 0x8259D490;
	sub_82438130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d4d8
	if (ctx.cr0.eq) goto loc_8259D4D8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,124
	ctx.r4.s64 = 124;
	// stw r11,12588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12588, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12592, ctx.r11.u32);
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,12600(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12600, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,7652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7652);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f1,f1
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f1.f64)));
	// stfs f0,12600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12600, temp.u32);
	// stfs f0,12596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12596, temp.u32);
	// stw r11,12584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12584, ctx.r11.u32);
loc_8259D4D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D4F0"))) PPC_WEAK_FUNC(sub_8259D4F0);
PPC_FUNC_IMPL(__imp__sub_8259D4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82332640
	ctx.lr = 0x8259D508;
	sub_82332640(ctx, base);
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
	ctx.lr = 0x8259D520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259d52c
	if (!ctx.cr0.eq) goto loc_8259D52C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8259D52C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6460, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D548"))) PPC_WEAK_FUNC(sub_8259D548);
PPC_FUNC_IMPL(__imp__sub_8259D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82332640
	ctx.lr = 0x8259D560;
	sub_82332640(ctx, base);
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
	ctx.lr = 0x8259D578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259d584
	if (!ctx.cr0.eq) goto loc_8259D584;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8259D584:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6472, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D5A0"))) PPC_WEAK_FUNC(sub_8259D5A0);
PPC_FUNC_IMPL(__imp__sub_8259D5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332640
	ctx.lr = 0x8259D5C0;
	sub_82332640(ctx, base);
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
	ctx.lr = 0x8259D5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8259d5e8
	if (!ctx.cr0.eq) goto loc_8259D5E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8259D5E8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,6436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6436, ctx.r10.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,6440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6440, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,6456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6456, ctx.r9.u32);
	// stw r10,6444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6444, ctx.r10.u32);
	// stw r8,6448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6448, ctx.r8.u32);
	// stw r7,6452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6452, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D630"))) PPC_WEAK_FUNC(sub_8259D630);
PPC_FUNC_IMPL(__imp__sub_8259D630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824090e0
	ctx.lr = 0x8259D650;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259d694
	if (ctx.cr0.eq) goto loc_8259D694;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82438130
	ctx.lr = 0x8259D660;
	sub_82438130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259d694
	if (ctx.cr0.eq) goto loc_8259D694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8259d694
	if (ctx.cr0.eq) goto loc_8259D694;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263f4b8
	ctx.lr = 0x8259D694;
	sub_8263F4B8(ctx, base);
loc_8259D694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D6B0"))) PPC_WEAK_FUNC(sub_8259D6B0);
PPC_FUNC_IMPL(__imp__sub_8259D6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25516);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d6f0
	if (!ctx.cr0.eq) goto loc_8259D6F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25516, ctx.r11.u32);
	// addi r3,r9,22748
	ctx.r3.s64 = ctx.r9.s64 + 22748;
	// bl 0x82816528
	ctx.lr = 0x8259D6E8;
	sub_82816528(ctx, base);
	// stw r3,25512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25512, ctx.r3.u32);
	// b 0x8259d6f4
	goto loc_8259D6F4;
loc_8259D6F0:
	// lwz r3,25512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25512);
loc_8259D6F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D708"))) PPC_WEAK_FUNC(sub_8259D708);
PPC_FUNC_IMPL(__imp__sub_8259D708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d758
	ctx.lr = 0x8259D728;
	sub_8259D758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D73C;
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

__attribute__((alias("__imp__sub_8259D758"))) PPC_WEAK_FUNC(sub_8259D758);
PPC_FUNC_IMPL(__imp__sub_8259D758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12348
	ctx.r31.s64 = ctx.r11.s64 + 12348;
	// lwz r11,12344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d7a0
	if (!ctx.cr0.eq) goto loc_8259D7A0;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23072
	ctx.r9.s64 = ctx.r9.s64 + 23072;
	// stw r11,12344(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12344, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22344
	ctx.r3.s64 = ctx.r11.s64 + 22344;
	// bl 0x82a4c758
	ctx.lr = 0x8259D7A0;
	sub_82A4C758(ctx, base);
loc_8259D7A0:
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

__attribute__((alias("__imp__sub_8259D7B8"))) PPC_WEAK_FUNC(sub_8259D7B8);
PPC_FUNC_IMPL(__imp__sub_8259D7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d7f8
	if (!ctx.cr0.eq) goto loc_8259D7F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25508, ctx.r11.u32);
	// addi r3,r9,22784
	ctx.r3.s64 = ctx.r9.s64 + 22784;
	// bl 0x82816528
	ctx.lr = 0x8259D7F0;
	sub_82816528(ctx, base);
	// stw r3,25504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25504, ctx.r3.u32);
	// b 0x8259d7fc
	goto loc_8259D7FC;
loc_8259D7F8:
	// lwz r3,25504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25504);
loc_8259D7FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D810"))) PPC_WEAK_FUNC(sub_8259D810);
PPC_FUNC_IMPL(__imp__sub_8259D810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d860
	ctx.lr = 0x8259D830;
	sub_8259D860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D844;
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

__attribute__((alias("__imp__sub_8259D860"))) PPC_WEAK_FUNC(sub_8259D860);
PPC_FUNC_IMPL(__imp__sub_8259D860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12356
	ctx.r31.s64 = ctx.r11.s64 + 12356;
	// lwz r11,12352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d8a8
	if (!ctx.cr0.eq) goto loc_8259D8A8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23176
	ctx.r9.s64 = ctx.r9.s64 + 23176;
	// stw r11,12352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12352, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22320
	ctx.r3.s64 = ctx.r11.s64 + 22320;
	// bl 0x82a4c758
	ctx.lr = 0x8259D8A8;
	sub_82A4C758(ctx, base);
loc_8259D8A8:
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

__attribute__((alias("__imp__sub_8259D8C0"))) PPC_WEAK_FUNC(sub_8259D8C0);
PPC_FUNC_IMPL(__imp__sub_8259D8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d900
	if (!ctx.cr0.eq) goto loc_8259D900;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25500, ctx.r11.u32);
	// addi r3,r9,22820
	ctx.r3.s64 = ctx.r9.s64 + 22820;
	// bl 0x82816528
	ctx.lr = 0x8259D8F8;
	sub_82816528(ctx, base);
	// stw r3,25496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25496, ctx.r3.u32);
	// b 0x8259d904
	goto loc_8259D904;
loc_8259D900:
	// lwz r3,25496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25496);
loc_8259D904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259D918"))) PPC_WEAK_FUNC(sub_8259D918);
PPC_FUNC_IMPL(__imp__sub_8259D918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259d968
	ctx.lr = 0x8259D938;
	sub_8259D968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259D94C;
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

__attribute__((alias("__imp__sub_8259D968"))) PPC_WEAK_FUNC(sub_8259D968);
PPC_FUNC_IMPL(__imp__sub_8259D968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12364
	ctx.r31.s64 = ctx.r11.s64 + 12364;
	// lwz r11,12360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259d9b0
	if (!ctx.cr0.eq) goto loc_8259D9B0;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23280
	ctx.r9.s64 = ctx.r9.s64 + 23280;
	// stw r11,12360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22296
	ctx.r3.s64 = ctx.r11.s64 + 22296;
	// bl 0x82a4c758
	ctx.lr = 0x8259D9B0;
	sub_82A4C758(ctx, base);
loc_8259D9B0:
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

__attribute__((alias("__imp__sub_8259D9C8"))) PPC_WEAK_FUNC(sub_8259D9C8);
PPC_FUNC_IMPL(__imp__sub_8259D9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25492);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259da08
	if (!ctx.cr0.eq) goto loc_8259DA08;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25492, ctx.r11.u32);
	// addi r3,r9,22860
	ctx.r3.s64 = ctx.r9.s64 + 22860;
	// bl 0x82816528
	ctx.lr = 0x8259DA00;
	sub_82816528(ctx, base);
	// stw r3,25488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25488, ctx.r3.u32);
	// b 0x8259da0c
	goto loc_8259DA0C;
loc_8259DA08:
	// lwz r3,25488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25488);
loc_8259DA0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DA20"))) PPC_WEAK_FUNC(sub_8259DA20);
PPC_FUNC_IMPL(__imp__sub_8259DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259da70
	ctx.lr = 0x8259DA40;
	sub_8259DA70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DA54;
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

__attribute__((alias("__imp__sub_8259DA70"))) PPC_WEAK_FUNC(sub_8259DA70);
PPC_FUNC_IMPL(__imp__sub_8259DA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12372
	ctx.r31.s64 = ctx.r11.s64 + 12372;
	// lwz r11,12368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259dab8
	if (!ctx.cr0.eq) goto loc_8259DAB8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23384
	ctx.r9.s64 = ctx.r9.s64 + 23384;
	// stw r11,12368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12368, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22272
	ctx.r3.s64 = ctx.r11.s64 + 22272;
	// bl 0x82a4c758
	ctx.lr = 0x8259DAB8;
	sub_82A4C758(ctx, base);
loc_8259DAB8:
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

__attribute__((alias("__imp__sub_8259DAD0"))) PPC_WEAK_FUNC(sub_8259DAD0);
PPC_FUNC_IMPL(__imp__sub_8259DAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25484);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259db10
	if (!ctx.cr0.eq) goto loc_8259DB10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25484, ctx.r11.u32);
	// addi r3,r9,22904
	ctx.r3.s64 = ctx.r9.s64 + 22904;
	// bl 0x82816528
	ctx.lr = 0x8259DB08;
	sub_82816528(ctx, base);
	// stw r3,25480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25480, ctx.r3.u32);
	// b 0x8259db14
	goto loc_8259DB14;
loc_8259DB10:
	// lwz r3,25480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25480);
loc_8259DB14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DB28"))) PPC_WEAK_FUNC(sub_8259DB28);
PPC_FUNC_IMPL(__imp__sub_8259DB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259db78
	ctx.lr = 0x8259DB48;
	sub_8259DB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DB5C;
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

__attribute__((alias("__imp__sub_8259DB78"))) PPC_WEAK_FUNC(sub_8259DB78);
PPC_FUNC_IMPL(__imp__sub_8259DB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12380
	ctx.r31.s64 = ctx.r11.s64 + 12380;
	// lwz r11,12376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259dbc0
	if (!ctx.cr0.eq) goto loc_8259DBC0;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23488
	ctx.r9.s64 = ctx.r9.s64 + 23488;
	// stw r11,12376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12376, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22248
	ctx.r3.s64 = ctx.r11.s64 + 22248;
	// bl 0x82a4c758
	ctx.lr = 0x8259DBC0;
	sub_82A4C758(ctx, base);
loc_8259DBC0:
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

__attribute__((alias("__imp__sub_8259DBD8"))) PPC_WEAK_FUNC(sub_8259DBD8);
PPC_FUNC_IMPL(__imp__sub_8259DBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259dc18
	if (!ctx.cr0.eq) goto loc_8259DC18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25476, ctx.r11.u32);
	// addi r3,r9,22948
	ctx.r3.s64 = ctx.r9.s64 + 22948;
	// bl 0x82816528
	ctx.lr = 0x8259DC10;
	sub_82816528(ctx, base);
	// stw r3,25472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25472, ctx.r3.u32);
	// b 0x8259dc1c
	goto loc_8259DC1C;
loc_8259DC18:
	// lwz r3,25472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25472);
loc_8259DC1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DC30"))) PPC_WEAK_FUNC(sub_8259DC30);
PPC_FUNC_IMPL(__imp__sub_8259DC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8259dc80
	ctx.lr = 0x8259DC50;
	sub_8259DC80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259DC64;
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

__attribute__((alias("__imp__sub_8259DC80"))) PPC_WEAK_FUNC(sub_8259DC80);
PPC_FUNC_IMPL(__imp__sub_8259DC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12388
	ctx.r31.s64 = ctx.r11.s64 + 12388;
	// lwz r11,12384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8259dcc8
	if (!ctx.cr0.eq) goto loc_8259DCC8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23592
	ctx.r9.s64 = ctx.r9.s64 + 23592;
	// stw r11,12384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12384, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22224
	ctx.r3.s64 = ctx.r11.s64 + 22224;
	// bl 0x82a4c758
	ctx.lr = 0x8259DCC8;
	sub_82A4C758(ctx, base);
loc_8259DCC8:
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

__attribute__((alias("__imp__sub_8259DCE0"))) PPC_WEAK_FUNC(sub_8259DCE0);
PPC_FUNC_IMPL(__imp__sub_8259DCE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13584
	ctx.r3.s64 = ctx.r11.s64 + 13584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DCF0"))) PPC_WEAK_FUNC(sub_8259DCF0);
PPC_FUNC_IMPL(__imp__sub_8259DCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259dd28
	if (ctx.cr6.eq) goto loc_8259DD28;
	// bl 0x82332640
	ctx.lr = 0x8259DD18;
	sub_82332640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259dd28
	if (!ctx.cr6.eq) goto loc_8259DD28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259dd34
	goto loc_8259DD34;
loc_8259DD28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x8259DD34;
	sub_824040A0(ctx, base);
loc_8259DD34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DD50"))) PPC_WEAK_FUNC(sub_8259DD50);
PPC_FUNC_IMPL(__imp__sub_8259DD50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82332640
	sub_82332640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259DD58"))) PPC_WEAK_FUNC(sub_8259DD58);
PPC_FUNC_IMPL(__imp__sub_8259DD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6512
	ctx.r3.s64 = 6512;
	// bl 0x82833108
	ctx.lr = 0x8259DD74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259dd88
	if (ctx.cr0.eq) goto loc_8259DD88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8259ddf0
	ctx.lr = 0x8259DD84;
	sub_8259DDF0(ctx, base);
	// b 0x8259dd8c
	goto loc_8259DD8C;
loc_8259DD88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259DD8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DDA0"))) PPC_WEAK_FUNC(sub_8259DDA0);
PPC_FUNC_IMPL(__imp__sub_8259DDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82332640
	ctx.lr = 0x8259DDC0;
	sub_82332640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259ddd4
	if (ctx.cr6.eq) goto loc_8259DDD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x8259DDD4;
	sub_82404040(ctx, base);
loc_8259DDD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259DDF0"))) PPC_WEAK_FUNC(sub_8259DDF0);
PPC_FUNC_IMPL(__imp__sub_8259DDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8259DDF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82400f98
	ctx.lr = 0x8259DE08;
	sub_82400F98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,25432
	ctx.r11.s64 = ctx.r11.s64 + 25432;
	// addi r10,r10,27792
	ctx.r10.s64 = ctx.r10.s64 + 27792;
	// addi r9,r9,27844
	ctx.r9.s64 = ctx.r9.s64 + 27844;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,6096
	ctx.r4.s64 = ctx.r30.s64 + 6096;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x82873b58
	ctx.lr = 0x8259DE38;
	sub_82873B58(ctx, base);
	// addi r4,r30,6120
	ctx.r4.s64 = ctx.r30.s64 + 6120;
	// addi r3,r31,6120
	ctx.r3.s64 = ctx.r31.s64 + 6120;
	// bl 0x82873b58
	ctx.lr = 0x8259DE44;
	sub_82873B58(ctx, base);
	// lwz r9,6144(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6144);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,6260
	ctx.r29.s64 = ctx.r31.s64 + 6260;
	// addi r28,r30,6260
	ctx.r28.s64 = ctx.r30.s64 + 6260;
	// stw r9,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r9.u32);
	// lwz r9,6148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6148);
	// stw r9,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r9.u32);
	// lwz r9,6152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6152);
	// stw r9,6152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6152, ctx.r9.u32);
	// lwz r9,6156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6156);
	// stw r9,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r9.u32);
	// lwz r9,6160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6160);
	// stw r9,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r9.u32);
	// lwz r9,6164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6164);
	// stw r9,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r9.u32);
	// lwz r9,6168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6168);
	// stw r9,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r9.u32);
	// lwz r9,6172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6172);
	// stw r9,6172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6172, ctx.r9.u32);
	// lwz r9,6176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6176);
	// stw r9,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r9.u32);
	// lwz r9,6180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6180);
	// stw r9,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r9.u32);
	// lwz r9,6184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6184);
	// stw r9,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r9.u32);
	// lwz r9,6188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6188);
	// stw r9,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r9.u32);
	// lwz r9,6192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// stw r9,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r9.u32);
	// lwz r9,6196(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// stw r9,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r9.u32);
	// lfs f0,6200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// lwz r9,6204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6204);
	// stw r9,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r9.u32);
	// lfs f0,6208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6208, temp.u32);
	// lfs f0,6212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6212(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6212, temp.u32);
	// lfs f0,6216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// lfs f0,6220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// lwz r9,6224(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6224);
	// stw r9,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r9.u32);
	// lwz r9,6228(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6228);
	// stw r9,6228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6228, ctx.r9.u32);
	// lwz r9,6232(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6232);
	// stw r9,6232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6232, ctx.r9.u32);
	// lwz r9,6236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6236);
	// stw r9,6236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6236, ctx.r9.u32);
	// lwz r9,6240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6240);
	// stw r9,6240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6240, ctx.r9.u32);
	// lfs f0,6244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6244, temp.u32);
	// lfs f0,6248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6248, temp.u32);
	// lfs f0,6252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// lwz r9,6256(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6256);
	// stw r9,6256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6256, ctx.r9.u32);
	// stw r10,6264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6264, ctx.r10.u32);
	// stw r11,6268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6268, ctx.r11.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r11,6272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6272, ctx.r11.u32);
	// stw r11,6276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6276, ctx.r11.u32);
	// stw r11,6280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6280, ctx.r11.u32);
	// stw r11,6260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6260, ctx.r11.u32);
	// beq cr6,0x8259dfa4
	if (ctx.cr6.eq) goto loc_8259DFA4;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8259dfa4
	if (!ctx.cr6.gt) goto loc_8259DFA4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8259df88
	if (ctx.cr0.eq) goto loc_8259DF88;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8259DF88;
	sub_82332C38(ctx, base);
loc_8259DF88:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8259DF9C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8259DFA4:
	// lwz r11,6284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6284);
	// addi r4,r30,6336
	ctx.r4.s64 = ctx.r30.s64 + 6336;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// stw r11,6284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6284, ctx.r11.u32);
	// lwz r11,6288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6288);
	// stw r11,6288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6288, ctx.r11.u32);
	// lwz r11,6292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6292);
	// stw r11,6292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6292, ctx.r11.u32);
	// lwz r11,6296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6296);
	// stw r11,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r11.u32);
	// lwz r11,6300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6300);
	// stw r11,6300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6300, ctx.r11.u32);
	// lwz r11,6304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6304);
	// stw r11,6304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6304, ctx.r11.u32);
	// lwz r11,6308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6308);
	// stw r11,6308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6308, ctx.r11.u32);
	// lwz r11,6312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6312);
	// stw r11,6312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6312, ctx.r11.u32);
	// lwz r11,6316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6316);
	// stw r11,6316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6316, ctx.r11.u32);
	// lwz r11,6320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6320);
	// stw r11,6320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6320, ctx.r11.u32);
	// lwz r11,6324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6324);
	// stw r11,6324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6324, ctx.r11.u32);
	// lwz r11,6328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6328);
	// stw r11,6328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6328, ctx.r11.u32);
	// lwz r11,6332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6332);
	// stw r11,6332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6332, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8259E018;
	sub_82873B58(ctx, base);
	// lwz r11,6360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6360);
	// addi r4,r30,6476
	ctx.r4.s64 = ctx.r30.s64 + 6476;
	// addi r3,r31,6476
	ctx.r3.s64 = ctx.r31.s64 + 6476;
	// stw r11,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r11.u32);
	// lwz r11,6364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6364);
	// stw r11,6364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6364, ctx.r11.u32);
	// lwz r11,6368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6368);
	// stw r11,6368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6368, ctx.r11.u32);
	// lwz r11,6372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6372);
	// stw r11,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r11.u32);
	// lwz r11,6376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6376);
	// stw r11,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r11.u32);
	// lfs f0,6380(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// lfs f0,6384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6384, temp.u32);
	// lfs f0,6388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6388, temp.u32);
	// lfs f0,6392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6392, temp.u32);
	// lwz r11,6396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6396);
	// stw r11,6396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6396, ctx.r11.u32);
	// lwz r11,6400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6400);
	// stw r11,6400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6400, ctx.r11.u32);
	// lwz r11,6404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6404);
	// stw r11,6404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6404, ctx.r11.u32);
	// lwz r11,6408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6408);
	// stw r11,6408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6408, ctx.r11.u32);
	// lwz r11,6412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6412);
	// stw r11,6412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6412, ctx.r11.u32);
	// lwz r11,6416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6416);
	// stw r11,6416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6416, ctx.r11.u32);
	// lwz r11,6420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6420);
	// stw r11,6420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6420, ctx.r11.u32);
	// lwz r11,6424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6424);
	// stw r11,6424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6424, ctx.r11.u32);
	// lwz r11,6428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6428);
	// stw r11,6428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6428, ctx.r11.u32);
	// lfs f0,6432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6432, temp.u32);
	// lwz r11,6436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6436);
	// stw r11,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r11.u32);
	// lwz r11,6440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6440);
	// stw r11,6440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6440, ctx.r11.u32);
	// lwz r11,6444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6444);
	// stw r11,6444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6444, ctx.r11.u32);
	// lwz r11,6448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6448);
	// stw r11,6448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6448, ctx.r11.u32);
	// lwz r11,6452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6452);
	// stw r11,6452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6452, ctx.r11.u32);
	// lwz r11,6456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6456);
	// stw r11,6456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6456, ctx.r11.u32);
	// lwz r11,6460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6460);
	// stw r11,6460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6460, ctx.r11.u32);
	// lfs f0,6464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6464, temp.u32);
	// lwz r11,6468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6468);
	// stw r11,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r11.u32);
	// lwz r11,6472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6472);
	// stw r11,6472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6472, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8259E10C;
	sub_82873B58(ctx, base);
	// lwz r11,6500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6500, ctx.r11.u32);
	// lwz r11,6504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6504);
	// stw r11,6504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6504, ctx.r11.u32);
	// lwz r11,6508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6508);
	// stw r11,6508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6508, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E130"))) PPC_WEAK_FUNC(sub_8259E130);
PPC_FUNC_IMPL(__imp__sub_8259E130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8259E138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,6476
	ctx.r3.s64 = ctx.r31.s64 + 6476;
	// bl 0x8239d768
	ctx.lr = 0x8259E14C;
	sub_8239D768(ctx, base);
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// bl 0x8239d768
	ctx.lr = 0x8259E154;
	sub_8239D768(ctx, base);
	// addi r30,r31,6260
	ctx.r30.s64 = ctx.r31.s64 + 6260;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,6276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6276);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8259E170;
	sub_82332CA8(ctx, base);
	// lwz r3,6272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259e180
	if (ctx.cr6.eq) goto loc_8259E180;
	// bl 0x82332db8
	ctx.lr = 0x8259E180;
	sub_82332DB8(ctx, base);
loc_8259E180:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,6120
	ctx.r3.s64 = ctx.r31.s64 + 6120;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x8259E198;
	sub_8239D768(ctx, base);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x8239d768
	ctx.lr = 0x8259E1A0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dbe08
	ctx.lr = 0x8259E1A8;
	sub_824DBE08(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259e1b8
	if (ctx.cr0.eq) goto loc_8259E1B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8259E1B8;
	sub_82332DB8(ctx, base);
loc_8259E1B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E1C8"))) PPC_WEAK_FUNC(sub_8259E1C8);
PPC_FUNC_IMPL(__imp__sub_8259E1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8504
	ctx.r3.s64 = ctx.r11.s64 + -8504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E1D8"))) PPC_WEAK_FUNC(sub_8259E1D8);
PPC_FUNC_IMPL(__imp__sub_8259E1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8259e210
	if (ctx.cr6.eq) goto loc_8259E210;
	// bl 0x823be820
	ctx.lr = 0x8259E200;
	sub_823BE820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259e210
	if (!ctx.cr6.eq) goto loc_8259E210;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259e21c
	goto loc_8259E21C;
loc_8259E210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e5b8
	ctx.lr = 0x8259E21C;
	sub_8233E5B8(ctx, base);
loc_8259E21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E238"))) PPC_WEAK_FUNC(sub_8259E238);
PPC_FUNC_IMPL(__imp__sub_8259E238) {
	PPC_FUNC_PROLOGUE();
	// b 0x823be820
	sub_823BE820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E240"))) PPC_WEAK_FUNC(sub_8259E240);
PPC_FUNC_IMPL(__imp__sub_8259E240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x8259E260;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259e2a0
	if (ctx.cr0.eq) goto loc_8259E2A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e6c8
	ctx.lr = 0x8259E274;
	sub_8233E6C8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,27872
	ctx.r11.s64 = ctx.r11.s64 + 27872;
	// addi r10,r10,29048
	ctx.r10.s64 = ctx.r10.s64 + 29048;
	// addi r9,r9,29100
	ctx.r9.s64 = ctx.r9.s64 + 29100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8259e2a4
	goto loc_8259E2A4;
loc_8259E2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8259E2A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E2C0"))) PPC_WEAK_FUNC(sub_8259E2C0);
PPC_FUNC_IMPL(__imp__sub_8259E2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823be820
	ctx.lr = 0x8259E2E0;
	sub_823BE820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8259e2f4
	if (ctx.cr6.eq) goto loc_8259E2F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233e668
	ctx.lr = 0x8259E2F4;
	sub_8233E668(ctx, base);
loc_8259E2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E310"))) PPC_WEAK_FUNC(sub_8259E310);
PPC_FUNC_IMPL(__imp__sub_8259E310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8259E318;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824db158
	ctx.lr = 0x8259E328;
	sub_824DB158(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,25432
	ctx.r11.s64 = ctx.r11.s64 + 25432;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r10,r10,27792
	ctx.r10.s64 = ctx.r10.s64 + 27792;
	// addi r9,r9,27844
	ctx.r9.s64 = ctx.r9.s64 + 27844;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// stw r31,6104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6104, ctx.r31.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,6100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6100, ctx.r11.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r31,6108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6108, ctx.r31.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r31,6112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6112, ctx.r31.u32);
	// addi r5,r7,-24640
	ctx.r5.s64 = ctx.r7.s64 + -24640;
	// stw r31,6116(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6116, ctx.r31.u32);
	// lis r9,8932
	ctx.r9.s64 = 585367552;
	// stw r31,6096(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6096, ctx.r31.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,6124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6124, ctx.r11.u32);
	// lis r4,-14744
	ctx.r4.s64 = -966262784;
	// stw r31,6128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6128, ctx.r31.u32);
	// lis r3,27374
	ctx.r3.s64 = 1793982464;
	// stw r31,6132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6132, ctx.r31.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r31,6136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6136, ctx.r31.u32);
	// ori r26,r9,34063
	ctx.r26.u64 = ctx.r9.u64 | 34063;
	// stw r31,6140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6140, ctx.r31.u32);
	// lis r28,20317
	ctx.r28.s64 = 1331494912;
	// stw r31,6120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6120, ctx.r31.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r11,6264(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6264, ctx.r11.u32);
	// ori r4,r4,6646
	ctx.r4.u64 = ctx.r4.u64 | 6646;
	// stw r31,6268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6268, ctx.r31.u32);
	// ori r3,r3,20549
	ctx.r3.u64 = ctx.r3.u64 | 20549;
	// stw r31,6272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6272, ctx.r31.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r31,6276(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6276, ctx.r31.u32);
	// lfs f31,904(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,6280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6280, ctx.r31.u32);
	// lfs f13,-24640(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24640);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,6260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6260, ctx.r31.u32);
	// lfs f0,-3164(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -3164);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,6320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6320, ctx.r8.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r31,6324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6324, ctx.r31.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,6328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6328, ctx.r31.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r11,6340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6340, ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r31,6344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6344, ctx.r31.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r31,6348(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6348, ctx.r31.u32);
	// addi r24,r27,-32616
	ctx.r24.s64 = ctx.r27.s64 + -32616;
	// stw r31,6352(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6352, ctx.r31.u32);
	// lis r6,-20875
	ctx.r6.s64 = -1368064000;
	// stw r31,6356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6356, ctx.r31.u32);
	// stw r31,6336(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6336, ctx.r31.u32);
	// stw r11,6480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6480, ctx.r11.u32);
	// ori r11,r28,41856
	ctx.r11.u64 = ctx.r28.u64 | 41856;
	// stw r31,6484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6484, ctx.r31.u32);
	// stw r31,6488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6488, ctx.r31.u32);
	// stw r31,6492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6492, ctx.r31.u32);
	// stw r31,6496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6496, ctx.r31.u32);
	// stw r31,6476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6476, ctx.r31.u32);
	// stfs f13,1700(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1700, temp.u32);
	// stfs f0,1820(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1820, temp.u32);
	// stw r26,1604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1604, ctx.r26.u32);
	// stfs f13,1704(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1704, temp.u32);
	// stw r4,1412(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1412, ctx.r4.u32);
	// stw r3,5344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5344, ctx.r3.u32);
	// stw r25,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r25.u32);
	// stw r31,836(r29)
	PPC_STORE_U32(ctx.r29.u32 + 836, ctx.r31.u32);
	// lwz r7,1492(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stw r11,1936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1936, ctx.r11.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r11,1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1944, ctx.r11.u32);
	// ori r11,r6,9375
	ctx.r11.u64 = ctx.r6.u64 | 9375;
	// stw r10,936(r29)
	PPC_STORE_U32(ctx.r29.u32 + 936, ctx.r10.u32);
	// lfs f13,100(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,2592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2592, ctx.r11.u32);
	// lfs f11,88(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,928(r29)
	PPC_STORE_U32(ctx.r29.u32 + 928, ctx.r9.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r30,1932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1932, ctx.r30.u32);
	// lfs f12,17328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17328);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,5332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5332, ctx.r31.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r31,840(r29)
	PPC_STORE_U32(ctx.r29.u32 + 840, ctx.r31.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r30,808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 808, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 844, ctx.r30.u32);
	// lfs f10,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f10.f64 = double(temp.f32);
	// stw r30,6256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6256, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,932(r29)
	PPC_STORE_U32(ctx.r29.u32 + 932, ctx.r8.u32);
	// stfs f13,52(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// lwz r10,1492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f12,72(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lwz r10,1492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f11,64(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lwz r10,1492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lwz r10,1492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f10,180(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 180, temp.u32);
	// lfs f13,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,1492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r30.u32);
	// stfs f0,6380(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6380, temp.u32);
	// stfs f0,6384(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6384, temp.u32);
	// stw r30,1640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1640, ctx.r30.u32);
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,6364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6364, ctx.r30.u32);
	// stfs f0,6388(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6388, temp.u32);
	// stw r30,6368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6368, ctx.r30.u32);
	// stw r31,6360(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6360, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,6372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6372, ctx.r31.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,6376(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6376, ctx.r31.u32);
	// stw r31,1972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1972, ctx.r31.u32);
	// stw r31,1976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1976, ctx.r31.u32);
	// stw r31,6460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6460, ctx.r31.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x829c1a68
	ctx.lr = 0x8259E53C;
	sub_829C1A68(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// lfs f13,-204(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -204);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,6468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6468, ctx.r31.u32);
	// stw r11,6404(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6404, ctx.r11.u32);
	// lfs f12,-60(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-32616(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,6472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6472, ctx.r31.u32);
	// stfs f31,6216(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6216, temp.u32);
	// stw r31,6396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6396, ctx.r31.u32);
	// stfs f31,6220(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6220, temp.u32);
	// stw r31,1016(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1016, ctx.r31.u32);
	// stfs f13,6208(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6208, temp.u32);
	// stw r31,6168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6168, ctx.r31.u32);
	// stfs f31,6212(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6212, temp.u32);
	// stw r31,6224(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6224, ctx.r31.u32);
	// stfs f31,6244(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6244, temp.u32);
	// stw r30,6240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6240, ctx.r30.u32);
	// stfs f12,6248(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6248, temp.u32);
	// stw r31,6144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6144, ctx.r31.u32);
	// stw r31,6296(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6296, ctx.r31.u32);
	// stw r31,6300(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6300, ctx.r31.u32);
	// stw r31,6308(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6308, ctx.r31.u32);
	// stw r31,2220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2220, ctx.r31.u32);
	// stw r30,2108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2108, ctx.r30.u32);
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f0,184(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// stw r31,3172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3172, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E5C0"))) PPC_WEAK_FUNC(sub_8259E5C0);
PPC_FUNC_IMPL(__imp__sub_8259E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8259E5C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824dd1f8
	ctx.lr = 0x8259E5D4;
	sub_824DD1F8(ctx, base);
	// lwz r11,6308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259e618
	if (ctx.cr6.eq) goto loc_8259E618;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8259E604;
	sub_8233A258(ctx, base);
	// lis r4,11869
	ctx.r4.s64 = 777846784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,20346
	ctx.r4.u64 = ctx.r4.u64 | 20346;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x8259E618;
	sub_829C3740(ctx, base);
loc_8259E618:
	// lwz r11,6112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259e6a8
	if (!ctx.cr6.gt) goto loc_8259E6A8;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8259E634:
	// lwz r10,6108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6108);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259E648;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259e678
	if (ctx.cr0.eq) goto loc_8259E678;
	// bl 0x823c5e60
	ctx.lr = 0x8259E654;
	sub_823C5E60(ctx, base);
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
	ctx.lr = 0x8259E66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8259e67c
	if (!ctx.cr0.eq) goto loc_8259E67C;
loc_8259E678:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8259E67C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259e694
	if (ctx.cr6.eq) goto loc_8259E694;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259E694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259E694:
	// lwz r11,6112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8259e634
	if (ctx.cr6.lt) goto loc_8259E634;
loc_8259E6A8:
	// lwz r11,6116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6116);
	// addi r3,r30,6096
	ctx.r3.s64 = ctx.r30.s64 + 6096;
	// stw r27,6112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6112, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259e6cc
	if (ctx.cr6.eq) goto loc_8259E6CC;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8259E6CC;
	sub_82332C38(ctx, base);
loc_8259E6CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f1398
	ctx.lr = 0x8259E6D4;
	sub_824F1398(ctx, base);
	// lwz r11,6396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259e73c
	if (ctx.cr6.eq) goto loc_8259E73C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8259E6E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8259e72c
	if (ctx.cr0.eq) goto loc_8259E72C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r30,6396(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6396);
	// bl 0x82833180
	ctx.lr = 0x8259E700;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,23096
	ctx.r11.s64 = ctx.r11.s64 + 23096;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8259e730
	goto loc_8259E730;
loc_8259E72C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8259E730:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8259E73C;
	sub_82833A30(ctx, base);
loc_8259E73C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E748"))) PPC_WEAK_FUNC(sub_8259E748);
PPC_FUNC_IMPL(__imp__sub_8259E748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824e8298
	ctx.lr = 0x8259E768;
	sub_824E8298(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259e77c
	if (ctx.cr6.eq) goto loc_8259E77C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8259E77C:
	// lwz r11,6500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6500);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8259e790
	if (!ctx.cr6.eq) goto loc_8259E790;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6504, ctx.r11.u32);
loc_8259E790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E7A8"))) PPC_WEAK_FUNC(sub_8259E7A8);
PPC_FUNC_IMPL(__imp__sub_8259E7A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8259f0d0
	sub_8259F0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259E7B0"))) PPC_WEAK_FUNC(sub_8259E7B0);
PPC_FUNC_IMPL(__imp__sub_8259E7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-22241
	ctx.r3.s64 = -1457586176;
	// ori r3,r3,1761
	ctx.r3.u64 = ctx.r3.u64 | 1761;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E7C0"))) PPC_WEAK_FUNC(sub_8259E7C0);
PPC_FUNC_IMPL(__imp__sub_8259E7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,2658
	ctx.r3.s64 = 174194688;
	// ori r3,r3,36984
	ctx.r3.u64 = ctx.r3.u64 | 36984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E7D0"))) PPC_WEAK_FUNC(sub_8259E7D0);
PPC_FUNC_IMPL(__imp__sub_8259E7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27328);
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

__attribute__((alias("__imp__sub_8259E7F0"))) PPC_WEAK_FUNC(sub_8259E7F0);
PPC_FUNC_IMPL(__imp__sub_8259E7F0) {
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
	// lis r11,16492
	ctx.r11.s64 = 1080819712;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r11,r11,24597
	ctx.r11.u64 = ctx.r11.u64 | 24597;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8259E81C;
	sub_82410060(ctx, base);
	// lis r11,-9927
	ctx.r11.s64 = -650575872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,63382
	ctx.r11.u64 = ctx.r11.u64 | 63382;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8259E834;
	sub_82410060(ctx, base);
	// lis r11,13461
	ctx.r11.s64 = 882180096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,24655
	ctx.r11.u64 = ctx.r11.u64 | 24655;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8259E84C;
	sub_82410060(ctx, base);
	// lis r11,6974
	ctx.r11.s64 = 457048064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,16913
	ctx.r11.u64 = ctx.r11.u64 | 16913;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8259E864;
	sub_82410060(ctx, base);
	// lis r11,24312
	ctx.r11.s64 = 1593311232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,34857
	ctx.r11.u64 = ctx.r11.u64 | 34857;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8259E87C;
	sub_82410060(ctx, base);
	// lis r11,1014
	ctx.r11.s64 = 66453504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,10493
	ctx.r11.u64 = ctx.r11.u64 | 10493;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8259E894;
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

__attribute__((alias("__imp__sub_8259E8A8"))) PPC_WEAK_FUNC(sub_8259E8A8);
PPC_FUNC_IMPL(__imp__sub_8259E8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,6404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6404, ctx.r4.u32);
	// beq cr6,0x8259e934
	if (ctx.cr6.eq) goto loc_8259E934;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8259e934
	if (ctx.cr6.eq) goto loc_8259E934;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x8259e908
	if (ctx.cr6.eq) goto loc_8259E908;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x8259e964
	if (!ctx.cr6.eq) goto loc_8259E964;
	// lis r4,-5473
	ctx.r4.s64 = -358678528;
	// ori r4,r4,2988
	ctx.r4.u64 = ctx.r4.u64 | 2988;
	// bl 0x8284ced0
	ctx.lr = 0x8259E8EC;
	sub_8284CED0(ctx, base);
	// lis r4,-30449
	ctx.r4.s64 = -1995505664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,41520
	ctx.r4.u64 = ctx.r4.u64 | 41520;
	// bl 0x8284ced0
	ctx.lr = 0x8259E8FC;
	sub_8284CED0(ctx, base);
	// lis r4,-13309
	ctx.r4.s64 = -872218624;
	// ori r4,r4,31101
	ctx.r4.u64 = ctx.r4.u64 | 31101;
	// b 0x8259e95c
	goto loc_8259E95C;
loc_8259E908:
	// lis r4,21399
	ctx.r4.s64 = 1402404864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20909
	ctx.r4.u64 = ctx.r4.u64 | 20909;
	// bl 0x8284ced0
	ctx.lr = 0x8259E918;
	sub_8284CED0(ctx, base);
	// lis r4,-10437
	ctx.r4.s64 = -683999232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,33041
	ctx.r4.u64 = ctx.r4.u64 | 33041;
	// bl 0x8284ced0
	ctx.lr = 0x8259E928;
	sub_8284CED0(ctx, base);
	// lis r4,17341
	ctx.r4.s64 = 1136459776;
	// ori r4,r4,9316
	ctx.r4.u64 = ctx.r4.u64 | 9316;
	// b 0x8259e95c
	goto loc_8259E95C;
loc_8259E934:
	// lis r4,24555
	ctx.r4.s64 = 1609236480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16296
	ctx.r4.u64 = ctx.r4.u64 | 16296;
	// bl 0x8284ced0
	ctx.lr = 0x8259E944;
	sub_8284CED0(ctx, base);
	// lis r4,-6230
	ctx.r4.s64 = -408289280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,15870
	ctx.r4.u64 = ctx.r4.u64 | 15870;
	// bl 0x8284ced0
	ctx.lr = 0x8259E954;
	sub_8284CED0(ctx, base);
	// lis r4,18221
	ctx.r4.s64 = 1194131456;
	// ori r4,r4,53723
	ctx.r4.u64 = ctx.r4.u64 | 53723;
loc_8259E95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284ced0
	ctx.lr = 0x8259E964;
	sub_8284CED0(ctx, base);
loc_8259E964:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259E978"))) PPC_WEAK_FUNC(sub_8259E978);
PPC_FUNC_IMPL(__imp__sub_8259E978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8259E990;
	sub_824DD5B0(ctx, base);
	// lis r5,16492
	ctx.r5.s64 = 1080819712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,24597
	ctx.r5.u64 = ctx.r5.u64 | 24597;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259E9A4;
	sub_8284E580(ctx, base);
	// lis r5,-9927
	ctx.r5.s64 = -650575872;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,63382
	ctx.r5.u64 = ctx.r5.u64 | 63382;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259E9B8;
	sub_8284E580(ctx, base);
	// lis r5,13461
	ctx.r5.s64 = 882180096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,24655
	ctx.r5.u64 = ctx.r5.u64 | 24655;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259E9CC;
	sub_8284E580(ctx, base);
	// lis r5,6974
	ctx.r5.s64 = 457048064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,16913
	ctx.r5.u64 = ctx.r5.u64 | 16913;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259E9E0;
	sub_8284E580(ctx, base);
	// lis r5,24312
	ctx.r5.s64 = 1593311232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,34857
	ctx.r5.u64 = ctx.r5.u64 | 34857;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259E9F4;
	sub_8284E580(ctx, base);
	// lis r5,1014
	ctx.r5.s64 = 66453504;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,10493
	ctx.r5.u64 = ctx.r5.u64 | 10493;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284e580
	ctx.lr = 0x8259EA08;
	sub_8284E580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259EA20"))) PPC_WEAK_FUNC(sub_8259EA20);
PPC_FUNC_IMPL(__imp__sub_8259EA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824dd8b8
	ctx.lr = 0x8259EA3C;
	sub_824DD8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x8259EA44;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259eab0
	if (ctx.cr0.eq) goto loc_8259EAB0;
	// lis r5,21829
	ctx.r5.s64 = 1430585344;
	// addi r6,r31,6416
	ctx.r6.s64 = ctx.r31.s64 + 6416;
	// ori r5,r5,39014
	ctx.r5.u64 = ctx.r5.u64 | 39014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e7350
	ctx.lr = 0x8259EA64;
	sub_824E7350(ctx, base);
	// lis r5,-5739
	ctx.r5.s64 = -376111104;
	// addi r6,r31,6364
	ctx.r6.s64 = ctx.r31.s64 + 6364;
	// ori r5,r5,27164
	ctx.r5.u64 = ctx.r5.u64 | 27164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e7350
	ctx.lr = 0x8259EA7C;
	sub_824E7350(ctx, base);
	// lis r5,-6274
	ctx.r5.s64 = -411172864;
	// addi r6,r31,6372
	ctx.r6.s64 = ctx.r31.s64 + 6372;
	// ori r5,r5,37734
	ctx.r5.u64 = ctx.r5.u64 | 37734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e7350
	ctx.lr = 0x8259EA94;
	sub_824E7350(ctx, base);
	// lis r5,-13067
	ctx.r5.s64 = -856358912;
	// addi r6,r31,6376
	ctx.r6.s64 = ctx.r31.s64 + 6376;
	// ori r5,r5,4386
	ctx.r5.u64 = ctx.r5.u64 | 4386;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e7350
	ctx.lr = 0x8259EAAC;
	sub_824E7350(ctx, base);
	// b 0x8259eabc
	goto loc_8259EABC;
loc_8259EAB0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,23616
	ctx.r3.s64 = ctx.r11.s64 + 23616;
	// bl 0x825d6ef8
	ctx.lr = 0x8259EABC;
	sub_825D6EF8(ctx, base);
loc_8259EABC:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8259eadc
	if (ctx.cr6.eq) goto loc_8259EADC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8259eadc
	if (ctx.cr6.eq) goto loc_8259EADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f3d8
	ctx.lr = 0x8259EAD8;
	sub_8259F3D8(ctx, base);
	// b 0x8259eae4
	goto loc_8259EAE4;
loc_8259EADC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r11.u32);
loc_8259EAE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f0d0
	ctx.lr = 0x8259EAEC;
	sub_8259F0D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259EB08"))) PPC_WEAK_FUNC(sub_8259EB08);
PPC_FUNC_IMPL(__imp__sub_8259EB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8259EB10;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8259eb40
	if (ctx.cr6.eq) goto loc_8259EB40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8259eb78
	if (!ctx.cr6.eq) goto loc_8259EB78;
loc_8259EB40:
	// lwz r11,6360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6360);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8259eb60
	if (ctx.cr6.eq) goto loc_8259EB60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8259eb78
	if (!ctx.cr6.eq) goto loc_8259EB78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f4b0
	ctx.lr = 0x8259EB5C;
	sub_8259F4B0(ctx, base);
	// b 0x8259eb74
	goto loc_8259EB74;
loc_8259EB60:
	// lwz r11,6396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259eb78
	if (ctx.cr6.eq) goto loc_8259EB78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f3d8
	ctx.lr = 0x8259EB74;
	sub_8259F3D8(ctx, base);
loc_8259EB74:
	// stw r30,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r30.u32);
loc_8259EB78:
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259ebe8
	if (!ctx.cr6.eq) goto loc_8259EBE8;
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8259ebc4
	if (ctx.cr6.eq) goto loc_8259EBC4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8259ebe8
	if (!ctx.cr6.eq) goto loc_8259EBE8;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EBAC;
	sub_829B9720(ctx, base);
	// bl 0x824ca670
	ctx.lr = 0x8259EBB0;
	sub_824CA670(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825a2668
	ctx.lr = 0x8259EBC0;
	sub_825A2668(ctx, base);
	// b 0x8259ebe8
	goto loc_8259EBE8;
loc_8259EBC4:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EBD4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8259EBD8;
	sub_82333A20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825a2288
	ctx.lr = 0x8259EBE8;
	sub_825A2288(ctx, base);
loc_8259EBE8:
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259edfc
	if (!ctx.cr6.eq) goto loc_8259EDFC;
	// lwz r11,6460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6460);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8259edfc
	if (!ctx.cr6.eq) goto loc_8259EDFC;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r28,r1,120
	ctx.r28.s64 = ctx.r1.s64 + 120;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// addi r26,r31,620
	ctx.r26.s64 = ctx.r31.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x8259EC20;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8259EC5C;
	sub_828250B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8259ec8c
	if (ctx.cr0.eq) goto loc_8259EC8C;
	// bl 0x823ad9b8
	ctx.lr = 0x8259EC68;
	sub_823AD9B8(ctx, base);
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
	ctx.lr = 0x8259EC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x8259ec90
	if (!ctx.cr0.eq) goto loc_8259EC90;
loc_8259EC8C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8259EC90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259ec9c
	if (ctx.cr6.eq) goto loc_8259EC9C;
	// stw r30,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r30.u32);
loc_8259EC9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259ECB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259ECCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r27,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r27.u32);
	// stw r30,6460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6460, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
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
	ctx.lr = 0x8259ECF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259ed14
	if (!ctx.cr6.gt) goto loc_8259ED14;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x8259ede4
	goto loc_8259EDE4;
loc_8259ED14:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259edb0
	if (!ctx.cr6.eq) goto loc_8259EDB0;
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
	ctx.lr = 0x8259ED38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r28,r27,948
	ctx.r28.s64 = ctx.r27.s64 + 948;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8259ed90
	if (!ctx.cr6.gt) goto loc_8259ED90;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8259ED4C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8259ed7c
	if (!ctx.cr6.eq) goto loc_8259ED7C;
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
	ctx.lr = 0x8259ED74;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8259ED7C:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8259ed4c
	if (ctx.cr6.lt) goto loc_8259ED4C;
loc_8259ED90:
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
	ctx.lr = 0x8259EDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259EDB0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8259ede4
	if (!ctx.cr0.eq) goto loc_8259EDE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8259ede4
	if (ctx.cr0.eq) goto loc_8259EDE4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8259EDE4;
	sub_82410060(ctx, base);
loc_8259EDE4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8259ef30
	goto loc_8259EF30;
loc_8259EDFC:
	// lwz r11,6472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6472);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259ee7c
	if (ctx.cr6.eq) goto loc_8259EE7C;
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259ee7c
	if (!ctx.cr6.eq) goto loc_8259EE7C;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259ee78
	if (ctx.cr6.eq) goto loc_8259EE78;
	// bl 0x82414510
	ctx.lr = 0x8259EE28;
	sub_82414510(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6464, temp.u32);
	// beq 0x8259ee54
	if (ctx.cr0.eq) goto loc_8259EE54;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8259ee54
	if (ctx.cr6.eq) goto loc_8259EE54;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8259ee58
	goto loc_8259EE58;
loc_8259EE54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8259EE58:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r4,-4897
	ctx.r4.s64 = -320929792;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,49164
	ctx.r4.u64 = ctx.r4.u64 | 49164;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x8259EE78;
	sub_829E3FD0(ctx, base);
loc_8259EE78:
	// stw r27,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r27.u32);
loc_8259EE7C:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8259ef24
	if (!ctx.cr6.eq) goto loc_8259EF24;
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259ef24
	if (!ctx.cr6.eq) goto loc_8259EF24;
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8259ef24
	if (!ctx.cr6.eq) goto loc_8259EF24;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,6388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6388);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EEB8;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259EEBC;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259ef00
	if (ctx.cr0.eq) goto loc_8259EF00;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EED4;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259EED8;
	sub_824090E0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,7796(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7796);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EEF0;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259EEF4;
	sub_824090E0(ctx, base);
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// lfs f13,7612(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7612);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f31,f13,f31,f0
	ctx.f31.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f0.f64)));
loc_8259EF00:
	// lfs f0,6380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,6380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8259ef24
	if (!ctx.cr6.lt) goto loc_8259EF24;
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// stw r27,6472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6472, ctx.r27.u32);
loc_8259EF24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x824df648
	ctx.lr = 0x8259EF30;
	sub_824DF648(ctx, base);
loc_8259EF30:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_8259EF48"))) PPC_WEAK_FUNC(sub_8259EF48);
PPC_FUNC_IMPL(__imp__sub_8259EF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8259EF50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259EF7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e1bb0
	ctx.lr = 0x8259EF98;
	sub_824E1BB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259EFA0"))) PPC_WEAK_FUNC(sub_8259EFA0);
PPC_FUNC_IMPL(__imp__sub_8259EFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8259EFA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,6396(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259EFC4;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259EFC8;
	sub_824090E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8259f0c4
	if (ctx.cr0.eq) goto loc_8259F0C4;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-11318
	ctx.r5.s64 = -741736448;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,26510
	ctx.r5.u64 = ctx.r5.u64 | 26510;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8259EFF8;
	sub_823CF190(ctx, base);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8259f0c4
	if (ctx.cr6.eq) goto loc_8259F0C4;
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8284da30
	ctx.lr = 0x8259F01C;
	sub_8284DA30(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8259F04C;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259f0a0
	if (ctx.cr0.eq) goto loc_8259F0A0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,280(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8259F0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259F0A0:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8259F0B0;
	sub_8233A258(ctx, base);
	// lis r4,2746
	ctx.r4.s64 = 179961856;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,64487
	ctx.r4.u64 = ctx.r4.u64 | 64487;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829c3740
	ctx.lr = 0x8259F0C4;
	sub_829C3740(ctx, base);
loc_8259F0C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259F0D0"))) PPC_WEAK_FUNC(sub_8259F0D0);
PPC_FUNC_IMPL(__imp__sub_8259F0D0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F104;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F108;
	sub_824090E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259f264
	if (ctx.cr0.eq) goto loc_8259F264;
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259f264
	if (ctx.cr6.eq) goto loc_8259F264;
	// lwz r11,2184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// li r4,306
	ctx.r4.s64 = 306;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F13C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// li r4,107
	ctx.r4.s64 = 107;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,6384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6384, temp.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,6388(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6388, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x8259F1F8;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259f264
	if (ctx.cr0.eq) goto loc_8259F264;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,23740
	ctx.r3.s64 = ctx.r11.s64 + 23740;
	// bl 0x82816528
	ctx.lr = 0x8259F20C;
	sub_82816528(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259f238
	if (ctx.cr6.eq) goto loc_8259F238;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8259f23c
	goto loc_8259F23C;
loc_8259F238:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8259F23C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,106
	ctx.r4.s64 = 106;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_8259F264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8259F288"))) PPC_WEAK_FUNC(sub_8259F288);
PPC_FUNC_IMPL(__imp__sub_8259F288) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,6396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6396);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F2BC;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F2C0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259f2e0
	if (ctx.cr0.eq) goto loc_8259F2E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8259F2E0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8259F300"))) PPC_WEAK_FUNC(sub_8259F300);
PPC_FUNC_IMPL(__imp__sub_8259F300) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,6396(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6396);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F330;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F334;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259f360
	if (ctx.cr0.eq) goto loc_8259F360;
	// addi r11,r30,1595
	ctx.r11.s64 = ctx.r30.s64 + 1595;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8259f360
	if (ctx.cr6.gt) goto loc_8259F360;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8259F360:
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

__attribute__((alias("__imp__sub_8259F380"))) PPC_WEAK_FUNC(sub_8259F380);
PPC_FUNC_IMPL(__imp__sub_8259F380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,5416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5412);
	ctx.f13.f64 = double(temp.f32);
	// li r4,312
	ctx.r4.s64 = 312;
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259F3D8"))) PPC_WEAK_FUNC(sub_8259F3D8);
PPC_FUNC_IMPL(__imp__sub_8259F3D8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F404;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F408;
	sub_824090E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259f498
	if (ctx.cr0.eq) goto loc_8259F498;
	// lis r5,24312
	ctx.r5.s64 = 1593311232;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,34857
	ctx.r5.u64 = ctx.r5.u64 | 34857;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284e580
	ctx.lr = 0x8259F424;
	sub_8284E580(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicr r9,r11,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,6364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6364, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829becf8
	ctx.lr = 0x8259F48C;
	sub_829BECF8(ctx, base);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
loc_8259F498:
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

__attribute__((alias("__imp__sub_8259F4B0"))) PPC_WEAK_FUNC(sub_8259F4B0);
PPC_FUNC_IMPL(__imp__sub_8259F4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8259F4B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259f0d0
	ctx.lr = 0x8259F4C8;
	sub_8259F0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259efa0
	ctx.lr = 0x8259F4D0;
	sub_8259EFA0(ctx, base);
	// lis r5,24312
	ctx.r5.s64 = 1593311232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,34857
	ctx.r5.u64 = ctx.r5.u64 | 34857;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8284e580
	ctx.lr = 0x8259F4E4;
	sub_8284E580(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,6364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6364, ctx.r29.u32);
	// stw r29,6372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6372, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829becf8
	ctx.lr = 0x8259F548;
	sub_829BECF8(ctx, base);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// bl 0x829c2520
	ctx.lr = 0x8259F55C;
	sub_829C2520(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x8259f570
	if (ctx.cr0.eq) goto loc_8259F570;
	// stfs f31,248(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
loc_8259F570:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x8259F578;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259f5c4
	if (ctx.cr0.eq) goto loc_8259F5C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x8259F5A4;
	sub_829BED50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F5C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8259F5C4:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8259F5CC;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8259f618
	if (ctx.cr0.eq) goto loc_8259F618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,6396(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8259F5E4;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r11,r11,23512
	ctx.r11.s64 = ctx.r11.s64 + 23512;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// b 0x8259f61c
	goto loc_8259F61C;
loc_8259F618:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8259F61C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8259F62C;
	sub_82833A30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259F638"))) PPC_WEAK_FUNC(sub_8259F638);
PPC_FUNC_IMPL(__imp__sub_8259F638) {
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
	// lis r5,24312
	ctx.r5.s64 = 1593311232;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,34857
	ctx.r5.u64 = ctx.r5.u64 | 34857;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8284e580
	ctx.lr = 0x8259F660;
	sub_8284E580(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F674;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F678;
	sub_824090E0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,280(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r11,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8259F6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8259F6E8"))) PPC_WEAK_FUNC(sub_8259F6E8);
PPC_FUNC_IMPL(__imp__sub_8259F6E8) {
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
	// lis r5,24312
	ctx.r5.s64 = 1593311232;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,34857
	ctx.r5.u64 = ctx.r5.u64 | 34857;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8284e580
	ctx.lr = 0x8259F70C;
	sub_8284E580(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicr r9,r11,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259F75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8259F770"))) PPC_WEAK_FUNC(sub_8259F770);
PPC_FUNC_IMPL(__imp__sub_8259F770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824dc238
	ctx.lr = 0x8259F788;
	sub_824DC238(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,6004
	ctx.r4.s64 = ctx.r31.s64 + 6004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23764
	ctx.r5.s64 = ctx.r11.s64 + 23764;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x8259F7A4;
	sub_824F9968(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,6008
	ctx.r4.s64 = ctx.r31.s64 + 6008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23796
	ctx.r5.s64 = ctx.r11.s64 + 23796;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x8259F7C0;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5968
	ctx.r4.s64 = ctx.r31.s64 + 5968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23828
	ctx.r5.s64 = ctx.r11.s64 + 23828;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x8259F7DC;
	sub_82416240(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,6072
	ctx.r4.s64 = ctx.r31.s64 + 6072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23848
	ctx.r5.s64 = ctx.r11.s64 + 23848;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82416240
	ctx.lr = 0x8259F7F8;
	sub_82416240(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5976
	ctx.r4.s64 = ctx.r31.s64 + 5976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23876
	ctx.r5.s64 = ctx.r11.s64 + 23876;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x8259F814;
	sub_82416240(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5984
	ctx.r4.s64 = ctx.r31.s64 + 5984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23908
	ctx.r5.s64 = ctx.r11.s64 + 23908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5fd8
	ctx.lr = 0x8259F830;
	sub_824F5FD8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5752
	ctx.r4.s64 = ctx.r31.s64 + 5752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23952
	ctx.r5.s64 = ctx.r11.s64 + 23952;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8259F84C;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5756
	ctx.r4.s64 = ctx.r31.s64 + 5756;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,23988
	ctx.r5.s64 = ctx.r11.s64 + 23988;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8259F868;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,6024
	ctx.r4.s64 = ctx.r31.s64 + 6024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24024
	ctx.r5.s64 = ctx.r11.s64 + 24024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8259F884;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5748
	ctx.r4.s64 = ctx.r31.s64 + 5748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24064
	ctx.r5.s64 = ctx.r11.s64 + 24064;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8259F8A0;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5828
	ctx.r4.s64 = ctx.r31.s64 + 5828;
	// addi r5,r11,24100
	ctx.r5.s64 = ctx.r11.s64 + 24100;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x8259F8BC;
	sub_824115B8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5900
	ctx.r4.s64 = ctx.r31.s64 + 5900;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24128
	ctx.r5.s64 = ctx.r11.s64 + 24128;
	// bl 0x824115b8
	ctx.lr = 0x8259F8D8;
	sub_824115B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5832
	ctx.r4.s64 = ctx.r31.s64 + 5832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24168
	ctx.r5.s64 = ctx.r11.s64 + 24168;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f5de8
	ctx.lr = 0x8259F8F4;
	sub_824F5DE8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5776
	ctx.r4.s64 = ctx.r31.s64 + 5776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,24200
	ctx.r5.s64 = ctx.r11.s64 + 24200;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824f9968
	ctx.lr = 0x8259F910;
	sub_824F9968(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r31,5764
	ctx.r4.s64 = ctx.r31.s64 + 5764;
	// addi r5,r11,24224
	ctx.r5.s64 = ctx.r11.s64 + 24224;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9968
	ctx.lr = 0x8259F92C;
	sub_824F9968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259F940"))) PPC_WEAK_FUNC(sub_8259F940);
PPC_FUNC_IMPL(__imp__sub_8259F940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8259F948;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824eab88
	ctx.lr = 0x8259F954;
	sub_824EAB88(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8259fb74
	if (!ctx.cr6.eq) goto loc_8259FB74;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// addi r30,r31,6400
	ctx.r30.s64 = ctx.r31.s64 + 6400;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259F97C;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259F980;
	sub_824090E0(ctx, base);
	// stw r3,6400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6400, ctx.r3.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259F998;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6404
	ctx.r10.s64 = ctx.r31.s64 + 6404;
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
	ctx.lr = 0x8259F9B8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6364
	ctx.r10.s64 = ctx.r31.s64 + 6364;
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
	ctx.lr = 0x8259F9D8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6468
	ctx.r10.s64 = ctx.r31.s64 + 6468;
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
	ctx.lr = 0x8259F9F8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6372
	ctx.r10.s64 = ctx.r31.s64 + 6372;
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
	ctx.lr = 0x8259FA18;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6148
	ctx.r10.s64 = ctx.r31.s64 + 6148;
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
	ctx.lr = 0x8259FA38;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6152
	ctx.r10.s64 = ctx.r31.s64 + 6152;
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
	ctx.lr = 0x8259FA58;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6420
	ctx.r10.s64 = ctx.r31.s64 + 6420;
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
	ctx.lr = 0x8259FA78;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6144
	ctx.r10.s64 = ctx.r31.s64 + 6144;
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
	ctx.lr = 0x8259FA98;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6224
	ctx.r10.s64 = ctx.r31.s64 + 6224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x8259FAB8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6296
	ctx.r10.s64 = ctx.r31.s64 + 6296;
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
	ctx.lr = 0x8259FAD8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6228
	ctx.r10.s64 = ctx.r31.s64 + 6228;
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
	ctx.lr = 0x8259FAF8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6172
	ctx.r10.s64 = ctx.r31.s64 + 6172;
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
	ctx.lr = 0x8259FB18;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6160
	ctx.r10.s64 = ctx.r31.s64 + 6160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x8259FB38;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,6400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6400);
	// lwz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8259fb74
	if (!ctx.cr6.eq) goto loc_8259FB74;
	// addi r11,r31,6380
	ctx.r11.s64 = ctx.r31.s64 + 6380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FB68;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FB74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8259FB80"))) PPC_WEAK_FUNC(sub_8259FB80);
PPC_FUNC_IMPL(__imp__sub_8259FB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8259FB88;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x824eb970
	ctx.lr = 0x8259FB98;
	sub_824EB970(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825a0268
	if (!ctx.cr6.eq) goto loc_825A0268;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// addi r26,r31,6400
	ctx.r26.s64 = ctx.r31.s64 + 6400;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8259FBC0;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x8259FBC4;
	sub_824090E0(ctx, base);
	// stw r3,6400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6400, ctx.r3.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FBDC;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FC00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fc38
	if (!ctx.cr0.eq) goto loc_8259FC38;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FC2C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FC38:
	// addi r27,r31,6404
	ctx.r27.s64 = ctx.r31.s64 + 6404;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FC4C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fca8
	if (!ctx.cr0.eq) goto loc_8259FCA8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FC9C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FCA8:
	// addi r27,r31,6364
	ctx.r27.s64 = ctx.r31.s64 + 6364;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FCBC;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FCE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FCF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fd18
	if (!ctx.cr0.eq) goto loc_8259FD18;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FD0C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FD18:
	// addi r27,r31,6468
	ctx.r27.s64 = ctx.r31.s64 + 6468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FD2C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fd88
	if (!ctx.cr0.eq) goto loc_8259FD88;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FD7C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FD88:
	// addi r27,r31,6372
	ctx.r27.s64 = ctx.r31.s64 + 6372;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FD9C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fdf8
	if (!ctx.cr0.eq) goto loc_8259FDF8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FDEC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FDF8:
	// addi r27,r31,6148
	ctx.r27.s64 = ctx.r31.s64 + 6148;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FE0C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FE30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fe68
	if (!ctx.cr0.eq) goto loc_8259FE68;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FE5C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FE68:
	// addi r27,r31,6152
	ctx.r27.s64 = ctx.r31.s64 + 6152;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FE7C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259fed8
	if (!ctx.cr0.eq) goto loc_8259FED8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FECC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FED8:
	// addi r27,r31,6420
	ctx.r27.s64 = ctx.r31.s64 + 6420;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FEEC;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FF10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259ff48
	if (!ctx.cr0.eq) goto loc_8259FF48;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FF3C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FF48:
	// addi r27,r31,6144
	ctx.r27.s64 = ctx.r31.s64 + 6144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FF5C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FF80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8259ffb8
	if (!ctx.cr0.eq) goto loc_8259FFB8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FFAC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8259FFB8:
	// addi r27,r31,6224
	ctx.r27.s64 = ctx.r31.s64 + 6224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x8259FFCC;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a0028
	if (!ctx.cr0.eq) goto loc_825A0028;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A001C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A0028:
	// addi r27,r31,6296
	ctx.r27.s64 = ctx.r31.s64 + 6296;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A003C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a0098
	if (!ctx.cr0.eq) goto loc_825A0098;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A008C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A0098:
	// addi r27,r31,6228
	ctx.r27.s64 = ctx.r31.s64 + 6228;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A00AC;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A00D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A00E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a0108
	if (!ctx.cr0.eq) goto loc_825A0108;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A00FC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A0108:
	// addi r27,r31,6172
	ctx.r27.s64 = ctx.r31.s64 + 6172;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A011C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a0178
	if (!ctx.cr0.eq) goto loc_825A0178;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A016C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A0178:
	// addi r27,r31,6160
	ctx.r27.s64 = ctx.r31.s64 + 6160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A018C;
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
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A01B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A01C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a01e8
	if (!ctx.cr0.eq) goto loc_825A01E8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A01DC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A01E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825a0268
	if (!ctx.cr6.eq) goto loc_825A0268;
	// addi r27,r31,6380
	ctx.r27.s64 = ctx.r31.s64 + 6380;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A020C;
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
	ctx.lr = 0x825A0230;
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
	ctx.lr = 0x825A0244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a0268
	if (!ctx.cr0.eq) goto loc_825A0268;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825A025C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825A0268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0278"))) PPC_WEAK_FUNC(sub_825A0278);
PPC_FUNC_IMPL(__imp__sub_825A0278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A0280;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ee9a8
	ctx.lr = 0x825A0294;
	sub_824EE9A8(ctx, base);
	// lis r11,-10641
	ctx.r11.s64 = -697368576;
	// ori r11,r11,10578
	ctx.r11.u64 = ctx.r11.u64 | 10578;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0308
	if (!ctx.cr6.eq) goto loc_825A0308;
	// lwz r3,6400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0824
	if (ctx.cr6.eq) goto loc_825A0824;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,6396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6396, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A02C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a02e8
	if (ctx.cr0.eq) goto loc_825A02E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7216);
	// lwz r11,2356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A02E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A02E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f0d0
	ctx.lr = 0x825A02F0;
	sub_8259F0D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r11.u32);
	// lwz r11,6400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6400);
	// stw r10,12588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12588, ctx.r10.u32);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0308:
	// lis r11,-10332
	ctx.r11.s64 = -677117952;
	// ori r11,r11,52077
	ctx.r11.u64 = ctx.r11.u64 | 52077;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0338
	if (!ctx.cr6.eq) goto loc_825A0338;
	// lwz r11,6172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a032c
	if (ctx.cr6.eq) goto loc_825A032C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825a0330
	goto loc_825A0330;
loc_825A032C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A0330:
	// stw r11,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r11.u32);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0338:
	// lis r11,1939
	ctx.r11.s64 = 127074304;
	// ori r11,r11,14255
	ctx.r11.u64 = ctx.r11.u64 | 14255;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0354
	if (!ctx.cr6.eq) goto loc_825A0354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2cb8
	ctx.lr = 0x825A0350;
	sub_825A2CB8(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0354:
	// lis r11,-15481
	ctx.r11.s64 = -1014562816;
	// ori r11,r11,41368
	ctx.r11.u64 = ctx.r11.u64 | 41368;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a04f0
	if (!ctx.cr6.eq) goto loc_825A04F0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A0380;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825A0384;
	sub_82333A20(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,6296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x825a03c4
	if (ctx.cr6.eq) goto loc_825A03C4;
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r4,6224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x825a0ae0
	ctx.lr = 0x825A03C0;
	sub_825A0AE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_825A03C4:
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825a04d8
	if (ctx.cr6.eq) goto loc_825A04D8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x825a04c4
	if (ctx.cr6.eq) goto loc_825A04C4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x825a04ac
	if (ctx.cr6.eq) goto loc_825A04AC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x825a0408
	if (ctx.cr6.eq) goto loc_825A0408;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x825a0824
	if (!ctx.cr6.eq) goto loc_825A0824;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825a0824
	if (ctx.cr6.eq) goto loc_825A0824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2158
	ctx.lr = 0x825A0404;
	sub_825A2158(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0408:
	// lwz r11,6332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6332);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a0468
	if (!ctx.cr6.gt) goto loc_825A0468;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_825A0428:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,6224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// bl 0x825a0ae0
	ctx.lr = 0x825A0440;
	sub_825A0AE0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825a0458
	if (ctx.cr0.eq) goto loc_825A0458;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2900
	ctx.lr = 0x825A0458;
	sub_825A2900(ctx, base);
loc_825A0458:
	// lwz r11,6332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6332);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a0428
	if (ctx.cr6.lt) goto loc_825A0428;
loc_825A0468:
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r4,r11,24256
	ctx.r4.s64 = ctx.r11.s64 + 24256;
	// bl 0x82816c30
	ctx.lr = 0x825A0490;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823339b8
	ctx.lr = 0x825A049C;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A04A0;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x825A04A8;
	sub_82333960(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A04AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825a0824
	if (ctx.cr6.eq) goto loc_825A0824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2528
	ctx.lr = 0x825A04C0;
	sub_825A2528(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A04C4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2470
	ctx.lr = 0x825A04D4;
	sub_825A2470(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A04D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825a0824
	if (ctx.cr6.eq) goto loc_825A0824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2028
	ctx.lr = 0x825A04EC;
	sub_825A2028(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A04F0:
	// lis r11,-19979
	ctx.r11.s64 = -1309343744;
	// ori r11,r11,32464
	ctx.r11.u64 = ctx.r11.u64 | 32464;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a06cc
	if (!ctx.cr6.eq) goto loc_825A06CC;
	// lwz r11,6300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6300);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x825a05c4
	if (ctx.cr6.gt) goto loc_825A05C4;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30176
	ctx.r12.s64 = ctx.r12.s64 + -30176;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// addi r12,r12,1344
	ctx.r12.s64 = ctx.r12.s64 + 1344;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825A0540;
	case 1:
		goto loc_825A054C;
	case 2:
		goto loc_825A0558;
	case 3:
		goto loc_825A054C;
	case 4:
		goto loc_825A054C;
	case 5:
		goto loc_825A0590;
	case 6:
		goto loc_825A054C;
	case 7:
		goto loc_825A05BC;
	default:
		__builtin_unreachable();
	}
loc_825A0540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2b20
	ctx.lr = 0x825A0548;
	sub_825A2B20(ctx, base);
	// b 0x825a05c4
	goto loc_825A05C4;
loc_825A054C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r11.u32);
	// b 0x825a05c4
	goto loc_825A05C4;
loc_825A0558:
	// lwz r3,6308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// bl 0x82715610
	ctx.lr = 0x825A0560;
	sub_82715610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825A0578;
	sub_8233A258(ctx, base);
	// lis r4,11869
	ctx.r4.s64 = 777846784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,20346
	ctx.r4.u64 = ctx.r4.u64 | 20346;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A058C;
	sub_829C3740(ctx, base);
	// b 0x825a05c4
	goto loc_825A05C4;
loc_825A0590:
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// li r30,0
	ctx.r30.s64 = 0;
	// fdivs f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f31.f64));
	// stw r30,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r30.u32);
	// stfs f31,1616(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// stw r30,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r30.u32);
	// stfs f0,1620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// lwz r3,6308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// bl 0x82715610
	ctx.lr = 0x825A05B4;
	sub_82715610(ctx, base);
	// stw r30,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r30.u32);
	// b 0x825a05c4
	goto loc_825A05C4;
loc_825A05BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2bf0
	ctx.lr = 0x825A05C4;
	sub_825A2BF0(ctx, base);
loc_825A05C4:
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x825a06c0
	if (ctx.cr6.gt) goto loc_825A06C0;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30184
	ctx.r12.s64 = ctx.r12.s64 + -30184;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// addi r12,r12,1532
	ctx.r12.s64 = ctx.r12.s64 + 1532;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825A05FC;
	case 1:
		goto loc_825A0610;
	case 2:
		goto loc_825A061C;
	case 3:
		goto loc_825A063C;
	case 4:
		goto loc_825A0680;
	case 5:
		goto loc_825A068C;
	case 6:
		goto loc_825A06A4;
	case 7:
		goto loc_825A06B0;
	default:
		__builtin_unreachable();
	}
loc_825A05FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r11.u32);
	// bl 0x825a1ba0
	ctx.lr = 0x825A060C;
	sub_825A1BA0(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A0610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a0d70
	ctx.lr = 0x825A0618;
	sub_825A0D70(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A061C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a0f10
	ctx.lr = 0x825A0624;
	sub_825A0F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1580
	ctx.lr = 0x825A0630;
	sub_825A1580(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1a68
	ctx.lr = 0x825A0638;
	sub_825A1A68(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A063C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,6220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,32748
	ctx.r9.s64 = ctx.r11.s64 + 32748;
	// li r8,4
	ctx.r8.s64 = 4;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f13,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r8.u32);
	// lfs f12,17072(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17072);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,-24708
	ctx.r3.s64 = ctx.r7.s64 + -24708;
	// lfs f0,-32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// stfs f13,6244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6244, temp.u32);
	// stfs f12,6248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6248, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825A0678;
	sub_82816528(ctx, base);
	// stw r3,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r3.u32);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A0680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a11a8
	ctx.lr = 0x825A0688;
	sub_825A11A8(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A068C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1348
	ctx.lr = 0x825A0694;
	sub_825A1348(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1580
	ctx.lr = 0x825A06A0;
	sub_825A1580(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A06A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a14c0
	ctx.lr = 0x825A06AC;
	sub_825A14C0(ctx, base);
	// b 0x825a06c0
	goto loc_825A06C0;
loc_825A06B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1028
	ctx.lr = 0x825A06B8;
	sub_825A1028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1df0
	ctx.lr = 0x825A06C0;
	sub_825A1DF0(ctx, base);
loc_825A06C0:
	// lwz r11,6296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6296);
	// stw r11,6300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6300, ctx.r11.u32);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A06CC:
	// lis r11,11805
	ctx.r11.s64 = 773652480;
	// ori r11,r11,17949
	ctx.r11.u64 = ctx.r11.u64 | 17949;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0724
	if (!ctx.cr6.eq) goto loc_825A0724;
	// lwz r11,6468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a0824
	if (ctx.cr6.eq) goto loc_825A0824;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r10,6468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6468, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,13992
	ctx.r11.s64 = ctx.r11.s64 + 13992;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f1,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x825a3c28
	ctx.lr = 0x825A0720;
	sub_825A3C28(ctx, base);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0724:
	// lis r11,-8148
	ctx.r11.s64 = -533987328;
	// ori r11,r11,21352
	ctx.r11.u64 = ctx.r11.u64 | 21352;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0808
	if (!ctx.cr6.eq) goto loc_825A0808;
	// lwz r3,6160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6160);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a07b4
	if (ctx.cr6.eq) goto loc_825A07B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// beq 0x825a077c
	if (ctx.cr0.eq) goto loc_825A077C;
	// lis r4,-32558
	ctx.r4.s64 = -2133721088;
	// lwz r5,6160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6160);
	// ori r4,r4,31186
	ctx.r4.u64 = ctx.r4.u64 | 31186;
	// b 0x825a07c8
	goto loc_825A07C8;
loc_825A077C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lwz r28,6160(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6160);
	// addi r3,r10,-5640
	ctx.r3.s64 = ctx.r10.s64 + -5640;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825A07A4;
	sub_82816528(ctx, base);
	// lwz r10,284(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x825a07e4
	goto loc_825A07E4;
loc_825A07B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_825A07C8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,280(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_825A07E4:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A0804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a0824
	goto loc_825A0824;
loc_825A0808:
	// lis r11,-25362
	ctx.r11.s64 = -1662124032;
	// ori r11,r11,63244
	ctx.r11.u64 = ctx.r11.u64 | 63244;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a0824
	if (!ctx.cr6.eq) goto loc_825A0824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,6160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6160);
	// bl 0x825a3920
	ctx.lr = 0x825A0824;
	sub_825A3920(ctx, base);
loc_825A0824:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0830"))) PPC_WEAK_FUNC(sub_825A0830);
PPC_FUNC_IMPL(__imp__sub_825A0830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A0838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826b8e58
	ctx.lr = 0x825A0844;
	sub_826B8E58(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,29048
	ctx.r11.s64 = ctx.r8.s64 + 29048;
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r7,29100
	ctx.r10.s64 = ctx.r7.s64 + 29100;
	// addi r9,r9,27872
	ctx.r9.s64 = ctx.r9.s64 + 27872;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r5,9902
	ctx.r5.s64 = 648937472;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,17021
	ctx.r5.u64 = ctx.r5.u64 | 17021;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A08B0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,18101
	ctx.r5.s64 = 1186267136;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,26594
	ctx.r5.u64 = ctx.r5.u64 | 26594;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A08D0;
	sub_823CF190(ctx, base);
	// lis r11,11820
	ctx.r11.s64 = 774635520;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,23080
	ctx.r11.u64 = ctx.r11.u64 | 23080;
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A08F0"))) PPC_WEAK_FUNC(sub_825A08F0);
PPC_FUNC_IMPL(__imp__sub_825A08F0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x824ee0a0
	ctx.lr = 0x825A0904;
	sub_824EE0A0(ctx, base);
	// lwz r11,6404(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6404);
	// lwz r10,6364(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6364);
	// stw r11,6408(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6408, ctx.r11.u32);
	// stw r10,6368(r6)
	PPC_STORE_U32(ctx.r6.u32 + 6368, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0928"))) PPC_WEAK_FUNC(sub_825A0928);
PPC_FUNC_IMPL(__imp__sub_825A0928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824ee0f8
	ctx.lr = 0x825A0940;
	sub_824EE0F8(ctx, base);
	// lwz r4,6404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6404);
	// lwz r11,6408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6408);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x825a096c
	if (ctx.cr6.eq) goto loc_825A096C;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x825a096c
	if (ctx.cr6.eq) goto loc_825A096C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A096C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A096C:
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// lwz r10,6368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6368);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825a0990
	if (ctx.cr6.eq) goto loc_825A0990;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x825a098c
	if (!ctx.cr6.eq) goto loc_825A098C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_825A098C:
	// stw r11,6360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6360, ctx.r11.u32);
loc_825A0990:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A09A8"))) PPC_WEAK_FUNC(sub_825A09A8);
PPC_FUNC_IMPL(__imp__sub_825A09A8) {
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
	// lwz r11,6364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a09d0
	if (!ctx.cr6.eq) goto loc_825A09D0;
	// bl 0x824e0598
	ctx.lr = 0x825A09C4;
	sub_824E0598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825a09d4
	if (ctx.cr0.eq) goto loc_825A09D4;
loc_825A09D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A09D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A09E8"))) PPC_WEAK_FUNC(sub_825A09E8);
PPC_FUNC_IMPL(__imp__sub_825A09E8) {
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
	// lwz r11,6364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a0a10
	if (!ctx.cr6.eq) goto loc_825A0A10;
	// bl 0x824e04e8
	ctx.lr = 0x825A0A04;
	sub_824E04E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825a0a14
	if (ctx.cr0.eq) goto loc_825A0A14;
loc_825A0A10:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A0A14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0A28"))) PPC_WEAK_FUNC(sub_825A0A28);
PPC_FUNC_IMPL(__imp__sub_825A0A28) {
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
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,6168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a0ac8
	if (ctx.cr6.eq) goto loc_825A0AC8;
	// lwz r11,6176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a0ac8
	if (!ctx.cr6.gt) goto loc_825A0AC8;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825a0ae0
	ctx.lr = 0x825A0A6C;
	sub_825A0AE0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825a0abc
	if (!ctx.cr6.eq) goto loc_825A0ABC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,6144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6144);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lfs f0,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// bne 0x825a0aac
	if (!ctx.cr0.eq) goto loc_825A0AAC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
loc_825A0AAC:
	// lfs f0,6380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6200);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
loc_825A0ABC:
	// lwz r11,6176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6176);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r11.u32);
loc_825A0AC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0AE0"))) PPC_WEAK_FUNC(sub_825A0AE0);
PPC_FUNC_IMPL(__imp__sub_825A0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825A0AE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// std r5,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r6.u64);
	// addi r30,r11,-5704
	ctx.r30.s64 = ctx.r11.s64 + -5704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r1,184
	ctx.r28.s64 = ctx.r1.s64 + 184;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// bl 0x82816528
	ctx.lr = 0x825A0B14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8284da30
	ctx.lr = 0x825A0B28;
	sub_8284DA30(ctx, base);
	// lfs f11,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f12,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r29.u32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r27.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x828250b0
	ctx.lr = 0x825A0BBC;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x825A0BC0;
	sub_824CA610(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x825a0d60
	if (ctx.cr0.eq) goto loc_825A0D60;
	// lwz r11,6276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a0d10
	if (!ctx.cr6.gt) goto loc_825A0D10;
	// lwz r5,6288(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6288);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825a0d10
	if (ctx.cr6.eq) goto loc_825A0D10;
	// lwz r11,6192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6192);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,6272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6272);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,1408(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82978bc0
	ctx.lr = 0x825A0C04;
	sub_82978BC0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82978d98
	ctx.lr = 0x825A0C10;
	sub_82978D98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x825A0C1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x825a0cf4
	if (ctx.cr0.eq) goto loc_825A0CF4;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A0C48;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x825A0C4C;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// beq 0x825a0cc4
	if (ctx.cr0.eq) goto loc_825A0CC4;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x825A0C70;
	sub_82A4EA80(ctx, base);
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f11,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x825A0CAC;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
loc_825A0CC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A0CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A0CF4:
	// lwz r11,6192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6192);
	// lwz r10,6276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6276);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825a0d10
	if (ctx.cr6.lt) goto loc_825A0D10;
	// stw r26,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r26.u32);
loc_825A0D10:
	// lwz r11,6284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a0d20
	if (ctx.cr6.eq) goto loc_825A0D20;
	// stw r11,1580(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1580, ctx.r11.u32);
loc_825A0D20:
	// lwz r11,6292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a0d30
	if (ctx.cr6.eq) goto loc_825A0D30;
	// stw r11,1584(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1584, ctx.r11.u32);
loc_825A0D30:
	// lwz r11,6196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6196);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,15834
	ctx.r4.s64 = ctx.r10.s64 + 15834;
	// stw r11,1812(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1812, ctx.r11.u32);
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r11,1848(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1848, ctx.r11.u32);
	// bl 0x8233a258
	ctx.lr = 0x825A0D50;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,1488(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1488);
	// bl 0x829c3740
	ctx.lr = 0x825A0D60;
	sub_829C3740(ctx, base);
loc_825A0D60:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0D70"))) PPC_WEAK_FUNC(sub_825A0D70);
PPC_FUNC_IMPL(__imp__sub_825A0D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A0D78;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A0D98;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A0D9C;
	sub_824090E0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,2184(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2184);
	// bl 0x82409058
	ctx.lr = 0x825A0DC0;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,24332
	ctx.r4.s64 = ctx.r10.s64 + 24332;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A0DE0;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a0e00
	if (ctx.cr6.eq) goto loc_825A0E00;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0e00
	if (ctx.cr6.eq) goto loc_825A0E00;
	// bl 0x82332db8
	ctx.lr = 0x825A0E00;
	sub_82332DB8(ctx, base);
loc_825A0E00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x825A0E0C;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24352
	ctx.r4.s64 = ctx.r11.s64 + 24352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A0E24;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a0e44
	if (ctx.cr6.eq) goto loc_825A0E44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0e44
	if (ctx.cr6.eq) goto loc_825A0E44;
	// bl 0x82332db8
	ctx.lr = 0x825A0E44;
	sub_82332DB8(ctx, base);
loc_825A0E44:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x825A0E50;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24376
	ctx.r4.s64 = ctx.r11.s64 + 24376;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A0E68;
	sub_829E6978(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// stfs f1,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a0e88
	if (ctx.cr6.eq) goto loc_825A0E88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0e88
	if (ctx.cr6.eq) goto loc_825A0E88;
	// bl 0x82332db8
	ctx.lr = 0x825A0E88;
	sub_82332DB8(ctx, base);
loc_825A0E88:
	// lis r10,17380
	ctx.r10.s64 = 1139015680;
	// stfs f31,6220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// ori r10,r10,45012
	ctx.r10.u64 = ctx.r10.u64 | 45012;
	// stw r9,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r9.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r10.u32);
	// lis r5,5168
	ctx.r5.s64 = 338690048;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,4868
	ctx.r5.u64 = ctx.r5.u64 | 4868;
	// addi r4,r31,6284
	ctx.r4.s64 = ctx.r31.s64 + 6284;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A0EC4;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,3897
	ctx.r5.s64 = 255393792;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,44106
	ctx.r5.u64 = ctx.r5.u64 | 44106;
	// addi r4,r31,6292
	ctx.r4.s64 = ctx.r31.s64 + 6292;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A0EE4;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,18903
	ctx.r5.s64 = 1238827008;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,31958
	ctx.r5.u64 = ctx.r5.u64 | 31958;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A0F04;
	sub_823CF190(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A0F10"))) PPC_WEAK_FUNC(sub_825A0F10);
PPC_FUNC_IMPL(__imp__sub_825A0F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A0F18;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A0F38;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A0F3C;
	sub_824090E0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r8,3
	ctx.r8.s64 = 3;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r8,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r8.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfs f0,900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// lfs f13,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,6248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6248, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,6208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6208, temp.u32);
	// lwz r29,2184(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2184);
	// bl 0x82409058
	ctx.lr = 0x825A0F78;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,24400
	ctx.r4.s64 = ctx.r10.s64 + 24400;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A0F98;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a0fb8
	if (ctx.cr6.eq) goto loc_825A0FB8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0fb8
	if (ctx.cr6.eq) goto loc_825A0FB8;
	// bl 0x82332db8
	ctx.lr = 0x825A0FB8;
	sub_82332DB8(ctx, base);
loc_825A0FB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x825A0FC4;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24420
	ctx.r4.s64 = ctx.r11.s64 + 24420;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A0FDC;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a0ffc
	if (ctx.cr6.eq) goto loc_825A0FFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a0ffc
	if (ctx.cr6.eq) goto loc_825A0FFC;
	// bl 0x82332db8
	ctx.lr = 0x825A0FFC;
	sub_82332DB8(ctx, base);
loc_825A0FFC:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-14855
	ctx.r5.s64 = -973537280;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,17960
	ctx.r5.u64 = ctx.r5.u64 | 17960;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A101C;
	sub_823CF190(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1028"))) PPC_WEAK_FUNC(sub_825A1028);
PPC_FUNC_IMPL(__imp__sub_825A1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A1030;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A1050;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A1054;
	sub_824090E0(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,2184(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2184);
	// bl 0x82409058
	ctx.lr = 0x825A1078;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,24444
	ctx.r4.s64 = ctx.r10.s64 + 24444;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A1098;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a10b8
	if (ctx.cr6.eq) goto loc_825A10B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a10b8
	if (ctx.cr6.eq) goto loc_825A10B8;
	// bl 0x82332db8
	ctx.lr = 0x825A10B8;
	sub_82332DB8(ctx, base);
loc_825A10B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x825A10C4;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24464
	ctx.r4.s64 = ctx.r11.s64 + 24464;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A10DC;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a10fc
	if (ctx.cr6.eq) goto loc_825A10FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a10fc
	if (ctx.cr6.eq) goto loc_825A10FC;
	// bl 0x82332db8
	ctx.lr = 0x825A10FC;
	sub_82332DB8(ctx, base);
loc_825A10FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x825A1108;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24488
	ctx.r4.s64 = ctx.r11.s64 + 24488;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A1120;
	sub_829E6978(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// stfs f1,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a1140
	if (ctx.cr6.eq) goto loc_825A1140;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1140
	if (ctx.cr6.eq) goto loc_825A1140;
	// bl 0x82332db8
	ctx.lr = 0x825A1140;
	sub_82332DB8(ctx, base);
loc_825A1140:
	// lis r10,17380
	ctx.r10.s64 = 1139015680;
	// stfs f31,6220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// ori r10,r10,45012
	ctx.r10.u64 = ctx.r10.u64 | 45012;
	// stw r9,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r9.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r10.u32);
	// lis r5,5168
	ctx.r5.s64 = 338690048;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,4868
	ctx.r5.u64 = ctx.r5.u64 | 4868;
	// addi r4,r31,6284
	ctx.r4.s64 = ctx.r31.s64 + 6284;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A117C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,18903
	ctx.r5.s64 = 1238827008;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,31958
	ctx.r5.u64 = ctx.r5.u64 | 31958;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A119C;
	sub_823CF190(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A11A8"))) PPC_WEAK_FUNC(sub_825A11A8);
PPC_FUNC_IMPL(__imp__sub_825A11A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A11B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A11D0;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A11D4;
	sub_824090E0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r10,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r29,2184(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2184);
	// bl 0x82409058
	ctx.lr = 0x825A11F8;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,24512
	ctx.r4.s64 = ctx.r10.s64 + 24512;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A1218;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a1238
	if (ctx.cr6.eq) goto loc_825A1238;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1238
	if (ctx.cr6.eq) goto loc_825A1238;
	// bl 0x82332db8
	ctx.lr = 0x825A1238;
	sub_82332DB8(ctx, base);
loc_825A1238:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x825A1244;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24532
	ctx.r4.s64 = ctx.r11.s64 + 24532;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A125C;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a127c
	if (ctx.cr6.eq) goto loc_825A127C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a127c
	if (ctx.cr6.eq) goto loc_825A127C;
	// bl 0x82332db8
	ctx.lr = 0x825A127C;
	sub_82332DB8(ctx, base);
loc_825A127C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x825A1288;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24560
	ctx.r4.s64 = ctx.r11.s64 + 24560;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A12A0;
	sub_829E6978(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// stfs f1,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a12c0
	if (ctx.cr6.eq) goto loc_825A12C0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a12c0
	if (ctx.cr6.eq) goto loc_825A12C0;
	// bl 0x82332db8
	ctx.lr = 0x825A12C0;
	sub_82332DB8(ctx, base);
loc_825A12C0:
	// lis r10,17380
	ctx.r10.s64 = 1139015680;
	// stfs f31,6220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// ori r10,r10,45012
	ctx.r10.u64 = ctx.r10.u64 | 45012;
	// stw r9,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r9.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r10.u32);
	// lis r5,6058
	ctx.r5.s64 = 397017088;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,31768
	ctx.r5.u64 = ctx.r5.u64 | 31768;
	// addi r4,r31,6284
	ctx.r4.s64 = ctx.r31.s64 + 6284;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A12FC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,-18597
	ctx.r5.s64 = -1218772992;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,8530
	ctx.r5.u64 = ctx.r5.u64 | 8530;
	// addi r4,r31,6292
	ctx.r4.s64 = ctx.r31.s64 + 6292;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A131C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,23080
	ctx.r5.s64 = 1512570880;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,16152
	ctx.r5.u64 = ctx.r5.u64 | 16152;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A133C;
	sub_823CF190(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1348"))) PPC_WEAK_FUNC(sub_825A1348);
PPC_FUNC_IMPL(__imp__sub_825A1348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825A1350;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A1370;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A1374;
	sub_824090E0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r8,6
	ctx.r8.s64 = 6;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r8,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r8.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f0,900(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// lfs f13,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f0,6248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6248, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f13,6208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6208, temp.u32);
	// lwz r29,2184(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2184);
	// bl 0x82409058
	ctx.lr = 0x825A13B0;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,24584
	ctx.r4.s64 = ctx.r10.s64 + 24584;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A13D0;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a13f0
	if (ctx.cr6.eq) goto loc_825A13F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a13f0
	if (ctx.cr6.eq) goto loc_825A13F0;
	// bl 0x82332db8
	ctx.lr = 0x825A13F0;
	sub_82332DB8(ctx, base);
loc_825A13F0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x825A13FC;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24604
	ctx.r4.s64 = ctx.r11.s64 + 24604;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A1414;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a1434
	if (ctx.cr6.eq) goto loc_825A1434;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1434
	if (ctx.cr6.eq) goto loc_825A1434;
	// bl 0x82332db8
	ctx.lr = 0x825A1434;
	sub_82332DB8(ctx, base);
loc_825A1434:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-14855
	ctx.r5.s64 = -973537280;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,17960
	ctx.r5.u64 = ctx.r5.u64 | 17960;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A1454;
	sub_823CF190(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x825A1460;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,24628
	ctx.r4.s64 = ctx.r11.s64 + 24628;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825A1478;
	sub_829E6978(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// stfs f1,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a1498
	if (ctx.cr6.eq) goto loc_825A1498;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1498
	if (ctx.cr6.eq) goto loc_825A1498;
	// bl 0x82332db8
	ctx.lr = 0x825A1498;
	sub_82332DB8(ctx, base);
loc_825A1498:
	// lfs f0,6200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7796(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 7796);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f13,f0,f0
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// stfs f13,6200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// lfs f12,6528(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 6528);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f0,6200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6200, temp.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A14C0"))) PPC_WEAK_FUNC(sub_825A14C0);
PPC_FUNC_IMPL(__imp__sub_825A14C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A14C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,17380
	ctx.r9.s64 = 1139015680;
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r9,r9,45012
	ctx.r9.u64 = ctx.r9.u64 | 45012;
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r7,6332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6332, ctx.r7.u32);
	// stfs f0,6220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// stw r8,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r8.u32);
	// stw r11,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r11.u32);
	// stfs f13,6216(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6216, temp.u32);
	// stw r9,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r9.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r5,5168
	ctx.r5.s64 = 338690048;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r5,r5,4868
	ctx.r5.u64 = ctx.r5.u64 | 4868;
	// addi r4,r31,6284
	ctx.r4.s64 = ctx.r31.s64 + 6284;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A1534;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,3897
	ctx.r5.s64 = 255393792;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,44106
	ctx.r5.u64 = ctx.r5.u64 | 44106;
	// addi r4,r31,6292
	ctx.r4.s64 = ctx.r31.s64 + 6292;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A1554;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,18903
	ctx.r5.s64 = 1238827008;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,31958
	ctx.r5.u64 = ctx.r5.u64 | 31958;
	// addi r4,r31,6288
	ctx.r4.s64 = ctx.r31.s64 + 6288;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A1574;
	sub_823CF190(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1580"))) PPC_WEAK_FUNC(sub_825A1580);
PPC_FUNC_IMPL(__imp__sub_825A1580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825A1588;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,6308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a1758
	if (!ctx.cr6.eq) goto loc_825A1758;
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x825A15A8;
	sub_82833108(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a15c0
	if (ctx.cr0.eq) goto loc_825A15C0;
	// bl 0x82713ce0
	ctx.lr = 0x825A15B8;
	sub_82713CE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x825a15c4
	goto loc_825A15C4;
loc_825A15C0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_825A15C4:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r30,6308(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6308, ctx.r30.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r31,-1
	ctx.r31.s64 = -1;
	// addi r4,r30,1468
	ctx.r4.s64 = ctx.r30.s64 + 1468;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// beq cr6,0x825a1630
	if (ctx.cr6.eq) goto loc_825A1630;
	// lis r5,25327
	ctx.r5.s64 = 1659830272;
	// ori r5,r5,36482
	ctx.r5.u64 = ctx.r5.u64 | 36482;
	// bl 0x823cf190
	ctx.lr = 0x825A15F8;
	sub_823CF190(ctx, base);
	// lwz r5,1468(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825a1624
	if (ctx.cr6.eq) goto loc_825A1624;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1624
	if (ctx.cr6.eq) goto loc_825A1624;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x825A161C;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x825A1624;
	sub_82978ED0(ctx, base);
loc_825A1624:
	// lis r5,-26891
	ctx.r5.s64 = -1762328576;
	// ori r5,r5,48129
	ctx.r5.u64 = ctx.r5.u64 | 48129;
	// b 0x825a1670
	goto loc_825A1670;
loc_825A1630:
	// lis r5,29790
	ctx.r5.s64 = 1952317440;
	// ori r5,r5,43931
	ctx.r5.u64 = ctx.r5.u64 | 43931;
	// bl 0x823cf190
	ctx.lr = 0x825A163C;
	sub_823CF190(ctx, base);
	// lwz r5,1468(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825a1668
	if (ctx.cr6.eq) goto loc_825A1668;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a1668
	if (ctx.cr6.eq) goto loc_825A1668;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x825A1660;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x825A1668;
	sub_82978ED0(ctx, base);
loc_825A1668:
	// lis r5,-2111
	ctx.r5.s64 = -138346496;
	// ori r5,r5,43686
	ctx.r5.u64 = ctx.r5.u64 | 43686;
loc_825A1670:
	// lwz r30,6308(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r30,1472
	ctx.r4.s64 = ctx.r30.s64 + 1472;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A168C;
	sub_823CF190(ctx, base);
	// lwz r5,1472(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825a16b8
	if (ctx.cr6.eq) goto loc_825A16B8;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a16b8
	if (ctx.cr6.eq) goto loc_825A16B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x825A16B0;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x825A16B8;
	sub_82978ED0(ctx, base);
loc_825A16B8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,6308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	ctx.lr = 0x825A1718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// lwz r11,6308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// stw r27,1600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1600, ctx.r27.u32);
	// bl 0x82816528
	ctx.lr = 0x825A172C;
	sub_82816528(ctx, base);
	// lwz r11,6308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r28,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r28.u32);
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x825a1758
	if (!ctx.cr6.eq) goto loc_825A1758;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1758;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A1758:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1760"))) PPC_WEAK_FUNC(sub_825A1760);
PPC_FUNC_IMPL(__imp__sub_825A1760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A1768;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r10,6168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6168);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825a17a0
	if (ctx.cr6.eq) goto loc_825A17A0;
	// lfs f0,6212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825a1844
	if (!ctx.cr6.eq) goto loc_825A1844;
loc_825A17A0:
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x8259c668
	ctx.lr = 0x825A17A8;
	sub_8259C668(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a17b8
	if (!ctx.cr0.eq) goto loc_825A17B8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825a17c4
	goto loc_825A17C4;
loc_825A17B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825A17C4:
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,6248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6248);
	ctx.f2.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f1,6244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6244);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,6256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6256);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x825A181C;
	sub_824D7B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a1844
	if (ctx.cr0.eq) goto loc_825A1844;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,6168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6168, ctx.r11.u32);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stw r11,6228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6228, ctx.r11.u32);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,6232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6232, ctx.r11.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,6236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6236, ctx.r11.u32);
loc_825A1844:
	// lwz r11,6240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a190c
	if (ctx.cr6.eq) goto loc_825A190C;
	// lwz r4,6168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6168);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825a190c
	if (ctx.cr6.eq) goto loc_825A190C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A186C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825A1870;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a1908
	if (ctx.cr0.eq) goto loc_825A1908;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825a1908
	if (!ctx.cr0.gt) goto loc_825A1908;
	// lwz r11,5348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a1908
	if (!ctx.cr6.eq) goto loc_825A1908;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x829c8510
	ctx.lr = 0x825A18D4;
	sub_829C8510(ctx, base);
	// addi r29,r30,6228
	ctx.r29.s64 = ctx.r30.s64 + 6228;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8281d9b0
	ctx.lr = 0x825A18E4;
	sub_8281D9B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a190c
	if (!ctx.cr0.eq) goto loc_825A190C;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x825a190c
	goto loc_825A190C;
loc_825A1908:
	// stw r29,6168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6168, ctx.r29.u32);
loc_825A190C:
	// stw r31,6172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6172, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1920"))) PPC_WEAK_FUNC(sub_825A1920);
PPC_FUNC_IMPL(__imp__sub_825A1920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825A1928;
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
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,6168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a1958
	if (ctx.cr6.eq) goto loc_825A1958;
	// lfs f0,6212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x825a1a1c
	if (!ctx.cr6.eq) goto loc_825A1A1C;
loc_825A1958:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825a1a20
	if (!ctx.cr6.gt) goto loc_825A1A20;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_825A1974:
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x824ca670
	ctx.lr = 0x825A1980;
	sub_824CA670(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a19e8
	if (ctx.cr0.eq) goto loc_825A19E8;
	// lwz r11,1848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825a19e8
	if (!ctx.cr6.eq) goto loc_825A19E8;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,624(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bne cr6,0x825a19d4
	if (!ctx.cr6.eq) goto loc_825A19D4;
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x825a19e4
	goto loc_825A19E4;
loc_825A19D4:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x825a19e8
	if (!ctx.cr6.lt) goto loc_825A19E8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_825A19E4:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_825A19E8:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825a1974
	if (ctx.cr6.lt) goto loc_825A1974;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825a1a20
	if (ctx.cr6.eq) goto loc_825A1A20;
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r9,6308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stw r10,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r10.u32);
	// stw r10,1428(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1428, ctx.r10.u32);
	// b 0x825a1a20
	goto loc_825A1A20;
loc_825A1A1C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_825A1A20:
	// lwz r10,6240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825a1a54
	if (ctx.cr6.eq) goto loc_825A1A54;
	// lwz r4,6168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6168);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825a1a54
	if (ctx.cr6.eq) goto loc_825A1A54;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A1A40;
	sub_829B9720(ctx, base);
	// bl 0x824ca670
	ctx.lr = 0x825A1A44;
	sub_824CA670(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x825a1a54
	if (!ctx.cr0.eq) goto loc_825A1A54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r11.u32);
loc_825A1A54:
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

__attribute__((alias("__imp__sub_825A1A68"))) PPC_WEAK_FUNC(sub_825A1A68);
PPC_FUNC_IMPL(__imp__sub_825A1A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A1A70;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,6308(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,6252(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,1652(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lwz r10,6308(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r4,r11,24656
	ctx.r4.s64 = ctx.r11.s64 + 24656;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,1652(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1652);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82816c30
	ctx.lr = 0x825A1B3C;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823339b8
	ctx.lr = 0x825A1B48;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A1B4C;
	sub_82333960(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r10,6308(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6308);
	// stfs f0,1616(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
	// stw r11,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, ctx.r11.u32);
	// stw r9,1640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1640, ctx.r9.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1620, temp.u32);
	// bl 0x82333960
	ctx.lr = 0x825A1B94;
	sub_82333960(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1BA0"))) PPC_WEAK_FUNC(sub_825A1BA0);
PPC_FUNC_IMPL(__imp__sub_825A1BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825A1BA8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r29,r11,-27300
	ctx.r29.s64 = ctx.r11.s64 + -27300;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,-1992(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,18664
	ctx.r3.s64 = ctx.r8.s64 + 18664;
	// lfs f13,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17960(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17960);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825A1C10;
	sub_82816528(ctx, base);
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825a1c34
	if (ctx.cr6.lt) goto loc_825A1C34;
	// beq cr6,0x825a1c2c
	if (ctx.cr6.eq) goto loc_825A1C2C;
	// li r28,4
	ctx.r28.s64 = 4;
	// b 0x825a1c38
	goto loc_825A1C38;
loc_825A1C2C:
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x825a1c38
	goto loc_825A1C38;
loc_825A1C34:
	// li r28,1
	ctx.r28.s64 = 1;
loc_825A1C38:
	// bl 0x824113a0
	ctx.lr = 0x825A1C3C;
	sub_824113A0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1546
	ctx.r5.s64 = 1546;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x825A1C70;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a1ca8
	if (ctx.cr0.eq) goto loc_825A1CA8;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r9,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r9.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// stw r6,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
loc_825A1CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,54
	ctx.r4.s64 = 54;
	// stw r3,6304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6304, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f0.f64));
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,6304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x825A1D2C;
	sub_82331120(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// ld r5,656(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,6304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// bl 0x8281bb18
	ctx.lr = 0x825A1D44;
	sub_8281BB18(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// bl 0x8281d650
	ctx.lr = 0x825A1D50;
	sub_8281D650(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-7794
	ctx.r5.s64 = -510787584;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,30139
	ctx.r5.u64 = ctx.r5.u64 | 30139;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825A1D74;
	sub_823CF190(ctx, base);
	// lwz r28,144(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x825a1de4
	if (ctx.cr6.eq) goto loc_825A1DE4;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x825A1D88;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a1d9c
	if (ctx.cr0.eq) goto loc_825A1D9C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x825A1D98;
	sub_828ADC70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_825A1D9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825a1de4
	if (ctx.cr6.eq) goto loc_825A1DE4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828ae6e8
	ctx.lr = 0x825A1DBC;
	sub_828AE6E8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x825A1DC8;
	sub_82978D98(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x825A1DDC;
	sub_829B8EE8(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r11.u32);
loc_825A1DE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1DF0"))) PPC_WEAK_FUNC(sub_825A1DF0);
PPC_FUNC_IMPL(__imp__sub_825A1DF0) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x825A1E0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a1e20
	if (ctx.cr0.eq) goto loc_825A1E20;
	// bl 0x823f4b40
	ctx.lr = 0x825A1E18;
	sub_823F4B40(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x825a1e28
	goto loc_825A1E28;
loc_825A1E20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825A1E28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// bl 0x82410060
	ctx.lr = 0x825A1E34;
	sub_82410060(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,6348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6348);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825a1e90
	if (ctx.cr6.eq) goto loc_825A1E90;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,24748
	ctx.r5.s64 = ctx.r11.s64 + 24748;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x825A1E90;
	sub_828C5740(ctx, base);
loc_825A1E90:
	// lwz r11,6348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6348);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,332
	ctx.r4.s64 = 332;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,6348(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6348);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A1EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f1,244(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
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

__attribute__((alias("__imp__sub_825A1ED8"))) PPC_WEAK_FUNC(sub_825A1ED8);
PPC_FUNC_IMPL(__imp__sub_825A1ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825A1EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825a1760
	ctx.lr = 0x825A1EEC;
	sub_825A1760(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a1f04
	if (!ctx.cr0.eq) goto loc_825A1F04;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r28,664(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// b 0x825a1f74
	goto loc_825A1F74;
loc_825A1F04:
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,6236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,6228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,6232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x825A1F5C;
	sub_82332E18(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817280
	ctx.lr = 0x825A1F68;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_825A1F74:
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,6304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// bl 0x8281bb18
	ctx.lr = 0x825A1F98;
	sub_8281BB18(ctx, base);
	// lwz r4,6156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825a201c
	if (ctx.cr6.eq) goto loc_825A201C;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A1FB4;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a201c
	if (ctx.cr0.eq) goto loc_825A201C;
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r29,1608(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82833108
	ctx.lr = 0x825A1FC8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a200c
	if (ctx.cr0.eq) goto loc_825A200C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825a1fe0
	if (ctx.cr6.eq) goto loc_825A1FE0;
	// lwz r9,80(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x825a1fe4
	goto loc_825A1FE4;
loc_825A1FE0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_825A1FE4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,6156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// rldicr r7,r28,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8254f228
	ctx.lr = 0x825A2004;
	sub_8254F228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825a2010
	goto loc_825A2010;
loc_825A200C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825A2010:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825A201C;
	sub_82833A30(ctx, base);
loc_825A201C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2028"))) PPC_WEAK_FUNC(sub_825A2028);
PPC_FUNC_IMPL(__imp__sub_825A2028) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,6236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	// ld r5,6228(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6228);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,314
	ctx.r4.s64 = 314;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// lfs f31,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A209C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A20B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24816
	ctx.r4.s64 = ctx.r11.s64 + 24816;
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fadds f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x825A20F8;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x825A2104;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A2108;
	sub_82333960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,15812
	ctx.r11.s64 = 1036255232;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,39207
	ctx.r11.u64 = ctx.r11.u64 | 39207;
	// stw r11,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x825A2134;
	sub_82333960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_825A2158"))) PPC_WEAK_FUNC(sub_825A2158);
PPC_FUNC_IMPL(__imp__sub_825A2158) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,6236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	// ld r5,6228(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6228);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A21A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,332
	ctx.r4.s64 = 332;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// lfs f31,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A21CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A21E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24928
	ctx.r4.s64 = ctx.r11.s64 + 24928;
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fadds f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x825A2228;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x825A2234;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A2238;
	sub_82333960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,15812
	ctx.r11.s64 = 1036255232;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,39207
	ctx.r11.u64 = ctx.r11.u64 | 39207;
	// stw r11,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x825A2264;
	sub_82333960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_825A2288"))) PPC_WEAK_FUNC(sub_825A2288);
PPC_FUNC_IMPL(__imp__sub_825A2288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825A2290;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r3,6308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// bne cr6,0x825a22e0
	if (!ctx.cr6.eq) goto loc_825A22E0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a2460
	if (ctx.cr6.eq) goto loc_825A2460;
	// bl 0x82715610
	ctx.lr = 0x825A22B8;
	sub_82715610(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825A22C8;
	sub_8233A258(ctx, base);
	// lis r4,11869
	ctx.r4.s64 = 777846784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,20346
	ctx.r4.u64 = ctx.r4.u64 | 20346;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A22DC;
	sub_829C3740(ctx, base);
	// b 0x825a2460
	goto loc_825A2460;
loc_825A22E0:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a2420
	if (!ctx.cr6.eq) goto loc_825A2420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A22FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825A230C;
	sub_8233A258(ctx, base);
	// lis r4,3485
	ctx.r4.s64 = 228392960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,27503
	ctx.r4.u64 = ctx.r4.u64 | 27503;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A2320;
	sub_829C3740(ctx, base);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,1652(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lwz r10,6308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r4,r11,24656
	ctx.r4.s64 = ctx.r11.s64 + 24656;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,1652(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1652);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82816c30
	ctx.lr = 0x825A23CC;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823339b8
	ctx.lr = 0x825A23D8;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A23DC;
	sub_82333960(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r10,6308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stfs f0,1616(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
	// stw r11,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, ctx.r11.u32);
	// stw r27,1640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1640, ctx.r27.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1620, temp.u32);
	// bl 0x82333960
	ctx.lr = 0x825A2420;
	sub_82333960(ctx, base);
loc_825A2420:
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stw r27,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r27.u32);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r10,6232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6232);
	// lwz r9,6228(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6228);
	// lwz r8,6236(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	// stw r10,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r10.u32);
	// stw r9,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r9.u32);
	// stw r8,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r8.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825a2460
	if (!ctx.cr6.eq) goto loc_825A2460;
	// lfs f0,6380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6200);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
loc_825A2460:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2470"))) PPC_WEAK_FUNC(sub_825A2470);
PPC_FUNC_IMPL(__imp__sub_825A2470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A2478;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825a24b4
	if (ctx.cr6.eq) goto loc_825A24B4;
	// bl 0x823a1378
	ctx.lr = 0x825A2494;
	sub_823A1378(ctx, base);
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
	ctx.lr = 0x825A24AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a24b8
	if (!ctx.cr0.eq) goto loc_825A24B8;
loc_825A24B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825A24B8:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,24020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A24D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A24FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1716(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,1708(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 1708);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2528"))) PPC_WEAK_FUNC(sub_825A2528);
PPC_FUNC_IMPL(__imp__sub_825A2528) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,6236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	// ld r5,6228(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 6228);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,348
	ctx.r4.s64 = 348;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// lfs f31,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A259C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A25B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f1.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,25040
	ctx.r4.s64 = ctx.r11.s64 + 25040;
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fadds f0,f2,f30
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x825A25F8;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x825A2604;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A2608;
	sub_82333960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,10242
	ctx.r11.s64 = 671219712;
	// lis r10,5670
	ctx.r10.s64 = 371589120;
	// ori r11,r11,35592
	ctx.r11.u64 = ctx.r11.u64 | 35592;
	// ori r10,r10,7638
	ctx.r10.u64 = ctx.r10.u64 | 7638;
	// stw r11,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r10.u32);
	// bl 0x82333960
	ctx.lr = 0x825A2640;
	sub_82333960(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

__attribute__((alias("__imp__sub_825A2668"))) PPC_WEAK_FUNC(sub_825A2668);
PPC_FUNC_IMPL(__imp__sub_825A2668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A2670;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825a2700
	if (!ctx.cr6.eq) goto loc_825A2700;
	// lwz r3,6308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a26bc
	if (ctx.cr6.eq) goto loc_825A26BC;
	// bl 0x82715610
	ctx.lr = 0x825A2698;
	sub_82715610(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825A26A8;
	sub_8233A258(ctx, base);
	// lis r4,11869
	ctx.r4.s64 = 777846784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,20346
	ctx.r4.u64 = ctx.r4.u64 | 20346;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A26BC;
	sub_829C3740(ctx, base);
loc_825A26BC:
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r30.u32);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f0.f64));
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// stfs f13,1620(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// stw r30,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r30.u32);
	// stw r30,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r30.u32);
	// b 0x825a27cc
	goto loc_825A27CC;
loc_825A2700:
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a27a8
	if (!ctx.cr6.eq) goto loc_825A27A8;
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r30.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f0.f64));
	// stfs f13,1620(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// stw r30,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r30.u32);
	// lwz r3,6308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x8233a258
	ctx.lr = 0x825A276C;
	sub_8233A258(ctx, base);
	// lis r4,3485
	ctx.r4.s64 = 228392960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,27503
	ctx.r4.u64 = ctx.r4.u64 | 27503;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A2780;
	sub_829C3740(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,10200
	ctx.r11.s64 = ctx.r11.s64 + 10200;
	// lfs f1,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825a3c28
	ctx.lr = 0x825A27A8;
	sub_825A3C28(ctx, base);
loc_825A27A8:
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stw r30,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r30.u32);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r10,624(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// lwz r8,620(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lwz r9,628(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// stw r10,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r10.u32);
	// stw r8,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r8.u32);
	// stw r9,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r9.u32);
loc_825A27CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A27D8"))) PPC_WEAK_FUNC(sub_825A27D8);
PPC_FUNC_IMPL(__imp__sub_825A27D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A27E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r10,1604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825a28f4
	if (ctx.cr6.eq) goto loc_825A28F4;
	// lwz r28,1652(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// lfs f0,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,354
	ctx.r4.s64 = 354;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lwz r10,6308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r9,24656
	ctx.r4.s64 = ctx.r9.s64 + 24656;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,1652(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1652);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82816c30
	ctx.lr = 0x825A287C;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823339b8
	ctx.lr = 0x825A2888;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A288C;
	sub_82333960(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r10,6308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// stfs f0,1616(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
	// stw r11,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, ctx.r11.u32);
	// stw r9,1640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1640, ctx.r9.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1620, temp.u32);
	// lwz r11,6308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6308);
	// lwz r3,1508(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// bl 0x8281d650
	ctx.lr = 0x825A28DC;
	sub_8281D650(ctx, base);
	// lfs f0,6380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6200);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// bl 0x82333960
	ctx.lr = 0x825A28F4;
	sub_82333960(ctx, base);
loc_825A28F4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2900"))) PPC_WEAK_FUNC(sub_825A2900);
PPC_FUNC_IMPL(__imp__sub_825A2900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A2908;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x824da988
	ctx.lr = 0x825A2928;
	sub_824DA988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,6236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6228);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,6232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6232);
	ctx.f11.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1132(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1132);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A2998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,1512(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r4,346
	ctx.r4.s64 = 346;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A29B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A29D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2A10"))) PPC_WEAK_FUNC(sub_825A2A10);
PPC_FUNC_IMPL(__imp__sub_825A2A10) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825a1760
	ctx.lr = 0x825A2A34;
	sub_825A1760(ctx, base);
	// lfs f0,6220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6220);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f13,6220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825a2b04
	if (!ctx.cr6.lt) goto loc_825A2B04;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2b04
	if (ctx.cr6.eq) goto loc_825A2B04;
	// lwz r11,6332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6332);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a2abc
	if (!ctx.cr6.gt) goto loc_825A2ABC;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_825A2A7C:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,6224(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6224);
	// bl 0x825a0a28
	ctx.lr = 0x825A2A94;
	sub_825A0A28(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825a2aac
	if (ctx.cr0.eq) goto loc_825A2AAC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a2900
	ctx.lr = 0x825A2AAC;
	sub_825A2900(ctx, base);
loc_825A2AAC:
	// lwz r11,6332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6332);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a2a7c
	if (ctx.cr6.lt) goto loc_825A2A7C;
loc_825A2ABC:
	// lfs f2,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,24256
	ctx.r4.s64 = ctx.r11.s64 + 24256;
	// bl 0x82816c30
	ctx.lr = 0x825A2AE4;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x825A2AF0;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A2AF4;
	sub_82333960(ctx, base);
	// lfs f0,6216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6220, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x825A2B04;
	sub_82333960(ctx, base);
loc_825A2B04:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_825A2B20"))) PPC_WEAK_FUNC(sub_825A2B20);
PPC_FUNC_IMPL(__imp__sub_825A2B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,6304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// stw r10,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6304);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,5120
	ctx.r10.u64 = ctx.r10.u64 | 335544320;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r4,6156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825a2bd8
	if (ctx.cr6.eq) goto loc_825A2BD8;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A2B7C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a2b8c
	if (ctx.cr0.eq) goto loc_825A2B8C;
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x825A2B8C;
	sub_82978ED0(ctx, base);
loc_825A2B8C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x825A2B94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a2bc8
	if (ctx.cr0.eq) goto loc_825A2BC8;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a2bb0
	if (ctx.cr6.eq) goto loc_825A2BB0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825a2bb4
	goto loc_825A2BB4;
loc_825A2BB0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825A2BB4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,6156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// bl 0x824f7c50
	ctx.lr = 0x825A2BC0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825a2bcc
	goto loc_825A2BCC;
loc_825A2BC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825A2BCC:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825A2BD8;
	sub_82833A30(ctx, base);
loc_825A2BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2BF0"))) PPC_WEAK_FUNC(sub_825A2BF0);
PPC_FUNC_IMPL(__imp__sub_825A2BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A2BF8;
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
	// lwz r11,6352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a2c50
	if (!ctx.cr6.gt) goto loc_825A2C50;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825A2C18:
	// lwz r11,6348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6348);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2c3c
	if (ctx.cr6.eq) goto loc_825A2C3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2C3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A2C3C:
	// lwz r11,6352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6352);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a2c18
	if (ctx.cr6.lt) goto loc_825A2C18;
loc_825A2C50:
	// lwz r11,6356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6356);
	// addi r3,r31,6336
	ctx.r3.s64 = ctx.r31.s64 + 6336;
	// stw r28,6352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6352, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a2c74
	if (ctx.cr6.eq) goto loc_825A2C74;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x825A2C74;
	sub_82332C38(ctx, base);
loc_825A2C74:
	// stw r28,6296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6296, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2C80"))) PPC_WEAK_FUNC(sub_825A2C80);
PPC_FUNC_IMPL(__imp__sub_825A2C80) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,5316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5316, ctx.r11.u32);
	// bl 0x824e16a8
	ctx.lr = 0x825A2CA4;
	sub_824E16A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2CB8"))) PPC_WEAK_FUNC(sub_825A2CB8);
PPC_FUNC_IMPL(__imp__sub_825A2CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825A2CC0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-1952(r1)
	ea = -1952 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,6396(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6396);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A2CE0;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825A2CE4;
	sub_82333A20(ctx, base);
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a2d50
	if (!ctx.cr6.gt) goto loc_825A2D50;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_825A2D00:
	// lwz r10,6132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A2D14;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a2d3c
	if (!ctx.cr0.eq) goto loc_825A2D3C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,6120
	ctx.r3.s64 = ctx.r30.s64 + 6120;
	// bl 0x82332ca8
	ctx.lr = 0x825A2D34;
	sub_82332CA8(ctx, base);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_825A2D3C:
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a2d00
	if (ctx.cr6.lt) goto loc_825A2D00;
loc_825A2D50:
	// lwz r11,6420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6420);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x825a369c
	if (ctx.cr6.gt) goto loc_825A369C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30520
	ctx.r12.s64 = ctx.r12.s64 + -30520;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// addi r12,r12,11656
	ctx.r12.s64 = ctx.r12.s64 + 11656;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825A2D88;
	case 1:
		goto loc_825A2E38;
	case 2:
		goto loc_825A2ED4;
	case 3:
		goto loc_825A2F84;
	case 4:
		goto loc_825A3020;
	case 5:
		goto loc_825A30D0;
	case 6:
		goto loc_825A3230;
	case 7:
		goto loc_825A339C;
	case 8:
		goto loc_825A344C;
	case 9:
		goto loc_825A34FC;
	case 10:
		goto loc_825A30D0;
	case 11:
		goto loc_825A3180;
	default:
		__builtin_unreachable();
	}
loc_825A2D88:
	// li r4,338
	ctx.r4.s64 = 338;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A2D94;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A2DB0;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25152
	ctx.r4.s64 = ctx.r10.s64 + 25152;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A2DCC;
	sub_829E6978(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a2dec
	if (ctx.cr6.eq) goto loc_825A2DEC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2dec
	if (ctx.cr6.eq) goto loc_825A2DEC;
	// bl 0x82332db8
	ctx.lr = 0x825A2DEC;
	sub_82332DB8(ctx, base);
loc_825A2DEC:
	// lis r4,-31769
	ctx.r4.s64 = -2082013184;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r7,r1,280
	ctx.r7.s64 = ctx.r1.s64 + 280;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ori r4,r4,53825
	ctx.r4.u64 = ctx.r4.u64 | 53825;
	// bl 0x828250b0
	ctx.lr = 0x825A2E34;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A2E38:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1600
	ctx.r3.s64 = ctx.r1.s64 + 1600;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A2E4C;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25152
	ctx.r4.s64 = ctx.r10.s64 + 25152;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A2E68;
	sub_829E6978(ctx, base);
	// lwz r3,1732(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r1,1604
	ctx.r11.s64 = ctx.r1.s64 + 1604;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a2e88
	if (ctx.cr6.eq) goto loc_825A2E88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2e88
	if (ctx.cr6.eq) goto loc_825A2E88;
	// bl 0x82332db8
	ctx.lr = 0x825A2E88;
	sub_82332DB8(ctx, base);
loc_825A2E88:
	// lis r4,32021
	ctx.r4.s64 = 2098528256;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ori r4,r4,10944
	ctx.r4.u64 = ctx.r4.u64 | 10944;
	// bl 0x828250b0
	ctx.lr = 0x825A2ED0;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A2ED4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A2EE8;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25176
	ctx.r4.s64 = ctx.r10.s64 + 25176;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A2F04;
	sub_829E6978(ctx, base);
	// lwz r3,868(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// addi r11,r1,740
	ctx.r11.s64 = ctx.r1.s64 + 740;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a2f24
	if (ctx.cr6.eq) goto loc_825A2F24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2f24
	if (ctx.cr6.eq) goto loc_825A2F24;
	// bl 0x82332db8
	ctx.lr = 0x825A2F24;
	sub_82332DB8(ctx, base);
loc_825A2F24:
	// li r4,322
	ctx.r4.s64 = 322;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A2F30;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// lis r4,29209
	ctx.r4.s64 = 1914241024;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r4,r4,45986
	ctx.r4.u64 = ctx.r4.u64 | 45986;
	// bl 0x828250b0
	ctx.lr = 0x825A2F80;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A2F84:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A2F98;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25152
	ctx.r4.s64 = ctx.r10.s64 + 25152;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A2FB4;
	sub_829E6978(ctx, base);
	// lwz r3,1444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r11,r1,1316
	ctx.r11.s64 = ctx.r1.s64 + 1316;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a2fd4
	if (ctx.cr6.eq) goto loc_825A2FD4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a2fd4
	if (ctx.cr6.eq) goto loc_825A2FD4;
	// bl 0x82332db8
	ctx.lr = 0x825A2FD4;
	sub_82332DB8(ctx, base);
loc_825A2FD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r4,-7590
	ctx.r4.s64 = -497418240;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r4,r4,59699
	ctx.r4.u64 = ctx.r4.u64 | 59699;
	// bl 0x828250b0
	ctx.lr = 0x825A301C;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A3020:
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A302C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A3048;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25152
	ctx.r4.s64 = ctx.r10.s64 + 25152;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A3064;
	sub_829E6978(ctx, base);
	// lwz r3,1156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// addi r11,r1,1028
	ctx.r11.s64 = ctx.r1.s64 + 1028;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a3084
	if (ctx.cr6.eq) goto loc_825A3084;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3084
	if (ctx.cr6.eq) goto loc_825A3084;
	// bl 0x82332db8
	ctx.lr = 0x825A3084;
	sub_82332DB8(ctx, base);
loc_825A3084:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,-7447
	ctx.r4.s64 = -488046592;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,32978
	ctx.r4.u64 = ctx.r4.u64 | 32978;
	// bl 0x828250b0
	ctx.lr = 0x825A30CC;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A30D0:
	// li r4,344
	ctx.r4.s64 = 344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A30DC;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A30F8;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25192
	ctx.r4.s64 = ctx.r10.s64 + 25192;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A3114;
	sub_829E6978(ctx, base);
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a3134
	if (ctx.cr6.eq) goto loc_825A3134;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3134
	if (ctx.cr6.eq) goto loc_825A3134;
	// bl 0x82332db8
	ctx.lr = 0x825A3134;
	sub_82332DB8(ctx, base);
loc_825A3134:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,-20039
	ctx.r4.s64 = -1313275904;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,1196
	ctx.r4.u64 = ctx.r4.u64 | 1196;
	// bl 0x828250b0
	ctx.lr = 0x825A317C;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A3180:
	// li r4,360
	ctx.r4.s64 = 360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A318C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A31A8;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25220
	ctx.r4.s64 = ctx.r10.s64 + 25220;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A31C4;
	sub_829E6978(ctx, base);
	// lwz r3,724(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// addi r11,r1,596
	ctx.r11.s64 = ctx.r1.s64 + 596;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a31e4
	if (ctx.cr6.eq) goto loc_825A31E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a31e4
	if (ctx.cr6.eq) goto loc_825A31E4;
	// bl 0x82332db8
	ctx.lr = 0x825A31E4;
	sub_82332DB8(ctx, base);
loc_825A31E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,-1772
	ctx.r4.s64 = -116129792;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,10705
	ctx.r4.u64 = ctx.r4.u64 | 10705;
	// bl 0x828250b0
	ctx.lr = 0x825A322C;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A3230:
	// lwz r11,6112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a32e4
	if (!ctx.cr6.gt) goto loc_825A32E4;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_825A3244:
	// lwz r10,6108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6108);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A3258;
	sub_829B9720(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825a3288
	if (ctx.cr0.eq) goto loc_825A3288;
	// bl 0x823c6730
	ctx.lr = 0x825A3264;
	sub_823C6730(ctx, base);
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
	ctx.lr = 0x825A327C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne 0x825a328c
	if (!ctx.cr0.eq) goto loc_825A328C;
loc_825A3288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A328C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a32d0
	if (ctx.cr6.eq) goto loc_825A32D0;
	// lwz r11,3360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a32d0
	if (ctx.cr6.eq) goto loc_825A32D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1676);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A32B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,6096
	ctx.r3.s64 = ctx.r30.s64 + 6096;
	// bl 0x82332ca8
	ctx.lr = 0x825A32C8;
	sub_82332CA8(ctx, base);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
loc_825A32D0:
	// lwz r11,6112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a3244
	if (ctx.cr6.lt) goto loc_825A3244;
loc_825A32E4:
	// li r4,336
	ctx.r4.s64 = 336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A32F0;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A330C;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25244
	ctx.r4.s64 = ctx.r10.s64 + 25244;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A3328;
	sub_829E6978(ctx, base);
	// lwz r3,1012(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// addi r11,r1,884
	ctx.r11.s64 = ctx.r1.s64 + 884;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a3348
	if (ctx.cr6.eq) goto loc_825A3348;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3348
	if (ctx.cr6.eq) goto loc_825A3348;
	// bl 0x82332db8
	ctx.lr = 0x825A3348;
	sub_82332DB8(ctx, base);
loc_825A3348:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,-397
	ctx.r4.s64 = -26017792;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r7,r1,184
	ctx.r7.s64 = ctx.r1.s64 + 184;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,42696
	ctx.r4.u64 = ctx.r4.u64 | 42696;
	// bl 0x828250b0
	ctx.lr = 0x825A3390;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// b 0x825a35b0
	goto loc_825A35B0;
loc_825A339C:
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A33A8;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1168
	ctx.r3.s64 = ctx.r1.s64 + 1168;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A33C4;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25268
	ctx.r4.s64 = ctx.r10.s64 + 25268;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A33E0;
	sub_829E6978(ctx, base);
	// lwz r3,1300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1300);
	// addi r11,r1,1172
	ctx.r11.s64 = ctx.r1.s64 + 1172;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a3400
	if (ctx.cr6.eq) goto loc_825A3400;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3400
	if (ctx.cr6.eq) goto loc_825A3400;
	// bl 0x82332db8
	ctx.lr = 0x825A3400;
	sub_82332DB8(ctx, base);
loc_825A3400:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,-29497
	ctx.r4.s64 = -1933115392;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,12683
	ctx.r4.u64 = ctx.r4.u64 | 12683;
	// bl 0x828250b0
	ctx.lr = 0x825A3448;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A344C:
	// li r4,330
	ctx.r4.s64 = 330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A3458;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1456
	ctx.r3.s64 = ctx.r1.s64 + 1456;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A3474;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25288
	ctx.r4.s64 = ctx.r10.s64 + 25288;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A3490;
	sub_829E6978(ctx, base);
	// lwz r3,1588(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// addi r11,r1,1460
	ctx.r11.s64 = ctx.r1.s64 + 1460;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a34b0
	if (ctx.cr6.eq) goto loc_825A34B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a34b0
	if (ctx.cr6.eq) goto loc_825A34B0;
	// bl 0x82332db8
	ctx.lr = 0x825A34B0;
	sub_82332DB8(ctx, base);
loc_825A34B0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,1671
	ctx.r4.s64 = 109510656;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,34587
	ctx.r4.u64 = ctx.r4.u64 | 34587;
	// bl 0x828250b0
	ctx.lr = 0x825A34F8;
	sub_828250B0(ctx, base);
	// b 0x825a35a8
	goto loc_825A35A8;
loc_825A34FC:
	// li r4,326
	ctx.r4.s64 = 326;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A3508;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a369c
	if (ctx.cr0.eq) goto loc_825A369C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2184);
	// addi r3,r1,1744
	ctx.r3.s64 = ctx.r1.s64 + 1744;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x825A3524;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,25312
	ctx.r4.s64 = ctx.r10.s64 + 25312;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x825A3540;
	sub_829E6978(ctx, base);
	// lwz r3,1876(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1876);
	// addi r11,r1,1748
	ctx.r11.s64 = ctx.r1.s64 + 1748;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825a3560
	if (ctx.cr6.eq) goto loc_825A3560;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3560
	if (ctx.cr6.eq) goto loc_825A3560;
	// bl 0x82332db8
	ctx.lr = 0x825A3560;
	sub_82332DB8(ctx, base);
loc_825A3560:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r4,10623
	ctx.r4.s64 = 696188928;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// ori r4,r4,35777
	ctx.r4.u64 = ctx.r4.u64 | 35777;
	// bl 0x828250b0
	ctx.lr = 0x825A35A8;
	sub_828250B0(ctx, base);
loc_825A35A8:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825a35b8
	if (ctx.cr0.eq) goto loc_825A35B8;
loc_825A35B0:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x825a35bc
	goto loc_825A35BC;
loc_825A35B8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_825A35BC:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,6096
	ctx.r3.s64 = ctx.r30.s64 + 6096;
	// bl 0x82410060
	ctx.lr = 0x825A35CC;
	sub_82410060(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x825a369c
	if (ctx.cr6.eq) goto loc_825A369C;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825a3604
	if (!ctx.cr6.eq) goto loc_825A3604;
	// lwz r11,6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6148);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6148, ctx.r11.u32);
	// bne 0x825a35f8
	if (!ctx.cr0.eq) goto loc_825A35F8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,6148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6148, ctx.r11.u32);
loc_825A35F8:
	// lfs f0,6380(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,6380(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6380, temp.u32);
loc_825A3604:
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x825a3688
	if (ctx.cr6.lt) goto loc_825A3688;
	// lwz r10,6132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A3624;
	sub_829B9720(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825a3654
	if (ctx.cr0.eq) goto loc_825A3654;
	// bl 0x823c5e60
	ctx.lr = 0x825A3630;
	sub_823C5E60(ctx, base);
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
	ctx.lr = 0x825A3648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne 0x825a3658
	if (!ctx.cr0.eq) goto loc_825A3658;
loc_825A3654:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_825A3658:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3688
	if (ctx.cr6.eq) goto loc_825A3688;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,6120
	ctx.r3.s64 = ctx.r30.s64 + 6120;
	// bl 0x82332ca8
	ctx.lr = 0x825A3688;
	sub_82332CA8(ctx, base);
loc_825A3688:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,6120
	ctx.r3.s64 = ctx.r30.s64 + 6120;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A369C;
	sub_82410060(ctx, base);
loc_825A369C:
	// addi r1,r1,1952
	ctx.r1.s64 = ctx.r1.s64 + 1952;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A36A8"))) PPC_WEAK_FUNC(sub_825A36A8);
PPC_FUNC_IMPL(__imp__sub_825A36A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825A36B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r29,r1,120
	ctx.r29.s64 = ctx.r1.s64 + 120;
	// addi r27,r31,620
	ctx.r27.s64 = ctx.r31.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x825A36DC;
	sub_82816528(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825A3718;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825a3748
	if (ctx.cr0.eq) goto loc_825A3748;
	// bl 0x823ad9b8
	ctx.lr = 0x825A3724;
	sub_823AD9B8(ctx, base);
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
	ctx.lr = 0x825A373C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x825a374c
	if (!ctx.cr0.eq) goto loc_825A374C;
loc_825A3748:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_825A374C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a3758
	if (ctx.cr6.eq) goto loc_825A3758;
	// stw r30,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r30.u32);
loc_825A3758:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825A3780;
	sub_8233A258(ctx, base);
	// lis r4,1193
	ctx.r4.s64 = 78184448;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,14558
	ctx.r4.u64 = ctx.r4.u64 | 14558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A3794;
	sub_829C3740(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1876);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A37AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
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
	ctx.lr = 0x825A37D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a37ec
	if (!ctx.cr6.gt) goto loc_825A37EC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x825a38bc
	goto loc_825A38BC;
loc_825A37EC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a3888
	if (!ctx.cr6.eq) goto loc_825A3888;
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
	ctx.lr = 0x825A3810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a3868
	if (!ctx.cr6.gt) goto loc_825A3868;
loc_825A3824:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a3854
	if (!ctx.cr6.eq) goto loc_825A3854;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x825A384C;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_825A3854:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a3824
	if (ctx.cr6.lt) goto loc_825A3824;
loc_825A3868:
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
	ctx.lr = 0x825A3888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A3888:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825a38bc
	if (!ctx.cr0.eq) goto loc_825A38BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A38A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a38bc
	if (ctx.cr0.eq) goto loc_825A38BC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x825A38BC;
	sub_82410060(ctx, base);
loc_825A38BC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A38D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A38D8"))) PPC_WEAK_FUNC(sub_825A38D8);
PPC_FUNC_IMPL(__imp__sub_825A38D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r31,6400
	ctx.r4.s64 = ctx.r31.s64 + 6400;
	// bl 0x829c7c38
	ctx.lr = 0x825A38F4;
	sub_829C7C38(ctx, base);
	// addi r4,r31,6172
	ctx.r4.s64 = ctx.r31.s64 + 6172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c7c38
	ctx.lr = 0x825A3900;
	sub_829C7C38(ctx, base);
	// addi r4,r31,1748
	ctx.r4.s64 = ctx.r31.s64 + 1748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c7c38
	ctx.lr = 0x825A390C;
	sub_829C7C38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3920"))) PPC_WEAK_FUNC(sub_825A3920);
PPC_FUNC_IMPL(__imp__sub_825A3920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825A3928;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825a395c
	if (!ctx.cr6.eq) goto loc_825A395C;
	// lwz r11,6152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6152);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6152, ctx.r11.u32);
	// bne 0x825a395c
	if (!ctx.cr0.eq) goto loc_825A395C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,6152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6152, ctx.r11.u32);
loc_825A395C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r4,6396(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6396);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A3970;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A3974;
	sub_824090E0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r3,r11,-17436
	ctx.r3.s64 = ctx.r11.s64 + -17436;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// addi r26,r28,620
	ctx.r26.s64 = ctx.r28.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x825A399C;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825A39D8;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825a3a04
	if (ctx.cr0.eq) goto loc_825A3A04;
	// bl 0x823adaf8
	ctx.lr = 0x825A39E4;
	sub_823ADAF8(ctx, base);
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
	ctx.lr = 0x825A39FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a3a08
	if (!ctx.cr0.eq) goto loc_825A3A08;
loc_825A3A04:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825A3A08:
	// lwz r11,6160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a3a5c
	if (ctx.cr6.eq) goto loc_825A3A5C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r27,r11,15834
	ctx.r27.s64 = ctx.r11.s64 + 15834;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8233a258
	ctx.lr = 0x825A3A28;
	sub_8233A258(ctx, base);
	// lis r4,1530
	ctx.r4.s64 = 100270080;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,6160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6160);
	// ori r4,r4,37700
	ctx.r4.u64 = ctx.r4.u64 | 37700;
	// bl 0x829c3740
	ctx.lr = 0x825A3A3C;
	sub_829C3740(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233a258
	ctx.lr = 0x825A3A48;
	sub_8233A258(ctx, base);
	// lis r4,6348
	ctx.r4.s64 = 416022528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,6160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6160);
	// ori r4,r4,24754
	ctx.r4.u64 = ctx.r4.u64 | 24754;
	// bl 0x829c3740
	ctx.lr = 0x825A3A5C;
	sub_829C3740(ctx, base);
loc_825A3A5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825a3c14
	if (ctx.cr6.eq) goto loc_825A3C14;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825a3c14
	if (ctx.cr6.eq) goto loc_825A3C14;
	// stw r29,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r27,2184(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r28,r11,19592
	ctx.r28.s64 = ctx.r11.s64 + 19592;
	// lwz r29,1448(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82409058
	ctx.lr = 0x825A3A8C;
	sub_82409058(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,336
	ctx.r4.s64 = 336;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r26,132(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// frsp f30,f0
	ctx.f30.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,25336
	ctx.r4.s64 = ctx.r10.s64 + 25336;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x829e6978
	ctx.lr = 0x825A3B0C;
	sub_829E6978(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r11,r1,196
	ctx.r11.s64 = ctx.r1.s64 + 196;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x825a3b3c
	if (ctx.cr6.eq) goto loc_825A3B3C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3b3c
	if (ctx.cr6.eq) goto loc_825A3B3C;
	// bl 0x82332db8
	ctx.lr = 0x825A3B3C;
	sub_82332DB8(ctx, base);
loc_825A3B3C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,25356
	ctx.r4.s64 = ctx.r11.s64 + 25356;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816c30
	ctx.lr = 0x825A3B54;
	sub_82816C30(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823339b8
	ctx.lr = 0x825A3B60;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x825A3B64;
	sub_82333960(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r10,1456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r9,1460(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82409058
	ctx.lr = 0x825A3B90;
	sub_82409058(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,25412
	ctx.r4.s64 = ctx.r11.s64 + 25412;
	// bl 0x829e6978
	ctx.lr = 0x825A3BA8;
	sub_829E6978(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// addi r11,r1,340
	ctx.r11.s64 = ctx.r1.s64 + 340;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x825a3bf4
	if (ctx.cr6.eq) goto loc_825A3BF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3bf4
	if (ctx.cr6.eq) goto loc_825A3BF4;
	// bl 0x82332db8
	ctx.lr = 0x825A3BF4;
	sub_82332DB8(ctx, base);
loc_825A3BF4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r9.u32);
	// bl 0x82333960
	ctx.lr = 0x825A3C14;
	sub_82333960(ctx, base);
loc_825A3C14:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3C28"))) PPC_WEAK_FUNC(sub_825A3C28);
PPC_FUNC_IMPL(__imp__sub_825A3C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A3C30;
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x825A3C54;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825a3cec
	if (!ctx.cr0.eq) goto loc_825A3CEC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x825a3c74
	if (!ctx.cr6.eq) goto loc_825A3C74;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_825A3C74:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332640
	ctx.lr = 0x825A3C7C;
	sub_82332640(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x825A3C9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x825a3cd8
	if (ctx.cr0.eq) goto loc_825A3CD8;
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
	// b 0x825a3cdc
	goto loc_825A3CDC;
loc_825A3CD8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825A3CDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x825A3CE8;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A3CEC:
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
	ctx.lr = 0x825A3D08;
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

__attribute__((alias("__imp__sub_825A3D18"))) PPC_WEAK_FUNC(sub_825A3D18);
PPC_FUNC_IMPL(__imp__sub_825A3D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A3D30"))) PPC_WEAK_FUNC(sub_825A3D30);
PPC_FUNC_IMPL(__imp__sub_825A3D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8259e130
	sub_8259E130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3D38"))) PPC_WEAK_FUNC(sub_825A3D38);
PPC_FUNC_IMPL(__imp__sub_825A3D38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826be190
	sub_826BE190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3D40"))) PPC_WEAK_FUNC(sub_825A3D40);
PPC_FUNC_IMPL(__imp__sub_825A3D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8259e2c0
	sub_8259E2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3D48"))) PPC_WEAK_FUNC(sub_825A3D48);
PPC_FUNC_IMPL(__imp__sub_825A3D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8259e130
	sub_8259E130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3D50"))) PPC_WEAK_FUNC(sub_825A3D50);
PPC_FUNC_IMPL(__imp__sub_825A3D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8259dda0
	sub_8259DDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3D58"))) PPC_WEAK_FUNC(sub_825A3D58);
PPC_FUNC_IMPL(__imp__sub_825A3D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,29124
	ctx.r3.s64 = ctx.r11.s64 + 29124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3D68"))) PPC_WEAK_FUNC(sub_825A3D68);
PPC_FUNC_IMPL(__imp__sub_825A3D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a3da0
	if (ctx.cr6.eq) goto loc_825A3DA0;
	// bl 0x825a6cc8
	ctx.lr = 0x825A3D90;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a3da0
	if (!ctx.cr6.eq) goto loc_825A3DA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a3dac
	goto loc_825A3DAC;
loc_825A3DA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x825A3DAC;
	sub_82570278(ctx, base);
loc_825A3DAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3DC8"))) PPC_WEAK_FUNC(sub_825A3DC8);
PPC_FUNC_IMPL(__imp__sub_825A3DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x825A3DE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a3df8
	if (ctx.cr0.eq) goto loc_825A3DF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A3DF4;
	sub_825A3E60(ctx, base);
	// b 0x825a3dfc
	goto loc_825A3DFC;
loc_825A3DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3DFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3E10"))) PPC_WEAK_FUNC(sub_825A3E10);
PPC_FUNC_IMPL(__imp__sub_825A3E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a6cc8
	ctx.lr = 0x825A3E30;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a3e44
	if (ctx.cr6.eq) goto loc_825A3E44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A3E44;
	sub_825702D8(ctx, base);
loc_825A3E44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3E60"))) PPC_WEAK_FUNC(sub_825A3E60);
PPC_FUNC_IMPL(__imp__sub_825A3E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82571e20
	ctx.lr = 0x825A3E80;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// addi r10,r10,30248
	ctx.r10.s64 = ctx.r10.s64 + 30248;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3ED0"))) PPC_WEAK_FUNC(sub_825A3ED0);
PPC_FUNC_IMPL(__imp__sub_825A3ED0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7260
	ctx.r3.s64 = ctx.r11.s64 + -7260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3EE0"))) PPC_WEAK_FUNC(sub_825A3EE0);
PPC_FUNC_IMPL(__imp__sub_825A3EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a3f18
	if (ctx.cr6.eq) goto loc_825A3F18;
	// bl 0x823c13f8
	ctx.lr = 0x825A3F08;
	sub_823C13F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a3f18
	if (!ctx.cr6.eq) goto loc_825A3F18;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a3f24
	goto loc_825A3F24;
loc_825A3F18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A3F24;
	sub_825A3D68(ctx, base);
loc_825A3F24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3F40"))) PPC_WEAK_FUNC(sub_825A3F40);
PPC_FUNC_IMPL(__imp__sub_825A3F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c13f8
	sub_823C13F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A3F48"))) PPC_WEAK_FUNC(sub_825A3F48);
PPC_FUNC_IMPL(__imp__sub_825A3F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A3F68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a3fc0
	if (ctx.cr0.eq) goto loc_825A3FC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A3F7C;
	sub_825A3E60(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,30320
	ctx.r11.s64 = ctx.r11.s64 + 30320;
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// b 0x825a3fc4
	goto loc_825A3FC4;
loc_825A3FC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A3FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3FE0"))) PPC_WEAK_FUNC(sub_825A3FE0);
PPC_FUNC_IMPL(__imp__sub_825A3FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c13f8
	ctx.lr = 0x825A4000;
	sub_823C13F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4010
	if (!ctx.cr6.eq) goto loc_825A4010;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4028
	goto loc_825A4028;
loc_825A4010:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4014;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4028
	if (ctx.cr6.eq) goto loc_825A4028;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4028;
	sub_825702D8(ctx, base);
loc_825A4028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4040"))) PPC_WEAK_FUNC(sub_825A4040);
PPC_FUNC_IMPL(__imp__sub_825A4040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7232
	ctx.r3.s64 = ctx.r11.s64 + -7232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4050"))) PPC_WEAK_FUNC(sub_825A4050);
PPC_FUNC_IMPL(__imp__sub_825A4050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4088
	if (ctx.cr6.eq) goto loc_825A4088;
	// bl 0x823c1538
	ctx.lr = 0x825A4078;
	sub_823C1538(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4088
	if (!ctx.cr6.eq) goto loc_825A4088;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4094
	goto loc_825A4094;
loc_825A4088:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A4094;
	sub_825A3D68(ctx, base);
loc_825A4094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A40B0"))) PPC_WEAK_FUNC(sub_825A40B0);
PPC_FUNC_IMPL(__imp__sub_825A40B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1538
	sub_823C1538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A40B8"))) PPC_WEAK_FUNC(sub_825A40B8);
PPC_FUNC_IMPL(__imp__sub_825A40B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A40D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4120
	if (ctx.cr0.eq) goto loc_825A4120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A40EC;
	sub_825A3E60(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,31496
	ctx.r11.s64 = ctx.r11.s64 + 31496;
	// addi r10,r10,32592
	ctx.r10.s64 = ctx.r10.s64 + 32592;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// b 0x825a4124
	goto loc_825A4124;
loc_825A4120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4140"))) PPC_WEAK_FUNC(sub_825A4140);
PPC_FUNC_IMPL(__imp__sub_825A4140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1538
	ctx.lr = 0x825A4160;
	sub_823C1538(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4170
	if (!ctx.cr6.eq) goto loc_825A4170;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4188
	goto loc_825A4188;
loc_825A4170:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4174;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4188
	if (ctx.cr6.eq) goto loc_825A4188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4188;
	sub_825702D8(ctx, base);
loc_825A4188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A41A0"))) PPC_WEAK_FUNC(sub_825A41A0);
PPC_FUNC_IMPL(__imp__sub_825A41A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A41B0"))) PPC_WEAK_FUNC(sub_825A41B0);
PPC_FUNC_IMPL(__imp__sub_825A41B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a41e8
	if (ctx.cr6.eq) goto loc_825A41E8;
	// bl 0x823c1678
	ctx.lr = 0x825A41D8;
	sub_823C1678(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a41e8
	if (!ctx.cr6.eq) goto loc_825A41E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a41f4
	goto loc_825A41F4;
loc_825A41E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A41F4;
	sub_825A3D68(ctx, base);
loc_825A41F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4210"))) PPC_WEAK_FUNC(sub_825A4210);
PPC_FUNC_IMPL(__imp__sub_825A4210) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1678
	sub_823C1678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4218"))) PPC_WEAK_FUNC(sub_825A4218);
PPC_FUNC_IMPL(__imp__sub_825A4218) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A4238;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4288
	if (ctx.cr0.eq) goto loc_825A4288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A424C;
	sub_825A3E60(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,32648
	ctx.r11.s64 = ctx.r11.s64 + 32648;
	// addi r10,r10,-31792
	ctx.r10.s64 = ctx.r10.s64 + -31792;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1600(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// b 0x825a428c
	goto loc_825A428C;
loc_825A4288:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A428C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A42A8"))) PPC_WEAK_FUNC(sub_825A42A8);
PPC_FUNC_IMPL(__imp__sub_825A42A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1678
	ctx.lr = 0x825A42C8;
	sub_823C1678(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a42d8
	if (!ctx.cr6.eq) goto loc_825A42D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a42f0
	goto loc_825A42F0;
loc_825A42D8:
	// bl 0x825a6cc8
	ctx.lr = 0x825A42DC;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a42f0
	if (ctx.cr6.eq) goto loc_825A42F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A42F0;
	sub_825702D8(ctx, base);
loc_825A42F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4308"))) PPC_WEAK_FUNC(sub_825A4308);
PPC_FUNC_IMPL(__imp__sub_825A4308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7184
	ctx.r3.s64 = ctx.r11.s64 + -7184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4318"))) PPC_WEAK_FUNC(sub_825A4318);
PPC_FUNC_IMPL(__imp__sub_825A4318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4350
	if (ctx.cr6.eq) goto loc_825A4350;
	// bl 0x823c17c0
	ctx.lr = 0x825A4340;
	sub_823C17C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4350
	if (!ctx.cr6.eq) goto loc_825A4350;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a435c
	goto loc_825A435C;
loc_825A4350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A435C;
	sub_825A3D68(ctx, base);
loc_825A435C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4378"))) PPC_WEAK_FUNC(sub_825A4378);
PPC_FUNC_IMPL(__imp__sub_825A4378) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c17c0
	sub_823C17C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4380"))) PPC_WEAK_FUNC(sub_825A4380);
PPC_FUNC_IMPL(__imp__sub_825A4380) {
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
	// li r3,1632
	ctx.r3.s64 = 1632;
	// bl 0x82833108
	ctx.lr = 0x825A43A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4410
	if (ctx.cr0.eq) goto loc_825A4410;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A43B4;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// addi r10,r10,-30640
	ctx.r10.s64 = ctx.r10.s64 + -30640;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1600(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
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
	// b 0x825a4414
	goto loc_825A4414;
loc_825A4410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4430"))) PPC_WEAK_FUNC(sub_825A4430);
PPC_FUNC_IMPL(__imp__sub_825A4430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c17c0
	ctx.lr = 0x825A4450;
	sub_823C17C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4460
	if (!ctx.cr6.eq) goto loc_825A4460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4478
	goto loc_825A4478;
loc_825A4460:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4464;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4478
	if (ctx.cr6.eq) goto loc_825A4478;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4478;
	sub_825702D8(ctx, base);
loc_825A4478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4490"))) PPC_WEAK_FUNC(sub_825A4490);
PPC_FUNC_IMPL(__imp__sub_825A4490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// addi r10,r10,30248
	ctx.r10.s64 = ctx.r10.s64 + 30248;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82570708
	ctx.lr = 0x825A44D4;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825a44e4
	if (ctx.cr0.eq) goto loc_825A44E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x825A44E4;
	sub_82332DB8(ctx, base);
loc_825A44E4:
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

__attribute__((alias("__imp__sub_825A4500"))) PPC_WEAK_FUNC(sub_825A4500);
PPC_FUNC_IMPL(__imp__sub_825A4500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7156
	ctx.r3.s64 = ctx.r11.s64 + -7156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4510"))) PPC_WEAK_FUNC(sub_825A4510);
PPC_FUNC_IMPL(__imp__sub_825A4510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4548
	if (ctx.cr6.eq) goto loc_825A4548;
	// bl 0x823c1900
	ctx.lr = 0x825A4538;
	sub_823C1900(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4548
	if (!ctx.cr6.eq) goto loc_825A4548;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4554
	goto loc_825A4554;
loc_825A4548:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A4554;
	sub_825A3D68(ctx, base);
loc_825A4554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4570"))) PPC_WEAK_FUNC(sub_825A4570);
PPC_FUNC_IMPL(__imp__sub_825A4570) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1900
	sub_823C1900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4578"))) PPC_WEAK_FUNC(sub_825A4578);
PPC_FUNC_IMPL(__imp__sub_825A4578) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A4598;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a45f8
	if (ctx.cr0.eq) goto loc_825A45F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A45AC;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-30584
	ctx.r11.s64 = ctx.r11.s64 + -30584;
	// addi r10,r10,-29488
	ctx.r10.s64 = ctx.r10.s64 + -29488;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1600(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
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
	// b 0x825a45fc
	goto loc_825A45FC;
loc_825A45F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A45FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4618"))) PPC_WEAK_FUNC(sub_825A4618);
PPC_FUNC_IMPL(__imp__sub_825A4618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1900
	ctx.lr = 0x825A4638;
	sub_823C1900(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4648
	if (!ctx.cr6.eq) goto loc_825A4648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4660
	goto loc_825A4660;
loc_825A4648:
	// bl 0x825a6cc8
	ctx.lr = 0x825A464C;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4660
	if (ctx.cr6.eq) goto loc_825A4660;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4660;
	sub_825702D8(ctx, base);
loc_825A4660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4678"))) PPC_WEAK_FUNC(sub_825A4678);
PPC_FUNC_IMPL(__imp__sub_825A4678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7128
	ctx.r3.s64 = ctx.r11.s64 + -7128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4688"))) PPC_WEAK_FUNC(sub_825A4688);
PPC_FUNC_IMPL(__imp__sub_825A4688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a46c0
	if (ctx.cr6.eq) goto loc_825A46C0;
	// bl 0x823c1a40
	ctx.lr = 0x825A46B0;
	sub_823C1A40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a46c0
	if (!ctx.cr6.eq) goto loc_825A46C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a46cc
	goto loc_825A46CC;
loc_825A46C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A46CC;
	sub_825A3D68(ctx, base);
loc_825A46CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A46E8"))) PPC_WEAK_FUNC(sub_825A46E8);
PPC_FUNC_IMPL(__imp__sub_825A46E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1a40
	sub_823C1A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A46F0"))) PPC_WEAK_FUNC(sub_825A46F0);
PPC_FUNC_IMPL(__imp__sub_825A46F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A4710;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4758
	if (ctx.cr0.eq) goto loc_825A4758;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A4724;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-29432
	ctx.r11.s64 = ctx.r11.s64 + -29432;
	// addi r10,r10,-28336
	ctx.r10.s64 = ctx.r10.s64 + -28336;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// b 0x825a475c
	goto loc_825A475C;
loc_825A4758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A475C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4778"))) PPC_WEAK_FUNC(sub_825A4778);
PPC_FUNC_IMPL(__imp__sub_825A4778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1a40
	ctx.lr = 0x825A4798;
	sub_823C1A40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a47a8
	if (!ctx.cr6.eq) goto loc_825A47A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a47c0
	goto loc_825A47C0;
loc_825A47A8:
	// bl 0x825a6cc8
	ctx.lr = 0x825A47AC;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a47c0
	if (ctx.cr6.eq) goto loc_825A47C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A47C0;
	sub_825702D8(ctx, base);
loc_825A47C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A47D8"))) PPC_WEAK_FUNC(sub_825A47D8);
PPC_FUNC_IMPL(__imp__sub_825A47D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7104
	ctx.r3.s64 = ctx.r11.s64 + -7104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A47E8"))) PPC_WEAK_FUNC(sub_825A47E8);
PPC_FUNC_IMPL(__imp__sub_825A47E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4820
	if (ctx.cr6.eq) goto loc_825A4820;
	// bl 0x823c1b80
	ctx.lr = 0x825A4810;
	sub_823C1B80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4820
	if (!ctx.cr6.eq) goto loc_825A4820;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a482c
	goto loc_825A482C;
loc_825A4820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A482C;
	sub_825A3D68(ctx, base);
loc_825A482C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4848"))) PPC_WEAK_FUNC(sub_825A4848);
PPC_FUNC_IMPL(__imp__sub_825A4848) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1b80
	sub_823C1B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4850"))) PPC_WEAK_FUNC(sub_825A4850);
PPC_FUNC_IMPL(__imp__sub_825A4850) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a6cc8
	sub_825A6CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4858"))) PPC_WEAK_FUNC(sub_825A4858);
PPC_FUNC_IMPL(__imp__sub_825A4858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x825A4878;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a48c0
	if (ctx.cr0.eq) goto loc_825A48C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A488C;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// addi r10,r10,-27184
	ctx.r10.s64 = ctx.r10.s64 + -27184;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// b 0x825a48c4
	goto loc_825A48C4;
loc_825A48C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A48C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A48E0"))) PPC_WEAK_FUNC(sub_825A48E0);
PPC_FUNC_IMPL(__imp__sub_825A48E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1b80
	ctx.lr = 0x825A4900;
	sub_823C1B80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4910
	if (!ctx.cr6.eq) goto loc_825A4910;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4928
	goto loc_825A4928;
loc_825A4910:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4914;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4928
	if (ctx.cr6.eq) goto loc_825A4928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4928;
	sub_825702D8(ctx, base);
loc_825A4928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4940"))) PPC_WEAK_FUNC(sub_825A4940);
PPC_FUNC_IMPL(__imp__sub_825A4940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7076
	ctx.r3.s64 = ctx.r11.s64 + -7076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4950"))) PPC_WEAK_FUNC(sub_825A4950);
PPC_FUNC_IMPL(__imp__sub_825A4950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4988
	if (ctx.cr6.eq) goto loc_825A4988;
	// bl 0x823c1cc8
	ctx.lr = 0x825A4978;
	sub_823C1CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4988
	if (!ctx.cr6.eq) goto loc_825A4988;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4994
	goto loc_825A4994;
loc_825A4988:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A4994;
	sub_825A3D68(ctx, base);
loc_825A4994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A49B0"))) PPC_WEAK_FUNC(sub_825A49B0);
PPC_FUNC_IMPL(__imp__sub_825A49B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1cc8
	sub_823C1CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A49B8"))) PPC_WEAK_FUNC(sub_825A49B8);
PPC_FUNC_IMPL(__imp__sub_825A49B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x825A49D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4a18
	if (ctx.cr0.eq) goto loc_825A4A18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A49EC;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-27128
	ctx.r11.s64 = ctx.r11.s64 + -27128;
	// addi r10,r10,-26032
	ctx.r10.s64 = ctx.r10.s64 + -26032;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825a4a1c
	goto loc_825A4A1C;
loc_825A4A18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4A1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4A38"))) PPC_WEAK_FUNC(sub_825A4A38);
PPC_FUNC_IMPL(__imp__sub_825A4A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1cc8
	ctx.lr = 0x825A4A58;
	sub_823C1CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4a68
	if (!ctx.cr6.eq) goto loc_825A4A68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4a80
	goto loc_825A4A80;
loc_825A4A68:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4A6C;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4a80
	if (ctx.cr6.eq) goto loc_825A4A80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4A80;
	sub_825702D8(ctx, base);
loc_825A4A80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4A98"))) PPC_WEAK_FUNC(sub_825A4A98);
PPC_FUNC_IMPL(__imp__sub_825A4A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-7052
	ctx.r3.s64 = ctx.r11.s64 + -7052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4AA8"))) PPC_WEAK_FUNC(sub_825A4AA8);
PPC_FUNC_IMPL(__imp__sub_825A4AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825a4ae0
	if (ctx.cr6.eq) goto loc_825A4AE0;
	// bl 0x823c1e60
	ctx.lr = 0x825A4AD0;
	sub_823C1E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4ae0
	if (!ctx.cr6.eq) goto loc_825A4AE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4aec
	goto loc_825A4AEC;
loc_825A4AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825a3d68
	ctx.lr = 0x825A4AEC;
	sub_825A3D68(ctx, base);
loc_825A4AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4B08"))) PPC_WEAK_FUNC(sub_825A4B08);
PPC_FUNC_IMPL(__imp__sub_825A4B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c1e60
	sub_823C1E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4B10"))) PPC_WEAK_FUNC(sub_825A4B10);
PPC_FUNC_IMPL(__imp__sub_825A4B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x825A4B30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825a4b70
	if (ctx.cr0.eq) goto loc_825A4B70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a3e60
	ctx.lr = 0x825A4B44;
	sub_825A3E60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// addi r10,r10,-24880
	ctx.r10.s64 = ctx.r10.s64 + -24880;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825a4b74
	goto loc_825A4B74;
loc_825A4B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4B90"))) PPC_WEAK_FUNC(sub_825A4B90);
PPC_FUNC_IMPL(__imp__sub_825A4B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c1e60
	ctx.lr = 0x825A4BB0;
	sub_823C1E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825a4bc0
	if (!ctx.cr6.eq) goto loc_825A4BC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825a4bd8
	goto loc_825A4BD8;
loc_825A4BC0:
	// bl 0x825a6cc8
	ctx.lr = 0x825A4BC4;
	sub_825A6CC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a4bd8
	if (ctx.cr6.eq) goto loc_825A4BD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825A4BD8;
	sub_825702D8(ctx, base);
loc_825A4BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4BF0"))) PPC_WEAK_FUNC(sub_825A4BF0);
PPC_FUNC_IMPL(__imp__sub_825A4BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x825705f8
	ctx.lr = 0x825A4C08;
	sub_825705F8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// addi r10,r10,30248
	ctx.r10.s64 = ctx.r10.s64 + 30248;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4C58"))) PPC_WEAK_FUNC(sub_825A4C58);
PPC_FUNC_IMPL(__imp__sub_825A4C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1440
	ctx.r3.s64 = ctx.r3.s64 + 1440;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82332c38
	sub_82332C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4C80"))) PPC_WEAK_FUNC(sub_825A4C80);
PPC_FUNC_IMPL(__imp__sub_825A4C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4C88"))) PPC_WEAK_FUNC(sub_825A4C88);
PPC_FUNC_IMPL(__imp__sub_825A4C88) {
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
	ctx.lr = 0x825A4CA0;
	sub_8257A570(ctx, base);
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a4cf4
	if (ctx.cr6.eq) goto loc_825A4CF4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,19720
	ctx.r8.s64 = ctx.r11.s64 + 19720;
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a4cec
	if (!ctx.cr6.gt) goto loc_825A4CEC;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A4CD0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a4cf4
	if (ctx.cr6.eq) goto loc_825A4CF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a4cd0
	if (ctx.cr6.lt) goto loc_825A4CD0;
loc_825A4CEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A4CF4;
	sub_82410060(ctx, base);
loc_825A4CF4:
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

__attribute__((alias("__imp__sub_825A4D08"))) PPC_WEAK_FUNC(sub_825A4D08);
PPC_FUNC_IMPL(__imp__sub_825A4D08) {
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
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// bl 0x82332868
	ctx.lr = 0x825A4D1C;
	sub_82332868(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a4d3c
	if (ctx.cr0.eq) goto loc_825A4D3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x825a4d40
	if (!ctx.cr6.eq) goto loc_825A4D40;
loc_825A4D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4D40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4D50"))) PPC_WEAK_FUNC(sub_825A4D50);
PPC_FUNC_IMPL(__imp__sub_825A4D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A4D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x825a4e84
	if (!ctx.cr6.eq) goto loc_825A4E84;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x825a4d80
	if (ctx.cr6.eq) goto loc_825A4D80;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x825a4e84
	if (!ctx.cr6.eq) goto loc_825A4E84;
loc_825A4D80:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,6396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6396);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,6456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6456, ctx.r11.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A4D9C;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x825A4DA0;
	sub_824090E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,628(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// lfs f0,-24644(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,620(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824f1398
	ctx.lr = 0x825A4DD8;
	sub_824F1398(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x825A4DEC;
	sub_824F12A0(ctx, base);
	// stw r3,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r3.u32);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,4080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r4,716(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 716);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A4E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// bl 0x82825748
	ctx.lr = 0x825A4E7C;
	sub_82825748(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a4e88
	goto loc_825A4E88;
loc_825A4E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A4E88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A4E90"))) PPC_WEAK_FUNC(sub_825A4E90);
PPC_FUNC_IMPL(__imp__sub_825A4E90) {
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
	// addi r3,r3,1440
	ctx.r3.s64 = ctx.r3.s64 + 1440;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825a4ecc
	if (ctx.cr6.eq) goto loc_825A4ECC;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x825A4ECC;
	sub_82332C38(ctx, base);
loc_825A4ECC:
	// lwz r11,4080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,-29292(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825a4f1c
	if (ctx.cr6.gt) goto loc_825A4F1C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A4F1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4F30"))) PPC_WEAK_FUNC(sub_825A4F30);
PPC_FUNC_IMPL(__imp__sub_825A4F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A4F4C;
	sub_825A4BF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,30320
	ctx.r11.s64 = ctx.r11.s64 + 30320;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,31416
	ctx.r10.s64 = ctx.r10.s64 + 31416;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A4F8C;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A4FA4;
	sub_82410060(ctx, base);
	// lis r11,-6782
	ctx.r11.s64 = -444465152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,64251
	ctx.r11.u64 = ctx.r11.u64 | 64251;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A4FBC;
	sub_82410060(ctx, base);
	// lis r11,-20614
	ctx.r11.s64 = -1350959104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,9673
	ctx.r11.u64 = ctx.r11.u64 | 9673;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A4FD4;
	sub_82410060(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_825A4FF8"))) PPC_WEAK_FUNC(sub_825A4FF8);
PPC_FUNC_IMPL(__imp__sub_825A4FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a5020
	if (ctx.cr6.eq) goto loc_825A5020;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x825A5020;
	sub_829BD428(ctx, base);
loc_825A5020:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x825A5028;
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

__attribute__((alias("__imp__sub_825A5040"))) PPC_WEAK_FUNC(sub_825A5040);
PPC_FUNC_IMPL(__imp__sub_825A5040) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A5058;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,20664
	ctx.r8.s64 = ctx.r11.s64 + 20664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a5098
	if (!ctx.cr6.gt) goto loc_825A5098;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A507C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a50a0
	if (ctx.cr6.eq) goto loc_825A50A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a507c
	if (ctx.cr6.lt) goto loc_825A507C;
loc_825A5098:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A50A0;
	sub_82410060(ctx, base);
loc_825A50A0:
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

__attribute__((alias("__imp__sub_825A50B8"))) PPC_WEAK_FUNC(sub_825A50B8);
PPC_FUNC_IMPL(__imp__sub_825A50B8) {
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
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A50D8;
	sub_82332868(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r10,2372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2372);
	// addic. r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x825a5190
	if (ctx.cr0.lt) goto loc_825A5190;
	// lwz r11,2368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2368);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825A50FC:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a5184
	if (ctx.cr6.eq) goto loc_825A5184;
	// lwz r11,1464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5178
	if (ctx.cr6.eq) goto loc_825A5178;
	// lwz r11,1420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1420);
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1416(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1412(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x825a5170
	if (!ctx.cr6.gt) goto loc_825A5170;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A5170:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825a517c
	goto loc_825A517C;
loc_825A5178:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A517C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825a51ac
	if (!ctx.cr0.eq) goto loc_825A51AC;
loc_825A5184:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x825a50fc
	if (!ctx.cr0.lt) goto loc_825A50FC;
loc_825A5190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A5194:
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
loc_825A51AC:
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x825A51B8;
	sub_829BD3A8(ctx, base);
	// lis r11,-389
	ctx.r11.s64 = -25493504;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,37430
	ctx.r11.u64 = ctx.r11.u64 | 37430;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,6436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6436, ctx.r11.u32);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// b 0x825a5194
	goto loc_825A5194;
}

__attribute__((alias("__imp__sub_825A51D8"))) PPC_WEAK_FUNC(sub_825A51D8);
PPC_FUNC_IMPL(__imp__sub_825A51D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c6fb8
	ctx.lr = 0x825A51F8;
	sub_829C6FB8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825a5214
	if (ctx.cr6.eq) goto loc_825A5214;
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a5214
	if (!ctx.cr6.eq) goto loc_825A5214;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1608, ctx.r11.u32);
loc_825A5214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5230"))) PPC_WEAK_FUNC(sub_825A5230);
PPC_FUNC_IMPL(__imp__sub_825A5230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825A5238;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A524C;
	sub_8259C668(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x82332868
	ctx.lr = 0x825A5264;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5288
	if (ctx.cr6.eq) goto loc_825A5288;
	// lis r26,-24627
	ctx.r26.s64 = -1613955072;
	// ori r26,r26,46822
	ctx.r26.u64 = ctx.r26.u64 | 46822;
	// b 0x825a549c
	goto loc_825A549C;
loc_825A5288:
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a52b8
	if (!ctx.cr6.eq) goto loc_825A52B8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6384);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x825a52b0
	if (!ctx.cr6.lt) goto loc_825A52B0;
	// stfs f13,6380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
loc_825A52B0:
	// stw r27,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r27.u32);
	// b 0x825a549c
	goto loc_825A549C;
loc_825A52B8:
	// lwz r10,1436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,1440(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828fd8d8
	ctx.lr = 0x825A52F8;
	sub_828FD8D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a5338
	if (!ctx.cr0.eq) goto loc_825A5338;
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// lis r26,28114
	ctx.r26.s64 = 1842479104;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1436
	ctx.r9.s64 = ctx.r11.s64 + 1436;
	// ori r26,r26,50040
	ctx.r26.u64 = ctx.r26.u64 | 50040;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,1684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1684, ctx.r10.u32);
	// stw r8,1688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1688, ctx.r8.u32);
	// stw r9,1692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1692, ctx.r9.u32);
	// b 0x825a549c
	goto loc_825A549C;
loc_825A5338:
	// lwz r11,6376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// lis r26,-20614
	ctx.r26.s64 = -1350959104;
	// ori r26,r26,9673
	ctx.r26.u64 = ctx.r26.u64 | 9673;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5370
	if (!ctx.cr6.eq) goto loc_825A5370;
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1468);
	// stw r10,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r10.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,6500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6500, ctx.r11.u32);
	// stw r10,6504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6504, ctx.r10.u32);
	// b 0x825a549c
	goto loc_825A549C;
loc_825A5370:
	// lwz r11,6504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a549c
	if (ctx.cr6.eq) goto loc_825A549C;
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5470
	if (!ctx.cr6.eq) goto loc_825A5470;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x825A5390;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825a53e8
	if (ctx.cr0.eq) goto loc_825A53E8;
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a53ac
	if (ctx.cr6.eq) goto loc_825A53AC;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825a53b0
	goto loc_825A53B0;
loc_825A53AC:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_825A53B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r25,80(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x825A53BC;
	sub_82833180(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// addi r11,r11,-24792
	ctx.r11.s64 = ctx.r11.s64 + -24792;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// b 0x825a53ec
	goto loc_825A53EC;
loc_825A53E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_825A53EC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825A53FC;
	sub_82833A30(ctx, base);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// lwz r9,1416(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1416);
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1604, ctx.r10.u32);
	// stw r27,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r27.u32);
	// lfs f0,-32456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6432, temp.u32);
	// b 0x825a549c
	goto loc_825A549C;
loc_825A5470:
	// lfs f0,6384(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,6380(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x825a5484
	if (!ctx.cr6.lt) goto loc_825A5484;
	// stfs f0,6380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6380, temp.u32);
loc_825A5484:
	// stw r27,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r27.u32);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x829bd428
	ctx.lr = 0x825A5494;
	sub_829BD428(ctx, base);
	// stw r27,1608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1608, ctx.r27.u32);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_825A549C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A54B0"))) PPC_WEAK_FUNC(sub_825A54B0);
PPC_FUNC_IMPL(__imp__sub_825A54B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A54CC;
	sub_825A4BF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,28114
	ctx.r8.s64 = 1842479104;
	// addi r11,r11,31496
	ctx.r11.s64 = ctx.r11.s64 + 31496;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,32592
	ctx.r10.s64 = ctx.r10.s64 + 32592;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,50040
	ctx.r11.u64 = ctx.r8.u64 | 50040;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A550C;
	sub_82410060(ctx, base);
	// lis r11,-24627
	ctx.r11.s64 = -1613955072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,46822
	ctx.r11.u64 = ctx.r11.u64 | 46822;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5524;
	sub_82410060(ctx, base);
	// lis r11,-30309
	ctx.r11.s64 = -1986330624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,38496
	ctx.r11.u64 = ctx.r11.u64 | 38496;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A553C;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A5558"))) PPC_WEAK_FUNC(sub_825A5558);
PPC_FUNC_IMPL(__imp__sub_825A5558) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A5570;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,21968
	ctx.r8.s64 = ctx.r11.s64 + 21968;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a55b0
	if (!ctx.cr6.gt) goto loc_825A55B0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A5594:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a55b8
	if (ctx.cr6.eq) goto loc_825A55B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a5594
	if (ctx.cr6.lt) goto loc_825A5594;
loc_825A55B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A55B8;
	sub_82410060(ctx, base);
loc_825A55B8:
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

__attribute__((alias("__imp__sub_825A55D0"))) PPC_WEAK_FUNC(sub_825A55D0);
PPC_FUNC_IMPL(__imp__sub_825A55D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A55F0;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5614
	if (!ctx.cr6.eq) goto loc_825A5614;
	// lis r4,-16650
	ctx.r4.s64 = -1091174400;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r4,r4,60376
	ctx.r4.u64 = ctx.r4.u64 | 60376;
	// bl 0x825a4d50
	ctx.lr = 0x825A5610;
	sub_825A4D50(ctx, base);
	// b 0x825a5618
	goto loc_825A5618;
loc_825A5614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A5618:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a5630
	if (ctx.cr6.eq) goto loc_825A5630;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r11.u32);
	// b 0x825a5648
	goto loc_825A5648;
loc_825A5630:
	// lis r11,-16650
	ctx.r11.s64 = -1091174400;
	// lwz r10,6436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// ori r11,r11,60376
	ctx.r11.u64 = ctx.r11.u64 | 60376;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825A5648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5660"))) PPC_WEAK_FUNC(sub_825A5660);
PPC_FUNC_IMPL(__imp__sub_825A5660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A5668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A5678;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x82332868
	ctx.lr = 0x825A5690;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a56b0
	if (ctx.cr6.eq) goto loc_825A56B0;
	// lis r29,-24627
	ctx.r29.s64 = -1613955072;
	// ori r29,r29,46822
	ctx.r29.u64 = ctx.r29.u64 | 46822;
	// b 0x825a5734
	goto loc_825A5734;
loc_825A56B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A56C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a5708
	if (!ctx.cr0.eq) goto loc_825A5708;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r29,r10,53358
	ctx.r29.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a5734
	goto loc_825A5734;
loc_825A5708:
	// lwz r11,1600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5734
	if (!ctx.cr6.eq) goto loc_825A5734;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r29,-30309
	ctx.r29.s64 = -1986330624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r29,38496
	ctx.r29.u64 = ctx.r29.u64 | 38496;
	// stw r11,6420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6420, ctx.r11.u32);
	// stw r10,1600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1600, ctx.r10.u32);
	// stw r9,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r9.u32);
loc_825A5734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5740"))) PPC_WEAK_FUNC(sub_825A5740);
PPC_FUNC_IMPL(__imp__sub_825A5740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A575C;
	sub_825A4BF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,32648
	ctx.r11.s64 = ctx.r11.s64 + 32648;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-31792
	ctx.r10.s64 = ctx.r10.s64 + -31792;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A579C;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A57B4;
	sub_82410060(ctx, base);
	// lis r11,-20614
	ctx.r11.s64 = -1350959104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,9673
	ctx.r11.u64 = ctx.r11.u64 | 9673;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A57CC;
	sub_82410060(ctx, base);
	// lis r11,28475
	ctx.r11.s64 = 1866137600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,28941
	ctx.r11.u64 = ctx.r11.u64 | 28941;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A57E4;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A5800"))) PPC_WEAK_FUNC(sub_825A5800);
PPC_FUNC_IMPL(__imp__sub_825A5800) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A5818;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,22648
	ctx.r8.s64 = ctx.r11.s64 + 22648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a5858
	if (!ctx.cr6.gt) goto loc_825A5858;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A583C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a5860
	if (ctx.cr6.eq) goto loc_825A5860;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a583c
	if (ctx.cr6.lt) goto loc_825A583C;
loc_825A5858:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A5860;
	sub_82410060(ctx, base);
loc_825A5860:
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

__attribute__((alias("__imp__sub_825A5878"))) PPC_WEAK_FUNC(sub_825A5878);
PPC_FUNC_IMPL(__imp__sub_825A5878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A5880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A5890;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,1851
	ctx.r11.s64 = 121307136;
	// ori r30,r11,14222
	ctx.r30.u64 = ctx.r11.u64 | 14222;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a58b8
	if (!ctx.cr6.eq) goto loc_825A58B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825a4d50
	ctx.lr = 0x825A58B4;
	sub_825A4D50(ctx, base);
	// b 0x825a58bc
	goto loc_825A58BC;
loc_825A58B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A58BC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a58e0
	if (ctx.cr6.eq) goto loc_825A58E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1604, ctx.r10.u32);
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1600, temp.u32);
	// b 0x825a5900
	goto loc_825A5900;
loc_825A58E0:
	// lwz r11,6436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x825a58fc
	if (!ctx.cr6.eq) goto loc_825A58FC;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825a5900
	if (ctx.cr6.eq) goto loc_825A5900;
loc_825A58FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A5900:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5908"))) PPC_WEAK_FUNC(sub_825A5908);
PPC_FUNC_IMPL(__imp__sub_825A5908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825A5910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A5920;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5940
	if (ctx.cr6.eq) goto loc_825A5940;
	// lis r3,-24627
	ctx.r3.s64 = -1613955072;
	// ori r3,r3,46822
	ctx.r3.u64 = ctx.r3.u64 | 46822;
	// b 0x825a59d0
	goto loc_825A59D0;
loc_825A5940:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a599c
	if (!ctx.cr0.eq) goto loc_825A599C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,14112
	ctx.r5.s64 = 924844032;
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r5,r5,53358
	ctx.r5.u64 = ctx.r5.u64 | 53358;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,14112
	ctx.r3.s64 = 924844032;
	// ori r3,r3,53358
	ctx.r3.u64 = ctx.r3.u64 | 53358;
	// b 0x825a59d0
	goto loc_825A59D0;
loc_825A599C:
	// lwz r11,1604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x825a59c4
	if (ctx.cr6.eq) goto loc_825A59C4;
	// lis r3,-20614
	ctx.r3.s64 = -1350959104;
	// lfs f0,1600(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1604, ctx.r11.u32);
	// stfs f0,6432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6432, temp.u32);
	// ori r3,r3,9673
	ctx.r3.u64 = ctx.r3.u64 | 9673;
	// b 0x825a59d0
	goto loc_825A59D0;
loc_825A59C4:
	// lis r3,28475
	ctx.r3.s64 = 1866137600;
	// stw r11,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r11.u32);
	// ori r3,r3,28941
	ctx.r3.u64 = ctx.r3.u64 | 28941;
loc_825A59D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A59D8"))) PPC_WEAK_FUNC(sub_825A59D8);
PPC_FUNC_IMPL(__imp__sub_825A59D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A59F4;
	sub_825A4BF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-30640
	ctx.r10.s64 = ctx.r10.s64 + -30640;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A5A34;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5A4C;
	sub_82410060(ctx, base);
	// lis r11,9713
	ctx.r11.s64 = 636551168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,60464
	ctx.r11.u64 = ctx.r11.u64 | 60464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5A64;
	sub_82410060(ctx, base);
	// lis r11,-20614
	ctx.r11.s64 = -1350959104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,9673
	ctx.r11.u64 = ctx.r11.u64 | 9673;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5A7C;
	sub_82410060(ctx, base);
	// lis r11,28475
	ctx.r11.s64 = 1866137600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,28941
	ctx.r11.u64 = ctx.r11.u64 | 28941;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5A94;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A5AB0"))) PPC_WEAK_FUNC(sub_825A5AB0);
PPC_FUNC_IMPL(__imp__sub_825A5AB0) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A5AC8;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,23336
	ctx.r8.s64 = ctx.r11.s64 + 23336;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a5b08
	if (!ctx.cr6.gt) goto loc_825A5B08;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A5AEC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a5b10
	if (ctx.cr6.eq) goto loc_825A5B10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a5aec
	if (ctx.cr6.lt) goto loc_825A5AEC;
loc_825A5B08:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A5B10;
	sub_82410060(ctx, base);
loc_825A5B10:
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

__attribute__((alias("__imp__sub_825A5B28"))) PPC_WEAK_FUNC(sub_825A5B28);
PPC_FUNC_IMPL(__imp__sub_825A5B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A5B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A5B40;
	sub_82332868(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,1851
	ctx.r11.s64 = 121307136;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r11,14222
	ctx.r28.u64 = ctx.r11.u64 | 14222;
	// lwz r11,6456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5b6c
	if (!ctx.cr6.eq) goto loc_825A5B6C;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825a4d50
	ctx.lr = 0x825A5B68;
	sub_825A4D50(ctx, base);
	// b 0x825a5b70
	goto loc_825A5B70;
loc_825A5B6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825A5B70:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a5ba4
	if (ctx.cr6.eq) goto loc_825A5BA4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r29,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r29.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// lfs f0,32716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// b 0x825a5bc4
	goto loc_825A5BC4;
loc_825A5BA4:
	// lwz r11,6436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6436);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x825a5bc0
	if (!ctx.cr6.eq) goto loc_825A5BC0;
	// lwz r11,6440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6440);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825a5bc4
	if (ctx.cr6.eq) goto loc_825A5BC4;
loc_825A5BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A5BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5BD0"))) PPC_WEAK_FUNC(sub_825A5BD0);
PPC_FUNC_IMPL(__imp__sub_825A5BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825A5BD8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A5BF0;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r27,4(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,6364(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5c18
	if (ctx.cr6.eq) goto loc_825A5C18;
	// lis r26,-24627
	ctx.r26.s64 = -1613955072;
	// ori r26,r26,46822
	ctx.r26.u64 = ctx.r26.u64 | 46822;
	// b 0x825a5e04
	goto loc_825A5E04;
loc_825A5C18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,1620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1620);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,-11424
	ctx.r11.s64 = ctx.r11.s64 + -11424;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13216);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x825a5ce0
	if (!ctx.cr6.eq) goto loc_825A5CE0;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x825A5C90;
	sub_824D7B70(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825a5ce0
	if (ctx.cr0.eq) goto loc_825A5CE0;
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r9,15834
	ctx.r4.s64 = ctx.r9.s64 + 15834;
	// stw r11,1620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1620, ctx.r11.u32);
	// stw r11,6164(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6164, ctx.r11.u32);
	// stw r31,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r31.u32);
	// stw r10,1612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1612, ctx.r10.u32);
	// bl 0x8233a258
	ctx.lr = 0x825A5CC0;
	sub_8233A258(ctx, base);
	// lis r4,12194
	ctx.r4.s64 = 799145984;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,61572
	ctx.r4.u64 = ctx.r4.u64 | 61572;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829c3740
	ctx.lr = 0x825A5CD4;
	sub_829C3740(ctx, base);
	// lis r3,9713
	ctx.r3.s64 = 636551168;
	// ori r3,r3,60464
	ctx.r3.u64 = ctx.r3.u64 | 60464;
	// b 0x825a5e08
	goto loc_825A5E08;
loc_825A5CE0:
	// lwz r11,1620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5d84
	if (!ctx.cr6.eq) goto loc_825A5D84;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f2,-32676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x825A5D48;
	sub_824D7B70(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825a5e04
	if (ctx.cr0.eq) goto loc_825A5E04;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r26,r10,53358
	ctx.r26.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A5D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a5e04
	goto loc_825A5E04;
loc_825A5D84:
	// lwz r11,1612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5dac
	if (ctx.cr6.eq) goto loc_825A5DAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,1600(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,29910
	ctx.r26.s64 = 1960181760;
	// stw r31,1612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1612, ctx.r31.u32);
	// stw r11,1616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1616, ctx.r11.u32);
	// ori r26,r26,17722
	ctx.r26.u64 = ctx.r26.u64 | 17722;
	// b 0x825a5e00
	goto loc_825A5E00;
loc_825A5DAC:
	// lwz r11,1616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a5e04
	if (ctx.cr6.eq) goto loc_825A5E04;
	// stw r31,1616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1616, ctx.r31.u32);
	// stw r31,6372(r27)
	PPC_STORE_U32(ctx.r27.u32 + 6372, ctx.r31.u32);
	// lwz r4,1620(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1620);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825a5de0
	if (ctx.cr6.eq) goto loc_825A5DE0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825A5DDC;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x825A5DE0;
	sub_82416348(ctx, base);
loc_825A5DE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a3920
	ctx.lr = 0x825A5DEC;
	sub_825A3920(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r26,-20614
	ctx.r26.s64 = -1350959104;
	// stw r31,1620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1620, ctx.r31.u32);
	// ori r26,r26,9673
	ctx.r26.u64 = ctx.r26.u64 | 9673;
	// lfs f0,20396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
loc_825A5E00:
	// stfs f0,6432(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 6432, temp.u32);
loc_825A5E04:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_825A5E08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5E18"))) PPC_WEAK_FUNC(sub_825A5E18);
PPC_FUNC_IMPL(__imp__sub_825A5E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A5E34;
	sub_825A4BF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,-30584
	ctx.r11.s64 = ctx.r11.s64 + -30584;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-29488
	ctx.r10.s64 = ctx.r10.s64 + -29488;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// addi r31,r30,1492
	ctx.r31.s64 = ctx.r30.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825A5E74;
	sub_82410060(ctx, base);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,53358
	ctx.r11.u64 = ctx.r11.u64 | 53358;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5E8C;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5EA4;
	sub_82410060(ctx, base);
	// lis r11,9713
	ctx.r11.s64 = 636551168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,60464
	ctx.r11.u64 = ctx.r11.u64 | 60464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5EBC;
	sub_82410060(ctx, base);
	// lis r11,-20614
	ctx.r11.s64 = -1350959104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,9673
	ctx.r11.u64 = ctx.r11.u64 | 9673;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5ED4;
	sub_82410060(ctx, base);
	// lis r11,28475
	ctx.r11.s64 = 1866137600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,28941
	ctx.r11.u64 = ctx.r11.u64 | 28941;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A5EEC;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A5F08"))) PPC_WEAK_FUNC(sub_825A5F08);
PPC_FUNC_IMPL(__imp__sub_825A5F08) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A5F20;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,24448
	ctx.r8.s64 = ctx.r11.s64 + 24448;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a5f60
	if (!ctx.cr6.gt) goto loc_825A5F60;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A5F44:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a5f68
	if (ctx.cr6.eq) goto loc_825A5F68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a5f44
	if (ctx.cr6.lt) goto loc_825A5F44;
loc_825A5F60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A5F68;
	sub_82410060(ctx, base);
loc_825A5F68:
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

__attribute__((alias("__imp__sub_825A5F80"))) PPC_WEAK_FUNC(sub_825A5F80);
PPC_FUNC_IMPL(__imp__sub_825A5F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A5F88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A5F98;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,1851
	ctx.r11.s64 = 121307136;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r29,r11,14222
	ctx.r29.u64 = ctx.r11.u64 | 14222;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a5fc4
	if (!ctx.cr6.eq) goto loc_825A5FC4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825a4d50
	ctx.lr = 0x825A5FC0;
	sub_825A4D50(ctx, base);
	// b 0x825a5fc8
	goto loc_825A5FC8;
loc_825A5FC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825A5FC8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a5ff4
	if (ctx.cr6.eq) goto loc_825A5FF4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,1608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1608, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,1612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1612, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1604, ctx.r10.u32);
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1600, temp.u32);
	// b 0x825a6014
	goto loc_825A6014;
loc_825A5FF4:
	// lwz r11,6436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x825a6010
	if (!ctx.cr6.eq) goto loc_825A6010;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825a6014
	if (ctx.cr6.eq) goto loc_825A6014;
loc_825A6010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A6014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6020"))) PPC_WEAK_FUNC(sub_825A6020);
PPC_FUNC_IMPL(__imp__sub_825A6020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825A6028;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A6038;
	sub_8259C668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,6364(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a6060
	if (ctx.cr6.eq) goto loc_825A6060;
	// lis r27,-24627
	ctx.r27.s64 = -1613955072;
	// ori r27,r27,46822
	ctx.r27.u64 = ctx.r27.u64 | 46822;
	// b 0x825a61a0
	goto loc_825A61A0;
loc_825A6060:
	// lwz r11,1604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a614c
	if (ctx.cr6.eq) goto loc_825A614C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
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
	// lfs f2,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x824d7b70
	ctx.lr = 0x825A60D0;
	sub_824D7B70(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825a61a0
	if (ctx.cr0.eq) goto loc_825A61A0;
	// lwz r3,1492(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1492);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r28,620
	ctx.r5.s64 = ctx.r28.s64 + 620;
	// addi r4,r26,620
	ctx.r4.s64 = ctx.r26.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A60FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a613c
	if (!ctx.cr0.eq) goto loc_825A613C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r27,r10,53358
	ctx.r27.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a61a0
	goto loc_825A61A0;
loc_825A613C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1604, ctx.r30.u32);
	// stw r11,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r11.u32);
	// b 0x825a61a0
	goto loc_825A61A0;
loc_825A614C:
	// lwz r11,1608(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a6170
	if (ctx.cr6.eq) goto loc_825A6170;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r30.u32);
	// lis r27,9713
	ctx.r27.s64 = 636551168;
	// stw r11,1612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1612, ctx.r11.u32);
	// ori r27,r27,60464
	ctx.r27.u64 = ctx.r27.u64 | 60464;
	// b 0x825a61a0
	goto loc_825A61A0;
loc_825A6170:
	// lwz r11,1612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a6194
	if (ctx.cr6.eq) goto loc_825A6194;
	// lis r27,-20614
	ctx.r27.s64 = -1350959104;
	// lfs f0,1600(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1612, ctx.r30.u32);
	// stfs f0,6432(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 6432, temp.u32);
	// ori r27,r27,9673
	ctx.r27.u64 = ctx.r27.u64 | 9673;
	// b 0x825a61a0
	goto loc_825A61A0;
loc_825A6194:
	// lis r27,28475
	ctx.r27.s64 = 1866137600;
	// stw r30,6436(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6436, ctx.r30.u32);
	// ori r27,r27,28941
	ctx.r27.u64 = ctx.r27.u64 | 28941;
loc_825A61A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A61B0"))) PPC_WEAK_FUNC(sub_825A61B0);
PPC_FUNC_IMPL(__imp__sub_825A61B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A61CC;
	sub_825A4BF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,-29432
	ctx.r11.s64 = ctx.r11.s64 + -29432;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-28336
	ctx.r10.s64 = ctx.r10.s64 + -28336;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A620C;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A6224;
	sub_82410060(ctx, base);
	// lis r11,26380
	ctx.r11.s64 = 1728839680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,38854
	ctx.r11.u64 = ctx.r11.u64 | 38854;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A623C;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A6258"))) PPC_WEAK_FUNC(sub_825A6258);
PPC_FUNC_IMPL(__imp__sub_825A6258) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A6270;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,25296
	ctx.r8.s64 = ctx.r11.s64 + 25296;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a62b0
	if (!ctx.cr6.gt) goto loc_825A62B0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A6294:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a62b8
	if (ctx.cr6.eq) goto loc_825A62B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a6294
	if (ctx.cr6.lt) goto loc_825A6294;
loc_825A62B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A62B8;
	sub_82410060(ctx, base);
loc_825A62B8:
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

__attribute__((alias("__imp__sub_825A62D0"))) PPC_WEAK_FUNC(sub_825A62D0);
PPC_FUNC_IMPL(__imp__sub_825A62D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A62F0;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a6314
	if (!ctx.cr6.eq) goto loc_825A6314;
	// lis r4,-24129
	ctx.r4.s64 = -1581318144;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r4,r4,10531
	ctx.r4.u64 = ctx.r4.u64 | 10531;
	// bl 0x825a4d50
	ctx.lr = 0x825A6310;
	sub_825A4D50(ctx, base);
	// b 0x825a6318
	goto loc_825A6318;
loc_825A6314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A6318:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a6330
	if (ctx.cr6.eq) goto loc_825A6330;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r11.u32);
	// b 0x825a6348
	goto loc_825A6348;
loc_825A6330:
	// lis r11,-24129
	ctx.r11.s64 = -1581318144;
	// lwz r10,6436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// ori r11,r11,10531
	ctx.r11.u64 = ctx.r11.u64 | 10531;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825A6348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6360"))) PPC_WEAK_FUNC(sub_825A6360);
PPC_FUNC_IMPL(__imp__sub_825A6360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A6368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A6378;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a639c
	if (ctx.cr6.eq) goto loc_825A639C;
	// lis r29,-24627
	ctx.r29.s64 = -1613955072;
	// ori r29,r29,46822
	ctx.r29.u64 = ctx.r29.u64 | 46822;
	// b 0x825a6420
	goto loc_825A6420;
loc_825A639C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A63B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a63f4
	if (!ctx.cr0.eq) goto loc_825A63F4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r29,r10,53358
	ctx.r29.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A63F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a6420
	goto loc_825A6420;
loc_825A63F4:
	// lwz r11,1600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a6420
	if (!ctx.cr6.eq) goto loc_825A6420;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r29,26380
	ctx.r29.s64 = 1728839680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r29,38854
	ctx.r29.u64 = ctx.r29.u64 | 38854;
	// stw r11,6424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6424, ctx.r11.u32);
	// stw r10,1600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1600, ctx.r10.u32);
	// stw r9,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r9.u32);
loc_825A6420:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6430"))) PPC_WEAK_FUNC(sub_825A6430);
PPC_FUNC_IMPL(__imp__sub_825A6430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A644C;
	sub_825A4BF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,-24627
	ctx.r8.s64 = -1613955072;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-27184
	ctx.r10.s64 = ctx.r10.s64 + -27184;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,46822
	ctx.r11.u64 = ctx.r8.u64 | 46822;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825A648C;
	sub_82410060(ctx, base);
	// lis r11,28114
	ctx.r11.s64 = 1842479104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,50040
	ctx.r11.u64 = ctx.r11.u64 | 50040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A64A4;
	sub_82410060(ctx, base);
	// lis r11,-23801
	ctx.r11.s64 = -1559822336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27468
	ctx.r11.u64 = ctx.r11.u64 | 27468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A64BC;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A64D8"))) PPC_WEAK_FUNC(sub_825A64D8);
PPC_FUNC_IMPL(__imp__sub_825A64D8) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A64F0;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,25936
	ctx.r8.s64 = ctx.r11.s64 + 25936;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a6530
	if (!ctx.cr6.gt) goto loc_825A6530;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A6514:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a6538
	if (ctx.cr6.eq) goto loc_825A6538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a6514
	if (ctx.cr6.lt) goto loc_825A6514;
loc_825A6530:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A6538;
	sub_82410060(ctx, base);
loc_825A6538:
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

__attribute__((alias("__imp__sub_825A6550"))) PPC_WEAK_FUNC(sub_825A6550);
PPC_FUNC_IMPL(__imp__sub_825A6550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82332868
	ctx.lr = 0x825A6570;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a6594
	if (!ctx.cr6.eq) goto loc_825A6594;
	// lis r4,-29332
	ctx.r4.s64 = -1922301952;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r4,r4,13395
	ctx.r4.u64 = ctx.r4.u64 | 13395;
	// bl 0x825a4d50
	ctx.lr = 0x825A6590;
	sub_825A4D50(ctx, base);
	// b 0x825a6598
	goto loc_825A6598;
loc_825A6594:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A6598:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825a65b0
	if (ctx.cr6.eq) goto loc_825A65B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r11.u32);
	// b 0x825a65c8
	goto loc_825A65C8;
loc_825A65B0:
	// lis r11,-29332
	ctx.r11.s64 = -1922301952;
	// lwz r10,6436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// ori r11,r11,13395
	ctx.r11.u64 = ctx.r11.u64 | 13395;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_825A65C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A65E0"))) PPC_WEAK_FUNC(sub_825A65E0);
PPC_FUNC_IMPL(__imp__sub_825A65E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A65E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A65F8;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a661c
	if (ctx.cr6.eq) goto loc_825A661C;
	// lis r29,-24627
	ctx.r29.s64 = -1613955072;
	// ori r29,r29,46822
	ctx.r29.u64 = ctx.r29.u64 | 46822;
	// b 0x825a66a0
	goto loc_825A66A0;
loc_825A661C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a6674
	if (!ctx.cr0.eq) goto loc_825A6674;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r29,r10,53358
	ctx.r29.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a66a0
	goto loc_825A66A0;
loc_825A6674:
	// lwz r11,1600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a66a0
	if (!ctx.cr6.eq) goto loc_825A66A0;
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r29,-23801
	ctx.r29.s64 = -1559822336;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r29,27468
	ctx.r29.u64 = ctx.r29.u64 | 27468;
	// stw r11,6428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6428, ctx.r11.u32);
	// stw r10,1600(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1600, ctx.r10.u32);
	// stw r9,6436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6436, ctx.r9.u32);
loc_825A66A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A66B0"))) PPC_WEAK_FUNC(sub_825A66B0);
PPC_FUNC_IMPL(__imp__sub_825A66B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a4bf0
	ctx.lr = 0x825A66CC;
	sub_825A4BF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r8,28114
	ctx.r8.s64 = 1842479104;
	// addi r11,r11,-27128
	ctx.r11.s64 = ctx.r11.s64 + -27128;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-26032
	ctx.r10.s64 = ctx.r10.s64 + -26032;
	// addi r9,r9,31468
	ctx.r9.s64 = ctx.r9.s64 + 31468;
	// ori r11,r8,50040
	ctx.r11.u64 = ctx.r8.u64 | 50040;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// addi r31,r30,1492
	ctx.r31.s64 = ctx.r30.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x825A670C;
	sub_82410060(ctx, base);
	// lis r11,-24627
	ctx.r11.s64 = -1613955072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,46822
	ctx.r11.u64 = ctx.r11.u64 | 46822;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A6724;
	sub_82410060(ctx, base);
	// lis r11,-11145
	ctx.r11.s64 = -730398720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,22757
	ctx.r11.u64 = ctx.r11.u64 | 22757;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A673C;
	sub_82410060(ctx, base);
	// lis r11,12106
	ctx.r11.s64 = 793378816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,10116
	ctx.r11.u64 = ctx.r11.u64 | 10116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A6754;
	sub_82410060(ctx, base);
	// lis r11,-116
	ctx.r11.s64 = -7602176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,33505
	ctx.r11.u64 = ctx.r11.u64 | 33505;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A676C;
	sub_82410060(ctx, base);
	// lis r11,-8097
	ctx.r11.s64 = -530644992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,56097
	ctx.r11.u64 = ctx.r11.u64 | 56097;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A6784;
	sub_82410060(ctx, base);
	// lis r11,-32502
	ctx.r11.s64 = -2130051072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,59446
	ctx.r11.u64 = ctx.r11.u64 | 59446;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A679C;
	sub_82410060(ctx, base);
	// lis r11,9630
	ctx.r11.s64 = 631111680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,15558
	ctx.r11.u64 = ctx.r11.u64 | 15558;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A67B4;
	sub_82410060(ctx, base);
	// lis r11,11184
	ctx.r11.s64 = 732954624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,55585
	ctx.r11.u64 = ctx.r11.u64 | 55585;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A67CC;
	sub_82410060(ctx, base);
	// lis r11,-6766
	ctx.r11.s64 = -443416576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,44498
	ctx.r11.u64 = ctx.r11.u64 | 44498;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x825A67E4;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_825A6800"))) PPC_WEAK_FUNC(sub_825A6800);
PPC_FUNC_IMPL(__imp__sub_825A6800) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A6818;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,26744
	ctx.r8.s64 = ctx.r11.s64 + 26744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a6858
	if (!ctx.cr6.gt) goto loc_825A6858;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A683C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a6860
	if (ctx.cr6.eq) goto loc_825A6860;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a683c
	if (ctx.cr6.lt) goto loc_825A683C;
loc_825A6858:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A6860;
	sub_82410060(ctx, base);
loc_825A6860:
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

__attribute__((alias("__imp__sub_825A6878"))) PPC_WEAK_FUNC(sub_825A6878);
PPC_FUNC_IMPL(__imp__sub_825A6878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// bl 0x82332868
	ctx.lr = 0x825A6890;
	sub_82332868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825a68b4
	if (!ctx.cr6.eq) goto loc_825A68B4;
	// lis r4,-22117
	ctx.r4.s64 = -1449459712;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r4,r4,18114
	ctx.r4.u64 = ctx.r4.u64 | 18114;
	// bl 0x825a4d50
	ctx.lr = 0x825A68B0;
	sub_825A4D50(ctx, base);
	// b 0x825a68b8
	goto loc_825A68B8;
loc_825A68B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A68B8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825a68d4
	if (!ctx.cr6.eq) goto loc_825A68D4;
	// lis r11,-22117
	ctx.r11.s64 = -1449459712;
	// lwz r10,6436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6436);
	// ori r11,r11,18114
	ctx.r11.u64 = ctx.r11.u64 | 18114;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825a68d8
	if (!ctx.cr6.eq) goto loc_825A68D8;
loc_825A68D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825A68D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A68F0"))) PPC_WEAK_FUNC(sub_825A68F0);
PPC_FUNC_IMPL(__imp__sub_825A68F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825A68F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A6908;
	sub_8259C668(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,6364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a692c
	if (ctx.cr6.eq) goto loc_825A692C;
	// lis r29,-24627
	ctx.r29.s64 = -1613955072;
	// ori r29,r29,46822
	ctx.r29.u64 = ctx.r29.u64 | 46822;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A692C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825a6984
	if (!ctx.cr0.eq) goto loc_825A6984;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// lwz r4,4080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r29,r10,53358
	ctx.r29.u64 = ctx.r10.u64 | 53358;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,1368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A6984:
	// lwz r11,6440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6440);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x825a6a7c
	if (ctx.cr6.gt) goto loc_825A6A7C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30848
	ctx.r12.s64 = ctx.r12.s64 + -30848;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32166
	ctx.r12.s64 = -2108030976;
	// addi r12,r12,27068
	ctx.r12.s64 = ctx.r12.s64 + 27068;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_825A69BC;
	case 1:
		goto loc_825A69C8;
	case 2:
		goto loc_825A69D4;
	case 3:
		goto loc_825A69F4;
	case 4:
		goto loc_825A6A00;
	case 5:
		goto loc_825A6A20;
	case 6:
		goto loc_825A6A40;
	case 7:
		goto loc_825A6A60;
	default:
		__builtin_unreachable();
	}
loc_825A69BC:
	// lis r29,-11145
	ctx.r29.s64 = -730398720;
	// ori r29,r29,22757
	ctx.r29.u64 = ctx.r29.u64 | 22757;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A69C8:
	// lis r29,12106
	ctx.r29.s64 = 793378816;
	// ori r29,r29,10116
	ctx.r29.u64 = ctx.r29.u64 | 10116;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A69D4:
	// li r4,356
	ctx.r4.s64 = 356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A69E0;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a6a7c
	if (ctx.cr0.eq) goto loc_825A6A7C;
	// lis r29,-116
	ctx.r29.s64 = -7602176;
	// ori r29,r29,33505
	ctx.r29.u64 = ctx.r29.u64 | 33505;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A69F4:
	// lis r29,-8097
	ctx.r29.s64 = -530644992;
	// ori r29,r29,56097
	ctx.r29.u64 = ctx.r29.u64 | 56097;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A6A00:
	// li r4,348
	ctx.r4.s64 = 348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A6A0C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a6a7c
	if (ctx.cr0.eq) goto loc_825A6A7C;
	// lis r29,-32502
	ctx.r29.s64 = -2130051072;
	// ori r29,r29,59446
	ctx.r29.u64 = ctx.r29.u64 | 59446;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A6A20:
	// li r4,354
	ctx.r4.s64 = 354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A6A2C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a6a7c
	if (ctx.cr0.eq) goto loc_825A6A7C;
	// lis r29,9630
	ctx.r29.s64 = 631111680;
	// ori r29,r29,15558
	ctx.r29.u64 = ctx.r29.u64 | 15558;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A6A40:
	// li r4,346
	ctx.r4.s64 = 346;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A6A4C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a6a7c
	if (ctx.cr0.eq) goto loc_825A6A7C;
	// lis r29,11184
	ctx.r29.s64 = 732954624;
	// ori r29,r29,55585
	ctx.r29.u64 = ctx.r29.u64 | 55585;
	// b 0x825a6a7c
	goto loc_825A6A7C;
loc_825A6A60:
	// li r4,332
	ctx.r4.s64 = 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259f300
	ctx.lr = 0x825A6A6C;
	sub_8259F300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825a6a7c
	if (ctx.cr0.eq) goto loc_825A6A7C;
	// lis r29,-6766
	ctx.r29.s64 = -443416576;
	// ori r29,r29,44498
	ctx.r29.u64 = ctx.r29.u64 | 44498;
loc_825A6A7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6A88"))) PPC_WEAK_FUNC(sub_825A6A88);
PPC_FUNC_IMPL(__imp__sub_825A6A88) {
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
	// bl 0x825a4c88
	ctx.lr = 0x825A6AA0;
	sub_825A4C88(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,27392
	ctx.r8.s64 = ctx.r11.s64 + 27392;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825a6ae0
	if (!ctx.cr6.gt) goto loc_825A6AE0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825A6AC4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825a6ae8
	if (ctx.cr6.eq) goto loc_825A6AE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825a6ac4
	if (ctx.cr6.lt) goto loc_825A6AC4;
loc_825A6AE0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825A6AE8;
	sub_82410060(ctx, base);
loc_825A6AE8:
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

__attribute__((alias("__imp__sub_825A6B00"))) PPC_WEAK_FUNC(sub_825A6B00);
PPC_FUNC_IMPL(__imp__sub_825A6B00) {
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
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// bl 0x82332868
	ctx.lr = 0x825A6B14;
	sub_82332868(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a6b40
	if (ctx.cr0.eq) goto loc_825A6B40;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6380(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825a6b40
	if (ctx.cr6.gt) goto loc_825A6B40;
	// lwz r11,6364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6364);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825a6b44
	if (ctx.cr6.eq) goto loc_825A6B44;
loc_825A6B40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A6B44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6B58"))) PPC_WEAK_FUNC(sub_825A6B58);
PPC_FUNC_IMPL(__imp__sub_825A6B58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8259c668
	ctx.lr = 0x825A6B6C;
	sub_8259C668(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,6364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6364);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825a6bd4
	if (!ctx.cr6.eq) goto loc_825A6BD4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,6436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6436, ctx.r3.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,6440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6440, ctx.r8.u32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r7,6456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6456, ctx.r7.u32);
	// lis r3,-4897
	ctx.r3.s64 = -320929792;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r3,49164
	ctx.r3.u64 = ctx.r3.u64 | 49164;
	// stfs f0,6464(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6464, temp.u32);
	// stw r10,6452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6452, ctx.r10.u32);
	// stw r7,6448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6448, ctx.r7.u32);
	// stw r8,6444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6444, ctx.r8.u32);
loc_825A6BD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6BE8"))) PPC_WEAK_FUNC(sub_825A6BE8);
PPC_FUNC_IMPL(__imp__sub_825A6BE8) {
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
	ctx.lr = 0x825A6BFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a6c0c
	if (ctx.cr0.eq) goto loc_825A6C0C;
	// bl 0x825a4bf0
	ctx.lr = 0x825A6C08;
	sub_825A4BF0(ctx, base);
	// b 0x825a6c10
	goto loc_825A6C10;
loc_825A6C0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A6C10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6C20"))) PPC_WEAK_FUNC(sub_825A6C20);
PPC_FUNC_IMPL(__imp__sub_825A6C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825a6c60
	if (!ctx.cr0.eq) goto loc_825A6C60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25460, ctx.r11.u32);
	// addi r3,r9,29124
	ctx.r3.s64 = ctx.r9.s64 + 29124;
	// bl 0x82816528
	ctx.lr = 0x825A6C58;
	sub_82816528(ctx, base);
	// stw r3,25456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25456, ctx.r3.u32);
	// b 0x825a6c64
	goto loc_825A6C64;
loc_825A6C60:
	// lwz r3,25456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25456);
loc_825A6C64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6C78"))) PPC_WEAK_FUNC(sub_825A6C78);
PPC_FUNC_IMPL(__imp__sub_825A6C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a6cc8
	ctx.lr = 0x825A6C98;
	sub_825A6CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A6CAC;
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

__attribute__((alias("__imp__sub_825A6CC8"))) PPC_WEAK_FUNC(sub_825A6CC8);
PPC_FUNC_IMPL(__imp__sub_825A6CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,25464
	ctx.r31.s64 = ctx.r11.s64 + 25464;
	// lwz r11,25468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825a6d10
	if (!ctx.cr0.eq) goto loc_825A6D10;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30300
	ctx.r9.s64 = ctx.r9.s64 + 30300;
	// stw r11,25468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25468, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22368
	ctx.r3.s64 = ctx.r11.s64 + 22368;
	// bl 0x82a4c758
	ctx.lr = 0x825A6D10;
	sub_82A4C758(ctx, base);
loc_825A6D10:
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

__attribute__((alias("__imp__sub_825A6D28"))) PPC_WEAK_FUNC(sub_825A6D28);
PPC_FUNC_IMPL(__imp__sub_825A6D28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4a38
	sub_825A4A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D30"))) PPC_WEAK_FUNC(sub_825A6D30);
PPC_FUNC_IMPL(__imp__sub_825A6D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a3fe0
	sub_825A3FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D38"))) PPC_WEAK_FUNC(sub_825A6D38);
PPC_FUNC_IMPL(__imp__sub_825A6D38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a42a8
	sub_825A42A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D40"))) PPC_WEAK_FUNC(sub_825A6D40);
PPC_FUNC_IMPL(__imp__sub_825A6D40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a48e0
	sub_825A48E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D48"))) PPC_WEAK_FUNC(sub_825A6D48);
PPC_FUNC_IMPL(__imp__sub_825A6D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4140
	sub_825A4140(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D50"))) PPC_WEAK_FUNC(sub_825A6D50);
PPC_FUNC_IMPL(__imp__sub_825A6D50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4b90
	sub_825A4B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D58"))) PPC_WEAK_FUNC(sub_825A6D58);
PPC_FUNC_IMPL(__imp__sub_825A6D58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4490
	sub_825A4490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D60"))) PPC_WEAK_FUNC(sub_825A6D60);
PPC_FUNC_IMPL(__imp__sub_825A6D60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4618
	sub_825A4618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D68"))) PPC_WEAK_FUNC(sub_825A6D68);
PPC_FUNC_IMPL(__imp__sub_825A6D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825a4490
	sub_825A4490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D70"))) PPC_WEAK_FUNC(sub_825A6D70);
PPC_FUNC_IMPL(__imp__sub_825A6D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4430
	sub_825A4430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D78"))) PPC_WEAK_FUNC(sub_825A6D78);
PPC_FUNC_IMPL(__imp__sub_825A6D78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a4778
	sub_825A4778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D80"))) PPC_WEAK_FUNC(sub_825A6D80);
PPC_FUNC_IMPL(__imp__sub_825A6D80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825a3e10
	sub_825A3E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6D88"))) PPC_WEAK_FUNC(sub_825A6D88);
PPC_FUNC_IMPL(__imp__sub_825A6D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-24828
	ctx.r3.s64 = ctx.r11.s64 + -24828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6D98"))) PPC_WEAK_FUNC(sub_825A6D98);
PPC_FUNC_IMPL(__imp__sub_825A6D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825a6de8
	ctx.lr = 0x825A6DB8;
	sub_825A6DE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825a6dcc
	if (ctx.cr6.eq) goto loc_825A6DCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x825A6DCC;
	sub_82333B08(ctx, base);
loc_825A6DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6DE8"))) PPC_WEAK_FUNC(sub_825A6DE8);
PPC_FUNC_IMPL(__imp__sub_825A6DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,25452
	ctx.r31.s64 = ctx.r11.s64 + 25452;
	// lwz r11,-19340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825a6e30
	if (!ctx.cr0.eq) goto loc_825A6E30;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24712
	ctx.r9.s64 = ctx.r9.s64 + -24712;
	// stw r11,-19340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19340, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,22392
	ctx.r3.s64 = ctx.r11.s64 + 22392;
	// bl 0x82a4c758
	ctx.lr = 0x825A6E30;
	sub_82A4C758(ctx, base);
loc_825A6E30:
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

