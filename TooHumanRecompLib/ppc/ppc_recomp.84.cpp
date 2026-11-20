#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82618DC0"))) PPC_WEAK_FUNC(sub_82618DC0);
PPC_FUNC_IMPL(__imp__sub_82618DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82618e00
	if (!ctx.cr0.eq) goto loc_82618E00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24972, ctx.r11.u32);
	// addi r3,r9,-22824
	ctx.r3.s64 = ctx.r9.s64 + -22824;
	// bl 0x82816528
	ctx.lr = 0x82618DF8;
	sub_82816528(ctx, base);
	// stw r3,24968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24968, ctx.r3.u32);
	// b 0x82618e04
	goto loc_82618E04;
loc_82618E00:
	// lwz r3,24968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24968);
loc_82618E04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618E18"))) PPC_WEAK_FUNC(sub_82618E18);
PPC_FUNC_IMPL(__imp__sub_82618E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82618bd8
	ctx.lr = 0x82618E38;
	sub_82618BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82618E4C;
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

__attribute__((alias("__imp__sub_82618E68"))) PPC_WEAK_FUNC(sub_82618E68);
PPC_FUNC_IMPL(__imp__sub_82618E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12632
	ctx.r31.s64 = ctx.r11.s64 + 12632;
	// lwz r11,12636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82618eb0
	if (!ctx.cr0.eq) goto loc_82618EB0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21496
	ctx.r9.s64 = ctx.r9.s64 + -21496;
	// stw r11,12636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12636, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x82a4c758
	ctx.lr = 0x82618EB0;
	sub_82A4C758(ctx, base);
loc_82618EB0:
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

__attribute__((alias("__imp__sub_82618EC8"))) PPC_WEAK_FUNC(sub_82618EC8);
PPC_FUNC_IMPL(__imp__sub_82618EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82618EE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82618f04
	if (ctx.cr0.eq) goto loc_82618F04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c008
	ctx.lr = 0x82618EF0;
	sub_8248C008(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21568
	ctx.r11.s64 = ctx.r11.s64 + -21568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82618f08
	goto loc_82618F08;
loc_82618F04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82618F08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618F20"))) PPC_WEAK_FUNC(sub_82618F20);
PPC_FUNC_IMPL(__imp__sub_82618F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22876
	ctx.r3.s64 = ctx.r11.s64 + -22876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618F30"))) PPC_WEAK_FUNC(sub_82618F30);
PPC_FUNC_IMPL(__imp__sub_82618F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82618e68
	ctx.lr = 0x82618F50;
	sub_82618E68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82618f64
	if (ctx.cr6.eq) goto loc_82618F64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c1c0
	ctx.lr = 0x82618F64;
	sub_8248C1C0(ctx, base);
loc_82618F64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618F80"))) PPC_WEAK_FUNC(sub_82618F80);
PPC_FUNC_IMPL(__imp__sub_82618F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82618fb8
	if (ctx.cr6.eq) goto loc_82618FB8;
	// bl 0x82618e68
	ctx.lr = 0x82618FA8;
	sub_82618E68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82618fb8
	if (!ctx.cr6.eq) goto loc_82618FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82618fc4
	goto loc_82618FC4;
loc_82618FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c220
	ctx.lr = 0x82618FC4;
	sub_8248C220(ctx, base);
loc_82618FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618FE0"))) PPC_WEAK_FUNC(sub_82618FE0);
PPC_FUNC_IMPL(__imp__sub_82618FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82618e68
	sub_82618E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82618FE8"))) PPC_WEAK_FUNC(sub_82618FE8);
PPC_FUNC_IMPL(__imp__sub_82618FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619008;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619030
	if (ctx.cr0.eq) goto loc_82619030;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c2c8
	ctx.lr = 0x8261901C;
	sub_8248C2C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21568
	ctx.r11.s64 = ctx.r11.s64 + -21568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82619034
	goto loc_82619034;
loc_82619030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619034:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619050"))) PPC_WEAK_FUNC(sub_82619050);
PPC_FUNC_IMPL(__imp__sub_82619050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82619090
	if (!ctx.cr0.eq) goto loc_82619090;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24964, ctx.r11.u32);
	// addi r3,r9,-22876
	ctx.r3.s64 = ctx.r9.s64 + -22876;
	// bl 0x82816528
	ctx.lr = 0x82619088;
	sub_82816528(ctx, base);
	// stw r3,24960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24960, ctx.r3.u32);
	// b 0x82619094
	goto loc_82619094;
loc_82619090:
	// lwz r3,24960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24960);
loc_82619094:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826190A8"))) PPC_WEAK_FUNC(sub_826190A8);
PPC_FUNC_IMPL(__imp__sub_826190A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82618e68
	ctx.lr = 0x826190C8;
	sub_82618E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826190DC;
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

__attribute__((alias("__imp__sub_826190F8"))) PPC_WEAK_FUNC(sub_826190F8);
PPC_FUNC_IMPL(__imp__sub_826190F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12624
	ctx.r31.s64 = ctx.r11.s64 + 12624;
	// lwz r11,12628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82619140
	if (!ctx.cr0.eq) goto loc_82619140;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21208
	ctx.r9.s64 = ctx.r9.s64 + -21208;
	// stw r11,12628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12628, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24696
	ctx.r3.s64 = ctx.r11.s64 + 24696;
	// bl 0x82a4c758
	ctx.lr = 0x82619140;
	sub_82A4C758(ctx, base);
loc_82619140:
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

__attribute__((alias("__imp__sub_82619158"))) PPC_WEAK_FUNC(sub_82619158);
PPC_FUNC_IMPL(__imp__sub_82619158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619170;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619194
	if (ctx.cr0.eq) goto loc_82619194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c008
	ctx.lr = 0x82619180;
	sub_8248C008(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21280
	ctx.r11.s64 = ctx.r11.s64 + -21280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82619198
	goto loc_82619198;
loc_82619194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826191B0"))) PPC_WEAK_FUNC(sub_826191B0);
PPC_FUNC_IMPL(__imp__sub_826191B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22796
	ctx.r3.s64 = ctx.r11.s64 + -22796;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826191C0"))) PPC_WEAK_FUNC(sub_826191C0);
PPC_FUNC_IMPL(__imp__sub_826191C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826190f8
	ctx.lr = 0x826191E0;
	sub_826190F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826191f4
	if (ctx.cr6.eq) goto loc_826191F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c1c0
	ctx.lr = 0x826191F4;
	sub_8248C1C0(ctx, base);
loc_826191F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619210"))) PPC_WEAK_FUNC(sub_82619210);
PPC_FUNC_IMPL(__imp__sub_82619210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619248
	if (ctx.cr6.eq) goto loc_82619248;
	// bl 0x826190f8
	ctx.lr = 0x82619238;
	sub_826190F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619248
	if (!ctx.cr6.eq) goto loc_82619248;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619254
	goto loc_82619254;
loc_82619248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c220
	ctx.lr = 0x82619254;
	sub_8248C220(ctx, base);
loc_82619254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619270"))) PPC_WEAK_FUNC(sub_82619270);
PPC_FUNC_IMPL(__imp__sub_82619270) {
	PPC_FUNC_PROLOGUE();
	// b 0x826190f8
	sub_826190F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619278"))) PPC_WEAK_FUNC(sub_82619278);
PPC_FUNC_IMPL(__imp__sub_82619278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619298;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826192c0
	if (ctx.cr0.eq) goto loc_826192C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c2c8
	ctx.lr = 0x826192AC;
	sub_8248C2C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21280
	ctx.r11.s64 = ctx.r11.s64 + -21280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826192c4
	goto loc_826192C4;
loc_826192C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826192C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826192E0"))) PPC_WEAK_FUNC(sub_826192E0);
PPC_FUNC_IMPL(__imp__sub_826192E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82619320
	if (!ctx.cr0.eq) goto loc_82619320;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24956, ctx.r11.u32);
	// addi r3,r9,-22796
	ctx.r3.s64 = ctx.r9.s64 + -22796;
	// bl 0x82816528
	ctx.lr = 0x82619318;
	sub_82816528(ctx, base);
	// stw r3,24952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24952, ctx.r3.u32);
	// b 0x82619324
	goto loc_82619324;
loc_82619320:
	// lwz r3,24952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24952);
loc_82619324:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619338"))) PPC_WEAK_FUNC(sub_82619338);
PPC_FUNC_IMPL(__imp__sub_82619338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826190f8
	ctx.lr = 0x82619358;
	sub_826190F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261936C;
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

__attribute__((alias("__imp__sub_82619388"))) PPC_WEAK_FUNC(sub_82619388);
PPC_FUNC_IMPL(__imp__sub_82619388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12616
	ctx.r31.s64 = ctx.r11.s64 + 12616;
	// lwz r11,12620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826193d0
	if (!ctx.cr0.eq) goto loc_826193D0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21112
	ctx.r9.s64 = ctx.r9.s64 + -21112;
	// stw r11,12620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12620, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24720
	ctx.r3.s64 = ctx.r11.s64 + 24720;
	// bl 0x82a4c758
	ctx.lr = 0x826193D0;
	sub_82A4C758(ctx, base);
loc_826193D0:
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

__attribute__((alias("__imp__sub_826193E8"))) PPC_WEAK_FUNC(sub_826193E8);
PPC_FUNC_IMPL(__imp__sub_826193E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619400;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619424
	if (ctx.cr0.eq) goto loc_82619424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c008
	ctx.lr = 0x82619410;
	sub_8248C008(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82619428
	goto loc_82619428;
loc_82619424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619440"))) PPC_WEAK_FUNC(sub_82619440);
PPC_FUNC_IMPL(__imp__sub_82619440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22768
	ctx.r3.s64 = ctx.r11.s64 + -22768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619450"))) PPC_WEAK_FUNC(sub_82619450);
PPC_FUNC_IMPL(__imp__sub_82619450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82619388
	ctx.lr = 0x82619470;
	sub_82619388(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619484
	if (ctx.cr6.eq) goto loc_82619484;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c1c0
	ctx.lr = 0x82619484;
	sub_8248C1C0(ctx, base);
loc_82619484:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826194A0"))) PPC_WEAK_FUNC(sub_826194A0);
PPC_FUNC_IMPL(__imp__sub_826194A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826194d8
	if (ctx.cr6.eq) goto loc_826194D8;
	// bl 0x82619388
	ctx.lr = 0x826194C8;
	sub_82619388(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826194d8
	if (!ctx.cr6.eq) goto loc_826194D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826194e4
	goto loc_826194E4;
loc_826194D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c220
	ctx.lr = 0x826194E4;
	sub_8248C220(ctx, base);
loc_826194E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619500"))) PPC_WEAK_FUNC(sub_82619500);
PPC_FUNC_IMPL(__imp__sub_82619500) {
	PPC_FUNC_PROLOGUE();
	// b 0x82619388
	sub_82619388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619508"))) PPC_WEAK_FUNC(sub_82619508);
PPC_FUNC_IMPL(__imp__sub_82619508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619528;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619550
	if (ctx.cr0.eq) goto loc_82619550;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c2c8
	ctx.lr = 0x8261953C;
	sub_8248C2C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21184
	ctx.r11.s64 = ctx.r11.s64 + -21184;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82619554
	goto loc_82619554;
loc_82619550:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619570"))) PPC_WEAK_FUNC(sub_82619570);
PPC_FUNC_IMPL(__imp__sub_82619570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826195b0
	if (!ctx.cr0.eq) goto loc_826195B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24948, ctx.r11.u32);
	// addi r3,r9,-22768
	ctx.r3.s64 = ctx.r9.s64 + -22768;
	// bl 0x82816528
	ctx.lr = 0x826195A8;
	sub_82816528(ctx, base);
	// stw r3,24944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24944, ctx.r3.u32);
	// b 0x826195b4
	goto loc_826195B4;
loc_826195B0:
	// lwz r3,24944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24944);
loc_826195B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826195C8"))) PPC_WEAK_FUNC(sub_826195C8);
PPC_FUNC_IMPL(__imp__sub_826195C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82619388
	ctx.lr = 0x826195E8;
	sub_82619388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826195FC;
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

__attribute__((alias("__imp__sub_82619618"))) PPC_WEAK_FUNC(sub_82619618);
PPC_FUNC_IMPL(__imp__sub_82619618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12608
	ctx.r31.s64 = ctx.r11.s64 + 12608;
	// lwz r11,12612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82619660
	if (!ctx.cr0.eq) goto loc_82619660;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21400
	ctx.r9.s64 = ctx.r9.s64 + -21400;
	// stw r11,12612(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12612, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24744
	ctx.r3.s64 = ctx.r11.s64 + 24744;
	// bl 0x82a4c758
	ctx.lr = 0x82619660;
	sub_82A4C758(ctx, base);
loc_82619660:
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

__attribute__((alias("__imp__sub_82619678"))) PPC_WEAK_FUNC(sub_82619678);
PPC_FUNC_IMPL(__imp__sub_82619678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82619690;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826196b4
	if (ctx.cr0.eq) goto loc_826196B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c008
	ctx.lr = 0x826196A0;
	sub_8248C008(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21472
	ctx.r11.s64 = ctx.r11.s64 + -21472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826196b8
	goto loc_826196B8;
loc_826196B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826196B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826196D0"))) PPC_WEAK_FUNC(sub_826196D0);
PPC_FUNC_IMPL(__imp__sub_826196D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826196E0"))) PPC_WEAK_FUNC(sub_826196E0);
PPC_FUNC_IMPL(__imp__sub_826196E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82619618
	ctx.lr = 0x82619700;
	sub_82619618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619714
	if (ctx.cr6.eq) goto loc_82619714;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c1c0
	ctx.lr = 0x82619714;
	sub_8248C1C0(ctx, base);
loc_82619714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619730"))) PPC_WEAK_FUNC(sub_82619730);
PPC_FUNC_IMPL(__imp__sub_82619730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619768
	if (ctx.cr6.eq) goto loc_82619768;
	// bl 0x82619618
	ctx.lr = 0x82619758;
	sub_82619618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619768
	if (!ctx.cr6.eq) goto loc_82619768;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619774
	goto loc_82619774;
loc_82619768:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c220
	ctx.lr = 0x82619774;
	sub_8248C220(ctx, base);
loc_82619774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619790"))) PPC_WEAK_FUNC(sub_82619790);
PPC_FUNC_IMPL(__imp__sub_82619790) {
	PPC_FUNC_PROLOGUE();
	// b 0x82619618
	sub_82619618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619798"))) PPC_WEAK_FUNC(sub_82619798);
PPC_FUNC_IMPL(__imp__sub_82619798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x826197B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826197e0
	if (ctx.cr0.eq) goto loc_826197E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c2c8
	ctx.lr = 0x826197CC;
	sub_8248C2C8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21472
	ctx.r11.s64 = ctx.r11.s64 + -21472;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x826197e4
	goto loc_826197E4;
loc_826197E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826197E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619800"))) PPC_WEAK_FUNC(sub_82619800);
PPC_FUNC_IMPL(__imp__sub_82619800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82619840
	if (!ctx.cr0.eq) goto loc_82619840;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24940, ctx.r11.u32);
	// addi r3,r9,-22848
	ctx.r3.s64 = ctx.r9.s64 + -22848;
	// bl 0x82816528
	ctx.lr = 0x82619838;
	sub_82816528(ctx, base);
	// stw r3,24936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24936, ctx.r3.u32);
	// b 0x82619844
	goto loc_82619844;
loc_82619840:
	// lwz r3,24936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24936);
loc_82619844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619858"))) PPC_WEAK_FUNC(sub_82619858);
PPC_FUNC_IMPL(__imp__sub_82619858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82619618
	ctx.lr = 0x82619878;
	sub_82619618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261988C;
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

__attribute__((alias("__imp__sub_826198A8"))) PPC_WEAK_FUNC(sub_826198A8);
PPC_FUNC_IMPL(__imp__sub_826198A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13624
	ctx.r3.s64 = ctx.r11.s64 + 13624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826198B8"))) PPC_WEAK_FUNC(sub_826198B8);
PPC_FUNC_IMPL(__imp__sub_826198B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826198f0
	if (ctx.cr6.eq) goto loc_826198F0;
	// bl 0x823c8650
	ctx.lr = 0x826198E0;
	sub_823C8650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826198f0
	if (!ctx.cr6.eq) goto loc_826198F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826198fc
	goto loc_826198FC;
loc_826198F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x826198FC;
	sub_825D6C40(ctx, base);
loc_826198FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619918"))) PPC_WEAK_FUNC(sub_82619918);
PPC_FUNC_IMPL(__imp__sub_82619918) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8650
	sub_823C8650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619920"))) PPC_WEAK_FUNC(sub_82619920);
PPC_FUNC_IMPL(__imp__sub_82619920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x82619940;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619980
	if (ctx.cr0.eq) goto loc_82619980;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x82619954;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-19144
	ctx.r11.s64 = ctx.r11.s64 + -19144;
	// addi r10,r10,-16476
	ctx.r10.s64 = ctx.r10.s64 + -16476;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82619984
	goto loc_82619984;
loc_82619980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826199A0"))) PPC_WEAK_FUNC(sub_826199A0);
PPC_FUNC_IMPL(__imp__sub_826199A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8650
	ctx.lr = 0x826199C0;
	sub_823C8650(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826199d4
	if (ctx.cr6.eq) goto loc_826199D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x826199D4;
	sub_825D6CF0(ctx, base);
loc_826199D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826199F0"))) PPC_WEAK_FUNC(sub_826199F0);
PPC_FUNC_IMPL(__imp__sub_826199F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13672
	ctx.r3.s64 = ctx.r11.s64 + 13672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619A00"))) PPC_WEAK_FUNC(sub_82619A00);
PPC_FUNC_IMPL(__imp__sub_82619A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619a38
	if (ctx.cr6.eq) goto loc_82619A38;
	// bl 0x823c8810
	ctx.lr = 0x82619A28;
	sub_823C8810(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619a38
	if (!ctx.cr6.eq) goto loc_82619A38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619a44
	goto loc_82619A44;
loc_82619A38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x82619A44;
	sub_825D6C40(ctx, base);
loc_82619A44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619A60"))) PPC_WEAK_FUNC(sub_82619A60);
PPC_FUNC_IMPL(__imp__sub_82619A60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8810
	sub_823C8810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619A68"))) PPC_WEAK_FUNC(sub_82619A68);
PPC_FUNC_IMPL(__imp__sub_82619A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12784
	ctx.r3.s64 = 12784;
	// bl 0x82833108
	ctx.lr = 0x82619A88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619ad0
	if (ctx.cr0.eq) goto loc_82619AD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x82619A9C;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-16400
	ctx.r11.s64 = ctx.r11.s64 + -16400;
	// addi r10,r10,-13732
	ctx.r10.s64 = ctx.r10.s64 + -13732;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,12768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12768);
	// stw r11,12768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12768, ctx.r11.u32);
	// b 0x82619ad4
	goto loc_82619AD4;
loc_82619AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619AD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619AF0"))) PPC_WEAK_FUNC(sub_82619AF0);
PPC_FUNC_IMPL(__imp__sub_82619AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8810
	ctx.lr = 0x82619B10;
	sub_823C8810(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619b24
	if (ctx.cr6.eq) goto loc_82619B24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x82619B24;
	sub_825D6CF0(ctx, base);
loc_82619B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619B40"))) PPC_WEAK_FUNC(sub_82619B40);
PPC_FUNC_IMPL(__imp__sub_82619B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13648
	ctx.r3.s64 = ctx.r11.s64 + 13648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619B50"))) PPC_WEAK_FUNC(sub_82619B50);
PPC_FUNC_IMPL(__imp__sub_82619B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619b88
	if (ctx.cr6.eq) goto loc_82619B88;
	// bl 0x823c8990
	ctx.lr = 0x82619B78;
	sub_823C8990(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619b88
	if (!ctx.cr6.eq) goto loc_82619B88;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619b94
	goto loc_82619B94;
loc_82619B88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x82619B94;
	sub_825D6C40(ctx, base);
loc_82619B94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619BB0"))) PPC_WEAK_FUNC(sub_82619BB0);
PPC_FUNC_IMPL(__imp__sub_82619BB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8990
	sub_823C8990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619BB8"))) PPC_WEAK_FUNC(sub_82619BB8);
PPC_FUNC_IMPL(__imp__sub_82619BB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392e08
	sub_82392E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619BC0"))) PPC_WEAK_FUNC(sub_82619BC0);
PPC_FUNC_IMPL(__imp__sub_82619BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x82619BE0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619c20
	if (ctx.cr0.eq) goto loc_82619C20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x82619BF4;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-13680
	ctx.r11.s64 = ctx.r11.s64 + -13680;
	// addi r10,r10,-11012
	ctx.r10.s64 = ctx.r10.s64 + -11012;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82619c24
	goto loc_82619C24;
loc_82619C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619C40"))) PPC_WEAK_FUNC(sub_82619C40);
PPC_FUNC_IMPL(__imp__sub_82619C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8990
	ctx.lr = 0x82619C60;
	sub_823C8990(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619c74
	if (ctx.cr6.eq) goto loc_82619C74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x82619C74;
	sub_825D6CF0(ctx, base);
loc_82619C74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619C90"))) PPC_WEAK_FUNC(sub_82619C90);
PPC_FUNC_IMPL(__imp__sub_82619C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13720
	ctx.r3.s64 = ctx.r11.s64 + 13720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619CA0"))) PPC_WEAK_FUNC(sub_82619CA0);
PPC_FUNC_IMPL(__imp__sub_82619CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619cd8
	if (ctx.cr6.eq) goto loc_82619CD8;
	// bl 0x823c8ad0
	ctx.lr = 0x82619CC8;
	sub_823C8AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619cd8
	if (!ctx.cr6.eq) goto loc_82619CD8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619ce4
	goto loc_82619CE4;
loc_82619CD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x82619CE4;
	sub_825D6C40(ctx, base);
loc_82619CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619D00"))) PPC_WEAK_FUNC(sub_82619D00);
PPC_FUNC_IMPL(__imp__sub_82619D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8ad0
	sub_823C8AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619D08"))) PPC_WEAK_FUNC(sub_82619D08);
PPC_FUNC_IMPL(__imp__sub_82619D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x82619D28;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619d68
	if (ctx.cr0.eq) goto loc_82619D68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x82619D3C;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-10960
	ctx.r11.s64 = ctx.r11.s64 + -10960;
	// addi r10,r10,-8292
	ctx.r10.s64 = ctx.r10.s64 + -8292;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82619d6c
	goto loc_82619D6C;
loc_82619D68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619D6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619D88"))) PPC_WEAK_FUNC(sub_82619D88);
PPC_FUNC_IMPL(__imp__sub_82619D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8ad0
	ctx.lr = 0x82619DA8;
	sub_823C8AD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619dbc
	if (ctx.cr6.eq) goto loc_82619DBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x82619DBC;
	sub_825D6CF0(ctx, base);
loc_82619DBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619DD8"))) PPC_WEAK_FUNC(sub_82619DD8);
PPC_FUNC_IMPL(__imp__sub_82619DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619DE8"))) PPC_WEAK_FUNC(sub_82619DE8);
PPC_FUNC_IMPL(__imp__sub_82619DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619e20
	if (ctx.cr6.eq) goto loc_82619E20;
	// bl 0x823c8c50
	ctx.lr = 0x82619E10;
	sub_823C8C50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619e20
	if (!ctx.cr6.eq) goto loc_82619E20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619e2c
	goto loc_82619E2C;
loc_82619E20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x82619E2C;
	sub_825D6C40(ctx, base);
loc_82619E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619E48"))) PPC_WEAK_FUNC(sub_82619E48);
PPC_FUNC_IMPL(__imp__sub_82619E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8c50
	sub_823C8C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619E50"))) PPC_WEAK_FUNC(sub_82619E50);
PPC_FUNC_IMPL(__imp__sub_82619E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x82619E70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82619eb0
	if (ctx.cr0.eq) goto loc_82619EB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x82619E84;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-8240
	ctx.r11.s64 = ctx.r11.s64 + -8240;
	// addi r10,r10,-5572
	ctx.r10.s64 = ctx.r10.s64 + -5572;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82619eb4
	goto loc_82619EB4;
loc_82619EB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82619EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619ED0"))) PPC_WEAK_FUNC(sub_82619ED0);
PPC_FUNC_IMPL(__imp__sub_82619ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8c50
	ctx.lr = 0x82619EF0;
	sub_823C8C50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82619f04
	if (ctx.cr6.eq) goto loc_82619F04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x82619F04;
	sub_825D6CF0(ctx, base);
loc_82619F04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619F20"))) PPC_WEAK_FUNC(sub_82619F20);
PPC_FUNC_IMPL(__imp__sub_82619F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825e15b8
	ctx.lr = 0x82619F40;
	sub_825E15B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82619f50
	if (ctx.cr0.eq) goto loc_82619F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82619F50;
	sub_82332DB8(ctx, base);
loc_82619F50:
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

__attribute__((alias("__imp__sub_82619F70"))) PPC_WEAK_FUNC(sub_82619F70);
PPC_FUNC_IMPL(__imp__sub_82619F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13748
	ctx.r3.s64 = ctx.r11.s64 + 13748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619F80"))) PPC_WEAK_FUNC(sub_82619F80);
PPC_FUNC_IMPL(__imp__sub_82619F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82619fb8
	if (ctx.cr6.eq) goto loc_82619FB8;
	// bl 0x823c8dd0
	ctx.lr = 0x82619FA8;
	sub_823C8DD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82619fb8
	if (!ctx.cr6.eq) goto loc_82619FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82619fc4
	goto loc_82619FC4;
loc_82619FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x82619FC4;
	sub_825D6C40(ctx, base);
loc_82619FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619FE0"))) PPC_WEAK_FUNC(sub_82619FE0);
PPC_FUNC_IMPL(__imp__sub_82619FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8dd0
	sub_823C8DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82619FE8"))) PPC_WEAK_FUNC(sub_82619FE8);
PPC_FUNC_IMPL(__imp__sub_82619FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x8261A008;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8261a048
	if (ctx.cr0.eq) goto loc_8261A048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x8261A01C;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-5520
	ctx.r11.s64 = ctx.r11.s64 + -5520;
	// addi r10,r10,-2852
	ctx.r10.s64 = ctx.r10.s64 + -2852;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8261a04c
	goto loc_8261A04C;
loc_8261A048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A068"))) PPC_WEAK_FUNC(sub_8261A068);
PPC_FUNC_IMPL(__imp__sub_8261A068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8dd0
	ctx.lr = 0x8261A088;
	sub_823C8DD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8261a09c
	if (ctx.cr6.eq) goto loc_8261A09C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x8261A09C;
	sub_825D6CF0(ctx, base);
loc_8261A09C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A0B8"))) PPC_WEAK_FUNC(sub_8261A0B8);
PPC_FUNC_IMPL(__imp__sub_8261A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A0C8"))) PPC_WEAK_FUNC(sub_8261A0C8);
PPC_FUNC_IMPL(__imp__sub_8261A0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8261a100
	if (ctx.cr6.eq) goto loc_8261A100;
	// bl 0x823c8f50
	ctx.lr = 0x8261A0F0;
	sub_823C8F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8261a100
	if (!ctx.cr6.eq) goto loc_8261A100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a10c
	goto loc_8261A10C;
loc_8261A100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x8261A10C;
	sub_825D6C40(ctx, base);
loc_8261A10C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A128"))) PPC_WEAK_FUNC(sub_8261A128);
PPC_FUNC_IMPL(__imp__sub_8261A128) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c8f50
	sub_823C8F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A130"))) PPC_WEAK_FUNC(sub_8261A130);
PPC_FUNC_IMPL(__imp__sub_8261A130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x8261A150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8261a190
	if (ctx.cr0.eq) goto loc_8261A190;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x8261A164;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-2800
	ctx.r11.s64 = ctx.r11.s64 + -2800;
	// addi r10,r10,-132
	ctx.r10.s64 = ctx.r10.s64 + -132;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8261a194
	goto loc_8261A194;
loc_8261A190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A1B0"))) PPC_WEAK_FUNC(sub_8261A1B0);
PPC_FUNC_IMPL(__imp__sub_8261A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c8f50
	ctx.lr = 0x8261A1D0;
	sub_823C8F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8261a1e4
	if (ctx.cr6.eq) goto loc_8261A1E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x8261A1E4;
	sub_825D6CF0(ctx, base);
loc_8261A1E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A200"))) PPC_WEAK_FUNC(sub_8261A200);
PPC_FUNC_IMPL(__imp__sub_8261A200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A210"))) PPC_WEAK_FUNC(sub_8261A210);
PPC_FUNC_IMPL(__imp__sub_8261A210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8261a248
	if (ctx.cr6.eq) goto loc_8261A248;
	// bl 0x823c90d0
	ctx.lr = 0x8261A238;
	sub_823C90D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8261a248
	if (!ctx.cr6.eq) goto loc_8261A248;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a254
	goto loc_8261A254;
loc_8261A248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825d6c40
	ctx.lr = 0x8261A254;
	sub_825D6C40(ctx, base);
loc_8261A254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A270"))) PPC_WEAK_FUNC(sub_8261A270);
PPC_FUNC_IMPL(__imp__sub_8261A270) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c90d0
	sub_823C90D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A278"))) PPC_WEAK_FUNC(sub_8261A278);
PPC_FUNC_IMPL(__imp__sub_8261A278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,12768
	ctx.r3.s64 = 12768;
	// bl 0x82833108
	ctx.lr = 0x8261A298;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8261a2d8
	if (ctx.cr0.eq) goto loc_8261A2D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825d6f08
	ctx.lr = 0x8261A2AC;
	sub_825D6F08(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// addi r10,r10,2588
	ctx.r10.s64 = ctx.r10.s64 + 2588;
	// addi r9,r9,-16424
	ctx.r9.s64 = ctx.r9.s64 + -16424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8261a2dc
	goto loc_8261A2DC;
loc_8261A2D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A2DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A2F8"))) PPC_WEAK_FUNC(sub_8261A2F8);
PPC_FUNC_IMPL(__imp__sub_8261A2F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c90d0
	ctx.lr = 0x8261A318;
	sub_823C90D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8261a32c
	if (ctx.cr6.eq) goto loc_8261A32C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825d6cf0
	ctx.lr = 0x8261A32C;
	sub_825D6CF0(ctx, base);
loc_8261A32C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A348"))) PPC_WEAK_FUNC(sub_8261A348);
PPC_FUNC_IMPL(__imp__sub_8261A348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A350;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a460
	if (ctx.cr6.eq) goto loc_8261A460;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a460
	if (ctx.cr6.eq) goto loc_8261A460;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-19724
	ctx.r4.s64 = ctx.r10.s64 + -19724;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A394;
	sub_829E6978(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stfs f1,6888(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6888, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-19708
	ctx.r4.s64 = ctx.r11.s64 + -19708;
	// bl 0x82816c30
	ctx.lr = 0x8261A3B0;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8261A3BC;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x8261A3C0;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// addi r4,r11,-19648
	ctx.r4.s64 = ctx.r11.s64 + -19648;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A3D8;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f1,6932(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,-19632
	ctx.r4.s64 = ctx.r10.s64 + -19632;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8261A400;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x8261A40C;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x8261A414;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8261A420;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x8261A424;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// addi r29,r11,-19572
	ctx.r29.s64 = ctx.r11.s64 + -19572;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8261A438;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a458
	if (ctx.cr0.eq) goto loc_8261A458;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A454;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
loc_8261A458:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8261A460;
	sub_82333960(ctx, base);
loc_8261A460:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A470"))) PPC_WEAK_FUNC(sub_8261A470);
PPC_FUNC_IMPL(__imp__sub_8261A470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A478;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a534
	if (ctx.cr6.eq) goto loc_8261A534;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a534
	if (ctx.cr6.eq) goto loc_8261A534;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-19536
	ctx.r4.s64 = ctx.r10.s64 + -19536;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A4BC;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f1,7092(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7092, temp.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-19520
	ctx.r4.s64 = ctx.r10.s64 + -19520;
	// lfs f0,912(r11)
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
	ctx.lr = 0x8261A4E8;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x8261A4F4;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x8261A4F8;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// addi r30,r11,-19572
	ctx.r30.s64 = ctx.r11.s64 + -19572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8261A50C;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a52c
	if (ctx.cr0.eq) goto loc_8261A52C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A528;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
loc_8261A52C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8261A534;
	sub_82333960(ctx, base);
loc_8261A534:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A540"))) PPC_WEAK_FUNC(sub_8261A540);
PPC_FUNC_IMPL(__imp__sub_8261A540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A548;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a600
	if (ctx.cr6.eq) goto loc_8261A600;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a600
	if (ctx.cr6.eq) goto loc_8261A600;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-19396
	ctx.r4.s64 = ctx.r10.s64 + -19396;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A58C;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f1,6892(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6892, temp.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-19388
	ctx.r4.s64 = ctx.r10.s64 + -19388;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8261A5B4;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8261A5C0;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x8261A5C4;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// addi r30,r11,-19572
	ctx.r30.s64 = ctx.r11.s64 + -19572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8261A5D8;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a5f8
	if (ctx.cr0.eq) goto loc_8261A5F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A5F4;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
loc_8261A5F8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8261A600;
	sub_82333960(ctx, base);
loc_8261A600:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A610"))) PPC_WEAK_FUNC(sub_8261A610);
PPC_FUNC_IMPL(__imp__sub_8261A610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A618;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,6376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a670
	if (ctx.cr6.eq) goto loc_8261A670;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a670
	if (ctx.cr6.eq) goto loc_8261A670;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r31,r11,-19572
	ctx.r31.s64 = ctx.r11.s64 + -19572;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8261A64C;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a670
	if (ctx.cr0.eq) goto loc_8261A670;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,6376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6376);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x8261A66C;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8432, temp.u32);
loc_8261A670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A678"))) PPC_WEAK_FUNC(sub_8261A678);
PPC_FUNC_IMPL(__imp__sub_8261A678) {
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
	// bl 0x825db508
	ctx.lr = 0x8261A690;
	sub_825DB508(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// addi r9,r9,-10960
	ctx.r9.s64 = ctx.r9.s64 + -10960;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32225
	ctx.r6.s64 = -2111897600;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r10,r8,-8292
	ctx.r10.s64 = ctx.r8.s64 + -8292;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r7,-16424
	ctx.r8.s64 = ctx.r7.s64 + -16424;
	// addi r9,r6,-19332
	ctx.r9.s64 = ctx.r6.s64 + -19332;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r9,6376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6376, ctx.r9.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261a704
	if (ctx.cr6.eq) goto loc_8261A704;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,-19312
	ctx.r5.s64 = ctx.r11.s64 + -19312;
	// addi r4,r10,4420
	ctx.r4.s64 = ctx.r10.s64 + 4420;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261A704;
	sub_828C5740(ctx, base);
loc_8261A704:
	// li r4,260
	ctx.r4.s64 = 260;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e25c8
	ctx.lr = 0x8261A714;
	sub_825E25C8(ctx, base);
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

__attribute__((alias("__imp__sub_8261A730"))) PPC_WEAK_FUNC(sub_8261A730);
PPC_FUNC_IMPL(__imp__sub_8261A730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A738;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261a7f0
	if (ctx.cr6.eq) goto loc_8261A7F0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261a7f0
	if (ctx.cr6.eq) goto loc_8261A7F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-19288
	ctx.r4.s64 = ctx.r10.s64 + -19288;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A77C;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f1,7396(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7396, temp.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-19268
	ctx.r4.s64 = ctx.r10.s64 + -19268;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82816c30
	ctx.lr = 0x8261A7A4;
	sub_82816C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823339b8
	ctx.lr = 0x8261A7B0;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x8261A7B4;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// addi r30,r11,-19572
	ctx.r30.s64 = ctx.r11.s64 + -19572;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8261A7C8;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a7e8
	if (ctx.cr0.eq) goto loc_8261A7E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8261A7E4;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
loc_8261A7E8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8261A7F0;
	sub_82333960(ctx, base);
loc_8261A7F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A800"))) PPC_WEAK_FUNC(sub_8261A800);
PPC_FUNC_IMPL(__imp__sub_8261A800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261A808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-19572
	ctx.r30.s64 = ctx.r11.s64 + -19572;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// bl 0x829e6a48
	ctx.lr = 0x8261A828;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261a84c
	if (ctx.cr0.eq) goto loc_8261A84C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,6376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6376);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x8261A848;
	sub_829E6978(ctx, base);
	// stfs f1,8432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8432, temp.u32);
loc_8261A84C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A858"))) PPC_WEAK_FUNC(sub_8261A858);
PPC_FUNC_IMPL(__imp__sub_8261A858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82619af0
	sub_82619AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A860"))) PPC_WEAK_FUNC(sub_8261A860);
PPC_FUNC_IMPL(__imp__sub_8261A860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261a1b0
	sub_8261A1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A868"))) PPC_WEAK_FUNC(sub_8261A868);
PPC_FUNC_IMPL(__imp__sub_8261A868) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82619d88
	sub_82619D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A870"))) PPC_WEAK_FUNC(sub_8261A870);
PPC_FUNC_IMPL(__imp__sub_8261A870) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261a2f8
	sub_8261A2F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A878"))) PPC_WEAK_FUNC(sub_8261A878);
PPC_FUNC_IMPL(__imp__sub_8261A878) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8261a068
	sub_8261A068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A880"))) PPC_WEAK_FUNC(sub_8261A880);
PPC_FUNC_IMPL(__imp__sub_8261A880) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82619f20
	sub_82619F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A888"))) PPC_WEAK_FUNC(sub_8261A888);
PPC_FUNC_IMPL(__imp__sub_8261A888) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826199a0
	sub_826199A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A890"))) PPC_WEAK_FUNC(sub_8261A890);
PPC_FUNC_IMPL(__imp__sub_8261A890) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82619ed0
	sub_82619ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A898"))) PPC_WEAK_FUNC(sub_8261A898);
PPC_FUNC_IMPL(__imp__sub_8261A898) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82619c40
	sub_82619C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A8A0"))) PPC_WEAK_FUNC(sub_8261A8A0);
PPC_FUNC_IMPL(__imp__sub_8261A8A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82619f20
	sub_82619F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261A8A8"))) PPC_WEAK_FUNC(sub_8261A8A8);
PPC_FUNC_IMPL(__imp__sub_8261A8A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8436, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A8B8"))) PPC_WEAK_FUNC(sub_8261A8B8);
PPC_FUNC_IMPL(__imp__sub_8261A8B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7220
	ctx.r3.s64 = ctx.r11.s64 + 7220;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A8C8"))) PPC_WEAK_FUNC(sub_8261A8C8);
PPC_FUNC_IMPL(__imp__sub_8261A8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8261a900
	if (ctx.cr6.eq) goto loc_8261A900;
	// bl 0x82411270
	ctx.lr = 0x8261A8F0;
	sub_82411270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8261a900
	if (!ctx.cr6.eq) goto loc_8261A900;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261a90c
	goto loc_8261A90C;
loc_8261A900:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82646800
	ctx.lr = 0x8261A90C;
	sub_82646800(ctx, base);
loc_8261A90C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A928"))) PPC_WEAK_FUNC(sub_8261A928);
PPC_FUNC_IMPL(__imp__sub_8261A928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1968
	ctx.r3.s64 = 1968;
	// bl 0x82833108
	ctx.lr = 0x8261A948;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8261a9b4
	if (ctx.cr0.eq) goto loc_8261A9B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82646430
	ctx.lr = 0x8261A95C;
	sub_82646430(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,6152
	ctx.r11.s64 = ctx.r11.s64 + 6152;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// addi r9,r9,7664
	ctx.r9.s64 = ctx.r9.s64 + 7664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1928
	ctx.r4.s64 = ctx.r30.s64 + 1928;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// lbz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1920);
	// stb r11,1920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1920, ctx.r11.u8);
	// lbz r11,1921(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1921);
	// stb r11,1921(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1921, ctx.r11.u8);
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x8261A9A4;
	sub_8282F630(ctx, base);
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// b 0x8261a9b8
	goto loc_8261A9B8;
loc_8261A9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261A9B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261A9D0"))) PPC_WEAK_FUNC(sub_8261A9D0);
PPC_FUNC_IMPL(__imp__sub_8261A9D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82411270
	ctx.lr = 0x8261A9F0;
	sub_82411270(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8261aa00
	if (!ctx.cr6.eq) goto loc_8261AA00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8261aa18
	goto loc_8261AA18;
loc_8261AA00:
	// bl 0x824122f8
	ctx.lr = 0x8261AA04;
	sub_824122F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8261aa18
	if (ctx.cr6.eq) goto loc_8261AA18;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823ff660
	ctx.lr = 0x8261AA18;
	sub_823FF660(ctx, base);
loc_8261AA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261AA30"))) PPC_WEAK_FUNC(sub_8261AA30);
PPC_FUNC_IMPL(__imp__sub_8261AA30) {
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
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x82332988
	ctx.lr = 0x8261AA44;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261aa60
	if (ctx.cr0.eq) goto loc_8261AA60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261AA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261aa64
	goto loc_8261AA64;
loc_8261AA60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261AA64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261AA78"))) PPC_WEAK_FUNC(sub_8261AA78);
PPC_FUNC_IMPL(__imp__sub_8261AA78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261AAA0"))) PPC_WEAK_FUNC(sub_8261AAA0);
PPC_FUNC_IMPL(__imp__sub_8261AAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// bl 0x82400f38
	ctx.lr = 0x8261AAC4;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c1d50
	ctx.lr = 0x8261AACC;
	sub_828C1D50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261aadc
	if (ctx.cr0.eq) goto loc_8261AADC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8261AADC;
	sub_82332DB8(ctx, base);
loc_8261AADC:
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

__attribute__((alias("__imp__sub_8261AAF8"))) PPC_WEAK_FUNC(sub_8261AAF8);
PPC_FUNC_IMPL(__imp__sub_8261AAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AB00;
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
	// beq cr6,0x8261ab5c
	if (ctx.cr6.eq) goto loc_8261AB5C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13048
	ctx.r31.s64 = ctx.r11.s64 + 13048;
	// lwz r11,13044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ab4c
	if (!ctx.cr0.eq) goto loc_8261AB4C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9484
	ctx.r9.s64 = ctx.r9.s64 + 9484;
	// stw r11,13044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13044, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// bl 0x82a4c758
	ctx.lr = 0x8261AB4C;
	sub_82A4C758(ctx, base);
loc_8261AB4C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261ab5c
	if (!ctx.cr6.eq) goto loc_8261AB5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ab68
	goto loc_8261AB68;
loc_8261AB5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82646398
	ctx.lr = 0x8261AB68;
	sub_82646398(ctx, base);
loc_8261AB68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261AB70"))) PPC_WEAK_FUNC(sub_8261AB70);
PPC_FUNC_IMPL(__imp__sub_8261AB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AB78;
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
	// addi r31,r11,13048
	ctx.r31.s64 = ctx.r11.s64 + 13048;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261abbc
	if (!ctx.cr0.eq) goto loc_8261ABBC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9484
	ctx.r9.s64 = ctx.r9.s64 + 9484;
	// stw r11,13044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13044, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25216
	ctx.r3.s64 = ctx.r11.s64 + 25216;
	// bl 0x82a4c758
	ctx.lr = 0x8261ABBC;
	sub_82A4C758(ctx, base);
loc_8261ABBC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261abd0
	if (ctx.cr6.eq) goto loc_8261ABD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82646278
	ctx.lr = 0x8261ABD0;
	sub_82646278(ctx, base);
loc_8261ABD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261ABD8"))) PPC_WEAK_FUNC(sub_8261ABD8);
PPC_FUNC_IMPL(__imp__sub_8261ABD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261ABE0;
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
	// beq cr6,0x8261ac3c
	if (ctx.cr6.eq) goto loc_8261AC3C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13056
	ctx.r31.s64 = ctx.r11.s64 + 13056;
	// lwz r11,13052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ac2c
	if (!ctx.cr0.eq) goto loc_8261AC2C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9536
	ctx.r9.s64 = ctx.r9.s64 + 9536;
	// stw r11,13052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13052, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// bl 0x82a4c758
	ctx.lr = 0x8261AC2C;
	sub_82A4C758(ctx, base);
loc_8261AC2C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261ac3c
	if (!ctx.cr6.eq) goto loc_8261AC3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ac48
	goto loc_8261AC48;
loc_8261AC3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8261AC48;
	sub_82339EE8(ctx, base);
loc_8261AC48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261AC50"))) PPC_WEAK_FUNC(sub_8261AC50);
PPC_FUNC_IMPL(__imp__sub_8261AC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AC58;
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
	// addi r31,r11,13056
	ctx.r31.s64 = ctx.r11.s64 + 13056;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ac9c
	if (!ctx.cr0.eq) goto loc_8261AC9C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9536
	ctx.r9.s64 = ctx.r9.s64 + 9536;
	// stw r11,13052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13052, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25192
	ctx.r3.s64 = ctx.r11.s64 + 25192;
	// bl 0x82a4c758
	ctx.lr = 0x8261AC9C;
	sub_82A4C758(ctx, base);
loc_8261AC9C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261acb0
	if (ctx.cr6.eq) goto loc_8261ACB0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8261ACB0;
	sub_82339D80(ctx, base);
loc_8261ACB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261ACB8"))) PPC_WEAK_FUNC(sub_8261ACB8);
PPC_FUNC_IMPL(__imp__sub_8261ACB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x8261ACE0;
	sub_8243C740(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f9ba8
	ctx.lr = 0x8261ACEC;
	sub_824F9BA8(ctx, base);
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

__attribute__((alias("__imp__sub_8261AD08"))) PPC_WEAK_FUNC(sub_8261AD08);
PPC_FUNC_IMPL(__imp__sub_8261AD08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8261ad34
	if (ctx.cr0.eq) goto loc_8261AD34;
	// bl 0x82332db8
	ctx.lr = 0x8261AD34;
	sub_82332DB8(ctx, base);
loc_8261AD34:
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

__attribute__((alias("__imp__sub_8261AD50"))) PPC_WEAK_FUNC(sub_8261AD50);
PPC_FUNC_IMPL(__imp__sub_8261AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AD58;
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
	// beq cr6,0x8261adb4
	if (ctx.cr6.eq) goto loc_8261ADB4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13064
	ctx.r31.s64 = ctx.r11.s64 + 13064;
	// lwz r11,13060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ada4
	if (!ctx.cr0.eq) goto loc_8261ADA4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9596
	ctx.r9.s64 = ctx.r9.s64 + 9596;
	// stw r11,13060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13060, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// bl 0x82a4c758
	ctx.lr = 0x8261ADA4;
	sub_82A4C758(ctx, base);
loc_8261ADA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261adb4
	if (!ctx.cr6.eq) goto loc_8261ADB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261adc0
	goto loc_8261ADC0;
loc_8261ADB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x8261ADC0;
	sub_82339B70(ctx, base);
loc_8261ADC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261ADC8"))) PPC_WEAK_FUNC(sub_8261ADC8);
PPC_FUNC_IMPL(__imp__sub_8261ADC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261ADD0;
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
	// addi r31,r11,13064
	ctx.r31.s64 = ctx.r11.s64 + 13064;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ae14
	if (!ctx.cr0.eq) goto loc_8261AE14;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9596
	ctx.r9.s64 = ctx.r9.s64 + 9596;
	// stw r11,13060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13060, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25168
	ctx.r3.s64 = ctx.r11.s64 + 25168;
	// bl 0x82a4c758
	ctx.lr = 0x8261AE14;
	sub_82A4C758(ctx, base);
loc_8261AE14:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261ae28
	if (ctx.cr6.eq) goto loc_8261AE28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x8261AE28;
	sub_82339F40(ctx, base);
loc_8261AE28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261AE30"))) PPC_WEAK_FUNC(sub_8261AE30);
PPC_FUNC_IMPL(__imp__sub_8261AE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25320
	ctx.r31.s64 = ctx.r11.s64 + -25320;
	// lwz r11,-25324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ae78
	if (!ctx.cr0.eq) goto loc_8261AE78;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9596
	ctx.r9.s64 = ctx.r9.s64 + 9596;
	// stw r11,-25324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25324, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,3304
	ctx.r3.s64 = ctx.r11.s64 + 3304;
	// bl 0x82a4c758
	ctx.lr = 0x8261AE78;
	sub_82A4C758(ctx, base);
loc_8261AE78:
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

__attribute__((alias("__imp__sub_8261AE90"))) PPC_WEAK_FUNC(sub_8261AE90);
PPC_FUNC_IMPL(__imp__sub_8261AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AE98;
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
	// beq cr6,0x8261aef4
	if (ctx.cr6.eq) goto loc_8261AEF4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13072
	ctx.r31.s64 = ctx.r11.s64 + 13072;
	// lwz r11,13068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261aee4
	if (!ctx.cr0.eq) goto loc_8261AEE4;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15108
	ctx.r9.s64 = ctx.r9.s64 + -15108;
	// stw r11,13068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13068, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// bl 0x82a4c758
	ctx.lr = 0x8261AEE4;
	sub_82A4C758(ctx, base);
loc_8261AEE4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261aef4
	if (!ctx.cr6.eq) goto loc_8261AEF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261af00
	goto loc_8261AF00;
loc_8261AEF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x8261AF00;
	sub_82339B70(ctx, base);
loc_8261AF00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261AF08"))) PPC_WEAK_FUNC(sub_8261AF08);
PPC_FUNC_IMPL(__imp__sub_8261AF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AF10;
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
	// addi r31,r11,13072
	ctx.r31.s64 = ctx.r11.s64 + 13072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261af54
	if (!ctx.cr0.eq) goto loc_8261AF54;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15108
	ctx.r9.s64 = ctx.r9.s64 + -15108;
	// stw r11,13068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13068, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25144
	ctx.r3.s64 = ctx.r11.s64 + 25144;
	// bl 0x82a4c758
	ctx.lr = 0x8261AF54;
	sub_82A4C758(ctx, base);
loc_8261AF54:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261af68
	if (ctx.cr6.eq) goto loc_8261AF68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x8261AF68;
	sub_82339F40(ctx, base);
loc_8261AF68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261AF70"))) PPC_WEAK_FUNC(sub_8261AF70);
PPC_FUNC_IMPL(__imp__sub_8261AF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25312
	ctx.r31.s64 = ctx.r11.s64 + -25312;
	// lwz r11,-25316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261afb8
	if (!ctx.cr0.eq) goto loc_8261AFB8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15108
	ctx.r9.s64 = ctx.r9.s64 + -15108;
	// stw r11,-25316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25316, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,3280
	ctx.r3.s64 = ctx.r11.s64 + 3280;
	// bl 0x82a4c758
	ctx.lr = 0x8261AFB8;
	sub_82A4C758(ctx, base);
loc_8261AFB8:
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

__attribute__((alias("__imp__sub_8261AFD0"))) PPC_WEAK_FUNC(sub_8261AFD0);
PPC_FUNC_IMPL(__imp__sub_8261AFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261AFD8;
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
	// beq cr6,0x8261b034
	if (ctx.cr6.eq) goto loc_8261B034;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13080
	ctx.r31.s64 = ctx.r11.s64 + 13080;
	// lwz r11,13076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b024
	if (!ctx.cr0.eq) goto loc_8261B024;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15088
	ctx.r9.s64 = ctx.r9.s64 + -15088;
	// stw r11,13076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13076, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// bl 0x82a4c758
	ctx.lr = 0x8261B024;
	sub_82A4C758(ctx, base);
loc_8261B024:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b034
	if (!ctx.cr6.eq) goto loc_8261B034;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b040
	goto loc_8261B040;
loc_8261B034:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x8261B040;
	sub_82339B70(ctx, base);
loc_8261B040:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B048"))) PPC_WEAK_FUNC(sub_8261B048);
PPC_FUNC_IMPL(__imp__sub_8261B048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B050;
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
	// addi r31,r11,13080
	ctx.r31.s64 = ctx.r11.s64 + 13080;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b094
	if (!ctx.cr0.eq) goto loc_8261B094;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15088
	ctx.r9.s64 = ctx.r9.s64 + -15088;
	// stw r11,13076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13076, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// bl 0x82a4c758
	ctx.lr = 0x8261B094;
	sub_82A4C758(ctx, base);
loc_8261B094:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b0a8
	if (ctx.cr6.eq) goto loc_8261B0A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x8261B0A8;
	sub_82339F40(ctx, base);
loc_8261B0A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B0B0"))) PPC_WEAK_FUNC(sub_8261B0B0);
PPC_FUNC_IMPL(__imp__sub_8261B0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-25304
	ctx.r31.s64 = ctx.r11.s64 + -25304;
	// lwz r11,-25308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b0f8
	if (!ctx.cr0.eq) goto loc_8261B0F8;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15088
	ctx.r9.s64 = ctx.r9.s64 + -15088;
	// stw r11,-25308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25308, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,3256
	ctx.r3.s64 = ctx.r11.s64 + 3256;
	// bl 0x82a4c758
	ctx.lr = 0x8261B0F8;
	sub_82A4C758(ctx, base);
loc_8261B0F8:
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

__attribute__((alias("__imp__sub_8261B110"))) PPC_WEAK_FUNC(sub_8261B110);
PPC_FUNC_IMPL(__imp__sub_8261B110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B118;
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
	// beq cr6,0x8261b174
	if (ctx.cr6.eq) goto loc_8261B174;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13088
	ctx.r31.s64 = ctx.r11.s64 + 13088;
	// lwz r11,13084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b164
	if (!ctx.cr0.eq) goto loc_8261B164;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9732
	ctx.r9.s64 = ctx.r9.s64 + 9732;
	// stw r11,13084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13084, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// bl 0x82a4c758
	ctx.lr = 0x8261B164;
	sub_82A4C758(ctx, base);
loc_8261B164:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b174
	if (!ctx.cr6.eq) goto loc_8261B174;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b180
	goto loc_8261B180;
loc_8261B174:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8261B180;
	sub_82339EE8(ctx, base);
loc_8261B180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B188"))) PPC_WEAK_FUNC(sub_8261B188);
PPC_FUNC_IMPL(__imp__sub_8261B188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B190;
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
	// addi r31,r11,13088
	ctx.r31.s64 = ctx.r11.s64 + 13088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b1d4
	if (!ctx.cr0.eq) goto loc_8261B1D4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9732
	ctx.r9.s64 = ctx.r9.s64 + 9732;
	// stw r11,13084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13084, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// bl 0x82a4c758
	ctx.lr = 0x8261B1D4;
	sub_82A4C758(ctx, base);
loc_8261B1D4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b1e8
	if (ctx.cr6.eq) goto loc_8261B1E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8261B1E8;
	sub_82339D80(ctx, base);
loc_8261B1E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B1F0"))) PPC_WEAK_FUNC(sub_8261B1F0);
PPC_FUNC_IMPL(__imp__sub_8261B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B1F8;
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
	// beq cr6,0x8261b254
	if (ctx.cr6.eq) goto loc_8261B254;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13096
	ctx.r31.s64 = ctx.r11.s64 + 13096;
	// lwz r11,13092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b244
	if (!ctx.cr0.eq) goto loc_8261B244;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9796
	ctx.r9.s64 = ctx.r9.s64 + 9796;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// bl 0x82a4c758
	ctx.lr = 0x8261B244;
	sub_82A4C758(ctx, base);
loc_8261B244:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b254
	if (!ctx.cr6.eq) goto loc_8261B254;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b260
	goto loc_8261B260;
loc_8261B254:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82646200
	ctx.lr = 0x8261B260;
	sub_82646200(ctx, base);
loc_8261B260:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B268"))) PPC_WEAK_FUNC(sub_8261B268);
PPC_FUNC_IMPL(__imp__sub_8261B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B270;
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
	// addi r31,r11,13096
	ctx.r31.s64 = ctx.r11.s64 + 13096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b2b4
	if (!ctx.cr0.eq) goto loc_8261B2B4;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9796
	ctx.r9.s64 = ctx.r9.s64 + 9796;
	// stw r11,13092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13092, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25072
	ctx.r3.s64 = ctx.r11.s64 + 25072;
	// bl 0x82a4c758
	ctx.lr = 0x8261B2B4;
	sub_82A4C758(ctx, base);
loc_8261B2B4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b2c8
	if (ctx.cr6.eq) goto loc_8261B2C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826460a0
	ctx.lr = 0x8261B2C8;
	sub_826460A0(ctx, base);
loc_8261B2C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B2D0"))) PPC_WEAK_FUNC(sub_8261B2D0);
PPC_FUNC_IMPL(__imp__sub_8261B2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B2D8;
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
	// beq cr6,0x8261b334
	if (ctx.cr6.eq) goto loc_8261B334;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13104
	ctx.r31.s64 = ctx.r11.s64 + 13104;
	// lwz r11,13100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b324
	if (!ctx.cr0.eq) goto loc_8261B324;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9860
	ctx.r9.s64 = ctx.r9.s64 + 9860;
	// stw r11,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// bl 0x82a4c758
	ctx.lr = 0x8261B324;
	sub_82A4C758(ctx, base);
loc_8261B324:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b334
	if (!ctx.cr6.eq) goto loc_8261B334;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b340
	goto loc_8261B340;
loc_8261B334:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261b1f0
	ctx.lr = 0x8261B340;
	sub_8261B1F0(ctx, base);
loc_8261B340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B348"))) PPC_WEAK_FUNC(sub_8261B348);
PPC_FUNC_IMPL(__imp__sub_8261B348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B350;
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
	// addi r31,r11,13104
	ctx.r31.s64 = ctx.r11.s64 + 13104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b394
	if (!ctx.cr0.eq) goto loc_8261B394;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9860
	ctx.r9.s64 = ctx.r9.s64 + 9860;
	// stw r11,13100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13100, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25048
	ctx.r3.s64 = ctx.r11.s64 + 25048;
	// bl 0x82a4c758
	ctx.lr = 0x8261B394;
	sub_82A4C758(ctx, base);
loc_8261B394:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b3a8
	if (ctx.cr6.eq) goto loc_8261B3A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8261b268
	ctx.lr = 0x8261B3A8;
	sub_8261B268(ctx, base);
loc_8261B3A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B3B0"))) PPC_WEAK_FUNC(sub_8261B3B0);
PPC_FUNC_IMPL(__imp__sub_8261B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82641088
	ctx.lr = 0x8261B3C8;
	sub_82641088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261B428"))) PPC_WEAK_FUNC(sub_8261B428);
PPC_FUNC_IMPL(__imp__sub_8261B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8261B440;
	sub_82641148(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x82645ff0
	ctx.lr = 0x8261B450;
	sub_82645FF0(ctx, base);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x82645ff0
	ctx.lr = 0x8261B460;
	sub_82645FF0(ctx, base);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82645ff0
	ctx.lr = 0x8261B470;
	sub_82645FF0(ctx, base);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82645ff0
	ctx.lr = 0x8261B480;
	sub_82645FF0(ctx, base);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82645ff0
	ctx.lr = 0x8261B490;
	sub_82645FF0(ctx, base);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643470
	ctx.lr = 0x8261B49C;
	sub_82643470(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826434f8
	ctx.lr = 0x8261B4A8;
	sub_826434F8(ctx, base);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8261B4B4;
	sub_82645F38(ctx, base);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8261B4C0;
	sub_82645F38(ctx, base);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82645ff0
	ctx.lr = 0x8261B4D0;
	sub_82645FF0(ctx, base);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643580
	ctx.lr = 0x8261B4DC;
	sub_82643580(ctx, base);
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643608
	ctx.lr = 0x8261B4E8;
	sub_82643608(ctx, base);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82643470
	ctx.lr = 0x8261B4F4;
	sub_82643470(ctx, base);
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x82645ff0
	ctx.lr = 0x8261B504;
	sub_82645FF0(ctx, base);
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82645ff0
	ctx.lr = 0x8261B514;
	sub_82645FF0(ctx, base);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8261B520;
	sub_82645F38(ctx, base);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645f38
	ctx.lr = 0x8261B52C;
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

__attribute__((alias("__imp__sub_8261B540"))) PPC_WEAK_FUNC(sub_8261B540);
PPC_FUNC_IMPL(__imp__sub_8261B540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B5CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x8261B698;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B6E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82641350
	ctx.lr = 0x8261B710;
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

__attribute__((alias("__imp__sub_8261B728"))) PPC_WEAK_FUNC(sub_8261B728);
PPC_FUNC_IMPL(__imp__sub_8261B728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B730;
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
	// beq cr6,0x8261b78c
	if (ctx.cr6.eq) goto loc_8261B78C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13112
	ctx.r31.s64 = ctx.r11.s64 + 13112;
	// lwz r11,13108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b77c
	if (!ctx.cr0.eq) goto loc_8261B77C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9924
	ctx.r9.s64 = ctx.r9.s64 + 9924;
	// stw r11,13108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13108, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x82a4c758
	ctx.lr = 0x8261B77C;
	sub_82A4C758(ctx, base);
loc_8261B77C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b78c
	if (!ctx.cr6.eq) goto loc_8261B78C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b798
	goto loc_8261B798;
loc_8261B78C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261b1f0
	ctx.lr = 0x8261B798;
	sub_8261B1F0(ctx, base);
loc_8261B798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B7A0"))) PPC_WEAK_FUNC(sub_8261B7A0);
PPC_FUNC_IMPL(__imp__sub_8261B7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B7A8;
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
	// addi r31,r11,13112
	ctx.r31.s64 = ctx.r11.s64 + 13112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b7ec
	if (!ctx.cr0.eq) goto loc_8261B7EC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9924
	ctx.r9.s64 = ctx.r9.s64 + 9924;
	// stw r11,13108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13108, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25024
	ctx.r3.s64 = ctx.r11.s64 + 25024;
	// bl 0x82a4c758
	ctx.lr = 0x8261B7EC;
	sub_82A4C758(ctx, base);
loc_8261B7EC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b800
	if (ctx.cr6.eq) goto loc_8261B800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8261b268
	ctx.lr = 0x8261B800;
	sub_8261B268(ctx, base);
loc_8261B800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B808"))) PPC_WEAK_FUNC(sub_8261B808);
PPC_FUNC_IMPL(__imp__sub_8261B808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B810;
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
	// beq cr6,0x8261b86c
	if (ctx.cr6.eq) goto loc_8261B86C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13120
	ctx.r31.s64 = ctx.r11.s64 + 13120;
	// lwz r11,13116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b85c
	if (!ctx.cr0.eq) goto loc_8261B85C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9988
	ctx.r9.s64 = ctx.r9.s64 + 9988;
	// stw r11,13116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13116, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// bl 0x82a4c758
	ctx.lr = 0x8261B85C;
	sub_82A4C758(ctx, base);
loc_8261B85C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b86c
	if (!ctx.cr6.eq) goto loc_8261B86C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b878
	goto loc_8261B878;
loc_8261B86C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8261b1f0
	ctx.lr = 0x8261B878;
	sub_8261B1F0(ctx, base);
loc_8261B878:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B880"))) PPC_WEAK_FUNC(sub_8261B880);
PPC_FUNC_IMPL(__imp__sub_8261B880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B888;
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
	// addi r31,r11,13120
	ctx.r31.s64 = ctx.r11.s64 + 13120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b8cc
	if (!ctx.cr0.eq) goto loc_8261B8CC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9988
	ctx.r9.s64 = ctx.r9.s64 + 9988;
	// stw r11,13116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13116, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25000
	ctx.r3.s64 = ctx.r11.s64 + 25000;
	// bl 0x82a4c758
	ctx.lr = 0x8261B8CC;
	sub_82A4C758(ctx, base);
loc_8261B8CC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b8e0
	if (ctx.cr6.eq) goto loc_8261B8E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8261b268
	ctx.lr = 0x8261B8E0;
	sub_8261B268(ctx, base);
loc_8261B8E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B8E8"))) PPC_WEAK_FUNC(sub_8261B8E8);
PPC_FUNC_IMPL(__imp__sub_8261B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B8F0;
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
	// beq cr6,0x8261b94c
	if (ctx.cr6.eq) goto loc_8261B94C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13128
	ctx.r31.s64 = ctx.r11.s64 + 13128;
	// lwz r11,13124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b93c
	if (!ctx.cr0.eq) goto loc_8261B93C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10040
	ctx.r9.s64 = ctx.r9.s64 + 10040;
	// stw r11,13124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13124, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// bl 0x82a4c758
	ctx.lr = 0x8261B93C;
	sub_82A4C758(ctx, base);
loc_8261B93C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261b94c
	if (!ctx.cr6.eq) goto loc_8261B94C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261b958
	goto loc_8261B958;
loc_8261B94C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8261B958;
	sub_82339EE8(ctx, base);
loc_8261B958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B960"))) PPC_WEAK_FUNC(sub_8261B960);
PPC_FUNC_IMPL(__imp__sub_8261B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B968;
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
	// addi r31,r11,13128
	ctx.r31.s64 = ctx.r11.s64 + 13128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261b9ac
	if (!ctx.cr0.eq) goto loc_8261B9AC;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10040
	ctx.r9.s64 = ctx.r9.s64 + 10040;
	// stw r11,13124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13124, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24976
	ctx.r3.s64 = ctx.r11.s64 + 24976;
	// bl 0x82a4c758
	ctx.lr = 0x8261B9AC;
	sub_82A4C758(ctx, base);
loc_8261B9AC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261b9c0
	if (ctx.cr6.eq) goto loc_8261B9C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8261B9C0;
	sub_82339D80(ctx, base);
loc_8261B9C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261B9C8"))) PPC_WEAK_FUNC(sub_8261B9C8);
PPC_FUNC_IMPL(__imp__sub_8261B9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261B9D0;
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
	// beq cr6,0x8261ba2c
	if (ctx.cr6.eq) goto loc_8261BA2C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13136
	ctx.r31.s64 = ctx.r11.s64 + 13136;
	// lwz r11,13132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ba1c
	if (!ctx.cr0.eq) goto loc_8261BA1C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10092
	ctx.r9.s64 = ctx.r9.s64 + 10092;
	// stw r11,13132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13132, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// bl 0x82a4c758
	ctx.lr = 0x8261BA1C;
	sub_82A4C758(ctx, base);
loc_8261BA1C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261ba2c
	if (!ctx.cr6.eq) goto loc_8261BA2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261ba38
	goto loc_8261BA38;
loc_8261BA2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8261BA38;
	sub_82339EE8(ctx, base);
loc_8261BA38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261BA40"))) PPC_WEAK_FUNC(sub_8261BA40);
PPC_FUNC_IMPL(__imp__sub_8261BA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261BA48;
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
	// addi r31,r11,13136
	ctx.r31.s64 = ctx.r11.s64 + 13136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8261ba8c
	if (!ctx.cr0.eq) goto loc_8261BA8C;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10092
	ctx.r9.s64 = ctx.r9.s64 + 10092;
	// stw r11,13132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13132, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,24952
	ctx.r3.s64 = ctx.r11.s64 + 24952;
	// bl 0x82a4c758
	ctx.lr = 0x8261BA8C;
	sub_82A4C758(ctx, base);
loc_8261BA8C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8261baa0
	if (ctx.cr6.eq) goto loc_8261BAA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8261BAA0;
	sub_82339D80(ctx, base);
loc_8261BAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261BAA8"))) PPC_WEAK_FUNC(sub_8261BAA8);
PPC_FUNC_IMPL(__imp__sub_8261BAA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-29600
	ctx.r3.s64 = ctx.r11.s64 + -29600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BAB8"))) PPC_WEAK_FUNC(sub_8261BAB8);
PPC_FUNC_IMPL(__imp__sub_8261BAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8261baf0
	if (ctx.cr6.eq) goto loc_8261BAF0;
	// bl 0x82396850
	ctx.lr = 0x8261BAE0;
	sub_82396850(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8261baf0
	if (!ctx.cr6.eq) goto loc_8261BAF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261bafc
	goto loc_8261BAFC;
loc_8261BAF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8261a8c8
	ctx.lr = 0x8261BAFC;
	sub_8261A8C8(ctx, base);
loc_8261BAFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BB18"))) PPC_WEAK_FUNC(sub_8261BB18);
PPC_FUNC_IMPL(__imp__sub_8261BB18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82396850
	sub_82396850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261BB20"))) PPC_WEAK_FUNC(sub_8261BB20);
PPC_FUNC_IMPL(__imp__sub_8261BB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82411270
	sub_82411270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261BB28"))) PPC_WEAK_FUNC(sub_8261BB28);
PPC_FUNC_IMPL(__imp__sub_8261BB28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3680
	ctx.r3.s64 = 3680;
	// bl 0x82833108
	ctx.lr = 0x8261BB44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261bb58
	if (ctx.cr0.eq) goto loc_8261BB58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8261bc28
	ctx.lr = 0x8261BB54;
	sub_8261BC28(ctx, base);
	// b 0x8261bb5c
	goto loc_8261BB5C;
loc_8261BB58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261BB5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BB70"))) PPC_WEAK_FUNC(sub_8261BB70);
PPC_FUNC_IMPL(__imp__sub_8261BB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82396850
	ctx.lr = 0x8261BB90;
	sub_82396850(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8261bba4
	if (ctx.cr6.eq) goto loc_8261BBA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8261a9d0
	ctx.lr = 0x8261BBA4;
	sub_8261A9D0(ctx, base);
loc_8261BBA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BBC0"))) PPC_WEAK_FUNC(sub_8261BBC0);
PPC_FUNC_IMPL(__imp__sub_8261BBC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261bbe0
	if (ctx.cr6.eq) goto loc_8261BBE0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8261BBE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BBE8"))) PPC_WEAK_FUNC(sub_8261BBE8);
PPC_FUNC_IMPL(__imp__sub_8261BBE8) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8261BC14"))) PPC_WEAK_FUNC(sub_8261BC14);
PPC_FUNC_IMPL(__imp__sub_8261BC14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BC18"))) PPC_WEAK_FUNC(sub_8261BC18);
PPC_FUNC_IMPL(__imp__sub_8261BC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f1,-32712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32712);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261BC28"))) PPC_WEAK_FUNC(sub_8261BC28);
PPC_FUNC_IMPL(__imp__sub_8261BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8261BC30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82646430
	ctx.lr = 0x8261BC40;
	sub_82646430(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,6152
	ctx.r11.s64 = ctx.r11.s64 + 6152;
	// addi r10,r10,7612
	ctx.r10.s64 = ctx.r10.s64 + 7612;
	// addi r9,r9,7664
	ctx.r9.s64 = ctx.r9.s64 + 7664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1928
	ctx.r4.s64 = ctx.r30.s64 + 1928;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// lbz r11,1920(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1920);
	// stb r11,1920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1920, ctx.r11.u8);
	// lbz r11,1921(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1921);
	// stb r11,1921(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1921, ctx.r11.u8);
	// lwz r11,1924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1924);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x8261BC88;
	sub_8282F630(ctx, base);
	// lwz r8,1952(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// addi r11,r11,7688
	ctx.r11.s64 = ctx.r11.s64 + 7688;
	// addi r10,r10,9384
	ctx.r10.s64 = ctx.r10.s64 + 9384;
	// stw r8,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r8.u32);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1976
	ctx.r3.s64 = ctx.r31.s64 + 1976;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1976
	ctx.r4.s64 = ctx.r30.s64 + 1976;
	// li r5,560
	ctx.r5.s64 = 560;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// lwz r11,1972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1972);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8261BCD4;
	sub_82A4EA80(ctx, base);
	// lwz r11,2536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2536);
	// addi r3,r31,2552
	ctx.r3.s64 = ctx.r31.s64 + 2552;
	// addi r4,r30,2552
	ctx.r4.s64 = ctx.r30.s64 + 2552;
	// li r5,76
	ctx.r5.s64 = 76;
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
	// bl 0x82a4ea80
	ctx.lr = 0x8261BD04;
	sub_82A4EA80(ctx, base);
	// lwz r11,2628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2628);
	// addi r4,r30,2816
	ctx.r4.s64 = ctx.r30.s64 + 2816;
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// stw r11,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r11.u32);
	// lfs f0,2632(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2632, temp.u32);
	// lwz r11,2636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2636);
	// stw r11,2636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2636, ctx.r11.u32);
	// lwz r11,2640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2640);
	// stw r11,2640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2640, ctx.r11.u32);
	// lwz r11,2644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2644);
	// stw r11,2644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2644, ctx.r11.u32);
	// lwz r11,2648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2648);
	// stw r11,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r11.u32);
	// lwz r11,2652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2652);
	// stw r11,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r11.u32);
	// lfs f0,2656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// lwz r11,2660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2660);
	// stw r11,2660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2660, ctx.r11.u32);
	// lfs f0,2664(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2664, temp.u32);
	// lwz r11,2668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2668);
	// stw r11,2668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2668, ctx.r11.u32);
	// lwz r11,2672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2672);
	// stw r11,2672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2672, ctx.r11.u32);
	// lwz r11,2676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2676);
	// stw r11,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r11.u32);
	// lwz r11,2680(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2680);
	// stw r11,2680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2680, ctx.r11.u32);
	// lwz r11,2684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2684);
	// stw r11,2684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2684, ctx.r11.u32);
	// lwz r11,2688(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2688);
	// stw r11,2688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2688, ctx.r11.u32);
	// lwz r11,2692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2692);
	// stw r11,2692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2692, ctx.r11.u32);
	// lwz r11,2696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2696);
	// stw r11,2696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2696, ctx.r11.u32);
	// lwz r11,2700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2700);
	// stw r11,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r11.u32);
	// lwz r11,2704(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2704);
	// stw r11,2704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2704, ctx.r11.u32);
	// lwz r11,2708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2708);
	// stw r11,2708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2708, ctx.r11.u32);
	// lfs f0,2712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2712);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2712, temp.u32);
	// lwz r11,2716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2716);
	// stw r11,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r11.u32);
	// lwz r11,2720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2720);
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
	// lwz r11,2732(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2732);
	// stw r11,2732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2732, ctx.r11.u32);
	// lfs f0,2736(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2736, temp.u32);
	// lfs f0,2740(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2740);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2740, temp.u32);
	// lwz r11,2744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2744);
	// stw r11,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// lfs f0,2748(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2748, temp.u32);
	// lfs f0,2752(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2752);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2752, temp.u32);
	// lfs f0,2756(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2756(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2756, temp.u32);
	// lfs f0,2760(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2760);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2760(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2760, temp.u32);
	// lfs f0,2764(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2764);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2764(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2764, temp.u32);
	// lfs f0,2768(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2768, temp.u32);
	// lfs f0,2772(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2772, temp.u32);
	// lfs f0,2776(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2776);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2776, temp.u32);
	// lfs f0,2780(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2780(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2780, temp.u32);
	// lfs f0,2784(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2784);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2784, temp.u32);
	// lfs f0,2788(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2788, temp.u32);
	// lfs f0,2792(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2792, temp.u32);
	// lfs f0,2796(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2796);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2796, temp.u32);
	// lfs f0,2800(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2800, temp.u32);
	// lfs f0,2804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2804);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2804(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2804, temp.u32);
	// lfs f0,2808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2808);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2808, temp.u32);
	// lfs f0,2812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2812, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x8261BE88;
	sub_82873B58(ctx, base);
	// addi r4,r30,2840
	ctx.r4.s64 = ctx.r30.s64 + 2840;
	// addi r3,r31,2840
	ctx.r3.s64 = ctx.r31.s64 + 2840;
	// bl 0x82873b58
	ctx.lr = 0x8261BE94;
	sub_82873B58(ctx, base);
	// addi r4,r30,2864
	ctx.r4.s64 = ctx.r30.s64 + 2864;
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// bl 0x82873b58
	ctx.lr = 0x8261BEA0;
	sub_82873B58(ctx, base);
	// addi r4,r30,2888
	ctx.r4.s64 = ctx.r30.s64 + 2888;
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// bl 0x82873b58
	ctx.lr = 0x8261BEAC;
	sub_82873B58(ctx, base);
	// addi r4,r30,2912
	ctx.r4.s64 = ctx.r30.s64 + 2912;
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// bl 0x82873b58
	ctx.lr = 0x8261BEB8;
	sub_82873B58(ctx, base);
	// addi r4,r30,2936
	ctx.r4.s64 = ctx.r30.s64 + 2936;
	// addi r3,r31,2936
	ctx.r3.s64 = ctx.r31.s64 + 2936;
	// bl 0x82873b58
	ctx.lr = 0x8261BEC4;
	sub_82873B58(ctx, base);
	// addi r4,r30,2960
	ctx.r4.s64 = ctx.r30.s64 + 2960;
	// addi r3,r31,2960
	ctx.r3.s64 = ctx.r31.s64 + 2960;
	// bl 0x82873b58
	ctx.lr = 0x8261BED0;
	sub_82873B58(ctx, base);
	// lfs f0,2984(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2984, temp.u32);
	// addi r4,r30,3092
	ctx.r4.s64 = ctx.r30.s64 + 3092;
	// addi r3,r31,3092
	ctx.r3.s64 = ctx.r31.s64 + 3092;
	// lfs f0,2988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2988, temp.u32);
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
	// lwz r11,3044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3044);
	// stw r11,3044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3044, ctx.r11.u32);
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
	// lwz r11,3088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3088);
	// stw r11,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r11.u32);
	// bl 0x8282f630
	ctx.lr = 0x8261BFB4;
	sub_8282F630(ctx, base);
	// lwz r11,3116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3116);
	// addi r28,r31,3144
	ctx.r28.s64 = ctx.r31.s64 + 3144;
	// addi r27,r30,3144
	ctx.r27.s64 = ctx.r30.s64 + 3144;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,3120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3120);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
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
	// stw r26,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r26.u32);
	// stw r29,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r29.u32);
	// stw r29,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r29.u32);
	// stw r29,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r29.u32);
	// stw r29,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r29.u32);
	// stw r29,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r29.u32);
	// beq cr6,0x8261c064
	if (ctx.cr6.eq) goto loc_8261C064;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261c064
	if (!ctx.cr6.gt) goto loc_8261C064;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261c048
	if (ctx.cr0.eq) goto loc_8261C048;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261C048;
	sub_82332C38(ctx, base);
loc_8261C048:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8261C05C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8261C064:
	// lwz r11,3168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3168);
	// addi r4,r30,3184
	ctx.r4.s64 = ctx.r30.s64 + 3184;
	// addi r3,r31,3184
	ctx.r3.s64 = ctx.r31.s64 + 3184;
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
	// bl 0x82645d28
	ctx.lr = 0x8261C090;
	sub_82645D28(ctx, base);
	// addi r4,r30,3220
	ctx.r4.s64 = ctx.r30.s64 + 3220;
	// addi r3,r31,3220
	ctx.r3.s64 = ctx.r31.s64 + 3220;
	// bl 0x82645d28
	ctx.lr = 0x8261C09C;
	sub_82645D28(ctx, base);
	// addi r4,r30,3256
	ctx.r4.s64 = ctx.r30.s64 + 3256;
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x82645d28
	ctx.lr = 0x8261C0A8;
	sub_82645D28(ctx, base);
	// addi r4,r30,3292
	ctx.r4.s64 = ctx.r30.s64 + 3292;
	// addi r3,r31,3292
	ctx.r3.s64 = ctx.r31.s64 + 3292;
	// bl 0x82645d28
	ctx.lr = 0x8261C0B4;
	sub_82645D28(ctx, base);
	// addi r4,r30,3328
	ctx.r4.s64 = ctx.r30.s64 + 3328;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x82645d28
	ctx.lr = 0x8261C0C0;
	sub_82645D28(ctx, base);
	// addi r4,r30,3364
	ctx.r4.s64 = ctx.r30.s64 + 3364;
	// addi r3,r31,3364
	ctx.r3.s64 = ctx.r31.s64 + 3364;
	// bl 0x82645d28
	ctx.lr = 0x8261C0CC;
	sub_82645D28(ctx, base);
	// lfs f0,3400(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3400, temp.u32);
	// addi r28,r31,3444
	ctx.r28.s64 = ctx.r31.s64 + 3444;
	// addi r27,r30,3444
	ctx.r27.s64 = ctx.r30.s64 + 3444;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// lfs f0,3404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3404, temp.u32);
	// lwz r11,3408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3408);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// lwz r11,3412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3412);
	// stw r11,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// lwz r11,3416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3416);
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// lwz r11,3420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3420);
	// stw r11,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r11.u32);
	// lwz r11,3424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// stw r11,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r11.u32);
	// lwz r11,3428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// stw r11,3428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// lwz r11,3432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3432);
	// stw r11,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// lwz r11,3436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3436);
	// stw r11,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// lwz r11,3440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3440);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// stw r26,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r26.u32);
	// stw r29,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r29.u32);
	// stw r29,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r29.u32);
	// stw r29,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r29.u32);
	// stw r29,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r29.u32);
	// stw r29,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r29.u32);
	// beq cr6,0x8261c194
	if (ctx.cr6.eq) goto loc_8261C194;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261c194
	if (!ctx.cr6.gt) goto loc_8261C194;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261c178
	if (ctx.cr0.eq) goto loc_8261C178;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261C178;
	sub_82332C38(ctx, base);
loc_8261C178:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8261C18C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_8261C194:
	// addi r4,r30,3468
	ctx.r4.s64 = ctx.r30.s64 + 3468;
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// bl 0x823339b8
	ctx.lr = 0x8261C1A0;
	sub_823339B8(ctx, base);
	// addi r4,r30,3492
	ctx.r4.s64 = ctx.r30.s64 + 3492;
	// addi r3,r31,3492
	ctx.r3.s64 = ctx.r31.s64 + 3492;
	// bl 0x823339b8
	ctx.lr = 0x8261C1AC;
	sub_823339B8(ctx, base);
	// addi r28,r31,3516
	ctx.r28.s64 = ctx.r31.s64 + 3516;
	// addi r27,r30,3516
	ctx.r27.s64 = ctx.r30.s64 + 3516;
	// stw r29,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r29.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r29,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r29.u32);
	// stw r29,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r29.u32);
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// stw r11,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r11.u32);
	// stw r29,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r29.u32);
	// stw r29,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r29.u32);
	// beq cr6,0x8261c270
	if (ctx.cr6.eq) goto loc_8261C270;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261c270
	if (!ctx.cr6.gt) goto loc_8261C270;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261c204
	if (ctx.cr0.eq) goto loc_8261C204;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261C204;
	sub_82332C38(ctx, base);
loc_8261C204:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261c270
	if (!ctx.cr6.gt) goto loc_8261C270;
loc_8261C214:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x8261C228;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261c25c
	if (ctx.cr0.eq) goto loc_8261C25C;
	// lwz r9,12(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8261C248:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8261c248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261C248;
loc_8261C25C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8261c214
	if (ctx.cr6.lt) goto loc_8261C214;
loc_8261C270:
	// addi r3,r31,3540
	ctx.r3.s64 = ctx.r31.s64 + 3540;
	// addi r4,r30,3540
	ctx.r4.s64 = ctx.r30.s64 + 3540;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8261C280;
	sub_82A4EA80(ctx, base);
	// lwz r11,3564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// lwz r11,3568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3568);
	// stw r11,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r11.u32);
	// lwz r11,3572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3572);
	// stw r11,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r11.u32);
	// lwz r11,3576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3576);
	// stw r11,3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3576, ctx.r11.u32);
	// lwz r11,3580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3580);
	// stw r11,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r11.u32);
	// lfs f0,3584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// lwz r11,3588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3588);
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
	// lwz r11,3592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3592);
	// stw r11,3592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3592, ctx.r11.u32);
	// lfs f0,3596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
	// lfs f0,3600(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3600, temp.u32);
	// lwz r11,3604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3604);
	// stw r11,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r11.u32);
	// lwz r11,3608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3608);
	// stw r11,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r11.u32);
	// lwz r11,3612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3612);
	// stw r11,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r11.u32);
	// lwz r11,3616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3616);
	// stw r11,3616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3616, ctx.r11.u32);
	// lwz r11,3620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3620);
	// stw r11,3620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3620, ctx.r11.u32);
	// lwz r11,3624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3624);
	// stw r11,3624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3624, ctx.r11.u32);
	// lwz r11,3628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3628);
	// stw r11,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r11.u32);
	// lfs f0,3632(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3632, temp.u32);
	// lwz r11,3636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3636);
	// stw r11,3636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3636, ctx.r11.u32);
	// lwz r11,3640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3640);
	// stw r11,3640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3640, ctx.r11.u32);
	// lwz r11,3644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3644);
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// lfs f0,3648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// lfs f0,3652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// lfs f0,3656(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// lwz r11,3660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3660);
	// stw r11,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r11.u32);
	// lfs f0,3664(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// lwz r11,3668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3668);
	// stw r11,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r11.u32);
	// lwz r11,3672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3672);
	// stw r11,3672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3672, ctx.r11.u32);
	// lfs f0,3676(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C378"))) PPC_WEAK_FUNC(sub_8261C378);
PPC_FUNC_IMPL(__imp__sub_8261C378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8261e1b8
	ctx.lr = 0x8261C398;
	sub_8261E1B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261c3a8
	if (ctx.cr0.eq) goto loc_8261C3A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8261C3A8;
	sub_82332DB8(ctx, base);
loc_8261C3A8:
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

__attribute__((alias("__imp__sub_8261C3C8"))) PPC_WEAK_FUNC(sub_8261C3C8);
PPC_FUNC_IMPL(__imp__sub_8261C3C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,2640
	ctx.r3.s64 = ctx.r11.s64 + 2640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C3D8"))) PPC_WEAK_FUNC(sub_8261C3D8);
PPC_FUNC_IMPL(__imp__sub_8261C3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8261c410
	if (ctx.cr6.eq) goto loc_8261C410;
	// bl 0x82643130
	ctx.lr = 0x8261C400;
	sub_82643130(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261c410
	if (!ctx.cr6.eq) goto loc_8261C410;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261c428
	goto loc_8261C428;
loc_8261C410:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233ef58
	ctx.lr = 0x8261C428;
	sub_8233EF58(ctx, base);
loc_8261C428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C440"))) PPC_WEAK_FUNC(sub_8261C440);
PPC_FUNC_IMPL(__imp__sub_8261C440) {
	PPC_FUNC_PROLOGUE();
	// b 0x82643130
	sub_82643130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C448"))) PPC_WEAK_FUNC(sub_8261C448);
PPC_FUNC_IMPL(__imp__sub_8261C448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8261C464;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261c47c
	if (ctx.cr0.eq) goto loc_8261C47C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x8261c508
	ctx.lr = 0x8261C478;
	sub_8261C508(ctx, base);
	// b 0x8261c480
	goto loc_8261C480;
loc_8261C47C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261C480:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261c494
	if (ctx.cr6.eq) goto loc_8261C494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8261C494:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C4A8"))) PPC_WEAK_FUNC(sub_8261C4A8);
PPC_FUNC_IMPL(__imp__sub_8261C4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82643130
	ctx.lr = 0x8261C4C8;
	sub_82643130(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8261c4d8
	if (!ctx.cr6.eq) goto loc_8261C4D8;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x8261c4f0
	goto loc_8261C4F0;
loc_8261C4D8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8233f028
	ctx.lr = 0x8261C4F0;
	sub_8233F028(ctx, base);
loc_8261C4F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C508"))) PPC_WEAK_FUNC(sub_8261C508);
PPC_FUNC_IMPL(__imp__sub_8261C508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-6888
	ctx.r11.s64 = ctx.r11.s64 + -6888;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r9,r9,10412
	ctx.r9.s64 = ctx.r9.s64 + 10412;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r8,-10732
	ctx.r11.s64 = ctx.r8.s64 + -10732;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r10,r7,-17796
	ctx.r10.s64 = ctx.r7.s64 + -17796;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// bne cr6,0x8261c574
	if (!ctx.cr6.eq) goto loc_8261C574;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261c580
	goto loc_8261C580;
loc_8261C574:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8261C580:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x8261C588;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c598
	if (!ctx.cr6.eq) goto loc_8261C598;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261c5a4
	goto loc_8261C5A4;
loc_8261C598:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8261C5A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82404460
	ctx.lr = 0x8261C5B0;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c5c0
	if (!ctx.cr6.eq) goto loc_8261C5C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261c5cc
	goto loc_8261C5CC;
loc_8261C5C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8261C5CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82400bf8
	ctx.lr = 0x8261C5D8;
	sub_82400BF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c5e8
	if (!ctx.cr6.eq) goto loc_8261C5E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261c5f4
	goto loc_8261C5F4;
loc_8261C5E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8261C5F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x8233a7d0
	ctx.lr = 0x8261C600;
	sub_8233A7D0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261c610
	if (!ctx.cr6.eq) goto loc_8261C610;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8261c61c
	goto loc_8261C61C;
loc_8261C610:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8261C61C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8233f648
	ctx.lr = 0x8261C628;
	sub_8233F648(ctx, base);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261C6C0"))) PPC_WEAK_FUNC(sub_8261C6C0);
PPC_FUNC_IMPL(__imp__sub_8261C6C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C6D8;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C6DC;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261c6f0
	if (ctx.cr0.eq) goto loc_8261C6F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8261c6fc
	goto loc_8261C6FC;
loc_8261C6F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1528);
loc_8261C6FC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C704;
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

__attribute__((alias("__imp__sub_8261C718"))) PPC_WEAK_FUNC(sub_8261C718);
PPC_FUNC_IMPL(__imp__sub_8261C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261C720;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261C738;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C73C;
	sub_82643690(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq 0x8261c764
	if (ctx.cr0.eq) goto loc_8261C764;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x8261c770
	goto loc_8261C770;
loc_8261C764:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1536);
loc_8261C770:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C780"))) PPC_WEAK_FUNC(sub_8261C780);
PPC_FUNC_IMPL(__imp__sub_8261C780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261C788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261C7A4;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C7A8;
	sub_82643690(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq 0x8261c7d4
	if (ctx.cr0.eq) goto loc_8261C7D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x8261c7e0
	goto loc_8261C7E0;
loc_8261C7D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
loc_8261C7E0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261C7F0"))) PPC_WEAK_FUNC(sub_8261C7F0);
PPC_FUNC_IMPL(__imp__sub_8261C7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C810;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C814;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261c82c
	if (ctx.cr0.eq) goto loc_8261C82C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x8261c838
	goto loc_8261C838;
loc_8261C82C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
loc_8261C838:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C840;
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

__attribute__((alias("__imp__sub_8261C858"))) PPC_WEAK_FUNC(sub_8261C858);
PPC_FUNC_IMPL(__imp__sub_8261C858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C878;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C87C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261c894
	if (ctx.cr0.eq) goto loc_8261C894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x8261c8a0
	goto loc_8261C8A0;
loc_8261C894:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
loc_8261C8A0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C8A8;
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

__attribute__((alias("__imp__sub_8261C8C0"))) PPC_WEAK_FUNC(sub_8261C8C0);
PPC_FUNC_IMPL(__imp__sub_8261C8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C8E0;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C8E4;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261c8fc
	if (ctx.cr0.eq) goto loc_8261C8FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x8261c908
	goto loc_8261C908;
loc_8261C8FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
loc_8261C908:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C910;
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

__attribute__((alias("__imp__sub_8261C928"))) PPC_WEAK_FUNC(sub_8261C928);
PPC_FUNC_IMPL(__imp__sub_8261C928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C948;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C94C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261c964
	if (ctx.cr0.eq) goto loc_8261C964;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// b 0x8261c970
	goto loc_8261C970;
loc_8261C964:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1592);
loc_8261C970:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C978;
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

__attribute__((alias("__imp__sub_8261C990"))) PPC_WEAK_FUNC(sub_8261C990);
PPC_FUNC_IMPL(__imp__sub_8261C990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261C9B0;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261C9B4;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261c9cc
	if (ctx.cr0.eq) goto loc_8261C9CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// b 0x8261c9d8
	goto loc_8261C9D8;
loc_8261C9CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1596);
loc_8261C9D8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C9E0;
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

__attribute__((alias("__imp__sub_8261C9F8"))) PPC_WEAK_FUNC(sub_8261C9F8);
PPC_FUNC_IMPL(__imp__sub_8261C9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261CA18;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261CA1C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261ca34
	if (ctx.cr0.eq) goto loc_8261CA34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// b 0x8261ca40
	goto loc_8261CA40;
loc_8261CA34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
loc_8261CA40:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CA48;
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

__attribute__((alias("__imp__sub_8261CA60"))) PPC_WEAK_FUNC(sub_8261CA60);
PPC_FUNC_IMPL(__imp__sub_8261CA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x8261CA78;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261CA7C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261ca90
	if (ctx.cr0.eq) goto loc_8261CA90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// b 0x8261ca9c
	goto loc_8261CA9C;
loc_8261CA90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
loc_8261CA9C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CAA4;
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

__attribute__((alias("__imp__sub_8261CAB8"))) PPC_WEAK_FUNC(sub_8261CAB8);
PPC_FUNC_IMPL(__imp__sub_8261CAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x8261CAD0;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261CAD4;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261cae8
	if (ctx.cr0.eq) goto loc_8261CAE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x8261caf4
	goto loc_8261CAF4;
loc_8261CAE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
loc_8261CAF4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CAFC;
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

__attribute__((alias("__imp__sub_8261CB10"))) PPC_WEAK_FUNC(sub_8261CB10);
PPC_FUNC_IMPL(__imp__sub_8261CB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x8261CB28;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261CB2C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261cb40
	if (ctx.cr0.eq) goto loc_8261CB40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x8261cb4c
	goto loc_8261CB4C;
loc_8261CB40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
loc_8261CB4C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CB54;
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

__attribute__((alias("__imp__sub_8261CB68"))) PPC_WEAK_FUNC(sub_8261CB68);
PPC_FUNC_IMPL(__imp__sub_8261CB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x8261CB88;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261CB8C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261cba4
	if (ctx.cr0.eq) goto loc_8261CBA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x8261cbb0
	goto loc_8261CBB0;
loc_8261CBA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
loc_8261CBB0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261CBB8;
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

__attribute__((alias("__imp__sub_8261CBD0"))) PPC_WEAK_FUNC(sub_8261CBD0);
PPC_FUNC_IMPL(__imp__sub_8261CBD0) {
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
	// addi r31,r11,-21256
	ctx.r31.s64 = ctx.r11.s64 + -21256;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8261CC08;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261cc34
	if (ctx.cr0.eq) goto loc_8261CC34;
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
loc_8261CC34:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8261cc58
	if (ctx.cr6.eq) goto loc_8261CC58;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x8261CC58;
	sub_82332C38(ctx, base);
loc_8261CC58:
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

__attribute__((alias("__imp__sub_8261CC70"))) PPC_WEAK_FUNC(sub_8261CC70);
PPC_FUNC_IMPL(__imp__sub_8261CC70) {
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
	// addi r11,r11,-21256
	ctx.r11.s64 = ctx.r11.s64 + -21256;
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
	// ble cr6,0x8261ccdc
	if (!ctx.cr6.gt) goto loc_8261CCDC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8261CCAC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8261cccc
	if (ctx.cr6.eq) goto loc_8261CCCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261ccac
	if (ctx.cr6.lt) goto loc_8261CCAC;
	// b 0x8261ccdc
	goto loc_8261CCDC;
loc_8261CCCC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8261CCDC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261cd04
	if (ctx.cr6.eq) goto loc_8261CD04;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8261CCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261cd08
	goto loc_8261CD08;
loc_8261CD04:
	// bl 0x82648610
	ctx.lr = 0x8261CD08;
	sub_82648610(ctx, base);
loc_8261CD08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CD18"))) PPC_WEAK_FUNC(sub_8261CD18);
PPC_FUNC_IMPL(__imp__sub_8261CD18) {
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
	// addi r11,r11,-21256
	ctx.r11.s64 = ctx.r11.s64 + -21256;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8261cd78
	if (!ctx.cr6.gt) goto loc_8261CD78;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8261CD44:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8261cd64
	if (ctx.cr6.eq) goto loc_8261CD64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261cd44
	if (ctx.cr6.lt) goto loc_8261CD44;
	// b 0x8261cd78
	goto loc_8261CD78;
loc_8261CD64:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261cd80
	if (!ctx.cr6.eq) goto loc_8261CD80;
loc_8261CD78:
	// bl 0x826486b8
	ctx.lr = 0x8261CD7C;
	sub_826486B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8261CD80:
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

__attribute__((alias("__imp__sub_8261CD98"))) PPC_WEAK_FUNC(sub_8261CD98);
PPC_FUNC_IMPL(__imp__sub_8261CD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21256
	ctx.r11.s64 = ctx.r11.s64 + -21256;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8261ce18
	if (!ctx.cr6.gt) goto loc_8261CE18;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8261CDD4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8261cdf4
	if (ctx.cr6.eq) goto loc_8261CDF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8261cdd4
	if (ctx.cr6.lt) goto loc_8261CDD4;
	// b 0x8261ce18
	goto loc_8261CE18;
loc_8261CDF4:
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
	ctx.lr = 0x8261CE10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8261ce24
	if (!ctx.cr0.eq) goto loc_8261CE24;
loc_8261CE18:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82648738
	ctx.lr = 0x8261CE24;
	sub_82648738(ctx, base);
loc_8261CE24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261CE40"))) PPC_WEAK_FUNC(sub_8261CE40);
PPC_FUNC_IMPL(__imp__sub_8261CE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8261CE48;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c1898
	ctx.lr = 0x8261CE60;
	sub_828C1898(ctx, base);
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r8,r8,9436
	ctx.r8.s64 = ctx.r8.s64 + 9436;
	// stw r30,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r30.u32);
	// stw r10,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r10.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r30,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r30.u32);
	// addi r11,r11,7688
	ctx.r11.s64 = ctx.r11.s64 + 7688;
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// addi r7,r9,9384
	ctx.r7.s64 = ctx.r9.s64 + 9384;
	// stw r30,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r30.u32);
	// addi r19,r31,1976
	ctx.r19.s64 = ctx.r31.s64 + 1976;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r20,r31,1928
	ctx.r20.s64 = ctx.r31.s64 + 1928;
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// lfs f30,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_8261CEBC:
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f30,16(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f30,24(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bge 0x8261cebc
	if (!ctx.cr0.lt) goto loc_8261CEBC;
	// li r16,4
	ctx.r16.s64 = 4;
	// stw r30,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r30.u32);
	// stw r30,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r16,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r16.u32);
	// addi r3,r31,3184
	ctx.r3.s64 = ctx.r31.s64 + 3184;
	// stw r30,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r30.u32);
	// addi r29,r31,2816
	ctx.r29.s64 = ctx.r31.s64 + 2816;
	// stw r30,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r30.u32);
	// addi r28,r31,2840
	ctx.r28.s64 = ctx.r31.s64 + 2840;
	// stw r30,2816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2816, ctx.r30.u32);
	// addi r27,r31,2864
	ctx.r27.s64 = ctx.r31.s64 + 2864;
	// stw r16,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r16.u32);
	// addi r25,r31,2888
	ctx.r25.s64 = ctx.r31.s64 + 2888;
	// stw r30,2848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2848, ctx.r30.u32);
	// addi r24,r31,2912
	ctx.r24.s64 = ctx.r31.s64 + 2912;
	// stw r30,2852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2852, ctx.r30.u32);
	// addi r22,r31,2936
	ctx.r22.s64 = ctx.r31.s64 + 2936;
	// stw r30,2856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2856, ctx.r30.u32);
	// addi r21,r31,2960
	ctx.r21.s64 = ctx.r31.s64 + 2960;
	// stw r30,2860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2860, ctx.r30.u32);
	// addi r23,r31,3092
	ctx.r23.s64 = ctx.r31.s64 + 3092;
	// stw r30,2840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2840, ctx.r30.u32);
	// stw r16,2868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2868, ctx.r16.u32);
	// stw r30,2872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2872, ctx.r30.u32);
	// stw r30,2876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2876, ctx.r30.u32);
	// stw r30,2880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2880, ctx.r30.u32);
	// stw r30,2884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2884, ctx.r30.u32);
	// stw r30,2864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2864, ctx.r30.u32);
	// stw r16,2892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2892, ctx.r16.u32);
	// stw r30,2896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2896, ctx.r30.u32);
	// stw r30,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r30.u32);
	// stw r30,2904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2904, ctx.r30.u32);
	// stw r30,2908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2908, ctx.r30.u32);
	// stw r30,2888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2888, ctx.r30.u32);
	// stw r16,2916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2916, ctx.r16.u32);
	// stw r30,2920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2920, ctx.r30.u32);
	// stw r30,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r30.u32);
	// stw r30,2928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2928, ctx.r30.u32);
	// stw r30,2932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2932, ctx.r30.u32);
	// stw r30,2912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2912, ctx.r30.u32);
	// stw r16,2940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2940, ctx.r16.u32);
	// stw r30,2944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2944, ctx.r30.u32);
	// stw r30,2948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2948, ctx.r30.u32);
	// stw r30,2952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2952, ctx.r30.u32);
	// stw r30,2956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2956, ctx.r30.u32);
	// stw r30,2936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2936, ctx.r30.u32);
	// stw r16,2964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2964, ctx.r16.u32);
	// stw r30,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r30.u32);
	// stw r30,2972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2972, ctx.r30.u32);
	// stw r30,2976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2976, ctx.r30.u32);
	// stw r30,2980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2980, ctx.r30.u32);
	// stw r30,2960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2960, ctx.r30.u32);
	// stw r11,3036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3036, ctx.r11.u32);
	// stw r30,3040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3040, ctx.r30.u32);
	// stw r30,3044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3044, ctx.r30.u32);
	// stw r11,3048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3048, ctx.r11.u32);
	// stw r30,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r30.u32);
	// stw r30,3056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3056, ctx.r30.u32);
	// stw r10,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r10.u32);
	// stw r30,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r30.u32);
	// stw r30,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r30.u32);
	// stw r30,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r30.u32);
	// stw r30,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r30.u32);
	// stw r30,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r30.u32);
	// stw r16,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r16.u32);
	// stw r30,3152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3152, ctx.r30.u32);
	// stw r30,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r30.u32);
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
	// stw r30,3164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3164, ctx.r30.u32);
	// stw r30,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r30.u32);
	// bl 0x826459a8
	ctx.lr = 0x8261D004;
	sub_826459A8(ctx, base);
	// addi r3,r31,3220
	ctx.r3.s64 = ctx.r31.s64 + 3220;
	// bl 0x826459a8
	ctx.lr = 0x8261D00C;
	sub_826459A8(ctx, base);
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x826459a8
	ctx.lr = 0x8261D014;
	sub_826459A8(ctx, base);
	// addi r3,r31,3292
	ctx.r3.s64 = ctx.r31.s64 + 3292;
	// bl 0x826459a8
	ctx.lr = 0x8261D01C;
	sub_826459A8(ctx, base);
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x826459a8
	ctx.lr = 0x8261D024;
	sub_826459A8(ctx, base);
	// addi r3,r31,3364
	ctx.r3.s64 = ctx.r31.s64 + 3364;
	// bl 0x826459a8
	ctx.lr = 0x8261D02C;
	sub_826459A8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r16,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r16.u32);
	// addi r14,r11,30356
	ctx.r14.s64 = ctx.r11.s64 + 30356;
	// stw r30,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r30.u32);
	// stw r30,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r30.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r30,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r30.u32);
	// li r15,1
	ctx.r15.s64 = 1;
	// stw r10,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r10.u32);
	// lfs f0,20240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20240);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3476, ctx.r30.u32);
	// lfs f13,-32488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32488);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r30.u32);
	// lfs f31,-5632(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -5632);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r30.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r30.u32);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// stw r30,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r30.u32);
	// addi r18,r11,7896
	ctx.r18.s64 = ctx.r11.s64 + 7896;
	// stw r10,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r10.u32);
	// addi r26,r31,3492
	ctx.r26.s64 = ctx.r31.s64 + 3492;
	// stw r30,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r30.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// stw r30,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r30.u32);
	// stw r30,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r30.u32);
	// stw r30,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r30.u32);
	// stw r30,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r30.u32);
	// stw r8,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r8.u32);
	// stw r30,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r30.u32);
	// stw r30,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r30.u32);
	// stw r30,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r30.u32);
	// stw r30,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r30.u32);
	// stw r30,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r30.u32);
	// stfs f30,3584(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// stfs f0,2736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2736, temp.u32);
	// stw r30,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r30.u32);
	// stfs f31,2656(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2656, temp.u32);
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// stfs f13,2740(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2740, temp.u32);
	// stw r30,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r30.u32);
	// stw r30,3628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3628, ctx.r30.u32);
	// stw r30,3592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3592, ctx.r30.u32);
	// stw r30,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// stw r30,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r30.u32);
	// stw r15,2720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2720, ctx.r15.u32);
	// stw r15,2652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2652, ctx.r15.u32);
	// stw r15,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r15.u32);
	// stw r14,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r14.u32);
	// bl 0x824099b8
	ctx.lr = 0x8261D108;
	sub_824099B8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824099b8
	ctx.lr = 0x8261D114;
	sub_824099B8(ctx, base);
	// lis r17,-31949
	ctx.r17.s64 = -2093809664;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r15,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r15.u32);
	// stw r15,2696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2696, ctx.r15.u32);
	// addi r18,r11,25304
	ctx.r18.s64 = ctx.r11.s64 + 25304;
	// stw r15,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r15.u32);
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d15c
	if (ctx.cr6.eq) goto loc_8261D15C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,2928
	ctx.r5.s64 = ctx.r11.s64 + 2928;
	// addi r6,r31,2748
	ctx.r6.s64 = ctx.r31.s64 + 2748;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D15C;
	sub_828C5740(ctx, base);
loc_8261D15C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d18c
	if (ctx.cr6.eq) goto loc_8261D18C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,2968
	ctx.r5.s64 = ctx.r11.s64 + 2968;
	// addi r6,r31,2756
	ctx.r6.s64 = ctx.r31.s64 + 2756;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D18C;
	sub_828C5740(ctx, base);
loc_8261D18C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d1bc
	if (ctx.cr6.eq) goto loc_8261D1BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3008
	ctx.r5.s64 = ctx.r11.s64 + 3008;
	// addi r6,r31,2752
	ctx.r6.s64 = ctx.r31.s64 + 2752;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D1BC;
	sub_828C5740(ctx, base);
loc_8261D1BC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d1ec
	if (ctx.cr6.eq) goto loc_8261D1EC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3052
	ctx.r5.s64 = ctx.r11.s64 + 3052;
	// addi r6,r31,2760
	ctx.r6.s64 = ctx.r31.s64 + 2760;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D1EC;
	sub_828C5740(ctx, base);
loc_8261D1EC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d21c
	if (ctx.cr6.eq) goto loc_8261D21C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3096
	ctx.r5.s64 = ctx.r11.s64 + 3096;
	// addi r6,r31,2800
	ctx.r6.s64 = ctx.r31.s64 + 2800;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D21C;
	sub_828C5740(ctx, base);
loc_8261D21C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d24c
	if (ctx.cr6.eq) goto loc_8261D24C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3140
	ctx.r5.s64 = ctx.r11.s64 + 3140;
	// addi r6,r31,2804
	ctx.r6.s64 = ctx.r31.s64 + 2804;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D24C;
	sub_828C5740(ctx, base);
loc_8261D24C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d27c
	if (ctx.cr6.eq) goto loc_8261D27C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3196
	ctx.r5.s64 = ctx.r11.s64 + 3196;
	// addi r6,r31,2808
	ctx.r6.s64 = ctx.r31.s64 + 2808;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D27C;
	sub_828C5740(ctx, base);
loc_8261D27C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d2ac
	if (ctx.cr6.eq) goto loc_8261D2AC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3240
	ctx.r5.s64 = ctx.r11.s64 + 3240;
	// addi r6,r31,2812
	ctx.r6.s64 = ctx.r31.s64 + 2812;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D2AC;
	sub_828C5740(ctx, base);
loc_8261D2AC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d2dc
	if (ctx.cr6.eq) goto loc_8261D2DC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3292
	ctx.r5.s64 = ctx.r11.s64 + 3292;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D2DC;
	sub_828C58B0(ctx, base);
loc_8261D2DC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d30c
	if (ctx.cr6.eq) goto loc_8261D30C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3332
	ctx.r5.s64 = ctx.r11.s64 + 3332;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D30C;
	sub_828C58B0(ctx, base);
loc_8261D30C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d33c
	if (ctx.cr6.eq) goto loc_8261D33C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3376
	ctx.r5.s64 = ctx.r11.s64 + 3376;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D33C;
	sub_828C58B0(ctx, base);
loc_8261D33C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d36c
	if (ctx.cr6.eq) goto loc_8261D36C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3420
	ctx.r5.s64 = ctx.r11.s64 + 3420;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D36C;
	sub_828C58B0(ctx, base);
loc_8261D36C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d39c
	if (ctx.cr6.eq) goto loc_8261D39C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3472
	ctx.r5.s64 = ctx.r11.s64 + 3472;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D39C;
	sub_828C58B0(ctx, base);
loc_8261D39C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d3cc
	if (ctx.cr6.eq) goto loc_8261D3CC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3528
	ctx.r5.s64 = ctx.r11.s64 + 3528;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c59f8
	ctx.lr = 0x8261D3CC;
	sub_828C59F8(ctx, base);
loc_8261D3CC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d3fc
	if (ctx.cr6.eq) goto loc_8261D3FC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3604
	ctx.r5.s64 = ctx.r11.s64 + 3604;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8261D3FC;
	sub_828C58B0(ctx, base);
loc_8261D3FC:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d42c
	if (ctx.cr6.eq) goto loc_8261D42C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3660
	ctx.r5.s64 = ctx.r11.s64 + 3660;
	// addi r6,r31,2984
	ctx.r6.s64 = ctx.r31.s64 + 2984;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D42C;
	sub_828C5740(ctx, base);
loc_8261D42C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d45c
	if (ctx.cr6.eq) goto loc_8261D45C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3708
	ctx.r5.s64 = ctx.r11.s64 + 3708;
	// addi r6,r31,2988
	ctx.r6.s64 = ctx.r31.s64 + 2988;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D45C;
	sub_828C5740(ctx, base);
loc_8261D45C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d48c
	if (ctx.cr6.eq) goto loc_8261D48C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3760
	ctx.r5.s64 = ctx.r11.s64 + 3760;
	// addi r6,r31,3596
	ctx.r6.s64 = ctx.r31.s64 + 3596;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D48C;
	sub_828C5740(ctx, base);
loc_8261D48C:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d4bc
	if (ctx.cr6.eq) goto loc_8261D4BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3800
	ctx.r5.s64 = ctx.r11.s64 + 3800;
	// addi r6,r31,3600
	ctx.r6.s64 = ctx.r31.s64 + 3600;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D4BC;
	sub_828C5740(ctx, base);
loc_8261D4BC:
	// lfs f0,3596(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3596);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lfs f29,-9940(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + -9940);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
	// stfs f0,3596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3596, temp.u32);
loc_8261D4D4:
	// lwz r11,2948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,2828(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2828);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r8,2876(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2876);
	// lwz r7,2900(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2900);
	// lwz r6,2924(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2924);
	// lwz r14,2972(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2972);
	// lfsx f0,r26,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lfsx f13,r9,r26
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r7,r26
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r26,r6
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r26,r14
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r14.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8261D538;
	sub_82A4EA80(ctx, base);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r19,r19,28
	ctx.r19.s64 = ctx.r19.s64 + 28;
	// cmpwi cr6,r26,80
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 80, ctx.xer);
	// blt cr6,0x8261d4d4
	if (ctx.cr6.lt) goto loc_8261D4D4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d56c
	if (ctx.cr6.eq) goto loc_8261D56C;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D56C;
	sub_82332C38(ctx, base);
loc_8261D56C:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d590
	if (ctx.cr6.eq) goto loc_8261D590;
	// stw r30,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D590;
	sub_82332C38(ctx, base);
loc_8261D590:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d5b4
	if (ctx.cr6.eq) goto loc_8261D5B4;
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D5B4;
	sub_82332C38(ctx, base);
loc_8261D5B4:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r30,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d5d8
	if (ctx.cr6.eq) goto loc_8261D5D8;
	// stw r30,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D5D8;
	sub_82332C38(ctx, base);
loc_8261D5D8:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r30,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d5fc
	if (ctx.cr6.eq) goto loc_8261D5FC;
	// stw r30,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D5FC;
	sub_82332C38(ctx, base);
loc_8261D5FC:
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// stw r30,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d620
	if (ctx.cr6.eq) goto loc_8261D620;
	// stw r30,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D620;
	sub_82332C38(ctx, base);
loc_8261D620:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// stw r30,16(r21)
	PPC_STORE_U32(ctx.r21.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261d644
	if (ctx.cr6.eq) goto loc_8261D644;
	// stw r30,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D644;
	sub_82332C38(ctx, base);
loc_8261D644:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// addi r29,r31,3400
	ctx.r29.s64 = ctx.r31.s64 + 3400;
	// lfs f0,20236(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3404, temp.u32);
	// stfs f13,3400(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3400, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d690
	if (ctx.cr6.eq) goto loc_8261D690;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3840
	ctx.r5.s64 = ctx.r11.s64 + 3840;
	// addi r6,r31,2764
	ctx.r6.s64 = ctx.r31.s64 + 2764;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D690;
	sub_828C5740(ctx, base);
loc_8261D690:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d6c0
	if (ctx.cr6.eq) goto loc_8261D6C0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3892
	ctx.r5.s64 = ctx.r11.s64 + 3892;
	// addi r6,r31,2768
	ctx.r6.s64 = ctx.r31.s64 + 2768;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D6C0;
	sub_828C5740(ctx, base);
loc_8261D6C0:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d6f0
	if (ctx.cr6.eq) goto loc_8261D6F0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3936
	ctx.r5.s64 = ctx.r11.s64 + 3936;
	// addi r6,r31,2772
	ctx.r6.s64 = ctx.r31.s64 + 2772;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D6F0;
	sub_828C5740(ctx, base);
loc_8261D6F0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,2772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f30,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfd f12,16376(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16376);
	// lfd f0,16368(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16368);
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,2772(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2772, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d754
	if (ctx.cr6.eq) goto loc_8261D754;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,3972
	ctx.r5.s64 = ctx.r11.s64 + 3972;
	// addi r6,r31,2780
	ctx.r6.s64 = ctx.r31.s64 + 2780;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D754;
	sub_828C5740(ctx, base);
loc_8261D754:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d784
	if (ctx.cr6.eq) goto loc_8261D784;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,4020
	ctx.r5.s64 = ctx.r11.s64 + 4020;
	// addi r6,r31,2784
	ctx.r6.s64 = ctx.r31.s64 + 2784;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D784;
	sub_828C5740(ctx, base);
loc_8261D784:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d7b4
	if (ctx.cr6.eq) goto loc_8261D7B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,4072
	ctx.r5.s64 = ctx.r11.s64 + 4072;
	// addi r6,r31,2788
	ctx.r6.s64 = ctx.r31.s64 + 2788;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D7B4;
	sub_828C5740(ctx, base);
loc_8261D7B4:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d7e4
	if (ctx.cr6.eq) goto loc_8261D7E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,4128
	ctx.r5.s64 = ctx.r11.s64 + 4128;
	// addi r6,r31,2792
	ctx.r6.s64 = ctx.r31.s64 + 2792;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D7E4;
	sub_828C5740(ctx, base);
loc_8261D7E4:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d814
	if (ctx.cr6.eq) goto loc_8261D814;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,4176
	ctx.r5.s64 = ctx.r11.s64 + 4176;
	// addi r6,r31,2796
	ctx.r6.s64 = ctx.r31.s64 + 2796;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D814;
	sub_828C5740(ctx, base);
loc_8261D814:
	// lwz r11,13024(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8261d844
	if (ctx.cr6.eq) goto loc_8261D844;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r5,r11,4228
	ctx.r5.s64 = ctx.r11.s64 + 4228;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8261D844;
	sub_828C5740(ctx, base);
loc_8261D844:
	// lis r11,3228
	ctx.r11.s64 = 211550208;
	// stw r30,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r30.u32);
	// lis r9,2853
	ctx.r9.s64 = 186974208;
	// ori r11,r11,49064
	ctx.r11.u64 = ctx.r11.u64 | 49064;
	// lis r8,2451
	ctx.r8.s64 = 160628736;
	// stw r11,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r11.u32);
	// ori r9,r9,42802
	ctx.r9.u64 = ctx.r9.u64 | 42802;
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// lis r10,-9878
	ctx.r10.s64 = -647364608;
	// stw r11,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r11.u32);
	// lis r11,-19025
	ctx.r11.s64 = -1246822400;
	// lis r7,-10425
	ctx.r7.s64 = -683212800;
	// stw r9,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r9.u32);
	// ori r11,r11,54752
	ctx.r11.u64 = ctx.r11.u64 | 54752;
	// ori r8,r8,18007
	ctx.r8.u64 = ctx.r8.u64 | 18007;
	// ori r10,r10,65061
	ctx.r10.u64 = ctx.r10.u64 | 65061;
	// stw r11,2564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2564, ctx.r11.u32);
	// ori r9,r7,62562
	ctx.r9.u64 = ctx.r7.u64 | 62562;
	// stw r8,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r8.u32);
	// stw r10,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r10.u32);
	// lis r6,-16727
	ctx.r6.s64 = -1096220672;
	// stw r9,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r9.u32);
	// lis r5,13091
	ctx.r5.s64 = 857931776;
	// stw r10,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r10.u32);
	// ori r8,r6,27158
	ctx.r8.u64 = ctx.r6.u64 | 27158;
	// ori r11,r5,14151
	ctx.r11.u64 = ctx.r5.u64 | 14151;
	// lis r4,-28368
	ctx.r4.s64 = -1859125248;
	// stw r8,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r8.u32);
	// lis r3,30443
	ctx.r3.s64 = 1995112448;
	// stw r11,2576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2576, ctx.r11.u32);
	// lis r29,3607
	ctx.r29.s64 = 236388352;
	// lis r28,-14477
	ctx.r28.s64 = -948764672;
	// ori r9,r4,8459
	ctx.r9.u64 = ctx.r4.u64 | 8459;
	// ori r8,r3,14332
	ctx.r8.u64 = ctx.r3.u64 | 14332;
	// ori r11,r29,62538
	ctx.r11.u64 = ctx.r29.u64 | 62538;
	// stw r9,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r9.u32);
	// ori r10,r28,52638
	ctx.r10.u64 = ctx.r28.u64 | 52638;
	// stw r8,2600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2600, ctx.r8.u32);
	// lis r27,30528
	ctx.r27.s64 = 2000683008;
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// lis r26,22499
	ctx.r26.s64 = 1474494464;
	// stw r10,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r10.u32);
	// lis r25,-2280
	ctx.r25.s64 = -149422080;
	// lis r24,-31368
	ctx.r24.s64 = -2055733248;
	// ori r11,r25,17148
	ctx.r11.u64 = ctx.r25.u64 | 17148;
	// ori r9,r27,6927
	ctx.r9.u64 = ctx.r27.u64 | 6927;
	// ori r8,r26,63447
	ctx.r8.u64 = ctx.r26.u64 | 63447;
	// stw r11,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r11.u32);
	// ori r10,r24,63177
	ctx.r10.u64 = ctx.r24.u64 | 63177;
	// stw r9,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// stw r8,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r8.u32);
	// stw r10,2624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2624, ctx.r10.u32);
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// stw r30,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r30.u32);
	// beq cr6,0x8261d93c
	if (ctx.cr6.eq) goto loc_8261D93C;
	// li r11,23
	ctx.r11.s64 = 23;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261D93C;
	sub_82332C38(ctx, base);
loc_8261D93C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332d50
	ctx.lr = 0x8261D950;
	sub_82332D50(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r11,11960
	ctx.r3.s64 = ctx.r11.s64 + 11960;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8261D970;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x8261D980;
	sub_824CACF0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4260
	ctx.r3.s64 = ctx.r11.s64 + 4260;
	// bl 0x82816528
	ctx.lr = 0x8261D98C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x824cacf0
	ctx.lr = 0x8261D99C;
	sub_824CACF0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x82816528
	ctx.lr = 0x8261D9A8;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824cacf0
	ctx.lr = 0x8261D9B8;
	sub_824CACF0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4296
	ctx.r3.s64 = ctx.r11.s64 + 4296;
	// bl 0x82816528
	ctx.lr = 0x8261D9C4;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824cacf0
	ctx.lr = 0x8261D9D4;
	sub_824CACF0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,12196
	ctx.r3.s64 = ctx.r11.s64 + 12196;
	// bl 0x82816528
	ctx.lr = 0x8261D9E0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824cacf0
	ctx.lr = 0x8261D9F0;
	sub_824CACF0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4340
	ctx.r3.s64 = ctx.r11.s64 + 4340;
	// lwz r28,3104(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DA00;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r23,r11,4364
	ctx.r23.s64 = ctx.r11.s64 + 4364;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DA14;
	sub_82816528(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r22,r11,4376
	ctx.r22.s64 = ctx.r11.s64 + 4376;
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,3104(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DA38;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r21,r11,4396
	ctx.r21.s64 = ctx.r11.s64 + 4396;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DA4C;
	sub_82816528(ctx, base);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r3,r11,4408
	ctx.r3.s64 = ctx.r11.s64 + 4408;
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DA6C;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,17216
	ctx.r29.s64 = ctx.r11.s64 + 17216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DA80;
	sub_82816528(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r3,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r3.u32);
	// stw r24,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r24.u32);
	// addi r3,r11,4424
	ctx.r3.s64 = ctx.r11.s64 + 4424;
	// stw r28,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r28.u32);
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DAA0;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DAAC;
	sub_82816528(ctx, base);
	// stw r3,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r3.u32);
	// stw r26,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r26.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r24,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r24.u32);
	// addi r3,r11,4448
	ctx.r3.s64 = ctx.r11.s64 + 4448;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DAC8;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r19,r11,4468
	ctx.r19.s64 = ctx.r11.s64 + 4468;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DADC;
	sub_82816528(ctx, base);
	// stw r3,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r3.u32);
	// stw r27,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r27.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r24,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r24.u32);
	// addi r3,r11,4480
	ctx.r3.s64 = ctx.r11.s64 + 4480;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DAF8;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DB04;
	sub_82816528(ctx, base);
	// stw r3,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r3.u32);
	// stw r28,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r24,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r24.u32);
	// addi r3,r11,4496
	ctx.r3.s64 = ctx.r11.s64 + 4496;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DB20;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DB2C;
	sub_82816528(ctx, base);
	// stw r3,72(r25)
	PPC_STORE_U32(ctx.r25.u32 + 72, ctx.r3.u32);
	// stw r26,76(r25)
	PPC_STORE_U32(ctx.r25.u32 + 76, ctx.r26.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r24,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r24.u32);
	// addi r3,r11,4520
	ctx.r3.s64 = ctx.r11.s64 + 4520;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DB48;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DB54;
	sub_82816528(ctx, base);
	// stw r3,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r3.u32);
	// stw r24,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r26,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r26.u32);
	// addi r3,r11,4544
	ctx.r3.s64 = ctx.r11.s64 + 4544;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DB70;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DB7C;
	sub_82816528(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,100(r26)
	PPC_STORE_U32(ctx.r26.u32 + 100, ctx.r28.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// stw r25,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r25.u32);
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DB98;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DBA4;
	sub_82816528(ctx, base);
	// stw r3,108(r26)
	PPC_STORE_U32(ctx.r26.u32 + 108, ctx.r3.u32);
	// stw r25,116(r26)
	PPC_STORE_U32(ctx.r26.u32 + 116, ctx.r25.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r27.u32);
	// addi r3,r11,4564
	ctx.r3.s64 = ctx.r11.s64 + 4564;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DBC0;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DBCC;
	sub_82816528(ctx, base);
	// stw r25,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r25.u32);
	// stw r3,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r28.u32);
	// addi r3,r11,4584
	ctx.r3.s64 = ctx.r11.s64 + 4584;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DBE8;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r22,r11,4604
	ctx.r22.s64 = ctx.r11.s64 + 4604;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DBFC;
	sub_82816528(ctx, base);
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r3,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r24,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r24.u32);
	// addi r3,r11,4620
	ctx.r3.s64 = ctx.r11.s64 + 4620;
	// stw r26,136(r25)
	PPC_STORE_U32(ctx.r25.u32 + 136, ctx.r26.u32);
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DC1C;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DC28;
	sub_82816528(ctx, base);
	// stw r3,144(r25)
	PPC_STORE_U32(ctx.r25.u32 + 144, ctx.r3.u32);
	// stw r24,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r26,148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 148, ctx.r26.u32);
	// addi r3,r11,4640
	ctx.r3.s64 = ctx.r11.s64 + 4640;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DC44;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DC50;
	sub_82816528(ctx, base);
	// stw r3,156(r25)
	PPC_STORE_U32(ctx.r25.u32 + 156, ctx.r3.u32);
	// stw r26,160(r25)
	PPC_STORE_U32(ctx.r25.u32 + 160, ctx.r26.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r24,164(r25)
	PPC_STORE_U32(ctx.r25.u32 + 164, ctx.r24.u32);
	// addi r3,r11,14072
	ctx.r3.s64 = ctx.r11.s64 + 14072;
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DC6C;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DC78;
	sub_82816528(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,168(r25)
	PPC_STORE_U32(ctx.r25.u32 + 168, ctx.r3.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r24,176(r25)
	PPC_STORE_U32(ctx.r25.u32 + 176, ctx.r24.u32);
	// addi r3,r11,13012
	ctx.r3.s64 = ctx.r11.s64 + 13012;
	// stw r23,172(r25)
	PPC_STORE_U32(ctx.r25.u32 + 172, ctx.r23.u32);
	// lwz r25,3104(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DC98;
	sub_82816528(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DCA4;
	sub_82816528(ctx, base);
	// stw r24,188(r25)
	PPC_STORE_U32(ctx.r25.u32 + 188, ctx.r24.u32);
	// stw r3,180(r25)
	PPC_STORE_U32(ctx.r25.u32 + 180, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r26,184(r25)
	PPC_STORE_U32(ctx.r25.u32 + 184, ctx.r26.u32);
	// addi r3,r11,4660
	ctx.r3.s64 = ctx.r11.s64 + 4660;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DCC0;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DCCC;
	sub_82816528(ctx, base);
	// stw r3,192(r26)
	PPC_STORE_U32(ctx.r26.u32 + 192, ctx.r3.u32);
	// stw r25,200(r26)
	PPC_STORE_U32(ctx.r26.u32 + 200, ctx.r25.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r28,196(r26)
	PPC_STORE_U32(ctx.r26.u32 + 196, ctx.r28.u32);
	// addi r3,r11,13932
	ctx.r3.s64 = ctx.r11.s64 + 13932;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DCE8;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DCF4;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r3,204(r26)
	PPC_STORE_U32(ctx.r26.u32 + 204, ctx.r3.u32);
	// stw r23,208(r26)
	PPC_STORE_U32(ctx.r26.u32 + 208, ctx.r23.u32);
	// addi r3,r11,4680
	ctx.r3.s64 = ctx.r11.s64 + 4680;
	// stw r25,212(r26)
	PPC_STORE_U32(ctx.r26.u32 + 212, ctx.r25.u32);
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DD10;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DD1C;
	sub_82816528(ctx, base);
	// stw r3,216(r26)
	PPC_STORE_U32(ctx.r26.u32 + 216, ctx.r3.u32);
	// stw r25,224(r26)
	PPC_STORE_U32(ctx.r26.u32 + 224, ctx.r25.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,220(r26)
	PPC_STORE_U32(ctx.r26.u32 + 220, ctx.r27.u32);
	// addi r3,r11,4700
	ctx.r3.s64 = ctx.r11.s64 + 4700;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DD38;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DD44;
	sub_82816528(ctx, base);
	// stw r3,228(r26)
	PPC_STORE_U32(ctx.r26.u32 + 228, ctx.r3.u32);
	// stw r27,232(r26)
	PPC_STORE_U32(ctx.r26.u32 + 232, ctx.r27.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r25,236(r26)
	PPC_STORE_U32(ctx.r26.u32 + 236, ctx.r25.u32);
	// addi r3,r11,4720
	ctx.r3.s64 = ctx.r11.s64 + 4720;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DD60;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DD6C;
	sub_82816528(ctx, base);
	// stw r3,240(r26)
	PPC_STORE_U32(ctx.r26.u32 + 240, ctx.r3.u32);
	// stw r25,248(r26)
	PPC_STORE_U32(ctx.r26.u32 + 248, ctx.r25.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,244(r26)
	PPC_STORE_U32(ctx.r26.u32 + 244, ctx.r27.u32);
	// addi r3,r11,4744
	ctx.r3.s64 = ctx.r11.s64 + 4744;
	// lwz r26,3104(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DD88;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DD94;
	sub_82816528(ctx, base);
	// stw r3,252(r26)
	PPC_STORE_U32(ctx.r26.u32 + 252, ctx.r3.u32);
	// stw r25,260(r26)
	PPC_STORE_U32(ctx.r26.u32 + 260, ctx.r25.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,256(r26)
	PPC_STORE_U32(ctx.r26.u32 + 256, ctx.r27.u32);
	// addi r3,r11,4768
	ctx.r3.s64 = ctx.r11.s64 + 4768;
	// lwz r27,3104(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3104);
	// bl 0x82816528
	ctx.lr = 0x8261DDB0;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DDBC;
	sub_82816528(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r3,264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 264, ctx.r3.u32);
	// stw r28,268(r27)
	PPC_STORE_U32(ctx.r27.u32 + 268, ctx.r28.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r26,272(r27)
	PPC_STORE_U32(ctx.r27.u32 + 272, ctx.r26.u32);
	// stw r10,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r10.u32);
	// stw r9,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r9.u32);
	// stw r11,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r11.u32);
	// stw r30,16(r20)
	PPC_STORE_U32(ctx.r20.u32 + 16, ctx.r30.u32);
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8261de04
	if (ctx.cr6.eq) goto loc_8261DE04;
	// stw r16,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332c38
	ctx.lr = 0x8261DE04;
	sub_82332C38(ctx, base);
loc_8261DE04:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4788
	ctx.r3.s64 = ctx.r11.s64 + 4788;
	// bl 0x82816528
	ctx.lr = 0x8261DE10;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DE1C;
	sub_82816528(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cac78
	ctx.lr = 0x8261DE34;
	sub_824CAC78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4808
	ctx.r3.s64 = ctx.r11.s64 + 4808;
	// bl 0x82816528
	ctx.lr = 0x8261DE40;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DE4C;
	sub_82816528(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cac78
	ctx.lr = 0x8261DE64;
	sub_824CAC78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4832
	ctx.r3.s64 = ctx.r11.s64 + 4832;
	// bl 0x82816528
	ctx.lr = 0x8261DE70;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DE7C;
	sub_82816528(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cac78
	ctx.lr = 0x8261DE94;
	sub_824CAC78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4856
	ctx.r3.s64 = ctx.r11.s64 + 4856;
	// bl 0x82816528
	ctx.lr = 0x8261DEA0;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261DEAC;
	sub_82816528(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x824cac78
	ctx.lr = 0x8261DEC4;
	sub_824CAC78(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,3072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3072, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,3080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3080, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,3196
	ctx.r3.s64 = ctx.r31.s64 + 3196;
	// bl 0x82332d50
	ctx.lr = 0x8261DEE8;
	sub_82332D50(ctx, base);
	// lwz r9,3208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r26,2
	ctx.r26.s64 = 2;
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,50
	ctx.r10.s64 = 50;
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f30,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stb r26,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r26.u8);
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// lfs f0,23724(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 23724);
	ctx.f0.f64 = double(temp.f32);
	// stb r26,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r26.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3232
	ctx.r3.s64 = ctx.r31.s64 + 3232;
	// lwz r11,3208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// stb r26,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r26.u8);
	// stb r26,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r26.u8);
	// stw r30,3228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3228, ctx.r30.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261DF44;
	sub_82332D50(ctx, base);
	// li r27,5
	ctx.r27.s64 = 5;
	// lwz r11,3244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// li r28,30
	ctx.r28.s64 = 30;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3268
	ctx.r3.s64 = ctx.r31.s64 + 3268;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stw r30,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r30.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261DF7C;
	sub_82332D50(ctx, base);
	// lwz r9,3280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// li r11,35
	ctx.r11.s64 = 35;
	// lfs f0,-9960(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -9960);
	ctx.f0.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// stb r10,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r30,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r30.u8);
	// addi r3,r31,3304
	ctx.r3.s64 = ctx.r31.s64 + 3304;
	// stb r30,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r30.u8);
	// stw r30,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r30.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261DFB8;
	sub_82332D50(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r29,75
	ctx.r29.s64 = 75;
	// li r10,25
	ctx.r10.s64 = 25;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3340
	ctx.r3.s64 = ctx.r31.s64 + 3340;
	// lwz r11,3316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// lwz r11,3316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// stb r26,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r26.u8);
	// stb r30,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r30.u8);
	// stw r15,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r15.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261E014;
	sub_82332D50(ctx, base);
	// lwz r11,3352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,3376
	ctx.r3.s64 = ctx.r31.s64 + 3376;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// stb r28,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r28.u8);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stw r15,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r15.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261E044;
	sub_82332D50(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,3388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3388);
	// stfs f29,4(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r30.u8);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r30.u8);
	// stfs f0,3648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3648, temp.u32);
	// stfs f0,3652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3652, temp.u32);
	// stw r11,3660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3660, ctx.r11.u32);
	// stfs f0,3656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3656, temp.u32);
	// stw r11,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r11.u32);
	// stfs f0,3664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3664, temp.u32);
	// stw r30,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r30.u32);
	// stfs f0,3676(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// stw r30,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r30.u32);
	// stw r15,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r15.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-176(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261E0B0"))) PPC_WEAK_FUNC(sub_8261E0B0);
PPC_FUNC_IMPL(__imp__sub_8261E0B0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// bl 0x826487e0
	ctx.lr = 0x8261E0D4;
	sub_826487E0(ctx, base);
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8261E0DC;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e0f0
	if (ctx.cr0.eq) goto loc_8261E0F0;
	// bl 0x825ead80
	ctx.lr = 0x8261E0EC;
	sub_825EAD80(ctx, base);
	// b 0x8261e0f4
	goto loc_8261E0F4;
loc_8261E0F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8261E0F4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r3.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
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
	ctx.lr = 0x8261E154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261e170
	if (ctx.cr0.eq) goto loc_8261E170;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261e170
	if (ctx.cr6.eq) goto loc_8261E170;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8261E170:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-29496
	ctx.r3.s64 = ctx.r11.s64 + -29496;
	// bl 0x82816528
	ctx.lr = 0x8261E17C;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-19780
	ctx.r3.s64 = ctx.r11.s64 + -19780;
	// bl 0x82816528
	ctx.lr = 0x8261E18C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8261E19C;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_8261E1B8"))) PPC_WEAK_FUNC(sub_8261E1B8);
PPC_FUNC_IMPL(__imp__sub_8261E1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261E1C0;
	__savegprlr_29(ctx, base);
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
	// addi r11,r11,7688
	ctx.r11.s64 = ctx.r11.s64 + 7688;
	// addi r10,r10,9384
	ctx.r10.s64 = ctx.r10.s64 + 9384;
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r29,r31,3516
	ctx.r29.s64 = ctx.r31.s64 + 3516;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,3532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3532);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8261E208;
	sub_82332CA8(ctx, base);
	// lwz r3,3528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261e218
	if (ctx.cr6.eq) goto loc_8261E218;
	// bl 0x82332db8
	ctx.lr = 0x8261E218;
	sub_82332DB8(ctx, base);
loc_8261E218:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,3492
	ctx.r3.s64 = ctx.r31.s64 + 3492;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x82333960
	ctx.lr = 0x8261E230;
	sub_82333960(ctx, base);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// bl 0x82333960
	ctx.lr = 0x8261E238;
	sub_82333960(ctx, base);
	// addi r29,r31,3444
	ctx.r29.s64 = ctx.r31.s64 + 3444;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,3460(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8261E254;
	sub_82332CA8(ctx, base);
	// lwz r3,3456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261e264
	if (ctx.cr6.eq) goto loc_8261E264;
	// bl 0x82332db8
	ctx.lr = 0x8261E264;
	sub_82332DB8(ctx, base);
loc_8261E264:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r3,r31,3364
	ctx.r3.s64 = ctx.r31.s64 + 3364;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x82645cb0
	ctx.lr = 0x8261E278;
	sub_82645CB0(ctx, base);
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x82645cb0
	ctx.lr = 0x8261E280;
	sub_82645CB0(ctx, base);
	// addi r3,r31,3292
	ctx.r3.s64 = ctx.r31.s64 + 3292;
	// bl 0x82645cb0
	ctx.lr = 0x8261E288;
	sub_82645CB0(ctx, base);
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x82645cb0
	ctx.lr = 0x8261E290;
	sub_82645CB0(ctx, base);
	// addi r3,r31,3220
	ctx.r3.s64 = ctx.r31.s64 + 3220;
	// bl 0x82645cb0
	ctx.lr = 0x8261E298;
	sub_82645CB0(ctx, base);
	// addi r3,r31,3184
	ctx.r3.s64 = ctx.r31.s64 + 3184;
	// bl 0x82645cb0
	ctx.lr = 0x8261E2A0;
	sub_82645CB0(ctx, base);
	// addi r29,r31,3144
	ctx.r29.s64 = ctx.r31.s64 + 3144;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,3160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8261E2BC;
	sub_82332CA8(ctx, base);
	// lwz r3,3156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261e2cc
	if (ctx.cr6.eq) goto loc_8261E2CC;
	// bl 0x82332db8
	ctx.lr = 0x8261E2CC;
	sub_82332DB8(ctx, base);
loc_8261E2CC:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r3,r31,3092
	ctx.r3.s64 = ctx.r31.s64 + 3092;
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// bl 0x82400f38
	ctx.lr = 0x8261E2E0;
	sub_82400F38(ctx, base);
	// addi r3,r31,2960
	ctx.r3.s64 = ctx.r31.s64 + 2960;
	// bl 0x8239d768
	ctx.lr = 0x8261E2E8;
	sub_8239D768(ctx, base);
	// addi r3,r31,2936
	ctx.r3.s64 = ctx.r31.s64 + 2936;
	// bl 0x8239d768
	ctx.lr = 0x8261E2F0;
	sub_8239D768(ctx, base);
	// addi r3,r31,2912
	ctx.r3.s64 = ctx.r31.s64 + 2912;
	// bl 0x8239d768
	ctx.lr = 0x8261E2F8;
	sub_8239D768(ctx, base);
	// addi r3,r31,2888
	ctx.r3.s64 = ctx.r31.s64 + 2888;
	// bl 0x8239d768
	ctx.lr = 0x8261E300;
	sub_8239D768(ctx, base);
	// addi r3,r31,2864
	ctx.r3.s64 = ctx.r31.s64 + 2864;
	// bl 0x8239d768
	ctx.lr = 0x8261E308;
	sub_8239D768(ctx, base);
	// addi r3,r31,2840
	ctx.r3.s64 = ctx.r31.s64 + 2840;
	// bl 0x8239d768
	ctx.lr = 0x8261E310;
	sub_8239D768(ctx, base);
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x8239d768
	ctx.lr = 0x8261E318;
	sub_8239D768(ctx, base);
	// addi r3,r31,1928
	ctx.r3.s64 = ctx.r31.s64 + 1928;
	// bl 0x82400f38
	ctx.lr = 0x8261E320;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c1d50
	ctx.lr = 0x8261E328;
	sub_828C1D50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261E330"))) PPC_WEAK_FUNC(sub_8261E330);
PPC_FUNC_IMPL(__imp__sub_8261E330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8261E338;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826490b0
	ctx.lr = 0x8261E350;
	sub_826490B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E364;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261e3e0
	if (ctx.cr0.eq) goto loc_8261E3E0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8261e3e0
	if (!ctx.cr6.eq) goto loc_8261E3E0;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261e3e0
	if (ctx.cr6.eq) goto loc_8261E3E0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8261e3e0
	if (ctx.cr0.eq) goto loc_8261E3E0;
	// lwz r5,7220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// lwz r4,7216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7216);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826cdfe8
	ctx.lr = 0x8261E3B0;
	sub_826CDFE8(ctx, base);
	// lwz r9,5584(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// li r11,11760
	ctx.r11.s64 = 11760;
	// addi r10,r30,-6168
	ctx.r10.s64 = ctx.r30.s64 + -6168;
	// stw r9,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r9.u32);
	// lwz r9,5588(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// stw r9,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r9.u32);
loc_8261E3C8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,1968(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,11768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11768, ctx.xer);
	// blt cr6,0x8261e3c8
	if (ctx.cr6.lt) goto loc_8261E3C8;
loc_8261E3E0:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8261e3fc
	if (ctx.cr6.eq) goto loc_8261E3FC;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8261e58c
	if (!ctx.cr6.eq) goto loc_8261E58C;
loc_8261E3FC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8261E404;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e424
	if (ctx.cr0.eq) goto loc_8261E424;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,9696
	ctx.r10.s64 = ctx.r10.s64 + 9696;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8261e428
	goto loc_8261E428;
loc_8261E424:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8261E428:
	// stw r11,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r11.u32);
	// li r3,216
	ctx.r3.s64 = 216;
	// bl 0x82333900
	ctx.lr = 0x8261E434;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e448
	if (ctx.cr0.eq) goto loc_8261E448;
	// bl 0x82640ff8
	ctx.lr = 0x8261E440;
	sub_82640FF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8261e44c
	goto loc_8261E44C;
loc_8261E448:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8261E44C:
	// stw r11,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r11.u32);
	// li r3,300
	ctx.r3.s64 = 300;
	// bl 0x82333900
	ctx.lr = 0x8261E458;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8261e47c
	if (ctx.cr0.eq) goto loc_8261E47C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82640ff8
	ctx.lr = 0x8261E468;
	sub_82640FF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,9816
	ctx.r11.s64 = ctx.r11.s64 + 9816;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8261b3b0
	ctx.lr = 0x8261E478;
	sub_8261B3B0(ctx, base);
	// b 0x8261e480
	goto loc_8261E480;
loc_8261E47C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8261E480:
	// stw r30,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r30.u32);
	// li r3,380
	ctx.r3.s64 = 380;
	// bl 0x82333900
	ctx.lr = 0x8261E48C;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8261e4b0
	if (ctx.cr0.eq) goto loc_8261E4B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82640ff8
	ctx.lr = 0x8261E49C;
	sub_82640FF8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r11,r11,9880
	ctx.r11.s64 = ctx.r11.s64 + 9880;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x826419a8
	ctx.lr = 0x8261E4AC;
	sub_826419A8(ctx, base);
	// b 0x8261e4b4
	goto loc_8261E4B4;
loc_8261E4B0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8261E4B4:
	// stw r30,3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3576, ctx.r30.u32);
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x82333900
	ctx.lr = 0x8261E4C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e4e0
	if (ctx.cr0.eq) goto loc_8261E4E0;
	// bl 0x82640ff8
	ctx.lr = 0x8261E4CC;
	sub_82640FF8(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,9944
	ctx.r10.s64 = ctx.r10.s64 + 9944;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8261e4e4
	goto loc_8261E4E4;
loc_8261E4E0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8261E4E4:
	// lwz r3,3568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3568);
	// stw r11,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3572);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3576);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r31,1564
	ctx.r30.s64 = ctx.r31.s64 + 1564;
	// lis r4,29772
	ctx.r4.s64 = 1951137792;
	// lwz r5,3568(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3568);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,15520
	ctx.r4.u64 = ctx.r4.u64 | 15520;
	// bl 0x828d0cb0
	ctx.lr = 0x8261E550;
	sub_828D0CB0(ctx, base);
	// lis r4,28060
	ctx.r4.s64 = 1838940160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,3572(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3572);
	// ori r4,r4,36747
	ctx.r4.u64 = ctx.r4.u64 | 36747;
	// bl 0x828d0cb0
	ctx.lr = 0x8261E564;
	sub_828D0CB0(ctx, base);
	// lis r4,-10174
	ctx.r4.s64 = -666763264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,3576(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3576);
	// ori r4,r4,54098
	ctx.r4.u64 = ctx.r4.u64 | 54098;
	// bl 0x828d0cb0
	ctx.lr = 0x8261E578;
	sub_828D0CB0(ctx, base);
	// lis r4,-4765
	ctx.r4.s64 = -312279040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,3580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// ori r4,r4,32809
	ctx.r4.u64 = ctx.r4.u64 | 32809;
	// bl 0x828d0cb0
	ctx.lr = 0x8261E58C;
	sub_828D0CB0(ctx, base);
loc_8261E58C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r28,r11,24724
	ctx.r28.s64 = ctx.r11.s64 + 24724;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8261e7cc
	if (ctx.cr6.eq) goto loc_8261E7CC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8261E5B0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e5d0
	if (ctx.cr0.eq) goto loc_8261E5D0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,12632
	ctx.r11.s64 = ctx.r11.s64 + 12632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8261e5d4
	goto loc_8261E5D4;
loc_8261E5D0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8261E5D4:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lfs f29,11520(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11520);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r9,2824
	ctx.r3.s64 = ctx.r9.s64 + 2824;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f30,23664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23664);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8261E60C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,4880
	ctx.r3.s64 = ctx.r11.s64 + 4880;
	// bl 0x82816528
	ctx.lr = 0x8261E61C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lfs f1,17328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17328);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8261E674;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e694
	if (ctx.cr0.eq) goto loc_8261E694;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,12676
	ctx.r11.s64 = ctx.r11.s64 + 12676;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8261e698
	goto loc_8261E698;
loc_8261E694:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8261E698:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,2872
	ctx.r3.s64 = ctx.r10.s64 + 2872;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8261E6AC;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,2852
	ctx.r3.s64 = ctx.r11.s64 + 2852;
	// bl 0x82816528
	ctx.lr = 0x8261E6BC;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r11,4904
	ctx.r3.s64 = ctx.r11.s64 + 4904;
	// bl 0x82816528
	ctx.lr = 0x8261E6CC;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,29396(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 29396);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r9,148(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,17116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17116);
	ctx.f3.f64 = double(temp.f32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8261E704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// bl 0x82332d50
	ctx.lr = 0x8261E734;
	sub_82332D50(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261e74c
	if (ctx.cr0.eq) goto loc_8261E74C;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8261E74C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332d50
	ctx.lr = 0x8261E760;
	sub_82332D50(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261e778
	if (ctx.cr0.eq) goto loc_8261E778;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8261E778:
	// lwz r11,1900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// addi r3,r10,2900
	ctx.r3.s64 = ctx.r10.s64 + 2900;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8261E790;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,4920
	ctx.r3.s64 = ctx.r11.s64 + 4920;
	// bl 0x82816528
	ctx.lr = 0x8261E7A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8239d768
	ctx.lr = 0x8261E7CC;
	sub_8239D768(ctx, base);
loc_8261E7CC:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8261e830
	if (!ctx.cr6.eq) goto loc_8261E830;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lfs f1,-4308(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4308);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-5776
	ctx.r11.s64 = ctx.r11.s64 + -5776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x826436e8
	ctx.lr = 0x8261E804;
	sub_826436E8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r11,r10,-5760
	ctx.r11.s64 = ctx.r10.s64 + -5760;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x826436e8
	ctx.lr = 0x8261E830;
	sub_826436E8(ctx, base);
loc_8261E830:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261e93c
	if (ctx.cr0.eq) goto loc_8261E93C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261E860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f0,17144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17144);
	ctx.f0.f64 = double(temp.f32);
	// li r3,44
	ctx.r3.s64 = 44;
	// lfs f13,17140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17136(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// bl 0x82833108
	ctx.lr = 0x8261E8B8;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// beq 0x8261e924
	if (ctx.cr0.eq) goto loc_8261E924;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8261e8dc
	if (ctx.cr0.eq) goto loc_8261E8DC;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8261e8e0
	goto loc_8261E8E0;
loc_8261E8DC:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8261E8E0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8261e8f0
	if (ctx.cr0.eq) goto loc_8261E8F0;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8261e8f4
	goto loc_8261E8F4;
loc_8261E8F0:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8261E8F4:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r25,r1,128
	ctx.r25.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,-29620
	ctx.r3.s64 = ctx.r11.s64 + -29620;
	// bl 0x82816528
	ctx.lr = 0x8261E904;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x824bdcb8
	ctx.lr = 0x8261E91C;
	sub_824BDCB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8261e928
	goto loc_8261E928;
loc_8261E924:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8261E928:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8261E934;
	sub_82833A30(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r27,8428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8428, ctx.r27.u32);
loc_8261E93C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_8261E950"))) PPC_WEAK_FUNC(sub_8261E950);
PPC_FUNC_IMPL(__imp__sub_8261E950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1968(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8260a590
	sub_8260A590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261E96C"))) PPC_WEAK_FUNC(sub_8261E96C);
PPC_FUNC_IMPL(__imp__sub_8261E96C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E970"))) PPC_WEAK_FUNC(sub_8261E970);
PPC_FUNC_IMPL(__imp__sub_8261E970) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3588, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E980"))) PPC_WEAK_FUNC(sub_8261E980);
PPC_FUNC_IMPL(__imp__sub_8261E980) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3592, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261E990"))) PPC_WEAK_FUNC(sub_8261E990);
PPC_FUNC_IMPL(__imp__sub_8261E990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8261E998;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,960(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8261e9bc
	if (ctx.cr6.lt) goto loc_8261E9BC;
	// lwz r11,956(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8261eab4
	if (!ctx.cr6.eq) goto loc_8261EAB4;
loc_8261E9BC:
	// addi r31,r28,1564
	ctx.r31.s64 = ctx.r28.s64 + 1564;
	// lis r4,29772
	ctx.r4.s64 = 1951137792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,15520
	ctx.r4.u64 = ctx.r4.u64 | 15520;
	// bl 0x828d0de0
	ctx.lr = 0x8261E9D0;
	sub_828D0DE0(ctx, base);
	// lis r4,28060
	ctx.r4.s64 = 1838940160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,36747
	ctx.r4.u64 = ctx.r4.u64 | 36747;
	// bl 0x828d0de0
	ctx.lr = 0x8261E9E0;
	sub_828D0DE0(ctx, base);
	// lis r4,-10174
	ctx.r4.s64 = -666763264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,54098
	ctx.r4.u64 = ctx.r4.u64 | 54098;
	// bl 0x828d0de0
	ctx.lr = 0x8261E9F0;
	sub_828D0DE0(ctx, base);
	// lis r4,-4765
	ctx.r4.s64 = -312279040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32809
	ctx.r4.u64 = ctx.r4.u64 | 32809;
	// bl 0x828d0de0
	ctx.lr = 0x8261EA00;
	sub_828D0DE0(ctx, base);
	// lwz r3,3564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ea24
	if (ctx.cr6.eq) goto loc_8261EA24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3564(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3564, ctx.r30.u32);
loc_8261EA24:
	// lwz r3,3568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ea48
	if (ctx.cr6.eq) goto loc_8261EA48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3568(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3568, ctx.r30.u32);
loc_8261EA48:
	// lwz r3,3572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ea6c
	if (ctx.cr6.eq) goto loc_8261EA6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EA68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3572(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3572, ctx.r30.u32);
loc_8261EA6C:
	// lwz r3,3576(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261ea90
	if (ctx.cr6.eq) goto loc_8261EA90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3576(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3576, ctx.r30.u32);
loc_8261EA90:
	// lwz r3,3580(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261eab4
	if (ctx.cr6.eq) goto loc_8261EAB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EAB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3580(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3580, ctx.r30.u32);
loc_8261EAB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263d268
	ctx.lr = 0x8261EABC;
	sub_8263D268(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8263f8e0
	ctx.lr = 0x8261EAC4;
	sub_8263F8E0(ctx, base);
	// lwz r11,3160(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3160);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8261eb08
	if (ctx.cr0.lt) goto loc_8261EB08;
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8261EAD4:
	// lwz r11,3156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3156);
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8261eaf4
	if (ctx.cr6.eq) goto loc_8261EAF4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82333960
	ctx.lr = 0x8261EAEC;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332db8
	ctx.lr = 0x8261EAF4;
	sub_82332DB8(ctx, base);
loc_8261EAF4:
	// lwz r11,3156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3156);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bge 0x8261ead4
	if (!ctx.cr0.lt) goto loc_8261EAD4;
loc_8261EB08:
	// lwz r11,3164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3164);
	// addi r3,r28,3144
	ctx.r3.s64 = ctx.r28.s64 + 3144;
	// stw r30,3160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3160, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261eb2c
	if (ctx.cr6.eq) goto loc_8261EB2C;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8261EB2C;
	sub_82332C38(ctx, base);
loc_8261EB2C:
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8261eb48
	if (ctx.cr6.eq) goto loc_8261EB48;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8261ec10
	if (!ctx.cr6.eq) goto loc_8261EC10;
loc_8261EB48:
	// lwz r31,860(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8261ec10
	if (ctx.cr6.eq) goto loc_8261EC10;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r26,r31,1408
	ctx.r26.s64 = ctx.r31.s64 + 1408;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EB6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8261ebb4
	if (ctx.cr0.lt) goto loc_8261EBB4;
	// mulli r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 * 28;
loc_8261EB7C:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8261eba8
	if (!ctx.cr6.eq) goto loc_8261EBA8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// bl 0x82332ca8
	ctx.lr = 0x8261EBA8;
	sub_82332CA8(ctx, base);
loc_8261EBA8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-28
	ctx.r27.s64 = ctx.r27.s64 + -28;
	// bge 0x8261eb7c
	if (!ctx.cr0.lt) goto loc_8261EB7C;
loc_8261EBB4:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8261ebfc
	if (ctx.cr0.lt) goto loc_8261EBFC;
	// mulli r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 * 28;
loc_8261EBC4:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8261ebf0
	if (!ctx.cr6.eq) goto loc_8261EBF0;
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
	ctx.lr = 0x8261EBF0;
	sub_82332CA8(ctx, base);
loc_8261EBF0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-28
	ctx.r27.s64 = ctx.r27.s64 + -28;
	// bge 0x8261ebc4
	if (!ctx.cr0.lt) goto loc_8261EBC4;
loc_8261EBFC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261EC10:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261edb4
	if (ctx.cr0.eq) goto loc_8261EDB4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x8261EC34;
	sub_82833108(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8261ec90
	if (ctx.cr0.eq) goto loc_8261EC90;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8261ec54
	if (ctx.cr0.eq) goto loc_8261EC54;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8261ec58
	goto loc_8261EC58;
loc_8261EC54:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8261EC58:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8261ec68
	if (ctx.cr0.eq) goto loc_8261EC68;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8261ec6c
	goto loc_8261EC6C;
loc_8261EC68:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8261EC6C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4940
	ctx.r3.s64 = ctx.r11.s64 + 4940;
	// bl 0x82816528
	ctx.lr = 0x8261EC78;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x826453a8
	ctx.lr = 0x8261EC8C;
	sub_826453A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261EC90:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,4976
	ctx.r3.s64 = ctx.r11.s64 + 4976;
	// bl 0x82816528
	ctx.lr = 0x8261EC9C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8261ECB0;
	sub_82410060(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// bl 0x82816528
	ctx.lr = 0x8261ECBC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ECCC;
	sub_82410060(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5044
	ctx.r3.s64 = ctx.r11.s64 + 5044;
	// bl 0x82816528
	ctx.lr = 0x8261ECD8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ECE8;
	sub_82410060(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,5080
	ctx.r3.s64 = ctx.r11.s64 + 5080;
	// bl 0x82816528
	ctx.lr = 0x8261ECF4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED04;
	sub_82410060(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r29,r11,31344
	ctx.r29.s64 = ctx.r11.s64 + 31344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED14;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED24;
	sub_82410060(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r27,r11,5112
	ctx.r27.s64 = ctx.r11.s64 + 5112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED34;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED44;
	sub_82410060(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED4C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED5C;
	sub_82410060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED64;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED74;
	sub_82410060(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED7C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8261ED8C;
	sub_82410060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8261ED94;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8261EDA4;
	sub_82410060(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8261EDB4;
	sub_82833A30(ctx, base);
loc_8261EDB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c1ae0
	ctx.lr = 0x8261EDBC;
	sub_828C1AE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261EDC8"))) PPC_WEAK_FUNC(sub_8261EDC8);
PPC_FUNC_IMPL(__imp__sub_8261EDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,453
	ctx.r4.s64 = 453;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EDF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,20957
	ctx.r4.s64 = 1373437952;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,20805
	ctx.r4.u64 = ctx.r4.u64 | 20805;
	// li r5,453
	ctx.r5.s64 = 453;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,454
	ctx.r4.s64 = 454;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EE2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,20957
	ctx.r4.s64 = 1373437952;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,454
	ctx.r5.s64 = 454;
	// ori r4,r4,20805
	ctx.r4.u64 = ctx.r4.u64 | 20805;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EE60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7220);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8261ee80
	if (!ctx.cr6.eq) goto loc_8261EE80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261EE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261EE98"))) PPC_WEAK_FUNC(sub_8261EE98);
PPC_FUNC_IMPL(__imp__sub_8261EE98) {
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
	ctx.lr = 0x8261EEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261efb0
	if (ctx.cr0.eq) goto loc_8261EFB0;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261efb0
	if (ctx.cr6.eq) goto loc_8261EFB0;
	// lwz r10,8500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8500);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8261ef40
	if (ctx.cr6.eq) goto loc_8261EF40;
	// lwz r10,1504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261ef40
	if (ctx.cr6.eq) goto loc_8261EF40;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ef40
	if (ctx.cr6.eq) goto loc_8261EF40;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8261efb0
	if (!ctx.cr6.eq) goto loc_8261EFB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8261efb0
	if (!ctx.cr6.eq) goto loc_8261EFB0;
	// lwz r11,3604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261ef30
	if (!ctx.cr6.eq) goto loc_8261EF30;
	// lwz r11,3180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ef30
	if (ctx.cr6.eq) goto loc_8261EF30;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r11.u32);
	// bl 0x8263f348
	ctx.lr = 0x8261EF30;
	sub_8263F348(ctx, base);
loc_8261EF30:
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r10.u32);
	// b 0x8261efb0
	goto loc_8261EFB0;
loc_8261EF40:
	// lwz r11,3604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3604);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261efa8
	if (ctx.cr6.eq) goto loc_8261EFA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r10.u32);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EF6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261efa8
	if (ctx.cr0.eq) goto loc_8261EFA8;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261efa8
	if (ctx.cr6.eq) goto loc_8261EFA8;
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
	ctx.lr = 0x8261EF98;
	sub_8263C538(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826cb2a8
	ctx.lr = 0x8261EFA4;
	sub_826CB2A8(ctx, base);
	// stw r30,3604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3604, ctx.r30.u32);
loc_8261EFA8:
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// stw r30,2752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2752, ctx.r30.u32);
loc_8261EFB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261EFC8"))) PPC_WEAK_FUNC(sub_8261EFC8);
PPC_FUNC_IMPL(__imp__sub_8261EFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8261EFD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261EFEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8261EFF0:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8261f03c
	if (ctx.cr6.lt) goto loc_8261F03C;
	// beq cr6,0x8261f030
	if (ctx.cr6.eq) goto loc_8261F030;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8261f044
	if (!ctx.cr6.lt) goto loc_8261F044;
	// lis r29,-31569
	ctx.r29.s64 = -2068905984;
	// ori r29,r29,52824
	ctx.r29.u64 = ctx.r29.u64 | 52824;
	// b 0x8261f044
	goto loc_8261F044;
loc_8261F030:
	// lis r29,-613
	ctx.r29.s64 = -40173568;
	// ori r29,r29,41588
	ctx.r29.u64 = ctx.r29.u64 | 41588;
	// b 0x8261f044
	goto loc_8261F044;
loc_8261F03C:
	// lis r29,10756
	ctx.r29.s64 = 704905216;
	// ori r29,r29,11797
	ctx.r29.u64 = ctx.r29.u64 | 11797;
loc_8261F044:
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1472(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,1468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1468);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8261eff0
	if (ctx.cr6.lt) goto loc_8261EFF0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261F090"))) PPC_WEAK_FUNC(sub_8261F090);
PPC_FUNC_IMPL(__imp__sub_8261F090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8261F098;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r3,r11,29820
	ctx.r3.s64 = ctx.r11.s64 + 29820;
	// bl 0x829e6d68
	ctx.lr = 0x8261F0AC;
	sub_829E6D68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x8261f114
	if (!ctx.cr6.gt) goto loc_8261F114;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,20712
	ctx.r28.s64 = ctx.r11.s64 + 20712;
loc_8261F0CC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829e4e20
	ctx.lr = 0x8261F0DC;
	sub_829E4E20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829e72e8
	ctx.lr = 0x8261F0E8;
	sub_829E72E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f0f8
	if (ctx.cr0.eq) goto loc_8261F0F8;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8261f0fc
	goto loc_8261F0FC;
loc_8261F0F8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8261F0FC:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8261f120
	if (ctx.cr6.eq) goto loc_8261F120;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8261f0cc
	if (ctx.cr6.lt) goto loc_8261F0CC;
loc_8261F114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261F118:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_8261F120:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x829e4e20
	ctx.lr = 0x8261F134;
	sub_829E4E20(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,26948
	ctx.r3.s64 = ctx.r11.s64 + 26948;
	// bl 0x829e72e8
	ctx.lr = 0x8261F144;
	sub_829E72E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f154
	if (ctx.cr0.eq) goto loc_8261F154;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8261f118
	goto loc_8261F118;
loc_8261F154:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8261f118
	goto loc_8261F118;
}

__attribute__((alias("__imp__sub_8261F160"))) PPC_WEAK_FUNC(sub_8261F160);
PPC_FUNC_IMPL(__imp__sub_8261F160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8261F168;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bgt cr6,0x8261f2b4
	if (ctx.cr6.gt) goto loc_8261F2B4;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31112
	ctx.r12.s64 = ctx.r12.s64 + -31112;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32158
	ctx.r12.s64 = -2107506688;
	// addi r12,r12,-3636
	ctx.r12.s64 = ctx.r12.s64 + -3636;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8261F1CC;
	case 1:
		goto loc_8261F204;
	case 2:
		goto loc_8261F210;
	case 3:
		goto loc_8261F21C;
	case 4:
		goto loc_8261F1CC;
	case 5:
		goto loc_8261F204;
	case 6:
		goto loc_8261F210;
	case 7:
		goto loc_8261F21C;
	case 8:
		goto loc_8261F228;
	case 9:
		goto loc_8261F260;
	case 10:
		goto loc_8261F27C;
	case 11:
		goto loc_8261F298;
	case 12:
		goto loc_8261F1CC;
	case 13:
		goto loc_8261F204;
	case 14:
		goto loc_8261F210;
	case 15:
		goto loc_8261F21C;
	case 16:
		goto loc_8261F1CC;
	case 17:
		goto loc_8261F204;
	case 18:
		goto loc_8261F210;
	case 19:
		goto loc_8261F21C;
	default:
		__builtin_unreachable();
	}
loc_8261F1CC:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-21304
	ctx.r11.s64 = ctx.r11.s64 + -21304;
loc_8261F1D4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
loc_8261F1FC:
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// b 0x8261f2bc
	goto loc_8261F2BC;
loc_8261F204:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-21292
	ctx.r11.s64 = ctx.r11.s64 + -21292;
	// b 0x8261f1d4
	goto loc_8261F1D4;
loc_8261F210:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-21280
	ctx.r11.s64 = ctx.r11.s64 + -21280;
	// b 0x8261f1d4
	goto loc_8261F1D4;
loc_8261F21C:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-21268
	ctx.r11.s64 = ctx.r11.s64 + -21268;
	// b 0x8261f1d4
	goto loc_8261F1D4;
loc_8261F228:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,-21280
	ctx.r9.s64 = ctx.r11.s64 + -21280;
	// addi r8,r10,-21268
	ctx.r8.s64 = ctx.r10.s64 + -21268;
	// lwz r11,-21280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21280);
	// lwz r10,-21268(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21268);
loc_8261F240:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// b 0x8261f1fc
	goto loc_8261F1FC;
loc_8261F260:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,-21268
	ctx.r9.s64 = ctx.r11.s64 + -21268;
	// addi r8,r10,-21280
	ctx.r8.s64 = ctx.r10.s64 + -21280;
	// lwz r11,-21268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21268);
	// lwz r10,-21280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21280);
	// b 0x8261f240
	goto loc_8261F240;
loc_8261F27C:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,-21292
	ctx.r9.s64 = ctx.r11.s64 + -21292;
	// addi r8,r10,-21304
	ctx.r8.s64 = ctx.r10.s64 + -21304;
	// lwz r11,-21292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21292);
	// lwz r10,-21304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21304);
	// b 0x8261f240
	goto loc_8261F240;
loc_8261F298:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,-21304
	ctx.r9.s64 = ctx.r11.s64 + -21304;
	// addi r8,r10,-21292
	ctx.r8.s64 = ctx.r10.s64 + -21292;
	// lwz r11,-21304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21304);
	// lwz r10,-21292(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21292);
	// b 0x8261f240
	goto loc_8261F240;
loc_8261F2B4:
	// lwz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8261F2BC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8261f5a0
	if (ctx.cr6.eq) goto loc_8261F5A0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8261f514
	if (ctx.cr6.eq) goto loc_8261F514;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8261f514
	if (ctx.cr6.eq) goto loc_8261F514;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8261f514
	if (ctx.cr6.eq) goto loc_8261F514;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8261f514
	if (ctx.cr6.eq) goto loc_8261F514;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,12
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 12, ctx.xer);
	// beq cr6,0x8261f484
	if (ctx.cr6.eq) goto loc_8261F484;
	// cmpwi cr6,r6,13
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 13, ctx.xer);
	// beq cr6,0x8261f3f4
	if (ctx.cr6.eq) goto loc_8261F3F4;
	// cmpwi cr6,r6,14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 14, ctx.xer);
	// beq cr6,0x8261f3f4
	if (ctx.cr6.eq) goto loc_8261F3F4;
	// cmpwi cr6,r6,15
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 15, ctx.xer);
	// beq cr6,0x8261f3f4
	if (ctx.cr6.eq) goto loc_8261F3F4;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// beq cr6,0x8261f3f4
	if (ctx.cr6.eq) goto loc_8261F3F4;
	// cmpwi cr6,r6,17
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 17, ctx.xer);
	// beq cr6,0x8261f364
	if (ctx.cr6.eq) goto loc_8261F364;
	// cmpwi cr6,r6,18
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 18, ctx.xer);
	// beq cr6,0x8261f364
	if (ctx.cr6.eq) goto loc_8261F364;
	// cmpwi cr6,r6,19
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 19, ctx.xer);
	// beq cr6,0x8261f364
	if (ctx.cr6.eq) goto loc_8261F364;
	// cmpwi cr6,r6,20
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20, ctx.xer);
	// bne cr6,0x8261f588
	if (!ctx.cr6.eq) goto loc_8261F588;
loc_8261F364:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8261F36C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f394
	if (ctx.cr0.eq) goto loc_8261F394;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9460
	ctx.r9.s64 = ctx.r11.s64 + 9460;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8261f398
	goto loc_8261F398;
loc_8261F394:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261F398:
	// lwz r3,1900(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r10,r10,20396
	ctx.r10.s64 = ctx.r10.s64 + 20396;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,9792
	ctx.r5.s64 = 641728512;
	// lfs f2,16852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16852);
	ctx.f2.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f3,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f3.f64 = double(temp.f32);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f4,17840(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17840);
	ctx.f4.f64 = double(temp.f32);
	// ori r5,r5,47710
	ctx.r5.u64 = ctx.r5.u64 | 47710;
	// lfs f1,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// li r6,2
	ctx.r6.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261f588
	goto loc_8261F588;
loc_8261F3F4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8261F3FC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f424
	if (ctx.cr0.eq) goto loc_8261F424;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9460
	ctx.r9.s64 = ctx.r11.s64 + 9460;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8261f428
	goto loc_8261F428;
loc_8261F424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261F428:
	// lwz r3,1900(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r10,r10,20396
	ctx.r10.s64 = ctx.r10.s64 + 20396;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,9792
	ctx.r5.s64 = 641728512;
	// lfs f2,17616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	ctx.f2.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f3,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f3.f64 = double(temp.f32);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f4,17840(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17840);
	ctx.f4.f64 = double(temp.f32);
	// ori r5,r5,47710
	ctx.r5.u64 = ctx.r5.u64 | 47710;
	// lfs f1,9852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9852);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// li r6,2
	ctx.r6.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261f588
	goto loc_8261F588;
loc_8261F484:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8261F48C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f4b4
	if (ctx.cr0.eq) goto loc_8261F4B4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9460
	ctx.r9.s64 = ctx.r11.s64 + 9460;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8261f4b8
	goto loc_8261F4B8;
loc_8261F4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261F4B8:
	// lwz r3,1900(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r5,9792
	ctx.r5.s64 = 641728512;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f4,17116(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,20396(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20396);
	ctx.f1.f64 = double(temp.f32);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfs f3,23664(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23664);
	ctx.f3.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// ori r5,r5,47710
	ctx.r5.u64 = ctx.r5.u64 | 47710;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261f588
	goto loc_8261F588;
loc_8261F514:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x8261F51C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f544
	if (ctx.cr0.eq) goto loc_8261F544;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9460
	ctx.r9.s64 = ctx.r11.s64 + 9460;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8261f548
	goto loc_8261F548;
loc_8261F544:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261F548:
	// lwz r3,1900(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r5,9792
	ctx.r5.s64 = 641728512;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,23664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23664);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f1.f64 = double(temp.f32);
	// ori r5,r5,47710
	ctx.r5.u64 = ctx.r5.u64 | 47710;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261F588:
	// lwz r3,1900(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1900);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261F5A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261F5A8"))) PPC_WEAK_FUNC(sub_8261F5A8);
PPC_FUNC_IMPL(__imp__sub_8261F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8261F5B0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8261f5f4
	if (!ctx.cr6.eq) goto loc_8261F5F4;
	// lfs f0,3584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8261f5f4
	if (!ctx.cr6.gt) goto loc_8261F5F4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,3584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
loc_8261F5F4:
	// lwz r11,1892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	// addi r4,r31,1596
	ctx.r4.s64 = ctx.r31.s64 + 1596;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x8261F618;
	sub_828191B8(ctx, base);
	// lwz r11,2536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2536);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r11,1472
	ctx.r3.s64 = ctx.r11.s64 + 1472;
	// bl 0x82a4ea80
	ctx.lr = 0x8261F62C;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826248c0
	ctx.lr = 0x8261F634;
	sub_826248C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261ee98
	ctx.lr = 0x8261F63C;
	sub_8261EE98(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f0,1128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8261f6ac
	if (!ctx.cr6.gt) goto loc_8261F6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8261fd28
	ctx.lr = 0x8261F658;
	sub_8261FD28(ctx, base);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261f6ac
	if (!ctx.cr6.eq) goto loc_8261F6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261F66C;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261F670;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261f684
	if (ctx.cr0.eq) goto loc_8261F684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x8261f690
	goto loc_8261F690;
loc_8261F684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
loc_8261F690:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f6ac
	if (ctx.cr6.eq) goto loc_8261F6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82620218
	ctx.lr = 0x8261F6AC;
	sub_82620218(ctx, base);
loc_8261F6AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261f6d8
	if (ctx.cr0.eq) goto loc_8261F6D8;
	// lfs f0,1672(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1672(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
	// b 0x8261f6dc
	goto loc_8261F6DC;
loc_8261F6D8:
	// stfs f30,1672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1672, temp.u32);
loc_8261F6DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261f708
	if (ctx.cr0.eq) goto loc_8261F708;
	// lfs f0,1668(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,1668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// b 0x8261f714
	goto loc_8261F714;
loc_8261F708:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f30,1668(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
loc_8261F714:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,3160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// stw r10,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r10.u32);
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// stw r10,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r10.u32);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// blt 0x8261f7b4
	if (ctx.cr0.lt) goto loc_8261F7B4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f30,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
loc_8261F748:
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// lwzx r30,r28,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8261f7a8
	if (!ctx.cr6.gt) goto loc_8261F7A8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8261f788
	if (ctx.cr0.eq) goto loc_8261F788;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x8261F780;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8261F788;
	sub_82332DB8(ctx, base);
loc_8261F788:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,3144
	ctx.r3.s64 = ctx.r31.s64 + 3144;
	// bl 0x82332ca8
	ctx.lr = 0x8261F7A0;
	sub_82332CA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3168, ctx.r11.u32);
loc_8261F7A8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// bge 0x8261f748
	if (!ctx.cr0.lt) goto loc_8261F748;
loc_8261F7B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,1924(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261f804
	if (ctx.cr0.eq) goto loc_8261F804;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f804
	if (ctx.cr6.eq) goto loc_8261F804;
	// lwz r11,2816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f804
	if (ctx.cr6.eq) goto loc_8261F804;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261f804
	if (ctx.cr6.eq) goto loc_8261F804;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8263c538
	ctx.lr = 0x8261F804;
	sub_8263C538(ctx, base);
loc_8261F804:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261F818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261F828"))) PPC_WEAK_FUNC(sub_8261F828);
PPC_FUNC_IMPL(__imp__sub_8261F828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8261F830;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8261f95c
	if (!ctx.cr6.gt) goto loc_8261F95C;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r28,3168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 3168, ctx.r28.u32);
	// bl 0x82333900
	ctx.lr = 0x8261F85C;
	sub_82333900(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x8261f8a8
	if (ctx.cr0.eq) goto loc_8261F8A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8261f8ac
	goto loc_8261F8AC;
loc_8261F8A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8261F8AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8261f8d4
	if (ctx.cr6.eq) goto loc_8261F8D4;
	// lwz r11,1968(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1968);
	// lfs f13,10580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8261f8d0
	if (ctx.cr6.gt) goto loc_8261F8D0;
	// lwz r11,11124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8261f8d4
	if (!ctx.cr6.gt) goto loc_8261F8D4;
loc_8261F8D0:
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
loc_8261F8D4:
	// addi r28,r27,3144
	ctx.r28.s64 = ctx.r27.s64 + 3144;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823327e0
	ctx.lr = 0x8261F8F0;
	sub_823327E0(ctx, base);
	// lwz r11,3156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261f900
	if (ctx.cr6.eq) goto loc_8261F900;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8261F900:
	// lwz r11,3160(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3160);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8261f95c
	if (ctx.cr0.lt) goto loc_8261F95C;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8261F910:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8261f950
	if (ctx.cr6.lt) goto loc_8261F950;
	// lwz r11,3156(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3156);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261f938
	if (ctx.cr6.eq) goto loc_8261F938;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x8261F930;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x8261F938;
	sub_82332DB8(ctx, base);
loc_8261F938:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8261F950;
	sub_82332CA8(ctx, base);
loc_8261F950:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x8261f910
	if (!ctx.cr0.lt) goto loc_8261F910;
loc_8261F95C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261F968"))) PPC_WEAK_FUNC(sub_8261F968);
PPC_FUNC_IMPL(__imp__sub_8261F968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8261F970;
	__savegprlr_18(ctx, base);
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f29.u64);
	// stfd f30,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r10,3168(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3168);
	// lwz r11,1924(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1924);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261fb94
	if (ctx.cr6.eq) goto loc_8261FB94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261fb94
	if (ctx.cr6.eq) goto loc_8261FB94;
	// lwz r11,2756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261fb94
	if (ctx.cr6.eq) goto loc_8261FB94;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32221
	ctx.r6.s64 = -2111635456;
	// lfs f29,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// lfs f30,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r23,r7,7896
	ctx.r23.s64 = ctx.r7.s64 + 7896;
	// addi r21,r6,25500
	ctx.r21.s64 = ctx.r6.s64 + 25500;
	// addi r25,r8,-21936
	ctx.r25.s64 = ctx.r8.s64 + -21936;
	// addi r29,r9,4420
	ctx.r29.s64 = ctx.r9.s64 + 4420;
	// addi r24,r10,-25772
	ctx.r24.s64 = ctx.r10.s64 + -25772;
	// addi r19,r11,5152
	ctx.r19.s64 = ctx.r11.s64 + 5152;
loc_8261FA00:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x8261FA10;
	sub_82816C30(ctx, base);
	// lwz r11,3160(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3160);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8261fb2c
	if (!ctx.cr6.lt) goto loc_8261FB2C;
	// lwz r11,3156(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3156);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lwzx r30,r11,r18
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82816c30
	ctx.lr = 0x8261FA50;
	sub_82816C30(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x8261FA5C;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x8261FA64;
	sub_82333960(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,1924(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1924);
	// bl 0x826cadd0
	ctx.lr = 0x8261FA78;
	sub_826CADD0(ctx, base);
	// lwz r11,1924(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1924);
	// lwz r10,3068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3068);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8261fac0
	if (!ctx.cr6.lt) goto loc_8261FAC0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261fa9c
	if (ctx.cr6.eq) goto loc_8261FA9C;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8261faa0
	goto loc_8261FAA0;
loc_8261FA9C:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_8261FAA0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r30,3064(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3064);
	// bl 0x82816528
	ctx.lr = 0x8261FAAC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwzx r3,r30,r18
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82983258
	ctx.lr = 0x8261FAC0;
	sub_82983258(ctx, base);
loc_8261FAC0:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261fad4
	if (!ctx.cr6.eq) goto loc_8261FAD4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8261FAD4:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261fae8
	if (!ctx.cr6.eq) goto loc_8261FAE8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8261FAE8:
	// bl 0x828165a8
	ctx.lr = 0x8261FAEC;
	sub_828165A8(ctx, base);
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x8242f7e8
	ctx.lr = 0x8261FB20;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8261FB28;
	sub_82333960(ctx, base);
	// b 0x8261fb78
	goto loc_8261FB78;
loc_8261FB2C:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261fb40
	if (!ctx.cr6.eq) goto loc_8261FB40;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8261FB40:
	// bl 0x828165a8
	ctx.lr = 0x8261FB44;
	sub_828165A8(ctx, base);
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r6,128
	ctx.r6.s64 = 128;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x8242f7e8
	ctx.lr = 0x8261FB78;
	sub_8242F7E8(ctx, base);
loc_8261FB78:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x8261FB80;
	sub_82333960(ctx, base);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r18,32
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 32, ctx.xer);
	// blt cr6,0x8261fa00
	if (ctx.cr6.lt) goto loc_8261FA00;
	// stw r31,3168(r20)
	PPC_STORE_U32(ctx.r20.u32 + 3168, ctx.r31.u32);
loc_8261FB94:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261FBA8"))) PPC_WEAK_FUNC(sub_8261FBA8);
PPC_FUNC_IMPL(__imp__sub_8261FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8261FBB0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x8261FBB8;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfs f28,912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f28.f64 = double(temp.f32);
	// addi r30,r10,27112
	ctx.r30.s64 = ctx.r10.s64 + 27112;
	// lfs f29,16356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16356);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r9,27100
	ctx.r29.s64 = ctx.r9.s64 + 27100;
	// lfs f31,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lwz r5,12584(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12584);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8261fc94
	if (ctx.cr6.eq) goto loc_8261FC94;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lfs f0,3676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3676);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6384);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f30,f13,f28
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8261fc20
	if (!ctx.cr6.eq) goto loc_8261FC20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8261fc94
	if (ctx.cr6.eq) goto loc_8261FC94;
loc_8261FC20:
	// stfs f30,3676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3676, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r28,1924(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lfs f0,19500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19508);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19504);
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
	// bl 0x82816528
	ctx.lr = 0x8261FC5C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,3092(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3092);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8261FC70;
	sub_829831F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f30,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// lwz r28,3092(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3092);
	// bl 0x82816528
	ctx.lr = 0x8261FC80;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82983258
	ctx.lr = 0x8261FC94;
	sub_82983258(ctx, base);
loc_8261FC94:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,12592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261fd14
	if (ctx.cr6.eq) goto loc_8261FD14;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r31,1924(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,12596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12596);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,12600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12600);
	ctx.f27.f64 = double(temp.f32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8261FCD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,3092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x8261FCE8;
	sub_829831F8(ctx, base);
	// fdivs f0,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f27.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fnmsubs f0,f0,f28,f28
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f28.f64 - ctx.f28.f64)));
	// lwz r31,3092(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// fmuls f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82816528
	ctx.lr = 0x8261FD00;
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
	// bl 0x82983258
	ctx.lr = 0x8261FD14;
	sub_82983258(ctx, base);
loc_8261FD14:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x8261FD20;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8261FD28"))) PPC_WEAK_FUNC(sub_8261FD28);
PPC_FUNC_IMPL(__imp__sub_8261FD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8261FD30;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,3640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261fd5c
	if (ctx.cr6.eq) goto loc_8261FD5C;
	// lis r30,16486
	ctx.r30.s64 = 1080426496;
	// ori r30,r30,56403
	ctx.r30.u64 = ctx.r30.u64 | 56403;
	// b 0x8261fd68
	goto loc_8261FD68;
loc_8261FD5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826245d0
	ctx.lr = 0x8261FD64;
	sub_826245D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261FD68:
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8261fe10
	if (ctx.cr0.eq) goto loc_8261FE10;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8261fe10
	if (!ctx.cr0.eq) goto loc_8261FE10;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261fe10
	if (!ctx.cr6.eq) goto loc_8261FE10;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261fdc0
	if (ctx.cr0.eq) goto loc_8261FDC0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8261fdc0
	if (ctx.cr6.eq) goto loc_8261FDC0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261fdc4
	goto loc_8261FDC4;
loc_8261FDC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8261FDC4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261fdd8
	if (ctx.cr6.eq) goto loc_8261FDD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826437e0
	ctx.lr = 0x8261FDD4;
	sub_826437E0(ctx, base);
	// b 0x8261fddc
	goto loc_8261FDDC;
loc_8261FDD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8261FDDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8261fe10
	if (ctx.cr6.eq) goto loc_8261FE10;
	// lwz r11,3128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261fdfc
	if (ctx.cr6.eq) goto loc_8261FDFC;
	// stfs f31,1668(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
	// stw r29,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r29.u32);
	// b 0x8261fe10
	goto loc_8261FE10;
loc_8261FDFC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r10.u32);
	// lfs f0,17616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1668, temp.u32);
loc_8261FE10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8261fe28
	if (ctx.cr6.eq) goto loc_8261FE28;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,2900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261fe5c
	if (ctx.cr6.eq) goto loc_8261FE5C;
loc_8261FE28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261FE30;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261FE34;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261fe48
	if (ctx.cr0.eq) goto loc_8261FE48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x8261fe54
	goto loc_8261FE54;
loc_8261FE48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
loc_8261FE54:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261FE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261FE5C:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,8500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261fe80
	if (ctx.cr6.eq) goto loc_8261FE80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261ff98
	if (!ctx.cr6.eq) goto loc_8261FF98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262ea08
	ctx.lr = 0x8261FE7C;
	sub_8262EA08(ctx, base);
	// b 0x8261ff7c
	goto loc_8261FF7C;
loc_8261FE80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261ff04
	if (!ctx.cr6.eq) goto loc_8261FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82620128
	ctx.lr = 0x8261FE90;
	sub_82620128(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8261ff04
	if (!ctx.cr0.eq) goto loc_8261FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261FEA0;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261FEA4;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261feb8
	if (ctx.cr0.eq) goto loc_8261FEB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x8261fec4
	goto loc_8261FEC4;
loc_8261FEB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
loc_8261FEC4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261FECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261ff04
	if (!ctx.cr6.eq) goto loc_8261FF04;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,8964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8964);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ff04
	if (ctx.cr6.eq) goto loc_8261FF04;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e8210
	ctx.lr = 0x8261FEF0;
	sub_825E8210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261ff04
	if (ctx.cr0.eq) goto loc_8261FF04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262e268
	ctx.lr = 0x8261FF00;
	sub_8262E268(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8261FF04:
	// lwz r5,1968(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,8960(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8960);
	// bne cr6,0x8261ff98
	if (!ctx.cr6.eq) goto loc_8261FF98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261ff88
	if (ctx.cr6.eq) goto loc_8261FF88;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8261ff88
	if (ctx.cr6.eq) goto loc_8261FF88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825e8210
	ctx.lr = 0x8261FF34;
	sub_825E8210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8261ff88
	if (ctx.cr0.eq) goto loc_8261FF88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8261ff7c
	if (ctx.cr6.eq) goto loc_8261FF7C;
	// lwz r11,8504(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8261ff7c
	if (ctx.cr6.eq) goto loc_8261FF7C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x825f5940
	ctx.lr = 0x8261FF5C;
	sub_825F5940(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8261ff74
	if (!ctx.cr6.eq) goto loc_8261FF74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262bd78
	ctx.lr = 0x8261FF6C;
	sub_8262BD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8261ff7c
	if (!ctx.cr0.eq) goto loc_8261FF7C;
loc_8261FF74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8262b408
	ctx.lr = 0x8261FF7C;
	sub_8262B408(ctx, base);
loc_8261FF7C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8261ff98
	if (!ctx.cr6.eq) goto loc_8261FF98;
loc_8261FF88:
	// lwz r11,2540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620030
	if (ctx.cr6.eq) goto loc_82620030;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8261FF98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8261FFA0;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8261FFA4;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x8261ffbc
	if (ctx.cr0.eq) goto loc_8261FFBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x8261ffc8
	goto loc_8261FFC8;
loc_8261FFBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
loc_8261FFC8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261FFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8261ffe4
	if (!ctx.cr6.eq) goto loc_8261FFE4;
	// lwz r11,2548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620030
	if (ctx.cr6.eq) goto loc_82620030;
loc_8261FFE4:
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82620004
	if (ctx.cr0.eq) goto loc_82620004;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82620004
	if (ctx.cr6.eq) goto loc_82620004;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82620008
	goto loc_82620008;
loc_82620004:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82620008:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x82620024;
	sub_829E3FD0(ctx, base);
	// stw r29,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r29.u32);
	// stw r29,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r29.u32);
	// b 0x82620114
	goto loc_82620114;
loc_82620030:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826200a4
	if (!ctx.cr6.eq) goto loc_826200A4;
	// lwz r11,4104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826200a4
	if (!ctx.cr6.eq) goto loc_826200A4;
	// lwz r11,10780(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826200a4
	if (!ctx.cr6.eq) goto loc_826200A4;
	// lwz r11,4192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826200a4
	if (!ctx.cr6.eq) goto loc_826200A4;
	// lwz r11,2908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826200a4
	if (!ctx.cr6.eq) goto loc_826200A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,580(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,2344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826200A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826200A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x826200AC;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x826200B0;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// beq 0x826200c8
	if (ctx.cr0.eq) goto loc_826200C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826200d4
	goto loc_826200D4;
loc_826200C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
loc_826200D4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826200DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x826200E4;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x826200E8;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// beq 0x82620100
	if (ctx.cr0.eq) goto loc_82620100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8262010c
	goto loc_8262010C;
loc_82620100:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1484);
loc_8262010C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620114:
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

__attribute__((alias("__imp__sub_82620128"))) PPC_WEAK_FUNC(sub_82620128);
PPC_FUNC_IMPL(__imp__sub_82620128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82620130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262015c
	if (ctx.cr0.eq) goto loc_8262015C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262015c
	if (ctx.cr6.eq) goto loc_8262015C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82620160
	goto loc_82620160;
loc_8262015C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82620160:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262020c
	if (ctx.cr6.eq) goto loc_8262020C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8262020c
	if (ctx.cr6.eq) goto loc_8262020C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8262020c
	if (ctx.cr0.eq) goto loc_8262020C;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,1504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262020c
	if (ctx.cr6.eq) goto loc_8262020C;
	// lwz r10,1508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262020c
	if (ctx.cr6.eq) goto loc_8262020C;
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262020c
	if (ctx.cr6.eq) goto loc_8262020C;
	// lwz r10,11532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826201e8
	if (!ctx.cr6.eq) goto loc_826201E8;
	// lwz r10,11528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826201e8
	if (!ctx.cr6.eq) goto loc_826201E8;
	// lwz r10,2908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826201e8
	if (!ctx.cr6.eq) goto loc_826201E8;
	// lwz r11,11456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11456);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8262020c
	if (!ctx.cr6.eq) goto loc_8262020C;
loc_826201E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826437e0
	ctx.lr = 0x826201F4;
	sub_826437E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8262020c
	if (!ctx.cr0.eq) goto loc_8262020C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r29,2853
	ctx.r29.s64 = 186974208;
	// stw r11,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r11.u32);
	// ori r29,r29,42802
	ctx.r29.u64 = ctx.r29.u64 | 42802;
loc_8262020C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82620218"))) PPC_WEAK_FUNC(sub_82620218);
PPC_FUNC_IMPL(__imp__sub_82620218) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82620300
	if (ctx.cr0.eq) goto loc_82620300;
	// lwz r11,3140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620300
	if (ctx.cr6.eq) goto loc_82620300;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82620300
	if (!ctx.cr6.eq) goto loc_82620300;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,1504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82620300
	if (ctx.cr6.eq) goto loc_82620300;
	// lwz r10,8500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8500);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620300
	if (!ctx.cr6.eq) goto loc_82620300;
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620300
	if (!ctx.cr6.eq) goto loc_82620300;
	// lwz r10,2196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620300
	if (!ctx.cr6.eq) goto loc_82620300;
	// lwz r10,1952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82620300
	if (ctx.cr6.eq) goto loc_82620300;
	// lwz r4,3132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3132);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82620300
	if (ctx.cr6.eq) goto loc_82620300;
	// lwz r11,12584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826202c0
	if (ctx.cr6.eq) goto loc_826202C0;
	// lwz r5,3136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// bl 0x8263b058
	ctx.lr = 0x826202BC;
	sub_8263B058(ctx, base);
	// b 0x82620300
	goto loc_82620300;
loc_826202C0:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826202D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82620300
	if (ctx.cr0.eq) goto loc_82620300;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826202EC;
	sub_8233A258(ctx, base);
	// lis r4,3738
	ctx.r4.s64 = 244973568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// ori r4,r4,31048
	ctx.r4.u64 = ctx.r4.u64 | 31048;
	// bl 0x829c3740
	ctx.lr = 0x82620300;
	sub_829C3740(ctx, base);
loc_82620300:
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

__attribute__((alias("__imp__sub_82620318"))) PPC_WEAK_FUNC(sub_82620318);
PPC_FUNC_IMPL(__imp__sub_82620318) {
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
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82620470
	if (ctx.cr0.eq) goto loc_82620470;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82620470
	if (!ctx.cr6.eq) goto loc_82620470;
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620470
	if (ctx.cr6.eq) goto loc_82620470;
	// lwz r11,8532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82620470
	if (!ctx.cr6.eq) goto loc_82620470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82620378;
	sub_829C1F08(ctx, base);
	// bl 0x82611600
	ctx.lr = 0x8262037C;
	sub_82611600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82620390
	if (ctx.cr0.eq) goto loc_82620390;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x8262039c
	goto loc_8262039C;
loc_82620390:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2628);
loc_8262039C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826203A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826203b8
	if (ctx.cr6.eq) goto loc_826203B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x825dac00
	ctx.lr = 0x826203B8;
	sub_825DAC00(ctx, base);
loc_826203B8:
	// lwz r4,1952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,152(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f13,30356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30356);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82620434
	if (!ctx.cr6.gt) goto loc_82620434;
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// ld r5,1652(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1652);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828c9b20
	ctx.lr = 0x826203F4;
	sub_828C9B20(ctx, base);
loc_826203F4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x829c1f08
	ctx.lr = 0x82620414;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x82620418;
	sub_82643690(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// beq 0x8262045c
	if (ctx.cr0.eq) goto loc_8262045C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x82620468
	goto loc_82620468;
loc_82620434:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x82620458;
	sub_82817BB8(ctx, base);
	// b 0x826203f4
	goto loc_826203F4;
loc_8262045C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
loc_82620468:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620470:
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

__attribute__((alias("__imp__sub_82620488"))) PPC_WEAK_FUNC(sub_82620488);
PPC_FUNC_IMPL(__imp__sub_82620488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82620490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,1532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// lwz r10,8504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826204d8
	if (!ctx.cr6.eq) goto loc_826204D8;
	// lwz r9,5388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// lwz r9,924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8262059c
	if (!ctx.cr6.eq) goto loc_8262059C;
loc_826204D8:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// lwz r11,924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8262059c
	if (ctx.cr6.eq) goto loc_8262059C;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r29,11376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11376, ctx.r29.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r10,4168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4168, ctx.r10.u32);
	// stw r9,4172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4172, ctx.r9.u32);
	// stw r8,4176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4176, ctx.r8.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r28,4184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4184, ctx.r28.u32);
	// beq cr6,0x82620540
	if (ctx.cr6.eq) goto loc_82620540;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r29,4164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4164, ctx.r29.u32);
	// b 0x8262059c
	goto loc_8262059C;
loc_82620540:
	// lwz r31,1968(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4176);
	// ld r4,4168(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4168);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825f6560
	ctx.lr = 0x82620558;
	sub_825F6560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82620598
	if (ctx.cr6.eq) goto loc_82620598;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82620590
	if (ctx.cr6.eq) goto loc_82620590;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82620584
	if (ctx.cr6.eq) goto loc_82620584;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8262059c
	if (!ctx.cr6.eq) goto loc_8262059C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82620588
	goto loc_82620588;
loc_82620584:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82620588:
	// stw r11,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r11.u32);
	// b 0x8262059c
	goto loc_8262059C;
loc_82620590:
	// stw r28,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r28.u32);
	// b 0x8262059c
	goto loc_8262059C;
loc_82620598:
	// stw r29,4164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4164, ctx.r29.u32);
loc_8262059C:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,8504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826205bc
	if (!ctx.cr6.eq) goto loc_826205BC;
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826205bc
	if (ctx.cr6.eq) goto loc_826205BC;
	// stw r28,4188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4188, ctx.r28.u32);
loc_826205BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826205C8"))) PPC_WEAK_FUNC(sub_826205C8);
PPC_FUNC_IMPL(__imp__sub_826205C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826205D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r29,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r29.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826206b8
	if (ctx.cr6.eq) goto loc_826206B8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8281d960
	ctx.lr = 0x82620600;
	sub_8281D960(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82620634
	if (ctx.cr0.eq) goto loc_82620634;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82620634
	if (ctx.cr6.eq) goto loc_82620634;
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,8804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8804, ctx.r8.u32);
	// stw r7,8808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8808, ctx.r7.u32);
	// stw r9,8812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8812, ctx.r9.u32);
loc_82620634:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r9,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// bl 0x825da9f8
	ctx.lr = 0x8262064C;
	sub_825DA9F8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8281d960
	ctx.lr = 0x82620654;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826206a4
	if (ctx.cr0.eq) goto loc_826206A4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8281d960
	ctx.lr = 0x82620664;
	sub_8281D960(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x826206b8
	if (ctx.cr0.eq) goto loc_826206B8;
	// lwz r11,1608(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1608);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826206b8
	if (ctx.cr6.eq) goto loc_826206B8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d6fa8
	ctx.lr = 0x826206A0;
	sub_824D6FA8(ctx, base);
	// b 0x826206b8
	goto loc_826206B8;
loc_826206A4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1672(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// bl 0x824d7228
	ctx.lr = 0x826206B8;
	sub_824D7228(ctx, base);
loc_826206B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826206C0"))) PPC_WEAK_FUNC(sub_826206C0);
PPC_FUNC_IMPL(__imp__sub_826206C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828c2490
	ctx.lr = 0x826206F0;
	sub_828C2490(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82438130
	ctx.lr = 0x826206F8;
	sub_82438130(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620718"))) PPC_WEAK_FUNC(sub_82620718);
PPC_FUNC_IMPL(__imp__sub_82620718) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620850
	if (ctx.cr6.eq) goto loc_82620850;
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262083c
	if (ctx.cr6.eq) goto loc_8262083C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r30.u32);
	// beq cr6,0x82620780
	if (ctx.cr6.eq) goto loc_82620780;
	// bl 0x825e3cf0
	ctx.lr = 0x82620780;
	sub_825E3CF0(ctx, base);
loc_82620780:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r8,932(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r7,928(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826207E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82620814
	if (ctx.cr6.eq) goto loc_82620814;
	// stw r10,8816(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8816, ctx.r10.u32);
	// stw r9,8820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8820, ctx.r9.u32);
	// stw r8,8824(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8824, ctx.r8.u32);
loc_82620814:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262083c
	if (ctx.cr6.eq) goto loc_8262083C;
	// stw r10,8804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8804, ctx.r10.u32);
	// stw r9,8808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8808, ctx.r9.u32);
	// stw r8,8812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8812, ctx.r8.u32);
loc_8262083C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,2628(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2628, ctx.r30.u32);
loc_82620850:
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

__attribute__((alias("__imp__sub_82620868"))) PPC_WEAK_FUNC(sub_82620868);
PPC_FUNC_IMPL(__imp__sub_82620868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r11,-3680
	ctx.r4.s64 = ctx.r11.s64 + -3680;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826208AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,1968(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,8524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8524);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826208ec
	if (!ctx.cr6.eq) goto loc_826208EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826208EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826208EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8524, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620908"))) PPC_WEAK_FUNC(sub_82620908);
PPC_FUNC_IMPL(__imp__sub_82620908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-100
	ctx.r31.s64 = ctx.r11.s64 + -100;
	// lwz r10,-100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826209c0
	if (ctx.cr6.eq) goto loc_826209C0;
	// lwz r10,8504(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8504);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x826209bc
	if (ctx.cr6.eq) goto loc_826209BC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8262098c
	if (ctx.cr6.eq) goto loc_8262098C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82620984
	if (ctx.cr6.eq) goto loc_82620984;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826209d8
	ctx.lr = 0x82620980;
	sub_826209D8(ctx, base);
	// b 0x826209c0
	goto loc_826209C0;
loc_82620984:
	// bl 0x82621800
	ctx.lr = 0x82620988;
	sub_82621800(ctx, base);
	// b 0x826209c0
	goto loc_826209C0;
loc_8262098C:
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826209c0
	if (ctx.cr6.eq) goto loc_826209C0;
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
	// bne cr6,0x826209c0
	if (!ctx.cr6.eq) goto loc_826209C0;
	// bl 0x826228f8
	ctx.lr = 0x826209B8;
	sub_826228F8(ctx, base);
	// b 0x826209c0
	goto loc_826209C0;
loc_826209BC:
	// bl 0x826259d8
	ctx.lr = 0x826209C0;
	sub_826259D8(ctx, base);
loc_826209C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826209D8"))) PPC_WEAK_FUNC(sub_826209D8);
PPC_FUNC_IMPL(__imp__sub_826209D8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,1968(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82620ac0
	if (!ctx.cr0.eq) goto loc_82620AC0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,1356(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620ac0
	if (!ctx.cr6.eq) goto loc_82620AC0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,-3680
	ctx.r4.s64 = ctx.r10.s64 + -3680;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82620b4c
	if (!ctx.cr0.eq) goto loc_82620B4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,1968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,8524(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8524);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82620b4c
	if (ctx.cr6.eq) goto loc_82620B4C;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f2,3600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3600);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3596);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-3680
	ctx.r11.s64 = ctx.r10.s64 + -3680;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82825a58
	ctx.lr = 0x82620A98;
	sub_82825A58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82643860
	ctx.lr = 0x82620ABC;
	sub_82643860(ctx, base);
	// b 0x82620b4c
	goto loc_82620B4C;
loc_82620AC0:
	// lwz r11,8524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8524);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82620aec
	if (!ctx.cr6.eq) goto loc_82620AEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620AEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r10,8524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8524, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-3680
	ctx.r4.s64 = ctx.r11.s64 + -3680;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82620b4c
	if (ctx.cr0.eq) goto loc_82620B4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r4,r11,-3680
	ctx.r4.s64 = ctx.r11.s64 + -3680;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620B4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82620B4C:
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

__attribute__((alias("__imp__sub_82620B68"))) PPC_WEAK_FUNC(sub_82620B68);
PPC_FUNC_IMPL(__imp__sub_82620B68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r10,11380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11380, ctx.r10.u32);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82620718
	sub_82620718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82620B98"))) PPC_WEAK_FUNC(sub_82620B98);
PPC_FUNC_IMPL(__imp__sub_82620B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,-92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// lwz r10,11376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11376);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620bc0
	if (!ctx.cr6.eq) goto loc_82620BC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82620BC0:
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82620BD8"))) PPC_WEAK_FUNC(sub_82620BD8);
PPC_FUNC_IMPL(__imp__sub_82620BD8) {
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
	// lwz r11,11152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82620dc8
	if (ctx.cr6.eq) goto loc_82620DC8;
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r7,1952(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// lwz r11,928(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 928);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82620c70
	if (ctx.cr0.eq) goto loc_82620C70;
	// li r4,138
	ctx.r4.s64 = 138;
	// bl 0x824b7438
	ctx.lr = 0x82620C5C;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82620c70
	if (ctx.cr0.eq) goto loc_82620C70;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82620d30
	goto loc_82620D30;
loc_82620C70:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,1040(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-32720
	ctx.r10.s64 = ctx.r11.s64 + -32720;
	// lfs f12,-32720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82620d00
	if (ctx.cr6.lt) goto loc_82620D00;
	// lfs f11,1044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1044);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82620d00
	if (!ctx.cr6.lt) goto loc_82620D00;
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x824b7438
	ctx.lr = 0x82620CA4;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82620d00
	if (ctx.cr0.eq) goto loc_82620D00;
	// lwz r10,-100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11160, ctx.r11.u32);
	// lwz r10,-100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11156, ctx.r11.u32);
	// lwz r10,-100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11376, ctx.r11.u32);
	// b 0x82620d7c
	goto loc_82620D7C;
loc_82620D00:
	// lfs f11,1044(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1044);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82620d94
	if (ctx.cr6.lt) goto loc_82620D94;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82620d94
	if (!ctx.cr6.lt) goto loc_82620D94;
	// li r4,137
	ctx.r4.s64 = 137;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x824b7438
	ctx.lr = 0x82620D20;
	sub_824B7438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82620d94
	if (ctx.cr0.eq) goto loc_82620D94;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
loc_82620D30:
	// lwz r10,-100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11160, ctx.r11.u32);
	// lwz r10,-100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// stw r11,11156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11156, ctx.r11.u32);
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
	// stw r9,11376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11376, ctx.r9.u32);
loc_82620D7C:
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// bl 0x82620ef0
	ctx.lr = 0x82620D90;
	sub_82620EF0(ctx, base);
	// b 0x82620dc8
	goto loc_82620DC8;
loc_82620D94:
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r10,11156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11156, ctx.r10.u32);
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
	// stw r10,11160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11160, ctx.r10.u32);
loc_82620DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620DE0"))) PPC_WEAK_FUNC(sub_82620DE0);
PPC_FUNC_IMPL(__imp__sub_82620DE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// lwz r10,11376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11376);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82620e38
	if (!ctx.cr6.eq) goto loc_82620E38;
	// lwz r10,-100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// stw r9,2544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2544, ctx.r9.u32);
	// lwz r10,-100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// b 0x82642640
	sub_82642640(ctx, base);
	return;
loc_82620E38:
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

__attribute__((alias("__imp__sub_82620E64"))) PPC_WEAK_FUNC(sub_82620E64);
PPC_FUNC_IMPL(__imp__sub_82620E64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620E68"))) PPC_WEAK_FUNC(sub_82620E68);
PPC_FUNC_IMPL(__imp__sub_82620E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-100
	ctx.r10.s64 = ctx.r11.s64 + -100;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82620EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r4,2853
	ctx.r4.s64 = 186974208;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// ori r4,r4,42802
	ctx.r4.u64 = ctx.r4.u64 | 42802;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// stw r10,2544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2544, ctx.r10.u32);
	// lwz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -100);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// bl 0x82642640
	ctx.lr = 0x82620ED8;
	sub_82642640(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82620EF0"))) PPC_WEAK_FUNC(sub_82620EF0);
PPC_FUNC_IMPL(__imp__sub_82620EF0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82620ffc
	if (!ctx.cr6.eq) goto loc_82620FFC;
	// bl 0x82621060
	ctx.lr = 0x82620F20;
	sub_82621060(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262a5d0
	ctx.lr = 0x82620F30;
	sub_8262A5D0(ctx, base);
	// bl 0x8281dc68
	ctx.lr = 0x82620F34;
	sub_8281DC68(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82621044
	if (ctx.cr0.eq) goto loc_82621044;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,6348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6348);
	// stw r30,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r30.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,6348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6348);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x8262a5d0
	ctx.lr = 0x82620F74;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x82620F78;
	sub_8281D960(ctx, base);
	// addi r11,r3,656
	ctx.r11.s64 = ctx.r3.s64 + 656;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8262a5d0
	ctx.lr = 0x82620FA0;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x82620FA4;
	sub_8281D960(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r4,r3,620
	ctx.r4.s64 = ctx.r3.s64 + 620;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,6348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6348);
	// bl 0x8281bb18
	ctx.lr = 0x82620FBC;
	sub_8281BB18(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8262a5d0
	ctx.lr = 0x82620FCC;
	sub_8262A5D0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r11,6348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6348);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x824cac78
	ctx.lr = 0x82620FF8;
	sub_824CAC78(ctx, base);
	// b 0x82621044
	goto loc_82621044;
loc_82620FFC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82621044
	if (!ctx.cr6.eq) goto loc_82621044;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,5220
	ctx.r3.s64 = ctx.r10.s64 + 5220;
	// bl 0x82816528
	ctx.lr = 0x8262102C;
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
	ctx.lr = 0x82621044;
	sub_8282C950(ctx, base);
loc_82621044:
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

__attribute__((alias("__imp__sub_82621060"))) PPC_WEAK_FUNC(sub_82621060);
PPC_FUNC_IMPL(__imp__sub_82621060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82621068;
	__savegprlr_22(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x82621098;
	sub_824F97D8(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r8,12
	ctx.r8.s64 = 12;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// stfs f13,320(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lfs f3,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f3.f64 = double(temp.f32);
	// stw r8,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r8.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// stfs f3,360(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stw r11,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r11.u32);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stfs f3,356(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// stfs f3,336(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f3,340(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// lis r28,-32215
	ctx.r28.s64 = -2111242240;
	// stfs f3,344(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r4,2536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2536);
	// stfs f0,352(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// stfs f12,324(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lis r29,-32215
	ctx.r29.s64 = -2111242240;
	// stfs f11,328(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r8,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// lfs f2,17168(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 17168);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lwz r27,2532(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2532);
	// li r9,1
	ctx.r9.s64 = 1;
	// ld r5,2508(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2508);
	// lfs f4,18308(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 18308);
	ctx.f4.f64 = double(temp.f32);
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// ld r6,2516(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2516);
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// lfs f1,-32676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	ctx.f1.f64 = double(temp.f32);
	// ld r7,2524(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2524);
	// stb r11,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r11.u8);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stb r9,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r9.u8);
	// stb r11,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r11.u8);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lwz r8,360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ld r26,336(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lwz r25,344(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// ld r24,352(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// ld r23,620(r30)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// rldicr r8,r27,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r30,628(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lwz r22,328(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// lwz r28,1012(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// std r24,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r24.u64);
	// std r26,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r26.u64);
	// stw r25,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r25.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// stb r9,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r9.u8);
	// std r23,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r23.u64);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x826211CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8261c718
	ctx.lr = 0x826211EC;
	sub_8261C718(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400f38
	ctx.lr = 0x826211F4;
	sub_82400F38(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82621200"))) PPC_WEAK_FUNC(sub_82621200);
PPC_FUNC_IMPL(__imp__sub_82621200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82621208;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x824090e0
	ctx.lr = 0x82621220;
	sub_824090E0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r3.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82621250
	if (!ctx.cr6.eq) goto loc_82621250;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1312, ctx.r9.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r10,1056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r10,1056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1056, ctx.r10.u32);
loc_82621250:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c23e8
	ctx.lr = 0x82621260;
	sub_828C23E8(ctx, base);
	// lis r11,2853
	ctx.r11.s64 = 186974208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,42802
	ctx.r11.u64 = ctx.r11.u64 | 42802;
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// bl 0x829c3298
	ctx.lr = 0x82621274;
	sub_829C3298(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82621318
	if (ctx.cr0.eq) goto loc_82621318;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82621304
	if (!ctx.cr6.eq) goto loc_82621304;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82621304
	if (ctx.cr6.eq) goto loc_82621304;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826212BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82621304
	if (ctx.cr0.eq) goto loc_82621304;
	// lwz r5,7220(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// lwz r4,7216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7216);
	// lwz r3,1924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// bl 0x826cdfe8
	ctx.lr = 0x826212D4;
	sub_826CDFE8(ctx, base);
	// lwz r9,5584(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5584);
	// li r11,11760
	ctx.r11.s64 = 11760;
	// addi r10,r30,-6168
	ctx.r10.s64 = ctx.r30.s64 + -6168;
	// stw r9,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r9.u32);
	// lwz r9,5588(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5588);
	// stw r9,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r9.u32);
loc_826212EC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,1968(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,11768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11768, ctx.xer);
	// blt cr6,0x826212ec
	if (ctx.cr6.lt) goto loc_826212EC;
loc_82621304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82621318:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8262137c
	if (!ctx.cr6.eq) goto loc_8262137C;
	// lwz r31,1968(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262133C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8262137c
	if (ctx.cr0.eq) goto loc_8262137C;
	// lwz r11,7216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7216);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8262137c
	if (!ctx.cr6.eq) goto loc_8262137C;
	// lis r11,-32160
	ctx.r11.s64 = -2107637760;
	// lfs f1,8372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8372);
	ctx.f1.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25304
	ctx.r11.s64 = ctx.r11.s64 + -25304;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82611658
	ctx.lr = 0x8262137C;
	sub_82611658(ctx, base);
loc_8262137C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82621388"))) PPC_WEAK_FUNC(sub_82621388);
PPC_FUNC_IMPL(__imp__sub_82621388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82621390;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x82621398;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826213B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826217f0
	if (ctx.cr0.eq) goto loc_826217F0;
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826217f0
	if (ctx.cr6.eq) goto loc_826217F0;
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,1656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,1660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// lwz r8,1952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f31,148(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x824f97d8
	ctx.lr = 0x826213F8;
	sub_824F97D8(ctx, base);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f0,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f7,f11,f30
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmadds f10,f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f0,f8,f0,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f2,f6,f31,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f1,f5,f31,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_82621454:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82621460
	if (ctx.cr0.eq) goto loc_82621460;
	// fmuls f11,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
loc_82621460:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82621470
	if (ctx.cr0.eq) goto loc_82621470;
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// b 0x82621454
	goto loc_82621454;
loc_82621470:
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82621478:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82621484
	if (ctx.cr0.eq) goto loc_82621484;
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82621484:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82621494
	if (ctx.cr0.eq) goto loc_82621494;
	// fmuls f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// b 0x82621478
	goto loc_82621478;
loc_82621494:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r9,r11,30356
	ctx.r9.s64 = ctx.r11.s64 + 30356;
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x826214d8
	if (!ctx.cr6.gt) goto loc_826214D8;
	// lfs f0,30356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18004);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f29,f31,f13
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// lfs f0,7360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17052);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f28,f31,f13
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// b 0x826214e8
	goto loc_826214E8;
loc_826214D8:
	// lfs f30,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,18004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18004);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,7360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,17052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17052);
	ctx.f28.f64 = double(temp.f32);
loc_826214E8:
	// lwz r11,1972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8262150c
	if (!ctx.cr6.eq) goto loc_8262150C;
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
	// stw r10,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r10.u32);
	// stw r9,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r9.u32);
loc_8262150C:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r10,1520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826216a0
	if (ctx.cr6.eq) goto loc_826216A0;
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826216a0
	if (!ctx.cr6.eq) goto loc_826216A0;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x826216a0
	if (ctx.cr6.lt) goto loc_826216A0;
	// lwz r9,5508(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5508);
	// lwz r30,656(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r29,664(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// bne cr6,0x82621574
	if (!ctx.cr6.eq) goto loc_82621574;
	// bl 0x82a4e678
	ctx.lr = 0x82621558;
	sub_82A4E678(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82621574:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// blt cr6,0x8262158c
	if (ctx.cr6.lt) goto loc_8262158C;
	// stw r27,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r27.u32);
	// b 0x82621590
	goto loc_82621590;
loc_8262158C:
	// stw r28,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r28.u32);
loc_82621590:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// stw r30,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r30.u32);
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// stw r29,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r29.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r8,664(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r7,656(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r6,660(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// subf r30,r6,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// ble cr6,0x826215d4
	if (!ctx.cr6.gt) goto loc_826215D4;
	// addis r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -65536;
	// b 0x826215e0
	goto loc_826215E0;
loc_826215D4:
	// cmpwi cr6,r30,-32768
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -32768, ctx.xer);
	// bge cr6,0x826215e0
	if (!ctx.cr6.lt) goto loc_826215E0;
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
loc_826215E0:
	// lwz r10,928(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// lwz r9,932(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// blt cr6,0x8262161c
	if (ctx.cr6.lt) goto loc_8262161C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,18028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18028);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82621658
	goto loc_82621658;
loc_8262161C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82621640
	if (ctx.cr6.lt) goto loc_82621640;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,18028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18028);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82621658
	goto loc_82621658;
loc_82621640:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,19180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19180);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82621658:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,1128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
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
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826216A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826216A0:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r29,1492(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// stb r27,192(r29)
	PPC_STORE_U8(ctx.r29.u32 + 192, ctx.r27.u8);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,1516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82621784
	if (ctx.cr6.eq) goto loc_82621784;
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x826216cc
	if (ctx.cr6.lt) goto loc_826216CC;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82621720
	goto loc_82621720;
loc_826216CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x826216d8
	if (!ctx.cr6.lt) goto loc_826216D8;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
loc_826216D8:
	// cmpwi cr6,r30,2000
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2000, ctx.xer);
	// bgt cr6,0x82621724
	if (ctx.cr6.gt) goto loc_82621724;
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// blt cr6,0x826216f0
	if (ctx.cr6.lt) goto loc_826216F0;
	// li r11,192
	ctx.r11.s64 = 192;
	// b 0x82621720
	goto loc_82621720;
loc_826216F0:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x82621724
	if (ctx.cr6.lt) goto loc_82621724;
	// fsubs f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f12,f28,f30
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// lfs f0,19176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19176);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r11.s64;
loc_82621720:
	// stb r11,192(r29)
	PPC_STORE_U8(ctx.r29.u32 + 192, ctx.r11.u8);
loc_82621724:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82621784
	if (ctx.cr0.eq) goto loc_82621784;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fsub f11,f0,f30
	ctx.f11.f64 = ctx.f0.f64 - ctx.f30.f64;
	// lfd f0,19168(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19168);
	// lfd f13,19160(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 19160);
	// fdiv f12,f12,f11
	ctx.f12.f64 = ctx.f12.f64 / ctx.f11.f64;
	// fmadd f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x82621780
	if (ctx.cr6.lt) goto loc_82621780;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82621780:
	// stb r11,192(r29)
	PPC_STORE_U8(ctx.r29.u32 + 192, ctx.r11.u8);
loc_82621784:
	// lbz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826217dc
	if (ctx.cr0.eq) goto loc_826217DC;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,10764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10764);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826217cc
	if (ctx.cr6.eq) goto loc_826217CC;
	// lwz r11,10780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826217cc
	if (!ctx.cr6.eq) goto loc_826217CC;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// stw r28,10764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10764, ctx.r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826217CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826217CC:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r27,11324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11324, ctx.r27.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r27,11332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11332, ctx.r27.u32);
loc_826217DC:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826217f0
	if (!ctx.cr6.eq) goto loc_826217F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826228f8
	ctx.lr = 0x826217F0;
	sub_826228F8(ctx, base);
loc_826217F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x826217FC;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82621800"))) PPC_WEAK_FUNC(sub_82621800);
PPC_FUNC_IMPL(__imp__sub_82621800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82621808;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61714
	ctx.lr = 0x82621810;
	__savefpr_15(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826223c4
	if (ctx.cr6.eq) goto loc_826223C4;
	// lwz r11,2908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826223b0
	if (!ctx.cr6.eq) goto loc_826223B0;
	// lwz r11,11528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826223b0
	if (!ctx.cr6.eq) goto loc_826223B0;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82621870
	if (ctx.cr0.eq) goto loc_82621870;
	// lwz r10,2704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82621870
	if (ctx.cr6.eq) goto loc_82621870;
	// lwz r10,11456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11456);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82621870
	if (ctx.cr6.eq) goto loc_82621870;
	// lwz r4,11464(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11464);
	// b 0x826223a8
	goto loc_826223A8;
loc_82621870:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r9,5592(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5592);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r8,5596(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5596);
	// lwz r7,5600(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5600);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,5608(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5608);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lfs f0,24088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,5604(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5604);
	// lfs f29,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lwz r6,5612(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5612);
	// stfs f0,2776(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2776, temp.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lfs f31,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f30,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bl 0x824f97d8
	ctx.lr = 0x82621900;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82817f30
	ctx.lr = 0x8262190C;
	sub_82817F30(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82617440
	ctx.lr = 0x82621924;
	sub_82617440(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lfs f15,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f15.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f12,f15
	ctx.f12.f64 = ctx.f15.f64;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
loc_82621950:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8262195c
	if (ctx.cr0.eq) goto loc_8262195C;
	// fmuls f12,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_8262195C:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262196c
	if (ctx.cr0.eq) goto loc_8262196C;
	// fmuls f31,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// b 0x82621950
	goto loc_82621950;
loc_8262196C:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fmr f0,f15
	ctx.f0.f64 = ctx.f15.f64;
loc_82621978:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82621984
	if (ctx.cr0.eq) goto loc_82621984;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82621984:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82621994
	if (ctx.cr0.eq) goto loc_82621994;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82621978
	goto loc_82621978;
loc_82621994:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f13,f15,f0
	ctx.f13.f64 = double(float(ctx.f15.f64 - ctx.f0.f64));
	// fsel f17,f13,f0,f15
	ctx.f17.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f15.f64;
	// bl 0x825f8288
	ctx.lr = 0x826219AC;
	sub_825F8288(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826223a0
	if (ctx.cr0.eq) goto loc_826223A0;
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
	ctx.lr = 0x826219CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826223a4
	if (!ctx.cr0.gt) goto loc_826223A4;
	// lwz r10,5604(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5604);
	// lwz r9,5608(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5608);
	// lwz r8,5612(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5612);
	// lwz r7,5592(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5592);
	// lwz r6,5596(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5596);
	// lwz r5,5600(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5600);
	// lwz r4,11508(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// bne cr6,0x82622338
	if (!ctx.cr6.eq) goto loc_82622338;
	// lwz r10,2704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2704);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82622338
	if (ctx.cr6.eq) goto loc_82622338;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f21,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f21.f64 = double(temp.f32);
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82332e18
	ctx.lr = 0x82621A4C;
	sub_82332E18(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f20,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f20.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f20
	ctx.f0.u64 = ctx.f20.u64 & ~0x8000000000000000;
	// lfs f18,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f12,f13,f18
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// lfs f19,-27804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27804);
	ctx.f19.f64 = double(temp.f32);
	// fcmpu cr6,f0,f19
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// fmuls f0,f12,f22
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// blt cr6,0x82621a80
	if (ctx.cr6.lt) goto loc_82621A80;
	// fnmsubs f0,f13,f22,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f22.f64 - ctx.f0.f64)));
loc_82621A80:
	// fabs f13,f17
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f17.u64 & ~0x8000000000000000;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f30,2712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2712);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f27,f24,f0
	ctx.f27.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// lfs f12,1120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f26,-32676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	ctx.f26.f64 = double(temp.f32);
	// lfs f16,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f16.f64 = double(temp.f32);
	// lfs f23,16444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16444);
	ctx.f23.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82621c74
	if (!ctx.cr6.gt) goto loc_82621C74;
	// fmuls f0,f20,f23
	ctx.f0.f64 = double(float(ctx.f20.f64 * ctx.f23.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f13,20088(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20088);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82621ae0
	if (ctx.cr6.lt) goto loc_82621AE0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f13,20080(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20080);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82621ae8
	if (!ctx.cr6.gt) goto loc_82621AE8;
loc_82621AE0:
	// fneg f28,f0
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82621b04
	goto loc_82621B04;
loc_82621AE8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82621af8
	if (!ctx.cr6.lt) goto loc_82621AF8;
	// fmr f28,f15
	ctx.f28.f64 = ctx.f15.f64;
	// b 0x82621b04
	goto loc_82621B04;
loc_82621AF8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82621b04
	if (!ctx.cr6.gt) goto loc_82621B04;
	// fmr f28,f16
	ctx.f28.f64 = ctx.f16.f64;
loc_82621B04:
	// fmr f0,f15
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f15.f64;
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// bge cr6,0x82621b14
	if (!ctx.cr6.lt) goto loc_82621B14;
	// fmr f0,f16
	ctx.f0.f64 = ctx.f16.f64;
loc_82621B14:
	// fneg f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f20,f29
	ctx.cr6.compare(ctx.f20.f64, ctx.f29.f64);
	// fmuls f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2784(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2784);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmadds f0,f13,f0,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// fadds f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_82621B34:
	// lfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
loc_82621B38:
	// fmuls f0,f31,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f20.f64));
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82621b50
	if (!ctx.cr6.lt) goto loc_82621B50;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82621B50:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f25,18024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18024);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,20076(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20076);
	ctx.f28.f64 = double(temp.f32);
	// blt cr6,0x82621b78
	if (ctx.cr6.lt) goto loc_82621B78;
	// fcmpu cr6,f20,f25
	ctx.cr6.compare(ctx.f20.f64, ctx.f25.f64);
	// ble cr6,0x82621b78
	if (!ctx.cr6.gt) goto loc_82621B78;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x82621b94
	if (ctx.cr6.gt) goto loc_82621B94;
loc_82621B78:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82621b9c
	if (ctx.cr6.gt) goto loc_82621B9C;
	// fcmpu cr6,f20,f28
	ctx.cr6.compare(ctx.f20.f64, ctx.f28.f64);
	// bge cr6,0x82621b9c
	if (!ctx.cr6.lt) goto loc_82621B9C;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82621b9c
	if (!ctx.cr6.lt) goto loc_82621B9C;
loc_82621B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261cb10
	ctx.lr = 0x82621B9C;
	sub_8261CB10(ctx, base);
loc_82621B9C:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// bge cr6,0x82621bac
	if (!ctx.cr6.lt) goto loc_82621BAC;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82621bcc
	if (ctx.cr6.gt) goto loc_82621BCC;
loc_82621BAC:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82621bbc
	if (ctx.cr6.gt) goto loc_82621BBC;
	// fcmpu cr6,f27,f29
	ctx.cr6.compare(ctx.f27.f64, ctx.f29.f64);
	// bgt cr6,0x82621bcc
	if (ctx.cr6.gt) goto loc_82621BCC;
loc_82621BBC:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// blt cr6,0x82621bd4
	if (ctx.cr6.lt) goto loc_82621BD4;
	// fcmpu cr6,f27,f29
	ctx.cr6.compare(ctx.f27.f64, ctx.f29.f64);
	// bge cr6,0x82621bd4
	if (!ctx.cr6.lt) goto loc_82621BD4;
loc_82621BCC:
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82621BD4:
	// lfs f0,2788(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2788);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82621bfc
	if (ctx.cr6.eq) goto loc_82621BFC;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsel f13,f12,f31,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82621BFC:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82621c14
	if (ctx.cr6.eq) goto loc_82621C14;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82621C14:
	// lwz r10,2704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2704);
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82621c3c
	if (ctx.cr6.eq) goto loc_82621C3C;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,5612(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5612, ctx.r10.u32);
	// stw r9,5604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5604, ctx.r9.u32);
	// stw r8,5608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5608, ctx.r8.u32);
loc_82621C3C:
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,11496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82621d54
	if (ctx.cr6.eq) goto loc_82621D54;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fcmpu cr6,f20,f29
	ctx.cr6.compare(ctx.f20.f64, ctx.f29.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ble cr6,0x82621c94
	if (!ctx.cr6.gt) goto loc_82621C94;
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82621c98
	goto loc_82621C98;
loc_82621C74:
	// fabs f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f17.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82621b34
	if (!ctx.cr6.lt) goto loc_82621B34;
	// lfs f31,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82621b38
	goto loc_82621B38;
loc_82621C94:
	// stfs f26,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82621C98:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f31,2776(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2776);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f31,f22
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f8,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x82621d44
	if (!ctx.cr6.gt) goto loc_82621D44;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x82621CF4;
	sub_82332E18(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f22
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f22.f64));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f12,f22
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x82621d88
	goto loc_82621D88;
loc_82621D44:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// b 0x82621d88
	goto loc_82621D88;
loc_82621D54:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// bge cr6,0x82621d64
	if (!ctx.cr6.lt) goto loc_82621D64;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82621d84
	if (ctx.cr6.gt) goto loc_82621D84;
loc_82621D64:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x82621d74
	if (ctx.cr6.gt) goto loc_82621D74;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x82621d84
	if (ctx.cr6.gt) goto loc_82621D84;
loc_82621D74:
	// fcmpu cr6,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f26.f64);
	// blt cr6,0x82621d88
	if (ctx.cr6.lt) goto loc_82621D88;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x82621d88
	if (!ctx.cr6.lt) goto loc_82621D88;
loc_82621D84:
	// fadds f30,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
loc_82621D88:
	// fsubs f10,f30,f19
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f19.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f9,f24,f24
	ctx.f9.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,18332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18332);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfd f11,19264(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 19264);
	// stfs f30,2712(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2712, temp.u32);
	// stw r11,5592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5592, ctx.r11.u32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfd f0,16424(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16424);
	// fmadds f13,f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,5600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5600, ctx.r11.u32);
	// fsel f11,f8,f10,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsub f12,f11,f0
	ctx.f12.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fsqrts f31,f13
	ctx.f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsel f0,f12,f0,f11
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f31,f18
	ctx.cr6.compare(ctx.f31.f64, ctx.f18.f64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,5596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5596, ctx.r11.u32);
	// fmuls f30,f0,f23
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// ble cr6,0x82621e28
	if (!ctx.cr6.gt) goto loc_82621E28;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82621e28
	if (ctx.cr6.eq) goto loc_82621E28;
	// lwz r11,11456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82621e28
	if (ctx.cr6.eq) goto loc_82621E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82629968
	ctx.lr = 0x82621E28;
	sub_82629968(ctx, base);
loc_82621E28:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82621f80
	if (ctx.cr6.eq) goto loc_82621F80;
	// lwz r10,5592(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5592);
	// fabs f0,f17
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f17.u64 & ~0x8000000000000000;
	// lwz r7,5592(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r6,5596(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5596);
	// lwz r11,5600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5600);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,5596(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5596);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r8,5600(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5600);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ble cr6,0x82621ef4
	if (!ctx.cr6.gt) goto loc_82621EF4;
	// bctrl 
	ctx.lr = 0x82621E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82621f48
	if (!ctx.cr0.eq) goto loc_82621F48;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,4192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82621ec8
	if (ctx.cr6.eq) goto loc_82621EC8;
	// addi r4,r31,3364
	ctx.r4.s64 = ctx.r31.s64 + 3364;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82645d28
	ctx.lr = 0x82621EB8;
	sub_82645D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635a20
	ctx.lr = 0x82621EC4;
	sub_82635A20(ctx, base);
	// stw r26,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r26.u32);
loc_82621EC8:
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f15
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f15.f64;
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x82621EF0;
	sub_826436E8(ctx, base);
	// b 0x82621f48
	goto loc_82621F48;
loc_82621EF4:
	// bctrl 
	ctx.lr = 0x82621EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82621f48
	if (ctx.cr0.eq) goto loc_82621F48;
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82621f28
	if (ctx.cr6.eq) goto loc_82621F28;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82621f28
	if (ctx.cr6.eq) goto loc_82621F28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82621F28:
	// stw r27,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r27.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82621F48:
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,5596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5596, ctx.r9.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,5592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5592, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,5600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5600, ctx.r10.u32);
loc_82621F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82621F88;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x82621F8C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82621fa0
	if (ctx.cr0.eq) goto loc_82621FA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// b 0x82621fac
	goto loc_82621FAC;
loc_82621FA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
loc_82621FAC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82621FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,2772(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x82621fd0
	if (!ctx.cr6.lt) goto loc_82621FD0;
	// fcmpu cr6,f20,f25
	ctx.cr6.compare(ctx.f20.f64, ctx.f25.f64);
	// bgt cr6,0x82621ff0
	if (ctx.cr6.gt) goto loc_82621FF0;
loc_82621FD0:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82621fe0
	if (!ctx.cr6.gt) goto loc_82621FE0;
	// fcmpu cr6,f20,f28
	ctx.cr6.compare(ctx.f20.f64, ctx.f28.f64);
	// blt cr6,0x82621ff0
	if (ctx.cr6.lt) goto loc_82621FF0;
loc_82621FE0:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,11496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622168
	if (ctx.cr6.eq) goto loc_82622168;
loc_82621FF0:
	// lwz r11,2704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622168
	if (ctx.cr6.eq) goto loc_82622168;
	// fcmpu cr6,f31,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f18.f64);
	// bgt cr6,0x82622168
	if (ctx.cr6.gt) goto loc_82622168;
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622060
	if (ctx.cr6.eq) goto loc_82622060;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262202C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82622060
	if (!ctx.cr0.eq) goto loc_82622060;
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262205c
	if (ctx.cr6.eq) goto loc_8262205C;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262205c
	if (ctx.cr6.eq) goto loc_8262205C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262205C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262205C:
	// stw r27,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r27.u32);
loc_82622060:
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lfs f0,1120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f17,f0
	ctx.cr6.compare(ctx.f17.f64, ctx.f0.f64);
	// ble cr6,0x82622104
	if (!ctx.cr6.gt) goto loc_82622104;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826220d8
	if (!ctx.cr0.eq) goto loc_826220D8;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11500);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826220d8
	if (ctx.cr6.eq) goto loc_826220D8;
	// stw r28,11496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11496, ctx.r28.u32);
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r10,-26384
	ctx.r11.s64 = ctx.r10.s64 + -26384;
	// lfs f1,2780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2780);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x826220D4;
	sub_826436E8(ctx, base);
	// b 0x82622104
	goto loc_82622104;
loc_826220D8:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,11500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622104
	if (ctx.cr6.eq) goto loc_82622104;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622104:
	// lwz r11,2708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82622118
	if (!ctx.cr6.eq) goto loc_82622118;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x826221a0
	if (ctx.cr6.eq) goto loc_826221A0;
loc_82622118:
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,11496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11496, ctx.r28.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r28,11456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11456, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826221a0
	goto loc_826221A0;
loc_82622168:
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826221a0
	if (!ctx.cr6.eq) goto loc_826221A0;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,4192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826221a0
	if (ctx.cr6.eq) goto loc_826221A0;
	// addi r4,r31,3328
	ctx.r4.s64 = ctx.r31.s64 + 3328;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82645d28
	ctx.lr = 0x82622190;
	sub_82645D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635a20
	ctx.lr = 0x8262219C;
	sub_82635A20(ctx, base);
	// stw r28,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r28.u32);
loc_826221A0:
	// fabs f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f20.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x826222c0
	if (!ctx.cr6.gt) goto loc_826222C0;
	// fcmpu cr6,f30,f15
	ctx.cr6.compare(ctx.f30.f64, ctx.f15.f64);
	// beq cr6,0x826221bc
	if (ctx.cr6.eq) goto loc_826221BC;
	// fcmpu cr6,f30,f16
	ctx.cr6.compare(ctx.f30.f64, ctx.f16.f64);
	// bne cr6,0x826222c0
	if (!ctx.cr6.eq) goto loc_826222C0;
loc_826221BC:
	// lfs f0,2768(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82622258
	if (!ctx.cr6.gt) goto loc_82622258;
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f20
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f20.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82622258
	if (!ctx.cr6.gt) goto loc_82622258;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826221F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82622330
	if (!ctx.cr0.eq) goto loc_82622330;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,4192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262222c
	if (ctx.cr6.eq) goto loc_8262222C;
	// addi r4,r31,3364
	ctx.r4.s64 = ctx.r31.s64 + 3364;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82645d28
	ctx.lr = 0x8262221C;
	sub_82645D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82635a20
	ctx.lr = 0x82622228;
	sub_82635A20(ctx, base);
	// stw r26,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r26.u32);
loc_8262222C:
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,2768(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2768);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-13552
	ctx.r11.s64 = ctx.r11.s64 + -13552;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x82622254;
	sub_826436E8(ctx, base);
	// b 0x82622330
	goto loc_82622330;
loc_82622258:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622330
	if (ctx.cr0.eq) goto loc_82622330;
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826222a8
	if (ctx.cr6.eq) goto loc_826222A8;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826222a8
	if (ctx.cr6.eq) goto loc_826222A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826222A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826222A8:
	// stw r27,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r27.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82622324
	goto loc_82622324;
loc_826222C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826222E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622330
	if (ctx.cr0.eq) goto loc_82622330;
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622310
	if (ctx.cr6.eq) goto loc_82622310;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622310
	if (ctx.cr6.eq) goto loc_82622310;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622310:
	// stw r27,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r27.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82622324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622330:
	// stw r27,2708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2708, ctx.r27.u32);
	// b 0x826223b0
	goto loc_826223B0;
loc_82622338:
	// lwz r10,5600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5600);
	// lwz r9,5592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	// lwz r8,5596(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5596);
	// lwz r7,5592(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5592);
	// lwz r6,5600(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5600);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,5596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5596);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,5596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5596, ctx.r9.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r10,5600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5600, ctx.r10.u32);
	// stw r9,5592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5592, ctx.r9.u32);
	// b 0x826223b0
	goto loc_826223B0;
loc_826223A0:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
loc_826223A4:
	// lwz r4,11464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
loc_826223A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826246a8
	ctx.lr = 0x826223B0;
	sub_826246A8(ctx, base);
loc_826223B0:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826223c4
	if (!ctx.cr6.eq) goto loc_826223C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826228f8
	ctx.lr = 0x826223C4;
	sub_826228F8(ctx, base);
loc_826223C4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61760
	ctx.lr = 0x826223D0;
	__restfpr_15(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826223D8"))) PPC_WEAK_FUNC(sub_826223D8);
PPC_FUNC_IMPL(__imp__sub_826223D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// lwz r11,11456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11456);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82622410
	if (ctx.cr6.eq) goto loc_82622410;
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32752);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82622410
	if (ctx.cr6.lt) goto loc_82622410;
	// lfs f13,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82622410:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622418"))) PPC_WEAK_FUNC(sub_82622418);
PPC_FUNC_IMPL(__imp__sub_82622418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82622440;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622530
	if (ctx.cr0.eq) goto loc_82622530;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26456
	ctx.r4.s64 = ctx.r11.s64 + -26456;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826224A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26944
	ctx.r4.s64 = ctx.r11.s64 + -26944;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826224BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-27368
	ctx.r4.s64 = ctx.r11.s64 + -27368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826224D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826224F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262251c
	if (ctx.cr6.eq) goto loc_8262251C;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262251c
	if (ctx.cr6.eq) goto loc_8262251C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262251C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262251C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r11.u32);
	// lwz r4,11464(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11464);
	// bl 0x825f2510
	ctx.lr = 0x82622530;
	sub_825F2510(ctx, base);
loc_82622530:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622548"))) PPC_WEAK_FUNC(sub_82622548);
PPC_FUNC_IMPL(__imp__sub_82622548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82622550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622754
	if (ctx.cr6.eq) goto loc_82622754;
	// lwz r11,2700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622754
	if (ctx.cr6.eq) goto loc_82622754;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82622588
	if (!ctx.cr6.eq) goto loc_82622588;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82622614
	if (ctx.cr6.eq) goto loc_82622614;
loc_82622588:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82622614
	if (ctx.cr6.eq) goto loc_82622614;
	// stw r5,11476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11476, ctx.r5.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r4,11480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11480, ctx.r4.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,8688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8688, ctx.r11.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r29,11472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11472, ctx.r29.u32);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826225C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826225d4
	if (ctx.cr0.eq) goto loc_826225D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826251f8
	ctx.lr = 0x826225D4;
	sub_826251F8(ctx, base);
loc_826225D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826225F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13016
	ctx.r4.s64 = ctx.r11.s64 + 13016;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82622698
	goto loc_82622698;
loc_82622614:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622698
	if (ctx.cr0.eq) goto loc_82622698;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8262264c
	if (ctx.cr6.eq) goto loc_8262264C;
	// lwz r3,6148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262264c
	if (ctx.cr6.eq) goto loc_8262264C;
	// bl 0x826297a8
	ctx.lr = 0x8262264C;
	sub_826297A8(ctx, base);
loc_8262264C:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622668
	if (ctx.cr6.eq) goto loc_82622668;
	// bl 0x82624d48
	ctx.lr = 0x82622664;
	sub_82624D48(ctx, base);
	// b 0x82622698
	goto loc_82622698;
loc_82622668:
	// bl 0x829c1f08
	ctx.lr = 0x8262266C;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x82622670;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82622684
	if (ctx.cr0.eq) goto loc_82622684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82622690
	goto loc_82622690;
loc_82622684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
loc_82622690:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622698:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r29,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r29.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826226b8
	if (ctx.cr6.eq) goto loc_826226B8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82622710
	if (!ctx.cr6.eq) goto loc_82622710;
loc_826226B8:
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82622710
	if (!ctx.cr6.eq) goto loc_82622710;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// addi r3,r10,5236
	ctx.r3.s64 = ctx.r10.s64 + 5236;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x826226E4;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c710
	ctx.lr = 0x82622704;
	sub_8282C710(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82622710:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10336
	ctx.r4.s64 = ctx.r11.s64 + 10336;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622754
	if (ctx.cr0.eq) goto loc_82622754;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10336
	ctx.r4.s64 = ctx.r11.s64 + 10336;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82622760"))) PPC_WEAK_FUNC(sub_82622760);
PPC_FUNC_IMPL(__imp__sub_82622760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82622818
	if (ctx.cr6.eq) goto loc_82622818;
	// lwz r11,2700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622818
	if (ctx.cr6.eq) goto loc_82622818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262279C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82622810
	if (ctx.cr0.eq) goto loc_82622810;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,11464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826227c4
	if (ctx.cr6.eq) goto loc_826227C4;
	// lwz r3,6148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826227c4
	if (ctx.cr6.eq) goto loc_826227C4;
	// bl 0x826297a8
	ctx.lr = 0x826227C4;
	sub_826297A8(ctx, base);
loc_826227C4:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826227e0
	if (ctx.cr6.eq) goto loc_826227E0;
	// bl 0x82624d48
	ctx.lr = 0x826227DC;
	sub_82624D48(ctx, base);
	// b 0x82622810
	goto loc_82622810;
loc_826227E0:
	// bl 0x829c1f08
	ctx.lr = 0x826227E4;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x826227E8;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826227fc
	if (ctx.cr0.eq) goto loc_826227FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82622808
	goto loc_82622808;
loc_826227FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
loc_82622808:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82622810:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r11.u32);
loc_82622818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622830"))) PPC_WEAK_FUNC(sub_82622830);
PPC_FUNC_IMPL(__imp__sub_82622830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r4,11464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// b 0x826246a8
	sub_826246A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262285C"))) PPC_WEAK_FUNC(sub_8262285C);
PPC_FUNC_IMPL(__imp__sub_8262285C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82622860"))) PPC_WEAK_FUNC(sub_82622860);
PPC_FUNC_IMPL(__imp__sub_82622860) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82622548
	sub_82622548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82622870"))) PPC_WEAK_FUNC(sub_82622870);
PPC_FUNC_IMPL(__imp__sub_82622870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,1968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// lwz r9,8504(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8504);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x82622894
	if (!ctx.cr6.eq) goto loc_82622894;
	// lwz r11,11456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11456);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
loc_82622894:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
	// lwz r11,8492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8492);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826228f0
	if (ctx.cr6.eq) goto loc_826228F0;
	// lwz r11,924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826228cc
	if (ctx.cr6.eq) goto loc_826228CC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x826228e8
	if (!ctx.cr6.eq) goto loc_826228E8;
loc_826228CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,11128(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826228e8
	if (!ctx.cr6.gt) goto loc_826228E8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x826228f0
	if (!ctx.cr6.eq) goto loc_826228F0;
loc_826228E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826228F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826228F8"))) PPC_WEAK_FUNC(sub_826228F8);
PPC_FUNC_IMPL(__imp__sub_826228F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82622900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82622a5c
	if (ctx.cr6.eq) goto loc_82622A5C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,3584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82622a5c
	if (ctx.cr6.gt) goto loc_82622A5C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,3588(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3588);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,18616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3584, temp.u32);
	// beq cr6,0x826229ac
	if (ctx.cr6.eq) goto loc_826229AC;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r8,3564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3564);
	// addi r3,r9,5288
	ctx.r3.s64 = ctx.r9.s64 + 5288;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// lwz r10,660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// lwz r29,3564(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3564);
	// bl 0x82816528
	ctx.lr = 0x8262298C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8282c950
	ctx.lr = 0x826229A4;
	sub_8282C950(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r11.u32);
loc_826229AC:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,8500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8500);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82622a30
	if (!ctx.cr6.eq) goto loc_82622A30;
	// lwz r11,8496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8496);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826229dc
	if (ctx.cr6.lt) goto loc_826229DC;
	// beq cr6,0x82622a14
	if (ctx.cr6.eq) goto loc_82622A14;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826229f8
	if (ctx.cr6.lt) goto loc_826229F8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x82622a5c
	if (!ctx.cr6.lt) goto loc_82622A5C;
loc_826229DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3568);
	// bl 0x82622a68
	ctx.lr = 0x826229E8;
	sub_82622A68(ctx, base);
	// lis r5,29772
	ctx.r5.s64 = 1951137792;
	// lwz r6,3568(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3568);
	// ori r5,r5,15520
	ctx.r5.u64 = ctx.r5.u64 | 15520;
	// b 0x82622a50
	goto loc_82622A50;
loc_826229F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3576(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3576);
	// bl 0x82623098
	ctx.lr = 0x82622A04;
	sub_82623098(ctx, base);
	// lis r5,-10174
	ctx.r5.s64 = -666763264;
	// lwz r6,3576(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3576);
	// ori r5,r5,54098
	ctx.r5.u64 = ctx.r5.u64 | 54098;
	// b 0x82622a50
	goto loc_82622A50;
loc_82622A14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3572(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3572);
	// bl 0x82622e28
	ctx.lr = 0x82622A20;
	sub_82622E28(ctx, base);
	// lis r5,28060
	ctx.r5.s64 = 1838940160;
	// lwz r6,3572(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3572);
	// ori r5,r5,36747
	ctx.r5.u64 = ctx.r5.u64 | 36747;
	// b 0x82622a50
	goto loc_82622A50;
loc_82622A30:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82622a5c
	if (!ctx.cr6.eq) goto loc_82622A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// bl 0x826234e0
	ctx.lr = 0x82622A44;
	sub_826234E0(ctx, base);
	// lis r5,-4765
	ctx.r5.s64 = -312279040;
	// lwz r6,3580(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// ori r5,r5,32809
	ctx.r5.u64 = ctx.r5.u64 | 32809;
loc_82622A50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x82622A5C;
	sub_8282C950(ctx, base);
loc_82622A5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82622A68"))) PPC_WEAK_FUNC(sub_82622A68);
PPC_FUNC_IMPL(__imp__sub_82622A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82622A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lbz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x826452f0
	ctx.lr = 0x82622A9C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r10,668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 668);
	// lwz r9,672(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	// lwz r11,676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 676);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622AC8;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,84
	ctx.r4.s64 = ctx.r31.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r9,928(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622AF4;
	sub_826452F0(ctx, base);
	// lwz r11,2548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2548);
	// addi r4,r31,92
	ctx.r4.s64 = ctx.r31.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622B0C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,8496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8496);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622B28;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,4192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622B44;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11472);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622B60;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,11456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82622b78
	if (ctx.cr6.eq) goto loc_82622B78;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82622b8c
	if (!ctx.cr6.eq) goto loc_82622B8C;
loc_82622B78:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82622B8C;
	sub_826452F0(ctx, base);
loc_82622B8C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,5592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5592);
	// lwz r10,5600(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5600);
	// lwz r11,5596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5596);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622BFC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,124
	ctx.r4.s64 = ctx.r31.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,5508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5508);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622C18;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2900);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622C34;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,132
	ctx.r4.s64 = ctx.r31.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4156);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622C50;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,136
	ctx.r4.s64 = ctx.r31.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8724);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622C6C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8696);
	// lwz r9,8700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8700);
	// lwz r11,8704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8704);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622C98;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622CB4;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,156
	ctx.r4.s64 = ctx.r31.s64 + 156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11496);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622CD0;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,160
	ctx.r4.s64 = ctx.r31.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11344);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622CEC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,164
	ctx.r4.s64 = ctx.r31.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8508);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622D08;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622D28;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4164);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622D44;
	sub_826452F0(ctx, base);
	// lwz r11,3592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3592);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82622d80
	if (ctx.cr6.eq) goto loc_82622D80;
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,1632(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// lwz r9,1636(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622D7C;
	sub_826452F0(ctx, base);
	// stw r29,3592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3592, ctx.r29.u32);
loc_82622D80:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8524);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622D9C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,2996(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2996);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82622db8
	if (ctx.cr6.eq) goto loc_82622DB8;
	// lwz r11,2988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2988);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82622dbc
	goto loc_82622DBC;
loc_82622DB8:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82622DBC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82622DCC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,10796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10796);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622DE8;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2100);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622E04;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,212
	ctx.r4.s64 = ctx.r31.s64 + 212;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,9752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622E20;
	sub_826452F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82622E28"))) PPC_WEAK_FUNC(sub_82622E28);
PPC_FUNC_IMPL(__imp__sub_82622E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82622E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82622a68
	ctx.lr = 0x82622E40;
	sub_82622A68(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,10784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10784);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622E5C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622E78;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,12708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12708);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622E94;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,11100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11100);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622EB0;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,10788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10788);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622ECC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r3,r11,8768
	ctx.r3.s64 = ctx.r11.s64 + 8768;
	// bl 0x8281d960
	ctx.lr = 0x82622ED8;
	sub_8281D960(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x826452f0
	ctx.lr = 0x82622EEC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r11,8772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8772);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622F08;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,11156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11156);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622F24;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,10812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10812);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622F40;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,10764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10764);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622F5C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,12692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622F78;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12676);
	// lwz r9,12680(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12680);
	// lwz r11,12684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12684);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82622FA4;
	sub_826452F0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,11068(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11068);
	// bl 0x829b9720
	ctx.lr = 0x82622FBC;
	sub_829B9720(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82622fdc
	if (ctx.cr0.eq) goto loc_82622FDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82622FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82622fe0
	goto loc_82622FE0;
loc_82622FDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82622FE0:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82622FF4;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,8352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82623030
	if (ctx.cr6.eq) goto loc_82623030;
	// lwz r11,11056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11056);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623020;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,8352(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8352, ctx.r28.u32);
	// b 0x82623034
	goto loc_82623034;
loc_82623030:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82623034:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82623044;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,8356(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8356);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262307c
	if (ctx.cr6.eq) goto loc_8262307C;
	// lwz r11,11064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x8262306C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,8356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8356, ctx.r28.u32);
	// b 0x82623080
	goto loc_82623080;
loc_8262307C:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82623080:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82623090;
	sub_826452F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82623098"))) PPC_WEAK_FUNC(sub_82623098);
PPC_FUNC_IMPL(__imp__sub_82623098) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82622a68
	ctx.lr = 0x826230B8;
	sub_82622A68(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x826230D4;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11212);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x826230F0;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,284
	ctx.r4.s64 = ctx.r31.s64 + 284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r10,11196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11196);
	// lwz r9,11200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11200);
	// lwz r11,11204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11204);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x8262311C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r10,11184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11184);
	// lwz r9,11188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11188);
	// lwz r11,11192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11192);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623148;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,11168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11168);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623164;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,11164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11164);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623180;
	sub_826452F0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,11176(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11176);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r10,11180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11180);
	// lwz r11,11172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11172);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x826452f0
	ctx.lr = 0x826231F0;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,11220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11220);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x826452f0
	ctx.lr = 0x8262320C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r10,12548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12548);
	// lwz r9,12552(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12552);
	// lwz r11,12556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12556);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623238;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12536);
	// lwz r9,12540(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12540);
	// lwz r11,12544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12544);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623264;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,6156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826232a0
	if (ctx.cr6.eq) goto loc_826232A0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x826232A0;
	sub_826452F0(ctx, base);
loc_826232A0:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,6152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826232dc
	if (ctx.cr6.eq) goto loc_826232DC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x826232DC;
	sub_826452F0(ctx, base);
loc_826232DC:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826232F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x82623304;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,10396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623320;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,320
	ctx.r4.s64 = ctx.r31.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11320);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x8262333C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11324);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623358;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11216);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623374;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,364
	ctx.r4.s64 = ctx.r31.s64 + 364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11292);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623390;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,368
	ctx.r4.s64 = ctx.r31.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4020);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x826233AC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r3,r11,8768
	ctx.r3.s64 = ctx.r11.s64 + 8768;
	// bl 0x8281d960
	ctx.lr = 0x826233B8;
	sub_8281D960(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,348
	ctx.r4.s64 = ctx.r31.s64 + 348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x826233CC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r3,r11,8756
	ctx.r3.s64 = ctx.r11.s64 + 8756;
	// bl 0x8281d960
	ctx.lr = 0x826233D8;
	sub_8281D960(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x826233EC;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r31,356
	ctx.r4.s64 = ctx.r31.s64 + 356;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8772);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623408;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8760);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623424;
	sub_826452F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r30,8964(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826234a4
	if (ctx.cr6.eq) goto loc_826234A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82623454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8262349c
	if (ctx.cr0.eq) goto loc_8262349C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82623470;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// lwz r10,3288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623488
	if (ctx.cr6.eq) goto loc_82623488;
	// lwz r11,2044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2044);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82623488:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826234a4
	if (ctx.cr6.eq) goto loc_826234A4;
	// lwz r11,2044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2044);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x826234a4
	goto loc_826234A4;
loc_8262349C:
	// lwz r11,2044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2044);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_826234A4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,328
	ctx.r4.s64 = ctx.r31.s64 + 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x826234B4;
	sub_826452F0(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r31,332
	ctx.r4.s64 = ctx.r31.s64 + 332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826452f0
	ctx.lr = 0x826234C4;
	sub_826452F0(ctx, base);
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

__attribute__((alias("__imp__sub_826234E0"))) PPC_WEAK_FUNC(sub_826234E0);
PPC_FUNC_IMPL(__imp__sub_826234E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82622a68
	ctx.lr = 0x82623500;
	sub_82622A68(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,11376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11376);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x8262351C;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,11380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11380);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623538;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,11160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11160);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623554;
	sub_826452F0(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,11156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11156);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826452f0
	ctx.lr = 0x82623570;
	sub_826452F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82623588"))) PPC_WEAK_FUNC(sub_82623588);
PPC_FUNC_IMPL(__imp__sub_82623588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262360c
	if (ctx.cr6.eq) goto loc_8262360C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,1900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1900, ctx.r10.u32);
	// stw r9,1904(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1904, ctx.r9.u32);
	// stw r8,1908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1908, ctx.r8.u32);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1972);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826235DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,1888(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1888, ctx.r10.u32);
	// stw r9,1892(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1892, ctx.r9.u32);
	// stw r8,1896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1896, ctx.r8.u32);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1976);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262360C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8262360C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82623628"))) PPC_WEAK_FUNC(sub_82623628);
PPC_FUNC_IMPL(__imp__sub_82623628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82623630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623a4c
	if (ctx.cr6.eq) goto loc_82623A4C;
	// lwz r10,5508(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5508);
	// stw r10,5512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5512, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lbz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82623688
	if (!ctx.cr6.eq) goto loc_82623688;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r10,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r10,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r10.u32);
loc_82623688:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826236A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addic. r29,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r29.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,8480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8480, ctx.r10.u32);
	// stw r9,8484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8484, ctx.r9.u32);
	// stw r8,8488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8488, ctx.r8.u32);
	// beq 0x826236dc
	if (ctx.cr0.eq) goto loc_826236DC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826236dc
	if (ctx.cr6.eq) goto loc_826236DC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826236e0
	goto loc_826236E0;
loc_826236DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826236E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82623708
	if (ctx.cr0.eq) goto loc_82623708;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623708
	if (ctx.cr6.eq) goto loc_82623708;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8262370c
	goto loc_8262370C;
loc_82623708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262370C:
	// lis r4,8881
	ctx.r4.s64 = 582025216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,31093
	ctx.r4.u64 = ctx.r4.u64 | 31093;
	// bl 0x829e42d8
	ctx.lr = 0x82623720;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826238ec
	if (!ctx.cr0.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82623748
	if (ctx.cr0.eq) goto loc_82623748;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623748
	if (ctx.cr6.eq) goto loc_82623748;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8262374c
	goto loc_8262374C;
loc_82623748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8262374C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826145d0
	ctx.lr = 0x82623758;
	sub_826145D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826238ec
	if (!ctx.cr0.eq) goto loc_826238EC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,2548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2548, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,8496(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8496);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8262387c
	if (!ctx.cr6.eq) goto loc_8262387C;
	// lwz r11,8436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// lwz r11,8492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8492);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x826237c4
	if (ctx.cr0.eq) goto loc_826237C4;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826237c4
	if (ctx.cr6.eq) goto loc_826237C4;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826237c8
	goto loc_826237C8;
loc_826237C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826237C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x826237f0
	if (ctx.cr0.eq) goto loc_826237F0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826237f0
	if (ctx.cr6.eq) goto loc_826237F0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826237f4
	goto loc_826237F4;
loc_826237F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826237F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82643968
	ctx.lr = 0x82623800;
	sub_82643968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826238ec
	if (!ctx.cr0.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82623828
	if (ctx.cr0.eq) goto loc_82623828;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623828
	if (ctx.cr6.eq) goto loc_82623828;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8262382c
	goto loc_8262382C;
loc_82623828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8262382C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82623854
	if (ctx.cr0.eq) goto loc_82623854;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623854
	if (ctx.cr6.eq) goto loc_82623854;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82623858
	goto loc_82623858;
loc_82623854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82623858:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r4,-20550
	ctx.r4.s64 = -1346764800;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r4,59950
	ctx.r4.u64 = ctx.r4.u64 | 59950;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x829e3fd0
	ctx.lr = 0x82623878;
	sub_829E3FD0(ctx, base);
	// b 0x826238ec
	goto loc_826238EC;
loc_8262387C:
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x8262389c
	if (ctx.cr0.eq) goto loc_8262389C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262389c
	if (ctx.cr6.eq) goto loc_8262389C;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826238a0
	goto loc_826238A0;
loc_8262389C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826238A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826238ec
	if (ctx.cr6.eq) goto loc_826238EC;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x826238c8
	if (ctx.cr0.eq) goto loc_826238C8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826238c8
	if (ctx.cr6.eq) goto loc_826238C8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826238cc
	goto loc_826238CC;
loc_826238C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826238CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82643968
	ctx.lr = 0x826238D8;
	sub_82643968(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826238ec
	if (!ctx.cr0.eq) goto loc_826238EC;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r10,8496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8496, ctx.r10.u32);
loc_826238EC:
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x8260ddf8
	ctx.lr = 0x826238F8;
	sub_8260DDF8(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r10,4192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4192, ctx.r10.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,11472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11472, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82623934
	if (!ctx.cr6.eq) goto loc_82623934;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623934
	if (ctx.cr6.eq) goto loc_82623934;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,11456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11456, ctx.r10.u32);
loc_82623934:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lfs f11,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,5596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5596, ctx.r9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,5592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5592, ctx.r10.u32);
	// stw r9,5600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5600, ctx.r9.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r10,5508(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5508, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r10,2900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2900, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,4156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4156, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,8724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8724, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,8696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8696, ctx.r10.u32);
	// stw r9,8700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8700, ctx.r9.u32);
	// stw r8,8704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8704, ctx.r8.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x825e5328
	ctx.lr = 0x826239D4;
	sub_825E5328(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r10,11496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11496, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r10,10796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10796, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r10,2100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2100, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r10,11344(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11344, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r10,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r10,4164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4164, ctx.r10.u32);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,5508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82623a40
	if (ctx.cr6.eq) goto loc_82623A40;
	// lwz r11,5512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623a40
	if (!ctx.cr6.eq) goto loc_82623A40;
	// bl 0x824dae90
	ctx.lr = 0x82623A40;
	sub_824DAE90(ctx, base);
loc_82623A40:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,9752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9752, ctx.r10.u32);
loc_82623A4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82623A58"))) PPC_WEAK_FUNC(sub_82623A58);
PPC_FUNC_IMPL(__imp__sub_82623A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82623A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82623628
	ctx.lr = 0x82623A70;
	sub_82623628(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623cc8
	if (ctx.cr6.eq) goto loc_82623CC8;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,10784(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10784, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r10.u32);
	// stw r10,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r10,12708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12708, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r10,11100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11100, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r10,10788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10788, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r10,11156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11156, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// stw r10,10812(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10812, ctx.r10.u32);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r10,10764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10764);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82623af8
	if (ctx.cr6.eq) goto loc_82623AF8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82623af8
	if (!ctx.cr6.eq) goto loc_82623AF8;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x8260e328
	ctx.lr = 0x82623AF8;
	sub_8260E328(ctx, base);
loc_82623AF8:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r10,10764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10764, ctx.r10.u32);
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stfs f0,12692(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12692, temp.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r8,260(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r10,12680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12680, ctx.r10.u32);
	// stw r9,12684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12684, ctx.r9.u32);
	// stw r8,12676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12676, ctx.r8.u32);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82623b98
	if (ctx.cr6.eq) goto loc_82623B98;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623b98
	if (ctx.cr6.eq) goto loc_82623B98;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82623B5C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82623b98
	if (!ctx.cr0.eq) goto loc_82623B98;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82838fd0
	ctx.lr = 0x82623B74;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623b98
	if (!ctx.cr6.eq) goto loc_82623B98;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r27.u32);
loc_82623B98:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623bb4
	if (ctx.cr6.eq) goto loc_82623BB4;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82623bb8
	goto loc_82623BB8;
loc_82623BB4:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
loc_82623BB8:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// rldicr r5,r10,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825da9f8
	ctx.lr = 0x82623BD8;
	sub_825DA9F8(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,8768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8768);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// beq cr6,0x82623c48
	if (ctx.cr6.eq) goto loc_82623C48;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r29,r31,272
	ctx.r29.s64 = ctx.r31.s64 + 272;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623c48
	if (ctx.cr6.eq) goto loc_82623C48;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82623C0C;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82623c48
	if (!ctx.cr0.eq) goto loc_82623C48;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82838fd0
	ctx.lr = 0x82623C24;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623c48
	if (!ctx.cr6.eq) goto loc_82623C48;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
loc_82623C48:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623c60
	if (ctx.cr6.eq) goto loc_82623C60;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82623c64
	goto loc_82623C64;
loc_82623C60:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82623C64:
	// stw r11,11068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11068, ctx.r11.u32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623c80
	if (ctx.cr6.eq) goto loc_82623C80;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// b 0x82623c84
	goto loc_82623C84;
loc_82623C80:
	// stw r27,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r27.u32);
loc_82623C84:
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82623ca8
	if (ctx.cr6.eq) goto loc_82623CA8;
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,8352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8352, ctx.r11.u32);
	// stw r9,11052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11052, ctx.r9.u32);
	// stw r9,11056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11056, ctx.r9.u32);
loc_82623CA8:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82623cc8
	if (ctx.cr6.eq) goto loc_82623CC8;
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,8356(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8356, ctx.r11.u32);
	// stw r9,11060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11060, ctx.r9.u32);
	// stw r9,11064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11064, ctx.r9.u32);
loc_82623CC8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82623CD0"))) PPC_WEAK_FUNC(sub_82623CD0);
PPC_FUNC_IMPL(__imp__sub_82623CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82623CD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82623628
	ctx.lr = 0x82623CE8;
	sub_82623628(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262428c
	if (ctx.cr6.eq) goto loc_8262428C;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r9,11168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11168, ctx.r9.u32);
	// lfs f0,16356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r10,11164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11164, ctx.r10.u32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,11172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11172, ctx.r8.u32);
	// stw r10,11176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11176, ctx.r10.u32);
	// stw r9,11180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11180, ctx.r9.u32);
	// lbz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 236);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x82605e58
	ctx.lr = 0x82623D60;
	sub_82605E58(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 252);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x825fc440
	ctx.lr = 0x82623D78;
	sub_825FC440(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// bl 0x825fc440
	ctx.lr = 0x82623D90;
	sub_825FC440(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,11208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11208, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r10,11212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11212, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwz r8,292(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r10,11196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11196, ctx.r10.u32);
	// stw r9,11200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11200, ctx.r9.u32);
	// stw r8,11204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11204, ctx.r8.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r8,280(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r10,11184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11184, ctx.r10.u32);
	// stw r9,11188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11188, ctx.r9.u32);
	// stw r8,11192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11192, ctx.r8.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,6156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623e0c
	if (ctx.cr6.eq) goto loc_82623E0C;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// lwz r3,6156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82623E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82623E0C:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,6152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623e38
	if (ctx.cr6.eq) goto loc_82623E38;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// lwz r3,6152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82623E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82623E38:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11268(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11268, temp.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lfs f0,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10396(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 10396, temp.u32);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x82605e00
	ctx.lr = 0x82623E5C;
	sub_82605E00(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r10,11324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11324, ctx.r10.u32);
	// lwz r11,360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,11216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11216, ctx.r11.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stw r10,11292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11292, ctx.r10.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r10,4020(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4020, ctx.r10.u32);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623ec0
	if (!ctx.cr6.eq) goto loc_82623EC0;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,4048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4048, ctx.r28.u32);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lfs f1,11308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e0e60
	ctx.lr = 0x82623EB8;
	sub_824E0E60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82623eec
	goto loc_82623EEC;
loc_82623EC0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82623efc
	if (!ctx.cr6.eq) goto loc_82623EFC;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4048, ctx.r10.u32);
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lfs f1,11308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e0e60
	ctx.lr = 0x82623EE8;
	sub_824E0E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82623EEC:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,11308(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11308);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e0e60
	ctx.lr = 0x82623EFC;
	sub_824E0E60(ctx, base);
loc_82623EFC:
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82623f64
	if (ctx.cr6.eq) goto loc_82623F64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r29,r31,348
	ctx.r29.s64 = ctx.r31.s64 + 348;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623f64
	if (ctx.cr6.eq) goto loc_82623F64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82623F28;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82623f64
	if (!ctx.cr0.eq) goto loc_82623F64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82838fd0
	ctx.lr = 0x82623F40;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82623f64
	if (!ctx.cr6.eq) goto loc_82623F64;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r28.u32);
loc_82623F64:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82623f80
	if (ctx.cr6.eq) goto loc_82623F80;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82623f84
	goto loc_82623F84;
loc_82623F80:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_82623F84:
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825da9f8
	ctx.lr = 0x82623FA8;
	sub_825DA9F8(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82624008
	if (ctx.cr6.eq) goto loc_82624008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82623FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,11212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624008
	if (!ctx.cr6.eq) goto loc_82624008;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8281d9b0
	ctx.lr = 0x82623FF0;
	sub_8281D9B0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x825dad58
	ctx.lr = 0x82624008;
	sub_825DAD58(ctx, base);
loc_82624008:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8768);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// beq cr6,0x82624088
	if (ctx.cr6.eq) goto loc_82624088;
	// bl 0x824ca610
	ctx.lr = 0x82624024;
	sub_824CA610(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262404c
	if (ctx.cr6.eq) goto loc_8262404C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624048;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82624050
	goto loc_82624050;
loc_8262404C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82624050:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82624088
	if (!ctx.cr6.eq) goto loc_82624088;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82624088
	if (ctx.cr6.eq) goto loc_82624088;
	// lwz r11,2836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624088
	if (!ctx.cr6.eq) goto loc_82624088;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825fc440
	ctx.lr = 0x82624088;
	sub_825FC440(ctx, base);
loc_82624088:
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826240ec
	if (ctx.cr6.eq) goto loc_826240EC;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826240ec
	if (ctx.cr6.eq) goto loc_826240EC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826240B0;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826240ec
	if (!ctx.cr0.eq) goto loc_826240EC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82838fd0
	ctx.lr = 0x826240C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826240ec
	if (!ctx.cr6.eq) goto loc_826240EC;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
loc_826240EC:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624104
	if (ctx.cr6.eq) goto loc_82624104;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// b 0x82624108
	goto loc_82624108;
loc_82624104:
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_82624108:
	// lwz r11,352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825da9f8
	ctx.lr = 0x8262412C;
	sub_825DA9F8(ctx, base);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8262418c
	if (ctx.cr6.eq) goto loc_8262418C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r28,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,1604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8262418c
	if (!ctx.cr6.eq) goto loc_8262418C;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8281d9b0
	ctx.lr = 0x82624174;
	sub_8281D9B0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x825dad58
	ctx.lr = 0x8262418C;
	sub_825DAD58(ctx, base);
loc_8262418C:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8756);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// beq cr6,0x8262420c
	if (ctx.cr6.eq) goto loc_8262420C;
	// bl 0x824ca610
	ctx.lr = 0x826241A8;
	sub_824CA610(ctx, base);
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826241d0
	if (ctx.cr6.eq) goto loc_826241D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826241CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826241d4
	goto loc_826241D4;
loc_826241D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826241D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8262420c
	if (!ctx.cr6.eq) goto loc_8262420C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262420c
	if (ctx.cr6.eq) goto loc_8262420C;
	// lwz r11,2836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8262420c
	if (!ctx.cr6.eq) goto loc_8262420C;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x825fc440
	ctx.lr = 0x8262420C;
	sub_825FC440(ctx, base);
loc_8262420C:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8262428c
	if (ctx.cr6.eq) goto loc_8262428C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262422C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,8964(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8964);
	// beq 0x82624280
	if (ctx.cr0.eq) goto loc_82624280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262424C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,3284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// lwz r30,3288(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262426c
	if (ctx.cr6.eq) goto loc_8262426C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x8265c5c0
	ctx.lr = 0x8262426C;
	sub_8265C5C0(ctx, base);
loc_8262426C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8262428c
	if (ctx.cr6.eq) goto loc_8262428C;
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82624284
	goto loc_82624284;
loc_82624280:
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
loc_82624284:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8265c5c0
	ctx.lr = 0x8262428C;
	sub_8265C5C0(ctx, base);
loc_8262428C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624298"))) PPC_WEAK_FUNC(sub_82624298);
PPC_FUNC_IMPL(__imp__sub_82624298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82623628
	ctx.lr = 0x826242B8;
	sub_82623628(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826242f4
	if (ctx.cr6.eq) goto loc_826242F4;
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,11376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11376, ctx.r10.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// stw r10,11380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11380, ctx.r10.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r10,11160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11160, ctx.r10.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r10,11156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11156, ctx.r10.u32);
loc_826242F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624310"))) PPC_WEAK_FUNC(sub_82624310);
PPC_FUNC_IMPL(__imp__sub_82624310) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82620ef0
	sub_82620EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624318"))) PPC_WEAK_FUNC(sub_82624318);
PPC_FUNC_IMPL(__imp__sub_82624318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82624320;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,1968(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1968);
	// lwz r11,12584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826243d4
	if (ctx.cr6.eq) goto loc_826243D4;
	// bl 0x824defd8
	ctx.lr = 0x82624340;
	sub_824DEFD8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826243d4
	if (ctx.cr0.eq) goto loc_826243D4;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82833108
	ctx.lr = 0x82624350;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826243c0
	if (ctx.cr0.eq) goto loc_826243C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r26,8(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r24,20(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82833180
	ctx.lr = 0x8262437C;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// addi r11,r11,22992
	ctx.r11.s64 = ctx.r11.s64 + 22992;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
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
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// stw r24,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r24.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// b 0x826243c4
	goto loc_826243C4;
loc_826243C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826243C4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826243D4;
	sub_82833A30(ctx, base);
loc_826243D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826243E0"))) PPC_WEAK_FUNC(sub_826243E0);
PPC_FUNC_IMPL(__imp__sub_826243E0) {
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
	// lwz r11,3420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624410
	if (ctx.cr6.eq) goto loc_82624410;
	// lwz r11,3428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826245b0
	if (ctx.cr6.eq) goto loc_826245B0;
loc_82624410:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826245b0
	if (ctx.cr6.eq) goto loc_826245B0;
	// lwz r9,1952(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826245b0
	if (ctx.cr6.eq) goto loc_826245B0;
	// lwz r10,1524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826245b0
	if (ctx.cr6.eq) goto loc_826245B0;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r8,1356(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1356);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826245b0
	if (!ctx.cr6.eq) goto loc_826245B0;
	// lwz r9,932(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 932);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826245b0
	if (ctx.cr0.eq) goto loc_826245B0;
	// lfs f0,984(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2632, temp.u32);
	// lwz r10,11524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82624470
	if (ctx.cr6.eq) goto loc_82624470;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,11524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11524, ctx.r10.u32);
loc_82624470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82624478;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x8262447C;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82624490
	if (ctx.cr0.eq) goto loc_82624490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8262449c
	goto loc_8262449C;
loc_82624490:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
loc_8262449C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826244A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82624598
	if (ctx.cr6.eq) goto loc_82624598;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826244cc
	if (ctx.cr6.eq) goto loc_826244CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,11464(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// bl 0x826246a8
	ctx.lr = 0x826244C8;
	sub_826246A8(ctx, base);
	// b 0x82624598
	goto loc_82624598;
loc_826244CC:
	// lwz r10,2700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2700);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82624500
	if (!ctx.cr6.eq) goto loc_82624500;
	// lwz r10,8688(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8688);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82624500
	if (!ctx.cr6.eq) goto loc_82624500;
	// lwz r11,924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82624500
	if (ctx.cr6.eq) goto loc_82624500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624c08
	ctx.lr = 0x826244F8;
	sub_82624C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82624598
	if (!ctx.cr0.eq) goto loc_82624598;
loc_82624500:
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,4104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262451c
	if (ctx.cr6.eq) goto loc_8262451C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82624d48
	ctx.lr = 0x82624518;
	sub_82624D48(ctx, base);
	// b 0x82624598
	goto loc_82624598;
loc_8262451C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82624524;
	sub_829C1F08(ctx, base);
	// bl 0x82611600
	ctx.lr = 0x82624528;
	sub_82611600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8262453c
	if (ctx.cr0.eq) goto loc_8262453C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// b 0x82624548
	goto loc_82624548;
loc_8262453C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2628);
loc_82624548:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82624564
	if (ctx.cr6.eq) goto loc_82624564;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x825dac00
	ctx.lr = 0x82624564;
	sub_825DAC00(ctx, base);
loc_82624564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8262456C;
	sub_829C1F08(ctx, base);
	// bl 0x82643690
	ctx.lr = 0x82624570;
	sub_82643690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82624584
	if (ctx.cr0.eq) goto loc_82624584;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82624590
	goto loc_82624590;
loc_82624584:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
loc_82624590:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82624598:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,8504(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8504);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826245b0
	if (!ctx.cr6.eq) goto loc_826245B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,10800(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10800, ctx.r10.u32);
loc_826245B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826245D0"))) PPC_WEAK_FUNC(sub_826245D0);
PPC_FUNC_IMPL(__imp__sub_826245D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r11,932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262468c
	if (ctx.cr0.eq) goto loc_8262468C;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82624614
	if (ctx.cr0.eq) goto loc_82624614;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82624614
	if (ctx.cr6.eq) goto loc_82624614;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82624618
	goto loc_82624618;
loc_82624614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82624618:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262462c
	if (ctx.cr6.eq) goto loc_8262462C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826437e0
	ctx.lr = 0x82624628;
	sub_826437E0(ctx, base);
	// b 0x82624630
	goto loc_82624630;
loc_8262462C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82624630:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8262468c
	if (ctx.cr6.eq) goto loc_8262468C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,4104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4104);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8262468c
	if (ctx.cr0.eq) goto loc_8262468C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,0
	ctx.r4.s64 = ctx.r11.s64 + 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-6212
	ctx.r3.s64 = -407109632;
	// ori r3,r3,23597
	ctx.r3.u64 = ctx.r3.u64 | 23597;
	// b 0x82624690
	goto loc_82624690;
loc_8262468C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82624690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826246A8"))) PPC_WEAK_FUNC(sub_826246A8);
PPC_FUNC_IMPL(__imp__sub_826246A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826246B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	ctx.lr = 0x826246CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826248b4
	if (ctx.cr0.eq) goto loc_826248B4;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826248b4
	if (ctx.cr6.eq) goto loc_826248B4;
	// lwz r11,11464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11464);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826246f4
	if (ctx.cr6.eq) goto loc_826246F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826248b4
	if (!ctx.cr6.eq) goto loc_826248B4;
loc_826246F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-26384
	ctx.r4.s64 = ctx.r11.s64 + -26384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26456
	ctx.r4.s64 = ctx.r11.s64 + -26456;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-13552
	ctx.r4.s64 = ctx.r11.s64 + -13552;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262474C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26944
	ctx.r4.s64 = ctx.r11.s64 + -26944;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-27368
	ctx.r4.s64 = ctx.r11.s64 + -27368;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-26264
	ctx.r4.s64 = ctx.r11.s64 + -26264;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826247A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826247c8
	if (ctx.cr6.eq) goto loc_826247C8;
	// lwz r3,1676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826247c8
	if (ctx.cr6.eq) goto loc_826247C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826247C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826247C8:
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,2716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2716, ctx.r29.u32);
	// addi r3,r11,-29536
	ctx.r3.s64 = ctx.r11.s64 + -29536;
	// bl 0x82816528
	ctx.lr = 0x826247DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82642640
	ctx.lr = 0x826247E8;
	sub_82642640(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r9,1968(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r10.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r10,11528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11528, ctx.r10.u32);
	// stw r29,2708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2708, ctx.r29.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8262481c
	if (!ctx.cr6.eq) goto loc_8262481C;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x826248b4
	if (ctx.cr6.lt) goto loc_826248B4;
loc_8262481C:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82624868
	if (!ctx.cr6.eq) goto loc_82624868;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// addi r3,r10,21504
	ctx.r3.s64 = ctx.r10.s64 + 21504;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x8262484C;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8282c950
	ctx.lr = 0x82624864;
	sub_8282C950(ctx, base);
	// b 0x826248b4
	goto loc_826248B4;
loc_82624868:
	// lwz r11,956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826248b4
	if (!ctx.cr6.eq) goto loc_826248B4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,15864
	ctx.r11.s64 = ctx.r11.s64 + 15864;
	// addi r3,r10,21504
	ctx.r3.s64 = ctx.r10.s64 + 21504;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// bl 0x82816528
	ctx.lr = 0x82624894;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,1968(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x826248B4;
	sub_8282C818(ctx, base);
loc_826248B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826248C0"))) PPC_WEAK_FUNC(sub_826248C0);
PPC_FUNC_IMPL(__imp__sub_826248C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826248C8;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// lwz r29,1968(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// beq cr6,0x82624bec
	if (ctx.cr6.eq) goto loc_82624BEC;
	// lwz r11,8500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8500);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82624b04
	if (ctx.cr6.eq) goto loc_82624B04;
	// lwz r11,2908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624b04
	if (!ctx.cr6.eq) goto loc_82624B04;
	// lwz r11,10984(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624b04
	if (!ctx.cr6.eq) goto loc_82624B04;
	// lwz r4,1952(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// lfs f0,30356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fsel f13,f12,f13,f30
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8262498c
	if (!ctx.cr6.gt) goto loc_8262498C;
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ld r5,1640(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1640);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828c9b20
	ctx.lr = 0x82624974;
	sub_828C9B20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// b 0x826249e4
	goto loc_826249E4;
loc_8262498C:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x826249B0;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r8,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x826249E0;
	sub_82332E18(ctx, base);
	// lwz r8,328(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
loc_826249E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f30,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f31,360(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// bl 0x825f5940
	ctx.lr = 0x82624A04;
	sub_825F5940(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,2536(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2536);
	// ld r9,620(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 620);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// ld r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lwz r6,344(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lfs f2,3404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3404);
	ctx.f2.f64 = double(temp.f32);
	// ld r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// lfs f1,3400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3400);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lwz r29,628(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	// lfs f4,18308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18308);
	ctx.f4.f64 = double(temp.f32);
	// lwz r27,360(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// std r7,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r7.u64);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r26,1012(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1012);
	// li r25,100
	ctx.r25.s64 = 100;
	// stw r6,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// li r24,-1
	ctx.r24.s64 = -1;
	// std r3,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r3.u64);
	// li r23,7
	ctx.r23.s64 = 7;
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// addi r22,r1,368
	ctx.r22.s64 = ctx.r1.s64 + 368;
	// stb r31,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r31.u8);
	// lwz r8,2000(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2000);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// ld r5,1976(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1976);
	// ld r6,1984(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1984);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,1992(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 1992);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stw r25,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r25.u32);
	// stw r24,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r24.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stb r28,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r28.u8);
	// stb r23,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r23.u8);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stb r31,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r31.u8);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82624ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8281d960
	ctx.lr = 0x82624AE0;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82624b00
	if (ctx.cr0.eq) goto loc_82624B00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82624b04
	goto loc_82624B04;
loc_82624B00:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82624B04:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r11,4192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bcc
	if (!ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82624bcc
	if (ctx.cr0.lt) goto loc_82624BCC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82624bcc
	if (ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,5628(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624bcc
	if (ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,2380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bcc
	if (!ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,5632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624bcc
	if (ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,2316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 2316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bcc
	if (!ctx.cr6.eq) goto loc_82624BCC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824e9ed0
	ctx.lr = 0x82624B70;
	sub_824E9ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82624bcc
	if (!ctx.cr0.eq) goto loc_82624BCC;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r11,11468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11468, ctx.r11.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624b98
	if (ctx.cr6.eq) goto loc_82624B98;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82624b9c
	goto loc_82624B9C;
loc_82624B98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82624B9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824e9c98
	ctx.lr = 0x82624BA8;
	sub_824E9C98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82624bcc
	if (ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,3428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bec
	if (!ctx.cr6.eq) goto loc_82624BEC;
	// stw r28,3428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3428, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263f5e8
	ctx.lr = 0x82624BC8;
	sub_8263F5E8(ctx, base);
	// b 0x82624bec
	goto loc_82624BEC;
loc_82624BCC:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// stw r31,11468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11468, ctx.r31.u32);
	// lwz r11,3428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624bec
	if (ctx.cr6.eq) goto loc_82624BEC;
	// stw r31,3428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3428, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8263f6b8
	ctx.lr = 0x82624BEC;
	sub_8263F6B8(ctx, base);
loc_82624BEC:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400f38
	ctx.lr = 0x82624BF4;
	sub_82400F38(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624C08"))) PPC_WEAK_FUNC(sub_82624C08);
PPC_FUNC_IMPL(__imp__sub_82624C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82624C10;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,8500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8500);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82624d30
	if (ctx.cr6.eq) goto loc_82624D30;
	// lwz r11,2908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624d30
	if (!ctx.cr6.eq) goto loc_82624D30;
	// lwz r11,10984(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624d30
	if (!ctx.cr6.eq) goto loc_82624D30;
	// bl 0x825f8288
	ctx.lr = 0x82624C64;
	sub_825F8288(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82624cb4
	if (!ctx.cr0.eq) goto loc_82624CB4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,11468(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11468);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82624C84;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82624ca8
	if (ctx.cr0.eq) goto loc_82624CA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82333a20
	ctx.lr = 0x82624CA0;
	sub_82333A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82624cac
	goto loc_82624CAC;
loc_82624CA8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82624CAC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82624d20
	if (ctx.cr6.eq) goto loc_82624D20;
loc_82624CB4:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,11524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11524, ctx.r28.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r28,2700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2700, ctx.r28.u32);
	// lwz r11,960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82624d00
	if (!ctx.cr6.eq) goto loc_82624D00;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r10,10336
	ctx.r10.s64 = ctx.r10.s64 + 10336;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,-27820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27820);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x82624D00;
	sub_826436E8(ctx, base);
loc_82624D00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82624d10
	if (ctx.cr6.eq) goto loc_82624D10;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x82624d14
	goto loc_82624D14;
loc_82624D10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82624D14:
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x824e9af8
	ctx.lr = 0x82624D1C;
	sub_824E9AF8(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82624D20:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400f38
	ctx.lr = 0x82624D28;
	sub_82400F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82624d3c
	goto loc_82624D3C;
loc_82624D30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400f38
	ctx.lr = 0x82624D38;
	sub_82400F38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82624D3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82624D48"))) PPC_WEAK_FUNC(sub_82624D48);
PPC_FUNC_IMPL(__imp__sub_82624D48) {
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
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,5388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82624dcc
	if (ctx.cr6.eq) goto loc_82624DCC;
	// lwz r10,2900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2900);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82624dcc
	if (!ctx.cr6.eq) goto loc_82624DCC;
	// lwz r11,10780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624dcc
	if (!ctx.cr6.eq) goto loc_82624DCC;
	// bl 0x826251f8
	ctx.lr = 0x82624D8C;
	sub_826251F8(ctx, base);
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r10,r10,21256
	ctx.r10.s64 = ctx.r10.s64 + 21256;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lfs f1,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x82624DBC;
	sub_826436E8(ctx, base);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2900, ctx.r11.u32);
	// stw r30,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r30.u32);
loc_82624DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82624DE8"))) PPC_WEAK_FUNC(sub_82624DE8);
PPC_FUNC_IMPL(__imp__sub_82624DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82624DF0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61744
	ctx.lr = 0x82624DF8;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625118
	if (ctx.cr6.eq) goto loc_82625118;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,10788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10788, ctx.r29.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r29,11376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11376, ctx.r29.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r10,10796(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10796, ctx.r10.u32);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r8,624(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r9,8732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8732, ctx.r9.u32);
	// stw r8,8736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8736, ctx.r8.u32);
	// stw r11,8740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8740, ctx.r11.u32);
	// bl 0x826251f8
	ctx.lr = 0x82624E50;
	sub_826251F8(ctx, base);
	// lwz r3,1968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x824dae90
	ctx.lr = 0x82624E58;
	sub_824DAE90(ctx, base);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13016
	ctx.r4.s64 = ctx.r11.s64 + 13016;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r11,4016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624f24
	if (ctx.cr6.eq) goto loc_82624F24;
	// lwz r11,8964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624f24
	if (ctx.cr6.eq) goto loc_82624F24;
	// lwz r10,2004(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// lwz r11,2012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2012);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82624f24
	if (!ctx.cr6.eq) goto loc_82624F24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82624EE4;
	sub_829C1F08(ctx, base);
	// bl 0x82611600
	ctx.lr = 0x82624EE8;
	sub_82611600(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82624f10
	if (ctx.cr0.eq) goto loc_82624F10;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82624f1c
	goto loc_82624F1C;
loc_82624F10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
loc_82624F1C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82624F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82624F24:
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lwz r10,1492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// blt cr6,0x82625118
	if (ctx.cr6.lt) goto loc_82625118;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r10,10548(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lbz r9,1942(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1942);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82625118
	if (!ctx.cr0.eq) goto loc_82625118;
	// lbz r10,1937(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1937);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82625118
	if (ctx.cr0.eq) goto loc_82625118;
	// lwz r10,4152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4152);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,4144(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4144);
	// lwz r7,4148(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4148);
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82625118
	if (!ctx.cr6.gt) goto loc_82625118;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r8,624(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8684(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8684);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// lfs f13,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lfs f12,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r8,8415
	ctx.r8.s64 = 8415;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f8,f8
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f30,f11,f8
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f29,f10,f8
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fadds f27,f7,f30
	ctx.f27.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f6,f29
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f28,f13,f12,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x8262507C;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82625118
	if (ctx.cr0.eq) goto loc_82625118;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lbz r11,1937(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1937);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82625118
	if (ctx.cr0.eq) goto loc_82625118;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f13,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f0,32748(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,8415
	ctx.r8.s64 = 8415;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,1968(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// bl 0x82825330
	ctx.lr = 0x82625108;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82625118
	if (ctx.cr0.eq) goto loc_82625118;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8269e510
	ctx.lr = 0x82625118;
	sub_8269E510(ctx, base);
loc_82625118:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61790
	ctx.lr = 0x82625124;
	__restfpr_27(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625128"))) PPC_WEAK_FUNC(sub_82625128);
PPC_FUNC_IMPL(__imp__sub_82625128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,2996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2996);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82625178
	if (ctx.cr6.eq) goto loc_82625178;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-6896
	ctx.r4.s64 = ctx.r11.s64 + -6896;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2996, ctx.r11.u32);
	// bl 0x8269e510
	ctx.lr = 0x82625178;
	sub_8269E510(ctx, base);
loc_82625178:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13016
	ctx.r4.s64 = ctx.r11.s64 + 13016;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826251B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826251D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1968(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11524, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826251F8"))) PPC_WEAK_FUNC(sub_826251F8);
PPC_FUNC_IMPL(__imp__sub_826251F8) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,1952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// ld r5,1652(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1652);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x826252a0
	if (!ctx.cr6.gt) goto loc_826252A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828c9b20
	ctx.lr = 0x82625248;
	sub_828C9B20(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x82625258;
	sub_82332E18(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8692(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8692);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8704(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8704, ctx.r10.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,8696(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8696, ctx.r9.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,8700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8700, ctx.r8.u32);
	// b 0x826252ec
	goto loc_826252EC;
loc_826252A0:
	// lwz r30,1968(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,8692(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8692);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x828c9b20
	ctx.lr = 0x826252B0;
	sub_828C9B20(ctx, base);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8704, ctx.r11.u32);
	// stw r10,8696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8696, ctx.r10.u32);
	// stw r9,8700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8700, ctx.r9.u32);
loc_826252EC:
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

__attribute__((alias("__imp__sub_82625308"))) PPC_WEAK_FUNC(sub_82625308);
PPC_FUNC_IMPL(__imp__sub_82625308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2900(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2900, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625320"))) PPC_WEAK_FUNC(sub_82625320);
PPC_FUNC_IMPL(__imp__sub_82625320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82625340;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625394
	if (ctx.cr0.eq) goto loc_82625394;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625394
	if (ctx.cr6.eq) goto loc_82625394;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625388
	if (ctx.cr6.eq) goto loc_82625388;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625388
	if (ctx.cr6.eq) goto loc_82625388;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82625394
	if (!ctx.cr6.eq) goto loc_82625394;
loc_82625388:
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82625394;
	sub_82409BE0(ctx, base);
loc_82625394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826253A8"))) PPC_WEAK_FUNC(sub_826253A8);
PPC_FUNC_IMPL(__imp__sub_826253A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826253C8;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8262541c
	if (ctx.cr0.eq) goto loc_8262541C;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262541c
	if (ctx.cr6.eq) goto loc_8262541C;
	// lis r10,-30770
	ctx.r10.s64 = -2016542720;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,19939
	ctx.r10.u64 = ctx.r10.u64 | 19939;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625410
	if (ctx.cr6.eq) goto loc_82625410;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625410
	if (ctx.cr6.eq) goto loc_82625410;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8262541c
	if (!ctx.cr6.eq) goto loc_8262541C;
loc_82625410:
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8262541C;
	sub_82409BE0(ctx, base);
loc_8262541C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625430"))) PPC_WEAK_FUNC(sub_82625430);
PPC_FUNC_IMPL(__imp__sub_82625430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82625450;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625494
	if (ctx.cr0.eq) goto loc_82625494;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625494
	if (ctx.cr6.eq) goto loc_82625494;
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625488
	if (ctx.cr6.eq) goto loc_82625488;
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82625494
	if (!ctx.cr6.eq) goto loc_82625494;
loc_82625488:
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82625494;
	sub_82409BE0(ctx, base);
loc_82625494:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826254A8"))) PPC_WEAK_FUNC(sub_826254A8);
PPC_FUNC_IMPL(__imp__sub_826254A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826254C8;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826254fc
	if (ctx.cr0.eq) goto loc_826254FC;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826254fc
	if (ctx.cr6.eq) goto loc_826254FC;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826254fc
	if (!ctx.cr6.eq) goto loc_826254FC;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826254FC;
	sub_82409BE0(ctx, base);
loc_826254FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625510"))) PPC_WEAK_FUNC(sub_82625510);
PPC_FUNC_IMPL(__imp__sub_82625510) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82625534;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826255f8
	if (ctx.cr0.eq) goto loc_826255F8;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826255f8
	if (ctx.cr6.eq) goto loc_826255F8;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82625680
	if (ctx.cr6.gt) goto loc_82625680;
	// beq cr6,0x8262564c
	if (ctx.cr6.eq) goto loc_8262564C;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8262560c
	if (ctx.cr6.eq) goto loc_8262560C;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826256b0
	if (ctx.cr6.eq) goto loc_826256B0;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8262564c
	if (ctx.cr6.eq) goto loc_8262564C;
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826255f8
	if (!ctx.cr6.eq) goto loc_826255F8;
loc_826255A0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21552
	ctx.r4.s64 = ctx.r11.s64 + 21552;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826255C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826255f8
	if (!ctx.cr0.eq) goto loc_826255F8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r11,r11,21552
	ctx.r11.s64 = ctx.r11.s64 + 21552;
loc_826255D0:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,-32532(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
loc_826255DC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826436e8
	ctx.lr = 0x826255F8;
	sub_826436E8(ctx, base);
loc_826255F8:
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
loc_8262560C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21672
	ctx.r4.s64 = ctx.r11.s64 + 21672;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262562C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826255f8
	if (!ctx.cr0.eq) goto loc_826255F8;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,21672
	ctx.r10.s64 = ctx.r10.s64 + 21672;
loc_8262563C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,-32532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32532);
	ctx.f1.f64 = double(temp.f32);
	// b 0x826255dc
	goto loc_826255DC;
loc_8262564C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21416
	ctx.r4.s64 = ctx.r11.s64 + 21416;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262566C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826255f8
	if (!ctx.cr0.eq) goto loc_826255F8;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// addi r10,r10,21416
	ctx.r10.s64 = ctx.r10.s64 + 21416;
	// b 0x8262563c
	goto loc_8262563C;
loc_82625680:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826255a0
	if (ctx.cr6.eq) goto loc_826255A0;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826256b0
	if (ctx.cr6.eq) goto loc_826256B0;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826255f8
	if (!ctx.cr6.eq) goto loc_826255F8;
loc_826256B0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826256D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826255f8
	if (!ctx.cr0.eq) goto loc_826255F8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r11,r11,21280
	ctx.r11.s64 = ctx.r11.s64 + 21280;
	// b 0x826255d0
	goto loc_826255D0;
}

__attribute__((alias("__imp__sub_826256E8"))) PPC_WEAK_FUNC(sub_826256E8);
PPC_FUNC_IMPL(__imp__sub_826256E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8262570C;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826257bc
	if (ctx.cr0.eq) goto loc_826257BC;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826257bc
	if (ctx.cr6.eq) goto loc_826257BC;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82625838
	if (ctx.cr6.gt) goto loc_82625838;
	// beq cr6,0x82625804
	if (ctx.cr6.eq) goto loc_82625804;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826257d0
	if (ctx.cr6.eq) goto loc_826257D0;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625868
	if (ctx.cr6.eq) goto loc_82625868;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625804
	if (ctx.cr6.eq) goto loc_82625804;
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826257bc
	if (!ctx.cr6.eq) goto loc_826257BC;
loc_82625778:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21552
	ctx.r4.s64 = ctx.r11.s64 + 21552;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826257bc
	if (ctx.cr0.eq) goto loc_826257BC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,21552
	ctx.r4.s64 = ctx.r11.s64 + 21552;
loc_826257A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826257BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826257BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826257D0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21672
	ctx.r4.s64 = ctx.r11.s64 + 21672;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826257F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826257bc
	if (ctx.cr0.eq) goto loc_826257BC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,21672
	ctx.r4.s64 = ctx.r11.s64 + 21672;
	// b 0x826257a8
	goto loc_826257A8;
loc_82625804:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21416
	ctx.r4.s64 = ctx.r11.s64 + 21416;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826257bc
	if (ctx.cr0.eq) goto loc_826257BC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,21416
	ctx.r4.s64 = ctx.r11.s64 + 21416;
	// b 0x826257a8
	goto loc_826257A8;
loc_82625838:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625778
	if (ctx.cr6.eq) goto loc_82625778;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625868
	if (ctx.cr6.eq) goto loc_82625868;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826257bc
	if (!ctx.cr6.eq) goto loc_826257BC;
loc_82625868:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826257bc
	if (ctx.cr0.eq) goto loc_826257BC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// addi r4,r11,21280
	ctx.r4.s64 = ctx.r11.s64 + 21280;
	// b 0x826257a8
	goto loc_826257A8;
}

__attribute__((alias("__imp__sub_826258A0"))) PPC_WEAK_FUNC(sub_826258A0);
PPC_FUNC_IMPL(__imp__sub_826258A0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x826258BC;
	sub_82409BE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625944
	if (ctx.cr0.eq) goto loc_82625944;
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625944
	if (ctx.cr6.eq) goto loc_82625944;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8262598c
	if (ctx.cr6.gt) goto loc_8262598C;
	// beq cr6,0x82625970
	if (ctx.cr6.eq) goto loc_82625970;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625954
	if (ctx.cr6.eq) goto loc_82625954;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826259bc
	if (ctx.cr6.eq) goto loc_826259BC;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625970
	if (ctx.cr6.eq) goto loc_82625970;
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82625944
	if (!ctx.cr6.eq) goto loc_82625944;
loc_82625928:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82625944
	if (!ctx.cr6.gt) goto loc_82625944;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
loc_82625940:
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82625944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82625954:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82625944
	if (!ctx.cr6.gt) goto loc_82625944;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// b 0x82625940
	goto loc_82625940;
loc_82625970:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82625944
	if (!ctx.cr6.gt) goto loc_82625944;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// b 0x82625940
	goto loc_82625940;
loc_8262598C:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625928
	if (ctx.cr6.eq) goto loc_82625928;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826259bc
	if (ctx.cr6.eq) goto loc_826259BC;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82625944
	if (!ctx.cr6.eq) goto loc_82625944;
loc_826259BC:
	// lwz r11,672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82625944
	if (!ctx.cr6.gt) goto loc_82625944;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// b 0x82625940
	goto loc_82625940;
}

__attribute__((alias("__imp__sub_826259D8"))) PPC_WEAK_FUNC(sub_826259D8);
PPC_FUNC_IMPL(__imp__sub_826259D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826259E0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61744
	ctx.lr = 0x826259E8;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625edc
	if (ctx.cr6.eq) goto loc_82625EDC;
	// lwz r10,1952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f29,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
loc_82625A20:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82625a2c
	if (ctx.cr0.eq) goto loc_82625A2C;
	// fmuls f11,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
loc_82625A2C:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82625a3c
	if (ctx.cr0.eq) goto loc_82625A3C;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82625a20
	goto loc_82625A20;
loc_82625A3C:
	// fmr f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f29.f64;
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82625A48:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82625a54
	if (ctx.cr0.eq) goto loc_82625A54;
	// fmuls f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_82625A54:
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82625a64
	if (ctx.cr0.eq) goto loc_82625A64;
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// b 0x82625a48
	goto loc_82625A48;
loc_82625A64:
	// fadds f12,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,20416
	ctx.r28.s64 = ctx.r11.s64 + 20416;
	// lwz r9,1516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
	// lwz r11,1492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,9940(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 9940);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f30,f11,f12,f0
	ctx.f30.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// beq cr6,0x82625adc
	if (ctx.cr6.eq) goto loc_82625ADC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,17052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17052);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// ble cr6,0x82625ab0
	if (!ctx.cr6.gt) goto loc_82625AB0;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x82625ad4
	goto loc_82625AD4;
loc_82625AB0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,18004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18004);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// ble cr6,0x82625ac8
	if (!ctx.cr6.gt) goto loc_82625AC8;
	// li r10,192
	ctx.r10.s64 = 192;
	// b 0x82625ad4
	goto loc_82625AD4;
loc_82625AC8:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x82625adc
	if (!ctx.cr6.gt) goto loc_82625ADC;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82625AD4:
	// stb r10,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r10.u8);
	// b 0x82625ae0
	goto loc_82625AE0;
loc_82625ADC:
	// stb r31,192(r11)
	PPC_STORE_U8(ctx.r11.u32 + 192, ctx.r31.u8);
loc_82625AE0:
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lfs f12,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82625bbc
	if (ctx.cr6.gt) goto loc_82625BBC;
	// lfs f13,172(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lfd f13,17880(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17880);
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82625bbc
	if (!ctx.cr6.lt) goto loc_82625BBC;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lwz r9,8696(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8696);
	// lwz r8,8700(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8700);
	// lwz r7,8704(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8704);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_82625B4C:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82625b58
	if (ctx.cr0.eq) goto loc_82625B58;
	// fmuls f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82625B58:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82625b68
	if (ctx.cr0.eq) goto loc_82625B68;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82625b4c
	goto loc_82625B4C;
loc_82625B68:
	// lwz r9,8700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8700);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r8,8696(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8696);
	// lwz r7,8704(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8704);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
loc_82625B88:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82625b94
	if (ctx.cr0.eq) goto loc_82625B94;
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82625B94:
	// rlwinm. r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82625ba4
	if (ctx.cr0.eq) goto loc_82625BA4;
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// b 0x82625b88
	goto loc_82625B88;
loc_82625BA4:
	// fadds f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82625bcc
	if (ctx.cr6.gt) goto loc_82625BCC;
loc_82625BBC:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,10780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82625be0
	if (ctx.cr6.eq) goto loc_82625BE0;
loc_82625BCC:
	// lwz r10,2908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625be0
	if (!ctx.cr6.eq) goto loc_82625BE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8724, ctx.r10.u32);
loc_82625BE0:
	// lwz r3,1968(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// bl 0x829c2520
	ctx.lr = 0x82625BE8;
	sub_829C2520(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82625c34
	if (ctx.cr0.eq) goto loc_82625C34;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stfs f31,472(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stfs f31,468(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r31,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r31.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r10,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r10.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r9,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r9.u32);
	// stw r8,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r8.u32);
	// stw r7,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r7.u32);
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
loc_82625C34:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,10804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625c98
	if (!ctx.cr6.eq) goto loc_82625C98;
	// lwz r10,10780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625c98
	if (!ctx.cr6.eq) goto loc_82625C98;
	// lwz r10,10788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625c98
	if (!ctx.cr6.eq) goto loc_82625C98;
	// lwz r10,1520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82625c98
	if (ctx.cr6.eq) goto loc_82625C98;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// lwz r6,660(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r6.u32);
	// b 0x82625c9c
	goto loc_82625C9C;
loc_82625C98:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82625C9C:
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82625cb8
	if (ctx.cr0.eq) goto loc_82625CB8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82625cb8
	if (ctx.cr6.eq) goto loc_82625CB8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82625CB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82625ec8
	if (ctx.cr6.eq) goto loc_82625EC8;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,2820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625e5c
	if (!ctx.cr6.eq) goto loc_82625E5C;
	// lwz r11,1520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82625e5c
	if (ctx.cr6.eq) goto loc_82625E5C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82625d28
	if (ctx.cr6.eq) goto loc_82625D28;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82643c78
	ctx.lr = 0x82625D04;
	sub_82643C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625d28
	if (ctx.cr0.eq) goto loc_82625D28;
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,11164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625e5c
	if (!ctx.cr6.eq) goto loc_82625E5C;
	// lwz r11,11168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82625e5c
	if (!ctx.cr6.eq) goto loc_82625E5C;
loc_82625D28:
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// lwz r10,10780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82625e5c
	if (!ctx.cr6.eq) goto loc_82625E5C;
	// lwz r11,2908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82625e5c
	if (!ctx.cr6.eq) goto loc_82625E5C;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82625e5c
	if (!ctx.cr6.gt) goto loc_82625E5C;
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,1656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,1660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x82625D74;
	sub_824F97D8(ctx, base);
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f10,f29
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f1,f9,f28,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f2,f10,f28,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f0.f64));
	// bl 0x82a4e678
	ctx.lr = 0x82625DB8;
	sub_82A4E678(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1968(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// li r9,672
	ctx.r9.s64 = 672;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,17592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17592);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f0.u32);
	// lwz r11,1968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1968);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,928(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 928);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r8,932(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	// lwz r11,936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 936);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r11,672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 672);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// lwz r8,668(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 668);
	// lwz r10,676(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 676);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82625E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82625E5C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82625ec8
	if (ctx.cr6.eq) goto loc_82625EC8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82643c78
	ctx.lr = 0x82625E84;
	sub_82643C78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82625ec8
	if (ctx.cr0.eq) goto loc_82625EC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8262a5d0
	ctx.lr = 0x82625E9C;
	sub_8262A5D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8262a5d0
	ctx.lr = 0x82625EA8;
	sub_8262A5D0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82633570
	ctx.lr = 0x82625EC8;
	sub_82633570(ctx, base);
loc_82625EC8:
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82625edc
	if (!ctx.cr6.eq) goto loc_82625EDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826228f8
	ctx.lr = 0x82625EDC;
	sub_826228F8(ctx, base);
loc_82625EDC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61790
	ctx.lr = 0x82625EE8;
	__restfpr_27(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82625EF0"))) PPC_WEAK_FUNC(sub_82625EF0);
PPC_FUNC_IMPL(__imp__sub_82625EF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2700);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82625F00"))) PPC_WEAK_FUNC(sub_82625F00);
PPC_FUNC_IMPL(__imp__sub_82625F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82625F08;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82626148
	if (ctx.cr6.eq) goto loc_82626148;
	// lwz r29,1968(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82626148
	if (ctx.cr6.eq) goto loc_82626148;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-7368
	ctx.r10.s64 = -482869248;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r10,31108
	ctx.r10.u64 = ctx.r10.u64 | 31108;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82625f88
	if (ctx.cr6.eq) goto loc_82625F88;
	// lfs f1,8396(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8396);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82625f88
	if (!ctx.cr6.gt) goto loc_82625F88;
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-2464
	ctx.r11.s64 = ctx.r11.s64 + -2464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82611658
	ctx.lr = 0x82625F84;
	sub_82611658(ctx, base);
	// stw r30,8400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8400, ctx.r30.u32);
loc_82625F88:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,9764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9764, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,12688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12688, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r30.u32);
	// stw r30,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r30,2544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2544, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// addi r9,r11,6228
	ctx.r9.s64 = ctx.r11.s64 + 6228;
loc_82626004:
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// bne 0x82626004
	if (!ctx.cr0.eq) goto loc_82626004;
	// stw r30,11316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11316, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,2548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,8496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8496, ctx.r29.u32);
	// beq cr6,0x82626044
	if (ctx.cr6.eq) goto loc_82626044;
	// bl 0x825e3cf0
	ctx.lr = 0x82626044;
	sub_825E3CF0(ctx, base);
loc_82626044:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,1968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,4192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262606c
	if (ctx.cr6.eq) goto loc_8262606C;
	// stw r29,2708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2708, ctx.r29.u32);
	// b 0x82626148
	goto loc_82626148;
loc_8262606C:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,-12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// bl 0x826285e8
	ctx.lr = 0x82626084;
	sub_826285E8(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826260A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// bl 0x829c2520
	ctx.lr = 0x826260BC;
	sub_829C2520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82626100
	if (ctx.cr0.eq) goto loc_82626100;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stfs f31,472(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 472, temp.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stfs f31,468(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 468, temp.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r10,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r9,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r9.u32);
	// stw r8,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r8.u32);
	// stw r7,460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 460, ctx.r7.u32);
	// stw r6,464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 464, ctx.r6.u32);
loc_82626100:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,1968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r11,10784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10784);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82626140
	if (ctx.cr6.eq) goto loc_82626140;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82626138
	if (ctx.cr6.eq) goto loc_82626138;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82626148
	if (!ctx.cr6.eq) goto loc_82626148;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82626144
	goto loc_82626144;
loc_82626138:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82626144
	goto loc_82626144;
loc_82626140:
	// li r11,6
	ctx.r11.s64 = 6;
loc_82626144:
	// stw r11,10784(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10784, ctx.r11.u32);
loc_82626148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82626158"))) PPC_WEAK_FUNC(sub_82626158);
PPC_FUNC_IMPL(__imp__sub_82626158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8262628c
	if (ctx.cr6.eq) goto loc_8262628C;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r30.u32);
	// stw r30,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,12708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12708, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r30,2636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2636, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x82628f68
	ctx.lr = 0x826261EC;
	sub_82628F68(ctx, base);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r9,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r9.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262625C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// stw r30,10788(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10788, ctx.r30.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// bl 0x825f6e78
	ctx.lr = 0x8262628C;
	sub_825F6E78(ctx, base);
loc_8262628C:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r30,1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1972, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826262B8"))) PPC_WEAK_FUNC(sub_826262B8);
PPC_FUNC_IMPL(__imp__sub_826262B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -100);
	// lwz r9,1968(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1968);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8504(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8504);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// stw r8,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r8.u32);
	// beq cr6,0x82626468
	if (ctx.cr6.eq) goto loc_82626468;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8262642c
	if (ctx.cr6.eq) goto loc_8262642C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x826263e0
	if (ctx.cr6.eq) goto loc_826263E0;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x826263a4
	if (ctx.cr6.eq) goto loc_826263A4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f0,908(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30356);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -100);
	// lwz r10,1952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// lfs f12,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f0,f11,f12,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82626378
	if (ctx.cr6.gt) goto loc_82626378;
	// lwz r10,10780(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10780);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82626358
	if (ctx.cr6.eq) goto loc_82626358;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r10.u32);
loc_82626358:
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,-108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82626378:
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
loc_826263A4:
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
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
loc_826263E0:
	// lwz r10,11456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11456);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// beq cr6,0x82626400
	if (ctx.cr6.eq) goto loc_82626400;
	// b 0x82621800
	sub_82621800(ctx, base);
	return;
loc_82626400:
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
loc_8262642C:
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
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
loc_82626468:
	// lwz r10,-108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// b 0x826259d8
	sub_826259D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8262647C"))) PPC_WEAK_FUNC(sub_8262647C);
PPC_FUNC_IMPL(__imp__sub_8262647C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82626480"))) PPC_WEAK_FUNC(sub_82626480);
PPC_FUNC_IMPL(__imp__sub_82626480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82626488;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82626b8c
	if (ctx.cr6.eq) goto loc_82626B8C;
	// lwz r28,1968(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82626b8c
	if (ctx.cr6.eq) goto loc_82626B8C;
	// lwz r10,1504(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r25,10804(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10804);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8262699c
	if (ctx.cr6.eq) goto loc_8262699C;
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// lfs f0,-32720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8262699c
	if (!ctx.cr6.lt) goto loc_8262699C;
	// lfs f13,1044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8262699c
	if (!ctx.cr6.lt) goto loc_8262699C;
	// addi r29,r31,-112
	ctx.r29.s64 = ctx.r31.s64 + -112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826299f8
	ctx.lr = 0x82626508;
	sub_826299F8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r10,1952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// lfs f13,252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsel f13,f12,f13,f31
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82626580
	if (!ctx.cr6.lt) goto loc_82626580;
	// lwz r10,2648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2648);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82626580
	if (ctx.cr6.eq) goto loc_82626580;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,-32156
	ctx.r10.s64 = -2107375616;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-27928
	ctx.r4.s64 = ctx.r10.s64 + -27928;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262656C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r30,2648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2648, ctx.r30.u32);
loc_82626580:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfs f30,30356(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30356);
	ctx.f30.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -100);
	// lwz r9,1952(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1952);
	// lfs f0,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f13,f13,f0,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x8262671c
	if (!ctx.cr6.lt) goto loc_8262671C;
	// stw r30,2628(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2628, ctx.r30.u32);
	// lwz r11,10780(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826266b8
	if (!ctx.cr6.eq) goto loc_826266B8;
	// lwz r11,4104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826266b8
	if (!ctx.cr6.eq) goto loc_826266B8;
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826265F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82626644
	if (!ctx.cr0.eq) goto loc_82626644;
	// lwz r11,10764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82626644
	if (!ctx.cr6.eq) goto loc_82626644;
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r10,-28696
	ctx.r10.s64 = ctx.r10.s64 + -28696;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lfs f1,2756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826436e8
	ctx.lr = 0x82626644;
	sub_826436E8(ctx, base);
loc_82626644:
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262666C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826266b8
	if (!ctx.cr0.eq) goto loc_826266B8;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r9,-28504
	ctx.r9.s64 = ctx.r9.s64 + -28504;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,-100
	ctx.r3.s64 = ctx.r10.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lfs f1,2748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2748);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826439e8
	ctx.lr = 0x826266B8;
	sub_826439E8(ctx, base);
loc_826266B8:
	// lwz r11,10816(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10816);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// lwz r11,10804(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10804);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82626704
	if (ctx.cr6.eq) goto loc_82626704;
	// stw r30,10804(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10804, ctx.r30.u32);
	// stw r30,10808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10808, ctx.r30.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r30,2636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2636, ctx.r30.u32);
loc_82626704:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r30,2640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2640, ctx.r30.u32);
	// b 0x82626a3c
	goto loc_82626A3C;
loc_8262671C:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82626a3c
	if (ctx.cr6.lt) goto loc_82626A3C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,-28504
	ctx.r4.s64 = ctx.r10.s64 + -28504;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// addi r4,r11,-28696
	ctx.r4.s64 = ctx.r11.s64 + -28696;
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262677C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,10932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10932);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82626870
	if (!ctx.cr6.eq) goto loc_82626870;
	// lwz r10,11024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826267b4
	if (ctx.cr6.eq) goto loc_826267B4;
	// lwz r10,11028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11028);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82626870
	if (!ctx.cr6.eq) goto loc_82626870;
loc_826267B4:
	// lwz r10,10780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10780);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826285e8
	ctx.lr = 0x8262682C;
	sub_826285E8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// lwz r11,-108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82626870
	if (ctx.cr6.eq) goto loc_82626870;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82626870:
	// lwz r11,10932(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826268b4
	if (ctx.cr6.eq) goto loc_826268B4;
	// lwz r11,10780(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10780);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826268b4
	if (ctx.cr6.eq) goto loc_826268B4;
	// lwz r11,10804(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10804);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826268b4
	if (ctx.cr6.eq) goto loc_826268B4;
	// lwz r11,10816(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10816);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826268b4
	if (ctx.cr6.eq) goto loc_826268B4;
	// lwz r11,11060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11060);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826268b4
	if (ctx.cr6.eq) goto loc_826268B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825f6e78
	ctx.lr = 0x826268B4;
	sub_825F6E78(ctx, base);
loc_826268B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8262698c
	if (!ctx.cr6.eq) goto loc_8262698C;
	// lwz r11,4104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8262698c
	if (ctx.cr6.eq) goto loc_8262698C;
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,-100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// bl 0x8262a5d0
	ctx.lr = 0x826268E4;
	sub_8262A5D0(ctx, base);
	// bl 0x8281d960
	ctx.lr = 0x826268E8;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82626a3c
	if (!ctx.cr0.eq) goto loc_82626A3C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,1968(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82626a3c
	if (ctx.cr6.eq) goto loc_82626A3C;
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// lfs f0,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82626960
	if (ctx.cr6.lt) goto loc_82626960;
	// lfs f0,452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82626960
	if (!ctx.cr6.lt) goto loc_82626960;
	// lwz r11,10788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82626960
	if (!ctx.cr6.eq) goto loc_82626960;
	// lwz r11,11008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82626960
	if (!ctx.cr6.eq) goto loc_82626960;
	// lwz r11,5388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626958
	if (ctx.cr6.eq) goto loc_82626958;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82626960
	if (ctx.cr6.eq) goto loc_82626960;
loc_82626958:
	// stw r26,10788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10788, ctx.r26.u32);
	// b 0x82626a3c
	goto loc_82626A3C;
loc_82626960:
	// lwz r11,5388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626a3c
	if (ctx.cr6.eq) goto loc_82626A3C;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82626a3c
	if (!ctx.cr6.eq) goto loc_82626A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82626a3c
	goto loc_82626A3C;
loc_8262698C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82627088
	ctx.lr = 0x82626998;
	sub_82627088(ctx, base);
	// b 0x82626a3c
	goto loc_82626A3C;
loc_8262699C:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32157
	ctx.r11.s64 = -2107441152;
	// stw r30,10808(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10808, ctx.r30.u32);
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// stw r30,10804(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10804, ctx.r30.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// stw r30,2636(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2636, ctx.r30.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826269E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82626a3c
	if (!ctx.cr0.eq) goto loc_82626A3C;
	// lwz r11,4104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82626a3c
	if (!ctx.cr6.eq) goto loc_82626A3C;
	// lis r9,-32157
	ctx.r9.s64 = -2107441152;
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r9,-28504
	ctx.r9.s64 = ctx.r9.s64 + -28504;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rldicr r7,r30,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,-100
	ctx.r3.s64 = ctx.r10.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lfs f1,2748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2748);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826439e8
	ctx.lr = 0x82626A3C;
	sub_826439E8(ctx, base);
loc_82626A3C:
	// lwz r11,10804(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82626ab0
	if (!ctx.cr6.eq) goto loc_82626AB0;
	// lwz r11,8400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82626ab0
	if (ctx.cr6.eq) goto loc_82626AB0;
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lfs f0,-32720(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -100);
	// lwz r10,1952(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1952);
	// lfs f13,1040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82626a84
	if (!ctx.cr6.lt) goto loc_82626A84;
	// lfs f13,1044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82626ab0
	if (ctx.cr6.lt) goto loc_82626AB0;
loc_82626A84:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32157
	ctx.r10.s64 = -2107441152;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,-28504
	ctx.r4.s64 = ctx.r10.s64 + -28504;
	// addi r3,r11,-100
	ctx.r3.s64 = ctx.r11.s64 + -100;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// bl 0x826290a8
	ctx.lr = 0x82626AB0;
	sub_826290A8(ctx, base);
loc_82626AB0:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// bl 0x82629d80
	ctx.lr = 0x82626AC4;
	sub_82629D80(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,10984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10984);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82626af8
	if (ctx.cr6.eq) goto loc_82626AF8;
	// lwz r10,10804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82626af8
	if (ctx.cr6.eq) goto loc_82626AF8;
	// stw r26,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r26.u32);
	// stw r26,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r26.u32);
loc_82626AF8:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,10804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82626b38
	if (ctx.cr6.eq) goto loc_82626B38;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82626b30
	if (ctx.cr6.eq) goto loc_82626B30;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82626b44
	if (!ctx.cr6.eq) goto loc_82626B44;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82626b3c
	goto loc_82626B3C;
loc_82626B30:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82626b3c
	goto loc_82626B3C;
loc_82626B38:
	// li r10,6
	ctx.r10.s64 = 6;
loc_82626B3C:
	// stw r10,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r10.u32);
	// stw r10,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r10.u32);
loc_82626B44:
	// cmpwi cr6,r25,9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 9, ctx.xer);
	// beq cr6,0x82626b64
	if (ctx.cr6.eq) goto loc_82626B64;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// beq cr6,0x82626b64
	if (ctx.cr6.eq) goto loc_82626B64;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// beq cr6,0x82626b64
	if (ctx.cr6.eq) goto loc_82626B64;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// bne cr6,0x82626b8c
	if (!ctx.cr6.eq) goto loc_82626B8C;
loc_82626B64:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// lwz r11,1968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1968);
	// lwz r10,10804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82626b8c
	if (ctx.cr6.eq) goto loc_82626B8C;
	// stw r25,10804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10804, ctx.r25.u32);
	// stw r25,10808(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10808, ctx.r25.u32);
loc_82626B8C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

