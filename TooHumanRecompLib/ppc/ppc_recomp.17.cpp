#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823B2D60"))) PPC_WEAK_FUNC(sub_823B2D60);
PPC_FUNC_IMPL(__imp__sub_823B2D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2da0
	if (!ctx.cr0.eq) goto loc_823B2DA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30988(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30988, ctx.r11.u32);
	// addi r3,r9,-14244
	ctx.r3.s64 = ctx.r9.s64 + -14244;
	// bl 0x82816528
	ctx.lr = 0x823B2D98;
	sub_82816528(ctx, base);
	// stw r3,-30992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30992, ctx.r3.u32);
	// b 0x823b2da4
	goto loc_823B2DA4;
loc_823B2DA0:
	// lwz r3,-30992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30992);
loc_823B2DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2DB8"))) PPC_WEAK_FUNC(sub_823B2DB8);
PPC_FUNC_IMPL(__imp__sub_823B2DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2e08
	ctx.lr = 0x823B2DD8;
	sub_823B2E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2DEC;
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

__attribute__((alias("__imp__sub_823B2E08"))) PPC_WEAK_FUNC(sub_823B2E08);
PPC_FUNC_IMPL(__imp__sub_823B2E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28188
	ctx.r31.s64 = ctx.r11.s64 + -28188;
	// lwz r11,-28192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2e50
	if (!ctx.cr0.eq) goto loc_823B2E50;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22548
	ctx.r9.s64 = ctx.r9.s64 + -22548;
	// stw r11,-28192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21944
	ctx.r3.s64 = ctx.r11.s64 + -21944;
	// bl 0x82a4c758
	ctx.lr = 0x823B2E50;
	sub_82A4C758(ctx, base);
loc_823B2E50:
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

__attribute__((alias("__imp__sub_823B2E68"))) PPC_WEAK_FUNC(sub_823B2E68);
PPC_FUNC_IMPL(__imp__sub_823B2E68) {
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
	// li r3,6704
	ctx.r3.s64 = 6704;
	// bl 0x82833108
	ctx.lr = 0x823B2E7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b2e8c
	if (ctx.cr0.eq) goto loc_823B2E8C;
	// bl 0x82509468
	ctx.lr = 0x823B2E88;
	sub_82509468(ctx, base);
	// b 0x823b2e90
	goto loc_823B2E90;
loc_823B2E8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2E90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2EA0"))) PPC_WEAK_FUNC(sub_823B2EA0);
PPC_FUNC_IMPL(__imp__sub_823B2EA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6704
	ctx.r3.s64 = 6704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2EA8"))) PPC_WEAK_FUNC(sub_823B2EA8);
PPC_FUNC_IMPL(__imp__sub_823B2EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2ee8
	if (!ctx.cr0.eq) goto loc_823B2EE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30996, ctx.r11.u32);
	// addi r3,r9,-14124
	ctx.r3.s64 = ctx.r9.s64 + -14124;
	// bl 0x82816528
	ctx.lr = 0x823B2EE0;
	sub_82816528(ctx, base);
	// stw r3,-31000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31000, ctx.r3.u32);
	// b 0x823b2eec
	goto loc_823B2EEC;
loc_823B2EE8:
	// lwz r3,-31000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31000);
loc_823B2EEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2F00"))) PPC_WEAK_FUNC(sub_823B2F00);
PPC_FUNC_IMPL(__imp__sub_823B2F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2f50
	ctx.lr = 0x823B2F20;
	sub_823B2F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2F34;
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

__attribute__((alias("__imp__sub_823B2F50"))) PPC_WEAK_FUNC(sub_823B2F50);
PPC_FUNC_IMPL(__imp__sub_823B2F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27244
	ctx.r31.s64 = ctx.r11.s64 + -27244;
	// lwz r11,-27248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2f98
	if (!ctx.cr0.eq) goto loc_823B2F98;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20052
	ctx.r9.s64 = ctx.r9.s64 + -20052;
	// stw r11,-27248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27248, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21968
	ctx.r3.s64 = ctx.r11.s64 + -21968;
	// bl 0x82a4c758
	ctx.lr = 0x823B2F98;
	sub_82A4C758(ctx, base);
loc_823B2F98:
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

__attribute__((alias("__imp__sub_823B2FB0"))) PPC_WEAK_FUNC(sub_823B2FB0);
PPC_FUNC_IMPL(__imp__sub_823B2FB0) {
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
	ctx.lr = 0x823B2FC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b2fd8
	if (ctx.cr0.eq) goto loc_823B2FD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db048
	ctx.lr = 0x823B2FD4;
	sub_823DB048(ctx, base);
	// b 0x823b2fdc
	goto loc_823B2FDC;
loc_823B2FD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2FDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b2ff0
	if (ctx.cr6.eq) goto loc_823B2FF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B2FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3000"))) PPC_WEAK_FUNC(sub_823B3000);
PPC_FUNC_IMPL(__imp__sub_823B3000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3040
	if (!ctx.cr0.eq) goto loc_823B3040;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31004, ctx.r11.u32);
	// addi r3,r9,-14108
	ctx.r3.s64 = ctx.r9.s64 + -14108;
	// bl 0x82816528
	ctx.lr = 0x823B3038;
	sub_82816528(ctx, base);
	// stw r3,-31008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31008, ctx.r3.u32);
	// b 0x823b3044
	goto loc_823B3044;
loc_823B3040:
	// lwz r3,-31008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31008);
loc_823B3044:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3058"))) PPC_WEAK_FUNC(sub_823B3058);
PPC_FUNC_IMPL(__imp__sub_823B3058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b30a8
	ctx.lr = 0x823B3078;
	sub_823B30A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B308C;
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

__attribute__((alias("__imp__sub_823B30A8"))) PPC_WEAK_FUNC(sub_823B30A8);
PPC_FUNC_IMPL(__imp__sub_823B30A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27236
	ctx.r31.s64 = ctx.r11.s64 + -27236;
	// lwz r11,-27240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b30f0
	if (!ctx.cr0.eq) goto loc_823B30F0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-19784
	ctx.r9.s64 = ctx.r9.s64 + -19784;
	// stw r11,-27240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27240, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21992
	ctx.r3.s64 = ctx.r11.s64 + -21992;
	// bl 0x82a4c758
	ctx.lr = 0x823B30F0;
	sub_82A4C758(ctx, base);
loc_823B30F0:
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

__attribute__((alias("__imp__sub_823B3108"))) PPC_WEAK_FUNC(sub_823B3108);
PPC_FUNC_IMPL(__imp__sub_823B3108) {
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
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B311C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b312c
	if (ctx.cr0.eq) goto loc_823B312C;
	// bl 0x8250abf8
	ctx.lr = 0x823B3128;
	sub_8250ABF8(ctx, base);
	// b 0x823b3130
	goto loc_823B3130;
loc_823B312C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3130:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3140"))) PPC_WEAK_FUNC(sub_823B3140);
PPC_FUNC_IMPL(__imp__sub_823B3140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31012);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3180
	if (!ctx.cr0.eq) goto loc_823B3180;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31012, ctx.r11.u32);
	// addi r3,r9,-14084
	ctx.r3.s64 = ctx.r9.s64 + -14084;
	// bl 0x82816528
	ctx.lr = 0x823B3178;
	sub_82816528(ctx, base);
	// stw r3,-31016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31016, ctx.r3.u32);
	// b 0x823b3184
	goto loc_823B3184;
loc_823B3180:
	// lwz r3,-31016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31016);
loc_823B3184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3198"))) PPC_WEAK_FUNC(sub_823B3198);
PPC_FUNC_IMPL(__imp__sub_823B3198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b31e8
	ctx.lr = 0x823B31B8;
	sub_823B31E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B31CC;
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

__attribute__((alias("__imp__sub_823B31E8"))) PPC_WEAK_FUNC(sub_823B31E8);
PPC_FUNC_IMPL(__imp__sub_823B31E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27228
	ctx.r31.s64 = ctx.r11.s64 + -27228;
	// lwz r11,-27232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3230
	if (!ctx.cr0.eq) goto loc_823B3230;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17280
	ctx.r9.s64 = ctx.r9.s64 + -17280;
	// stw r11,-27232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27232, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22016
	ctx.r3.s64 = ctx.r11.s64 + -22016;
	// bl 0x82a4c758
	ctx.lr = 0x823B3230;
	sub_82A4C758(ctx, base);
loc_823B3230:
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

__attribute__((alias("__imp__sub_823B3248"))) PPC_WEAK_FUNC(sub_823B3248);
PPC_FUNC_IMPL(__imp__sub_823B3248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B3260;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b32a4
	if (ctx.cr0.eq) goto loc_823B32A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B3270;
	sub_8250ABF8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r11,15704
	ctx.r11.s64 = ctx.r11.s64 + 15704;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,18132
	ctx.r10.s64 = ctx.r10.s64 + 18132;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// b 0x823b32a8
	goto loc_823B32A8;
loc_823B32A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B32A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B32C0"))) PPC_WEAK_FUNC(sub_823B32C0);
PPC_FUNC_IMPL(__imp__sub_823B32C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3300
	if (!ctx.cr0.eq) goto loc_823B3300;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31020, ctx.r11.u32);
	// addi r3,r9,-13968
	ctx.r3.s64 = ctx.r9.s64 + -13968;
	// bl 0x82816528
	ctx.lr = 0x823B32F8;
	sub_82816528(ctx, base);
	// stw r3,-31024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31024, ctx.r3.u32);
	// b 0x823b3304
	goto loc_823B3304;
loc_823B3300:
	// lwz r3,-31024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31024);
loc_823B3304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3318"))) PPC_WEAK_FUNC(sub_823B3318);
PPC_FUNC_IMPL(__imp__sub_823B3318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3368
	ctx.lr = 0x823B3338;
	sub_823B3368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B334C;
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

__attribute__((alias("__imp__sub_823B3368"))) PPC_WEAK_FUNC(sub_823B3368);
PPC_FUNC_IMPL(__imp__sub_823B3368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27220
	ctx.r31.s64 = ctx.r11.s64 + -27220;
	// lwz r11,-27224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27224);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b33b0
	if (!ctx.cr0.eq) goto loc_823B33B0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17260
	ctx.r9.s64 = ctx.r9.s64 + -17260;
	// stw r11,-27224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27224, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// bl 0x82a4c758
	ctx.lr = 0x823B33B0;
	sub_82A4C758(ctx, base);
loc_823B33B0:
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

__attribute__((alias("__imp__sub_823B33C8"))) PPC_WEAK_FUNC(sub_823B33C8);
PPC_FUNC_IMPL(__imp__sub_823B33C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B33E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b3424
	if (ctx.cr0.eq) goto loc_823B3424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B33F0;
	sub_8250ABF8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r11,18184
	ctx.r11.s64 = ctx.r11.s64 + 18184;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,20612
	ctx.r10.s64 = ctx.r10.s64 + 20612;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// b 0x823b3428
	goto loc_823B3428;
loc_823B3424:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3428:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3440"))) PPC_WEAK_FUNC(sub_823B3440);
PPC_FUNC_IMPL(__imp__sub_823B3440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3480
	if (!ctx.cr0.eq) goto loc_823B3480;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31028, ctx.r11.u32);
	// addi r3,r9,-13932
	ctx.r3.s64 = ctx.r9.s64 + -13932;
	// bl 0x82816528
	ctx.lr = 0x823B3478;
	sub_82816528(ctx, base);
	// stw r3,-31032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31032, ctx.r3.u32);
	// b 0x823b3484
	goto loc_823B3484;
loc_823B3480:
	// lwz r3,-31032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31032);
loc_823B3484:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3498"))) PPC_WEAK_FUNC(sub_823B3498);
PPC_FUNC_IMPL(__imp__sub_823B3498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b34e8
	ctx.lr = 0x823B34B8;
	sub_823B34E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B34CC;
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

__attribute__((alias("__imp__sub_823B34E8"))) PPC_WEAK_FUNC(sub_823B34E8);
PPC_FUNC_IMPL(__imp__sub_823B34E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27212
	ctx.r31.s64 = ctx.r11.s64 + -27212;
	// lwz r11,-27216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3530
	if (!ctx.cr0.eq) goto loc_823B3530;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17240
	ctx.r9.s64 = ctx.r9.s64 + -17240;
	// stw r11,-27216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27216, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22064
	ctx.r3.s64 = ctx.r11.s64 + -22064;
	// bl 0x82a4c758
	ctx.lr = 0x823B3530;
	sub_82A4C758(ctx, base);
loc_823B3530:
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

__attribute__((alias("__imp__sub_823B3548"))) PPC_WEAK_FUNC(sub_823B3548);
PPC_FUNC_IMPL(__imp__sub_823B3548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B3560;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b35a4
	if (ctx.cr0.eq) goto loc_823B35A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B3570;
	sub_8250ABF8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// addi r11,r11,20664
	ctx.r11.s64 = ctx.r11.s64 + 20664;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,23092
	ctx.r10.s64 = ctx.r10.s64 + 23092;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// b 0x823b35a8
	goto loc_823B35A8;
loc_823B35A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B35A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B35C0"))) PPC_WEAK_FUNC(sub_823B35C0);
PPC_FUNC_IMPL(__imp__sub_823B35C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3600
	if (!ctx.cr0.eq) goto loc_823B3600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31036, ctx.r11.u32);
	// addi r3,r9,-13904
	ctx.r3.s64 = ctx.r9.s64 + -13904;
	// bl 0x82816528
	ctx.lr = 0x823B35F8;
	sub_82816528(ctx, base);
	// stw r3,-31040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31040, ctx.r3.u32);
	// b 0x823b3604
	goto loc_823B3604;
loc_823B3600:
	// lwz r3,-31040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31040);
loc_823B3604:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3618"))) PPC_WEAK_FUNC(sub_823B3618);
PPC_FUNC_IMPL(__imp__sub_823B3618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3668
	ctx.lr = 0x823B3638;
	sub_823B3668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B364C;
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

__attribute__((alias("__imp__sub_823B3668"))) PPC_WEAK_FUNC(sub_823B3668);
PPC_FUNC_IMPL(__imp__sub_823B3668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27204
	ctx.r31.s64 = ctx.r11.s64 + -27204;
	// lwz r11,-27208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b36b0
	if (!ctx.cr0.eq) goto loc_823B36B0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17220
	ctx.r9.s64 = ctx.r9.s64 + -17220;
	// stw r11,-27208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27208, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22088
	ctx.r3.s64 = ctx.r11.s64 + -22088;
	// bl 0x82a4c758
	ctx.lr = 0x823B36B0;
	sub_82A4C758(ctx, base);
loc_823B36B0:
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

__attribute__((alias("__imp__sub_823B36C8"))) PPC_WEAK_FUNC(sub_823B36C8);
PPC_FUNC_IMPL(__imp__sub_823B36C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B36E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b3744
	if (ctx.cr0.eq) goto loc_823B3744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B36F0;
	sub_8250ABF8(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// addi r10,r10,25572
	ctx.r10.s64 = ctx.r10.s64 + 25572;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,15520
	ctx.r3.s64 = ctx.r11.s64 + 15520;
	// bl 0x82816528
	ctx.lr = 0x823B3720;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,15548
	ctx.r3.s64 = ctx.r11.s64 + 15548;
	// bl 0x82816528
	ctx.lr = 0x823B3730;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,2388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2388, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// b 0x823b3748
	goto loc_823B3748;
loc_823B3744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3760"))) PPC_WEAK_FUNC(sub_823B3760);
PPC_FUNC_IMPL(__imp__sub_823B3760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b37a0
	if (!ctx.cr0.eq) goto loc_823B37A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31044, ctx.r11.u32);
	// addi r3,r9,-13876
	ctx.r3.s64 = ctx.r9.s64 + -13876;
	// bl 0x82816528
	ctx.lr = 0x823B3798;
	sub_82816528(ctx, base);
	// stw r3,-31048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31048, ctx.r3.u32);
	// b 0x823b37a4
	goto loc_823B37A4;
loc_823B37A0:
	// lwz r3,-31048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31048);
loc_823B37A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B37B8"))) PPC_WEAK_FUNC(sub_823B37B8);
PPC_FUNC_IMPL(__imp__sub_823B37B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3808
	ctx.lr = 0x823B37D8;
	sub_823B3808(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B37EC;
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

__attribute__((alias("__imp__sub_823B3808"))) PPC_WEAK_FUNC(sub_823B3808);
PPC_FUNC_IMPL(__imp__sub_823B3808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27196
	ctx.r31.s64 = ctx.r11.s64 + -27196;
	// lwz r11,-27200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3850
	if (!ctx.cr0.eq) goto loc_823B3850;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17200
	ctx.r9.s64 = ctx.r9.s64 + -17200;
	// stw r11,-27200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27200, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22112
	ctx.r3.s64 = ctx.r11.s64 + -22112;
	// bl 0x82a4c758
	ctx.lr = 0x823B3850;
	sub_82A4C758(ctx, base);
loc_823B3850:
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

__attribute__((alias("__imp__sub_823B3868"))) PPC_WEAK_FUNC(sub_823B3868);
PPC_FUNC_IMPL(__imp__sub_823B3868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6784
	ctx.r3.s64 = 6784;
	// bl 0x82833108
	ctx.lr = 0x823B3880;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b38e4
	if (ctx.cr0.eq) goto loc_823B38E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B3890;
	sub_8250ABF8(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// addi r10,r10,25624
	ctx.r10.s64 = ctx.r10.s64 + 25624;
	// addi r9,r9,28052
	ctx.r9.s64 = ctx.r9.s64 + 28052;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r7,-20875
	ctx.r7.s64 = -1368064000;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r8,29808
	ctx.r8.s64 = ctx.r8.s64 + 29808;
	// ori r10,r7,9375
	ctx.r10.u64 = ctx.r7.u64 | 9375;
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r10.u32);
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
	// stw r9,6768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6768, ctx.r9.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x823b38e8
	goto loc_823B38E8;
loc_823B38E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B38E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3900"))) PPC_WEAK_FUNC(sub_823B3900);
PPC_FUNC_IMPL(__imp__sub_823B3900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3940
	if (!ctx.cr0.eq) goto loc_823B3940;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31052, ctx.r11.u32);
	// addi r3,r9,-13848
	ctx.r3.s64 = ctx.r9.s64 + -13848;
	// bl 0x82816528
	ctx.lr = 0x823B3938;
	sub_82816528(ctx, base);
	// stw r3,-31056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31056, ctx.r3.u32);
	// b 0x823b3944
	goto loc_823B3944;
loc_823B3940:
	// lwz r3,-31056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31056);
loc_823B3944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3958"))) PPC_WEAK_FUNC(sub_823B3958);
PPC_FUNC_IMPL(__imp__sub_823B3958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b39a8
	ctx.lr = 0x823B3978;
	sub_823B39A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B398C;
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

__attribute__((alias("__imp__sub_823B39A8"))) PPC_WEAK_FUNC(sub_823B39A8);
PPC_FUNC_IMPL(__imp__sub_823B39A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27188
	ctx.r31.s64 = ctx.r11.s64 + -27188;
	// lwz r11,-27192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b39f0
	if (!ctx.cr0.eq) goto loc_823B39F0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17180
	ctx.r9.s64 = ctx.r9.s64 + -17180;
	// stw r11,-27192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22136
	ctx.r3.s64 = ctx.r11.s64 + -22136;
	// bl 0x82a4c758
	ctx.lr = 0x823B39F0;
	sub_82A4C758(ctx, base);
loc_823B39F0:
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

__attribute__((alias("__imp__sub_823B3A08"))) PPC_WEAK_FUNC(sub_823B3A08);
PPC_FUNC_IMPL(__imp__sub_823B3A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6784
	ctx.r3.s64 = 6784;
	// bl 0x82833108
	ctx.lr = 0x823B3A20;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b3a84
	if (ctx.cr0.eq) goto loc_823B3A84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B3A30;
	sub_8250ABF8(ctx, base);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// addi r9,r9,28104
	ctx.r9.s64 = ctx.r9.s64 + 28104;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-20875
	ctx.r6.s64 = -1368064000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,30532
	ctx.r8.s64 = ctx.r8.s64 + 30532;
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// addi r7,r7,29808
	ctx.r7.s64 = ctx.r7.s64 + 29808;
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// ori r9,r6,9375
	ctx.r9.u64 = ctx.r6.u64 | 9375;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6768, ctx.r10.u32);
	// stw r10,6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6744, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r9,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r9.u32);
	// b 0x823b3a88
	goto loc_823B3A88;
loc_823B3A84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3A88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3AA0"))) PPC_WEAK_FUNC(sub_823B3AA0);
PPC_FUNC_IMPL(__imp__sub_823B3AA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6784
	ctx.r3.s64 = 6784;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3AA8"))) PPC_WEAK_FUNC(sub_823B3AA8);
PPC_FUNC_IMPL(__imp__sub_823B3AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3ae8
	if (!ctx.cr0.eq) goto loc_823B3AE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31060, ctx.r11.u32);
	// addi r3,r9,-13808
	ctx.r3.s64 = ctx.r9.s64 + -13808;
	// bl 0x82816528
	ctx.lr = 0x823B3AE0;
	sub_82816528(ctx, base);
	// stw r3,-31064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31064, ctx.r3.u32);
	// b 0x823b3aec
	goto loc_823B3AEC;
loc_823B3AE8:
	// lwz r3,-31064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31064);
loc_823B3AEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3B00"))) PPC_WEAK_FUNC(sub_823B3B00);
PPC_FUNC_IMPL(__imp__sub_823B3B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3b50
	ctx.lr = 0x823B3B20;
	sub_823B3B50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3B34;
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

__attribute__((alias("__imp__sub_823B3B50"))) PPC_WEAK_FUNC(sub_823B3B50);
PPC_FUNC_IMPL(__imp__sub_823B3B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27180
	ctx.r31.s64 = ctx.r11.s64 + -27180;
	// lwz r11,-27184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27184);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3b98
	if (!ctx.cr0.eq) goto loc_823B3B98;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17160
	ctx.r9.s64 = ctx.r9.s64 + -17160;
	// stw r11,-27184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27184, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22160
	ctx.r3.s64 = ctx.r11.s64 + -22160;
	// bl 0x82a4c758
	ctx.lr = 0x823B3B98;
	sub_82A4C758(ctx, base);
loc_823B3B98:
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

__attribute__((alias("__imp__sub_823B3BB0"))) PPC_WEAK_FUNC(sub_823B3BB0);
PPC_FUNC_IMPL(__imp__sub_823B3BB0) {
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
	// li r3,2080
	ctx.r3.s64 = 2080;
	// bl 0x82833108
	ctx.lr = 0x823B3BC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b3bd8
	if (ctx.cr0.eq) goto loc_823B3BD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82509cf8
	ctx.lr = 0x823B3BD4;
	sub_82509CF8(ctx, base);
	// b 0x823b3bdc
	goto loc_823B3BDC;
loc_823B3BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3BDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3bf0
	if (ctx.cr6.eq) goto loc_823B3BF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B3BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3C00"))) PPC_WEAK_FUNC(sub_823B3C00);
PPC_FUNC_IMPL(__imp__sub_823B3C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3c40
	if (!ctx.cr0.eq) goto loc_823B3C40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31068, ctx.r11.u32);
	// addi r3,r9,-13772
	ctx.r3.s64 = ctx.r9.s64 + -13772;
	// bl 0x82816528
	ctx.lr = 0x823B3C38;
	sub_82816528(ctx, base);
	// stw r3,-31072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31072, ctx.r3.u32);
	// b 0x823b3c44
	goto loc_823B3C44;
loc_823B3C40:
	// lwz r3,-31072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31072);
loc_823B3C44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3C58"))) PPC_WEAK_FUNC(sub_823B3C58);
PPC_FUNC_IMPL(__imp__sub_823B3C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3ca8
	ctx.lr = 0x823B3C78;
	sub_823B3CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3C8C;
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

__attribute__((alias("__imp__sub_823B3CA8"))) PPC_WEAK_FUNC(sub_823B3CA8);
PPC_FUNC_IMPL(__imp__sub_823B3CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29932
	ctx.r31.s64 = ctx.r11.s64 + -29932;
	// lwz r11,-29936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3cf0
	if (!ctx.cr0.eq) goto loc_823B3CF0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17140
	ctx.r9.s64 = ctx.r9.s64 + -17140;
	// stw r11,-29936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29936, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22184
	ctx.r3.s64 = ctx.r11.s64 + -22184;
	// bl 0x82a4c758
	ctx.lr = 0x823B3CF0;
	sub_82A4C758(ctx, base);
loc_823B3CF0:
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

__attribute__((alias("__imp__sub_823B3D08"))) PPC_WEAK_FUNC(sub_823B3D08);
PPC_FUNC_IMPL(__imp__sub_823B3D08) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x823B3D1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b3d30
	if (ctx.cr0.eq) goto loc_823B3D30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db150
	ctx.lr = 0x823B3D2C;
	sub_823DB150(ctx, base);
	// b 0x823b3d34
	goto loc_823B3D34;
loc_823B3D30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3D34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3d48
	if (ctx.cr6.eq) goto loc_823B3D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B3D48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3D58"))) PPC_WEAK_FUNC(sub_823B3D58);
PPC_FUNC_IMPL(__imp__sub_823B3D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3d98
	if (!ctx.cr0.eq) goto loc_823B3D98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31076, ctx.r11.u32);
	// addi r3,r9,-13740
	ctx.r3.s64 = ctx.r9.s64 + -13740;
	// bl 0x82816528
	ctx.lr = 0x823B3D90;
	sub_82816528(ctx, base);
	// stw r3,-31080(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31080, ctx.r3.u32);
	// b 0x823b3d9c
	goto loc_823B3D9C;
loc_823B3D98:
	// lwz r3,-31080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31080);
loc_823B3D9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3DB0"))) PPC_WEAK_FUNC(sub_823B3DB0);
PPC_FUNC_IMPL(__imp__sub_823B3DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3e00
	ctx.lr = 0x823B3DD0;
	sub_823B3E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3DE4;
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

__attribute__((alias("__imp__sub_823B3E00"))) PPC_WEAK_FUNC(sub_823B3E00);
PPC_FUNC_IMPL(__imp__sub_823B3E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29924
	ctx.r31.s64 = ctx.r11.s64 + -29924;
	// lwz r11,-29928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3e48
	if (!ctx.cr0.eq) goto loc_823B3E48;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16764
	ctx.r9.s64 = ctx.r9.s64 + -16764;
	// stw r11,-29928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29928, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22208
	ctx.r3.s64 = ctx.r11.s64 + -22208;
	// bl 0x82a4c758
	ctx.lr = 0x823B3E48;
	sub_82A4C758(ctx, base);
loc_823B3E48:
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

__attribute__((alias("__imp__sub_823B3E60"))) PPC_WEAK_FUNC(sub_823B3E60);
PPC_FUNC_IMPL(__imp__sub_823B3E60) {
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
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B3E74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b3e84
	if (ctx.cr0.eq) goto loc_823B3E84;
	// bl 0x82506728
	ctx.lr = 0x823B3E80;
	sub_82506728(ctx, base);
	// b 0x823b3e88
	goto loc_823B3E88;
loc_823B3E84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3E88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3E98"))) PPC_WEAK_FUNC(sub_823B3E98);
PPC_FUNC_IMPL(__imp__sub_823B3E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3ed8
	if (!ctx.cr0.eq) goto loc_823B3ED8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31084, ctx.r11.u32);
	// addi r3,r9,-13700
	ctx.r3.s64 = ctx.r9.s64 + -13700;
	// bl 0x82816528
	ctx.lr = 0x823B3ED0;
	sub_82816528(ctx, base);
	// stw r3,-31088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31088, ctx.r3.u32);
	// b 0x823b3edc
	goto loc_823B3EDC;
loc_823B3ED8:
	// lwz r3,-31088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31088);
loc_823B3EDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3EF0"))) PPC_WEAK_FUNC(sub_823B3EF0);
PPC_FUNC_IMPL(__imp__sub_823B3EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b3f40
	ctx.lr = 0x823B3F10;
	sub_823B3F40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B3F24;
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

__attribute__((alias("__imp__sub_823B3F40"))) PPC_WEAK_FUNC(sub_823B3F40);
PPC_FUNC_IMPL(__imp__sub_823B3F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29204
	ctx.r31.s64 = ctx.r11.s64 + -29204;
	// lwz r11,-29208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b3f88
	if (!ctx.cr0.eq) goto loc_823B3F88;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14268
	ctx.r9.s64 = ctx.r9.s64 + -14268;
	// stw r11,-29208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29208, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22232
	ctx.r3.s64 = ctx.r11.s64 + -22232;
	// bl 0x82a4c758
	ctx.lr = 0x823B3F88;
	sub_82A4C758(ctx, base);
loc_823B3F88:
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

__attribute__((alias("__imp__sub_823B3FA0"))) PPC_WEAK_FUNC(sub_823B3FA0);
PPC_FUNC_IMPL(__imp__sub_823B3FA0) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x823B3FB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b3fc8
	if (ctx.cr0.eq) goto loc_823B3FC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82505f98
	ctx.lr = 0x823B3FC4;
	sub_82505F98(ctx, base);
	// b 0x823b3fcc
	goto loc_823B3FCC;
loc_823B3FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B3FCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b3fe0
	if (ctx.cr6.eq) goto loc_823B3FE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B3FE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B3FF0"))) PPC_WEAK_FUNC(sub_823B3FF0);
PPC_FUNC_IMPL(__imp__sub_823B3FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4030
	if (!ctx.cr0.eq) goto loc_823B4030;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31092, ctx.r11.u32);
	// addi r3,r9,-13564
	ctx.r3.s64 = ctx.r9.s64 + -13564;
	// bl 0x82816528
	ctx.lr = 0x823B4028;
	sub_82816528(ctx, base);
	// stw r3,-31096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31096, ctx.r3.u32);
	// b 0x823b4034
	goto loc_823B4034;
loc_823B4030:
	// lwz r3,-31096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31096);
loc_823B4034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4048"))) PPC_WEAK_FUNC(sub_823B4048);
PPC_FUNC_IMPL(__imp__sub_823B4048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4098
	ctx.lr = 0x823B4068;
	sub_823B4098(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B407C;
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

__attribute__((alias("__imp__sub_823B4098"))) PPC_WEAK_FUNC(sub_823B4098);
PPC_FUNC_IMPL(__imp__sub_823B4098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29772
	ctx.r31.s64 = ctx.r11.s64 + -29772;
	// lwz r11,-29776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b40e0
	if (!ctx.cr0.eq) goto loc_823B40E0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14248
	ctx.r9.s64 = ctx.r9.s64 + -14248;
	// stw r11,-29776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22256
	ctx.r3.s64 = ctx.r11.s64 + -22256;
	// bl 0x82a4c758
	ctx.lr = 0x823B40E0;
	sub_82A4C758(ctx, base);
loc_823B40E0:
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

__attribute__((alias("__imp__sub_823B40F8"))) PPC_WEAK_FUNC(sub_823B40F8);
PPC_FUNC_IMPL(__imp__sub_823B40F8) {
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
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B410C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b411c
	if (ctx.cr0.eq) goto loc_823B411C;
	// bl 0x8250dcb8
	ctx.lr = 0x823B4118;
	sub_8250DCB8(ctx, base);
	// b 0x823b4120
	goto loc_823B4120;
loc_823B411C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4130"))) PPC_WEAK_FUNC(sub_823B4130);
PPC_FUNC_IMPL(__imp__sub_823B4130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4170
	if (!ctx.cr0.eq) goto loc_823B4170;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31100, ctx.r11.u32);
	// addi r3,r9,-13536
	ctx.r3.s64 = ctx.r9.s64 + -13536;
	// bl 0x82816528
	ctx.lr = 0x823B4168;
	sub_82816528(ctx, base);
	// stw r3,-31104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31104, ctx.r3.u32);
	// b 0x823b4174
	goto loc_823B4174;
loc_823B4170:
	// lwz r3,-31104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31104);
loc_823B4174:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4188"))) PPC_WEAK_FUNC(sub_823B4188);
PPC_FUNC_IMPL(__imp__sub_823B4188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b41d8
	ctx.lr = 0x823B41A8;
	sub_823B41D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B41BC;
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

__attribute__((alias("__imp__sub_823B41D8"))) PPC_WEAK_FUNC(sub_823B41D8);
PPC_FUNC_IMPL(__imp__sub_823B41D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29196
	ctx.r31.s64 = ctx.r11.s64 + -29196;
	// lwz r11,-29200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4220
	if (!ctx.cr0.eq) goto loc_823B4220;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11732
	ctx.r9.s64 = ctx.r9.s64 + -11732;
	// stw r11,-29200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29200, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22280
	ctx.r3.s64 = ctx.r11.s64 + -22280;
	// bl 0x82a4c758
	ctx.lr = 0x823B4220;
	sub_82A4C758(ctx, base);
loc_823B4220:
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

__attribute__((alias("__imp__sub_823B4238"))) PPC_WEAK_FUNC(sub_823B4238);
PPC_FUNC_IMPL(__imp__sub_823B4238) {
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
	// li r3,2096
	ctx.r3.s64 = 2096;
	// bl 0x82833108
	ctx.lr = 0x823B424C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b4260
	if (ctx.cr0.eq) goto loc_823B4260;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8250d788
	ctx.lr = 0x823B425C;
	sub_8250D788(ctx, base);
	// b 0x823b4264
	goto loc_823B4264;
loc_823B4260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4264:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4278
	if (ctx.cr6.eq) goto loc_823B4278;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B4278:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4288"))) PPC_WEAK_FUNC(sub_823B4288);
PPC_FUNC_IMPL(__imp__sub_823B4288) {
	PPC_FUNC_PROLOGUE();
	// li r3,2096
	ctx.r3.s64 = 2096;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4290"))) PPC_WEAK_FUNC(sub_823B4290);
PPC_FUNC_IMPL(__imp__sub_823B4290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b42d0
	if (!ctx.cr0.eq) goto loc_823B42D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31108, ctx.r11.u32);
	// addi r3,r9,-13396
	ctx.r3.s64 = ctx.r9.s64 + -13396;
	// bl 0x82816528
	ctx.lr = 0x823B42C8;
	sub_82816528(ctx, base);
	// stw r3,-31112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31112, ctx.r3.u32);
	// b 0x823b42d4
	goto loc_823B42D4;
loc_823B42D0:
	// lwz r3,-31112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31112);
loc_823B42D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B42E8"))) PPC_WEAK_FUNC(sub_823B42E8);
PPC_FUNC_IMPL(__imp__sub_823B42E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4338
	ctx.lr = 0x823B4308;
	sub_823B4338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B431C;
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

__attribute__((alias("__imp__sub_823B4338"))) PPC_WEAK_FUNC(sub_823B4338);
PPC_FUNC_IMPL(__imp__sub_823B4338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29988
	ctx.r31.s64 = ctx.r11.s64 + -29988;
	// lwz r11,-29992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4380
	if (!ctx.cr0.eq) goto loc_823B4380;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11712
	ctx.r9.s64 = ctx.r9.s64 + -11712;
	// stw r11,-29992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29992, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22304
	ctx.r3.s64 = ctx.r11.s64 + -22304;
	// bl 0x82a4c758
	ctx.lr = 0x823B4380;
	sub_82A4C758(ctx, base);
loc_823B4380:
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

__attribute__((alias("__imp__sub_823B4398"))) PPC_WEAK_FUNC(sub_823B4398);
PPC_FUNC_IMPL(__imp__sub_823B4398) {
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
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B43AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b43bc
	if (ctx.cr0.eq) goto loc_823B43BC;
	// bl 0x82508378
	ctx.lr = 0x823B43B8;
	sub_82508378(ctx, base);
	// b 0x823b43c0
	goto loc_823B43C0;
loc_823B43BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B43C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B43D0"))) PPC_WEAK_FUNC(sub_823B43D0);
PPC_FUNC_IMPL(__imp__sub_823B43D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4410
	if (!ctx.cr0.eq) goto loc_823B4410;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31116, ctx.r11.u32);
	// addi r3,r9,-13364
	ctx.r3.s64 = ctx.r9.s64 + -13364;
	// bl 0x82816528
	ctx.lr = 0x823B4408;
	sub_82816528(ctx, base);
	// stw r3,-31120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31120, ctx.r3.u32);
	// b 0x823b4414
	goto loc_823B4414;
loc_823B4410:
	// lwz r3,-31120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31120);
loc_823B4414:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4428"))) PPC_WEAK_FUNC(sub_823B4428);
PPC_FUNC_IMPL(__imp__sub_823B4428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4478
	ctx.lr = 0x823B4448;
	sub_823B4478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B445C;
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

__attribute__((alias("__imp__sub_823B4478"))) PPC_WEAK_FUNC(sub_823B4478);
PPC_FUNC_IMPL(__imp__sub_823B4478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29188
	ctx.r31.s64 = ctx.r11.s64 + -29188;
	// lwz r11,-29192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b44c0
	if (!ctx.cr0.eq) goto loc_823B44C0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11692
	ctx.r9.s64 = ctx.r9.s64 + -11692;
	// stw r11,-29192(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22328
	ctx.r3.s64 = ctx.r11.s64 + -22328;
	// bl 0x82a4c758
	ctx.lr = 0x823B44C0;
	sub_82A4C758(ctx, base);
loc_823B44C0:
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

__attribute__((alias("__imp__sub_823B44D8"))) PPC_WEAK_FUNC(sub_823B44D8);
PPC_FUNC_IMPL(__imp__sub_823B44D8) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x823B44EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b4500
	if (ctx.cr0.eq) goto loc_823B4500;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82507f00
	ctx.lr = 0x823B44FC;
	sub_82507F00(ctx, base);
	// b 0x823b4504
	goto loc_823B4504;
loc_823B4500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4504:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b4518
	if (ctx.cr6.eq) goto loc_823B4518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B4518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4528"))) PPC_WEAK_FUNC(sub_823B4528);
PPC_FUNC_IMPL(__imp__sub_823B4528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4568
	if (!ctx.cr0.eq) goto loc_823B4568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31124, ctx.r11.u32);
	// addi r3,r9,-13196
	ctx.r3.s64 = ctx.r9.s64 + -13196;
	// bl 0x82816528
	ctx.lr = 0x823B4560;
	sub_82816528(ctx, base);
	// stw r3,-31128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31128, ctx.r3.u32);
	// b 0x823b456c
	goto loc_823B456C;
loc_823B4568:
	// lwz r3,-31128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31128);
loc_823B456C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4580"))) PPC_WEAK_FUNC(sub_823B4580);
PPC_FUNC_IMPL(__imp__sub_823B4580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b45d0
	ctx.lr = 0x823B45A0;
	sub_823B45D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B45B4;
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

__attribute__((alias("__imp__sub_823B45D0"))) PPC_WEAK_FUNC(sub_823B45D0);
PPC_FUNC_IMPL(__imp__sub_823B45D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29780
	ctx.r31.s64 = ctx.r11.s64 + -29780;
	// lwz r11,-29784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4618
	if (!ctx.cr0.eq) goto loc_823B4618;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-11672
	ctx.r9.s64 = ctx.r9.s64 + -11672;
	// stw r11,-29784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22352
	ctx.r3.s64 = ctx.r11.s64 + -22352;
	// bl 0x82a4c758
	ctx.lr = 0x823B4618;
	sub_82A4C758(ctx, base);
loc_823B4618:
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

__attribute__((alias("__imp__sub_823B4630"))) PPC_WEAK_FUNC(sub_823B4630);
PPC_FUNC_IMPL(__imp__sub_823B4630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4648;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4684
	if (ctx.cr0.eq) goto loc_823B4684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4658;
	sub_8250ABF8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r11,r11,-11648
	ctx.r11.s64 = ctx.r11.s64 + -11648;
	// addi r10,r10,-9220
	ctx.r10.s64 = ctx.r10.s64 + -9220;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b4688
	goto loc_823B4688;
loc_823B4684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4688:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B46A0"))) PPC_WEAK_FUNC(sub_823B46A0);
PPC_FUNC_IMPL(__imp__sub_823B46A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b46e0
	if (!ctx.cr0.eq) goto loc_823B46E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31132, ctx.r11.u32);
	// addi r3,r9,-13160
	ctx.r3.s64 = ctx.r9.s64 + -13160;
	// bl 0x82816528
	ctx.lr = 0x823B46D8;
	sub_82816528(ctx, base);
	// stw r3,-31136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31136, ctx.r3.u32);
	// b 0x823b46e4
	goto loc_823B46E4;
loc_823B46E0:
	// lwz r3,-31136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31136);
loc_823B46E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B46F8"))) PPC_WEAK_FUNC(sub_823B46F8);
PPC_FUNC_IMPL(__imp__sub_823B46F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4748
	ctx.lr = 0x823B4718;
	sub_823B4748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B472C;
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

__attribute__((alias("__imp__sub_823B4748"))) PPC_WEAK_FUNC(sub_823B4748);
PPC_FUNC_IMPL(__imp__sub_823B4748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28780
	ctx.r31.s64 = ctx.r11.s64 + -28780;
	// lwz r11,-28784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4790
	if (!ctx.cr0.eq) goto loc_823B4790;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-9168
	ctx.r9.s64 = ctx.r9.s64 + -9168;
	// stw r11,-28784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22376
	ctx.r3.s64 = ctx.r11.s64 + -22376;
	// bl 0x82a4c758
	ctx.lr = 0x823B4790;
	sub_82A4C758(ctx, base);
loc_823B4790:
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

__attribute__((alias("__imp__sub_823B47A8"))) PPC_WEAK_FUNC(sub_823B47A8);
PPC_FUNC_IMPL(__imp__sub_823B47A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B47C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4818
	if (ctx.cr0.eq) goto loc_823B4818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B47D0;
	sub_8250ABF8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-21912
	ctx.r10.s64 = ctx.r10.s64 + -21912;
	// addi r9,r9,-19484
	ctx.r9.s64 = ctx.r9.s64 + -19484;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,29808
	ctx.r8.s64 = ctx.r8.s64 + 29808;
	// li r10,26
	ctx.r10.s64 = 26;
	// stw r11,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r11.u32);
	// stw r9,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r9.u32);
	// b 0x823b481c
	goto loc_823B481C;
loc_823B4818:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B481C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4830"))) PPC_WEAK_FUNC(sub_823B4830);
PPC_FUNC_IMPL(__imp__sub_823B4830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4870
	if (!ctx.cr0.eq) goto loc_823B4870;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31140, ctx.r11.u32);
	// addi r3,r9,-13124
	ctx.r3.s64 = ctx.r9.s64 + -13124;
	// bl 0x82816528
	ctx.lr = 0x823B4868;
	sub_82816528(ctx, base);
	// stw r3,-31144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31144, ctx.r3.u32);
	// b 0x823b4874
	goto loc_823B4874;
loc_823B4870:
	// lwz r3,-31144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31144);
loc_823B4874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4888"))) PPC_WEAK_FUNC(sub_823B4888);
PPC_FUNC_IMPL(__imp__sub_823B4888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b48d8
	ctx.lr = 0x823B48A8;
	sub_823B48D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B48BC;
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

__attribute__((alias("__imp__sub_823B48D8"))) PPC_WEAK_FUNC(sub_823B48D8);
PPC_FUNC_IMPL(__imp__sub_823B48D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28772
	ctx.r31.s64 = ctx.r11.s64 + -28772;
	// lwz r11,-28776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4920
	if (!ctx.cr0.eq) goto loc_823B4920;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-9148
	ctx.r9.s64 = ctx.r9.s64 + -9148;
	// stw r11,-28776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22400
	ctx.r3.s64 = ctx.r11.s64 + -22400;
	// bl 0x82a4c758
	ctx.lr = 0x823B4920;
	sub_82A4C758(ctx, base);
loc_823B4920:
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

__attribute__((alias("__imp__sub_823B4938"))) PPC_WEAK_FUNC(sub_823B4938);
PPC_FUNC_IMPL(__imp__sub_823B4938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4950;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4994
	if (ctx.cr0.eq) goto loc_823B4994;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4960;
	sub_8250ABF8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-9128
	ctx.r11.s64 = ctx.r11.s64 + -9128;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-6700
	ctx.r10.s64 = ctx.r10.s64 + -6700;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b4998
	goto loc_823B4998;
loc_823B4994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4998:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B49B0"))) PPC_WEAK_FUNC(sub_823B49B0);
PPC_FUNC_IMPL(__imp__sub_823B49B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b49f0
	if (!ctx.cr0.eq) goto loc_823B49F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31148, ctx.r11.u32);
	// addi r3,r9,-13088
	ctx.r3.s64 = ctx.r9.s64 + -13088;
	// bl 0x82816528
	ctx.lr = 0x823B49E8;
	sub_82816528(ctx, base);
	// stw r3,-31152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31152, ctx.r3.u32);
	// b 0x823b49f4
	goto loc_823B49F4;
loc_823B49F0:
	// lwz r3,-31152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31152);
loc_823B49F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4A08"))) PPC_WEAK_FUNC(sub_823B4A08);
PPC_FUNC_IMPL(__imp__sub_823B4A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4a58
	ctx.lr = 0x823B4A28;
	sub_823B4A58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B4A3C;
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

__attribute__((alias("__imp__sub_823B4A58"))) PPC_WEAK_FUNC(sub_823B4A58);
PPC_FUNC_IMPL(__imp__sub_823B4A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28764
	ctx.r31.s64 = ctx.r11.s64 + -28764;
	// lwz r11,-28768(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28768);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4aa0
	if (!ctx.cr0.eq) goto loc_823B4AA0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-6648
	ctx.r9.s64 = ctx.r9.s64 + -6648;
	// stw r11,-28768(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28768, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22424
	ctx.r3.s64 = ctx.r11.s64 + -22424;
	// bl 0x82a4c758
	ctx.lr = 0x823B4AA0;
	sub_82A4C758(ctx, base);
loc_823B4AA0:
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

__attribute__((alias("__imp__sub_823B4AB8"))) PPC_WEAK_FUNC(sub_823B4AB8);
PPC_FUNC_IMPL(__imp__sub_823B4AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4AD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4b14
	if (ctx.cr0.eq) goto loc_823B4B14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4AE0;
	sub_8250ABF8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-6624
	ctx.r11.s64 = ctx.r11.s64 + -6624;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-4196
	ctx.r10.s64 = ctx.r10.s64 + -4196;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b4b18
	goto loc_823B4B18;
loc_823B4B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4B18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4B30"))) PPC_WEAK_FUNC(sub_823B4B30);
PPC_FUNC_IMPL(__imp__sub_823B4B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4b70
	if (!ctx.cr0.eq) goto loc_823B4B70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31156, ctx.r11.u32);
	// addi r3,r9,-12976
	ctx.r3.s64 = ctx.r9.s64 + -12976;
	// bl 0x82816528
	ctx.lr = 0x823B4B68;
	sub_82816528(ctx, base);
	// stw r3,-31160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31160, ctx.r3.u32);
	// b 0x823b4b74
	goto loc_823B4B74;
loc_823B4B70:
	// lwz r3,-31160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31160);
loc_823B4B74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4B88"))) PPC_WEAK_FUNC(sub_823B4B88);
PPC_FUNC_IMPL(__imp__sub_823B4B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4bd8
	ctx.lr = 0x823B4BA8;
	sub_823B4BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B4BBC;
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

__attribute__((alias("__imp__sub_823B4BD8"))) PPC_WEAK_FUNC(sub_823B4BD8);
PPC_FUNC_IMPL(__imp__sub_823B4BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28756
	ctx.r31.s64 = ctx.r11.s64 + -28756;
	// lwz r11,-28760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28760);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4c20
	if (!ctx.cr0.eq) goto loc_823B4C20;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-4144
	ctx.r9.s64 = ctx.r9.s64 + -4144;
	// stw r11,-28760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28760, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22448
	ctx.r3.s64 = ctx.r11.s64 + -22448;
	// bl 0x82a4c758
	ctx.lr = 0x823B4C20;
	sub_82A4C758(ctx, base);
loc_823B4C20:
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

__attribute__((alias("__imp__sub_823B4C38"))) PPC_WEAK_FUNC(sub_823B4C38);
PPC_FUNC_IMPL(__imp__sub_823B4C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4C50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4c94
	if (ctx.cr0.eq) goto loc_823B4C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4C60;
	sub_8250ABF8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-4120
	ctx.r11.s64 = ctx.r11.s64 + -4120;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-1692
	ctx.r10.s64 = ctx.r10.s64 + -1692;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b4c98
	goto loc_823B4C98;
loc_823B4C94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4CB0"))) PPC_WEAK_FUNC(sub_823B4CB0);
PPC_FUNC_IMPL(__imp__sub_823B4CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4cf0
	if (!ctx.cr0.eq) goto loc_823B4CF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31164, ctx.r11.u32);
	// addi r3,r9,-12864
	ctx.r3.s64 = ctx.r9.s64 + -12864;
	// bl 0x82816528
	ctx.lr = 0x823B4CE8;
	sub_82816528(ctx, base);
	// stw r3,-31168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31168, ctx.r3.u32);
	// b 0x823b4cf4
	goto loc_823B4CF4;
loc_823B4CF0:
	// lwz r3,-31168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31168);
loc_823B4CF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4D08"))) PPC_WEAK_FUNC(sub_823B4D08);
PPC_FUNC_IMPL(__imp__sub_823B4D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4d58
	ctx.lr = 0x823B4D28;
	sub_823B4D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B4D3C;
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

__attribute__((alias("__imp__sub_823B4D58"))) PPC_WEAK_FUNC(sub_823B4D58);
PPC_FUNC_IMPL(__imp__sub_823B4D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28748
	ctx.r31.s64 = ctx.r11.s64 + -28748;
	// lwz r11,-28752(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28752);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4da0
	if (!ctx.cr0.eq) goto loc_823B4DA0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1640
	ctx.r9.s64 = ctx.r9.s64 + -1640;
	// stw r11,-28752(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28752, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22472
	ctx.r3.s64 = ctx.r11.s64 + -22472;
	// bl 0x82a4c758
	ctx.lr = 0x823B4DA0;
	sub_82A4C758(ctx, base);
loc_823B4DA0:
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

__attribute__((alias("__imp__sub_823B4DB8"))) PPC_WEAK_FUNC(sub_823B4DB8);
PPC_FUNC_IMPL(__imp__sub_823B4DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4DD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4e18
	if (ctx.cr0.eq) goto loc_823B4E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4DE0;
	sub_8250ABF8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-19432
	ctx.r10.s64 = ctx.r10.s64 + -19432;
	// addi r9,r9,-17004
	ctx.r9.s64 = ctx.r9.s64 + -17004;
	// stw r11,2204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2204, ctx.r11.u32);
	// addi r8,r8,29808
	ctx.r8.s64 = ctx.r8.s64 + 29808;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b4e1c
	goto loc_823B4E1C;
loc_823B4E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4E1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4E30"))) PPC_WEAK_FUNC(sub_823B4E30);
PPC_FUNC_IMPL(__imp__sub_823B4E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4e70
	if (!ctx.cr0.eq) goto loc_823B4E70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31172, ctx.r11.u32);
	// addi r3,r9,-12752
	ctx.r3.s64 = ctx.r9.s64 + -12752;
	// bl 0x82816528
	ctx.lr = 0x823B4E68;
	sub_82816528(ctx, base);
	// stw r3,-31176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31176, ctx.r3.u32);
	// b 0x823b4e74
	goto loc_823B4E74;
loc_823B4E70:
	// lwz r3,-31176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31176);
loc_823B4E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4E88"))) PPC_WEAK_FUNC(sub_823B4E88);
PPC_FUNC_IMPL(__imp__sub_823B4E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b4ed8
	ctx.lr = 0x823B4EA8;
	sub_823B4ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B4EBC;
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

__attribute__((alias("__imp__sub_823B4ED8"))) PPC_WEAK_FUNC(sub_823B4ED8);
PPC_FUNC_IMPL(__imp__sub_823B4ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28740
	ctx.r31.s64 = ctx.r11.s64 + -28740;
	// lwz r11,-28744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b4f20
	if (!ctx.cr0.eq) goto loc_823B4F20;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1620
	ctx.r9.s64 = ctx.r9.s64 + -1620;
	// stw r11,-28744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28744, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22496
	ctx.r3.s64 = ctx.r11.s64 + -22496;
	// bl 0x82a4c758
	ctx.lr = 0x823B4F20;
	sub_82A4C758(ctx, base);
loc_823B4F20:
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

__attribute__((alias("__imp__sub_823B4F38"))) PPC_WEAK_FUNC(sub_823B4F38);
PPC_FUNC_IMPL(__imp__sub_823B4F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B4F50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b4fa8
	if (ctx.cr0.eq) goto loc_823B4FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B4F60;
	sub_8250ABF8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-16952
	ctx.r10.s64 = ctx.r10.s64 + -16952;
	// addi r9,r9,-14524
	ctx.r9.s64 = ctx.r9.s64 + -14524;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,29808
	ctx.r8.s64 = ctx.r8.s64 + 29808;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r11.u32);
	// stw r9,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r9.u32);
	// b 0x823b4fac
	goto loc_823B4FAC;
loc_823B4FA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4FAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B4FC0"))) PPC_WEAK_FUNC(sub_823B4FC0);
PPC_FUNC_IMPL(__imp__sub_823B4FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5000
	if (!ctx.cr0.eq) goto loc_823B5000;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31180, ctx.r11.u32);
	// addi r3,r9,-12716
	ctx.r3.s64 = ctx.r9.s64 + -12716;
	// bl 0x82816528
	ctx.lr = 0x823B4FF8;
	sub_82816528(ctx, base);
	// stw r3,-31184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31184, ctx.r3.u32);
	// b 0x823b5004
	goto loc_823B5004;
loc_823B5000:
	// lwz r3,-31184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31184);
loc_823B5004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5018"))) PPC_WEAK_FUNC(sub_823B5018);
PPC_FUNC_IMPL(__imp__sub_823B5018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5068
	ctx.lr = 0x823B5038;
	sub_823B5068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B504C;
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

__attribute__((alias("__imp__sub_823B5068"))) PPC_WEAK_FUNC(sub_823B5068);
PPC_FUNC_IMPL(__imp__sub_823B5068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28732
	ctx.r31.s64 = ctx.r11.s64 + -28732;
	// lwz r11,-28736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28736);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b50b0
	if (!ctx.cr0.eq) goto loc_823B50B0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1600
	ctx.r9.s64 = ctx.r9.s64 + -1600;
	// stw r11,-28736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28736, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22520
	ctx.r3.s64 = ctx.r11.s64 + -22520;
	// bl 0x82a4c758
	ctx.lr = 0x823B50B0;
	sub_82A4C758(ctx, base);
loc_823B50B0:
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

__attribute__((alias("__imp__sub_823B50C8"))) PPC_WEAK_FUNC(sub_823B50C8);
PPC_FUNC_IMPL(__imp__sub_823B50C8) {
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
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B50DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b50ec
	if (ctx.cr0.eq) goto loc_823B50EC;
	// bl 0x82512970
	ctx.lr = 0x823B50E8;
	sub_82512970(ctx, base);
	// b 0x823b50f0
	goto loc_823B50F0;
loc_823B50EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B50F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5100"))) PPC_WEAK_FUNC(sub_823B5100);
PPC_FUNC_IMPL(__imp__sub_823B5100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5140
	if (!ctx.cr0.eq) goto loc_823B5140;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31188, ctx.r11.u32);
	// addi r3,r9,-12688
	ctx.r3.s64 = ctx.r9.s64 + -12688;
	// bl 0x82816528
	ctx.lr = 0x823B5138;
	sub_82816528(ctx, base);
	// stw r3,-31192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31192, ctx.r3.u32);
	// b 0x823b5144
	goto loc_823B5144;
loc_823B5140:
	// lwz r3,-31192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31192);
loc_823B5144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5158"))) PPC_WEAK_FUNC(sub_823B5158);
PPC_FUNC_IMPL(__imp__sub_823B5158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b51a8
	ctx.lr = 0x823B5178;
	sub_823B51A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B518C;
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

__attribute__((alias("__imp__sub_823B51A8"))) PPC_WEAK_FUNC(sub_823B51A8);
PPC_FUNC_IMPL(__imp__sub_823B51A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28724
	ctx.r31.s64 = ctx.r11.s64 + -28724;
	// lwz r11,-28728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b51f0
	if (!ctx.cr0.eq) goto loc_823B51F0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1580
	ctx.r9.s64 = ctx.r9.s64 + -1580;
	// stw r11,-28728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28728, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x82a4c758
	ctx.lr = 0x823B51F0;
	sub_82A4C758(ctx, base);
loc_823B51F0:
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

__attribute__((alias("__imp__sub_823B5208"))) PPC_WEAK_FUNC(sub_823B5208);
PPC_FUNC_IMPL(__imp__sub_823B5208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B5220;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5278
	if (ctx.cr0.eq) goto loc_823B5278;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250abf8
	ctx.lr = 0x823B5230;
	sub_8250ABF8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-11992
	ctx.r10.s64 = ctx.r10.s64 + -11992;
	// addi r9,r9,-9564
	ctx.r9.s64 = ctx.r9.s64 + -9564;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r8,29808
	ctx.r8.s64 = ctx.r8.s64 + 29808;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r11.u32);
	// stw r9,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r9.u32);
	// b 0x823b527c
	goto loc_823B527C;
loc_823B5278:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B527C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5290"))) PPC_WEAK_FUNC(sub_823B5290);
PPC_FUNC_IMPL(__imp__sub_823B5290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31196);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b52d0
	if (!ctx.cr0.eq) goto loc_823B52D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31196, ctx.r11.u32);
	// addi r3,r9,-12652
	ctx.r3.s64 = ctx.r9.s64 + -12652;
	// bl 0x82816528
	ctx.lr = 0x823B52C8;
	sub_82816528(ctx, base);
	// stw r3,-31200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31200, ctx.r3.u32);
	// b 0x823b52d4
	goto loc_823B52D4;
loc_823B52D0:
	// lwz r3,-31200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31200);
loc_823B52D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B52E8"))) PPC_WEAK_FUNC(sub_823B52E8);
PPC_FUNC_IMPL(__imp__sub_823B52E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5338
	ctx.lr = 0x823B5308;
	sub_823B5338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B531C;
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

__attribute__((alias("__imp__sub_823B5338"))) PPC_WEAK_FUNC(sub_823B5338);
PPC_FUNC_IMPL(__imp__sub_823B5338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28716
	ctx.r31.s64 = ctx.r11.s64 + -28716;
	// lwz r11,-28720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5380
	if (!ctx.cr0.eq) goto loc_823B5380;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1560
	ctx.r9.s64 = ctx.r9.s64 + -1560;
	// stw r11,-28720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28720, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22568
	ctx.r3.s64 = ctx.r11.s64 + -22568;
	// bl 0x82a4c758
	ctx.lr = 0x823B5380;
	sub_82A4C758(ctx, base);
loc_823B5380:
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

__attribute__((alias("__imp__sub_823B5398"))) PPC_WEAK_FUNC(sub_823B5398);
PPC_FUNC_IMPL(__imp__sub_823B5398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B53B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b53f4
	if (ctx.cr0.eq) goto loc_823B53F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508378
	ctx.lr = 0x823B53C0;
	sub_82508378(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-1536
	ctx.r11.s64 = ctx.r11.s64 + -1536;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,888
	ctx.r10.s64 = ctx.r10.s64 + 888;
	// addi r9,r9,28292
	ctx.r9.s64 = ctx.r9.s64 + 28292;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b53f8
	goto loc_823B53F8;
loc_823B53F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B53F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5410"))) PPC_WEAK_FUNC(sub_823B5410);
PPC_FUNC_IMPL(__imp__sub_823B5410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31204);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5450
	if (!ctx.cr0.eq) goto loc_823B5450;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31204, ctx.r11.u32);
	// addi r3,r9,-12620
	ctx.r3.s64 = ctx.r9.s64 + -12620;
	// bl 0x82816528
	ctx.lr = 0x823B5448;
	sub_82816528(ctx, base);
	// stw r3,-31208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31208, ctx.r3.u32);
	// b 0x823b5454
	goto loc_823B5454;
loc_823B5450:
	// lwz r3,-31208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31208);
loc_823B5454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5468"))) PPC_WEAK_FUNC(sub_823B5468);
PPC_FUNC_IMPL(__imp__sub_823B5468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b54b8
	ctx.lr = 0x823B5488;
	sub_823B54B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B549C;
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

__attribute__((alias("__imp__sub_823B54B8"))) PPC_WEAK_FUNC(sub_823B54B8);
PPC_FUNC_IMPL(__imp__sub_823B54B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28708
	ctx.r31.s64 = ctx.r11.s64 + -28708;
	// lwz r11,-28712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5500
	if (!ctx.cr0.eq) goto loc_823B5500;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,940
	ctx.r9.s64 = ctx.r9.s64 + 940;
	// stw r11,-28712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22592
	ctx.r3.s64 = ctx.r11.s64 + -22592;
	// bl 0x82a4c758
	ctx.lr = 0x823B5500;
	sub_82A4C758(ctx, base);
loc_823B5500:
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

__attribute__((alias("__imp__sub_823B5518"))) PPC_WEAK_FUNC(sub_823B5518);
PPC_FUNC_IMPL(__imp__sub_823B5518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B5530;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5574
	if (ctx.cr0.eq) goto loc_823B5574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508378
	ctx.lr = 0x823B5540;
	sub_82508378(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,3384
	ctx.r10.s64 = ctx.r10.s64 + 3384;
	// addi r9,r9,28292
	ctx.r9.s64 = ctx.r9.s64 + 28292;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b5578
	goto loc_823B5578;
loc_823B5574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5590"))) PPC_WEAK_FUNC(sub_823B5590);
PPC_FUNC_IMPL(__imp__sub_823B5590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b55d0
	if (!ctx.cr0.eq) goto loc_823B55D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31212, ctx.r11.u32);
	// addi r3,r9,-12496
	ctx.r3.s64 = ctx.r9.s64 + -12496;
	// bl 0x82816528
	ctx.lr = 0x823B55C8;
	sub_82816528(ctx, base);
	// stw r3,-31216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31216, ctx.r3.u32);
	// b 0x823b55d4
	goto loc_823B55D4;
loc_823B55D0:
	// lwz r3,-31216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31216);
loc_823B55D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B55E8"))) PPC_WEAK_FUNC(sub_823B55E8);
PPC_FUNC_IMPL(__imp__sub_823B55E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5638
	ctx.lr = 0x823B5608;
	sub_823B5638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B561C;
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

__attribute__((alias("__imp__sub_823B5638"))) PPC_WEAK_FUNC(sub_823B5638);
PPC_FUNC_IMPL(__imp__sub_823B5638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28700
	ctx.r31.s64 = ctx.r11.s64 + -28700;
	// lwz r11,-28704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5680
	if (!ctx.cr0.eq) goto loc_823B5680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,3436
	ctx.r9.s64 = ctx.r9.s64 + 3436;
	// stw r11,-28704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28704, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22616
	ctx.r3.s64 = ctx.r11.s64 + -22616;
	// bl 0x82a4c758
	ctx.lr = 0x823B5680;
	sub_82A4C758(ctx, base);
loc_823B5680:
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

__attribute__((alias("__imp__sub_823B5698"))) PPC_WEAK_FUNC(sub_823B5698);
PPC_FUNC_IMPL(__imp__sub_823B5698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B56B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b56f4
	if (ctx.cr0.eq) goto loc_823B56F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82508378
	ctx.lr = 0x823B56C0;
	sub_82508378(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,3456
	ctx.r11.s64 = ctx.r11.s64 + 3456;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,5880
	ctx.r10.s64 = ctx.r10.s64 + 5880;
	// addi r9,r9,28292
	ctx.r9.s64 = ctx.r9.s64 + 28292;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b56f8
	goto loc_823B56F8;
loc_823B56F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B56F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5710"))) PPC_WEAK_FUNC(sub_823B5710);
PPC_FUNC_IMPL(__imp__sub_823B5710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5750
	if (!ctx.cr0.eq) goto loc_823B5750;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31220, ctx.r11.u32);
	// addi r3,r9,-12368
	ctx.r3.s64 = ctx.r9.s64 + -12368;
	// bl 0x82816528
	ctx.lr = 0x823B5748;
	sub_82816528(ctx, base);
	// stw r3,-31224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31224, ctx.r3.u32);
	// b 0x823b5754
	goto loc_823B5754;
loc_823B5750:
	// lwz r3,-31224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31224);
loc_823B5754:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5768"))) PPC_WEAK_FUNC(sub_823B5768);
PPC_FUNC_IMPL(__imp__sub_823B5768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b57b8
	ctx.lr = 0x823B5788;
	sub_823B57B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B579C;
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

__attribute__((alias("__imp__sub_823B57B8"))) PPC_WEAK_FUNC(sub_823B57B8);
PPC_FUNC_IMPL(__imp__sub_823B57B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28692
	ctx.r31.s64 = ctx.r11.s64 + -28692;
	// lwz r11,-28696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5800
	if (!ctx.cr0.eq) goto loc_823B5800;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5932
	ctx.r9.s64 = ctx.r9.s64 + 5932;
	// stw r11,-28696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28696, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22640
	ctx.r3.s64 = ctx.r11.s64 + -22640;
	// bl 0x82a4c758
	ctx.lr = 0x823B5800;
	sub_82A4C758(ctx, base);
loc_823B5800:
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

__attribute__((alias("__imp__sub_823B5818"))) PPC_WEAK_FUNC(sub_823B5818);
PPC_FUNC_IMPL(__imp__sub_823B5818) {
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
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B582C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b583c
	if (ctx.cr0.eq) goto loc_823B583C;
	// bl 0x82512cf0
	ctx.lr = 0x823B5838;
	sub_82512CF0(ctx, base);
	// b 0x823b5840
	goto loc_823B5840;
loc_823B583C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5840:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5850"))) PPC_WEAK_FUNC(sub_823B5850);
PPC_FUNC_IMPL(__imp__sub_823B5850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5890
	if (!ctx.cr0.eq) goto loc_823B5890;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31228, ctx.r11.u32);
	// addi r3,r9,-12240
	ctx.r3.s64 = ctx.r9.s64 + -12240;
	// bl 0x82816528
	ctx.lr = 0x823B5888;
	sub_82816528(ctx, base);
	// stw r3,-31232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31232, ctx.r3.u32);
	// b 0x823b5894
	goto loc_823B5894;
loc_823B5890:
	// lwz r3,-31232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31232);
loc_823B5894:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B58A8"))) PPC_WEAK_FUNC(sub_823B58A8);
PPC_FUNC_IMPL(__imp__sub_823B58A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b58f8
	ctx.lr = 0x823B58C8;
	sub_823B58F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B58DC;
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

__attribute__((alias("__imp__sub_823B58F8"))) PPC_WEAK_FUNC(sub_823B58F8);
PPC_FUNC_IMPL(__imp__sub_823B58F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28684
	ctx.r31.s64 = ctx.r11.s64 + -28684;
	// lwz r11,-28688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28688);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5940
	if (!ctx.cr0.eq) goto loc_823B5940;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5952
	ctx.r9.s64 = ctx.r9.s64 + 5952;
	// stw r11,-28688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28688, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22664
	ctx.r3.s64 = ctx.r11.s64 + -22664;
	// bl 0x82a4c758
	ctx.lr = 0x823B5940;
	sub_82A4C758(ctx, base);
loc_823B5940:
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

__attribute__((alias("__imp__sub_823B5958"))) PPC_WEAK_FUNC(sub_823B5958);
PPC_FUNC_IMPL(__imp__sub_823B5958) {
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
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B596C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b597c
	if (ctx.cr0.eq) goto loc_823B597C;
	// bl 0x82512dc0
	ctx.lr = 0x823B5978;
	sub_82512DC0(ctx, base);
	// b 0x823b5980
	goto loc_823B5980;
loc_823B597C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5980:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5990"))) PPC_WEAK_FUNC(sub_823B5990);
PPC_FUNC_IMPL(__imp__sub_823B5990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31236);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b59d0
	if (!ctx.cr0.eq) goto loc_823B59D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31236, ctx.r11.u32);
	// addi r3,r9,-12208
	ctx.r3.s64 = ctx.r9.s64 + -12208;
	// bl 0x82816528
	ctx.lr = 0x823B59C8;
	sub_82816528(ctx, base);
	// stw r3,-31240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31240, ctx.r3.u32);
	// b 0x823b59d4
	goto loc_823B59D4;
loc_823B59D0:
	// lwz r3,-31240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31240);
loc_823B59D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B59E8"))) PPC_WEAK_FUNC(sub_823B59E8);
PPC_FUNC_IMPL(__imp__sub_823B59E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5a38
	ctx.lr = 0x823B5A08;
	sub_823B5A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B5A1C;
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

__attribute__((alias("__imp__sub_823B5A38"))) PPC_WEAK_FUNC(sub_823B5A38);
PPC_FUNC_IMPL(__imp__sub_823B5A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28676
	ctx.r31.s64 = ctx.r11.s64 + -28676;
	// lwz r11,-28680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28680);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5a80
	if (!ctx.cr0.eq) goto loc_823B5A80;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5972
	ctx.r9.s64 = ctx.r9.s64 + 5972;
	// stw r11,-28680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28680, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22688
	ctx.r3.s64 = ctx.r11.s64 + -22688;
	// bl 0x82a4c758
	ctx.lr = 0x823B5A80;
	sub_82A4C758(ctx, base);
loc_823B5A80:
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

__attribute__((alias("__imp__sub_823B5A98"))) PPC_WEAK_FUNC(sub_823B5A98);
PPC_FUNC_IMPL(__imp__sub_823B5A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B5AB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5afc
	if (ctx.cr0.eq) goto loc_823B5AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B5AC0;
	sub_82506728(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-4552
	ctx.r11.s64 = ctx.r11.s64 + -4552;
	// addi r10,r10,-2128
	ctx.r10.s64 = ctx.r10.s64 + -2128;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// b 0x823b5b00
	goto loc_823B5B00;
loc_823B5AFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5B00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5B18"))) PPC_WEAK_FUNC(sub_823B5B18);
PPC_FUNC_IMPL(__imp__sub_823B5B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5b58
	if (!ctx.cr0.eq) goto loc_823B5B58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31244, ctx.r11.u32);
	// addi r3,r9,-12176
	ctx.r3.s64 = ctx.r9.s64 + -12176;
	// bl 0x82816528
	ctx.lr = 0x823B5B50;
	sub_82816528(ctx, base);
	// stw r3,-31248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31248, ctx.r3.u32);
	// b 0x823b5b5c
	goto loc_823B5B5C;
loc_823B5B58:
	// lwz r3,-31248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31248);
loc_823B5B5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5B70"))) PPC_WEAK_FUNC(sub_823B5B70);
PPC_FUNC_IMPL(__imp__sub_823B5B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5bc0
	ctx.lr = 0x823B5B90;
	sub_823B5BC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B5BA4;
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

__attribute__((alias("__imp__sub_823B5BC0"))) PPC_WEAK_FUNC(sub_823B5BC0);
PPC_FUNC_IMPL(__imp__sub_823B5BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28668
	ctx.r31.s64 = ctx.r11.s64 + -28668;
	// lwz r11,-28672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28672);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5c08
	if (!ctx.cr0.eq) goto loc_823B5C08;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5992
	ctx.r9.s64 = ctx.r9.s64 + 5992;
	// stw r11,-28672(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22712
	ctx.r3.s64 = ctx.r11.s64 + -22712;
	// bl 0x82a4c758
	ctx.lr = 0x823B5C08;
	sub_82A4C758(ctx, base);
loc_823B5C08:
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

__attribute__((alias("__imp__sub_823B5C20"))) PPC_WEAK_FUNC(sub_823B5C20);
PPC_FUNC_IMPL(__imp__sub_823B5C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B5C38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5c7c
	if (ctx.cr0.eq) goto loc_823B5C7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B5C48;
	sub_82506728(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,8440
	ctx.r10.s64 = ctx.r10.s64 + 8440;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b5c80
	goto loc_823B5C80;
loc_823B5C7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5C80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5C98"))) PPC_WEAK_FUNC(sub_823B5C98);
PPC_FUNC_IMPL(__imp__sub_823B5C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5cd8
	if (!ctx.cr0.eq) goto loc_823B5CD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31252, ctx.r11.u32);
	// addi r3,r9,-12144
	ctx.r3.s64 = ctx.r9.s64 + -12144;
	// bl 0x82816528
	ctx.lr = 0x823B5CD0;
	sub_82816528(ctx, base);
	// stw r3,-31256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31256, ctx.r3.u32);
	// b 0x823b5cdc
	goto loc_823B5CDC;
loc_823B5CD8:
	// lwz r3,-31256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31256);
loc_823B5CDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5CF0"))) PPC_WEAK_FUNC(sub_823B5CF0);
PPC_FUNC_IMPL(__imp__sub_823B5CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5d40
	ctx.lr = 0x823B5D10;
	sub_823B5D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B5D24;
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

__attribute__((alias("__imp__sub_823B5D40"))) PPC_WEAK_FUNC(sub_823B5D40);
PPC_FUNC_IMPL(__imp__sub_823B5D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28660
	ctx.r31.s64 = ctx.r11.s64 + -28660;
	// lwz r11,-28664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28664);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5d88
	if (!ctx.cr0.eq) goto loc_823B5D88;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8492
	ctx.r9.s64 = ctx.r9.s64 + 8492;
	// stw r11,-28664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28664, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22736
	ctx.r3.s64 = ctx.r11.s64 + -22736;
	// bl 0x82a4c758
	ctx.lr = 0x823B5D88;
	sub_82A4C758(ctx, base);
loc_823B5D88:
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

__attribute__((alias("__imp__sub_823B5DA0"))) PPC_WEAK_FUNC(sub_823B5DA0);
PPC_FUNC_IMPL(__imp__sub_823B5DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B5DB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5dfc
	if (ctx.cr0.eq) goto loc_823B5DFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B5DC8;
	sub_82506728(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,8512
	ctx.r11.s64 = ctx.r11.s64 + 8512;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,10936
	ctx.r10.s64 = ctx.r10.s64 + 10936;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b5e00
	goto loc_823B5E00;
loc_823B5DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5E00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5E18"))) PPC_WEAK_FUNC(sub_823B5E18);
PPC_FUNC_IMPL(__imp__sub_823B5E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5e58
	if (!ctx.cr0.eq) goto loc_823B5E58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31260, ctx.r11.u32);
	// addi r3,r9,-12036
	ctx.r3.s64 = ctx.r9.s64 + -12036;
	// bl 0x82816528
	ctx.lr = 0x823B5E50;
	sub_82816528(ctx, base);
	// stw r3,-31264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31264, ctx.r3.u32);
	// b 0x823b5e5c
	goto loc_823B5E5C;
loc_823B5E58:
	// lwz r3,-31264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31264);
loc_823B5E5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5E70"))) PPC_WEAK_FUNC(sub_823B5E70);
PPC_FUNC_IMPL(__imp__sub_823B5E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b5ec0
	ctx.lr = 0x823B5E90;
	sub_823B5EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B5EA4;
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

__attribute__((alias("__imp__sub_823B5EC0"))) PPC_WEAK_FUNC(sub_823B5EC0);
PPC_FUNC_IMPL(__imp__sub_823B5EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28652
	ctx.r31.s64 = ctx.r11.s64 + -28652;
	// lwz r11,-28656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28656);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5f08
	if (!ctx.cr0.eq) goto loc_823B5F08;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10988
	ctx.r9.s64 = ctx.r9.s64 + 10988;
	// stw r11,-28656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28656, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22760
	ctx.r3.s64 = ctx.r11.s64 + -22760;
	// bl 0x82a4c758
	ctx.lr = 0x823B5F08;
	sub_82A4C758(ctx, base);
loc_823B5F08:
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

__attribute__((alias("__imp__sub_823B5F20"))) PPC_WEAK_FUNC(sub_823B5F20);
PPC_FUNC_IMPL(__imp__sub_823B5F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B5F38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b5f7c
	if (ctx.cr0.eq) goto loc_823B5F7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B5F48;
	sub_82506728(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,11008
	ctx.r11.s64 = ctx.r11.s64 + 11008;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,13432
	ctx.r10.s64 = ctx.r10.s64 + 13432;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b5f80
	goto loc_823B5F80;
loc_823B5F7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B5F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5F98"))) PPC_WEAK_FUNC(sub_823B5F98);
PPC_FUNC_IMPL(__imp__sub_823B5F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b5fd8
	if (!ctx.cr0.eq) goto loc_823B5FD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31268, ctx.r11.u32);
	// addi r3,r9,-11924
	ctx.r3.s64 = ctx.r9.s64 + -11924;
	// bl 0x82816528
	ctx.lr = 0x823B5FD0;
	sub_82816528(ctx, base);
	// stw r3,-31272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31272, ctx.r3.u32);
	// b 0x823b5fdc
	goto loc_823B5FDC;
loc_823B5FD8:
	// lwz r3,-31272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31272);
loc_823B5FDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B5FF0"))) PPC_WEAK_FUNC(sub_823B5FF0);
PPC_FUNC_IMPL(__imp__sub_823B5FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6040
	ctx.lr = 0x823B6010;
	sub_823B6040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6024;
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

__attribute__((alias("__imp__sub_823B6040"))) PPC_WEAK_FUNC(sub_823B6040);
PPC_FUNC_IMPL(__imp__sub_823B6040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28644
	ctx.r31.s64 = ctx.r11.s64 + -28644;
	// lwz r11,-28648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6088
	if (!ctx.cr0.eq) goto loc_823B6088;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13484
	ctx.r9.s64 = ctx.r9.s64 + 13484;
	// stw r11,-28648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28648, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22784
	ctx.r3.s64 = ctx.r11.s64 + -22784;
	// bl 0x82a4c758
	ctx.lr = 0x823B6088;
	sub_82A4C758(ctx, base);
loc_823B6088:
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

__attribute__((alias("__imp__sub_823B60A0"))) PPC_WEAK_FUNC(sub_823B60A0);
PPC_FUNC_IMPL(__imp__sub_823B60A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B60B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b6104
	if (ctx.cr0.eq) goto loc_823B6104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B60C8;
	sub_82506728(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-2072
	ctx.r11.s64 = ctx.r11.s64 + -2072;
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// b 0x823b6108
	goto loc_823B6108;
loc_823B6104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6108:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6120"))) PPC_WEAK_FUNC(sub_823B6120);
PPC_FUNC_IMPL(__imp__sub_823B6120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31276);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6160
	if (!ctx.cr0.eq) goto loc_823B6160;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31276, ctx.r11.u32);
	// addi r3,r9,-11812
	ctx.r3.s64 = ctx.r9.s64 + -11812;
	// bl 0x82816528
	ctx.lr = 0x823B6158;
	sub_82816528(ctx, base);
	// stw r3,-31280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31280, ctx.r3.u32);
	// b 0x823b6164
	goto loc_823B6164;
loc_823B6160:
	// lwz r3,-31280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31280);
loc_823B6164:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6178"))) PPC_WEAK_FUNC(sub_823B6178);
PPC_FUNC_IMPL(__imp__sub_823B6178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b61c8
	ctx.lr = 0x823B6198;
	sub_823B61C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B61AC;
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

__attribute__((alias("__imp__sub_823B61C8"))) PPC_WEAK_FUNC(sub_823B61C8);
PPC_FUNC_IMPL(__imp__sub_823B61C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28636
	ctx.r31.s64 = ctx.r11.s64 + -28636;
	// lwz r11,-28640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28640);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6210
	if (!ctx.cr0.eq) goto loc_823B6210;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13504
	ctx.r9.s64 = ctx.r9.s64 + 13504;
	// stw r11,-28640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28640, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22808
	ctx.r3.s64 = ctx.r11.s64 + -22808;
	// bl 0x82a4c758
	ctx.lr = 0x823B6210;
	sub_82A4C758(ctx, base);
loc_823B6210:
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

__attribute__((alias("__imp__sub_823B6228"))) PPC_WEAK_FUNC(sub_823B6228);
PPC_FUNC_IMPL(__imp__sub_823B6228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B6240;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b628c
	if (ctx.cr0.eq) goto loc_823B628C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B6250;
	sub_82506728(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,408
	ctx.r11.s64 = ctx.r11.s64 + 408;
	// addi r10,r10,2832
	ctx.r10.s64 = ctx.r10.s64 + 2832;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// b 0x823b6290
	goto loc_823B6290;
loc_823B628C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B62A8"))) PPC_WEAK_FUNC(sub_823B62A8);
PPC_FUNC_IMPL(__imp__sub_823B62A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b62e8
	if (!ctx.cr0.eq) goto loc_823B62E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31284, ctx.r11.u32);
	// addi r3,r9,-11776
	ctx.r3.s64 = ctx.r9.s64 + -11776;
	// bl 0x82816528
	ctx.lr = 0x823B62E0;
	sub_82816528(ctx, base);
	// stw r3,-31288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31288, ctx.r3.u32);
	// b 0x823b62ec
	goto loc_823B62EC;
loc_823B62E8:
	// lwz r3,-31288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31288);
loc_823B62EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6300"))) PPC_WEAK_FUNC(sub_823B6300);
PPC_FUNC_IMPL(__imp__sub_823B6300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6350
	ctx.lr = 0x823B6320;
	sub_823B6350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6334;
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

__attribute__((alias("__imp__sub_823B6350"))) PPC_WEAK_FUNC(sub_823B6350);
PPC_FUNC_IMPL(__imp__sub_823B6350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28628
	ctx.r31.s64 = ctx.r11.s64 + -28628;
	// lwz r11,-28632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6398
	if (!ctx.cr0.eq) goto loc_823B6398;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13524
	ctx.r9.s64 = ctx.r9.s64 + 13524;
	// stw r11,-28632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28632, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22832
	ctx.r3.s64 = ctx.r11.s64 + -22832;
	// bl 0x82a4c758
	ctx.lr = 0x823B6398;
	sub_82A4C758(ctx, base);
loc_823B6398:
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

__attribute__((alias("__imp__sub_823B63B0"))) PPC_WEAK_FUNC(sub_823B63B0);
PPC_FUNC_IMPL(__imp__sub_823B63B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6736
	ctx.r3.s64 = 6736;
	// bl 0x82833108
	ctx.lr = 0x823B63C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b6414
	if (ctx.cr0.eq) goto loc_823B6414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82506728
	ctx.lr = 0x823B63D8;
	sub_82506728(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,2888
	ctx.r11.s64 = ctx.r11.s64 + 2888;
	// addi r10,r10,5312
	ctx.r10.s64 = ctx.r10.s64 + 5312;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r9,29808
	ctx.r9.s64 = ctx.r9.s64 + 29808;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// b 0x823b6418
	goto loc_823B6418;
loc_823B6414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6418:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6430"))) PPC_WEAK_FUNC(sub_823B6430);
PPC_FUNC_IMPL(__imp__sub_823B6430) {
	PPC_FUNC_PROLOGUE();
	// li r3,6736
	ctx.r3.s64 = 6736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6438"))) PPC_WEAK_FUNC(sub_823B6438);
PPC_FUNC_IMPL(__imp__sub_823B6438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6478
	if (!ctx.cr0.eq) goto loc_823B6478;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31292, ctx.r11.u32);
	// addi r3,r9,-11736
	ctx.r3.s64 = ctx.r9.s64 + -11736;
	// bl 0x82816528
	ctx.lr = 0x823B6470;
	sub_82816528(ctx, base);
	// stw r3,-31296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31296, ctx.r3.u32);
	// b 0x823b647c
	goto loc_823B647C;
loc_823B6478:
	// lwz r3,-31296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31296);
loc_823B647C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6490"))) PPC_WEAK_FUNC(sub_823B6490);
PPC_FUNC_IMPL(__imp__sub_823B6490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b64e0
	ctx.lr = 0x823B64B0;
	sub_823B64E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B64C4;
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

__attribute__((alias("__imp__sub_823B64E0"))) PPC_WEAK_FUNC(sub_823B64E0);
PPC_FUNC_IMPL(__imp__sub_823B64E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28620
	ctx.r31.s64 = ctx.r11.s64 + -28620;
	// lwz r11,-28624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6528
	if (!ctx.cr0.eq) goto loc_823B6528;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13544
	ctx.r9.s64 = ctx.r9.s64 + 13544;
	// stw r11,-28624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28624, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22856
	ctx.r3.s64 = ctx.r11.s64 + -22856;
	// bl 0x82a4c758
	ctx.lr = 0x823B6528;
	sub_82A4C758(ctx, base);
loc_823B6528:
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

__attribute__((alias("__imp__sub_823B6540"))) PPC_WEAK_FUNC(sub_823B6540);
PPC_FUNC_IMPL(__imp__sub_823B6540) {
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
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6554;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b6564
	if (ctx.cr0.eq) goto loc_823B6564;
	// bl 0x82512e90
	ctx.lr = 0x823B6560;
	sub_82512E90(ctx, base);
	// b 0x823b6568
	goto loc_823B6568;
loc_823B6564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6578"))) PPC_WEAK_FUNC(sub_823B6578);
PPC_FUNC_IMPL(__imp__sub_823B6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b65b8
	if (!ctx.cr0.eq) goto loc_823B65B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31300, ctx.r11.u32);
	// addi r3,r9,-11700
	ctx.r3.s64 = ctx.r9.s64 + -11700;
	// bl 0x82816528
	ctx.lr = 0x823B65B0;
	sub_82816528(ctx, base);
	// stw r3,-31304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31304, ctx.r3.u32);
	// b 0x823b65bc
	goto loc_823B65BC;
loc_823B65B8:
	// lwz r3,-31304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31304);
loc_823B65BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B65D0"))) PPC_WEAK_FUNC(sub_823B65D0);
PPC_FUNC_IMPL(__imp__sub_823B65D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6620
	ctx.lr = 0x823B65F0;
	sub_823B6620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6604;
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

__attribute__((alias("__imp__sub_823B6620"))) PPC_WEAK_FUNC(sub_823B6620);
PPC_FUNC_IMPL(__imp__sub_823B6620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28612
	ctx.r31.s64 = ctx.r11.s64 + -28612;
	// lwz r11,-28616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6668
	if (!ctx.cr0.eq) goto loc_823B6668;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,13564
	ctx.r9.s64 = ctx.r9.s64 + 13564;
	// stw r11,-28616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28616, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22880
	ctx.r3.s64 = ctx.r11.s64 + -22880;
	// bl 0x82a4c758
	ctx.lr = 0x823B6668;
	sub_82A4C758(ctx, base);
loc_823B6668:
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

__attribute__((alias("__imp__sub_823B6680"))) PPC_WEAK_FUNC(sub_823B6680);
PPC_FUNC_IMPL(__imp__sub_823B6680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6698;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b66dc
	if (ctx.cr0.eq) goto loc_823B66DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250dcb8
	ctx.lr = 0x823B66A8;
	sub_8250DCB8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,13584
	ctx.r11.s64 = ctx.r11.s64 + 13584;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,16024
	ctx.r10.s64 = ctx.r10.s64 + 16024;
	// addi r9,r9,18588
	ctx.r9.s64 = ctx.r9.s64 + 18588;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b66e0
	goto loc_823B66E0;
loc_823B66DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B66E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B66F8"))) PPC_WEAK_FUNC(sub_823B66F8);
PPC_FUNC_IMPL(__imp__sub_823B66F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6738
	if (!ctx.cr0.eq) goto loc_823B6738;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31308, ctx.r11.u32);
	// addi r3,r9,-11664
	ctx.r3.s64 = ctx.r9.s64 + -11664;
	// bl 0x82816528
	ctx.lr = 0x823B6730;
	sub_82816528(ctx, base);
	// stw r3,-31312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31312, ctx.r3.u32);
	// b 0x823b673c
	goto loc_823B673C;
loc_823B6738:
	// lwz r3,-31312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31312);
loc_823B673C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6750"))) PPC_WEAK_FUNC(sub_823B6750);
PPC_FUNC_IMPL(__imp__sub_823B6750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b67a0
	ctx.lr = 0x823B6770;
	sub_823B67A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6784;
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

__attribute__((alias("__imp__sub_823B67A0"))) PPC_WEAK_FUNC(sub_823B67A0);
PPC_FUNC_IMPL(__imp__sub_823B67A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28604
	ctx.r31.s64 = ctx.r11.s64 + -28604;
	// lwz r11,-28608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b67e8
	if (!ctx.cr0.eq) goto loc_823B67E8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16076
	ctx.r9.s64 = ctx.r9.s64 + 16076;
	// stw r11,-28608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28608, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22904
	ctx.r3.s64 = ctx.r11.s64 + -22904;
	// bl 0x82a4c758
	ctx.lr = 0x823B67E8;
	sub_82A4C758(ctx, base);
loc_823B67E8:
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

__attribute__((alias("__imp__sub_823B6800"))) PPC_WEAK_FUNC(sub_823B6800);
PPC_FUNC_IMPL(__imp__sub_823B6800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6818;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b685c
	if (ctx.cr0.eq) goto loc_823B685C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250dcb8
	ctx.lr = 0x823B6828;
	sub_8250DCB8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,16096
	ctx.r11.s64 = ctx.r11.s64 + 16096;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,18536
	ctx.r10.s64 = ctx.r10.s64 + 18536;
	// addi r9,r9,18588
	ctx.r9.s64 = ctx.r9.s64 + 18588;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b6860
	goto loc_823B6860;
loc_823B685C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6878"))) PPC_WEAK_FUNC(sub_823B6878);
PPC_FUNC_IMPL(__imp__sub_823B6878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b68b8
	if (!ctx.cr0.eq) goto loc_823B68B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31316, ctx.r11.u32);
	// addi r3,r9,-11556
	ctx.r3.s64 = ctx.r9.s64 + -11556;
	// bl 0x82816528
	ctx.lr = 0x823B68B0;
	sub_82816528(ctx, base);
	// stw r3,-31320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31320, ctx.r3.u32);
	// b 0x823b68bc
	goto loc_823B68BC;
loc_823B68B8:
	// lwz r3,-31320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31320);
loc_823B68BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B68D0"))) PPC_WEAK_FUNC(sub_823B68D0);
PPC_FUNC_IMPL(__imp__sub_823B68D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6920
	ctx.lr = 0x823B68F0;
	sub_823B6920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6904;
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

__attribute__((alias("__imp__sub_823B6920"))) PPC_WEAK_FUNC(sub_823B6920);
PPC_FUNC_IMPL(__imp__sub_823B6920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28596
	ctx.r31.s64 = ctx.r11.s64 + -28596;
	// lwz r11,-28600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6968
	if (!ctx.cr0.eq) goto loc_823B6968;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,18612
	ctx.r9.s64 = ctx.r9.s64 + 18612;
	// stw r11,-28600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28600, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22928
	ctx.r3.s64 = ctx.r11.s64 + -22928;
	// bl 0x82a4c758
	ctx.lr = 0x823B6968;
	sub_82A4C758(ctx, base);
loc_823B6968:
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

__attribute__((alias("__imp__sub_823B6980"))) PPC_WEAK_FUNC(sub_823B6980);
PPC_FUNC_IMPL(__imp__sub_823B6980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6998;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b69dc
	if (ctx.cr0.eq) goto loc_823B69DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250dcb8
	ctx.lr = 0x823B69A8;
	sub_8250DCB8(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,18632
	ctx.r11.s64 = ctx.r11.s64 + 18632;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,21072
	ctx.r10.s64 = ctx.r10.s64 + 21072;
	// addi r9,r9,18588
	ctx.r9.s64 = ctx.r9.s64 + 18588;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b69e0
	goto loc_823B69E0;
loc_823B69DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B69E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B69F8"))) PPC_WEAK_FUNC(sub_823B69F8);
PPC_FUNC_IMPL(__imp__sub_823B69F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6a38
	if (!ctx.cr0.eq) goto loc_823B6A38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31324, ctx.r11.u32);
	// addi r3,r9,-11444
	ctx.r3.s64 = ctx.r9.s64 + -11444;
	// bl 0x82816528
	ctx.lr = 0x823B6A30;
	sub_82816528(ctx, base);
	// stw r3,-31328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31328, ctx.r3.u32);
	// b 0x823b6a3c
	goto loc_823B6A3C;
loc_823B6A38:
	// lwz r3,-31328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31328);
loc_823B6A3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6A50"))) PPC_WEAK_FUNC(sub_823B6A50);
PPC_FUNC_IMPL(__imp__sub_823B6A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6aa0
	ctx.lr = 0x823B6A70;
	sub_823B6AA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6A84;
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

__attribute__((alias("__imp__sub_823B6AA0"))) PPC_WEAK_FUNC(sub_823B6AA0);
PPC_FUNC_IMPL(__imp__sub_823B6AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28588
	ctx.r31.s64 = ctx.r11.s64 + -28588;
	// lwz r11,-28592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6ae8
	if (!ctx.cr0.eq) goto loc_823B6AE8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21124
	ctx.r9.s64 = ctx.r9.s64 + 21124;
	// stw r11,-28592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28592, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// bl 0x82a4c758
	ctx.lr = 0x823B6AE8;
	sub_82A4C758(ctx, base);
loc_823B6AE8:
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

__attribute__((alias("__imp__sub_823B6B00"))) PPC_WEAK_FUNC(sub_823B6B00);
PPC_FUNC_IMPL(__imp__sub_823B6B00) {
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
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6B14;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b6b24
	if (ctx.cr0.eq) goto loc_823B6B24;
	// bl 0x825132a8
	ctx.lr = 0x823B6B20;
	sub_825132A8(ctx, base);
	// b 0x823b6b28
	goto loc_823B6B28;
loc_823B6B24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6B28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6B38"))) PPC_WEAK_FUNC(sub_823B6B38);
PPC_FUNC_IMPL(__imp__sub_823B6B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6b78
	if (!ctx.cr0.eq) goto loc_823B6B78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31332, ctx.r11.u32);
	// addi r3,r9,-11332
	ctx.r3.s64 = ctx.r9.s64 + -11332;
	// bl 0x82816528
	ctx.lr = 0x823B6B70;
	sub_82816528(ctx, base);
	// stw r3,-31336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31336, ctx.r3.u32);
	// b 0x823b6b7c
	goto loc_823B6B7C;
loc_823B6B78:
	// lwz r3,-31336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31336);
loc_823B6B7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6B90"))) PPC_WEAK_FUNC(sub_823B6B90);
PPC_FUNC_IMPL(__imp__sub_823B6B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6be0
	ctx.lr = 0x823B6BB0;
	sub_823B6BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6BC4;
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

__attribute__((alias("__imp__sub_823B6BE0"))) PPC_WEAK_FUNC(sub_823B6BE0);
PPC_FUNC_IMPL(__imp__sub_823B6BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28580
	ctx.r31.s64 = ctx.r11.s64 + -28580;
	// lwz r11,-28584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6c28
	if (!ctx.cr0.eq) goto loc_823B6C28;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21144
	ctx.r9.s64 = ctx.r9.s64 + 21144;
	// stw r11,-28584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-22976
	ctx.r3.s64 = ctx.r11.s64 + -22976;
	// bl 0x82a4c758
	ctx.lr = 0x823B6C28;
	sub_82A4C758(ctx, base);
loc_823B6C28:
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

__attribute__((alias("__imp__sub_823B6C40"))) PPC_WEAK_FUNC(sub_823B6C40);
PPC_FUNC_IMPL(__imp__sub_823B6C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6752
	ctx.r3.s64 = 6752;
	// bl 0x82833108
	ctx.lr = 0x823B6C58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b6c94
	if (ctx.cr0.eq) goto loc_823B6C94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250dcb8
	ctx.lr = 0x823B6C68;
	sub_8250DCB8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,12800
	ctx.r10.s64 = ctx.r10.s64 + 12800;
	// addi r9,r9,18588
	ctx.r9.s64 = ctx.r9.s64 + 18588;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b6c98
	goto loc_823B6C98;
loc_823B6C94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6C98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6CB0"))) PPC_WEAK_FUNC(sub_823B6CB0);
PPC_FUNC_IMPL(__imp__sub_823B6CB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6752
	ctx.r3.s64 = 6752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6CB8"))) PPC_WEAK_FUNC(sub_823B6CB8);
PPC_FUNC_IMPL(__imp__sub_823B6CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6cf8
	if (!ctx.cr0.eq) goto loc_823B6CF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31340, ctx.r11.u32);
	// addi r3,r9,-11296
	ctx.r3.s64 = ctx.r9.s64 + -11296;
	// bl 0x82816528
	ctx.lr = 0x823B6CF0;
	sub_82816528(ctx, base);
	// stw r3,-31344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31344, ctx.r3.u32);
	// b 0x823b6cfc
	goto loc_823B6CFC;
loc_823B6CF8:
	// lwz r3,-31344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31344);
loc_823B6CFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6D10"))) PPC_WEAK_FUNC(sub_823B6D10);
PPC_FUNC_IMPL(__imp__sub_823B6D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6d60
	ctx.lr = 0x823B6D30;
	sub_823B6D60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6D44;
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

__attribute__((alias("__imp__sub_823B6D60"))) PPC_WEAK_FUNC(sub_823B6D60);
PPC_FUNC_IMPL(__imp__sub_823B6D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28572
	ctx.r31.s64 = ctx.r11.s64 + -28572;
	// lwz r11,-28576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6da8
	if (!ctx.cr0.eq) goto loc_823B6DA8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21164
	ctx.r9.s64 = ctx.r9.s64 + 21164;
	// stw r11,-28576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28576, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23000
	ctx.r3.s64 = ctx.r11.s64 + -23000;
	// bl 0x82a4c758
	ctx.lr = 0x823B6DA8;
	sub_82A4C758(ctx, base);
loc_823B6DA8:
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

__attribute__((alias("__imp__sub_823B6DC0"))) PPC_WEAK_FUNC(sub_823B6DC0);
PPC_FUNC_IMPL(__imp__sub_823B6DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6768
	ctx.r3.s64 = 6768;
	// bl 0x82833108
	ctx.lr = 0x823B6DD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b6e28
	if (ctx.cr0.eq) goto loc_823B6E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250dcb8
	ctx.lr = 0x823B6DE8;
	sub_8250DCB8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,12856
	ctx.r10.s64 = ctx.r10.s64 + 12856;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,15296
	ctx.r9.s64 = ctx.r9.s64 + 15296;
	// addi r8,r8,18588
	ctx.r8.s64 = ctx.r8.s64 + 18588;
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r10.u32);
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b6e2c
	goto loc_823B6E2C;
loc_823B6E28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6E2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6E40"))) PPC_WEAK_FUNC(sub_823B6E40);
PPC_FUNC_IMPL(__imp__sub_823B6E40) {
	PPC_FUNC_PROLOGUE();
	// li r3,6768
	ctx.r3.s64 = 6768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6E48"))) PPC_WEAK_FUNC(sub_823B6E48);
PPC_FUNC_IMPL(__imp__sub_823B6E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6e88
	if (!ctx.cr0.eq) goto loc_823B6E88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31348, ctx.r11.u32);
	// addi r3,r9,-11264
	ctx.r3.s64 = ctx.r9.s64 + -11264;
	// bl 0x82816528
	ctx.lr = 0x823B6E80;
	sub_82816528(ctx, base);
	// stw r3,-31352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31352, ctx.r3.u32);
	// b 0x823b6e8c
	goto loc_823B6E8C;
loc_823B6E88:
	// lwz r3,-31352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31352);
loc_823B6E8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6EA0"))) PPC_WEAK_FUNC(sub_823B6EA0);
PPC_FUNC_IMPL(__imp__sub_823B6EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b6ef0
	ctx.lr = 0x823B6EC0;
	sub_823B6EF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B6ED4;
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

__attribute__((alias("__imp__sub_823B6EF0"))) PPC_WEAK_FUNC(sub_823B6EF0);
PPC_FUNC_IMPL(__imp__sub_823B6EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28564
	ctx.r31.s64 = ctx.r11.s64 + -28564;
	// lwz r11,-28568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6f38
	if (!ctx.cr0.eq) goto loc_823B6F38;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21184
	ctx.r9.s64 = ctx.r9.s64 + 21184;
	// stw r11,-28568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28568, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23024
	ctx.r3.s64 = ctx.r11.s64 + -23024;
	// bl 0x82a4c758
	ctx.lr = 0x823B6F38;
	sub_82A4C758(ctx, base);
loc_823B6F38:
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

__attribute__((alias("__imp__sub_823B6F50"))) PPC_WEAK_FUNC(sub_823B6F50);
PPC_FUNC_IMPL(__imp__sub_823B6F50) {
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
	// li r3,7056
	ctx.r3.s64 = 7056;
	// bl 0x82833108
	ctx.lr = 0x823B6F64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b6f74
	if (ctx.cr0.eq) goto loc_823B6F74;
	// bl 0x82544720
	ctx.lr = 0x823B6F70;
	sub_82544720(ctx, base);
	// b 0x823b6f78
	goto loc_823B6F78;
loc_823B6F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B6F78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6F88"))) PPC_WEAK_FUNC(sub_823B6F88);
PPC_FUNC_IMPL(__imp__sub_823B6F88) {
	PPC_FUNC_PROLOGUE();
	// li r3,7056
	ctx.r3.s64 = 7056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6F90"))) PPC_WEAK_FUNC(sub_823B6F90);
PPC_FUNC_IMPL(__imp__sub_823B6F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b6fd0
	if (!ctx.cr0.eq) goto loc_823B6FD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31356, ctx.r11.u32);
	// addi r3,r9,-11152
	ctx.r3.s64 = ctx.r9.s64 + -11152;
	// bl 0x82816528
	ctx.lr = 0x823B6FC8;
	sub_82816528(ctx, base);
	// stw r3,-31360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31360, ctx.r3.u32);
	// b 0x823b6fd4
	goto loc_823B6FD4;
loc_823B6FD0:
	// lwz r3,-31360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31360);
loc_823B6FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B6FE8"))) PPC_WEAK_FUNC(sub_823B6FE8);
PPC_FUNC_IMPL(__imp__sub_823B6FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7038
	ctx.lr = 0x823B7008;
	sub_823B7038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B701C;
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

__attribute__((alias("__imp__sub_823B7038"))) PPC_WEAK_FUNC(sub_823B7038);
PPC_FUNC_IMPL(__imp__sub_823B7038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30500
	ctx.r31.s64 = ctx.r11.s64 + -30500;
	// lwz r11,-30504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7080
	if (!ctx.cr0.eq) goto loc_823B7080;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21204
	ctx.r9.s64 = ctx.r9.s64 + 21204;
	// stw r11,-30504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30504, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23048
	ctx.r3.s64 = ctx.r11.s64 + -23048;
	// bl 0x82a4c758
	ctx.lr = 0x823B7080;
	sub_82A4C758(ctx, base);
loc_823B7080:
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

__attribute__((alias("__imp__sub_823B7098"))) PPC_WEAK_FUNC(sub_823B7098);
PPC_FUNC_IMPL(__imp__sub_823B7098) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x823B70AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b70c0
	if (ctx.cr0.eq) goto loc_823B70C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82542b60
	ctx.lr = 0x823B70BC;
	sub_82542B60(ctx, base);
	// b 0x823b70c4
	goto loc_823B70C4;
loc_823B70C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B70C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b70d8
	if (ctx.cr6.eq) goto loc_823B70D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B70D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B70E8"))) PPC_WEAK_FUNC(sub_823B70E8);
PPC_FUNC_IMPL(__imp__sub_823B70E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7128
	if (!ctx.cr0.eq) goto loc_823B7128;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31364, ctx.r11.u32);
	// addi r3,r9,-11132
	ctx.r3.s64 = ctx.r9.s64 + -11132;
	// bl 0x82816528
	ctx.lr = 0x823B7120;
	sub_82816528(ctx, base);
	// stw r3,-31368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31368, ctx.r3.u32);
	// b 0x823b712c
	goto loc_823B712C;
loc_823B7128:
	// lwz r3,-31368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31368);
loc_823B712C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7140"))) PPC_WEAK_FUNC(sub_823B7140);
PPC_FUNC_IMPL(__imp__sub_823B7140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7190
	ctx.lr = 0x823B7160;
	sub_823B7190(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7174;
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

__attribute__((alias("__imp__sub_823B7190"))) PPC_WEAK_FUNC(sub_823B7190);
PPC_FUNC_IMPL(__imp__sub_823B7190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30492
	ctx.r31.s64 = ctx.r11.s64 + -30492;
	// lwz r11,-30496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b71d8
	if (!ctx.cr0.eq) goto loc_823B71D8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21224
	ctx.r9.s64 = ctx.r9.s64 + 21224;
	// stw r11,-30496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30496, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// bl 0x82a4c758
	ctx.lr = 0x823B71D8;
	sub_82A4C758(ctx, base);
loc_823B71D8:
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

__attribute__((alias("__imp__sub_823B71F0"))) PPC_WEAK_FUNC(sub_823B71F0);
PPC_FUNC_IMPL(__imp__sub_823B71F0) {
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
	ctx.lr = 0x823B7204;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7218
	if (ctx.cr0.eq) goto loc_823B7218;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db2f0
	ctx.lr = 0x823B7214;
	sub_823DB2F0(ctx, base);
	// b 0x823b721c
	goto loc_823B721C;
loc_823B7218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B721C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7230
	if (ctx.cr6.eq) goto loc_823B7230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7240"))) PPC_WEAK_FUNC(sub_823B7240);
PPC_FUNC_IMPL(__imp__sub_823B7240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7280
	if (!ctx.cr0.eq) goto loc_823B7280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31372, ctx.r11.u32);
	// addi r3,r9,-11104
	ctx.r3.s64 = ctx.r9.s64 + -11104;
	// bl 0x82816528
	ctx.lr = 0x823B7278;
	sub_82816528(ctx, base);
	// stw r3,-31376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31376, ctx.r3.u32);
	// b 0x823b7284
	goto loc_823B7284;
loc_823B7280:
	// lwz r3,-31376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31376);
loc_823B7284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7298"))) PPC_WEAK_FUNC(sub_823B7298);
PPC_FUNC_IMPL(__imp__sub_823B7298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b72e8
	ctx.lr = 0x823B72B8;
	sub_823B72E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B72CC;
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

__attribute__((alias("__imp__sub_823B72E8"))) PPC_WEAK_FUNC(sub_823B72E8);
PPC_FUNC_IMPL(__imp__sub_823B72E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30484
	ctx.r31.s64 = ctx.r11.s64 + -30484;
	// lwz r11,-30488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7330
	if (!ctx.cr0.eq) goto loc_823B7330;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21476
	ctx.r9.s64 = ctx.r9.s64 + 21476;
	// stw r11,-30488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30488, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23096
	ctx.r3.s64 = ctx.r11.s64 + -23096;
	// bl 0x82a4c758
	ctx.lr = 0x823B7330;
	sub_82A4C758(ctx, base);
loc_823B7330:
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

__attribute__((alias("__imp__sub_823B7348"))) PPC_WEAK_FUNC(sub_823B7348);
PPC_FUNC_IMPL(__imp__sub_823B7348) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x823B735C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7370
	if (ctx.cr0.eq) goto loc_823B7370;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db418
	ctx.lr = 0x823B736C;
	sub_823DB418(ctx, base);
	// b 0x823b7374
	goto loc_823B7374;
loc_823B7370:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7374:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7388
	if (ctx.cr6.eq) goto loc_823B7388;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7398"))) PPC_WEAK_FUNC(sub_823B7398);
PPC_FUNC_IMPL(__imp__sub_823B7398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b73d8
	if (!ctx.cr0.eq) goto loc_823B73D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31380, ctx.r11.u32);
	// addi r3,r9,-11064
	ctx.r3.s64 = ctx.r9.s64 + -11064;
	// bl 0x82816528
	ctx.lr = 0x823B73D0;
	sub_82816528(ctx, base);
	// stw r3,-31384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31384, ctx.r3.u32);
	// b 0x823b73dc
	goto loc_823B73DC;
loc_823B73D8:
	// lwz r3,-31384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31384);
loc_823B73DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B73F0"))) PPC_WEAK_FUNC(sub_823B73F0);
PPC_FUNC_IMPL(__imp__sub_823B73F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7440
	ctx.lr = 0x823B7410;
	sub_823B7440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7424;
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

__attribute__((alias("__imp__sub_823B7440"))) PPC_WEAK_FUNC(sub_823B7440);
PPC_FUNC_IMPL(__imp__sub_823B7440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30476
	ctx.r31.s64 = ctx.r11.s64 + -30476;
	// lwz r11,-30480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7488
	if (!ctx.cr0.eq) goto loc_823B7488;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21908
	ctx.r9.s64 = ctx.r9.s64 + 21908;
	// stw r11,-30480(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30480, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23120
	ctx.r3.s64 = ctx.r11.s64 + -23120;
	// bl 0x82a4c758
	ctx.lr = 0x823B7488;
	sub_82A4C758(ctx, base);
loc_823B7488:
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

__attribute__((alias("__imp__sub_823B74A0"))) PPC_WEAK_FUNC(sub_823B74A0);
PPC_FUNC_IMPL(__imp__sub_823B74A0) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x823B74B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b74c8
	if (ctx.cr0.eq) goto loc_823B74C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db5c8
	ctx.lr = 0x823B74C4;
	sub_823DB5C8(ctx, base);
	// b 0x823b74cc
	goto loc_823B74CC;
loc_823B74C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B74CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b74e0
	if (ctx.cr6.eq) goto loc_823B74E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B74E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B74F0"))) PPC_WEAK_FUNC(sub_823B74F0);
PPC_FUNC_IMPL(__imp__sub_823B74F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7530
	if (!ctx.cr0.eq) goto loc_823B7530;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31388, ctx.r11.u32);
	// addi r3,r9,-11020
	ctx.r3.s64 = ctx.r9.s64 + -11020;
	// bl 0x82816528
	ctx.lr = 0x823B7528;
	sub_82816528(ctx, base);
	// stw r3,-31392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31392, ctx.r3.u32);
	// b 0x823b7534
	goto loc_823B7534;
loc_823B7530:
	// lwz r3,-31392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31392);
loc_823B7534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7548"))) PPC_WEAK_FUNC(sub_823B7548);
PPC_FUNC_IMPL(__imp__sub_823B7548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7598
	ctx.lr = 0x823B7568;
	sub_823B7598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B757C;
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

__attribute__((alias("__imp__sub_823B7598"))) PPC_WEAK_FUNC(sub_823B7598);
PPC_FUNC_IMPL(__imp__sub_823B7598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30468
	ctx.r31.s64 = ctx.r11.s64 + -30468;
	// lwz r11,-30472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30472);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b75e0
	if (!ctx.cr0.eq) goto loc_823B75E0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22332
	ctx.r9.s64 = ctx.r9.s64 + 22332;
	// stw r11,-30472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30472, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23144
	ctx.r3.s64 = ctx.r11.s64 + -23144;
	// bl 0x82a4c758
	ctx.lr = 0x823B75E0;
	sub_82A4C758(ctx, base);
loc_823B75E0:
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

__attribute__((alias("__imp__sub_823B75F8"))) PPC_WEAK_FUNC(sub_823B75F8);
PPC_FUNC_IMPL(__imp__sub_823B75F8) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82833108
	ctx.lr = 0x823B760C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7620
	if (ctx.cr0.eq) goto loc_823B7620;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db778
	ctx.lr = 0x823B761C;
	sub_823DB778(ctx, base);
	// b 0x823b7624
	goto loc_823B7624;
loc_823B7620:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7624:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7638
	if (ctx.cr6.eq) goto loc_823B7638;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7648"))) PPC_WEAK_FUNC(sub_823B7648);
PPC_FUNC_IMPL(__imp__sub_823B7648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7688
	if (!ctx.cr0.eq) goto loc_823B7688;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31396, ctx.r11.u32);
	// addi r3,r9,-10976
	ctx.r3.s64 = ctx.r9.s64 + -10976;
	// bl 0x82816528
	ctx.lr = 0x823B7680;
	sub_82816528(ctx, base);
	// stw r3,-31400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31400, ctx.r3.u32);
	// b 0x823b768c
	goto loc_823B768C;
loc_823B7688:
	// lwz r3,-31400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31400);
loc_823B768C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B76A0"))) PPC_WEAK_FUNC(sub_823B76A0);
PPC_FUNC_IMPL(__imp__sub_823B76A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b76f0
	ctx.lr = 0x823B76C0;
	sub_823B76F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B76D4;
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

__attribute__((alias("__imp__sub_823B76F0"))) PPC_WEAK_FUNC(sub_823B76F0);
PPC_FUNC_IMPL(__imp__sub_823B76F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30460
	ctx.r31.s64 = ctx.r11.s64 + -30460;
	// lwz r11,-30464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7738
	if (!ctx.cr0.eq) goto loc_823B7738;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22780
	ctx.r9.s64 = ctx.r9.s64 + 22780;
	// stw r11,-30464(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30464, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23168
	ctx.r3.s64 = ctx.r11.s64 + -23168;
	// bl 0x82a4c758
	ctx.lr = 0x823B7738;
	sub_82A4C758(ctx, base);
loc_823B7738:
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

__attribute__((alias("__imp__sub_823B7750"))) PPC_WEAK_FUNC(sub_823B7750);
PPC_FUNC_IMPL(__imp__sub_823B7750) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x823B7764;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7778
	if (ctx.cr0.eq) goto loc_823B7778;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db8b8
	ctx.lr = 0x823B7774;
	sub_823DB8B8(ctx, base);
	// b 0x823b777c
	goto loc_823B777C;
loc_823B7778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B777C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7790
	if (ctx.cr6.eq) goto loc_823B7790;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B77A0"))) PPC_WEAK_FUNC(sub_823B77A0);
PPC_FUNC_IMPL(__imp__sub_823B77A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b77e0
	if (!ctx.cr0.eq) goto loc_823B77E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31404, ctx.r11.u32);
	// addi r3,r9,-10932
	ctx.r3.s64 = ctx.r9.s64 + -10932;
	// bl 0x82816528
	ctx.lr = 0x823B77D8;
	sub_82816528(ctx, base);
	// stw r3,-31408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31408, ctx.r3.u32);
	// b 0x823b77e4
	goto loc_823B77E4;
loc_823B77E0:
	// lwz r3,-31408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31408);
loc_823B77E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B77F8"))) PPC_WEAK_FUNC(sub_823B77F8);
PPC_FUNC_IMPL(__imp__sub_823B77F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7848
	ctx.lr = 0x823B7818;
	sub_823B7848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B782C;
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

__attribute__((alias("__imp__sub_823B7848"))) PPC_WEAK_FUNC(sub_823B7848);
PPC_FUNC_IMPL(__imp__sub_823B7848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30452
	ctx.r31.s64 = ctx.r11.s64 + -30452;
	// lwz r11,-30456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7890
	if (!ctx.cr0.eq) goto loc_823B7890;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23156
	ctx.r9.s64 = ctx.r9.s64 + 23156;
	// stw r11,-30456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30456, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23192
	ctx.r3.s64 = ctx.r11.s64 + -23192;
	// bl 0x82a4c758
	ctx.lr = 0x823B7890;
	sub_82A4C758(ctx, base);
loc_823B7890:
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

__attribute__((alias("__imp__sub_823B78A8"))) PPC_WEAK_FUNC(sub_823B78A8);
PPC_FUNC_IMPL(__imp__sub_823B78A8) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82833108
	ctx.lr = 0x823B78BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b78d0
	if (ctx.cr0.eq) goto loc_823B78D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823db9f8
	ctx.lr = 0x823B78CC;
	sub_823DB9F8(ctx, base);
	// b 0x823b78d4
	goto loc_823B78D4;
loc_823B78D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B78D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b78e8
	if (ctx.cr6.eq) goto loc_823B78E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B78E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B78F8"))) PPC_WEAK_FUNC(sub_823B78F8);
PPC_FUNC_IMPL(__imp__sub_823B78F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,132
	ctx.r3.s64 = 132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7900"))) PPC_WEAK_FUNC(sub_823B7900);
PPC_FUNC_IMPL(__imp__sub_823B7900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7940
	if (!ctx.cr0.eq) goto loc_823B7940;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31412, ctx.r11.u32);
	// addi r3,r9,-10892
	ctx.r3.s64 = ctx.r9.s64 + -10892;
	// bl 0x82816528
	ctx.lr = 0x823B7938;
	sub_82816528(ctx, base);
	// stw r3,-31416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31416, ctx.r3.u32);
	// b 0x823b7944
	goto loc_823B7944;
loc_823B7940:
	// lwz r3,-31416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31416);
loc_823B7944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7958"))) PPC_WEAK_FUNC(sub_823B7958);
PPC_FUNC_IMPL(__imp__sub_823B7958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b79a8
	ctx.lr = 0x823B7978;
	sub_823B79A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B798C;
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

__attribute__((alias("__imp__sub_823B79A8"))) PPC_WEAK_FUNC(sub_823B79A8);
PPC_FUNC_IMPL(__imp__sub_823B79A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30444
	ctx.r31.s64 = ctx.r11.s64 + -30444;
	// lwz r11,-30448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30448);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b79f0
	if (!ctx.cr0.eq) goto loc_823B79F0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23404
	ctx.r9.s64 = ctx.r9.s64 + 23404;
	// stw r11,-30448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30448, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// bl 0x82a4c758
	ctx.lr = 0x823B79F0;
	sub_82A4C758(ctx, base);
loc_823B79F0:
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

__attribute__((alias("__imp__sub_823B7A08"))) PPC_WEAK_FUNC(sub_823B7A08);
PPC_FUNC_IMPL(__imp__sub_823B7A08) {
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
	// li r3,7248
	ctx.r3.s64 = 7248;
	// bl 0x82833108
	ctx.lr = 0x823B7A1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7a2c
	if (ctx.cr0.eq) goto loc_823B7A2C;
	// bl 0x8254b390
	ctx.lr = 0x823B7A28;
	sub_8254B390(ctx, base);
	// b 0x823b7a30
	goto loc_823B7A30;
loc_823B7A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7A40"))) PPC_WEAK_FUNC(sub_823B7A40);
PPC_FUNC_IMPL(__imp__sub_823B7A40) {
	PPC_FUNC_PROLOGUE();
	// li r3,7248
	ctx.r3.s64 = 7248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7A48"))) PPC_WEAK_FUNC(sub_823B7A48);
PPC_FUNC_IMPL(__imp__sub_823B7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7a88
	if (!ctx.cr0.eq) goto loc_823B7A88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31420, ctx.r11.u32);
	// addi r3,r9,-10848
	ctx.r3.s64 = ctx.r9.s64 + -10848;
	// bl 0x82816528
	ctx.lr = 0x823B7A80;
	sub_82816528(ctx, base);
	// stw r3,-31424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31424, ctx.r3.u32);
	// b 0x823b7a8c
	goto loc_823B7A8C;
loc_823B7A88:
	// lwz r3,-31424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31424);
loc_823B7A8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7AA0"))) PPC_WEAK_FUNC(sub_823B7AA0);
PPC_FUNC_IMPL(__imp__sub_823B7AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7af0
	ctx.lr = 0x823B7AC0;
	sub_823B7AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7AD4;
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

__attribute__((alias("__imp__sub_823B7AF0"))) PPC_WEAK_FUNC(sub_823B7AF0);
PPC_FUNC_IMPL(__imp__sub_823B7AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30540
	ctx.r31.s64 = ctx.r11.s64 + -30540;
	// lwz r11,-30544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7b38
	if (!ctx.cr0.eq) goto loc_823B7B38;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23424
	ctx.r9.s64 = ctx.r9.s64 + 23424;
	// stw r11,-30544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30544, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23240
	ctx.r3.s64 = ctx.r11.s64 + -23240;
	// bl 0x82a4c758
	ctx.lr = 0x823B7B38;
	sub_82A4C758(ctx, base);
loc_823B7B38:
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

__attribute__((alias("__imp__sub_823B7B50"))) PPC_WEAK_FUNC(sub_823B7B50);
PPC_FUNC_IMPL(__imp__sub_823B7B50) {
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
	// li r3,2080
	ctx.r3.s64 = 2080;
	// bl 0x82833108
	ctx.lr = 0x823B7B64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7b78
	if (ctx.cr0.eq) goto loc_823B7B78;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82548ec8
	ctx.lr = 0x823B7B74;
	sub_82548EC8(ctx, base);
	// b 0x823b7b7c
	goto loc_823B7B7C;
loc_823B7B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7B7C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7b90
	if (ctx.cr6.eq) goto loc_823B7B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7B90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7BA0"))) PPC_WEAK_FUNC(sub_823B7BA0);
PPC_FUNC_IMPL(__imp__sub_823B7BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2080
	ctx.r3.s64 = 2080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7BA8"))) PPC_WEAK_FUNC(sub_823B7BA8);
PPC_FUNC_IMPL(__imp__sub_823B7BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7be8
	if (!ctx.cr0.eq) goto loc_823B7BE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31428, ctx.r11.u32);
	// addi r3,r9,-10832
	ctx.r3.s64 = ctx.r9.s64 + -10832;
	// bl 0x82816528
	ctx.lr = 0x823B7BE0;
	sub_82816528(ctx, base);
	// stw r3,-31432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31432, ctx.r3.u32);
	// b 0x823b7bec
	goto loc_823B7BEC;
loc_823B7BE8:
	// lwz r3,-31432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31432);
loc_823B7BEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7C00"))) PPC_WEAK_FUNC(sub_823B7C00);
PPC_FUNC_IMPL(__imp__sub_823B7C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7c50
	ctx.lr = 0x823B7C20;
	sub_823B7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7C34;
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

__attribute__((alias("__imp__sub_823B7C50"))) PPC_WEAK_FUNC(sub_823B7C50);
PPC_FUNC_IMPL(__imp__sub_823B7C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30588
	ctx.r31.s64 = ctx.r11.s64 + -30588;
	// lwz r11,-30592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7c98
	if (!ctx.cr0.eq) goto loc_823B7C98;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23444
	ctx.r9.s64 = ctx.r9.s64 + 23444;
	// stw r11,-30592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30592, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23264
	ctx.r3.s64 = ctx.r11.s64 + -23264;
	// bl 0x82a4c758
	ctx.lr = 0x823B7C98;
	sub_82A4C758(ctx, base);
loc_823B7C98:
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

__attribute__((alias("__imp__sub_823B7CB0"))) PPC_WEAK_FUNC(sub_823B7CB0);
PPC_FUNC_IMPL(__imp__sub_823B7CB0) {
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
	ctx.lr = 0x823B7CC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7cd8
	if (ctx.cr0.eq) goto loc_823B7CD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dbb38
	ctx.lr = 0x823B7CD4;
	sub_823DBB38(ctx, base);
	// b 0x823b7cdc
	goto loc_823B7CDC;
loc_823B7CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7CDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7cf0
	if (ctx.cr6.eq) goto loc_823B7CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7D00"))) PPC_WEAK_FUNC(sub_823B7D00);
PPC_FUNC_IMPL(__imp__sub_823B7D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7d40
	if (!ctx.cr0.eq) goto loc_823B7D40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31436, ctx.r11.u32);
	// addi r3,r9,-10808
	ctx.r3.s64 = ctx.r9.s64 + -10808;
	// bl 0x82816528
	ctx.lr = 0x823B7D38;
	sub_82816528(ctx, base);
	// stw r3,-31440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31440, ctx.r3.u32);
	// b 0x823b7d44
	goto loc_823B7D44;
loc_823B7D40:
	// lwz r3,-31440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31440);
loc_823B7D44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7D58"))) PPC_WEAK_FUNC(sub_823B7D58);
PPC_FUNC_IMPL(__imp__sub_823B7D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7da8
	ctx.lr = 0x823B7D78;
	sub_823B7DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7D8C;
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

__attribute__((alias("__imp__sub_823B7DA8"))) PPC_WEAK_FUNC(sub_823B7DA8);
PPC_FUNC_IMPL(__imp__sub_823B7DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30580
	ctx.r31.s64 = ctx.r11.s64 + -30580;
	// lwz r11,-30584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7df0
	if (!ctx.cr0.eq) goto loc_823B7DF0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23692
	ctx.r9.s64 = ctx.r9.s64 + 23692;
	// stw r11,-30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30584, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23288
	ctx.r3.s64 = ctx.r11.s64 + -23288;
	// bl 0x82a4c758
	ctx.lr = 0x823B7DF0;
	sub_82A4C758(ctx, base);
loc_823B7DF0:
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

__attribute__((alias("__imp__sub_823B7E08"))) PPC_WEAK_FUNC(sub_823B7E08);
PPC_FUNC_IMPL(__imp__sub_823B7E08) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x823B7E1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7e30
	if (ctx.cr0.eq) goto loc_823B7E30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dbc60
	ctx.lr = 0x823B7E2C;
	sub_823DBC60(ctx, base);
	// b 0x823b7e34
	goto loc_823B7E34;
loc_823B7E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7E34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7e48
	if (ctx.cr6.eq) goto loc_823B7E48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7E48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7E58"))) PPC_WEAK_FUNC(sub_823B7E58);
PPC_FUNC_IMPL(__imp__sub_823B7E58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7e98
	if (!ctx.cr0.eq) goto loc_823B7E98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31444, ctx.r11.u32);
	// addi r3,r9,-10772
	ctx.r3.s64 = ctx.r9.s64 + -10772;
	// bl 0x82816528
	ctx.lr = 0x823B7E90;
	sub_82816528(ctx, base);
	// stw r3,-31448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31448, ctx.r3.u32);
	// b 0x823b7e9c
	goto loc_823B7E9C;
loc_823B7E98:
	// lwz r3,-31448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31448);
loc_823B7E9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7EB0"))) PPC_WEAK_FUNC(sub_823B7EB0);
PPC_FUNC_IMPL(__imp__sub_823B7EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7f00
	ctx.lr = 0x823B7ED0;
	sub_823B7F00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B7EE4;
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

__attribute__((alias("__imp__sub_823B7F00"))) PPC_WEAK_FUNC(sub_823B7F00);
PPC_FUNC_IMPL(__imp__sub_823B7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30572
	ctx.r31.s64 = ctx.r11.s64 + -30572;
	// lwz r11,-30576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7f48
	if (!ctx.cr0.eq) goto loc_823B7F48;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24104
	ctx.r9.s64 = ctx.r9.s64 + 24104;
	// stw r11,-30576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30576, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23312
	ctx.r3.s64 = ctx.r11.s64 + -23312;
	// bl 0x82a4c758
	ctx.lr = 0x823B7F48;
	sub_82A4C758(ctx, base);
loc_823B7F48:
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

__attribute__((alias("__imp__sub_823B7F60"))) PPC_WEAK_FUNC(sub_823B7F60);
PPC_FUNC_IMPL(__imp__sub_823B7F60) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82833108
	ctx.lr = 0x823B7F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b7f88
	if (ctx.cr0.eq) goto loc_823B7F88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dbda0
	ctx.lr = 0x823B7F84;
	sub_823DBDA0(ctx, base);
	// b 0x823b7f8c
	goto loc_823B7F8C;
loc_823B7F88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B7F8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b7fa0
	if (ctx.cr6.eq) goto loc_823B7FA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B7FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7FB0"))) PPC_WEAK_FUNC(sub_823B7FB0);
PPC_FUNC_IMPL(__imp__sub_823B7FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,172
	ctx.r3.s64 = 172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B7FB8"))) PPC_WEAK_FUNC(sub_823B7FB8);
PPC_FUNC_IMPL(__imp__sub_823B7FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b7ff8
	if (!ctx.cr0.eq) goto loc_823B7FF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31452, ctx.r11.u32);
	// addi r3,r9,-10736
	ctx.r3.s64 = ctx.r9.s64 + -10736;
	// bl 0x82816528
	ctx.lr = 0x823B7FF0;
	sub_82816528(ctx, base);
	// stw r3,-31456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31456, ctx.r3.u32);
	// b 0x823b7ffc
	goto loc_823B7FFC;
loc_823B7FF8:
	// lwz r3,-31456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31456);
loc_823B7FFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8010"))) PPC_WEAK_FUNC(sub_823B8010);
PPC_FUNC_IMPL(__imp__sub_823B8010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b8060
	ctx.lr = 0x823B8030;
	sub_823B8060(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B8044;
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

__attribute__((alias("__imp__sub_823B8060"))) PPC_WEAK_FUNC(sub_823B8060);
PPC_FUNC_IMPL(__imp__sub_823B8060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30564
	ctx.r31.s64 = ctx.r11.s64 + -30564;
	// lwz r11,-30568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b80a8
	if (!ctx.cr0.eq) goto loc_823B80A8;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24424
	ctx.r9.s64 = ctx.r9.s64 + 24424;
	// stw r11,-30568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30568, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23336
	ctx.r3.s64 = ctx.r11.s64 + -23336;
	// bl 0x82a4c758
	ctx.lr = 0x823B80A8;
	sub_82A4C758(ctx, base);
loc_823B80A8:
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

__attribute__((alias("__imp__sub_823B80C0"))) PPC_WEAK_FUNC(sub_823B80C0);
PPC_FUNC_IMPL(__imp__sub_823B80C0) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82833108
	ctx.lr = 0x823B80D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b80e8
	if (ctx.cr0.eq) goto loc_823B80E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dbf50
	ctx.lr = 0x823B80E4;
	sub_823DBF50(ctx, base);
	// b 0x823b80ec
	goto loc_823B80EC;
loc_823B80E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B80EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b8100
	if (ctx.cr6.eq) goto loc_823B8100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B8100:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8110"))) PPC_WEAK_FUNC(sub_823B8110);
PPC_FUNC_IMPL(__imp__sub_823B8110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b8150
	if (!ctx.cr0.eq) goto loc_823B8150;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31460, ctx.r11.u32);
	// addi r3,r9,-10692
	ctx.r3.s64 = ctx.r9.s64 + -10692;
	// bl 0x82816528
	ctx.lr = 0x823B8148;
	sub_82816528(ctx, base);
	// stw r3,-31464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31464, ctx.r3.u32);
	// b 0x823b8154
	goto loc_823B8154;
loc_823B8150:
	// lwz r3,-31464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31464);
loc_823B8154:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8168"))) PPC_WEAK_FUNC(sub_823B8168);
PPC_FUNC_IMPL(__imp__sub_823B8168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b81b8
	ctx.lr = 0x823B8188;
	sub_823B81B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B819C;
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

__attribute__((alias("__imp__sub_823B81B8"))) PPC_WEAK_FUNC(sub_823B81B8);
PPC_FUNC_IMPL(__imp__sub_823B81B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30556
	ctx.r31.s64 = ctx.r11.s64 + -30556;
	// lwz r11,-30560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b8200
	if (!ctx.cr0.eq) goto loc_823B8200;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24960
	ctx.r9.s64 = ctx.r9.s64 + 24960;
	// stw r11,-30560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30560, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23360
	ctx.r3.s64 = ctx.r11.s64 + -23360;
	// bl 0x82a4c758
	ctx.lr = 0x823B8200;
	sub_82A4C758(ctx, base);
loc_823B8200:
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

__attribute__((alias("__imp__sub_823B8218"))) PPC_WEAK_FUNC(sub_823B8218);
PPC_FUNC_IMPL(__imp__sub_823B8218) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x823B822C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b8240
	if (ctx.cr0.eq) goto loc_823B8240;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dc0d8
	ctx.lr = 0x823B823C;
	sub_823DC0D8(ctx, base);
	// b 0x823b8244
	goto loc_823B8244;
loc_823B8240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B8244:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b8258
	if (ctx.cr6.eq) goto loc_823B8258;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B8258:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B8268"))) PPC_WEAK_FUNC(sub_823B8268);
PPC_FUNC_IMPL(__imp__sub_823B8268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b82a8
	if (!ctx.cr0.eq) goto loc_823B82A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31468, ctx.r11.u32);
	// addi r3,r9,-10652
	ctx.r3.s64 = ctx.r9.s64 + -10652;
	// bl 0x82816528
	ctx.lr = 0x823B82A0;
	sub_82816528(ctx, base);
	// stw r3,-31472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31472, ctx.r3.u32);
	// b 0x823b82ac
	goto loc_823B82AC;
loc_823B82A8:
	// lwz r3,-31472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31472);
loc_823B82AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B82C0"))) PPC_WEAK_FUNC(sub_823B82C0);
PPC_FUNC_IMPL(__imp__sub_823B82C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b8310
	ctx.lr = 0x823B82E0;
	sub_823B8310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B82F4;
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

__attribute__((alias("__imp__sub_823B8310"))) PPC_WEAK_FUNC(sub_823B8310);
PPC_FUNC_IMPL(__imp__sub_823B8310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30548
	ctx.r31.s64 = ctx.r11.s64 + -30548;
	// lwz r11,-30552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b8358
	if (!ctx.cr0.eq) goto loc_823B8358;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25412
	ctx.r9.s64 = ctx.r9.s64 + 25412;
	// stw r11,-30552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30552, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-23384
	ctx.r3.s64 = ctx.r11.s64 + -23384;
	// bl 0x82a4c758
	ctx.lr = 0x823B8358;
	sub_82A4C758(ctx, base);
loc_823B8358:
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

__attribute__((alias("__imp__sub_823B8370"))) PPC_WEAK_FUNC(sub_823B8370);
PPC_FUNC_IMPL(__imp__sub_823B8370) {
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
	ctx.lr = 0x823B8384;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b8394
	if (ctx.cr0.eq) goto loc_823B8394;
	// bl 0x82673780
	ctx.lr = 0x823B8390;
	sub_82673780(ctx, base);
	// b 0x823b8398
	goto loc_823B8398;
loc_823B8394:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B8398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B83A8"))) PPC_WEAK_FUNC(sub_823B83A8);
PPC_FUNC_IMPL(__imp__sub_823B83A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-31476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b83e8
	if (!ctx.cr0.eq) goto loc_823B83E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-31476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31476, ctx.r11.u32);
	// addi r3,r9,-10616
	ctx.r3.s64 = ctx.r9.s64 + -10616;
	// bl 0x82816528
	ctx.lr = 0x823B83E0;
	sub_82816528(ctx, base);
	// stw r3,-31480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31480, ctx.r3.u32);
	// b 0x823b83ec
	goto loc_823B83EC;
loc_823B83E8:
	// lwz r3,-31480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -31480);
loc_823B83EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

