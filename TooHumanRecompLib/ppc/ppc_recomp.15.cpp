#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A7B00"))) PPC_WEAK_FUNC(sub_823A7B00);
PPC_FUNC_IMPL(__imp__sub_823A7B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28836
	ctx.r31.s64 = ctx.r11.s64 + -28836;
	// lwz r11,-28840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7b48
	if (!ctx.cr0.eq) goto loc_823A7B48;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9792
	ctx.r9.s64 = ctx.r9.s64 + 9792;
	// stw r11,-28840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-18944
	ctx.r3.s64 = ctx.r11.s64 + -18944;
	// bl 0x82a4c758
	ctx.lr = 0x823A7B48;
	sub_82A4C758(ctx, base);
loc_823A7B48:
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

__attribute__((alias("__imp__sub_823A7B60"))) PPC_WEAK_FUNC(sub_823A7B60);
PPC_FUNC_IMPL(__imp__sub_823A7B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A7B78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a7bc4
	if (ctx.cr0.eq) goto loc_823A7BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A7B88;
	sub_8252BDD8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// addi r10,r10,7908
	ctx.r10.s64 = ctx.r10.s64 + 7908;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
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
	// b 0x823a7bc8
	goto loc_823A7BC8;
loc_823A7BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A7BC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7BE0"))) PPC_WEAK_FUNC(sub_823A7BE0);
PPC_FUNC_IMPL(__imp__sub_823A7BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-29996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7c20
	if (!ctx.cr0.eq) goto loc_823A7C20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-29996(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29996, ctx.r11.u32);
	// addi r3,r9,-19640
	ctx.r3.s64 = ctx.r9.s64 + -19640;
	// bl 0x82816528
	ctx.lr = 0x823A7C18;
	sub_82816528(ctx, base);
	// stw r3,-30000(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30000, ctx.r3.u32);
	// b 0x823a7c24
	goto loc_823A7C24;
loc_823A7C20:
	// lwz r3,-30000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30000);
loc_823A7C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7C38"))) PPC_WEAK_FUNC(sub_823A7C38);
PPC_FUNC_IMPL(__imp__sub_823A7C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a7c88
	ctx.lr = 0x823A7C58;
	sub_823A7C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7C6C;
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

__attribute__((alias("__imp__sub_823A7C88"))) PPC_WEAK_FUNC(sub_823A7C88);
PPC_FUNC_IMPL(__imp__sub_823A7C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28828
	ctx.r31.s64 = ctx.r11.s64 + -28828;
	// lwz r11,-28832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7cd0
	if (!ctx.cr0.eq) goto loc_823A7CD0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9812
	ctx.r9.s64 = ctx.r9.s64 + 9812;
	// stw r11,-28832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-18968
	ctx.r3.s64 = ctx.r11.s64 + -18968;
	// bl 0x82a4c758
	ctx.lr = 0x823A7CD0;
	sub_82A4C758(ctx, base);
loc_823A7CD0:
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

__attribute__((alias("__imp__sub_823A7CE8"))) PPC_WEAK_FUNC(sub_823A7CE8);
PPC_FUNC_IMPL(__imp__sub_823A7CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A7D00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a7d44
	if (ctx.cr0.eq) goto loc_823A7D44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A7D10;
	sub_8252BDD8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,9832
	ctx.r11.s64 = ctx.r11.s64 + 9832;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,12276
	ctx.r10.s64 = ctx.r10.s64 + 12276;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
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
	// b 0x823a7d48
	goto loc_823A7D48;
loc_823A7D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A7D48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7D60"))) PPC_WEAK_FUNC(sub_823A7D60);
PPC_FUNC_IMPL(__imp__sub_823A7D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7da0
	if (!ctx.cr0.eq) goto loc_823A7DA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30004(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30004, ctx.r11.u32);
	// addi r3,r9,-19604
	ctx.r3.s64 = ctx.r9.s64 + -19604;
	// bl 0x82816528
	ctx.lr = 0x823A7D98;
	sub_82816528(ctx, base);
	// stw r3,-30008(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30008, ctx.r3.u32);
	// b 0x823a7da4
	goto loc_823A7DA4;
loc_823A7DA0:
	// lwz r3,-30008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30008);
loc_823A7DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7DB8"))) PPC_WEAK_FUNC(sub_823A7DB8);
PPC_FUNC_IMPL(__imp__sub_823A7DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a7e08
	ctx.lr = 0x823A7DD8;
	sub_823A7E08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7DEC;
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

__attribute__((alias("__imp__sub_823A7E08"))) PPC_WEAK_FUNC(sub_823A7E08);
PPC_FUNC_IMPL(__imp__sub_823A7E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28820
	ctx.r31.s64 = ctx.r11.s64 + -28820;
	// lwz r11,-28824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7e50
	if (!ctx.cr0.eq) goto loc_823A7E50;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12328
	ctx.r9.s64 = ctx.r9.s64 + 12328;
	// stw r11,-28824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-18992
	ctx.r3.s64 = ctx.r11.s64 + -18992;
	// bl 0x82a4c758
	ctx.lr = 0x823A7E50;
	sub_82A4C758(ctx, base);
loc_823A7E50:
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

__attribute__((alias("__imp__sub_823A7E68"))) PPC_WEAK_FUNC(sub_823A7E68);
PPC_FUNC_IMPL(__imp__sub_823A7E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A7E80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a7ec4
	if (ctx.cr0.eq) goto loc_823A7EC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A7E90;
	sub_8252BDD8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,12352
	ctx.r11.s64 = ctx.r11.s64 + 12352;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,14796
	ctx.r10.s64 = ctx.r10.s64 + 14796;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
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
	// b 0x823a7ec8
	goto loc_823A7EC8;
loc_823A7EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A7EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7EE0"))) PPC_WEAK_FUNC(sub_823A7EE0);
PPC_FUNC_IMPL(__imp__sub_823A7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30012);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7f20
	if (!ctx.cr0.eq) goto loc_823A7F20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30012, ctx.r11.u32);
	// addi r3,r9,-19488
	ctx.r3.s64 = ctx.r9.s64 + -19488;
	// bl 0x82816528
	ctx.lr = 0x823A7F18;
	sub_82816528(ctx, base);
	// stw r3,-30016(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30016, ctx.r3.u32);
	// b 0x823a7f24
	goto loc_823A7F24;
loc_823A7F20:
	// lwz r3,-30016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30016);
loc_823A7F24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A7F38"))) PPC_WEAK_FUNC(sub_823A7F38);
PPC_FUNC_IMPL(__imp__sub_823A7F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a7f88
	ctx.lr = 0x823A7F58;
	sub_823A7F88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A7F6C;
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

__attribute__((alias("__imp__sub_823A7F88"))) PPC_WEAK_FUNC(sub_823A7F88);
PPC_FUNC_IMPL(__imp__sub_823A7F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28812
	ctx.r31.s64 = ctx.r11.s64 + -28812;
	// lwz r11,-28816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a7fd0
	if (!ctx.cr0.eq) goto loc_823A7FD0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14848
	ctx.r9.s64 = ctx.r9.s64 + 14848;
	// stw r11,-28816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// bl 0x82a4c758
	ctx.lr = 0x823A7FD0;
	sub_82A4C758(ctx, base);
loc_823A7FD0:
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

__attribute__((alias("__imp__sub_823A7FE8"))) PPC_WEAK_FUNC(sub_823A7FE8);
PPC_FUNC_IMPL(__imp__sub_823A7FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A8000;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8044
	if (ctx.cr0.eq) goto loc_823A8044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A8010;
	sub_8252BDD8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,14872
	ctx.r11.s64 = ctx.r11.s64 + 14872;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,17316
	ctx.r10.s64 = ctx.r10.s64 + 17316;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
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
	// b 0x823a8048
	goto loc_823A8048;
loc_823A8044:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8048:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8060"))) PPC_WEAK_FUNC(sub_823A8060);
PPC_FUNC_IMPL(__imp__sub_823A8060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a80a0
	if (!ctx.cr0.eq) goto loc_823A80A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30020, ctx.r11.u32);
	// addi r3,r9,-19376
	ctx.r3.s64 = ctx.r9.s64 + -19376;
	// bl 0x82816528
	ctx.lr = 0x823A8098;
	sub_82816528(ctx, base);
	// stw r3,-30024(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30024, ctx.r3.u32);
	// b 0x823a80a4
	goto loc_823A80A4;
loc_823A80A0:
	// lwz r3,-30024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30024);
loc_823A80A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A80B8"))) PPC_WEAK_FUNC(sub_823A80B8);
PPC_FUNC_IMPL(__imp__sub_823A80B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8108
	ctx.lr = 0x823A80D8;
	sub_823A8108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A80EC;
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

__attribute__((alias("__imp__sub_823A8108"))) PPC_WEAK_FUNC(sub_823A8108);
PPC_FUNC_IMPL(__imp__sub_823A8108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28804
	ctx.r31.s64 = ctx.r11.s64 + -28804;
	// lwz r11,-28808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8150
	if (!ctx.cr0.eq) goto loc_823A8150;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17368
	ctx.r9.s64 = ctx.r9.s64 + 17368;
	// stw r11,-28808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// bl 0x82a4c758
	ctx.lr = 0x823A8150;
	sub_82A4C758(ctx, base);
loc_823A8150:
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

__attribute__((alias("__imp__sub_823A8168"))) PPC_WEAK_FUNC(sub_823A8168);
PPC_FUNC_IMPL(__imp__sub_823A8168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A8180;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a81bc
	if (ctx.cr0.eq) goto loc_823A81BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A8190;
	sub_8252BDD8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r11,r11,17392
	ctx.r11.s64 = ctx.r11.s64 + 17392;
	// addi r10,r10,19836
	ctx.r10.s64 = ctx.r10.s64 + 19836;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823a81c0
	goto loc_823A81C0;
loc_823A81BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A81C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A81D8"))) PPC_WEAK_FUNC(sub_823A81D8);
PPC_FUNC_IMPL(__imp__sub_823A81D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8218
	if (!ctx.cr0.eq) goto loc_823A8218;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30028(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30028, ctx.r11.u32);
	// addi r3,r9,-19264
	ctx.r3.s64 = ctx.r9.s64 + -19264;
	// bl 0x82816528
	ctx.lr = 0x823A8210;
	sub_82816528(ctx, base);
	// stw r3,-30032(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30032, ctx.r3.u32);
	// b 0x823a821c
	goto loc_823A821C;
loc_823A8218:
	// lwz r3,-30032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30032);
loc_823A821C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8230"))) PPC_WEAK_FUNC(sub_823A8230);
PPC_FUNC_IMPL(__imp__sub_823A8230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8280
	ctx.lr = 0x823A8250;
	sub_823A8280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8264;
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

__attribute__((alias("__imp__sub_823A8280"))) PPC_WEAK_FUNC(sub_823A8280);
PPC_FUNC_IMPL(__imp__sub_823A8280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28796
	ctx.r31.s64 = ctx.r11.s64 + -28796;
	// lwz r11,-28800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a82c8
	if (!ctx.cr0.eq) goto loc_823A82C8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,19888
	ctx.r9.s64 = ctx.r9.s64 + 19888;
	// stw r11,-28800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19064
	ctx.r3.s64 = ctx.r11.s64 + -19064;
	// bl 0x82a4c758
	ctx.lr = 0x823A82C8;
	sub_82A4C758(ctx, base);
loc_823A82C8:
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

__attribute__((alias("__imp__sub_823A82E0"))) PPC_WEAK_FUNC(sub_823A82E0);
PPC_FUNC_IMPL(__imp__sub_823A82E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6816
	ctx.r3.s64 = 6816;
	// bl 0x82833108
	ctx.lr = 0x823A82F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8334
	if (ctx.cr0.eq) goto loc_823A8334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252bdd8
	ctx.lr = 0x823A8308;
	sub_8252BDD8(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// addi r11,r11,19912
	ctx.r11.s64 = ctx.r11.s64 + 19912;
	// addi r10,r10,22356
	ctx.r10.s64 = ctx.r10.s64 + 22356;
	// addi r9,r9,9768
	ctx.r9.s64 = ctx.r9.s64 + 9768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823a8338
	goto loc_823A8338;
loc_823A8334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8350"))) PPC_WEAK_FUNC(sub_823A8350);
PPC_FUNC_IMPL(__imp__sub_823A8350) {
	PPC_FUNC_PROLOGUE();
	// li r3,6816
	ctx.r3.s64 = 6816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8358"))) PPC_WEAK_FUNC(sub_823A8358);
PPC_FUNC_IMPL(__imp__sub_823A8358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8398
	if (!ctx.cr0.eq) goto loc_823A8398;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30036(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30036, ctx.r11.u32);
	// addi r3,r9,-19228
	ctx.r3.s64 = ctx.r9.s64 + -19228;
	// bl 0x82816528
	ctx.lr = 0x823A8390;
	sub_82816528(ctx, base);
	// stw r3,-30040(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30040, ctx.r3.u32);
	// b 0x823a839c
	goto loc_823A839C;
loc_823A8398:
	// lwz r3,-30040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30040);
loc_823A839C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A83B0"))) PPC_WEAK_FUNC(sub_823A83B0);
PPC_FUNC_IMPL(__imp__sub_823A83B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8400
	ctx.lr = 0x823A83D0;
	sub_823A8400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A83E4;
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

__attribute__((alias("__imp__sub_823A8400"))) PPC_WEAK_FUNC(sub_823A8400);
PPC_FUNC_IMPL(__imp__sub_823A8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28788
	ctx.r31.s64 = ctx.r11.s64 + -28788;
	// lwz r11,-28792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8448
	if (!ctx.cr0.eq) goto loc_823A8448;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22408
	ctx.r9.s64 = ctx.r9.s64 + 22408;
	// stw r11,-28792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19088
	ctx.r3.s64 = ctx.r11.s64 + -19088;
	// bl 0x82a4c758
	ctx.lr = 0x823A8448;
	sub_82A4C758(ctx, base);
loc_823A8448:
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

__attribute__((alias("__imp__sub_823A8460"))) PPC_WEAK_FUNC(sub_823A8460);
PPC_FUNC_IMPL(__imp__sub_823A8460) {
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
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x823A8474;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823a8484
	if (ctx.cr0.eq) goto loc_823A8484;
	// bl 0x825b5c60
	ctx.lr = 0x823A8480;
	sub_825B5C60(ctx, base);
	// b 0x823a8488
	goto loc_823A8488;
loc_823A8484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8488:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8498"))) PPC_WEAK_FUNC(sub_823A8498);
PPC_FUNC_IMPL(__imp__sub_823A8498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a84d8
	if (!ctx.cr0.eq) goto loc_823A84D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30044(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30044, ctx.r11.u32);
	// addi r3,r9,-19192
	ctx.r3.s64 = ctx.r9.s64 + -19192;
	// bl 0x82816528
	ctx.lr = 0x823A84D0;
	sub_82816528(ctx, base);
	// stw r3,-30048(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30048, ctx.r3.u32);
	// b 0x823a84dc
	goto loc_823A84DC;
loc_823A84D8:
	// lwz r3,-30048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30048);
loc_823A84DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A84F0"))) PPC_WEAK_FUNC(sub_823A84F0);
PPC_FUNC_IMPL(__imp__sub_823A84F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8540
	ctx.lr = 0x823A8510;
	sub_823A8540(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8524;
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

__attribute__((alias("__imp__sub_823A8540"))) PPC_WEAK_FUNC(sub_823A8540);
PPC_FUNC_IMPL(__imp__sub_823A8540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27028
	ctx.r31.s64 = ctx.r11.s64 + -27028;
	// lwz r11,-27032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8588
	if (!ctx.cr0.eq) goto loc_823A8588;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22428
	ctx.r9.s64 = ctx.r9.s64 + 22428;
	// stw r11,-27032(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27032, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// bl 0x82a4c758
	ctx.lr = 0x823A8588;
	sub_82A4C758(ctx, base);
loc_823A8588:
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

__attribute__((alias("__imp__sub_823A85A0"))) PPC_WEAK_FUNC(sub_823A85A0);
PPC_FUNC_IMPL(__imp__sub_823A85A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x823A85B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8624
	if (ctx.cr0.eq) goto loc_823A8624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b5c60
	ctx.lr = 0x823A85C8;
	sub_825B5C60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,26696
	ctx.r11.s64 = ctx.r11.s64 + 26696;
	// addi r10,r10,29056
	ctx.r10.s64 = ctx.r10.s64 + 29056;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A85F8;
	sub_82816528(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r10,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r9.u32);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// b 0x823a8628
	goto loc_823A8628;
loc_823A8624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8640"))) PPC_WEAK_FUNC(sub_823A8640);
PPC_FUNC_IMPL(__imp__sub_823A8640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30052);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8680
	if (!ctx.cr0.eq) goto loc_823A8680;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30052, ctx.r11.u32);
	// addi r3,r9,-19172
	ctx.r3.s64 = ctx.r9.s64 + -19172;
	// bl 0x82816528
	ctx.lr = 0x823A8678;
	sub_82816528(ctx, base);
	// stw r3,-30056(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30056, ctx.r3.u32);
	// b 0x823a8684
	goto loc_823A8684;
loc_823A8680:
	// lwz r3,-30056(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30056);
loc_823A8684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8698"))) PPC_WEAK_FUNC(sub_823A8698);
PPC_FUNC_IMPL(__imp__sub_823A8698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a86e8
	ctx.lr = 0x823A86B8;
	sub_823A86E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A86CC;
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

__attribute__((alias("__imp__sub_823A86E8"))) PPC_WEAK_FUNC(sub_823A86E8);
PPC_FUNC_IMPL(__imp__sub_823A86E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27020
	ctx.r31.s64 = ctx.r11.s64 + -27020;
	// lwz r11,-27024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8730
	if (!ctx.cr0.eq) goto loc_823A8730;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22448
	ctx.r9.s64 = ctx.r9.s64 + 22448;
	// stw r11,-27024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27024, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19136
	ctx.r3.s64 = ctx.r11.s64 + -19136;
	// bl 0x82a4c758
	ctx.lr = 0x823A8730;
	sub_82A4C758(ctx, base);
loc_823A8730:
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

__attribute__((alias("__imp__sub_823A8748"))) PPC_WEAK_FUNC(sub_823A8748);
PPC_FUNC_IMPL(__imp__sub_823A8748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6128
	ctx.r3.s64 = 6128;
	// bl 0x82833108
	ctx.lr = 0x823A8760;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a87cc
	if (ctx.cr0.eq) goto loc_823A87CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b5c60
	ctx.lr = 0x823A8770;
	sub_825B5C60(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,17968
	ctx.r11.s64 = ctx.r11.s64 + 17968;
	// addi r10,r10,20328
	ctx.r10.s64 = ctx.r10.s64 + 20328;
	// addi r9,r9,-6552
	ctx.r9.s64 = ctx.r9.s64 + -6552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A87A0;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// stw r10,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r9.u32);
	// stw r11,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// b 0x823a87d0
	goto loc_823A87D0;
loc_823A87CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A87D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A87E8"))) PPC_WEAK_FUNC(sub_823A87E8);
PPC_FUNC_IMPL(__imp__sub_823A87E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8828
	if (!ctx.cr0.eq) goto loc_823A8828;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30060, ctx.r11.u32);
	// addi r3,r9,-19140
	ctx.r3.s64 = ctx.r9.s64 + -19140;
	// bl 0x82816528
	ctx.lr = 0x823A8820;
	sub_82816528(ctx, base);
	// stw r3,-30064(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30064, ctx.r3.u32);
	// b 0x823a882c
	goto loc_823A882C;
loc_823A8828:
	// lwz r3,-30064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30064);
loc_823A882C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8840"))) PPC_WEAK_FUNC(sub_823A8840);
PPC_FUNC_IMPL(__imp__sub_823A8840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8890
	ctx.lr = 0x823A8860;
	sub_823A8890(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8874;
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

__attribute__((alias("__imp__sub_823A8890"))) PPC_WEAK_FUNC(sub_823A8890);
PPC_FUNC_IMPL(__imp__sub_823A8890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27012
	ctx.r31.s64 = ctx.r11.s64 + -27012;
	// lwz r11,-27016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a88d8
	if (!ctx.cr0.eq) goto loc_823A88D8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22468
	ctx.r9.s64 = ctx.r9.s64 + 22468;
	// stw r11,-27016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27016, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19160
	ctx.r3.s64 = ctx.r11.s64 + -19160;
	// bl 0x82a4c758
	ctx.lr = 0x823A88D8;
	sub_82A4C758(ctx, base);
loc_823A88D8:
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

__attribute__((alias("__imp__sub_823A88F0"))) PPC_WEAK_FUNC(sub_823A88F0);
PPC_FUNC_IMPL(__imp__sub_823A88F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A8908;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8978
	if (ctx.cr0.eq) goto loc_823A8978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A8918;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,3008
	ctx.r11.s64 = ctx.r11.s64 + 3008;
	// addi r10,r10,5368
	ctx.r10.s64 = ctx.r10.s64 + 5368;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A8948;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,-1900
	ctx.r3.s64 = ctx.r9.s64 + -1900;
	// bl 0x82816528
	ctx.lr = 0x823A896C;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a897c
	goto loc_823A897C;
loc_823A8978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A897C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8990"))) PPC_WEAK_FUNC(sub_823A8990);
PPC_FUNC_IMPL(__imp__sub_823A8990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30068);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a89d0
	if (!ctx.cr0.eq) goto loc_823A89D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30068, ctx.r11.u32);
	// addi r3,r9,-19108
	ctx.r3.s64 = ctx.r9.s64 + -19108;
	// bl 0x82816528
	ctx.lr = 0x823A89C8;
	sub_82816528(ctx, base);
	// stw r3,-30072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30072, ctx.r3.u32);
	// b 0x823a89d4
	goto loc_823A89D4;
loc_823A89D0:
	// lwz r3,-30072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30072);
loc_823A89D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A89E8"))) PPC_WEAK_FUNC(sub_823A89E8);
PPC_FUNC_IMPL(__imp__sub_823A89E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8a38
	ctx.lr = 0x823A8A08;
	sub_823A8A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8A1C;
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

__attribute__((alias("__imp__sub_823A8A38"))) PPC_WEAK_FUNC(sub_823A8A38);
PPC_FUNC_IMPL(__imp__sub_823A8A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-27004
	ctx.r31.s64 = ctx.r11.s64 + -27004;
	// lwz r11,-27008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27008);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8a80
	if (!ctx.cr0.eq) goto loc_823A8A80;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22488
	ctx.r9.s64 = ctx.r9.s64 + 22488;
	// stw r11,-27008(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27008, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19184
	ctx.r3.s64 = ctx.r11.s64 + -19184;
	// bl 0x82a4c758
	ctx.lr = 0x823A8A80;
	sub_82A4C758(ctx, base);
loc_823A8A80:
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

__attribute__((alias("__imp__sub_823A8A98"))) PPC_WEAK_FUNC(sub_823A8A98);
PPC_FUNC_IMPL(__imp__sub_823A8A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A8AB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8b20
	if (ctx.cr0.eq) goto loc_823A8B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A8AC0;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,8008
	ctx.r11.s64 = ctx.r11.s64 + 8008;
	// addi r10,r10,10368
	ctx.r10.s64 = ctx.r10.s64 + 10368;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A8AF0;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,7924
	ctx.r3.s64 = ctx.r9.s64 + 7924;
	// bl 0x82816528
	ctx.lr = 0x823A8B14;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a8b24
	goto loc_823A8B24;
loc_823A8B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8B24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8B38"))) PPC_WEAK_FUNC(sub_823A8B38);
PPC_FUNC_IMPL(__imp__sub_823A8B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30076(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8b78
	if (!ctx.cr0.eq) goto loc_823A8B78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30076(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30076, ctx.r11.u32);
	// addi r3,r9,-19084
	ctx.r3.s64 = ctx.r9.s64 + -19084;
	// bl 0x82816528
	ctx.lr = 0x823A8B70;
	sub_82816528(ctx, base);
	// stw r3,-30080(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30080, ctx.r3.u32);
	// b 0x823a8b7c
	goto loc_823A8B7C;
loc_823A8B78:
	// lwz r3,-30080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30080);
loc_823A8B7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8B90"))) PPC_WEAK_FUNC(sub_823A8B90);
PPC_FUNC_IMPL(__imp__sub_823A8B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8be0
	ctx.lr = 0x823A8BB0;
	sub_823A8BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8BC4;
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

__attribute__((alias("__imp__sub_823A8BE0"))) PPC_WEAK_FUNC(sub_823A8BE0);
PPC_FUNC_IMPL(__imp__sub_823A8BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26996
	ctx.r31.s64 = ctx.r11.s64 + -26996;
	// lwz r11,-27000(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27000);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8c28
	if (!ctx.cr0.eq) goto loc_823A8C28;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22508
	ctx.r9.s64 = ctx.r9.s64 + 22508;
	// stw r11,-27000(r10)
	PPC_STORE_U32(ctx.r10.u32 + -27000, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19208
	ctx.r3.s64 = ctx.r11.s64 + -19208;
	// bl 0x82a4c758
	ctx.lr = 0x823A8C28;
	sub_82A4C758(ctx, base);
loc_823A8C28:
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

__attribute__((alias("__imp__sub_823A8C40"))) PPC_WEAK_FUNC(sub_823A8C40);
PPC_FUNC_IMPL(__imp__sub_823A8C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A8C58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8cc8
	if (ctx.cr0.eq) goto loc_823A8CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A8C68;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// addi r10,r10,7872
	ctx.r10.s64 = ctx.r10.s64 + 7872;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A8C98;
	sub_82816528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,5420
	ctx.r3.s64 = ctx.r9.s64 + 5420;
	// bl 0x82816528
	ctx.lr = 0x823A8CBC;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a8ccc
	goto loc_823A8CCC;
loc_823A8CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8CCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8CE0"))) PPC_WEAK_FUNC(sub_823A8CE0);
PPC_FUNC_IMPL(__imp__sub_823A8CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8d20
	if (!ctx.cr0.eq) goto loc_823A8D20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30084(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30084, ctx.r11.u32);
	// addi r3,r9,-19060
	ctx.r3.s64 = ctx.r9.s64 + -19060;
	// bl 0x82816528
	ctx.lr = 0x823A8D18;
	sub_82816528(ctx, base);
	// stw r3,-30088(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30088, ctx.r3.u32);
	// b 0x823a8d24
	goto loc_823A8D24;
loc_823A8D20:
	// lwz r3,-30088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30088);
loc_823A8D24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8D38"))) PPC_WEAK_FUNC(sub_823A8D38);
PPC_FUNC_IMPL(__imp__sub_823A8D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8d88
	ctx.lr = 0x823A8D58;
	sub_823A8D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8D6C;
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

__attribute__((alias("__imp__sub_823A8D88"))) PPC_WEAK_FUNC(sub_823A8D88);
PPC_FUNC_IMPL(__imp__sub_823A8D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26988
	ctx.r31.s64 = ctx.r11.s64 + -26988;
	// lwz r11,-26992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26992);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8dd0
	if (!ctx.cr0.eq) goto loc_823A8DD0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22528
	ctx.r9.s64 = ctx.r9.s64 + 22528;
	// stw r11,-26992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26992, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19232
	ctx.r3.s64 = ctx.r11.s64 + -19232;
	// bl 0x82a4c758
	ctx.lr = 0x823A8DD0;
	sub_82A4C758(ctx, base);
loc_823A8DD0:
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

__attribute__((alias("__imp__sub_823A8DE8"))) PPC_WEAK_FUNC(sub_823A8DE8);
PPC_FUNC_IMPL(__imp__sub_823A8DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A8E00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a8e70
	if (ctx.cr0.eq) goto loc_823A8E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A8E10;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,10464
	ctx.r11.s64 = ctx.r11.s64 + 10464;
	// addi r10,r10,12824
	ctx.r10.s64 = ctx.r10.s64 + 12824;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A8E40;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,10420
	ctx.r3.s64 = ctx.r9.s64 + 10420;
	// bl 0x82816528
	ctx.lr = 0x823A8E64;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a8e74
	goto loc_823A8E74;
loc_823A8E70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A8E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8E88"))) PPC_WEAK_FUNC(sub_823A8E88);
PPC_FUNC_IMPL(__imp__sub_823A8E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8ec8
	if (!ctx.cr0.eq) goto loc_823A8EC8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30092(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30092, ctx.r11.u32);
	// addi r3,r9,-19036
	ctx.r3.s64 = ctx.r9.s64 + -19036;
	// bl 0x82816528
	ctx.lr = 0x823A8EC0;
	sub_82816528(ctx, base);
	// stw r3,-30096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30096, ctx.r3.u32);
	// b 0x823a8ecc
	goto loc_823A8ECC;
loc_823A8EC8:
	// lwz r3,-30096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30096);
loc_823A8ECC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A8EE0"))) PPC_WEAK_FUNC(sub_823A8EE0);
PPC_FUNC_IMPL(__imp__sub_823A8EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a8f30
	ctx.lr = 0x823A8F00;
	sub_823A8F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A8F14;
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

__attribute__((alias("__imp__sub_823A8F30"))) PPC_WEAK_FUNC(sub_823A8F30);
PPC_FUNC_IMPL(__imp__sub_823A8F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26980
	ctx.r31.s64 = ctx.r11.s64 + -26980;
	// lwz r11,-26984(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26984);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a8f78
	if (!ctx.cr0.eq) goto loc_823A8F78;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22548
	ctx.r9.s64 = ctx.r9.s64 + 22548;
	// stw r11,-26984(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26984, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19256
	ctx.r3.s64 = ctx.r11.s64 + -19256;
	// bl 0x82a4c758
	ctx.lr = 0x823A8F78;
	sub_82A4C758(ctx, base);
loc_823A8F78:
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

__attribute__((alias("__imp__sub_823A8F90"))) PPC_WEAK_FUNC(sub_823A8F90);
PPC_FUNC_IMPL(__imp__sub_823A8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A8FA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9018
	if (ctx.cr0.eq) goto loc_823A9018;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A8FB8;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,12912
	ctx.r11.s64 = ctx.r11.s64 + 12912;
	// addi r10,r10,15272
	ctx.r10.s64 = ctx.r10.s64 + 15272;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A8FE8;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,12876
	ctx.r3.s64 = ctx.r9.s64 + 12876;
	// bl 0x82816528
	ctx.lr = 0x823A900C;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a901c
	goto loc_823A901C;
loc_823A9018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A901C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9030"))) PPC_WEAK_FUNC(sub_823A9030);
PPC_FUNC_IMPL(__imp__sub_823A9030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9070
	if (!ctx.cr0.eq) goto loc_823A9070;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30100, ctx.r11.u32);
	// addi r3,r9,-19008
	ctx.r3.s64 = ctx.r9.s64 + -19008;
	// bl 0x82816528
	ctx.lr = 0x823A9068;
	sub_82816528(ctx, base);
	// stw r3,-30104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30104, ctx.r3.u32);
	// b 0x823a9074
	goto loc_823A9074;
loc_823A9070:
	// lwz r3,-30104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30104);
loc_823A9074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9088"))) PPC_WEAK_FUNC(sub_823A9088);
PPC_FUNC_IMPL(__imp__sub_823A9088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a90d8
	ctx.lr = 0x823A90A8;
	sub_823A90D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A90BC;
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

__attribute__((alias("__imp__sub_823A90D8"))) PPC_WEAK_FUNC(sub_823A90D8);
PPC_FUNC_IMPL(__imp__sub_823A90D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26972
	ctx.r31.s64 = ctx.r11.s64 + -26972;
	// lwz r11,-26976(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26976);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9120
	if (!ctx.cr0.eq) goto loc_823A9120;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22568
	ctx.r9.s64 = ctx.r9.s64 + 22568;
	// stw r11,-26976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26976, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19280
	ctx.r3.s64 = ctx.r11.s64 + -19280;
	// bl 0x82a4c758
	ctx.lr = 0x823A9120;
	sub_82A4C758(ctx, base);
loc_823A9120:
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

__attribute__((alias("__imp__sub_823A9138"))) PPC_WEAK_FUNC(sub_823A9138);
PPC_FUNC_IMPL(__imp__sub_823A9138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A9150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a91c0
	if (ctx.cr0.eq) goto loc_823A91C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A9160;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,15400
	ctx.r11.s64 = ctx.r11.s64 + 15400;
	// addi r10,r10,17760
	ctx.r10.s64 = ctx.r10.s64 + 17760;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A9190;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,15324
	ctx.r3.s64 = ctx.r9.s64 + 15324;
	// bl 0x82816528
	ctx.lr = 0x823A91B4;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a91c4
	goto loc_823A91C4;
loc_823A91C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A91C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A91D8"))) PPC_WEAK_FUNC(sub_823A91D8);
PPC_FUNC_IMPL(__imp__sub_823A91D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9218
	if (!ctx.cr0.eq) goto loc_823A9218;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30108(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30108, ctx.r11.u32);
	// addi r3,r9,-18980
	ctx.r3.s64 = ctx.r9.s64 + -18980;
	// bl 0x82816528
	ctx.lr = 0x823A9210;
	sub_82816528(ctx, base);
	// stw r3,-30112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30112, ctx.r3.u32);
	// b 0x823a921c
	goto loc_823A921C;
loc_823A9218:
	// lwz r3,-30112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30112);
loc_823A921C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9230"))) PPC_WEAK_FUNC(sub_823A9230);
PPC_FUNC_IMPL(__imp__sub_823A9230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9280
	ctx.lr = 0x823A9250;
	sub_823A9280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9264;
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

__attribute__((alias("__imp__sub_823A9280"))) PPC_WEAK_FUNC(sub_823A9280);
PPC_FUNC_IMPL(__imp__sub_823A9280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26964
	ctx.r31.s64 = ctx.r11.s64 + -26964;
	// lwz r11,-26968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26968);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a92c8
	if (!ctx.cr0.eq) goto loc_823A92C8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22588
	ctx.r9.s64 = ctx.r9.s64 + 22588;
	// stw r11,-26968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26968, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19304
	ctx.r3.s64 = ctx.r11.s64 + -19304;
	// bl 0x82a4c758
	ctx.lr = 0x823A92C8;
	sub_82A4C758(ctx, base);
loc_823A92C8:
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

__attribute__((alias("__imp__sub_823A92E0"))) PPC_WEAK_FUNC(sub_823A92E0);
PPC_FUNC_IMPL(__imp__sub_823A92E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A92F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9368
	if (ctx.cr0.eq) goto loc_823A9368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A9308;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,29248
	ctx.r11.s64 = ctx.r11.s64 + 29248;
	// addi r10,r10,31608
	ctx.r10.s64 = ctx.r10.s64 + 31608;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A9338;
	sub_82816528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,29108
	ctx.r3.s64 = ctx.r9.s64 + 29108;
	// bl 0x82816528
	ctx.lr = 0x823A935C;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a936c
	goto loc_823A936C;
loc_823A9368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A936C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9380"))) PPC_WEAK_FUNC(sub_823A9380);
PPC_FUNC_IMPL(__imp__sub_823A9380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30116(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30116);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a93c0
	if (!ctx.cr0.eq) goto loc_823A93C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30116(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30116, ctx.r11.u32);
	// addi r3,r9,-18956
	ctx.r3.s64 = ctx.r9.s64 + -18956;
	// bl 0x82816528
	ctx.lr = 0x823A93B8;
	sub_82816528(ctx, base);
	// stw r3,-30120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30120, ctx.r3.u32);
	// b 0x823a93c4
	goto loc_823A93C4;
loc_823A93C0:
	// lwz r3,-30120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30120);
loc_823A93C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A93D8"))) PPC_WEAK_FUNC(sub_823A93D8);
PPC_FUNC_IMPL(__imp__sub_823A93D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9428
	ctx.lr = 0x823A93F8;
	sub_823A9428(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A940C;
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

__attribute__((alias("__imp__sub_823A9428"))) PPC_WEAK_FUNC(sub_823A9428);
PPC_FUNC_IMPL(__imp__sub_823A9428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26956
	ctx.r31.s64 = ctx.r11.s64 + -26956;
	// lwz r11,-26960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9470
	if (!ctx.cr0.eq) goto loc_823A9470;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22608
	ctx.r9.s64 = ctx.r9.s64 + 22608;
	// stw r11,-26960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26960, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19328
	ctx.r3.s64 = ctx.r11.s64 + -19328;
	// bl 0x82a4c758
	ctx.lr = 0x823A9470;
	sub_82A4C758(ctx, base);
loc_823A9470:
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

__attribute__((alias("__imp__sub_823A9488"))) PPC_WEAK_FUNC(sub_823A9488);
PPC_FUNC_IMPL(__imp__sub_823A9488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A94A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9520
	if (ctx.cr0.eq) goto loc_823A9520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A94B0;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,31664
	ctx.r11.s64 = ctx.r11.s64 + 31664;
	// addi r10,r10,-31512
	ctx.r10.s64 = ctx.r10.s64 + -31512;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A94E0;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,-9176
	ctx.r3.s64 = ctx.r9.s64 + -9176;
	// bl 0x82816528
	ctx.lr = 0x823A9504;
	sub_82816528(ctx, base);
	// stw r3,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-9140
	ctx.r3.s64 = ctx.r11.s64 + -9140;
	// bl 0x82816528
	ctx.lr = 0x823A9514;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a9524
	goto loc_823A9524;
loc_823A9520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9538"))) PPC_WEAK_FUNC(sub_823A9538);
PPC_FUNC_IMPL(__imp__sub_823A9538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9578
	if (!ctx.cr0.eq) goto loc_823A9578;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30124(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30124, ctx.r11.u32);
	// addi r3,r9,-18932
	ctx.r3.s64 = ctx.r9.s64 + -18932;
	// bl 0x82816528
	ctx.lr = 0x823A9570;
	sub_82816528(ctx, base);
	// stw r3,-30128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30128, ctx.r3.u32);
	// b 0x823a957c
	goto loc_823A957C;
loc_823A9578:
	// lwz r3,-30128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30128);
loc_823A957C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9590"))) PPC_WEAK_FUNC(sub_823A9590);
PPC_FUNC_IMPL(__imp__sub_823A9590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a95e0
	ctx.lr = 0x823A95B0;
	sub_823A95E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A95C4;
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

__attribute__((alias("__imp__sub_823A95E0"))) PPC_WEAK_FUNC(sub_823A95E0);
PPC_FUNC_IMPL(__imp__sub_823A95E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26948
	ctx.r31.s64 = ctx.r11.s64 + -26948;
	// lwz r11,-26952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9628
	if (!ctx.cr0.eq) goto loc_823A9628;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22628
	ctx.r9.s64 = ctx.r9.s64 + 22628;
	// stw r11,-26952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26952, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// bl 0x82a4c758
	ctx.lr = 0x823A9628;
	sub_82A4C758(ctx, base);
loc_823A9628:
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

__attribute__((alias("__imp__sub_823A9640"))) PPC_WEAK_FUNC(sub_823A9640);
PPC_FUNC_IMPL(__imp__sub_823A9640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A9658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a96d8
	if (ctx.cr0.eq) goto loc_823A96D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A9668;
	sub_825B86C0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,-31456
	ctx.r11.s64 = ctx.r11.s64 + -31456;
	// addi r10,r10,-29096
	ctx.r10.s64 = ctx.r10.s64 + -29096;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A9698;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// addi r3,r9,-4704
	ctx.r3.s64 = ctx.r9.s64 + -4704;
	// bl 0x82816528
	ctx.lr = 0x823A96BC;
	sub_82816528(ctx, base);
	// stw r3,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-4668
	ctx.r3.s64 = ctx.r11.s64 + -4668;
	// bl 0x82816528
	ctx.lr = 0x823A96CC;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823a96dc
	goto loc_823A96DC;
loc_823A96D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A96DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A96F0"))) PPC_WEAK_FUNC(sub_823A96F0);
PPC_FUNC_IMPL(__imp__sub_823A96F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9730
	if (!ctx.cr0.eq) goto loc_823A9730;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30132(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30132, ctx.r11.u32);
	// addi r3,r9,-18908
	ctx.r3.s64 = ctx.r9.s64 + -18908;
	// bl 0x82816528
	ctx.lr = 0x823A9728;
	sub_82816528(ctx, base);
	// stw r3,-30136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30136, ctx.r3.u32);
	// b 0x823a9734
	goto loc_823A9734;
loc_823A9730:
	// lwz r3,-30136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30136);
loc_823A9734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9748"))) PPC_WEAK_FUNC(sub_823A9748);
PPC_FUNC_IMPL(__imp__sub_823A9748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9798
	ctx.lr = 0x823A9768;
	sub_823A9798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A977C;
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

__attribute__((alias("__imp__sub_823A9798"))) PPC_WEAK_FUNC(sub_823A9798);
PPC_FUNC_IMPL(__imp__sub_823A9798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26940
	ctx.r31.s64 = ctx.r11.s64 + -26940;
	// lwz r11,-26944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a97e0
	if (!ctx.cr0.eq) goto loc_823A97E0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22648
	ctx.r9.s64 = ctx.r9.s64 + 22648;
	// stw r11,-26944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26944, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// bl 0x82a4c758
	ctx.lr = 0x823A97E0;
	sub_82A4C758(ctx, base);
loc_823A97E0:
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

__attribute__((alias("__imp__sub_823A97F8"))) PPC_WEAK_FUNC(sub_823A97F8);
PPC_FUNC_IMPL(__imp__sub_823A97F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A9810;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9870
	if (ctx.cr0.eq) goto loc_823A9870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A9820;
	sub_825B86C0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,20384
	ctx.r11.s64 = ctx.r11.s64 + 20384;
	// addi r10,r10,22744
	ctx.r10.s64 = ctx.r10.s64 + 22744;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A9850;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// b 0x823a9874
	goto loc_823A9874;
loc_823A9870:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9888"))) PPC_WEAK_FUNC(sub_823A9888);
PPC_FUNC_IMPL(__imp__sub_823A9888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a98c8
	if (!ctx.cr0.eq) goto loc_823A98C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30140, ctx.r11.u32);
	// addi r3,r9,-18884
	ctx.r3.s64 = ctx.r9.s64 + -18884;
	// bl 0x82816528
	ctx.lr = 0x823A98C0;
	sub_82816528(ctx, base);
	// stw r3,-30144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30144, ctx.r3.u32);
	// b 0x823a98cc
	goto loc_823A98CC;
loc_823A98C8:
	// lwz r3,-30144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30144);
loc_823A98CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A98E0"))) PPC_WEAK_FUNC(sub_823A98E0);
PPC_FUNC_IMPL(__imp__sub_823A98E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9930
	ctx.lr = 0x823A9900;
	sub_823A9930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9914;
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

__attribute__((alias("__imp__sub_823A9930"))) PPC_WEAK_FUNC(sub_823A9930);
PPC_FUNC_IMPL(__imp__sub_823A9930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26932
	ctx.r31.s64 = ctx.r11.s64 + -26932;
	// lwz r11,-26936(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26936);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9978
	if (!ctx.cr0.eq) goto loc_823A9978;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22668
	ctx.r9.s64 = ctx.r9.s64 + 22668;
	// stw r11,-26936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26936, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// bl 0x82a4c758
	ctx.lr = 0x823A9978;
	sub_82A4C758(ctx, base);
loc_823A9978:
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

__attribute__((alias("__imp__sub_823A9990"))) PPC_WEAK_FUNC(sub_823A9990);
PPC_FUNC_IMPL(__imp__sub_823A9990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A99A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9a08
	if (ctx.cr0.eq) goto loc_823A9A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A99B8;
	sub_825B86C0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,-29040
	ctx.r11.s64 = ctx.r11.s64 + -29040;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A99E8;
	sub_82816528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// b 0x823a9a0c
	goto loc_823A9A0C;
loc_823A9A08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9A0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9A20"))) PPC_WEAK_FUNC(sub_823A9A20);
PPC_FUNC_IMPL(__imp__sub_823A9A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30148);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9a60
	if (!ctx.cr0.eq) goto loc_823A9A60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30148(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30148, ctx.r11.u32);
	// addi r3,r9,-18860
	ctx.r3.s64 = ctx.r9.s64 + -18860;
	// bl 0x82816528
	ctx.lr = 0x823A9A58;
	sub_82816528(ctx, base);
	// stw r3,-30152(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30152, ctx.r3.u32);
	// b 0x823a9a64
	goto loc_823A9A64;
loc_823A9A60:
	// lwz r3,-30152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30152);
loc_823A9A64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9A78"))) PPC_WEAK_FUNC(sub_823A9A78);
PPC_FUNC_IMPL(__imp__sub_823A9A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9ac8
	ctx.lr = 0x823A9A98;
	sub_823A9AC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9AAC;
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

__attribute__((alias("__imp__sub_823A9AC8"))) PPC_WEAK_FUNC(sub_823A9AC8);
PPC_FUNC_IMPL(__imp__sub_823A9AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26924
	ctx.r31.s64 = ctx.r11.s64 + -26924;
	// lwz r11,-26928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9b10
	if (!ctx.cr0.eq) goto loc_823A9B10;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22688
	ctx.r9.s64 = ctx.r9.s64 + 22688;
	// stw r11,-26928(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26928, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// bl 0x82a4c758
	ctx.lr = 0x823A9B10;
	sub_82A4C758(ctx, base);
loc_823A9B10:
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

__attribute__((alias("__imp__sub_823A9B28"))) PPC_WEAK_FUNC(sub_823A9B28);
PPC_FUNC_IMPL(__imp__sub_823A9B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6176
	ctx.r3.s64 = 6176;
	// bl 0x82833108
	ctx.lr = 0x823A9B40;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9ba0
	if (ctx.cr0.eq) goto loc_823A9BA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b86c0
	ctx.lr = 0x823A9B50;
	sub_825B86C0(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// lis r9,-32226
	ctx.r9.s64 = -2111963136;
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// addi r10,r10,-24264
	ctx.r10.s64 = ctx.r10.s64 + -24264;
	// addi r9,r9,-24212
	ctx.r9.s64 = ctx.r9.s64 + -24212;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-1084
	ctx.r3.s64 = ctx.r11.s64 + -1084;
	// bl 0x82816528
	ctx.lr = 0x823A9B80;
	sub_82816528(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,5348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5348, ctx.r10.u32);
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// b 0x823a9ba4
	goto loc_823A9BA4;
loc_823A9BA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9BA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9BB8"))) PPC_WEAK_FUNC(sub_823A9BB8);
PPC_FUNC_IMPL(__imp__sub_823A9BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30156(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30156);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9bf8
	if (!ctx.cr0.eq) goto loc_823A9BF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30156(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30156, ctx.r11.u32);
	// addi r3,r9,-18836
	ctx.r3.s64 = ctx.r9.s64 + -18836;
	// bl 0x82816528
	ctx.lr = 0x823A9BF0;
	sub_82816528(ctx, base);
	// stw r3,-30160(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30160, ctx.r3.u32);
	// b 0x823a9bfc
	goto loc_823A9BFC;
loc_823A9BF8:
	// lwz r3,-30160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30160);
loc_823A9BFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9C10"))) PPC_WEAK_FUNC(sub_823A9C10);
PPC_FUNC_IMPL(__imp__sub_823A9C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9c60
	ctx.lr = 0x823A9C30;
	sub_823A9C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9C44;
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

__attribute__((alias("__imp__sub_823A9C60"))) PPC_WEAK_FUNC(sub_823A9C60);
PPC_FUNC_IMPL(__imp__sub_823A9C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-26916
	ctx.r31.s64 = ctx.r11.s64 + -26916;
	// lwz r11,-26920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9ca8
	if (!ctx.cr0.eq) goto loc_823A9CA8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22708
	ctx.r9.s64 = ctx.r9.s64 + 22708;
	// stw r11,-26920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26920, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19448
	ctx.r3.s64 = ctx.r11.s64 + -19448;
	// bl 0x82a4c758
	ctx.lr = 0x823A9CA8;
	sub_82A4C758(ctx, base);
loc_823A9CA8:
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

__attribute__((alias("__imp__sub_823A9CC0"))) PPC_WEAK_FUNC(sub_823A9CC0);
PPC_FUNC_IMPL(__imp__sub_823A9CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1984
	ctx.r3.s64 = 1984;
	// bl 0x82833108
	ctx.lr = 0x823A9CDC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823a9d34
	if (ctx.cr0.eq) goto loc_823A9D34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cbb48
	ctx.lr = 0x823A9CEC;
	sub_824CBB48(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,22840
	ctx.r11.s64 = ctx.r11.s64 + 22840;
	// addi r10,r10,24412
	ctx.r10.s64 = ctx.r10.s64 + 24412;
	// addi r9,r9,24464
	ctx.r9.s64 = ctx.r9.s64 + 24464;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// bl 0x82816528
	ctx.lr = 0x823A9D24;
	sub_82816528(ctx, base);
	// stw r3,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// b 0x823a9d38
	goto loc_823A9D38;
loc_823A9D34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9D50"))) PPC_WEAK_FUNC(sub_823A9D50);
PPC_FUNC_IMPL(__imp__sub_823A9D50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1984
	ctx.r3.s64 = 1984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9D58"))) PPC_WEAK_FUNC(sub_823A9D58);
PPC_FUNC_IMPL(__imp__sub_823A9D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9d98
	if (!ctx.cr0.eq) goto loc_823A9D98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30164(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30164, ctx.r11.u32);
	// addi r3,r9,-18808
	ctx.r3.s64 = ctx.r9.s64 + -18808;
	// bl 0x82816528
	ctx.lr = 0x823A9D90;
	sub_82816528(ctx, base);
	// stw r3,-30168(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30168, ctx.r3.u32);
	// b 0x823a9d9c
	goto loc_823A9D9C;
loc_823A9D98:
	// lwz r3,-30168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30168);
loc_823A9D9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9DB0"))) PPC_WEAK_FUNC(sub_823A9DB0);
PPC_FUNC_IMPL(__imp__sub_823A9DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9e00
	ctx.lr = 0x823A9DD0;
	sub_823A9E00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9DE4;
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

__attribute__((alias("__imp__sub_823A9E00"))) PPC_WEAK_FUNC(sub_823A9E00);
PPC_FUNC_IMPL(__imp__sub_823A9E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30860
	ctx.r31.s64 = ctx.r11.s64 + -30860;
	// lwz r11,-30864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30864);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9e48
	if (!ctx.cr0.eq) goto loc_823A9E48;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22728
	ctx.r9.s64 = ctx.r9.s64 + 22728;
	// stw r11,-30864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30864, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// bl 0x82a4c758
	ctx.lr = 0x823A9E48;
	sub_82A4C758(ctx, base);
loc_823A9E48:
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

__attribute__((alias("__imp__sub_823A9E60"))) PPC_WEAK_FUNC(sub_823A9E60);
PPC_FUNC_IMPL(__imp__sub_823A9E60) {
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
	ctx.lr = 0x823A9E74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823a9e88
	if (ctx.cr0.eq) goto loc_823A9E88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d9d68
	ctx.lr = 0x823A9E84;
	sub_823D9D68(ctx, base);
	// b 0x823a9e8c
	goto loc_823A9E8C;
loc_823A9E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9E8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a9ea4
	if (ctx.cr6.eq) goto loc_823A9EA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_823A9EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9EB8"))) PPC_WEAK_FUNC(sub_823A9EB8);
PPC_FUNC_IMPL(__imp__sub_823A9EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9ef8
	if (!ctx.cr0.eq) goto loc_823A9EF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30172(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30172, ctx.r11.u32);
	// addi r3,r9,-18780
	ctx.r3.s64 = ctx.r9.s64 + -18780;
	// bl 0x82816528
	ctx.lr = 0x823A9EF0;
	sub_82816528(ctx, base);
	// stw r3,-30176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30176, ctx.r3.u32);
	// b 0x823a9efc
	goto loc_823A9EFC;
loc_823A9EF8:
	// lwz r3,-30176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30176);
loc_823A9EFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A9F10"))) PPC_WEAK_FUNC(sub_823A9F10);
PPC_FUNC_IMPL(__imp__sub_823A9F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823a9f60
	ctx.lr = 0x823A9F30;
	sub_823A9F60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A9F44;
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

__attribute__((alias("__imp__sub_823A9F60"))) PPC_WEAK_FUNC(sub_823A9F60);
PPC_FUNC_IMPL(__imp__sub_823A9F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30852
	ctx.r31.s64 = ctx.r11.s64 + -30852;
	// lwz r11,-30856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823a9fa8
	if (!ctx.cr0.eq) goto loc_823A9FA8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22980
	ctx.r9.s64 = ctx.r9.s64 + 22980;
	// stw r11,-30856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// bl 0x82a4c758
	ctx.lr = 0x823A9FA8;
	sub_82A4C758(ctx, base);
loc_823A9FA8:
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

__attribute__((alias("__imp__sub_823A9FC0"))) PPC_WEAK_FUNC(sub_823A9FC0);
PPC_FUNC_IMPL(__imp__sub_823A9FC0) {
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
	ctx.lr = 0x823A9FD4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823a9fe8
	if (ctx.cr0.eq) goto loc_823A9FE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d9ea0
	ctx.lr = 0x823A9FE4;
	sub_823D9EA0(ctx, base);
	// b 0x823a9fec
	goto loc_823A9FEC;
loc_823A9FE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A9FEC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa000
	if (ctx.cr6.eq) goto loc_823AA000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA010"))) PPC_WEAK_FUNC(sub_823AA010);
PPC_FUNC_IMPL(__imp__sub_823AA010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa050
	if (!ctx.cr0.eq) goto loc_823AA050;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30180, ctx.r11.u32);
	// addi r3,r9,-18744
	ctx.r3.s64 = ctx.r9.s64 + -18744;
	// bl 0x82816528
	ctx.lr = 0x823AA048;
	sub_82816528(ctx, base);
	// stw r3,-30184(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30184, ctx.r3.u32);
	// b 0x823aa054
	goto loc_823AA054;
loc_823AA050:
	// lwz r3,-30184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30184);
loc_823AA054:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA068"))) PPC_WEAK_FUNC(sub_823AA068);
PPC_FUNC_IMPL(__imp__sub_823AA068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa0b8
	ctx.lr = 0x823AA088;
	sub_823AA0B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA09C;
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

__attribute__((alias("__imp__sub_823AA0B8"))) PPC_WEAK_FUNC(sub_823AA0B8);
PPC_FUNC_IMPL(__imp__sub_823AA0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30844
	ctx.r31.s64 = ctx.r11.s64 + -30844;
	// lwz r11,-30848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30848);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa100
	if (!ctx.cr0.eq) goto loc_823AA100;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23228
	ctx.r9.s64 = ctx.r9.s64 + 23228;
	// stw r11,-30848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30848, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19520
	ctx.r3.s64 = ctx.r11.s64 + -19520;
	// bl 0x82a4c758
	ctx.lr = 0x823AA100;
	sub_82A4C758(ctx, base);
loc_823AA100:
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

__attribute__((alias("__imp__sub_823AA118"))) PPC_WEAK_FUNC(sub_823AA118);
PPC_FUNC_IMPL(__imp__sub_823AA118) {
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
	ctx.lr = 0x823AA12C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa140
	if (ctx.cr0.eq) goto loc_823AA140;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d9fe8
	ctx.lr = 0x823AA13C;
	sub_823D9FE8(ctx, base);
	// b 0x823aa144
	goto loc_823AA144;
loc_823AA140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA144:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa158
	if (ctx.cr6.eq) goto loc_823AA158;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA158:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA168"))) PPC_WEAK_FUNC(sub_823AA168);
PPC_FUNC_IMPL(__imp__sub_823AA168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa1a8
	if (!ctx.cr0.eq) goto loc_823AA1A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30188(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30188, ctx.r11.u32);
	// addi r3,r9,-18704
	ctx.r3.s64 = ctx.r9.s64 + -18704;
	// bl 0x82816528
	ctx.lr = 0x823AA1A0;
	sub_82816528(ctx, base);
	// stw r3,-30192(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30192, ctx.r3.u32);
	// b 0x823aa1ac
	goto loc_823AA1AC;
loc_823AA1A8:
	// lwz r3,-30192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30192);
loc_823AA1AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA1C0"))) PPC_WEAK_FUNC(sub_823AA1C0);
PPC_FUNC_IMPL(__imp__sub_823AA1C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa210
	ctx.lr = 0x823AA1E0;
	sub_823AA210(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA1F4;
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

__attribute__((alias("__imp__sub_823AA210"))) PPC_WEAK_FUNC(sub_823AA210);
PPC_FUNC_IMPL(__imp__sub_823AA210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30836
	ctx.r31.s64 = ctx.r11.s64 + -30836;
	// lwz r11,-30840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa258
	if (!ctx.cr0.eq) goto loc_823AA258;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23476
	ctx.r9.s64 = ctx.r9.s64 + 23476;
	// stw r11,-30840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// bl 0x82a4c758
	ctx.lr = 0x823AA258;
	sub_82A4C758(ctx, base);
loc_823AA258:
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

__attribute__((alias("__imp__sub_823AA270"))) PPC_WEAK_FUNC(sub_823AA270);
PPC_FUNC_IMPL(__imp__sub_823AA270) {
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
	ctx.lr = 0x823AA284;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa298
	if (ctx.cr0.eq) goto loc_823AA298;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da130
	ctx.lr = 0x823AA294;
	sub_823DA130(ctx, base);
	// b 0x823aa29c
	goto loc_823AA29C;
loc_823AA298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA29C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa2b0
	if (ctx.cr6.eq) goto loc_823AA2B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA2B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA2C0"))) PPC_WEAK_FUNC(sub_823AA2C0);
PPC_FUNC_IMPL(__imp__sub_823AA2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30196(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30196);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa300
	if (!ctx.cr0.eq) goto loc_823AA300;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30196(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30196, ctx.r11.u32);
	// addi r3,r9,-18664
	ctx.r3.s64 = ctx.r9.s64 + -18664;
	// bl 0x82816528
	ctx.lr = 0x823AA2F8;
	sub_82816528(ctx, base);
	// stw r3,-30200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30200, ctx.r3.u32);
	// b 0x823aa304
	goto loc_823AA304;
loc_823AA300:
	// lwz r3,-30200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30200);
loc_823AA304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA318"))) PPC_WEAK_FUNC(sub_823AA318);
PPC_FUNC_IMPL(__imp__sub_823AA318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa368
	ctx.lr = 0x823AA338;
	sub_823AA368(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA34C;
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

__attribute__((alias("__imp__sub_823AA368"))) PPC_WEAK_FUNC(sub_823AA368);
PPC_FUNC_IMPL(__imp__sub_823AA368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30828
	ctx.r31.s64 = ctx.r11.s64 + -30828;
	// lwz r11,-30832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa3b0
	if (!ctx.cr0.eq) goto loc_823AA3B0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23724
	ctx.r9.s64 = ctx.r9.s64 + 23724;
	// stw r11,-30832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19568
	ctx.r3.s64 = ctx.r11.s64 + -19568;
	// bl 0x82a4c758
	ctx.lr = 0x823AA3B0;
	sub_82A4C758(ctx, base);
loc_823AA3B0:
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

__attribute__((alias("__imp__sub_823AA3C8"))) PPC_WEAK_FUNC(sub_823AA3C8);
PPC_FUNC_IMPL(__imp__sub_823AA3C8) {
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
	ctx.lr = 0x823AA3DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa3f0
	if (ctx.cr0.eq) goto loc_823AA3F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da278
	ctx.lr = 0x823AA3EC;
	sub_823DA278(ctx, base);
	// b 0x823aa3f4
	goto loc_823AA3F4;
loc_823AA3F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA3F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa408
	if (ctx.cr6.eq) goto loc_823AA408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA408:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA418"))) PPC_WEAK_FUNC(sub_823AA418);
PPC_FUNC_IMPL(__imp__sub_823AA418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30204);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa458
	if (!ctx.cr0.eq) goto loc_823AA458;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30204(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30204, ctx.r11.u32);
	// addi r3,r9,-18616
	ctx.r3.s64 = ctx.r9.s64 + -18616;
	// bl 0x82816528
	ctx.lr = 0x823AA450;
	sub_82816528(ctx, base);
	// stw r3,-30208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30208, ctx.r3.u32);
	// b 0x823aa45c
	goto loc_823AA45C;
loc_823AA458:
	// lwz r3,-30208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30208);
loc_823AA45C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA470"))) PPC_WEAK_FUNC(sub_823AA470);
PPC_FUNC_IMPL(__imp__sub_823AA470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa4c0
	ctx.lr = 0x823AA490;
	sub_823AA4C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA4A4;
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

__attribute__((alias("__imp__sub_823AA4C0"))) PPC_WEAK_FUNC(sub_823AA4C0);
PPC_FUNC_IMPL(__imp__sub_823AA4C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30820
	ctx.r31.s64 = ctx.r11.s64 + -30820;
	// lwz r11,-30824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa508
	if (!ctx.cr0.eq) goto loc_823AA508;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23980
	ctx.r9.s64 = ctx.r9.s64 + 23980;
	// stw r11,-30824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19592
	ctx.r3.s64 = ctx.r11.s64 + -19592;
	// bl 0x82a4c758
	ctx.lr = 0x823AA508;
	sub_82A4C758(ctx, base);
loc_823AA508:
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

__attribute__((alias("__imp__sub_823AA520"))) PPC_WEAK_FUNC(sub_823AA520);
PPC_FUNC_IMPL(__imp__sub_823AA520) {
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
	ctx.lr = 0x823AA534;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa548
	if (ctx.cr0.eq) goto loc_823AA548;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da3c0
	ctx.lr = 0x823AA544;
	sub_823DA3C0(ctx, base);
	// b 0x823aa54c
	goto loc_823AA54C;
loc_823AA548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA54C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa560
	if (ctx.cr6.eq) goto loc_823AA560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA560:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA570"))) PPC_WEAK_FUNC(sub_823AA570);
PPC_FUNC_IMPL(__imp__sub_823AA570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa5b0
	if (!ctx.cr0.eq) goto loc_823AA5B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30212(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30212, ctx.r11.u32);
	// addi r3,r9,-18572
	ctx.r3.s64 = ctx.r9.s64 + -18572;
	// bl 0x82816528
	ctx.lr = 0x823AA5A8;
	sub_82816528(ctx, base);
	// stw r3,-30216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30216, ctx.r3.u32);
	// b 0x823aa5b4
	goto loc_823AA5B4;
loc_823AA5B0:
	// lwz r3,-30216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30216);
loc_823AA5B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA5C8"))) PPC_WEAK_FUNC(sub_823AA5C8);
PPC_FUNC_IMPL(__imp__sub_823AA5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa618
	ctx.lr = 0x823AA5E8;
	sub_823AA618(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA5FC;
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

__attribute__((alias("__imp__sub_823AA618"))) PPC_WEAK_FUNC(sub_823AA618);
PPC_FUNC_IMPL(__imp__sub_823AA618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30812
	ctx.r31.s64 = ctx.r11.s64 + -30812;
	// lwz r11,-30816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa660
	if (!ctx.cr0.eq) goto loc_823AA660;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24228
	ctx.r9.s64 = ctx.r9.s64 + 24228;
	// stw r11,-30816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19616
	ctx.r3.s64 = ctx.r11.s64 + -19616;
	// bl 0x82a4c758
	ctx.lr = 0x823AA660;
	sub_82A4C758(ctx, base);
loc_823AA660:
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

__attribute__((alias("__imp__sub_823AA678"))) PPC_WEAK_FUNC(sub_823AA678);
PPC_FUNC_IMPL(__imp__sub_823AA678) {
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
	ctx.lr = 0x823AA68C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa6a0
	if (ctx.cr0.eq) goto loc_823AA6A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da508
	ctx.lr = 0x823AA69C;
	sub_823DA508(ctx, base);
	// b 0x823aa6a4
	goto loc_823AA6A4;
loc_823AA6A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA6A4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa6b8
	if (ctx.cr6.eq) goto loc_823AA6B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA6B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA6C8"))) PPC_WEAK_FUNC(sub_823AA6C8);
PPC_FUNC_IMPL(__imp__sub_823AA6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30220);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa708
	if (!ctx.cr0.eq) goto loc_823AA708;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30220(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30220, ctx.r11.u32);
	// addi r3,r9,-18524
	ctx.r3.s64 = ctx.r9.s64 + -18524;
	// bl 0x82816528
	ctx.lr = 0x823AA700;
	sub_82816528(ctx, base);
	// stw r3,-30224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30224, ctx.r3.u32);
	// b 0x823aa70c
	goto loc_823AA70C;
loc_823AA708:
	// lwz r3,-30224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30224);
loc_823AA70C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA720"))) PPC_WEAK_FUNC(sub_823AA720);
PPC_FUNC_IMPL(__imp__sub_823AA720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa770
	ctx.lr = 0x823AA740;
	sub_823AA770(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA754;
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

__attribute__((alias("__imp__sub_823AA770"))) PPC_WEAK_FUNC(sub_823AA770);
PPC_FUNC_IMPL(__imp__sub_823AA770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30804
	ctx.r31.s64 = ctx.r11.s64 + -30804;
	// lwz r11,-30808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa7b8
	if (!ctx.cr0.eq) goto loc_823AA7B8;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24660
	ctx.r9.s64 = ctx.r9.s64 + 24660;
	// stw r11,-30808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// bl 0x82a4c758
	ctx.lr = 0x823AA7B8;
	sub_82A4C758(ctx, base);
loc_823AA7B8:
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

__attribute__((alias("__imp__sub_823AA7D0"))) PPC_WEAK_FUNC(sub_823AA7D0);
PPC_FUNC_IMPL(__imp__sub_823AA7D0) {
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
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82833108
	ctx.lr = 0x823AA7E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa7f8
	if (ctx.cr0.eq) goto loc_823AA7F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da680
	ctx.lr = 0x823AA7F4;
	sub_823DA680(ctx, base);
	// b 0x823aa7fc
	goto loc_823AA7FC;
loc_823AA7F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA7FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa810
	if (ctx.cr6.eq) goto loc_823AA810;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AA810:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA820"))) PPC_WEAK_FUNC(sub_823AA820);
PPC_FUNC_IMPL(__imp__sub_823AA820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa860
	if (!ctx.cr0.eq) goto loc_823AA860;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30228(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30228, ctx.r11.u32);
	// addi r3,r9,-18480
	ctx.r3.s64 = ctx.r9.s64 + -18480;
	// bl 0x82816528
	ctx.lr = 0x823AA858;
	sub_82816528(ctx, base);
	// stw r3,-30232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30232, ctx.r3.u32);
	// b 0x823aa864
	goto loc_823AA864;
loc_823AA860:
	// lwz r3,-30232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30232);
loc_823AA864:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA878"))) PPC_WEAK_FUNC(sub_823AA878);
PPC_FUNC_IMPL(__imp__sub_823AA878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aa8c8
	ctx.lr = 0x823AA898;
	sub_823AA8C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA8AC;
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

__attribute__((alias("__imp__sub_823AA8C8"))) PPC_WEAK_FUNC(sub_823AA8C8);
PPC_FUNC_IMPL(__imp__sub_823AA8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30796
	ctx.r31.s64 = ctx.r11.s64 + -30796;
	// lwz r11,-30800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa910
	if (!ctx.cr0.eq) goto loc_823AA910;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24984
	ctx.r9.s64 = ctx.r9.s64 + 24984;
	// stw r11,-30800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// bl 0x82a4c758
	ctx.lr = 0x823AA910;
	sub_82A4C758(ctx, base);
loc_823AA910:
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

__attribute__((alias("__imp__sub_823AA928"))) PPC_WEAK_FUNC(sub_823AA928);
PPC_FUNC_IMPL(__imp__sub_823AA928) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x823AA93C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aa94c
	if (ctx.cr0.eq) goto loc_823AA94C;
	// bl 0x826b8d10
	ctx.lr = 0x823AA948;
	sub_826B8D10(ctx, base);
	// b 0x823aa950
	goto loc_823AA950;
loc_823AA94C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AA950:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA960"))) PPC_WEAK_FUNC(sub_823AA960);
PPC_FUNC_IMPL(__imp__sub_823AA960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30236);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aa9a0
	if (!ctx.cr0.eq) goto loc_823AA9A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30236(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30236, ctx.r11.u32);
	// addi r3,r9,-18436
	ctx.r3.s64 = ctx.r9.s64 + -18436;
	// bl 0x82816528
	ctx.lr = 0x823AA998;
	sub_82816528(ctx, base);
	// stw r3,-30240(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30240, ctx.r3.u32);
	// b 0x823aa9a4
	goto loc_823AA9A4;
loc_823AA9A0:
	// lwz r3,-30240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30240);
loc_823AA9A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AA9B8"))) PPC_WEAK_FUNC(sub_823AA9B8);
PPC_FUNC_IMPL(__imp__sub_823AA9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aaa08
	ctx.lr = 0x823AA9D8;
	sub_823AAA08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AA9EC;
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

__attribute__((alias("__imp__sub_823AAA08"))) PPC_WEAK_FUNC(sub_823AAA08);
PPC_FUNC_IMPL(__imp__sub_823AAA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31772
	ctx.r31.s64 = ctx.r11.s64 + -31772;
	// lwz r11,-31776(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31776);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aaa50
	if (!ctx.cr0.eq) goto loc_823AAA50;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25004
	ctx.r9.s64 = ctx.r9.s64 + 25004;
	// stw r11,-31776(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31776, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// bl 0x82a4c758
	ctx.lr = 0x823AAA50;
	sub_82A4C758(ctx, base);
loc_823AAA50:
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

__attribute__((alias("__imp__sub_823AAA68"))) PPC_WEAK_FUNC(sub_823AAA68);
PPC_FUNC_IMPL(__imp__sub_823AAA68) {
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x823AAA7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aaa8c
	if (ctx.cr0.eq) goto loc_823AAA8C;
	// bl 0x82716200
	ctx.lr = 0x823AAA88;
	sub_82716200(ctx, base);
	// b 0x823aaa90
	goto loc_823AAA90;
loc_823AAA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AAA90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAAA0"))) PPC_WEAK_FUNC(sub_823AAAA0);
PPC_FUNC_IMPL(__imp__sub_823AAAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aaae0
	if (!ctx.cr0.eq) goto loc_823AAAE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30244(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30244, ctx.r11.u32);
	// addi r3,r9,-18416
	ctx.r3.s64 = ctx.r9.s64 + -18416;
	// bl 0x82816528
	ctx.lr = 0x823AAAD8;
	sub_82816528(ctx, base);
	// stw r3,-30248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30248, ctx.r3.u32);
	// b 0x823aaae4
	goto loc_823AAAE4;
loc_823AAAE0:
	// lwz r3,-30248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30248);
loc_823AAAE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAAF8"))) PPC_WEAK_FUNC(sub_823AAAF8);
PPC_FUNC_IMPL(__imp__sub_823AAAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aab48
	ctx.lr = 0x823AAB18;
	sub_823AAB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AAB2C;
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

__attribute__((alias("__imp__sub_823AAB48"))) PPC_WEAK_FUNC(sub_823AAB48);
PPC_FUNC_IMPL(__imp__sub_823AAB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31876
	ctx.r31.s64 = ctx.r11.s64 + -31876;
	// lwz r11,-31880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aab90
	if (!ctx.cr0.eq) goto loc_823AAB90;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25024
	ctx.r9.s64 = ctx.r9.s64 + 25024;
	// stw r11,-31880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31880, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// bl 0x82a4c758
	ctx.lr = 0x823AAB90;
	sub_82A4C758(ctx, base);
loc_823AAB90:
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

__attribute__((alias("__imp__sub_823AABA8"))) PPC_WEAK_FUNC(sub_823AABA8);
PPC_FUNC_IMPL(__imp__sub_823AABA8) {
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
	// li r3,1920
	ctx.r3.s64 = 1920;
	// bl 0x82833108
	ctx.lr = 0x823AABBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aabcc
	if (ctx.cr0.eq) goto loc_823AABCC;
	// bl 0x826c2750
	ctx.lr = 0x823AABC8;
	sub_826C2750(ctx, base);
	// b 0x823aabd0
	goto loc_823AABD0;
loc_823AABCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AABD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AABE0"))) PPC_WEAK_FUNC(sub_823AABE0);
PPC_FUNC_IMPL(__imp__sub_823AABE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aac20
	if (!ctx.cr0.eq) goto loc_823AAC20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30252(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30252, ctx.r11.u32);
	// addi r3,r9,-18392
	ctx.r3.s64 = ctx.r9.s64 + -18392;
	// bl 0x82816528
	ctx.lr = 0x823AAC18;
	sub_82816528(ctx, base);
	// stw r3,-30256(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30256, ctx.r3.u32);
	// b 0x823aac24
	goto loc_823AAC24;
loc_823AAC20:
	// lwz r3,-30256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30256);
loc_823AAC24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAC38"))) PPC_WEAK_FUNC(sub_823AAC38);
PPC_FUNC_IMPL(__imp__sub_823AAC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aac88
	ctx.lr = 0x823AAC58;
	sub_823AAC88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AAC6C;
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

__attribute__((alias("__imp__sub_823AAC88"))) PPC_WEAK_FUNC(sub_823AAC88);
PPC_FUNC_IMPL(__imp__sub_823AAC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31796
	ctx.r31.s64 = ctx.r11.s64 + -31796;
	// lwz r11,-31800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aacd0
	if (!ctx.cr0.eq) goto loc_823AACD0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25044
	ctx.r9.s64 = ctx.r9.s64 + 25044;
	// stw r11,-31800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// bl 0x82a4c758
	ctx.lr = 0x823AACD0;
	sub_82A4C758(ctx, base);
loc_823AACD0:
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

__attribute__((alias("__imp__sub_823AACE8"))) PPC_WEAK_FUNC(sub_823AACE8);
PPC_FUNC_IMPL(__imp__sub_823AACE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x823AAD00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823aad44
	if (ctx.cr0.eq) goto loc_823AAD44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c40e0
	ctx.lr = 0x823AAD10;
	sub_826C40E0(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,21944
	ctx.r11.s64 = ctx.r11.s64 + 21944;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,23132
	ctx.r10.s64 = ctx.r10.s64 + 23132;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// b 0x823aad48
	goto loc_823AAD48;
loc_823AAD44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AAD48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAD60"))) PPC_WEAK_FUNC(sub_823AAD60);
PPC_FUNC_IMPL(__imp__sub_823AAD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30260);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aada0
	if (!ctx.cr0.eq) goto loc_823AADA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30260(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30260, ctx.r11.u32);
	// addi r3,r9,-18372
	ctx.r3.s64 = ctx.r9.s64 + -18372;
	// bl 0x82816528
	ctx.lr = 0x823AAD98;
	sub_82816528(ctx, base);
	// stw r3,-30264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30264, ctx.r3.u32);
	// b 0x823aada4
	goto loc_823AADA4;
loc_823AADA0:
	// lwz r3,-30264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30264);
loc_823AADA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AADB8"))) PPC_WEAK_FUNC(sub_823AADB8);
PPC_FUNC_IMPL(__imp__sub_823AADB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aae08
	ctx.lr = 0x823AADD8;
	sub_823AAE08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AADEC;
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

__attribute__((alias("__imp__sub_823AAE08"))) PPC_WEAK_FUNC(sub_823AAE08);
PPC_FUNC_IMPL(__imp__sub_823AAE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30364
	ctx.r31.s64 = ctx.r11.s64 + -30364;
	// lwz r11,-30368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aae50
	if (!ctx.cr0.eq) goto loc_823AAE50;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25064
	ctx.r9.s64 = ctx.r9.s64 + 25064;
	// stw r11,-30368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30368, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19760
	ctx.r3.s64 = ctx.r11.s64 + -19760;
	// bl 0x82a4c758
	ctx.lr = 0x823AAE50;
	sub_82A4C758(ctx, base);
loc_823AAE50:
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

__attribute__((alias("__imp__sub_823AAE68"))) PPC_WEAK_FUNC(sub_823AAE68);
PPC_FUNC_IMPL(__imp__sub_823AAE68) {
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
	// li r3,1952
	ctx.r3.s64 = 1952;
	// bl 0x82833108
	ctx.lr = 0x823AAE7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aae8c
	if (ctx.cr0.eq) goto loc_823AAE8C;
	// bl 0x826c9150
	ctx.lr = 0x823AAE88;
	sub_826C9150(ctx, base);
	// b 0x823aae90
	goto loc_823AAE90;
loc_823AAE8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AAE90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAEA0"))) PPC_WEAK_FUNC(sub_823AAEA0);
PPC_FUNC_IMPL(__imp__sub_823AAEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aaee0
	if (!ctx.cr0.eq) goto loc_823AAEE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30268, ctx.r11.u32);
	// addi r3,r9,-18328
	ctx.r3.s64 = ctx.r9.s64 + -18328;
	// bl 0x82816528
	ctx.lr = 0x823AAED8;
	sub_82816528(ctx, base);
	// stw r3,-30272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30272, ctx.r3.u32);
	// b 0x823aaee4
	goto loc_823AAEE4;
loc_823AAEE0:
	// lwz r3,-30272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30272);
loc_823AAEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAEF8"))) PPC_WEAK_FUNC(sub_823AAEF8);
PPC_FUNC_IMPL(__imp__sub_823AAEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aaf48
	ctx.lr = 0x823AAF18;
	sub_823AAF48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AAF2C;
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

__attribute__((alias("__imp__sub_823AAF48"))) PPC_WEAK_FUNC(sub_823AAF48);
PPC_FUNC_IMPL(__imp__sub_823AAF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30404
	ctx.r31.s64 = ctx.r11.s64 + -30404;
	// lwz r11,-30408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aaf90
	if (!ctx.cr0.eq) goto loc_823AAF90;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25084
	ctx.r9.s64 = ctx.r9.s64 + 25084;
	// stw r11,-30408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30408, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19784
	ctx.r3.s64 = ctx.r11.s64 + -19784;
	// bl 0x82a4c758
	ctx.lr = 0x823AAF90;
	sub_82A4C758(ctx, base);
loc_823AAF90:
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

__attribute__((alias("__imp__sub_823AAFA8"))) PPC_WEAK_FUNC(sub_823AAFA8);
PPC_FUNC_IMPL(__imp__sub_823AAFA8) {
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
	// li r3,3376
	ctx.r3.s64 = 3376;
	// bl 0x82833108
	ctx.lr = 0x823AAFBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aafcc
	if (ctx.cr0.eq) goto loc_823AAFCC;
	// bl 0x826c6738
	ctx.lr = 0x823AAFC8;
	sub_826C6738(ctx, base);
	// b 0x823aafd0
	goto loc_823AAFD0;
loc_823AAFCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AAFD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AAFE0"))) PPC_WEAK_FUNC(sub_823AAFE0);
PPC_FUNC_IMPL(__imp__sub_823AAFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30276);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab020
	if (!ctx.cr0.eq) goto loc_823AB020;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30276(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30276, ctx.r11.u32);
	// addi r3,r9,-18284
	ctx.r3.s64 = ctx.r9.s64 + -18284;
	// bl 0x82816528
	ctx.lr = 0x823AB018;
	sub_82816528(ctx, base);
	// stw r3,-30280(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30280, ctx.r3.u32);
	// b 0x823ab024
	goto loc_823AB024;
loc_823AB020:
	// lwz r3,-30280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30280);
loc_823AB024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB038"))) PPC_WEAK_FUNC(sub_823AB038);
PPC_FUNC_IMPL(__imp__sub_823AB038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab088
	ctx.lr = 0x823AB058;
	sub_823AB088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB06C;
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

__attribute__((alias("__imp__sub_823AB088"))) PPC_WEAK_FUNC(sub_823AB088);
PPC_FUNC_IMPL(__imp__sub_823AB088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30436
	ctx.r31.s64 = ctx.r11.s64 + -30436;
	// lwz r11,-30440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30440);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab0d0
	if (!ctx.cr0.eq) goto loc_823AB0D0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25104
	ctx.r9.s64 = ctx.r9.s64 + 25104;
	// stw r11,-30440(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30440, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// bl 0x82a4c758
	ctx.lr = 0x823AB0D0;
	sub_82A4C758(ctx, base);
loc_823AB0D0:
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

__attribute__((alias("__imp__sub_823AB0E8"))) PPC_WEAK_FUNC(sub_823AB0E8);
PPC_FUNC_IMPL(__imp__sub_823AB0E8) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x823AB0FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ab10c
	if (ctx.cr0.eq) goto loc_823AB10C;
	// bl 0x826c2200
	ctx.lr = 0x823AB108;
	sub_826C2200(ctx, base);
	// b 0x823ab110
	goto loc_823AB110;
loc_823AB10C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB110:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB120"))) PPC_WEAK_FUNC(sub_823AB120);
PPC_FUNC_IMPL(__imp__sub_823AB120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab160
	if (!ctx.cr0.eq) goto loc_823AB160;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30284(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30284, ctx.r11.u32);
	// addi r3,r9,-18240
	ctx.r3.s64 = ctx.r9.s64 + -18240;
	// bl 0x82816528
	ctx.lr = 0x823AB158;
	sub_82816528(ctx, base);
	// stw r3,-30288(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30288, ctx.r3.u32);
	// b 0x823ab164
	goto loc_823AB164;
loc_823AB160:
	// lwz r3,-30288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30288);
loc_823AB164:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB178"))) PPC_WEAK_FUNC(sub_823AB178);
PPC_FUNC_IMPL(__imp__sub_823AB178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab1c8
	ctx.lr = 0x823AB198;
	sub_823AB1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB1AC;
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

__attribute__((alias("__imp__sub_823AB1C8"))) PPC_WEAK_FUNC(sub_823AB1C8);
PPC_FUNC_IMPL(__imp__sub_823AB1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31788
	ctx.r31.s64 = ctx.r11.s64 + -31788;
	// lwz r11,-31792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab210
	if (!ctx.cr0.eq) goto loc_823AB210;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25124
	ctx.r9.s64 = ctx.r9.s64 + 25124;
	// stw r11,-31792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// bl 0x82a4c758
	ctx.lr = 0x823AB210;
	sub_82A4C758(ctx, base);
loc_823AB210:
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

__attribute__((alias("__imp__sub_823AB228"))) PPC_WEAK_FUNC(sub_823AB228);
PPC_FUNC_IMPL(__imp__sub_823AB228) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x823AB23C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ab24c
	if (ctx.cr0.eq) goto loc_823AB24C;
	// bl 0x826c2300
	ctx.lr = 0x823AB248;
	sub_826C2300(ctx, base);
	// b 0x823ab250
	goto loc_823AB250;
loc_823AB24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB260"))) PPC_WEAK_FUNC(sub_823AB260);
PPC_FUNC_IMPL(__imp__sub_823AB260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30292);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab2a0
	if (!ctx.cr0.eq) goto loc_823AB2A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30292(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30292, ctx.r11.u32);
	// addi r3,r9,-18212
	ctx.r3.s64 = ctx.r9.s64 + -18212;
	// bl 0x82816528
	ctx.lr = 0x823AB298;
	sub_82816528(ctx, base);
	// stw r3,-30296(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30296, ctx.r3.u32);
	// b 0x823ab2a4
	goto loc_823AB2A4;
loc_823AB2A0:
	// lwz r3,-30296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30296);
loc_823AB2A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB2B8"))) PPC_WEAK_FUNC(sub_823AB2B8);
PPC_FUNC_IMPL(__imp__sub_823AB2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab308
	ctx.lr = 0x823AB2D8;
	sub_823AB308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB2EC;
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

__attribute__((alias("__imp__sub_823AB308"))) PPC_WEAK_FUNC(sub_823AB308);
PPC_FUNC_IMPL(__imp__sub_823AB308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31780
	ctx.r31.s64 = ctx.r11.s64 + -31780;
	// lwz r11,-31784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31784);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab350
	if (!ctx.cr0.eq) goto loc_823AB350;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25144
	ctx.r9.s64 = ctx.r9.s64 + 25144;
	// stw r11,-31784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31784, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// bl 0x82a4c758
	ctx.lr = 0x823AB350;
	sub_82A4C758(ctx, base);
loc_823AB350:
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

__attribute__((alias("__imp__sub_823AB368"))) PPC_WEAK_FUNC(sub_823AB368);
PPC_FUNC_IMPL(__imp__sub_823AB368) {
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
	// li r3,1904
	ctx.r3.s64 = 1904;
	// bl 0x82833108
	ctx.lr = 0x823AB37C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ab38c
	if (ctx.cr0.eq) goto loc_823AB38C;
	// bl 0x826bbeb8
	ctx.lr = 0x823AB388;
	sub_826BBEB8(ctx, base);
	// b 0x823ab390
	goto loc_823AB390;
loc_823AB38C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB3A0"))) PPC_WEAK_FUNC(sub_823AB3A0);
PPC_FUNC_IMPL(__imp__sub_823AB3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30300(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30300);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab3e0
	if (!ctx.cr0.eq) goto loc_823AB3E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30300(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30300, ctx.r11.u32);
	// addi r3,r9,-18184
	ctx.r3.s64 = ctx.r9.s64 + -18184;
	// bl 0x82816528
	ctx.lr = 0x823AB3D8;
	sub_82816528(ctx, base);
	// stw r3,-30304(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30304, ctx.r3.u32);
	// b 0x823ab3e4
	goto loc_823AB3E4;
loc_823AB3E0:
	// lwz r3,-30304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30304);
loc_823AB3E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB3F8"))) PPC_WEAK_FUNC(sub_823AB3F8);
PPC_FUNC_IMPL(__imp__sub_823AB3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab448
	ctx.lr = 0x823AB418;
	sub_823AB448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB42C;
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

__attribute__((alias("__imp__sub_823AB448"))) PPC_WEAK_FUNC(sub_823AB448);
PPC_FUNC_IMPL(__imp__sub_823AB448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30300
	ctx.r31.s64 = ctx.r11.s64 + -30300;
	// lwz r11,-30304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab490
	if (!ctx.cr0.eq) goto loc_823AB490;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25164
	ctx.r9.s64 = ctx.r9.s64 + 25164;
	// stw r11,-30304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30304, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// bl 0x82a4c758
	ctx.lr = 0x823AB490;
	sub_82A4C758(ctx, base);
loc_823AB490:
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

__attribute__((alias("__imp__sub_823AB4A8"))) PPC_WEAK_FUNC(sub_823AB4A8);
PPC_FUNC_IMPL(__imp__sub_823AB4A8) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AB4BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ab4cc
	if (ctx.cr0.eq) goto loc_823AB4CC;
	// bl 0x8270f370
	ctx.lr = 0x823AB4C8;
	sub_8270F370(ctx, base);
	// b 0x823ab4d0
	goto loc_823AB4D0;
loc_823AB4CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB4D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB4E0"))) PPC_WEAK_FUNC(sub_823AB4E0);
PPC_FUNC_IMPL(__imp__sub_823AB4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab520
	if (!ctx.cr0.eq) goto loc_823AB520;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30308, ctx.r11.u32);
	// addi r3,r9,-18164
	ctx.r3.s64 = ctx.r9.s64 + -18164;
	// bl 0x82816528
	ctx.lr = 0x823AB518;
	sub_82816528(ctx, base);
	// stw r3,-30312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30312, ctx.r3.u32);
	// b 0x823ab524
	goto loc_823AB524;
loc_823AB520:
	// lwz r3,-30312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30312);
loc_823AB524:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB538"))) PPC_WEAK_FUNC(sub_823AB538);
PPC_FUNC_IMPL(__imp__sub_823AB538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab588
	ctx.lr = 0x823AB558;
	sub_823AB588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB56C;
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

__attribute__((alias("__imp__sub_823AB588"))) PPC_WEAK_FUNC(sub_823AB588);
PPC_FUNC_IMPL(__imp__sub_823AB588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29916
	ctx.r31.s64 = ctx.r11.s64 + -29916;
	// lwz r11,-29920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29920);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab5d0
	if (!ctx.cr0.eq) goto loc_823AB5D0;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26288
	ctx.r9.s64 = ctx.r9.s64 + 26288;
	// stw r11,-29920(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29920, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19904
	ctx.r3.s64 = ctx.r11.s64 + -19904;
	// bl 0x82a4c758
	ctx.lr = 0x823AB5D0;
	sub_82A4C758(ctx, base);
loc_823AB5D0:
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

__attribute__((alias("__imp__sub_823AB5E8"))) PPC_WEAK_FUNC(sub_823AB5E8);
PPC_FUNC_IMPL(__imp__sub_823AB5E8) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AB5FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ab60c
	if (ctx.cr0.eq) goto loc_823AB60C;
	// bl 0x8270fa58
	ctx.lr = 0x823AB608;
	sub_8270FA58(ctx, base);
	// b 0x823ab610
	goto loc_823AB610;
loc_823AB60C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB620"))) PPC_WEAK_FUNC(sub_823AB620);
PPC_FUNC_IMPL(__imp__sub_823AB620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30316);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab660
	if (!ctx.cr0.eq) goto loc_823AB660;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30316(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30316, ctx.r11.u32);
	// addi r3,r9,-23132
	ctx.r3.s64 = ctx.r9.s64 + -23132;
	// bl 0x82816528
	ctx.lr = 0x823AB658;
	sub_82816528(ctx, base);
	// stw r3,-30320(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30320, ctx.r3.u32);
	// b 0x823ab664
	goto loc_823AB664;
loc_823AB660:
	// lwz r3,-30320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30320);
loc_823AB664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB678"))) PPC_WEAK_FUNC(sub_823AB678);
PPC_FUNC_IMPL(__imp__sub_823AB678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab6c8
	ctx.lr = 0x823AB698;
	sub_823AB6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB6AC;
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

__attribute__((alias("__imp__sub_823AB6C8"))) PPC_WEAK_FUNC(sub_823AB6C8);
PPC_FUNC_IMPL(__imp__sub_823AB6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29908
	ctx.r31.s64 = ctx.r11.s64 + -29908;
	// lwz r11,-29912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29912);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab710
	if (!ctx.cr0.eq) goto loc_823AB710;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27416
	ctx.r9.s64 = ctx.r9.s64 + 27416;
	// stw r11,-29912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29912, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19928
	ctx.r3.s64 = ctx.r11.s64 + -19928;
	// bl 0x82a4c758
	ctx.lr = 0x823AB710;
	sub_82A4C758(ctx, base);
loc_823AB710:
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

__attribute__((alias("__imp__sub_823AB728"))) PPC_WEAK_FUNC(sub_823AB728);
PPC_FUNC_IMPL(__imp__sub_823AB728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AB740;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ab784
	if (ctx.cr0.eq) goto loc_823AB784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270fa58
	ctx.lr = 0x823AB750;
	sub_8270FA58(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,27440
	ctx.r11.s64 = ctx.r11.s64 + 27440;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,28492
	ctx.r10.s64 = ctx.r10.s64 + 28492;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// b 0x823ab788
	goto loc_823AB788;
loc_823AB784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB788:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB7A0"))) PPC_WEAK_FUNC(sub_823AB7A0);
PPC_FUNC_IMPL(__imp__sub_823AB7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30324);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab7e0
	if (!ctx.cr0.eq) goto loc_823AB7E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30324(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30324, ctx.r11.u32);
	// addi r3,r9,-23172
	ctx.r3.s64 = ctx.r9.s64 + -23172;
	// bl 0x82816528
	ctx.lr = 0x823AB7D8;
	sub_82816528(ctx, base);
	// stw r3,-30328(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30328, ctx.r3.u32);
	// b 0x823ab7e4
	goto loc_823AB7E4;
loc_823AB7E0:
	// lwz r3,-30328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30328);
loc_823AB7E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB7F8"))) PPC_WEAK_FUNC(sub_823AB7F8);
PPC_FUNC_IMPL(__imp__sub_823AB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab848
	ctx.lr = 0x823AB818;
	sub_823AB848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB82C;
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

__attribute__((alias("__imp__sub_823AB848"))) PPC_WEAK_FUNC(sub_823AB848);
PPC_FUNC_IMPL(__imp__sub_823AB848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29900
	ctx.r31.s64 = ctx.r11.s64 + -29900;
	// lwz r11,-29904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29904);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab890
	if (!ctx.cr0.eq) goto loc_823AB890;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28544
	ctx.r9.s64 = ctx.r9.s64 + 28544;
	// stw r11,-29904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29904, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// bl 0x82a4c758
	ctx.lr = 0x823AB890;
	sub_82A4C758(ctx, base);
loc_823AB890:
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

__attribute__((alias("__imp__sub_823AB8A8"))) PPC_WEAK_FUNC(sub_823AB8A8);
PPC_FUNC_IMPL(__imp__sub_823AB8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AB8C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ab904
	if (ctx.cr0.eq) goto loc_823AB904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270fa58
	ctx.lr = 0x823AB8D0;
	sub_8270FA58(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,28568
	ctx.r11.s64 = ctx.r11.s64 + 28568;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,29620
	ctx.r10.s64 = ctx.r10.s64 + 29620;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// b 0x823ab908
	goto loc_823AB908;
loc_823AB904:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB908:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB920"))) PPC_WEAK_FUNC(sub_823AB920);
PPC_FUNC_IMPL(__imp__sub_823AB920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ab960
	if (!ctx.cr0.eq) goto loc_823AB960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30332, ctx.r11.u32);
	// addi r3,r9,-23212
	ctx.r3.s64 = ctx.r9.s64 + -23212;
	// bl 0x82816528
	ctx.lr = 0x823AB958;
	sub_82816528(ctx, base);
	// stw r3,-30336(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30336, ctx.r3.u32);
	// b 0x823ab964
	goto loc_823AB964;
loc_823AB960:
	// lwz r3,-30336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30336);
loc_823AB964:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AB978"))) PPC_WEAK_FUNC(sub_823AB978);
PPC_FUNC_IMPL(__imp__sub_823AB978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab9c8
	ctx.lr = 0x823AB998;
	sub_823AB9C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AB9AC;
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

__attribute__((alias("__imp__sub_823AB9C8"))) PPC_WEAK_FUNC(sub_823AB9C8);
PPC_FUNC_IMPL(__imp__sub_823AB9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29892
	ctx.r31.s64 = ctx.r11.s64 + -29892;
	// lwz r11,-29896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29896);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aba10
	if (!ctx.cr0.eq) goto loc_823ABA10;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29672
	ctx.r9.s64 = ctx.r9.s64 + 29672;
	// stw r11,-29896(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29896, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// bl 0x82a4c758
	ctx.lr = 0x823ABA10;
	sub_82A4C758(ctx, base);
loc_823ABA10:
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

__attribute__((alias("__imp__sub_823ABA28"))) PPC_WEAK_FUNC(sub_823ABA28);
PPC_FUNC_IMPL(__imp__sub_823ABA28) {
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
	ctx.lr = 0x823ABA3C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aba4c
	if (ctx.cr0.eq) goto loc_823ABA4C;
	// bl 0x8270f730
	ctx.lr = 0x823ABA48;
	sub_8270F730(ctx, base);
	// b 0x823aba50
	goto loc_823ABA50;
loc_823ABA4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABA50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABA60"))) PPC_WEAK_FUNC(sub_823ABA60);
PPC_FUNC_IMPL(__imp__sub_823ABA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abaa0
	if (!ctx.cr0.eq) goto loc_823ABAA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30340(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30340, ctx.r11.u32);
	// addi r3,r9,-23980
	ctx.r3.s64 = ctx.r9.s64 + -23980;
	// bl 0x82816528
	ctx.lr = 0x823ABA98;
	sub_82816528(ctx, base);
	// stw r3,-30344(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30344, ctx.r3.u32);
	// b 0x823abaa4
	goto loc_823ABAA4;
loc_823ABAA0:
	// lwz r3,-30344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30344);
loc_823ABAA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABAB8"))) PPC_WEAK_FUNC(sub_823ABAB8);
PPC_FUNC_IMPL(__imp__sub_823ABAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823abb08
	ctx.lr = 0x823ABAD8;
	sub_823ABB08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ABAEC;
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

__attribute__((alias("__imp__sub_823ABB08"))) PPC_WEAK_FUNC(sub_823ABB08);
PPC_FUNC_IMPL(__imp__sub_823ABB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29884
	ctx.r31.s64 = ctx.r11.s64 + -29884;
	// lwz r11,-29888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abb50
	if (!ctx.cr0.eq) goto loc_823ABB50;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30800
	ctx.r9.s64 = ctx.r9.s64 + 30800;
	// stw r11,-29888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29888, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// bl 0x82a4c758
	ctx.lr = 0x823ABB50;
	sub_82A4C758(ctx, base);
loc_823ABB50:
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

__attribute__((alias("__imp__sub_823ABB68"))) PPC_WEAK_FUNC(sub_823ABB68);
PPC_FUNC_IMPL(__imp__sub_823ABB68) {
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
	ctx.lr = 0x823ABB7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823abb8c
	if (ctx.cr0.eq) goto loc_823ABB8C;
	// bl 0x8270f878
	ctx.lr = 0x823ABB88;
	sub_8270F878(ctx, base);
	// b 0x823abb90
	goto loc_823ABB90;
loc_823ABB8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABB90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABBA0"))) PPC_WEAK_FUNC(sub_823ABBA0);
PPC_FUNC_IMPL(__imp__sub_823ABBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30348(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30348);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abbe0
	if (!ctx.cr0.eq) goto loc_823ABBE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30348(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30348, ctx.r11.u32);
	// addi r3,r9,-18128
	ctx.r3.s64 = ctx.r9.s64 + -18128;
	// bl 0x82816528
	ctx.lr = 0x823ABBD8;
	sub_82816528(ctx, base);
	// stw r3,-30352(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30352, ctx.r3.u32);
	// b 0x823abbe4
	goto loc_823ABBE4;
loc_823ABBE0:
	// lwz r3,-30352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30352);
loc_823ABBE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABBF8"))) PPC_WEAK_FUNC(sub_823ABBF8);
PPC_FUNC_IMPL(__imp__sub_823ABBF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823abc48
	ctx.lr = 0x823ABC18;
	sub_823ABC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ABC2C;
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

__attribute__((alias("__imp__sub_823ABC48"))) PPC_WEAK_FUNC(sub_823ABC48);
PPC_FUNC_IMPL(__imp__sub_823ABC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29876
	ctx.r31.s64 = ctx.r11.s64 + -29876;
	// lwz r11,-29880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abc90
	if (!ctx.cr0.eq) goto loc_823ABC90;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30820
	ctx.r9.s64 = ctx.r9.s64 + 30820;
	// stw r11,-29880(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29880, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// bl 0x82a4c758
	ctx.lr = 0x823ABC90;
	sub_82A4C758(ctx, base);
loc_823ABC90:
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

__attribute__((alias("__imp__sub_823ABCA8"))) PPC_WEAK_FUNC(sub_823ABCA8);
PPC_FUNC_IMPL(__imp__sub_823ABCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x823ABCC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823abd04
	if (ctx.cr0.eq) goto loc_823ABD04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f730
	ctx.lr = 0x823ABCD0;
	sub_8270F730(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,30840
	ctx.r11.s64 = ctx.r11.s64 + 30840;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,31892
	ctx.r10.s64 = ctx.r10.s64 + 31892;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// b 0x823abd08
	goto loc_823ABD08;
loc_823ABD04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABD08:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABD20"))) PPC_WEAK_FUNC(sub_823ABD20);
PPC_FUNC_IMPL(__imp__sub_823ABD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30356(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30356);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abd60
	if (!ctx.cr0.eq) goto loc_823ABD60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30356(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30356, ctx.r11.u32);
	// addi r3,r9,-24024
	ctx.r3.s64 = ctx.r9.s64 + -24024;
	// bl 0x82816528
	ctx.lr = 0x823ABD58;
	sub_82816528(ctx, base);
	// stw r3,-30360(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30360, ctx.r3.u32);
	// b 0x823abd64
	goto loc_823ABD64;
loc_823ABD60:
	// lwz r3,-30360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30360);
loc_823ABD64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABD78"))) PPC_WEAK_FUNC(sub_823ABD78);
PPC_FUNC_IMPL(__imp__sub_823ABD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823abdc8
	ctx.lr = 0x823ABD98;
	sub_823ABDC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ABDAC;
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

__attribute__((alias("__imp__sub_823ABDC8"))) PPC_WEAK_FUNC(sub_823ABDC8);
PPC_FUNC_IMPL(__imp__sub_823ABDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29868
	ctx.r31.s64 = ctx.r11.s64 + -29868;
	// lwz r11,-29872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29872);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abe10
	if (!ctx.cr0.eq) goto loc_823ABE10;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,31944
	ctx.r9.s64 = ctx.r9.s64 + 31944;
	// stw r11,-29872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29872, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20048
	ctx.r3.s64 = ctx.r11.s64 + -20048;
	// bl 0x82a4c758
	ctx.lr = 0x823ABE10;
	sub_82A4C758(ctx, base);
loc_823ABE10:
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

__attribute__((alias("__imp__sub_823ABE28"))) PPC_WEAK_FUNC(sub_823ABE28);
PPC_FUNC_IMPL(__imp__sub_823ABE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x823ABE40;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823abe84
	if (ctx.cr0.eq) goto loc_823ABE84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f730
	ctx.lr = 0x823ABE50;
	sub_8270F730(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,31968
	ctx.r11.s64 = ctx.r11.s64 + 31968;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-32516
	ctx.r10.s64 = ctx.r10.s64 + -32516;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// b 0x823abe88
	goto loc_823ABE88;
loc_823ABE84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABE88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABEA0"))) PPC_WEAK_FUNC(sub_823ABEA0);
PPC_FUNC_IMPL(__imp__sub_823ABEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30364);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abee0
	if (!ctx.cr0.eq) goto loc_823ABEE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30364(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30364, ctx.r11.u32);
	// addi r3,r9,-24068
	ctx.r3.s64 = ctx.r9.s64 + -24068;
	// bl 0x82816528
	ctx.lr = 0x823ABED8;
	sub_82816528(ctx, base);
	// stw r3,-30368(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30368, ctx.r3.u32);
	// b 0x823abee4
	goto loc_823ABEE4;
loc_823ABEE0:
	// lwz r3,-30368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30368);
loc_823ABEE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABEF8"))) PPC_WEAK_FUNC(sub_823ABEF8);
PPC_FUNC_IMPL(__imp__sub_823ABEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823abf48
	ctx.lr = 0x823ABF18;
	sub_823ABF48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ABF2C;
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

__attribute__((alias("__imp__sub_823ABF48"))) PPC_WEAK_FUNC(sub_823ABF48);
PPC_FUNC_IMPL(__imp__sub_823ABF48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29860
	ctx.r31.s64 = ctx.r11.s64 + -29860;
	// lwz r11,-29864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29864);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823abf90
	if (!ctx.cr0.eq) goto loc_823ABF90;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32464
	ctx.r9.s64 = ctx.r9.s64 + -32464;
	// stw r11,-29864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29864, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20072
	ctx.r3.s64 = ctx.r11.s64 + -20072;
	// bl 0x82a4c758
	ctx.lr = 0x823ABF90;
	sub_82A4C758(ctx, base);
loc_823ABF90:
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

__attribute__((alias("__imp__sub_823ABFA8"))) PPC_WEAK_FUNC(sub_823ABFA8);
PPC_FUNC_IMPL(__imp__sub_823ABFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823ABFC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823abffc
	if (ctx.cr0.eq) goto loc_823ABFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f370
	ctx.lr = 0x823ABFD0;
	sub_8270F370(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,27720
	ctx.r11.s64 = ctx.r11.s64 + 27720;
	// addi r10,r10,28772
	ctx.r10.s64 = ctx.r10.s64 + 28772;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ac000
	goto loc_823AC000;
loc_823ABFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC018"))) PPC_WEAK_FUNC(sub_823AC018);
PPC_FUNC_IMPL(__imp__sub_823AC018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30372);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac058
	if (!ctx.cr0.eq) goto loc_823AC058;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30372, ctx.r11.u32);
	// addi r3,r9,-18080
	ctx.r3.s64 = ctx.r9.s64 + -18080;
	// bl 0x82816528
	ctx.lr = 0x823AC050;
	sub_82816528(ctx, base);
	// stw r3,-30376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30376, ctx.r3.u32);
	// b 0x823ac05c
	goto loc_823AC05C;
loc_823AC058:
	// lwz r3,-30376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30376);
loc_823AC05C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC070"))) PPC_WEAK_FUNC(sub_823AC070);
PPC_FUNC_IMPL(__imp__sub_823AC070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac0c0
	ctx.lr = 0x823AC090;
	sub_823AC0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC0A4;
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

__attribute__((alias("__imp__sub_823AC0C0"))) PPC_WEAK_FUNC(sub_823AC0C0);
PPC_FUNC_IMPL(__imp__sub_823AC0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29852
	ctx.r31.s64 = ctx.r11.s64 + -29852;
	// lwz r11,-29856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac108
	if (!ctx.cr0.eq) goto loc_823AC108;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32444
	ctx.r9.s64 = ctx.r9.s64 + -32444;
	// stw r11,-29856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// bl 0x82a4c758
	ctx.lr = 0x823AC108;
	sub_82A4C758(ctx, base);
loc_823AC108:
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

__attribute__((alias("__imp__sub_823AC120"))) PPC_WEAK_FUNC(sub_823AC120);
PPC_FUNC_IMPL(__imp__sub_823AC120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x823AC128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AC134;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ac1ac
	if (ctx.cr0.eq) goto loc_823AC1AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f370
	ctx.lr = 0x823AC144;
	sub_8270F370(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,28824
	ctx.r11.s64 = ctx.r11.s64 + 28824;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,29876
	ctx.r10.s64 = ctx.r10.s64 + 29876;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r31,1444
	ctx.r30.s64 = ctx.r31.s64 + 1444;
	// addi r3,r11,26468
	ctx.r3.s64 = ctx.r11.s64 + 26468;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x823AC18C;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x823AC1A4;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823ac1b0
	goto loc_823AC1B0;
loc_823AC1AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC1B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AC1B8"))) PPC_WEAK_FUNC(sub_823AC1B8);
PPC_FUNC_IMPL(__imp__sub_823AC1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac1f8
	if (!ctx.cr0.eq) goto loc_823AC1F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30380, ctx.r11.u32);
	// addi r3,r9,-18036
	ctx.r3.s64 = ctx.r9.s64 + -18036;
	// bl 0x82816528
	ctx.lr = 0x823AC1F0;
	sub_82816528(ctx, base);
	// stw r3,-30384(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30384, ctx.r3.u32);
	// b 0x823ac1fc
	goto loc_823AC1FC;
loc_823AC1F8:
	// lwz r3,-30384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30384);
loc_823AC1FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC210"))) PPC_WEAK_FUNC(sub_823AC210);
PPC_FUNC_IMPL(__imp__sub_823AC210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac260
	ctx.lr = 0x823AC230;
	sub_823AC260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC244;
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

__attribute__((alias("__imp__sub_823AC260"))) PPC_WEAK_FUNC(sub_823AC260);
PPC_FUNC_IMPL(__imp__sub_823AC260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29844
	ctx.r31.s64 = ctx.r11.s64 + -29844;
	// lwz r11,-29848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29848);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac2a8
	if (!ctx.cr0.eq) goto loc_823AC2A8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32424
	ctx.r9.s64 = ctx.r9.s64 + -32424;
	// stw r11,-29848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29848, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20120
	ctx.r3.s64 = ctx.r11.s64 + -20120;
	// bl 0x82a4c758
	ctx.lr = 0x823AC2A8;
	sub_82A4C758(ctx, base);
loc_823AC2A8:
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

__attribute__((alias("__imp__sub_823AC2C0"))) PPC_WEAK_FUNC(sub_823AC2C0);
PPC_FUNC_IMPL(__imp__sub_823AC2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AC2D8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ac314
	if (ctx.cr0.eq) goto loc_823AC314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f370
	ctx.lr = 0x823AC2E8;
	sub_8270F370(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,29928
	ctx.r11.s64 = ctx.r11.s64 + 29928;
	// addi r10,r10,30980
	ctx.r10.s64 = ctx.r10.s64 + 30980;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ac318
	goto loc_823AC318;
loc_823AC314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC318:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC330"))) PPC_WEAK_FUNC(sub_823AC330);
PPC_FUNC_IMPL(__imp__sub_823AC330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30388(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30388);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac370
	if (!ctx.cr0.eq) goto loc_823AC370;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30388(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30388, ctx.r11.u32);
	// addi r3,r9,-17992
	ctx.r3.s64 = ctx.r9.s64 + -17992;
	// bl 0x82816528
	ctx.lr = 0x823AC368;
	sub_82816528(ctx, base);
	// stw r3,-30392(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30392, ctx.r3.u32);
	// b 0x823ac374
	goto loc_823AC374;
loc_823AC370:
	// lwz r3,-30392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30392);
loc_823AC374:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC388"))) PPC_WEAK_FUNC(sub_823AC388);
PPC_FUNC_IMPL(__imp__sub_823AC388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac3d8
	ctx.lr = 0x823AC3A8;
	sub_823AC3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC3BC;
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

__attribute__((alias("__imp__sub_823AC3D8"))) PPC_WEAK_FUNC(sub_823AC3D8);
PPC_FUNC_IMPL(__imp__sub_823AC3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29836
	ctx.r31.s64 = ctx.r11.s64 + -29836;
	// lwz r11,-29840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac420
	if (!ctx.cr0.eq) goto loc_823AC420;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32404
	ctx.r9.s64 = ctx.r9.s64 + -32404;
	// stw r11,-29840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// bl 0x82a4c758
	ctx.lr = 0x823AC420;
	sub_82A4C758(ctx, base);
loc_823AC420:
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

__attribute__((alias("__imp__sub_823AC438"))) PPC_WEAK_FUNC(sub_823AC438);
PPC_FUNC_IMPL(__imp__sub_823AC438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AC450;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ac48c
	if (ctx.cr0.eq) goto loc_823AC48C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f370
	ctx.lr = 0x823AC460;
	sub_8270F370(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-32384
	ctx.r11.s64 = ctx.r11.s64 + -32384;
	// addi r10,r10,-31332
	ctx.r10.s64 = ctx.r10.s64 + -31332;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ac490
	goto loc_823AC490;
loc_823AC48C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC490:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC4A8"))) PPC_WEAK_FUNC(sub_823AC4A8);
PPC_FUNC_IMPL(__imp__sub_823AC4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac4e8
	if (!ctx.cr0.eq) goto loc_823AC4E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30396, ctx.r11.u32);
	// addi r3,r9,-17948
	ctx.r3.s64 = ctx.r9.s64 + -17948;
	// bl 0x82816528
	ctx.lr = 0x823AC4E0;
	sub_82816528(ctx, base);
	// stw r3,-30400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30400, ctx.r3.u32);
	// b 0x823ac4ec
	goto loc_823AC4EC;
loc_823AC4E8:
	// lwz r3,-30400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30400);
loc_823AC4EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC500"))) PPC_WEAK_FUNC(sub_823AC500);
PPC_FUNC_IMPL(__imp__sub_823AC500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac550
	ctx.lr = 0x823AC520;
	sub_823AC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC534;
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

__attribute__((alias("__imp__sub_823AC550"))) PPC_WEAK_FUNC(sub_823AC550);
PPC_FUNC_IMPL(__imp__sub_823AC550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29828
	ctx.r31.s64 = ctx.r11.s64 + -29828;
	// lwz r11,-29832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac598
	if (!ctx.cr0.eq) goto loc_823AC598;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31280
	ctx.r9.s64 = ctx.r9.s64 + -31280;
	// stw r11,-29832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20168
	ctx.r3.s64 = ctx.r11.s64 + -20168;
	// bl 0x82a4c758
	ctx.lr = 0x823AC598;
	sub_82A4C758(ctx, base);
loc_823AC598:
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

__attribute__((alias("__imp__sub_823AC5B0"))) PPC_WEAK_FUNC(sub_823AC5B0);
PPC_FUNC_IMPL(__imp__sub_823AC5B0) {
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x823AC5C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ac5d4
	if (ctx.cr0.eq) goto loc_823AC5D4;
	// bl 0x8270e4f8
	ctx.lr = 0x823AC5D0;
	sub_8270E4F8(ctx, base);
	// b 0x823ac5d8
	goto loc_823AC5D8;
loc_823AC5D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC5D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC5E8"))) PPC_WEAK_FUNC(sub_823AC5E8);
PPC_FUNC_IMPL(__imp__sub_823AC5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac628
	if (!ctx.cr0.eq) goto loc_823AC628;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30404(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30404, ctx.r11.u32);
	// addi r3,r9,-17904
	ctx.r3.s64 = ctx.r9.s64 + -17904;
	// bl 0x82816528
	ctx.lr = 0x823AC620;
	sub_82816528(ctx, base);
	// stw r3,-30408(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30408, ctx.r3.u32);
	// b 0x823ac62c
	goto loc_823AC62C;
loc_823AC628:
	// lwz r3,-30408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30408);
loc_823AC62C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC640"))) PPC_WEAK_FUNC(sub_823AC640);
PPC_FUNC_IMPL(__imp__sub_823AC640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac690
	ctx.lr = 0x823AC660;
	sub_823AC690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC674;
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

__attribute__((alias("__imp__sub_823AC690"))) PPC_WEAK_FUNC(sub_823AC690);
PPC_FUNC_IMPL(__imp__sub_823AC690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31844
	ctx.r31.s64 = ctx.r11.s64 + -31844;
	// lwz r11,-31848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31848);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac6d8
	if (!ctx.cr0.eq) goto loc_823AC6D8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31260
	ctx.r9.s64 = ctx.r9.s64 + -31260;
	// stw r11,-31848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31848, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20192
	ctx.r3.s64 = ctx.r11.s64 + -20192;
	// bl 0x82a4c758
	ctx.lr = 0x823AC6D8;
	sub_82A4C758(ctx, base);
loc_823AC6D8:
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

__attribute__((alias("__imp__sub_823AC6F0"))) PPC_WEAK_FUNC(sub_823AC6F0);
PPC_FUNC_IMPL(__imp__sub_823AC6F0) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AC704;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ac714
	if (ctx.cr0.eq) goto loc_823AC714;
	// bl 0x8270e5f0
	ctx.lr = 0x823AC710;
	sub_8270E5F0(ctx, base);
	// b 0x823ac718
	goto loc_823AC718;
loc_823AC714:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC728"))) PPC_WEAK_FUNC(sub_823AC728);
PPC_FUNC_IMPL(__imp__sub_823AC728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac768
	if (!ctx.cr0.eq) goto loc_823AC768;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30412, ctx.r11.u32);
	// addi r3,r9,-17876
	ctx.r3.s64 = ctx.r9.s64 + -17876;
	// bl 0x82816528
	ctx.lr = 0x823AC760;
	sub_82816528(ctx, base);
	// stw r3,-30416(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30416, ctx.r3.u32);
	// b 0x823ac76c
	goto loc_823AC76C;
loc_823AC768:
	// lwz r3,-30416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30416);
loc_823AC76C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC780"))) PPC_WEAK_FUNC(sub_823AC780);
PPC_FUNC_IMPL(__imp__sub_823AC780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac7d0
	ctx.lr = 0x823AC7A0;
	sub_823AC7D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC7B4;
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

__attribute__((alias("__imp__sub_823AC7D0"))) PPC_WEAK_FUNC(sub_823AC7D0);
PPC_FUNC_IMPL(__imp__sub_823AC7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31836
	ctx.r31.s64 = ctx.r11.s64 + -31836;
	// lwz r11,-31840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31840);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac818
	if (!ctx.cr0.eq) goto loc_823AC818;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31240
	ctx.r9.s64 = ctx.r9.s64 + -31240;
	// stw r11,-31840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31840, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20216
	ctx.r3.s64 = ctx.r11.s64 + -20216;
	// bl 0x82a4c758
	ctx.lr = 0x823AC818;
	sub_82A4C758(ctx, base);
loc_823AC818:
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

__attribute__((alias("__imp__sub_823AC830"))) PPC_WEAK_FUNC(sub_823AC830);
PPC_FUNC_IMPL(__imp__sub_823AC830) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AC844;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ac858
	if (ctx.cr0.eq) goto loc_823AC858;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270e8a8
	ctx.lr = 0x823AC854;
	sub_8270E8A8(ctx, base);
	// b 0x823ac85c
	goto loc_823AC85C;
loc_823AC858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC85C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC870"))) PPC_WEAK_FUNC(sub_823AC870);
PPC_FUNC_IMPL(__imp__sub_823AC870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac8b0
	if (!ctx.cr0.eq) goto loc_823AC8B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30420, ctx.r11.u32);
	// addi r3,r9,-17836
	ctx.r3.s64 = ctx.r9.s64 + -17836;
	// bl 0x82816528
	ctx.lr = 0x823AC8A8;
	sub_82816528(ctx, base);
	// stw r3,-30424(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30424, ctx.r3.u32);
	// b 0x823ac8b4
	goto loc_823AC8B4;
loc_823AC8B0:
	// lwz r3,-30424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30424);
loc_823AC8B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC8C8"))) PPC_WEAK_FUNC(sub_823AC8C8);
PPC_FUNC_IMPL(__imp__sub_823AC8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac918
	ctx.lr = 0x823AC8E8;
	sub_823AC918(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AC8FC;
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

__attribute__((alias("__imp__sub_823AC918"))) PPC_WEAK_FUNC(sub_823AC918);
PPC_FUNC_IMPL(__imp__sub_823AC918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31852
	ctx.r31.s64 = ctx.r11.s64 + -31852;
	// lwz r11,-31856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac960
	if (!ctx.cr0.eq) goto loc_823AC960;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31220
	ctx.r9.s64 = ctx.r9.s64 + -31220;
	// stw r11,-31856(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// bl 0x82a4c758
	ctx.lr = 0x823AC960;
	sub_82A4C758(ctx, base);
loc_823AC960:
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

__attribute__((alias("__imp__sub_823AC978"))) PPC_WEAK_FUNC(sub_823AC978);
PPC_FUNC_IMPL(__imp__sub_823AC978) {
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
	ctx.lr = 0x823AC98C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ac99c
	if (ctx.cr0.eq) goto loc_823AC99C;
	// bl 0x82708550
	ctx.lr = 0x823AC998;
	sub_82708550(ctx, base);
	// b 0x823ac9a0
	goto loc_823AC9A0;
loc_823AC99C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AC9A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AC9B0"))) PPC_WEAK_FUNC(sub_823AC9B0);
PPC_FUNC_IMPL(__imp__sub_823AC9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ac9f0
	if (!ctx.cr0.eq) goto loc_823AC9F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30428(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30428, ctx.r11.u32);
	// addi r3,r9,-17792
	ctx.r3.s64 = ctx.r9.s64 + -17792;
	// bl 0x82816528
	ctx.lr = 0x823AC9E8;
	sub_82816528(ctx, base);
	// stw r3,-30432(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30432, ctx.r3.u32);
	// b 0x823ac9f4
	goto loc_823AC9F4;
loc_823AC9F0:
	// lwz r3,-30432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30432);
loc_823AC9F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACA08"))) PPC_WEAK_FUNC(sub_823ACA08);
PPC_FUNC_IMPL(__imp__sub_823ACA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aca58
	ctx.lr = 0x823ACA28;
	sub_823ACA58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACA3C;
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

__attribute__((alias("__imp__sub_823ACA58"))) PPC_WEAK_FUNC(sub_823ACA58);
PPC_FUNC_IMPL(__imp__sub_823ACA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31804
	ctx.r31.s64 = ctx.r11.s64 + -31804;
	// lwz r11,-31808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acaa0
	if (!ctx.cr0.eq) goto loc_823ACAA0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31200
	ctx.r9.s64 = ctx.r9.s64 + -31200;
	// stw r11,-31808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// bl 0x82a4c758
	ctx.lr = 0x823ACAA0;
	sub_82A4C758(ctx, base);
loc_823ACAA0:
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

__attribute__((alias("__imp__sub_823ACAB8"))) PPC_WEAK_FUNC(sub_823ACAB8);
PPC_FUNC_IMPL(__imp__sub_823ACAB8) {
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x823ACACC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823acadc
	if (ctx.cr0.eq) goto loc_823ACADC;
	// bl 0x8270d5c8
	ctx.lr = 0x823ACAD8;
	sub_8270D5C8(ctx, base);
	// b 0x823acae0
	goto loc_823ACAE0;
loc_823ACADC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACAE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACAF0"))) PPC_WEAK_FUNC(sub_823ACAF0);
PPC_FUNC_IMPL(__imp__sub_823ACAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acb30
	if (!ctx.cr0.eq) goto loc_823ACB30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30436(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30436, ctx.r11.u32);
	// addi r3,r9,-17772
	ctx.r3.s64 = ctx.r9.s64 + -17772;
	// bl 0x82816528
	ctx.lr = 0x823ACB28;
	sub_82816528(ctx, base);
	// stw r3,-30440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30440, ctx.r3.u32);
	// b 0x823acb34
	goto loc_823ACB34;
loc_823ACB30:
	// lwz r3,-30440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30440);
loc_823ACB34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACB48"))) PPC_WEAK_FUNC(sub_823ACB48);
PPC_FUNC_IMPL(__imp__sub_823ACB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823acb98
	ctx.lr = 0x823ACB68;
	sub_823ACB98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACB7C;
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

__attribute__((alias("__imp__sub_823ACB98"))) PPC_WEAK_FUNC(sub_823ACB98);
PPC_FUNC_IMPL(__imp__sub_823ACB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31828
	ctx.r31.s64 = ctx.r11.s64 + -31828;
	// lwz r11,-31832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acbe0
	if (!ctx.cr0.eq) goto loc_823ACBE0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31180
	ctx.r9.s64 = ctx.r9.s64 + -31180;
	// stw r11,-31832(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31832, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// bl 0x82a4c758
	ctx.lr = 0x823ACBE0;
	sub_82A4C758(ctx, base);
loc_823ACBE0:
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

__attribute__((alias("__imp__sub_823ACBF8"))) PPC_WEAK_FUNC(sub_823ACBF8);
PPC_FUNC_IMPL(__imp__sub_823ACBF8) {
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
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x823ACC0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823acc1c
	if (ctx.cr0.eq) goto loc_823ACC1C;
	// bl 0x82710618
	ctx.lr = 0x823ACC18;
	sub_82710618(ctx, base);
	// b 0x823acc20
	goto loc_823ACC20;
loc_823ACC1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACC20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACC30"))) PPC_WEAK_FUNC(sub_823ACC30);
PPC_FUNC_IMPL(__imp__sub_823ACC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acc70
	if (!ctx.cr0.eq) goto loc_823ACC70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30444(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30444, ctx.r11.u32);
	// addi r3,r9,-17744
	ctx.r3.s64 = ctx.r9.s64 + -17744;
	// bl 0x82816528
	ctx.lr = 0x823ACC68;
	sub_82816528(ctx, base);
	// stw r3,-30448(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30448, ctx.r3.u32);
	// b 0x823acc74
	goto loc_823ACC74;
loc_823ACC70:
	// lwz r3,-30448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30448);
loc_823ACC74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACC88"))) PPC_WEAK_FUNC(sub_823ACC88);
PPC_FUNC_IMPL(__imp__sub_823ACC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823accd8
	ctx.lr = 0x823ACCA8;
	sub_823ACCD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACCBC;
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

__attribute__((alias("__imp__sub_823ACCD8"))) PPC_WEAK_FUNC(sub_823ACCD8);
PPC_FUNC_IMPL(__imp__sub_823ACCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29644
	ctx.r31.s64 = ctx.r11.s64 + -29644;
	// lwz r11,-29648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acd20
	if (!ctx.cr0.eq) goto loc_823ACD20;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31160
	ctx.r9.s64 = ctx.r9.s64 + -31160;
	// stw r11,-29648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29648, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20312
	ctx.r3.s64 = ctx.r11.s64 + -20312;
	// bl 0x82a4c758
	ctx.lr = 0x823ACD20;
	sub_82A4C758(ctx, base);
loc_823ACD20:
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

__attribute__((alias("__imp__sub_823ACD38"))) PPC_WEAK_FUNC(sub_823ACD38);
PPC_FUNC_IMPL(__imp__sub_823ACD38) {
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
	// li r3,3232
	ctx.r3.s64 = 3232;
	// bl 0x82833108
	ctx.lr = 0x823ACD50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823acdc4
	if (ctx.cr0.eq) goto loc_823ACDC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c40e0
	ctx.lr = 0x823ACD60;
	sub_826C40E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r10,r10,32176
	ctx.r10.s64 = ctx.r10.s64 + 32176;
	// lfs f0,-27804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,4480
	ctx.r11.s64 = ctx.r8.s64 + 4480;
	// addi r9,r9,-32168
	ctx.r9.s64 = ctx.r9.s64 + -32168;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r5,8840
	ctx.r5.s64 = 579338240;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,52427
	ctx.r5.u64 = ctx.r5.u64 | 52427;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x823ACDB4;
	sub_823CF190(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// b 0x823acdc8
	goto loc_823ACDC8;
loc_823ACDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACDC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACDE0"))) PPC_WEAK_FUNC(sub_823ACDE0);
PPC_FUNC_IMPL(__imp__sub_823ACDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ace20
	if (!ctx.cr0.eq) goto loc_823ACE20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30452, ctx.r11.u32);
	// addi r3,r9,-17716
	ctx.r3.s64 = ctx.r9.s64 + -17716;
	// bl 0x82816528
	ctx.lr = 0x823ACE18;
	sub_82816528(ctx, base);
	// stw r3,-30456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30456, ctx.r3.u32);
	// b 0x823ace24
	goto loc_823ACE24;
loc_823ACE20:
	// lwz r3,-30456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30456);
loc_823ACE24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACE38"))) PPC_WEAK_FUNC(sub_823ACE38);
PPC_FUNC_IMPL(__imp__sub_823ACE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ace88
	ctx.lr = 0x823ACE58;
	sub_823ACE88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACE6C;
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

__attribute__((alias("__imp__sub_823ACE88"))) PPC_WEAK_FUNC(sub_823ACE88);
PPC_FUNC_IMPL(__imp__sub_823ACE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29636
	ctx.r31.s64 = ctx.r11.s64 + -29636;
	// lwz r11,-29640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29640);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aced0
	if (!ctx.cr0.eq) goto loc_823ACED0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-31140
	ctx.r9.s64 = ctx.r9.s64 + -31140;
	// stw r11,-29640(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29640, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20336
	ctx.r3.s64 = ctx.r11.s64 + -20336;
	// bl 0x82a4c758
	ctx.lr = 0x823ACED0;
	sub_82A4C758(ctx, base);
loc_823ACED0:
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

__attribute__((alias("__imp__sub_823ACEE8"))) PPC_WEAK_FUNC(sub_823ACEE8);
PPC_FUNC_IMPL(__imp__sub_823ACEE8) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823ACEFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823acf0c
	if (ctx.cr0.eq) goto loc_823ACF0C;
	// bl 0x82711c88
	ctx.lr = 0x823ACF08;
	sub_82711C88(ctx, base);
	// b 0x823acf10
	goto loc_823ACF10;
loc_823ACF0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ACF10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACF20"))) PPC_WEAK_FUNC(sub_823ACF20);
PPC_FUNC_IMPL(__imp__sub_823ACF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30460(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30460);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823acf60
	if (!ctx.cr0.eq) goto loc_823ACF60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30460(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30460, ctx.r11.u32);
	// addi r3,r9,-17696
	ctx.r3.s64 = ctx.r9.s64 + -17696;
	// bl 0x82816528
	ctx.lr = 0x823ACF58;
	sub_82816528(ctx, base);
	// stw r3,-30464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30464, ctx.r3.u32);
	// b 0x823acf64
	goto loc_823ACF64;
loc_823ACF60:
	// lwz r3,-30464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30464);
loc_823ACF64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ACF78"))) PPC_WEAK_FUNC(sub_823ACF78);
PPC_FUNC_IMPL(__imp__sub_823ACF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823acfc8
	ctx.lr = 0x823ACF98;
	sub_823ACFC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ACFAC;
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

__attribute__((alias("__imp__sub_823ACFC8"))) PPC_WEAK_FUNC(sub_823ACFC8);
PPC_FUNC_IMPL(__imp__sub_823ACFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29820
	ctx.r31.s64 = ctx.r11.s64 + -29820;
	// lwz r11,-29824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad010
	if (!ctx.cr0.eq) goto loc_823AD010;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30012
	ctx.r9.s64 = ctx.r9.s64 + -30012;
	// stw r11,-29824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// bl 0x82a4c758
	ctx.lr = 0x823AD010;
	sub_82A4C758(ctx, base);
loc_823AD010:
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

__attribute__((alias("__imp__sub_823AD028"))) PPC_WEAK_FUNC(sub_823AD028);
PPC_FUNC_IMPL(__imp__sub_823AD028) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AD03C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ad04c
	if (ctx.cr0.eq) goto loc_823AD04C;
	// bl 0x823616b0
	ctx.lr = 0x823AD048;
	sub_823616B0(ctx, base);
	// b 0x823ad050
	goto loc_823AD050;
loc_823AD04C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD050:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD060"))) PPC_WEAK_FUNC(sub_823AD060);
PPC_FUNC_IMPL(__imp__sub_823AD060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad0a0
	if (!ctx.cr0.eq) goto loc_823AD0A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30468(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30468, ctx.r11.u32);
	// addi r3,r9,-17664
	ctx.r3.s64 = ctx.r9.s64 + -17664;
	// bl 0x82816528
	ctx.lr = 0x823AD098;
	sub_82816528(ctx, base);
	// stw r3,-30472(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30472, ctx.r3.u32);
	// b 0x823ad0a4
	goto loc_823AD0A4;
loc_823AD0A0:
	// lwz r3,-30472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30472);
loc_823AD0A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD0B8"))) PPC_WEAK_FUNC(sub_823AD0B8);
PPC_FUNC_IMPL(__imp__sub_823AD0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad108
	ctx.lr = 0x823AD0D8;
	sub_823AD108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD0EC;
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

__attribute__((alias("__imp__sub_823AD108"))) PPC_WEAK_FUNC(sub_823AD108);
PPC_FUNC_IMPL(__imp__sub_823AD108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29812
	ctx.r31.s64 = ctx.r11.s64 + -29812;
	// lwz r11,-29816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad150
	if (!ctx.cr0.eq) goto loc_823AD150;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-28888
	ctx.r9.s64 = ctx.r9.s64 + -28888;
	// stw r11,-29816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// bl 0x82a4c758
	ctx.lr = 0x823AD150;
	sub_82A4C758(ctx, base);
loc_823AD150:
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

__attribute__((alias("__imp__sub_823AD168"))) PPC_WEAK_FUNC(sub_823AD168);
PPC_FUNC_IMPL(__imp__sub_823AD168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AD180;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ad1bc
	if (ctx.cr0.eq) goto loc_823AD1BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82711c88
	ctx.lr = 0x823AD190;
	sub_82711C88(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-28864
	ctx.r11.s64 = ctx.r11.s64 + -28864;
	// addi r10,r10,-27808
	ctx.r10.s64 = ctx.r10.s64 + -27808;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ad1c0
	goto loc_823AD1C0;
loc_823AD1BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD1C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD1D8"))) PPC_WEAK_FUNC(sub_823AD1D8);
PPC_FUNC_IMPL(__imp__sub_823AD1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30476);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad218
	if (!ctx.cr0.eq) goto loc_823AD218;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30476(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30476, ctx.r11.u32);
	// addi r3,r9,-17636
	ctx.r3.s64 = ctx.r9.s64 + -17636;
	// bl 0x82816528
	ctx.lr = 0x823AD210;
	sub_82816528(ctx, base);
	// stw r3,-30480(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30480, ctx.r3.u32);
	// b 0x823ad21c
	goto loc_823AD21C;
loc_823AD218:
	// lwz r3,-30480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30480);
loc_823AD21C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD230"))) PPC_WEAK_FUNC(sub_823AD230);
PPC_FUNC_IMPL(__imp__sub_823AD230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad280
	ctx.lr = 0x823AD250;
	sub_823AD280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD264;
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

__attribute__((alias("__imp__sub_823AD280"))) PPC_WEAK_FUNC(sub_823AD280);
PPC_FUNC_IMPL(__imp__sub_823AD280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29804
	ctx.r31.s64 = ctx.r11.s64 + -29804;
	// lwz r11,-29808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29808);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad2c8
	if (!ctx.cr0.eq) goto loc_823AD2C8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27756
	ctx.r9.s64 = ctx.r9.s64 + -27756;
	// stw r11,-29808(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29808, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// bl 0x82a4c758
	ctx.lr = 0x823AD2C8;
	sub_82A4C758(ctx, base);
loc_823AD2C8:
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

__attribute__((alias("__imp__sub_823AD2E0"))) PPC_WEAK_FUNC(sub_823AD2E0);
PPC_FUNC_IMPL(__imp__sub_823AD2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AD2F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ad334
	if (ctx.cr0.eq) goto loc_823AD334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82711c88
	ctx.lr = 0x823AD308;
	sub_82711C88(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-27736
	ctx.r11.s64 = ctx.r11.s64 + -27736;
	// addi r10,r10,-26680
	ctx.r10.s64 = ctx.r10.s64 + -26680;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ad338
	goto loc_823AD338;
loc_823AD334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD338:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD350"))) PPC_WEAK_FUNC(sub_823AD350);
PPC_FUNC_IMPL(__imp__sub_823AD350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30484(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30484);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad390
	if (!ctx.cr0.eq) goto loc_823AD390;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30484(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30484, ctx.r11.u32);
	// addi r3,r9,-17592
	ctx.r3.s64 = ctx.r9.s64 + -17592;
	// bl 0x82816528
	ctx.lr = 0x823AD388;
	sub_82816528(ctx, base);
	// stw r3,-30488(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30488, ctx.r3.u32);
	// b 0x823ad394
	goto loc_823AD394;
loc_823AD390:
	// lwz r3,-30488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30488);
loc_823AD394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD3A8"))) PPC_WEAK_FUNC(sub_823AD3A8);
PPC_FUNC_IMPL(__imp__sub_823AD3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad3f8
	ctx.lr = 0x823AD3C8;
	sub_823AD3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD3DC;
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

__attribute__((alias("__imp__sub_823AD3F8"))) PPC_WEAK_FUNC(sub_823AD3F8);
PPC_FUNC_IMPL(__imp__sub_823AD3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29796
	ctx.r31.s64 = ctx.r11.s64 + -29796;
	// lwz r11,-29800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29800);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad440
	if (!ctx.cr0.eq) goto loc_823AD440;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26628
	ctx.r9.s64 = ctx.r9.s64 + -26628;
	// stw r11,-29800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29800, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20432
	ctx.r3.s64 = ctx.r11.s64 + -20432;
	// bl 0x82a4c758
	ctx.lr = 0x823AD440;
	sub_82A4C758(ctx, base);
loc_823AD440:
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

__attribute__((alias("__imp__sub_823AD458"))) PPC_WEAK_FUNC(sub_823AD458);
PPC_FUNC_IMPL(__imp__sub_823AD458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AD470;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ad4d8
	if (ctx.cr0.eq) goto loc_823AD4D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82711c88
	ctx.lr = 0x823AD480;
	sub_82711C88(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,-30816
	ctx.r11.s64 = ctx.r11.s64 + -30816;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-29760
	ctx.r10.s64 = ctx.r10.s64 + -29760;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lis r5,-12696
	ctx.r5.s64 = -832045056;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,6717
	ctx.r5.u64 = ctx.r5.u64 | 6717;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x823AD4D0;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823ad4dc
	goto loc_823AD4DC;
loc_823AD4D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD4DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD4F0"))) PPC_WEAK_FUNC(sub_823AD4F0);
PPC_FUNC_IMPL(__imp__sub_823AD4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30492(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30492);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad530
	if (!ctx.cr0.eq) goto loc_823AD530;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30492, ctx.r11.u32);
	// addi r3,r9,-17548
	ctx.r3.s64 = ctx.r9.s64 + -17548;
	// bl 0x82816528
	ctx.lr = 0x823AD528;
	sub_82816528(ctx, base);
	// stw r3,-30496(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30496, ctx.r3.u32);
	// b 0x823ad534
	goto loc_823AD534;
loc_823AD530:
	// lwz r3,-30496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30496);
loc_823AD534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD548"))) PPC_WEAK_FUNC(sub_823AD548);
PPC_FUNC_IMPL(__imp__sub_823AD548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad598
	ctx.lr = 0x823AD568;
	sub_823AD598(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD57C;
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

__attribute__((alias("__imp__sub_823AD598"))) PPC_WEAK_FUNC(sub_823AD598);
PPC_FUNC_IMPL(__imp__sub_823AD598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29788
	ctx.r31.s64 = ctx.r11.s64 + -29788;
	// lwz r11,-29792(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29792);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad5e0
	if (!ctx.cr0.eq) goto loc_823AD5E0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26608
	ctx.r9.s64 = ctx.r9.s64 + -26608;
	// stw r11,-29792(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29792, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20456
	ctx.r3.s64 = ctx.r11.s64 + -20456;
	// bl 0x82a4c758
	ctx.lr = 0x823AD5E0;
	sub_82A4C758(ctx, base);
loc_823AD5E0:
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

__attribute__((alias("__imp__sub_823AD5F8"))) PPC_WEAK_FUNC(sub_823AD5F8);
PPC_FUNC_IMPL(__imp__sub_823AD5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x823AD610;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ad678
	if (ctx.cr0.eq) goto loc_823AD678;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f370
	ctx.lr = 0x823AD620;
	sub_8270F370(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,31032
	ctx.r11.s64 = ctx.r11.s64 + 31032;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,32084
	ctx.r10.s64 = ctx.r10.s64 + 32084;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lis r5,22865
	ctx.r5.s64 = 1498480640;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,36529
	ctx.r5.u64 = ctx.r5.u64 | 36529;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x823AD670;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823ad67c
	goto loc_823AD67C;
loc_823AD678:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD67C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

