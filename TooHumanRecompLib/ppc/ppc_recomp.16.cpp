#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823AD690"))) PPC_WEAK_FUNC(sub_823AD690);
PPC_FUNC_IMPL(__imp__sub_823AD690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad6d0
	if (!ctx.cr0.eq) goto loc_823AD6D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30500, ctx.r11.u32);
	// addi r3,r9,-17520
	ctx.r3.s64 = ctx.r9.s64 + -17520;
	// bl 0x82816528
	ctx.lr = 0x823AD6C8;
	sub_82816528(ctx, base);
	// stw r3,-30504(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30504, ctx.r3.u32);
	// b 0x823ad6d4
	goto loc_823AD6D4;
loc_823AD6D0:
	// lwz r3,-30504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30504);
loc_823AD6D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD6E8"))) PPC_WEAK_FUNC(sub_823AD6E8);
PPC_FUNC_IMPL(__imp__sub_823AD6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad738
	ctx.lr = 0x823AD708;
	sub_823AD738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD71C;
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

__attribute__((alias("__imp__sub_823AD738"))) PPC_WEAK_FUNC(sub_823AD738);
PPC_FUNC_IMPL(__imp__sub_823AD738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31868
	ctx.r31.s64 = ctx.r11.s64 + -31868;
	// lwz r11,-31872(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31872);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad780
	if (!ctx.cr0.eq) goto loc_823AD780;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26588
	ctx.r9.s64 = ctx.r9.s64 + -26588;
	// stw r11,-31872(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31872, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20480
	ctx.r3.s64 = ctx.r11.s64 + -20480;
	// bl 0x82a4c758
	ctx.lr = 0x823AD780;
	sub_82A4C758(ctx, base);
loc_823AD780:
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

__attribute__((alias("__imp__sub_823AD798"))) PPC_WEAK_FUNC(sub_823AD798);
PPC_FUNC_IMPL(__imp__sub_823AD798) {
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
	ctx.lr = 0x823AD7AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ad7bc
	if (ctx.cr0.eq) goto loc_823AD7BC;
	// bl 0x8270eb70
	ctx.lr = 0x823AD7B8;
	sub_8270EB70(ctx, base);
	// b 0x823ad7c0
	goto loc_823AD7C0;
loc_823AD7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD7C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD7D0"))) PPC_WEAK_FUNC(sub_823AD7D0);
PPC_FUNC_IMPL(__imp__sub_823AD7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad810
	if (!ctx.cr0.eq) goto loc_823AD810;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30508, ctx.r11.u32);
	// addi r3,r9,-17496
	ctx.r3.s64 = ctx.r9.s64 + -17496;
	// bl 0x82816528
	ctx.lr = 0x823AD808;
	sub_82816528(ctx, base);
	// stw r3,-30512(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30512, ctx.r3.u32);
	// b 0x823ad814
	goto loc_823AD814;
loc_823AD810:
	// lwz r3,-30512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30512);
loc_823AD814:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD828"))) PPC_WEAK_FUNC(sub_823AD828);
PPC_FUNC_IMPL(__imp__sub_823AD828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad878
	ctx.lr = 0x823AD848;
	sub_823AD878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD85C;
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

__attribute__((alias("__imp__sub_823AD878"))) PPC_WEAK_FUNC(sub_823AD878);
PPC_FUNC_IMPL(__imp__sub_823AD878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31860
	ctx.r31.s64 = ctx.r11.s64 + -31860;
	// lwz r11,-31864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31864);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad8c0
	if (!ctx.cr0.eq) goto loc_823AD8C0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26568
	ctx.r9.s64 = ctx.r9.s64 + -26568;
	// stw r11,-31864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31864, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20504
	ctx.r3.s64 = ctx.r11.s64 + -20504;
	// bl 0x82a4c758
	ctx.lr = 0x823AD8C0;
	sub_82A4C758(ctx, base);
loc_823AD8C0:
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

__attribute__((alias("__imp__sub_823AD8D8"))) PPC_WEAK_FUNC(sub_823AD8D8);
PPC_FUNC_IMPL(__imp__sub_823AD8D8) {
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
	ctx.lr = 0x823AD8EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ad8fc
	if (ctx.cr0.eq) goto loc_823AD8FC;
	// bl 0x8270dd70
	ctx.lr = 0x823AD8F8;
	sub_8270DD70(ctx, base);
	// b 0x823ad900
	goto loc_823AD900;
loc_823AD8FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD900:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD910"))) PPC_WEAK_FUNC(sub_823AD910);
PPC_FUNC_IMPL(__imp__sub_823AD910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30516);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ad950
	if (!ctx.cr0.eq) goto loc_823AD950;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30516(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30516, ctx.r11.u32);
	// addi r3,r9,-17464
	ctx.r3.s64 = ctx.r9.s64 + -17464;
	// bl 0x82816528
	ctx.lr = 0x823AD948;
	sub_82816528(ctx, base);
	// stw r3,-30520(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30520, ctx.r3.u32);
	// b 0x823ad954
	goto loc_823AD954;
loc_823AD950:
	// lwz r3,-30520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30520);
loc_823AD954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AD968"))) PPC_WEAK_FUNC(sub_823AD968);
PPC_FUNC_IMPL(__imp__sub_823AD968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad9b8
	ctx.lr = 0x823AD988;
	sub_823AD9B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AD99C;
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

__attribute__((alias("__imp__sub_823AD9B8"))) PPC_WEAK_FUNC(sub_823AD9B8);
PPC_FUNC_IMPL(__imp__sub_823AD9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31140
	ctx.r31.s64 = ctx.r11.s64 + -31140;
	// lwz r11,-31144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ada00
	if (!ctx.cr0.eq) goto loc_823ADA00;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26548
	ctx.r9.s64 = ctx.r9.s64 + -26548;
	// stw r11,-31144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31144, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20528
	ctx.r3.s64 = ctx.r11.s64 + -20528;
	// bl 0x82a4c758
	ctx.lr = 0x823ADA00;
	sub_82A4C758(ctx, base);
loc_823ADA00:
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

__attribute__((alias("__imp__sub_823ADA18"))) PPC_WEAK_FUNC(sub_823ADA18);
PPC_FUNC_IMPL(__imp__sub_823ADA18) {
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
	ctx.lr = 0x823ADA2C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ada3c
	if (ctx.cr0.eq) goto loc_823ADA3C;
	// bl 0x8270de60
	ctx.lr = 0x823ADA38;
	sub_8270DE60(ctx, base);
	// b 0x823ada40
	goto loc_823ADA40;
loc_823ADA3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADA40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADA50"))) PPC_WEAK_FUNC(sub_823ADA50);
PPC_FUNC_IMPL(__imp__sub_823ADA50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ada90
	if (!ctx.cr0.eq) goto loc_823ADA90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30524, ctx.r11.u32);
	// addi r3,r9,-17436
	ctx.r3.s64 = ctx.r9.s64 + -17436;
	// bl 0x82816528
	ctx.lr = 0x823ADA88;
	sub_82816528(ctx, base);
	// stw r3,-30528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30528, ctx.r3.u32);
	// b 0x823ada94
	goto loc_823ADA94;
loc_823ADA90:
	// lwz r3,-30528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30528);
loc_823ADA94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADAA8"))) PPC_WEAK_FUNC(sub_823ADAA8);
PPC_FUNC_IMPL(__imp__sub_823ADAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adaf8
	ctx.lr = 0x823ADAC8;
	sub_823ADAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ADADC;
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

__attribute__((alias("__imp__sub_823ADAF8"))) PPC_WEAK_FUNC(sub_823ADAF8);
PPC_FUNC_IMPL(__imp__sub_823ADAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31132
	ctx.r31.s64 = ctx.r11.s64 + -31132;
	// lwz r11,-31136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823adb40
	if (!ctx.cr0.eq) goto loc_823ADB40;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26528
	ctx.r9.s64 = ctx.r9.s64 + -26528;
	// stw r11,-31136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31136, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20552
	ctx.r3.s64 = ctx.r11.s64 + -20552;
	// bl 0x82a4c758
	ctx.lr = 0x823ADB40;
	sub_82A4C758(ctx, base);
loc_823ADB40:
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

__attribute__((alias("__imp__sub_823ADB58"))) PPC_WEAK_FUNC(sub_823ADB58);
PPC_FUNC_IMPL(__imp__sub_823ADB58) {
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
	ctx.lr = 0x823ADB6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823adb7c
	if (ctx.cr0.eq) goto loc_823ADB7C;
	// bl 0x8270df10
	ctx.lr = 0x823ADB78;
	sub_8270DF10(ctx, base);
	// b 0x823adb80
	goto loc_823ADB80;
loc_823ADB7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADB80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADB90"))) PPC_WEAK_FUNC(sub_823ADB90);
PPC_FUNC_IMPL(__imp__sub_823ADB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823adbd0
	if (!ctx.cr0.eq) goto loc_823ADBD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30532(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30532, ctx.r11.u32);
	// addi r3,r9,-17408
	ctx.r3.s64 = ctx.r9.s64 + -17408;
	// bl 0x82816528
	ctx.lr = 0x823ADBC8;
	sub_82816528(ctx, base);
	// stw r3,-30536(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30536, ctx.r3.u32);
	// b 0x823adbd4
	goto loc_823ADBD4;
loc_823ADBD0:
	// lwz r3,-30536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30536);
loc_823ADBD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADBE8"))) PPC_WEAK_FUNC(sub_823ADBE8);
PPC_FUNC_IMPL(__imp__sub_823ADBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adc38
	ctx.lr = 0x823ADC08;
	sub_823ADC38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ADC1C;
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

__attribute__((alias("__imp__sub_823ADC38"))) PPC_WEAK_FUNC(sub_823ADC38);
PPC_FUNC_IMPL(__imp__sub_823ADC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31124
	ctx.r31.s64 = ctx.r11.s64 + -31124;
	// lwz r11,-31128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823adc80
	if (!ctx.cr0.eq) goto loc_823ADC80;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26508
	ctx.r9.s64 = ctx.r9.s64 + -26508;
	// stw r11,-31128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31128, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20576
	ctx.r3.s64 = ctx.r11.s64 + -20576;
	// bl 0x82a4c758
	ctx.lr = 0x823ADC80;
	sub_82A4C758(ctx, base);
loc_823ADC80:
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

__attribute__((alias("__imp__sub_823ADC98"))) PPC_WEAK_FUNC(sub_823ADC98);
PPC_FUNC_IMPL(__imp__sub_823ADC98) {
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
	ctx.lr = 0x823ADCAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823adcbc
	if (ctx.cr0.eq) goto loc_823ADCBC;
	// bl 0x8270dfd0
	ctx.lr = 0x823ADCB8;
	sub_8270DFD0(ctx, base);
	// b 0x823adcc0
	goto loc_823ADCC0;
loc_823ADCBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADCC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADCD0"))) PPC_WEAK_FUNC(sub_823ADCD0);
PPC_FUNC_IMPL(__imp__sub_823ADCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823add10
	if (!ctx.cr0.eq) goto loc_823ADD10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30540(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30540, ctx.r11.u32);
	// addi r3,r9,-17380
	ctx.r3.s64 = ctx.r9.s64 + -17380;
	// bl 0x82816528
	ctx.lr = 0x823ADD08;
	sub_82816528(ctx, base);
	// stw r3,-30544(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30544, ctx.r3.u32);
	// b 0x823add14
	goto loc_823ADD14;
loc_823ADD10:
	// lwz r3,-30544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30544);
loc_823ADD14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADD28"))) PPC_WEAK_FUNC(sub_823ADD28);
PPC_FUNC_IMPL(__imp__sub_823ADD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823add78
	ctx.lr = 0x823ADD48;
	sub_823ADD78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ADD5C;
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

__attribute__((alias("__imp__sub_823ADD78"))) PPC_WEAK_FUNC(sub_823ADD78);
PPC_FUNC_IMPL(__imp__sub_823ADD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31116
	ctx.r31.s64 = ctx.r11.s64 + -31116;
	// lwz r11,-31120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823addc0
	if (!ctx.cr0.eq) goto loc_823ADDC0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26488
	ctx.r9.s64 = ctx.r9.s64 + -26488;
	// stw r11,-31120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31120, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20600
	ctx.r3.s64 = ctx.r11.s64 + -20600;
	// bl 0x82a4c758
	ctx.lr = 0x823ADDC0;
	sub_82A4C758(ctx, base);
loc_823ADDC0:
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

__attribute__((alias("__imp__sub_823ADDD8"))) PPC_WEAK_FUNC(sub_823ADDD8);
PPC_FUNC_IMPL(__imp__sub_823ADDD8) {
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
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x823ADDEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ade00
	if (ctx.cr0.eq) goto loc_823ADE00;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270d0f0
	ctx.lr = 0x823ADDFC;
	sub_8270D0F0(ctx, base);
	// b 0x823ade04
	goto loc_823ADE04;
loc_823ADE00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADE04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADE18"))) PPC_WEAK_FUNC(sub_823ADE18);
PPC_FUNC_IMPL(__imp__sub_823ADE18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30548);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ade58
	if (!ctx.cr0.eq) goto loc_823ADE58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30548, ctx.r11.u32);
	// addi r3,r9,-17348
	ctx.r3.s64 = ctx.r9.s64 + -17348;
	// bl 0x82816528
	ctx.lr = 0x823ADE50;
	sub_82816528(ctx, base);
	// stw r3,-30552(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30552, ctx.r3.u32);
	// b 0x823ade5c
	goto loc_823ADE5C;
loc_823ADE58:
	// lwz r3,-30552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30552);
loc_823ADE5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADE70"))) PPC_WEAK_FUNC(sub_823ADE70);
PPC_FUNC_IMPL(__imp__sub_823ADE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adec0
	ctx.lr = 0x823ADE90;
	sub_823ADEC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ADEA4;
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

__attribute__((alias("__imp__sub_823ADEC0"))) PPC_WEAK_FUNC(sub_823ADEC0);
PPC_FUNC_IMPL(__imp__sub_823ADEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31692
	ctx.r31.s64 = ctx.r11.s64 + -31692;
	// lwz r11,-31696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31696);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823adf08
	if (!ctx.cr0.eq) goto loc_823ADF08;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26468
	ctx.r9.s64 = ctx.r9.s64 + -26468;
	// stw r11,-31696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31696, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20624
	ctx.r3.s64 = ctx.r11.s64 + -20624;
	// bl 0x82a4c758
	ctx.lr = 0x823ADF08;
	sub_82A4C758(ctx, base);
loc_823ADF08:
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

__attribute__((alias("__imp__sub_823ADF20"))) PPC_WEAK_FUNC(sub_823ADF20);
PPC_FUNC_IMPL(__imp__sub_823ADF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823ADF38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823adf7c
	if (ctx.cr0.eq) goto loc_823ADF7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826c5ee0
	ctx.lr = 0x823ADF48;
	sub_826C5EE0(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,-26448
	ctx.r11.s64 = ctx.r11.s64 + -26448;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-25260
	ctx.r10.s64 = ctx.r10.s64 + -25260;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// b 0x823adf80
	goto loc_823ADF80;
loc_823ADF7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADF80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADF98"))) PPC_WEAK_FUNC(sub_823ADF98);
PPC_FUNC_IMPL(__imp__sub_823ADF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30556);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823adfd8
	if (!ctx.cr0.eq) goto loc_823ADFD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30556, ctx.r11.u32);
	// addi r3,r9,-17324
	ctx.r3.s64 = ctx.r9.s64 + -17324;
	// bl 0x82816528
	ctx.lr = 0x823ADFD0;
	sub_82816528(ctx, base);
	// stw r3,-30560(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30560, ctx.r3.u32);
	// b 0x823adfdc
	goto loc_823ADFDC;
loc_823ADFD8:
	// lwz r3,-30560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30560);
loc_823ADFDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ADFF0"))) PPC_WEAK_FUNC(sub_823ADFF0);
PPC_FUNC_IMPL(__imp__sub_823ADFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae040
	ctx.lr = 0x823AE010;
	sub_823AE040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE024;
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

__attribute__((alias("__imp__sub_823AE040"))) PPC_WEAK_FUNC(sub_823AE040);
PPC_FUNC_IMPL(__imp__sub_823AE040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31708
	ctx.r31.s64 = ctx.r11.s64 + -31708;
	// lwz r11,-31712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31712);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae088
	if (!ctx.cr0.eq) goto loc_823AE088;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25208
	ctx.r9.s64 = ctx.r9.s64 + -25208;
	// stw r11,-31712(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20648
	ctx.r3.s64 = ctx.r11.s64 + -20648;
	// bl 0x82a4c758
	ctx.lr = 0x823AE088;
	sub_82A4C758(ctx, base);
loc_823AE088:
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

__attribute__((alias("__imp__sub_823AE0A0"))) PPC_WEAK_FUNC(sub_823AE0A0);
PPC_FUNC_IMPL(__imp__sub_823AE0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x823AE0B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ae104
	if (ctx.cr0.eq) goto loc_823AE104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82710618
	ctx.lr = 0x823AE0C8;
	sub_82710618(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,10600
	ctx.r11.s64 = ctx.r11.s64 + 10600;
	// addi r10,r10,11640
	ctx.r10.s64 = ctx.r10.s64 + 11640;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,9452
	ctx.r3.s64 = ctx.r11.s64 + 9452;
	// bl 0x82816528
	ctx.lr = 0x823AE0F8;
	sub_82816528(ctx, base);
	// stw r3,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823ae108
	goto loc_823AE108;
loc_823AE104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE108:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE120"))) PPC_WEAK_FUNC(sub_823AE120);
PPC_FUNC_IMPL(__imp__sub_823AE120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30564);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae160
	if (!ctx.cr0.eq) goto loc_823AE160;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30564, ctx.r11.u32);
	// addi r3,r9,-17296
	ctx.r3.s64 = ctx.r9.s64 + -17296;
	// bl 0x82816528
	ctx.lr = 0x823AE158;
	sub_82816528(ctx, base);
	// stw r3,-30568(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30568, ctx.r3.u32);
	// b 0x823ae164
	goto loc_823AE164;
loc_823AE160:
	// lwz r3,-30568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30568);
loc_823AE164:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE178"))) PPC_WEAK_FUNC(sub_823AE178);
PPC_FUNC_IMPL(__imp__sub_823AE178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae1c8
	ctx.lr = 0x823AE198;
	sub_823AE1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE1AC;
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

__attribute__((alias("__imp__sub_823AE1C8"))) PPC_WEAK_FUNC(sub_823AE1C8);
PPC_FUNC_IMPL(__imp__sub_823AE1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31700
	ctx.r31.s64 = ctx.r11.s64 + -31700;
	// lwz r11,-31704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31704);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae210
	if (!ctx.cr0.eq) goto loc_823AE210;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25188
	ctx.r9.s64 = ctx.r9.s64 + -25188;
	// stw r11,-31704(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31704, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20672
	ctx.r3.s64 = ctx.r11.s64 + -20672;
	// bl 0x82a4c758
	ctx.lr = 0x823AE210;
	sub_82A4C758(ctx, base);
loc_823AE210:
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

__attribute__((alias("__imp__sub_823AE228"))) PPC_WEAK_FUNC(sub_823AE228);
PPC_FUNC_IMPL(__imp__sub_823AE228) {
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
	ctx.lr = 0x823AE23C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ae24c
	if (ctx.cr0.eq) goto loc_823AE24C;
	// bl 0x82709060
	ctx.lr = 0x823AE248;
	sub_82709060(ctx, base);
	// b 0x823ae250
	goto loc_823AE250;
loc_823AE24C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE260"))) PPC_WEAK_FUNC(sub_823AE260);
PPC_FUNC_IMPL(__imp__sub_823AE260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae2a0
	if (!ctx.cr0.eq) goto loc_823AE2A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30572(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30572, ctx.r11.u32);
	// addi r3,r9,-17264
	ctx.r3.s64 = ctx.r9.s64 + -17264;
	// bl 0x82816528
	ctx.lr = 0x823AE298;
	sub_82816528(ctx, base);
	// stw r3,-30576(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30576, ctx.r3.u32);
	// b 0x823ae2a4
	goto loc_823AE2A4;
loc_823AE2A0:
	// lwz r3,-30576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30576);
loc_823AE2A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE2B8"))) PPC_WEAK_FUNC(sub_823AE2B8);
PPC_FUNC_IMPL(__imp__sub_823AE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae308
	ctx.lr = 0x823AE2D8;
	sub_823AE308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE2EC;
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

__attribute__((alias("__imp__sub_823AE308"))) PPC_WEAK_FUNC(sub_823AE308);
PPC_FUNC_IMPL(__imp__sub_823AE308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31508
	ctx.r31.s64 = ctx.r11.s64 + -31508;
	// lwz r11,-31512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae350
	if (!ctx.cr0.eq) goto loc_823AE350;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25168
	ctx.r9.s64 = ctx.r9.s64 + -25168;
	// stw r11,-31512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31512, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20696
	ctx.r3.s64 = ctx.r11.s64 + -20696;
	// bl 0x82a4c758
	ctx.lr = 0x823AE350;
	sub_82A4C758(ctx, base);
loc_823AE350:
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

__attribute__((alias("__imp__sub_823AE368"))) PPC_WEAK_FUNC(sub_823AE368);
PPC_FUNC_IMPL(__imp__sub_823AE368) {
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
	ctx.lr = 0x823AE37C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ae38c
	if (ctx.cr0.eq) goto loc_823AE38C;
	// bl 0x8270ce38
	ctx.lr = 0x823AE388;
	sub_8270CE38(ctx, base);
	// b 0x823ae390
	goto loc_823AE390;
loc_823AE38C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE390:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE3A0"))) PPC_WEAK_FUNC(sub_823AE3A0);
PPC_FUNC_IMPL(__imp__sub_823AE3A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae3e0
	if (!ctx.cr0.eq) goto loc_823AE3E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30580(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30580, ctx.r11.u32);
	// addi r3,r9,-17232
	ctx.r3.s64 = ctx.r9.s64 + -17232;
	// bl 0x82816528
	ctx.lr = 0x823AE3D8;
	sub_82816528(ctx, base);
	// stw r3,-30584(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30584, ctx.r3.u32);
	// b 0x823ae3e4
	goto loc_823AE3E4;
loc_823AE3E0:
	// lwz r3,-30584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30584);
loc_823AE3E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE3F8"))) PPC_WEAK_FUNC(sub_823AE3F8);
PPC_FUNC_IMPL(__imp__sub_823AE3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae448
	ctx.lr = 0x823AE418;
	sub_823AE448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE42C;
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

__attribute__((alias("__imp__sub_823AE448"))) PPC_WEAK_FUNC(sub_823AE448);
PPC_FUNC_IMPL(__imp__sub_823AE448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31820
	ctx.r31.s64 = ctx.r11.s64 + -31820;
	// lwz r11,-31824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae490
	if (!ctx.cr0.eq) goto loc_823AE490;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25148
	ctx.r9.s64 = ctx.r9.s64 + -25148;
	// stw r11,-31824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31824, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20720
	ctx.r3.s64 = ctx.r11.s64 + -20720;
	// bl 0x82a4c758
	ctx.lr = 0x823AE490;
	sub_82A4C758(ctx, base);
loc_823AE490:
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

__attribute__((alias("__imp__sub_823AE4A8"))) PPC_WEAK_FUNC(sub_823AE4A8);
PPC_FUNC_IMPL(__imp__sub_823AE4A8) {
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
	ctx.lr = 0x823AE4BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ae4d0
	if (ctx.cr0.eq) goto loc_823AE4D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8270af50
	ctx.lr = 0x823AE4CC;
	sub_8270AF50(ctx, base);
	// b 0x823ae4d4
	goto loc_823AE4D4;
loc_823AE4D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE4D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE4E8"))) PPC_WEAK_FUNC(sub_823AE4E8);
PPC_FUNC_IMPL(__imp__sub_823AE4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30588);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae528
	if (!ctx.cr0.eq) goto loc_823AE528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30588, ctx.r11.u32);
	// addi r3,r9,-17204
	ctx.r3.s64 = ctx.r9.s64 + -17204;
	// bl 0x82816528
	ctx.lr = 0x823AE520;
	sub_82816528(ctx, base);
	// stw r3,-30592(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30592, ctx.r3.u32);
	// b 0x823ae52c
	goto loc_823AE52C;
loc_823AE528:
	// lwz r3,-30592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30592);
loc_823AE52C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE540"))) PPC_WEAK_FUNC(sub_823AE540);
PPC_FUNC_IMPL(__imp__sub_823AE540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae590
	ctx.lr = 0x823AE560;
	sub_823AE590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE574;
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

__attribute__((alias("__imp__sub_823AE590"))) PPC_WEAK_FUNC(sub_823AE590);
PPC_FUNC_IMPL(__imp__sub_823AE590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31812
	ctx.r31.s64 = ctx.r11.s64 + -31812;
	// lwz r11,-31816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae5d8
	if (!ctx.cr0.eq) goto loc_823AE5D8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25128
	ctx.r9.s64 = ctx.r9.s64 + -25128;
	// stw r11,-31816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31816, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20744
	ctx.r3.s64 = ctx.r11.s64 + -20744;
	// bl 0x82a4c758
	ctx.lr = 0x823AE5D8;
	sub_82A4C758(ctx, base);
loc_823AE5D8:
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

__attribute__((alias("__imp__sub_823AE5F0"))) PPC_WEAK_FUNC(sub_823AE5F0);
PPC_FUNC_IMPL(__imp__sub_823AE5F0) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x823AE608;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ae660
	if (ctx.cr0.eq) goto loc_823AE660;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270b320
	ctx.lr = 0x823AE61C;
	sub_8270B320(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20396(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,-30896
	ctx.r10.s64 = ctx.r8.s64 + -30896;
	// addi r9,r9,-31944
	ctx.r9.s64 = ctx.r9.s64 + -31944;
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// addi r8,r7,-30844
	ctx.r8.s64 = ctx.r7.s64 + -30844;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// b 0x823ae664
	goto loc_823AE664;
loc_823AE660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE678"))) PPC_WEAK_FUNC(sub_823AE678);
PPC_FUNC_IMPL(__imp__sub_823AE678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae6b8
	if (!ctx.cr0.eq) goto loc_823AE6B8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30596, ctx.r11.u32);
	// addi r3,r9,-17172
	ctx.r3.s64 = ctx.r9.s64 + -17172;
	// bl 0x82816528
	ctx.lr = 0x823AE6B0;
	sub_82816528(ctx, base);
	// stw r3,-30600(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30600, ctx.r3.u32);
	// b 0x823ae6bc
	goto loc_823AE6BC;
loc_823AE6B8:
	// lwz r3,-30600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30600);
loc_823AE6BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE6D0"))) PPC_WEAK_FUNC(sub_823AE6D0);
PPC_FUNC_IMPL(__imp__sub_823AE6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae720
	ctx.lr = 0x823AE6F0;
	sub_823AE720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE704;
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

__attribute__((alias("__imp__sub_823AE720"))) PPC_WEAK_FUNC(sub_823AE720);
PPC_FUNC_IMPL(__imp__sub_823AE720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31516
	ctx.r31.s64 = ctx.r11.s64 + -31516;
	// lwz r11,-31520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31520);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae768
	if (!ctx.cr0.eq) goto loc_823AE768;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25108
	ctx.r9.s64 = ctx.r9.s64 + -25108;
	// stw r11,-31520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31520, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20768
	ctx.r3.s64 = ctx.r11.s64 + -20768;
	// bl 0x82a4c758
	ctx.lr = 0x823AE768;
	sub_82A4C758(ctx, base);
loc_823AE768:
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

__attribute__((alias("__imp__sub_823AE780"))) PPC_WEAK_FUNC(sub_823AE780);
PPC_FUNC_IMPL(__imp__sub_823AE780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x823AE798;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ae7d8
	if (ctx.cr0.eq) goto loc_823AE7D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270b320
	ctx.lr = 0x823AE7AC;
	sub_8270B320(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// addi r10,r10,-24036
	ctx.r10.s64 = ctx.r10.s64 + -24036;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823ae7dc
	goto loc_823AE7DC;
loc_823AE7D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE7DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE7F0"))) PPC_WEAK_FUNC(sub_823AE7F0);
PPC_FUNC_IMPL(__imp__sub_823AE7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30604);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae830
	if (!ctx.cr0.eq) goto loc_823AE830;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30604, ctx.r11.u32);
	// addi r3,r9,-17148
	ctx.r3.s64 = ctx.r9.s64 + -17148;
	// bl 0x82816528
	ctx.lr = 0x823AE828;
	sub_82816528(ctx, base);
	// stw r3,-30608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30608, ctx.r3.u32);
	// b 0x823ae834
	goto loc_823AE834;
loc_823AE830:
	// lwz r3,-30608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30608);
loc_823AE834:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE848"))) PPC_WEAK_FUNC(sub_823AE848);
PPC_FUNC_IMPL(__imp__sub_823AE848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae898
	ctx.lr = 0x823AE868;
	sub_823AE898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AE87C;
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

__attribute__((alias("__imp__sub_823AE898"))) PPC_WEAK_FUNC(sub_823AE898);
PPC_FUNC_IMPL(__imp__sub_823AE898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31500
	ctx.r31.s64 = ctx.r11.s64 + -31500;
	// lwz r11,-31504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae8e0
	if (!ctx.cr0.eq) goto loc_823AE8E0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23984
	ctx.r9.s64 = ctx.r9.s64 + -23984;
	// stw r11,-31504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31504, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20792
	ctx.r3.s64 = ctx.r11.s64 + -20792;
	// bl 0x82a4c758
	ctx.lr = 0x823AE8E0;
	sub_82A4C758(ctx, base);
loc_823AE8E0:
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

__attribute__((alias("__imp__sub_823AE8F8"))) PPC_WEAK_FUNC(sub_823AE8F8);
PPC_FUNC_IMPL(__imp__sub_823AE8F8) {
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
	// li r3,1632
	ctx.r3.s64 = 1632;
	// bl 0x82833108
	ctx.lr = 0x823AE910;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ae980
	if (ctx.cr0.eq) goto loc_823AE980;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270b320
	ctx.lr = 0x823AE924;
	sub_8270B320(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,13024
	ctx.r11.s64 = ctx.r11.s64 + 13024;
	// addi r10,r10,14068
	ctx.r10.s64 = ctx.r10.s64 + 14068;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r9,r9,14120
	ctx.r9.s64 = ctx.r9.s64 + 14120;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,20396(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20396);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// b 0x823ae984
	goto loc_823AE984;
loc_823AE980:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE984:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE998"))) PPC_WEAK_FUNC(sub_823AE998);
PPC_FUNC_IMPL(__imp__sub_823AE998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30612);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ae9d8
	if (!ctx.cr0.eq) goto loc_823AE9D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30612, ctx.r11.u32);
	// addi r3,r9,-17132
	ctx.r3.s64 = ctx.r9.s64 + -17132;
	// bl 0x82816528
	ctx.lr = 0x823AE9D0;
	sub_82816528(ctx, base);
	// stw r3,-30616(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30616, ctx.r3.u32);
	// b 0x823ae9dc
	goto loc_823AE9DC;
loc_823AE9D8:
	// lwz r3,-30616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30616);
loc_823AE9DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE9F0"))) PPC_WEAK_FUNC(sub_823AE9F0);
PPC_FUNC_IMPL(__imp__sub_823AE9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aea40
	ctx.lr = 0x823AEA10;
	sub_823AEA40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AEA24;
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

__attribute__((alias("__imp__sub_823AEA40"))) PPC_WEAK_FUNC(sub_823AEA40);
PPC_FUNC_IMPL(__imp__sub_823AEA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-31484
	ctx.r31.s64 = ctx.r11.s64 + -31484;
	// lwz r11,-31488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aea88
	if (!ctx.cr0.eq) goto loc_823AEA88;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23964
	ctx.r9.s64 = ctx.r9.s64 + -23964;
	// stw r11,-31488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31488, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20816
	ctx.r3.s64 = ctx.r11.s64 + -20816;
	// bl 0x82a4c758
	ctx.lr = 0x823AEA88;
	sub_82A4C758(ctx, base);
loc_823AEA88:
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

__attribute__((alias("__imp__sub_823AEAA0"))) PPC_WEAK_FUNC(sub_823AEAA0);
PPC_FUNC_IMPL(__imp__sub_823AEAA0) {
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
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x823AEAB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aeac4
	if (ctx.cr0.eq) goto loc_823AEAC4;
	// bl 0x824fa980
	ctx.lr = 0x823AEAC0;
	sub_824FA980(ctx, base);
	// b 0x823aeac8
	goto loc_823AEAC8;
loc_823AEAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AEAC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEAD8"))) PPC_WEAK_FUNC(sub_823AEAD8);
PPC_FUNC_IMPL(__imp__sub_823AEAD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1568
	ctx.r3.s64 = 1568;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEAE0"))) PPC_WEAK_FUNC(sub_823AEAE0);
PPC_FUNC_IMPL(__imp__sub_823AEAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aeb20
	if (!ctx.cr0.eq) goto loc_823AEB20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30620(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30620, ctx.r11.u32);
	// addi r3,r9,-17104
	ctx.r3.s64 = ctx.r9.s64 + -17104;
	// bl 0x82816528
	ctx.lr = 0x823AEB18;
	sub_82816528(ctx, base);
	// stw r3,-30624(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30624, ctx.r3.u32);
	// b 0x823aeb24
	goto loc_823AEB24;
loc_823AEB20:
	// lwz r3,-30624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30624);
loc_823AEB24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEB38"))) PPC_WEAK_FUNC(sub_823AEB38);
PPC_FUNC_IMPL(__imp__sub_823AEB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aeb88
	ctx.lr = 0x823AEB58;
	sub_823AEB88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AEB6C;
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

__attribute__((alias("__imp__sub_823AEB88"))) PPC_WEAK_FUNC(sub_823AEB88);
PPC_FUNC_IMPL(__imp__sub_823AEB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28172
	ctx.r31.s64 = ctx.r11.s64 + -28172;
	// lwz r11,-28176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28176);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aebd0
	if (!ctx.cr0.eq) goto loc_823AEBD0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22884
	ctx.r9.s64 = ctx.r9.s64 + -22884;
	// stw r11,-28176(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28176, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20840
	ctx.r3.s64 = ctx.r11.s64 + -20840;
	// bl 0x82a4c758
	ctx.lr = 0x823AEBD0;
	sub_82A4C758(ctx, base);
loc_823AEBD0:
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

__attribute__((alias("__imp__sub_823AEBE8"))) PPC_WEAK_FUNC(sub_823AEBE8);
PPC_FUNC_IMPL(__imp__sub_823AEBE8) {
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
	// li r3,6912
	ctx.r3.s64 = 6912;
	// bl 0x82833108
	ctx.lr = 0x823AEBFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aec0c
	if (ctx.cr0.eq) goto loc_823AEC0C;
	// bl 0x8253e598
	ctx.lr = 0x823AEC08;
	sub_8253E598(ctx, base);
	// b 0x823aec10
	goto loc_823AEC10;
loc_823AEC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AEC10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEC20"))) PPC_WEAK_FUNC(sub_823AEC20);
PPC_FUNC_IMPL(__imp__sub_823AEC20) {
	PPC_FUNC_PROLOGUE();
	// li r3,6912
	ctx.r3.s64 = 6912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEC28"))) PPC_WEAK_FUNC(sub_823AEC28);
PPC_FUNC_IMPL(__imp__sub_823AEC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30628);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aec68
	if (!ctx.cr0.eq) goto loc_823AEC68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30628, ctx.r11.u32);
	// addi r3,r9,-17080
	ctx.r3.s64 = ctx.r9.s64 + -17080;
	// bl 0x82816528
	ctx.lr = 0x823AEC60;
	sub_82816528(ctx, base);
	// stw r3,-30632(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30632, ctx.r3.u32);
	// b 0x823aec6c
	goto loc_823AEC6C;
loc_823AEC68:
	// lwz r3,-30632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30632);
loc_823AEC6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEC80"))) PPC_WEAK_FUNC(sub_823AEC80);
PPC_FUNC_IMPL(__imp__sub_823AEC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aecd0
	ctx.lr = 0x823AECA0;
	sub_823AECD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AECB4;
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

__attribute__((alias("__imp__sub_823AECD0"))) PPC_WEAK_FUNC(sub_823AECD0);
PPC_FUNC_IMPL(__imp__sub_823AECD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29140
	ctx.r31.s64 = ctx.r11.s64 + -29140;
	// lwz r11,-29144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aed18
	if (!ctx.cr0.eq) goto loc_823AED18;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22864
	ctx.r9.s64 = ctx.r9.s64 + -22864;
	// stw r11,-29144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29144, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20864
	ctx.r3.s64 = ctx.r11.s64 + -20864;
	// bl 0x82a4c758
	ctx.lr = 0x823AED18;
	sub_82A4C758(ctx, base);
loc_823AED18:
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

__attribute__((alias("__imp__sub_823AED30"))) PPC_WEAK_FUNC(sub_823AED30);
PPC_FUNC_IMPL(__imp__sub_823AED30) {
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
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823AED44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aed54
	if (ctx.cr0.eq) goto loc_823AED54;
	// bl 0x82530280
	ctx.lr = 0x823AED50;
	sub_82530280(ctx, base);
	// b 0x823aed58
	goto loc_823AED58;
loc_823AED54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AED58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AED68"))) PPC_WEAK_FUNC(sub_823AED68);
PPC_FUNC_IMPL(__imp__sub_823AED68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aeda8
	if (!ctx.cr0.eq) goto loc_823AEDA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30636(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30636, ctx.r11.u32);
	// addi r3,r9,-17064
	ctx.r3.s64 = ctx.r9.s64 + -17064;
	// bl 0x82816528
	ctx.lr = 0x823AEDA0;
	sub_82816528(ctx, base);
	// stw r3,-30640(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30640, ctx.r3.u32);
	// b 0x823aedac
	goto loc_823AEDAC;
loc_823AEDA8:
	// lwz r3,-30640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30640);
loc_823AEDAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEDC0"))) PPC_WEAK_FUNC(sub_823AEDC0);
PPC_FUNC_IMPL(__imp__sub_823AEDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aee10
	ctx.lr = 0x823AEDE0;
	sub_823AEE10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AEDF4;
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

__attribute__((alias("__imp__sub_823AEE10"))) PPC_WEAK_FUNC(sub_823AEE10);
PPC_FUNC_IMPL(__imp__sub_823AEE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29132
	ctx.r31.s64 = ctx.r11.s64 + -29132;
	// lwz r11,-29136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aee58
	if (!ctx.cr0.eq) goto loc_823AEE58;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20340
	ctx.r9.s64 = ctx.r9.s64 + -20340;
	// stw r11,-29136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29136, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20888
	ctx.r3.s64 = ctx.r11.s64 + -20888;
	// bl 0x82a4c758
	ctx.lr = 0x823AEE58;
	sub_82A4C758(ctx, base);
loc_823AEE58:
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

__attribute__((alias("__imp__sub_823AEE70"))) PPC_WEAK_FUNC(sub_823AEE70);
PPC_FUNC_IMPL(__imp__sub_823AEE70) {
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
	ctx.lr = 0x823AEE84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aee98
	if (ctx.cr0.eq) goto loc_823AEE98;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da7f8
	ctx.lr = 0x823AEE94;
	sub_823DA7F8(ctx, base);
	// b 0x823aee9c
	goto loc_823AEE9C;
loc_823AEE98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AEE9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aeeb0
	if (ctx.cr6.eq) goto loc_823AEEB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AEEB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEEC0"))) PPC_WEAK_FUNC(sub_823AEEC0);
PPC_FUNC_IMPL(__imp__sub_823AEEC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30644);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aef00
	if (!ctx.cr0.eq) goto loc_823AEF00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30644(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30644, ctx.r11.u32);
	// addi r3,r9,-16944
	ctx.r3.s64 = ctx.r9.s64 + -16944;
	// bl 0x82816528
	ctx.lr = 0x823AEEF8;
	sub_82816528(ctx, base);
	// stw r3,-30648(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30648, ctx.r3.u32);
	// b 0x823aef04
	goto loc_823AEF04;
loc_823AEF00:
	// lwz r3,-30648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30648);
loc_823AEF04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AEF18"))) PPC_WEAK_FUNC(sub_823AEF18);
PPC_FUNC_IMPL(__imp__sub_823AEF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aef68
	ctx.lr = 0x823AEF38;
	sub_823AEF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AEF4C;
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

__attribute__((alias("__imp__sub_823AEF68"))) PPC_WEAK_FUNC(sub_823AEF68);
PPC_FUNC_IMPL(__imp__sub_823AEF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29740
	ctx.r31.s64 = ctx.r11.s64 + -29740;
	// lwz r11,-29744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aefb0
	if (!ctx.cr0.eq) goto loc_823AEFB0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20092
	ctx.r9.s64 = ctx.r9.s64 + -20092;
	// stw r11,-29744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29744, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20912
	ctx.r3.s64 = ctx.r11.s64 + -20912;
	// bl 0x82a4c758
	ctx.lr = 0x823AEFB0;
	sub_82A4C758(ctx, base);
loc_823AEFB0:
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

__attribute__((alias("__imp__sub_823AEFC8"))) PPC_WEAK_FUNC(sub_823AEFC8);
PPC_FUNC_IMPL(__imp__sub_823AEFC8) {
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
	// li r3,2176
	ctx.r3.s64 = 2176;
	// bl 0x82833108
	ctx.lr = 0x823AEFDC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823aeff0
	if (ctx.cr0.eq) goto loc_823AEFF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8252f178
	ctx.lr = 0x823AEFEC;
	sub_8252F178(ctx, base);
	// b 0x823aeff4
	goto loc_823AEFF4;
loc_823AEFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AEFF4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af008
	if (ctx.cr6.eq) goto loc_823AF008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF008:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF018"))) PPC_WEAK_FUNC(sub_823AF018);
PPC_FUNC_IMPL(__imp__sub_823AF018) {
	PPC_FUNC_PROLOGUE();
	// li r3,2176
	ctx.r3.s64 = 2176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF020"))) PPC_WEAK_FUNC(sub_823AF020);
PPC_FUNC_IMPL(__imp__sub_823AF020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30652);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af060
	if (!ctx.cr0.eq) goto loc_823AF060;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30652(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30652, ctx.r11.u32);
	// addi r3,r9,-16912
	ctx.r3.s64 = ctx.r9.s64 + -16912;
	// bl 0x82816528
	ctx.lr = 0x823AF058;
	sub_82816528(ctx, base);
	// stw r3,-30656(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30656, ctx.r3.u32);
	// b 0x823af064
	goto loc_823AF064;
loc_823AF060:
	// lwz r3,-30656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30656);
loc_823AF064:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF078"))) PPC_WEAK_FUNC(sub_823AF078);
PPC_FUNC_IMPL(__imp__sub_823AF078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af0c8
	ctx.lr = 0x823AF098;
	sub_823AF0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF0AC;
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

__attribute__((alias("__imp__sub_823AF0C8"))) PPC_WEAK_FUNC(sub_823AF0C8);
PPC_FUNC_IMPL(__imp__sub_823AF0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30356
	ctx.r31.s64 = ctx.r11.s64 + -30356;
	// lwz r11,-30360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af110
	if (!ctx.cr0.eq) goto loc_823AF110;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20072
	ctx.r9.s64 = ctx.r9.s64 + -20072;
	// stw r11,-30360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20936
	ctx.r3.s64 = ctx.r11.s64 + -20936;
	// bl 0x82a4c758
	ctx.lr = 0x823AF110;
	sub_82A4C758(ctx, base);
loc_823AF110:
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

__attribute__((alias("__imp__sub_823AF128"))) PPC_WEAK_FUNC(sub_823AF128);
PPC_FUNC_IMPL(__imp__sub_823AF128) {
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
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82833108
	ctx.lr = 0x823AF13C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af150
	if (ctx.cr0.eq) goto loc_823AF150;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8252f630
	ctx.lr = 0x823AF14C;
	sub_8252F630(ctx, base);
	// b 0x823af154
	goto loc_823AF154;
loc_823AF150:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF154:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af168
	if (ctx.cr6.eq) goto loc_823AF168;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF178"))) PPC_WEAK_FUNC(sub_823AF178);
PPC_FUNC_IMPL(__imp__sub_823AF178) {
	PPC_FUNC_PROLOGUE();
	// li r3,212
	ctx.r3.s64 = 212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF180"))) PPC_WEAK_FUNC(sub_823AF180);
PPC_FUNC_IMPL(__imp__sub_823AF180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30660);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af1c0
	if (!ctx.cr0.eq) goto loc_823AF1C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30660, ctx.r11.u32);
	// addi r3,r9,-16880
	ctx.r3.s64 = ctx.r9.s64 + -16880;
	// bl 0x82816528
	ctx.lr = 0x823AF1B8;
	sub_82816528(ctx, base);
	// stw r3,-30664(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30664, ctx.r3.u32);
	// b 0x823af1c4
	goto loc_823AF1C4;
loc_823AF1C0:
	// lwz r3,-30664(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30664);
loc_823AF1C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF1D8"))) PPC_WEAK_FUNC(sub_823AF1D8);
PPC_FUNC_IMPL(__imp__sub_823AF1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af228
	ctx.lr = 0x823AF1F8;
	sub_823AF228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF20C;
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

__attribute__((alias("__imp__sub_823AF228"))) PPC_WEAK_FUNC(sub_823AF228);
PPC_FUNC_IMPL(__imp__sub_823AF228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30348
	ctx.r31.s64 = ctx.r11.s64 + -30348;
	// lwz r11,-30352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af270
	if (!ctx.cr0.eq) goto loc_823AF270;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20052
	ctx.r9.s64 = ctx.r9.s64 + -20052;
	// stw r11,-30352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30352, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20960
	ctx.r3.s64 = ctx.r11.s64 + -20960;
	// bl 0x82a4c758
	ctx.lr = 0x823AF270;
	sub_82A4C758(ctx, base);
loc_823AF270:
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

__attribute__((alias("__imp__sub_823AF288"))) PPC_WEAK_FUNC(sub_823AF288);
PPC_FUNC_IMPL(__imp__sub_823AF288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x823AF2A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823af2ec
	if (ctx.cr0.eq) goto loc_823AF2EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284c630
	ctx.lr = 0x823AF2B0;
	sub_8284C630(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,9696
	ctx.r10.s64 = ctx.r10.s64 + 9696;
	// addi r9,r9,10784
	ctx.r9.s64 = ctx.r9.s64 + 10784;
	// stw r11,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r11.u32);
	// addi r8,r8,8296
	ctx.r8.s64 = ctx.r8.s64 + 8296;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// b 0x823af2f0
	goto loc_823AF2F0;
loc_823AF2EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF2F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF308"))) PPC_WEAK_FUNC(sub_823AF308);
PPC_FUNC_IMPL(__imp__sub_823AF308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af348
	if (!ctx.cr0.eq) goto loc_823AF348;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30668(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30668, ctx.r11.u32);
	// addi r3,r9,-16832
	ctx.r3.s64 = ctx.r9.s64 + -16832;
	// bl 0x82816528
	ctx.lr = 0x823AF340;
	sub_82816528(ctx, base);
	// stw r3,-30672(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30672, ctx.r3.u32);
	// b 0x823af34c
	goto loc_823AF34C;
loc_823AF348:
	// lwz r3,-30672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30672);
loc_823AF34C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF360"))) PPC_WEAK_FUNC(sub_823AF360);
PPC_FUNC_IMPL(__imp__sub_823AF360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af3b0
	ctx.lr = 0x823AF380;
	sub_823AF3B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF394;
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

__attribute__((alias("__imp__sub_823AF3B0"))) PPC_WEAK_FUNC(sub_823AF3B0);
PPC_FUNC_IMPL(__imp__sub_823AF3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30340
	ctx.r31.s64 = ctx.r11.s64 + -30340;
	// lwz r11,-30344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af3f8
	if (!ctx.cr0.eq) goto loc_823AF3F8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-20032
	ctx.r9.s64 = ctx.r9.s64 + -20032;
	// stw r11,-30344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30344, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-20984
	ctx.r3.s64 = ctx.r11.s64 + -20984;
	// bl 0x82a4c758
	ctx.lr = 0x823AF3F8;
	sub_82A4C758(ctx, base);
loc_823AF3F8:
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

__attribute__((alias("__imp__sub_823AF410"))) PPC_WEAK_FUNC(sub_823AF410);
PPC_FUNC_IMPL(__imp__sub_823AF410) {
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
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823AF424;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af434
	if (ctx.cr0.eq) goto loc_823AF434;
	// bl 0x82532a80
	ctx.lr = 0x823AF430;
	sub_82532A80(ctx, base);
	// b 0x823af438
	goto loc_823AF438;
loc_823AF434:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF438:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF448"))) PPC_WEAK_FUNC(sub_823AF448);
PPC_FUNC_IMPL(__imp__sub_823AF448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30676);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af488
	if (!ctx.cr0.eq) goto loc_823AF488;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30676(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30676, ctx.r11.u32);
	// addi r3,r9,-16788
	ctx.r3.s64 = ctx.r9.s64 + -16788;
	// bl 0x82816528
	ctx.lr = 0x823AF480;
	sub_82816528(ctx, base);
	// stw r3,-30680(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30680, ctx.r3.u32);
	// b 0x823af48c
	goto loc_823AF48C;
loc_823AF488:
	// lwz r3,-30680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30680);
loc_823AF48C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF4A0"))) PPC_WEAK_FUNC(sub_823AF4A0);
PPC_FUNC_IMPL(__imp__sub_823AF4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af4f0
	ctx.lr = 0x823AF4C0;
	sub_823AF4F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF4D4;
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

__attribute__((alias("__imp__sub_823AF4F0"))) PPC_WEAK_FUNC(sub_823AF4F0);
PPC_FUNC_IMPL(__imp__sub_823AF4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29124
	ctx.r31.s64 = ctx.r11.s64 + -29124;
	// lwz r11,-29128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af538
	if (!ctx.cr0.eq) goto loc_823AF538;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17508
	ctx.r9.s64 = ctx.r9.s64 + -17508;
	// stw r11,-29128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29128, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21008
	ctx.r3.s64 = ctx.r11.s64 + -21008;
	// bl 0x82a4c758
	ctx.lr = 0x823AF538;
	sub_82A4C758(ctx, base);
loc_823AF538:
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

__attribute__((alias("__imp__sub_823AF550"))) PPC_WEAK_FUNC(sub_823AF550);
PPC_FUNC_IMPL(__imp__sub_823AF550) {
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
	// li r3,2112
	ctx.r3.s64 = 2112;
	// bl 0x82833108
	ctx.lr = 0x823AF564;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af578
	if (ctx.cr0.eq) goto loc_823AF578;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a80
	ctx.lr = 0x823AF574;
	sub_82531A80(ctx, base);
	// b 0x823af57c
	goto loc_823AF57C;
loc_823AF578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF57C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af590
	if (ctx.cr6.eq) goto loc_823AF590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF5A0"))) PPC_WEAK_FUNC(sub_823AF5A0);
PPC_FUNC_IMPL(__imp__sub_823AF5A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,2112
	ctx.r3.s64 = 2112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF5A8"))) PPC_WEAK_FUNC(sub_823AF5A8);
PPC_FUNC_IMPL(__imp__sub_823AF5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30684);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af5e8
	if (!ctx.cr0.eq) goto loc_823AF5E8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30684(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30684, ctx.r11.u32);
	// addi r3,r9,-16620
	ctx.r3.s64 = ctx.r9.s64 + -16620;
	// bl 0x82816528
	ctx.lr = 0x823AF5E0;
	sub_82816528(ctx, base);
	// stw r3,-30688(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30688, ctx.r3.u32);
	// b 0x823af5ec
	goto loc_823AF5EC;
loc_823AF5E8:
	// lwz r3,-30688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30688);
loc_823AF5EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF600"))) PPC_WEAK_FUNC(sub_823AF600);
PPC_FUNC_IMPL(__imp__sub_823AF600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af650
	ctx.lr = 0x823AF620;
	sub_823AF650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF634;
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

__attribute__((alias("__imp__sub_823AF650"))) PPC_WEAK_FUNC(sub_823AF650);
PPC_FUNC_IMPL(__imp__sub_823AF650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30396
	ctx.r31.s64 = ctx.r11.s64 + -30396;
	// lwz r11,-30400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af698
	if (!ctx.cr0.eq) goto loc_823AF698;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17488
	ctx.r9.s64 = ctx.r9.s64 + -17488;
	// stw r11,-30400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30400, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21032
	ctx.r3.s64 = ctx.r11.s64 + -21032;
	// bl 0x82a4c758
	ctx.lr = 0x823AF698;
	sub_82A4C758(ctx, base);
loc_823AF698:
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

__attribute__((alias("__imp__sub_823AF6B0"))) PPC_WEAK_FUNC(sub_823AF6B0);
PPC_FUNC_IMPL(__imp__sub_823AF6B0) {
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
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82833108
	ctx.lr = 0x823AF6C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af6d8
	if (ctx.cr0.eq) goto loc_823AF6D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823da920
	ctx.lr = 0x823AF6D4;
	sub_823DA920(ctx, base);
	// b 0x823af6dc
	goto loc_823AF6DC;
loc_823AF6D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF6DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af6f0
	if (ctx.cr6.eq) goto loc_823AF6F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF6F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF700"))) PPC_WEAK_FUNC(sub_823AF700);
PPC_FUNC_IMPL(__imp__sub_823AF700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af740
	if (!ctx.cr0.eq) goto loc_823AF740;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30692, ctx.r11.u32);
	// addi r3,r9,-16588
	ctx.r3.s64 = ctx.r9.s64 + -16588;
	// bl 0x82816528
	ctx.lr = 0x823AF738;
	sub_82816528(ctx, base);
	// stw r3,-30696(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30696, ctx.r3.u32);
	// b 0x823af744
	goto loc_823AF744;
loc_823AF740:
	// lwz r3,-30696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30696);
loc_823AF744:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF758"))) PPC_WEAK_FUNC(sub_823AF758);
PPC_FUNC_IMPL(__imp__sub_823AF758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af7a8
	ctx.lr = 0x823AF778;
	sub_823AF7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF78C;
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

__attribute__((alias("__imp__sub_823AF7A8"))) PPC_WEAK_FUNC(sub_823AF7A8);
PPC_FUNC_IMPL(__imp__sub_823AF7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30388
	ctx.r31.s64 = ctx.r11.s64 + -30388;
	// lwz r11,-30392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af7f0
	if (!ctx.cr0.eq) goto loc_823AF7F0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17176
	ctx.r9.s64 = ctx.r9.s64 + -17176;
	// stw r11,-30392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30392, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21056
	ctx.r3.s64 = ctx.r11.s64 + -21056;
	// bl 0x82a4c758
	ctx.lr = 0x823AF7F0;
	sub_82A4C758(ctx, base);
loc_823AF7F0:
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

__attribute__((alias("__imp__sub_823AF808"))) PPC_WEAK_FUNC(sub_823AF808);
PPC_FUNC_IMPL(__imp__sub_823AF808) {
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
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82833108
	ctx.lr = 0x823AF81C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af830
	if (ctx.cr0.eq) goto loc_823AF830;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823daab0
	ctx.lr = 0x823AF82C;
	sub_823DAAB0(ctx, base);
	// b 0x823af834
	goto loc_823AF834;
loc_823AF830:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF834:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af848
	if (ctx.cr6.eq) goto loc_823AF848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF858"))) PPC_WEAK_FUNC(sub_823AF858);
PPC_FUNC_IMPL(__imp__sub_823AF858) {
	PPC_FUNC_PROLOGUE();
	// li r3,180
	ctx.r3.s64 = 180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF860"))) PPC_WEAK_FUNC(sub_823AF860);
PPC_FUNC_IMPL(__imp__sub_823AF860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af8a0
	if (!ctx.cr0.eq) goto loc_823AF8A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30700, ctx.r11.u32);
	// addi r3,r9,-16548
	ctx.r3.s64 = ctx.r9.s64 + -16548;
	// bl 0x82816528
	ctx.lr = 0x823AF898;
	sub_82816528(ctx, base);
	// stw r3,-30704(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30704, ctx.r3.u32);
	// b 0x823af8a4
	goto loc_823AF8A4;
loc_823AF8A0:
	// lwz r3,-30704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30704);
loc_823AF8A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF8B8"))) PPC_WEAK_FUNC(sub_823AF8B8);
PPC_FUNC_IMPL(__imp__sub_823AF8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af908
	ctx.lr = 0x823AF8D8;
	sub_823AF908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AF8EC;
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

__attribute__((alias("__imp__sub_823AF908"))) PPC_WEAK_FUNC(sub_823AF908);
PPC_FUNC_IMPL(__imp__sub_823AF908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30380
	ctx.r31.s64 = ctx.r11.s64 + -30380;
	// lwz r11,-30384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af950
	if (!ctx.cr0.eq) goto loc_823AF950;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16632
	ctx.r9.s64 = ctx.r9.s64 + -16632;
	// stw r11,-30384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30384, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21080
	ctx.r3.s64 = ctx.r11.s64 + -21080;
	// bl 0x82a4c758
	ctx.lr = 0x823AF950;
	sub_82A4C758(ctx, base);
loc_823AF950:
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

__attribute__((alias("__imp__sub_823AF968"))) PPC_WEAK_FUNC(sub_823AF968);
PPC_FUNC_IMPL(__imp__sub_823AF968) {
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
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x82833108
	ctx.lr = 0x823AF97C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823af990
	if (ctx.cr0.eq) goto loc_823AF990;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531fb8
	ctx.lr = 0x823AF98C;
	sub_82531FB8(ctx, base);
	// b 0x823af994
	goto loc_823AF994;
loc_823AF990:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF994:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823af9a8
	if (ctx.cr6.eq) goto loc_823AF9A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AF9A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF9B8"))) PPC_WEAK_FUNC(sub_823AF9B8);
PPC_FUNC_IMPL(__imp__sub_823AF9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30708);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823af9f8
	if (!ctx.cr0.eq) goto loc_823AF9F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30708, ctx.r11.u32);
	// addi r3,r9,-16500
	ctx.r3.s64 = ctx.r9.s64 + -16500;
	// bl 0x82816528
	ctx.lr = 0x823AF9F0;
	sub_82816528(ctx, base);
	// stw r3,-30712(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30712, ctx.r3.u32);
	// b 0x823af9fc
	goto loc_823AF9FC;
loc_823AF9F8:
	// lwz r3,-30712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30712);
loc_823AF9FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFA10"))) PPC_WEAK_FUNC(sub_823AFA10);
PPC_FUNC_IMPL(__imp__sub_823AFA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afa60
	ctx.lr = 0x823AFA30;
	sub_823AFA60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AFA44;
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

__attribute__((alias("__imp__sub_823AFA60"))) PPC_WEAK_FUNC(sub_823AFA60);
PPC_FUNC_IMPL(__imp__sub_823AFA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30372
	ctx.r31.s64 = ctx.r11.s64 + -30372;
	// lwz r11,-30376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afaa8
	if (!ctx.cr0.eq) goto loc_823AFAA8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16612
	ctx.r9.s64 = ctx.r9.s64 + -16612;
	// stw r11,-30376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30376, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21104
	ctx.r3.s64 = ctx.r11.s64 + -21104;
	// bl 0x82a4c758
	ctx.lr = 0x823AFAA8;
	sub_82A4C758(ctx, base);
loc_823AFAA8:
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

__attribute__((alias("__imp__sub_823AFAC0"))) PPC_WEAK_FUNC(sub_823AFAC0);
PPC_FUNC_IMPL(__imp__sub_823AFAC0) {
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
	// li r3,7008
	ctx.r3.s64 = 7008;
	// bl 0x82833108
	ctx.lr = 0x823AFAD4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823afae4
	if (ctx.cr0.eq) goto loc_823AFAE4;
	// bl 0x825370d8
	ctx.lr = 0x823AFAE0;
	sub_825370D8(ctx, base);
	// b 0x823afae8
	goto loc_823AFAE8;
loc_823AFAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AFAE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFAF8"))) PPC_WEAK_FUNC(sub_823AFAF8);
PPC_FUNC_IMPL(__imp__sub_823AFAF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,7008
	ctx.r3.s64 = 7008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFB00"))) PPC_WEAK_FUNC(sub_823AFB00);
PPC_FUNC_IMPL(__imp__sub_823AFB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afb40
	if (!ctx.cr0.eq) goto loc_823AFB40;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30716(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30716, ctx.r11.u32);
	// addi r3,r9,-16452
	ctx.r3.s64 = ctx.r9.s64 + -16452;
	// bl 0x82816528
	ctx.lr = 0x823AFB38;
	sub_82816528(ctx, base);
	// stw r3,-30720(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30720, ctx.r3.u32);
	// b 0x823afb44
	goto loc_823AFB44;
loc_823AFB40:
	// lwz r3,-30720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30720);
loc_823AFB44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFB58"))) PPC_WEAK_FUNC(sub_823AFB58);
PPC_FUNC_IMPL(__imp__sub_823AFB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afba8
	ctx.lr = 0x823AFB78;
	sub_823AFBA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AFB8C;
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

__attribute__((alias("__imp__sub_823AFBA8"))) PPC_WEAK_FUNC(sub_823AFBA8);
PPC_FUNC_IMPL(__imp__sub_823AFBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29116
	ctx.r31.s64 = ctx.r11.s64 + -29116;
	// lwz r11,-29120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afbf0
	if (!ctx.cr0.eq) goto loc_823AFBF0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16592
	ctx.r9.s64 = ctx.r9.s64 + -16592;
	// stw r11,-29120(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29120, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21128
	ctx.r3.s64 = ctx.r11.s64 + -21128;
	// bl 0x82a4c758
	ctx.lr = 0x823AFBF0;
	sub_82A4C758(ctx, base);
loc_823AFBF0:
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

__attribute__((alias("__imp__sub_823AFC08"))) PPC_WEAK_FUNC(sub_823AFC08);
PPC_FUNC_IMPL(__imp__sub_823AFC08) {
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
	ctx.lr = 0x823AFC1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823afc30
	if (ctx.cr0.eq) goto loc_823AFC30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82535df8
	ctx.lr = 0x823AFC2C;
	sub_82535DF8(ctx, base);
	// b 0x823afc34
	goto loc_823AFC34;
loc_823AFC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AFC34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afc48
	if (ctx.cr6.eq) goto loc_823AFC48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AFC48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFC58"))) PPC_WEAK_FUNC(sub_823AFC58);
PPC_FUNC_IMPL(__imp__sub_823AFC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afc98
	if (!ctx.cr0.eq) goto loc_823AFC98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30724(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30724, ctx.r11.u32);
	// addi r3,r9,-16428
	ctx.r3.s64 = ctx.r9.s64 + -16428;
	// bl 0x82816528
	ctx.lr = 0x823AFC90;
	sub_82816528(ctx, base);
	// stw r3,-30728(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30728, ctx.r3.u32);
	// b 0x823afc9c
	goto loc_823AFC9C;
loc_823AFC98:
	// lwz r3,-30728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30728);
loc_823AFC9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFCB0"))) PPC_WEAK_FUNC(sub_823AFCB0);
PPC_FUNC_IMPL(__imp__sub_823AFCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afd00
	ctx.lr = 0x823AFCD0;
	sub_823AFD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AFCE4;
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

__attribute__((alias("__imp__sub_823AFD00"))) PPC_WEAK_FUNC(sub_823AFD00);
PPC_FUNC_IMPL(__imp__sub_823AFD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30428
	ctx.r31.s64 = ctx.r11.s64 + -30428;
	// lwz r11,-30432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afd48
	if (!ctx.cr0.eq) goto loc_823AFD48;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16572
	ctx.r9.s64 = ctx.r9.s64 + -16572;
	// stw r11,-30432(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30432, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21152
	ctx.r3.s64 = ctx.r11.s64 + -21152;
	// bl 0x82a4c758
	ctx.lr = 0x823AFD48;
	sub_82A4C758(ctx, base);
loc_823AFD48:
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

__attribute__((alias("__imp__sub_823AFD60"))) PPC_WEAK_FUNC(sub_823AFD60);
PPC_FUNC_IMPL(__imp__sub_823AFD60) {
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
	ctx.lr = 0x823AFD74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823afd88
	if (ctx.cr0.eq) goto loc_823AFD88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82536330
	ctx.lr = 0x823AFD84;
	sub_82536330(ctx, base);
	// b 0x823afd8c
	goto loc_823AFD8C;
loc_823AFD88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AFD8C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afda0
	if (ctx.cr6.eq) goto loc_823AFDA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AFDA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFDB0"))) PPC_WEAK_FUNC(sub_823AFDB0);
PPC_FUNC_IMPL(__imp__sub_823AFDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afdf0
	if (!ctx.cr0.eq) goto loc_823AFDF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30732, ctx.r11.u32);
	// addi r3,r9,-16396
	ctx.r3.s64 = ctx.r9.s64 + -16396;
	// bl 0x82816528
	ctx.lr = 0x823AFDE8;
	sub_82816528(ctx, base);
	// stw r3,-30736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30736, ctx.r3.u32);
	// b 0x823afdf4
	goto loc_823AFDF4;
loc_823AFDF0:
	// lwz r3,-30736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30736);
loc_823AFDF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFE08"))) PPC_WEAK_FUNC(sub_823AFE08);
PPC_FUNC_IMPL(__imp__sub_823AFE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afe58
	ctx.lr = 0x823AFE28;
	sub_823AFE58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AFE3C;
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

__attribute__((alias("__imp__sub_823AFE58"))) PPC_WEAK_FUNC(sub_823AFE58);
PPC_FUNC_IMPL(__imp__sub_823AFE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30420
	ctx.r31.s64 = ctx.r11.s64 + -30420;
	// lwz r11,-30424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afea0
	if (!ctx.cr0.eq) goto loc_823AFEA0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-16292
	ctx.r9.s64 = ctx.r9.s64 + -16292;
	// stw r11,-30424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30424, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21176
	ctx.r3.s64 = ctx.r11.s64 + -21176;
	// bl 0x82a4c758
	ctx.lr = 0x823AFEA0;
	sub_82A4C758(ctx, base);
loc_823AFEA0:
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

__attribute__((alias("__imp__sub_823AFEB8"))) PPC_WEAK_FUNC(sub_823AFEB8);
PPC_FUNC_IMPL(__imp__sub_823AFEB8) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82833108
	ctx.lr = 0x823AFECC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823afee0
	if (ctx.cr0.eq) goto loc_823AFEE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823daca8
	ctx.lr = 0x823AFEDC;
	sub_823DACA8(ctx, base);
	// b 0x823afee4
	goto loc_823AFEE4;
loc_823AFEE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AFEE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823afef8
	if (ctx.cr6.eq) goto loc_823AFEF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823AFEF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFF08"))) PPC_WEAK_FUNC(sub_823AFF08);
PPC_FUNC_IMPL(__imp__sub_823AFF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823aff48
	if (!ctx.cr0.eq) goto loc_823AFF48;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30740(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30740, ctx.r11.u32);
	// addi r3,r9,-16356
	ctx.r3.s64 = ctx.r9.s64 + -16356;
	// bl 0x82816528
	ctx.lr = 0x823AFF40;
	sub_82816528(ctx, base);
	// stw r3,-30744(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30744, ctx.r3.u32);
	// b 0x823aff4c
	goto loc_823AFF4C;
loc_823AFF48:
	// lwz r3,-30744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30744);
loc_823AFF4C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFF60"))) PPC_WEAK_FUNC(sub_823AFF60);
PPC_FUNC_IMPL(__imp__sub_823AFF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823affb0
	ctx.lr = 0x823AFF80;
	sub_823AFFB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823AFF94;
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

__attribute__((alias("__imp__sub_823AFFB0"))) PPC_WEAK_FUNC(sub_823AFFB0);
PPC_FUNC_IMPL(__imp__sub_823AFFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-30412
	ctx.r31.s64 = ctx.r11.s64 + -30412;
	// lwz r11,-30416(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30416);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823afff8
	if (!ctx.cr0.eq) goto loc_823AFFF8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15848
	ctx.r9.s64 = ctx.r9.s64 + -15848;
	// stw r11,-30416(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30416, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21200
	ctx.r3.s64 = ctx.r11.s64 + -21200;
	// bl 0x82a4c758
	ctx.lr = 0x823AFFF8;
	sub_82A4C758(ctx, base);
loc_823AFFF8:
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

__attribute__((alias("__imp__sub_823B0010"))) PPC_WEAK_FUNC(sub_823B0010);
PPC_FUNC_IMPL(__imp__sub_823B0010) {
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
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B0024;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b0034
	if (ctx.cr0.eq) goto loc_823B0034;
	// bl 0x8253b600
	ctx.lr = 0x823B0030;
	sub_8253B600(ctx, base);
	// b 0x823b0038
	goto loc_823B0038;
loc_823B0034:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0038:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0048"))) PPC_WEAK_FUNC(sub_823B0048);
PPC_FUNC_IMPL(__imp__sub_823B0048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30748(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30748);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0088
	if (!ctx.cr0.eq) goto loc_823B0088;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30748, ctx.r11.u32);
	// addi r3,r9,-16308
	ctx.r3.s64 = ctx.r9.s64 + -16308;
	// bl 0x82816528
	ctx.lr = 0x823B0080;
	sub_82816528(ctx, base);
	// stw r3,-30752(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30752, ctx.r3.u32);
	// b 0x823b008c
	goto loc_823B008C;
loc_823B0088:
	// lwz r3,-30752(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30752);
loc_823B008C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B00A0"))) PPC_WEAK_FUNC(sub_823B00A0);
PPC_FUNC_IMPL(__imp__sub_823B00A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b00f0
	ctx.lr = 0x823B00C0;
	sub_823B00F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B00D4;
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

__attribute__((alias("__imp__sub_823B00F0"))) PPC_WEAK_FUNC(sub_823B00F0);
PPC_FUNC_IMPL(__imp__sub_823B00F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29108
	ctx.r31.s64 = ctx.r11.s64 + -29108;
	// lwz r11,-29112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0138
	if (!ctx.cr0.eq) goto loc_823B0138;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13300
	ctx.r9.s64 = ctx.r9.s64 + -13300;
	// stw r11,-29112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29112, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21224
	ctx.r3.s64 = ctx.r11.s64 + -21224;
	// bl 0x82a4c758
	ctx.lr = 0x823B0138;
	sub_82A4C758(ctx, base);
loc_823B0138:
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

__attribute__((alias("__imp__sub_823B0150"))) PPC_WEAK_FUNC(sub_823B0150);
PPC_FUNC_IMPL(__imp__sub_823B0150) {
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
	ctx.lr = 0x823B0164;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b0178
	if (ctx.cr0.eq) goto loc_823B0178;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253a688
	ctx.lr = 0x823B0174;
	sub_8253A688(ctx, base);
	// b 0x823b017c
	goto loc_823B017C;
loc_823B0178:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B017C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0190
	if (ctx.cr6.eq) goto loc_823B0190;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B0190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B01A0"))) PPC_WEAK_FUNC(sub_823B01A0);
PPC_FUNC_IMPL(__imp__sub_823B01A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b01e0
	if (!ctx.cr0.eq) goto loc_823B01E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30756, ctx.r11.u32);
	// addi r3,r9,-16152
	ctx.r3.s64 = ctx.r9.s64 + -16152;
	// bl 0x82816528
	ctx.lr = 0x823B01D8;
	sub_82816528(ctx, base);
	// stw r3,-30760(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30760, ctx.r3.u32);
	// b 0x823b01e4
	goto loc_823B01E4;
loc_823B01E0:
	// lwz r3,-30760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30760);
loc_823B01E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B01F8"))) PPC_WEAK_FUNC(sub_823B01F8);
PPC_FUNC_IMPL(__imp__sub_823B01F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0248
	ctx.lr = 0x823B0218;
	sub_823B0248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B022C;
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

__attribute__((alias("__imp__sub_823B0248"))) PPC_WEAK_FUNC(sub_823B0248);
PPC_FUNC_IMPL(__imp__sub_823B0248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29732
	ctx.r31.s64 = ctx.r11.s64 + -29732;
	// lwz r11,-29736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29736);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0290
	if (!ctx.cr0.eq) goto loc_823B0290;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13280
	ctx.r9.s64 = ctx.r9.s64 + -13280;
	// stw r11,-29736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29736, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21248
	ctx.r3.s64 = ctx.r11.s64 + -21248;
	// bl 0x82a4c758
	ctx.lr = 0x823B0290;
	sub_82A4C758(ctx, base);
loc_823B0290:
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

__attribute__((alias("__imp__sub_823B02A8"))) PPC_WEAK_FUNC(sub_823B02A8);
PPC_FUNC_IMPL(__imp__sub_823B02A8) {
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
	ctx.lr = 0x823B02BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b02d0
	if (ctx.cr0.eq) goto loc_823B02D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8253a9e0
	ctx.lr = 0x823B02CC;
	sub_8253A9E0(ctx, base);
	// b 0x823b02d4
	goto loc_823B02D4;
loc_823B02D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B02D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b02e8
	if (ctx.cr6.eq) goto loc_823B02E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B02E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B02F8"))) PPC_WEAK_FUNC(sub_823B02F8);
PPC_FUNC_IMPL(__imp__sub_823B02F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0338
	if (!ctx.cr0.eq) goto loc_823B0338;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30764, ctx.r11.u32);
	// addi r3,r9,-16124
	ctx.r3.s64 = ctx.r9.s64 + -16124;
	// bl 0x82816528
	ctx.lr = 0x823B0330;
	sub_82816528(ctx, base);
	// stw r3,-30768(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30768, ctx.r3.u32);
	// b 0x823b033c
	goto loc_823B033C;
loc_823B0338:
	// lwz r3,-30768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30768);
loc_823B033C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0350"))) PPC_WEAK_FUNC(sub_823B0350);
PPC_FUNC_IMPL(__imp__sub_823B0350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b03a0
	ctx.lr = 0x823B0370;
	sub_823B03A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B0384;
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

__attribute__((alias("__imp__sub_823B03A0"))) PPC_WEAK_FUNC(sub_823B03A0);
PPC_FUNC_IMPL(__imp__sub_823B03A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29724
	ctx.r31.s64 = ctx.r11.s64 + -29724;
	// lwz r11,-29728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b03e8
	if (!ctx.cr0.eq) goto loc_823B03E8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13028
	ctx.r9.s64 = ctx.r9.s64 + -13028;
	// stw r11,-29728(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29728, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21272
	ctx.r3.s64 = ctx.r11.s64 + -21272;
	// bl 0x82a4c758
	ctx.lr = 0x823B03E8;
	sub_82A4C758(ctx, base);
loc_823B03E8:
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

__attribute__((alias("__imp__sub_823B0400"))) PPC_WEAK_FUNC(sub_823B0400);
PPC_FUNC_IMPL(__imp__sub_823B0400) {
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
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82833108
	ctx.lr = 0x823B0414;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823b0428
	if (ctx.cr0.eq) goto loc_823B0428;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823dae78
	ctx.lr = 0x823B0424;
	sub_823DAE78(ctx, base);
	// b 0x823b042c
	goto loc_823B042C;
loc_823B0428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B042C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b0440
	if (ctx.cr6.eq) goto loc_823B0440;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_823B0440:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0450"))) PPC_WEAK_FUNC(sub_823B0450);
PPC_FUNC_IMPL(__imp__sub_823B0450) {
	PPC_FUNC_PROLOGUE();
	// li r3,168
	ctx.r3.s64 = 168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0458"))) PPC_WEAK_FUNC(sub_823B0458);
PPC_FUNC_IMPL(__imp__sub_823B0458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30772);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0498
	if (!ctx.cr0.eq) goto loc_823B0498;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30772, ctx.r11.u32);
	// addi r3,r9,-16088
	ctx.r3.s64 = ctx.r9.s64 + -16088;
	// bl 0x82816528
	ctx.lr = 0x823B0490;
	sub_82816528(ctx, base);
	// stw r3,-30776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30776, ctx.r3.u32);
	// b 0x823b049c
	goto loc_823B049C;
loc_823B0498:
	// lwz r3,-30776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30776);
loc_823B049C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B04B0"))) PPC_WEAK_FUNC(sub_823B04B0);
PPC_FUNC_IMPL(__imp__sub_823B04B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0500
	ctx.lr = 0x823B04D0;
	sub_823B0500(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B04E4;
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

__attribute__((alias("__imp__sub_823B0500"))) PPC_WEAK_FUNC(sub_823B0500);
PPC_FUNC_IMPL(__imp__sub_823B0500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-29716
	ctx.r31.s64 = ctx.r11.s64 + -29716;
	// lwz r11,-29720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0548
	if (!ctx.cr0.eq) goto loc_823B0548;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-12592
	ctx.r9.s64 = ctx.r9.s64 + -12592;
	// stw r11,-29720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29720, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21296
	ctx.r3.s64 = ctx.r11.s64 + -21296;
	// bl 0x82a4c758
	ctx.lr = 0x823B0548;
	sub_82A4C758(ctx, base);
loc_823B0548:
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

__attribute__((alias("__imp__sub_823B0560"))) PPC_WEAK_FUNC(sub_823B0560);
PPC_FUNC_IMPL(__imp__sub_823B0560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823B0578;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b05b4
	if (ctx.cr0.eq) goto loc_823B05B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530280
	ctx.lr = 0x823B0588;
	sub_82530280(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-12568
	ctx.r11.s64 = ctx.r11.s64 + -12568;
	// addi r10,r10,-10120
	ctx.r10.s64 = ctx.r10.s64 + -10120;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b05b8
	goto loc_823B05B8;
loc_823B05B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B05B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B05D0"))) PPC_WEAK_FUNC(sub_823B05D0);
PPC_FUNC_IMPL(__imp__sub_823B05D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0610
	if (!ctx.cr0.eq) goto loc_823B0610;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30780(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30780, ctx.r11.u32);
	// addi r3,r9,-16044
	ctx.r3.s64 = ctx.r9.s64 + -16044;
	// bl 0x82816528
	ctx.lr = 0x823B0608;
	sub_82816528(ctx, base);
	// stw r3,-30784(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30784, ctx.r3.u32);
	// b 0x823b0614
	goto loc_823B0614;
loc_823B0610:
	// lwz r3,-30784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30784);
loc_823B0614:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0628"))) PPC_WEAK_FUNC(sub_823B0628);
PPC_FUNC_IMPL(__imp__sub_823B0628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0678
	ctx.lr = 0x823B0648;
	sub_823B0678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B065C;
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

__attribute__((alias("__imp__sub_823B0678"))) PPC_WEAK_FUNC(sub_823B0678);
PPC_FUNC_IMPL(__imp__sub_823B0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28396
	ctx.r31.s64 = ctx.r11.s64 + -28396;
	// lwz r11,-28400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b06c0
	if (!ctx.cr0.eq) goto loc_823B06C0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-10068
	ctx.r9.s64 = ctx.r9.s64 + -10068;
	// stw r11,-28400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28400, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21320
	ctx.r3.s64 = ctx.r11.s64 + -21320;
	// bl 0x82a4c758
	ctx.lr = 0x823B06C0;
	sub_82A4C758(ctx, base);
loc_823B06C0:
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

__attribute__((alias("__imp__sub_823B06D8"))) PPC_WEAK_FUNC(sub_823B06D8);
PPC_FUNC_IMPL(__imp__sub_823B06D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823B06F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b072c
	if (ctx.cr0.eq) goto loc_823B072C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530280
	ctx.lr = 0x823B0700;
	sub_82530280(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-10048
	ctx.r11.s64 = ctx.r11.s64 + -10048;
	// addi r10,r10,-7600
	ctx.r10.s64 = ctx.r10.s64 + -7600;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b0730
	goto loc_823B0730;
loc_823B072C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0730:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0748"))) PPC_WEAK_FUNC(sub_823B0748);
PPC_FUNC_IMPL(__imp__sub_823B0748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0788
	if (!ctx.cr0.eq) goto loc_823B0788;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30788(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30788, ctx.r11.u32);
	// addi r3,r9,-16008
	ctx.r3.s64 = ctx.r9.s64 + -16008;
	// bl 0x82816528
	ctx.lr = 0x823B0780;
	sub_82816528(ctx, base);
	// stw r3,-30792(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30792, ctx.r3.u32);
	// b 0x823b078c
	goto loc_823B078C;
loc_823B0788:
	// lwz r3,-30792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30792);
loc_823B078C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B07A0"))) PPC_WEAK_FUNC(sub_823B07A0);
PPC_FUNC_IMPL(__imp__sub_823B07A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b07f0
	ctx.lr = 0x823B07C0;
	sub_823B07F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B07D4;
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

__attribute__((alias("__imp__sub_823B07F0"))) PPC_WEAK_FUNC(sub_823B07F0);
PPC_FUNC_IMPL(__imp__sub_823B07F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28388
	ctx.r31.s64 = ctx.r11.s64 + -28388;
	// lwz r11,-28392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0838
	if (!ctx.cr0.eq) goto loc_823B0838;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-7548
	ctx.r9.s64 = ctx.r9.s64 + -7548;
	// stw r11,-28392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28392, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21344
	ctx.r3.s64 = ctx.r11.s64 + -21344;
	// bl 0x82a4c758
	ctx.lr = 0x823B0838;
	sub_82A4C758(ctx, base);
loc_823B0838:
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

__attribute__((alias("__imp__sub_823B0850"))) PPC_WEAK_FUNC(sub_823B0850);
PPC_FUNC_IMPL(__imp__sub_823B0850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823B0868;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b08a4
	if (ctx.cr0.eq) goto loc_823B08A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530280
	ctx.lr = 0x823B0878;
	sub_82530280(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-7528
	ctx.r11.s64 = ctx.r11.s64 + -7528;
	// addi r10,r10,-5080
	ctx.r10.s64 = ctx.r10.s64 + -5080;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b08a8
	goto loc_823B08A8;
loc_823B08A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B08A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B08C0"))) PPC_WEAK_FUNC(sub_823B08C0);
PPC_FUNC_IMPL(__imp__sub_823B08C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30796);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0900
	if (!ctx.cr0.eq) goto loc_823B0900;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30796, ctx.r11.u32);
	// addi r3,r9,-15972
	ctx.r3.s64 = ctx.r9.s64 + -15972;
	// bl 0x82816528
	ctx.lr = 0x823B08F8;
	sub_82816528(ctx, base);
	// stw r3,-30800(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30800, ctx.r3.u32);
	// b 0x823b0904
	goto loc_823B0904;
loc_823B0900:
	// lwz r3,-30800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30800);
loc_823B0904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0918"))) PPC_WEAK_FUNC(sub_823B0918);
PPC_FUNC_IMPL(__imp__sub_823B0918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0968
	ctx.lr = 0x823B0938;
	sub_823B0968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B094C;
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

__attribute__((alias("__imp__sub_823B0968"))) PPC_WEAK_FUNC(sub_823B0968);
PPC_FUNC_IMPL(__imp__sub_823B0968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28380
	ctx.r31.s64 = ctx.r11.s64 + -28380;
	// lwz r11,-28384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b09b0
	if (!ctx.cr0.eq) goto loc_823B09B0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-5028
	ctx.r9.s64 = ctx.r9.s64 + -5028;
	// stw r11,-28384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28384, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21368
	ctx.r3.s64 = ctx.r11.s64 + -21368;
	// bl 0x82a4c758
	ctx.lr = 0x823B09B0;
	sub_82A4C758(ctx, base);
loc_823B09B0:
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

__attribute__((alias("__imp__sub_823B09C8"))) PPC_WEAK_FUNC(sub_823B09C8);
PPC_FUNC_IMPL(__imp__sub_823B09C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823B09E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b0a1c
	if (ctx.cr0.eq) goto loc_823B0A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530280
	ctx.lr = 0x823B09F0;
	sub_82530280(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-5008
	ctx.r11.s64 = ctx.r11.s64 + -5008;
	// addi r10,r10,-2560
	ctx.r10.s64 = ctx.r10.s64 + -2560;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b0a20
	goto loc_823B0A20;
loc_823B0A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0A38"))) PPC_WEAK_FUNC(sub_823B0A38);
PPC_FUNC_IMPL(__imp__sub_823B0A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0a78
	if (!ctx.cr0.eq) goto loc_823B0A78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30804(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30804, ctx.r11.u32);
	// addi r3,r9,-15936
	ctx.r3.s64 = ctx.r9.s64 + -15936;
	// bl 0x82816528
	ctx.lr = 0x823B0A70;
	sub_82816528(ctx, base);
	// stw r3,-30808(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30808, ctx.r3.u32);
	// b 0x823b0a7c
	goto loc_823B0A7C;
loc_823B0A78:
	// lwz r3,-30808(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30808);
loc_823B0A7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0A90"))) PPC_WEAK_FUNC(sub_823B0A90);
PPC_FUNC_IMPL(__imp__sub_823B0A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0ae0
	ctx.lr = 0x823B0AB0;
	sub_823B0AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B0AC4;
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

__attribute__((alias("__imp__sub_823B0AE0"))) PPC_WEAK_FUNC(sub_823B0AE0);
PPC_FUNC_IMPL(__imp__sub_823B0AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28372
	ctx.r31.s64 = ctx.r11.s64 + -28372;
	// lwz r11,-28376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28376);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0b28
	if (!ctx.cr0.eq) goto loc_823B0B28;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2508
	ctx.r9.s64 = ctx.r9.s64 + -2508;
	// stw r11,-28376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28376, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21392
	ctx.r3.s64 = ctx.r11.s64 + -21392;
	// bl 0x82a4c758
	ctx.lr = 0x823B0B28;
	sub_82A4C758(ctx, base);
loc_823B0B28:
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

__attribute__((alias("__imp__sub_823B0B40"))) PPC_WEAK_FUNC(sub_823B0B40);
PPC_FUNC_IMPL(__imp__sub_823B0B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6928
	ctx.r3.s64 = 6928;
	// bl 0x82833108
	ctx.lr = 0x823B0B58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b0b94
	if (ctx.cr0.eq) goto loc_823B0B94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530280
	ctx.lr = 0x823B0B68;
	sub_82530280(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-2488
	ctx.r11.s64 = ctx.r11.s64 + -2488;
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b0b98
	goto loc_823B0B98;
loc_823B0B94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0BB0"))) PPC_WEAK_FUNC(sub_823B0BB0);
PPC_FUNC_IMPL(__imp__sub_823B0BB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,6928
	ctx.r3.s64 = 6928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0BB8"))) PPC_WEAK_FUNC(sub_823B0BB8);
PPC_FUNC_IMPL(__imp__sub_823B0BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0bf8
	if (!ctx.cr0.eq) goto loc_823B0BF8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30812(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30812, ctx.r11.u32);
	// addi r3,r9,-15892
	ctx.r3.s64 = ctx.r9.s64 + -15892;
	// bl 0x82816528
	ctx.lr = 0x823B0BF0;
	sub_82816528(ctx, base);
	// stw r3,-30816(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30816, ctx.r3.u32);
	// b 0x823b0bfc
	goto loc_823B0BFC;
loc_823B0BF8:
	// lwz r3,-30816(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30816);
loc_823B0BFC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0C10"))) PPC_WEAK_FUNC(sub_823B0C10);
PPC_FUNC_IMPL(__imp__sub_823B0C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0c60
	ctx.lr = 0x823B0C30;
	sub_823B0C60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B0C44;
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

__attribute__((alias("__imp__sub_823B0C60"))) PPC_WEAK_FUNC(sub_823B0C60);
PPC_FUNC_IMPL(__imp__sub_823B0C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28364
	ctx.r31.s64 = ctx.r11.s64 + -28364;
	// lwz r11,-28368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28368);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0ca8
	if (!ctx.cr0.eq) goto loc_823B0CA8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// stw r11,-28368(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28368, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21416
	ctx.r3.s64 = ctx.r11.s64 + -21416;
	// bl 0x82a4c758
	ctx.lr = 0x823B0CA8;
	sub_82A4C758(ctx, base);
loc_823B0CA8:
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

__attribute__((alias("__imp__sub_823B0CC0"))) PPC_WEAK_FUNC(sub_823B0CC0);
PPC_FUNC_IMPL(__imp__sub_823B0CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B0CD8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b0d14
	if (ctx.cr0.eq) goto loc_823B0D14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B0CE8;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,2480
	ctx.r10.s64 = ctx.r10.s64 + 2480;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b0d18
	goto loc_823B0D18;
loc_823B0D14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0D18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0D30"))) PPC_WEAK_FUNC(sub_823B0D30);
PPC_FUNC_IMPL(__imp__sub_823B0D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30820(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30820);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0d70
	if (!ctx.cr0.eq) goto loc_823B0D70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30820(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30820, ctx.r11.u32);
	// addi r3,r9,-15852
	ctx.r3.s64 = ctx.r9.s64 + -15852;
	// bl 0x82816528
	ctx.lr = 0x823B0D68;
	sub_82816528(ctx, base);
	// stw r3,-30824(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30824, ctx.r3.u32);
	// b 0x823b0d74
	goto loc_823B0D74;
loc_823B0D70:
	// lwz r3,-30824(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30824);
loc_823B0D74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0D88"))) PPC_WEAK_FUNC(sub_823B0D88);
PPC_FUNC_IMPL(__imp__sub_823B0D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0dd8
	ctx.lr = 0x823B0DA8;
	sub_823B0DD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B0DBC;
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

__attribute__((alias("__imp__sub_823B0DD8"))) PPC_WEAK_FUNC(sub_823B0DD8);
PPC_FUNC_IMPL(__imp__sub_823B0DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28356
	ctx.r31.s64 = ctx.r11.s64 + -28356;
	// lwz r11,-28360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28360);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0e20
	if (!ctx.cr0.eq) goto loc_823B0E20;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,2532
	ctx.r9.s64 = ctx.r9.s64 + 2532;
	// stw r11,-28360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28360, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21440
	ctx.r3.s64 = ctx.r11.s64 + -21440;
	// bl 0x82a4c758
	ctx.lr = 0x823B0E20;
	sub_82A4C758(ctx, base);
loc_823B0E20:
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

__attribute__((alias("__imp__sub_823B0E38"))) PPC_WEAK_FUNC(sub_823B0E38);
PPC_FUNC_IMPL(__imp__sub_823B0E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B0E50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b0e94
	if (ctx.cr0.eq) goto loc_823B0E94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B0E60;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,5000
	ctx.r10.s64 = ctx.r10.s64 + 5000;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b0e98
	goto loc_823B0E98;
loc_823B0E94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0E98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0EB0"))) PPC_WEAK_FUNC(sub_823B0EB0);
PPC_FUNC_IMPL(__imp__sub_823B0EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0ef0
	if (!ctx.cr0.eq) goto loc_823B0EF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30828(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30828, ctx.r11.u32);
	// addi r3,r9,-15816
	ctx.r3.s64 = ctx.r9.s64 + -15816;
	// bl 0x82816528
	ctx.lr = 0x823B0EE8;
	sub_82816528(ctx, base);
	// stw r3,-30832(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30832, ctx.r3.u32);
	// b 0x823b0ef4
	goto loc_823B0EF4;
loc_823B0EF0:
	// lwz r3,-30832(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30832);
loc_823B0EF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0F08"))) PPC_WEAK_FUNC(sub_823B0F08);
PPC_FUNC_IMPL(__imp__sub_823B0F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0f58
	ctx.lr = 0x823B0F28;
	sub_823B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B0F3C;
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

__attribute__((alias("__imp__sub_823B0F58"))) PPC_WEAK_FUNC(sub_823B0F58);
PPC_FUNC_IMPL(__imp__sub_823B0F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28348
	ctx.r31.s64 = ctx.r11.s64 + -28348;
	// lwz r11,-28352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b0fa0
	if (!ctx.cr0.eq) goto loc_823B0FA0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,5052
	ctx.r9.s64 = ctx.r9.s64 + 5052;
	// stw r11,-28352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28352, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21464
	ctx.r3.s64 = ctx.r11.s64 + -21464;
	// bl 0x82a4c758
	ctx.lr = 0x823B0FA0;
	sub_82A4C758(ctx, base);
loc_823B0FA0:
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

__attribute__((alias("__imp__sub_823B0FB8"))) PPC_WEAK_FUNC(sub_823B0FB8);
PPC_FUNC_IMPL(__imp__sub_823B0FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B0FD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1014
	if (ctx.cr0.eq) goto loc_823B1014;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B0FE0;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,5072
	ctx.r11.s64 = ctx.r11.s64 + 5072;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,7520
	ctx.r10.s64 = ctx.r10.s64 + 7520;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b1018
	goto loc_823B1018;
loc_823B1014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1018:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1030"))) PPC_WEAK_FUNC(sub_823B1030);
PPC_FUNC_IMPL(__imp__sub_823B1030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1070
	if (!ctx.cr0.eq) goto loc_823B1070;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30836, ctx.r11.u32);
	// addi r3,r9,-15708
	ctx.r3.s64 = ctx.r9.s64 + -15708;
	// bl 0x82816528
	ctx.lr = 0x823B1068;
	sub_82816528(ctx, base);
	// stw r3,-30840(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30840, ctx.r3.u32);
	// b 0x823b1074
	goto loc_823B1074;
loc_823B1070:
	// lwz r3,-30840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30840);
loc_823B1074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1088"))) PPC_WEAK_FUNC(sub_823B1088);
PPC_FUNC_IMPL(__imp__sub_823B1088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b10d8
	ctx.lr = 0x823B10A8;
	sub_823B10D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B10BC;
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

__attribute__((alias("__imp__sub_823B10D8"))) PPC_WEAK_FUNC(sub_823B10D8);
PPC_FUNC_IMPL(__imp__sub_823B10D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28340
	ctx.r31.s64 = ctx.r11.s64 + -28340;
	// lwz r11,-28344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28344);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1120
	if (!ctx.cr0.eq) goto loc_823B1120;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,7572
	ctx.r9.s64 = ctx.r9.s64 + 7572;
	// stw r11,-28344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28344, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21488
	ctx.r3.s64 = ctx.r11.s64 + -21488;
	// bl 0x82a4c758
	ctx.lr = 0x823B1120;
	sub_82A4C758(ctx, base);
loc_823B1120:
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

__attribute__((alias("__imp__sub_823B1138"))) PPC_WEAK_FUNC(sub_823B1138);
PPC_FUNC_IMPL(__imp__sub_823B1138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B1150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1194
	if (ctx.cr0.eq) goto loc_823B1194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B1160;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,7592
	ctx.r11.s64 = ctx.r11.s64 + 7592;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,10040
	ctx.r10.s64 = ctx.r10.s64 + 10040;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b1198
	goto loc_823B1198;
loc_823B1194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1198:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B11B0"))) PPC_WEAK_FUNC(sub_823B11B0);
PPC_FUNC_IMPL(__imp__sub_823B11B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30844);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b11f0
	if (!ctx.cr0.eq) goto loc_823B11F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30844, ctx.r11.u32);
	// addi r3,r9,-15596
	ctx.r3.s64 = ctx.r9.s64 + -15596;
	// bl 0x82816528
	ctx.lr = 0x823B11E8;
	sub_82816528(ctx, base);
	// stw r3,-30848(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30848, ctx.r3.u32);
	// b 0x823b11f4
	goto loc_823B11F4;
loc_823B11F0:
	// lwz r3,-30848(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30848);
loc_823B11F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1208"))) PPC_WEAK_FUNC(sub_823B1208);
PPC_FUNC_IMPL(__imp__sub_823B1208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1258
	ctx.lr = 0x823B1228;
	sub_823B1258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B123C;
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

__attribute__((alias("__imp__sub_823B1258"))) PPC_WEAK_FUNC(sub_823B1258);
PPC_FUNC_IMPL(__imp__sub_823B1258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28332
	ctx.r31.s64 = ctx.r11.s64 + -28332;
	// lwz r11,-28336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b12a0
	if (!ctx.cr0.eq) goto loc_823B12A0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,10092
	ctx.r9.s64 = ctx.r9.s64 + 10092;
	// stw r11,-28336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28336, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// bl 0x82a4c758
	ctx.lr = 0x823B12A0;
	sub_82A4C758(ctx, base);
loc_823B12A0:
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

__attribute__((alias("__imp__sub_823B12B8"))) PPC_WEAK_FUNC(sub_823B12B8);
PPC_FUNC_IMPL(__imp__sub_823B12B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B12D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b130c
	if (ctx.cr0.eq) goto loc_823B130C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B12E0;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,10112
	ctx.r11.s64 = ctx.r11.s64 + 10112;
	// addi r10,r10,12560
	ctx.r10.s64 = ctx.r10.s64 + 12560;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b1310
	goto loc_823B1310;
loc_823B130C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1310:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1328"))) PPC_WEAK_FUNC(sub_823B1328);
PPC_FUNC_IMPL(__imp__sub_823B1328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1368
	if (!ctx.cr0.eq) goto loc_823B1368;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30852(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30852, ctx.r11.u32);
	// addi r3,r9,-15484
	ctx.r3.s64 = ctx.r9.s64 + -15484;
	// bl 0x82816528
	ctx.lr = 0x823B1360;
	sub_82816528(ctx, base);
	// stw r3,-30856(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30856, ctx.r3.u32);
	// b 0x823b136c
	goto loc_823B136C;
loc_823B1368:
	// lwz r3,-30856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30856);
loc_823B136C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1380"))) PPC_WEAK_FUNC(sub_823B1380);
PPC_FUNC_IMPL(__imp__sub_823B1380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b13d0
	ctx.lr = 0x823B13A0;
	sub_823B13D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B13B4;
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

__attribute__((alias("__imp__sub_823B13D0"))) PPC_WEAK_FUNC(sub_823B13D0);
PPC_FUNC_IMPL(__imp__sub_823B13D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28324
	ctx.r31.s64 = ctx.r11.s64 + -28324;
	// lwz r11,-28328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1418
	if (!ctx.cr0.eq) goto loc_823B1418;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12612
	ctx.r9.s64 = ctx.r9.s64 + 12612;
	// stw r11,-28328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28328, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21536
	ctx.r3.s64 = ctx.r11.s64 + -21536;
	// bl 0x82a4c758
	ctx.lr = 0x823B1418;
	sub_82A4C758(ctx, base);
loc_823B1418:
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

__attribute__((alias("__imp__sub_823B1430"))) PPC_WEAK_FUNC(sub_823B1430);
PPC_FUNC_IMPL(__imp__sub_823B1430) {
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
	// li r3,7024
	ctx.r3.s64 = 7024;
	// bl 0x82833108
	ctx.lr = 0x823B1448;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b14a8
	if (ctx.cr0.eq) goto loc_823B14A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B1458;
	sub_82532A80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r9,r9,29000
	ctx.r9.s64 = ctx.r9.s64 + 29000;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,29052
	ctx.r11.s64 = ctx.r8.s64 + 29052;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r8,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// stw r9,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r9.u32);
	// b 0x823b14ac
	goto loc_823B14AC;
loc_823B14A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B14AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B14C0"))) PPC_WEAK_FUNC(sub_823B14C0);
PPC_FUNC_IMPL(__imp__sub_823B14C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7024
	ctx.r3.s64 = 7024;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B14C8"))) PPC_WEAK_FUNC(sub_823B14C8);
PPC_FUNC_IMPL(__imp__sub_823B14C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1508
	if (!ctx.cr0.eq) goto loc_823B1508;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30860(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30860, ctx.r11.u32);
	// addi r3,r9,-15456
	ctx.r3.s64 = ctx.r9.s64 + -15456;
	// bl 0x82816528
	ctx.lr = 0x823B1500;
	sub_82816528(ctx, base);
	// stw r3,-30864(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30864, ctx.r3.u32);
	// b 0x823b150c
	goto loc_823B150C;
loc_823B1508:
	// lwz r3,-30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30864);
loc_823B150C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1520"))) PPC_WEAK_FUNC(sub_823B1520);
PPC_FUNC_IMPL(__imp__sub_823B1520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1570
	ctx.lr = 0x823B1540;
	sub_823B1570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1554;
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

__attribute__((alias("__imp__sub_823B1570"))) PPC_WEAK_FUNC(sub_823B1570);
PPC_FUNC_IMPL(__imp__sub_823B1570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28316
	ctx.r31.s64 = ctx.r11.s64 + -28316;
	// lwz r11,-28320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b15b8
	if (!ctx.cr0.eq) goto loc_823B15B8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12632
	ctx.r9.s64 = ctx.r9.s64 + 12632;
	// stw r11,-28320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28320, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21560
	ctx.r3.s64 = ctx.r11.s64 + -21560;
	// bl 0x82a4c758
	ctx.lr = 0x823B15B8;
	sub_82A4C758(ctx, base);
loc_823B15B8:
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

__attribute__((alias("__imp__sub_823B15D0"))) PPC_WEAK_FUNC(sub_823B15D0);
PPC_FUNC_IMPL(__imp__sub_823B15D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B15E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1624
	if (ctx.cr0.eq) goto loc_823B1624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B15F8;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,12656
	ctx.r11.s64 = ctx.r11.s64 + 12656;
	// addi r10,r10,15104
	ctx.r10.s64 = ctx.r10.s64 + 15104;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b1628
	goto loc_823B1628;
loc_823B1624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1640"))) PPC_WEAK_FUNC(sub_823B1640);
PPC_FUNC_IMPL(__imp__sub_823B1640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1680
	if (!ctx.cr0.eq) goto loc_823B1680;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30868(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30868, ctx.r11.u32);
	// addi r3,r9,-15424
	ctx.r3.s64 = ctx.r9.s64 + -15424;
	// bl 0x82816528
	ctx.lr = 0x823B1678;
	sub_82816528(ctx, base);
	// stw r3,-30872(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30872, ctx.r3.u32);
	// b 0x823b1684
	goto loc_823B1684;
loc_823B1680:
	// lwz r3,-30872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30872);
loc_823B1684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1698"))) PPC_WEAK_FUNC(sub_823B1698);
PPC_FUNC_IMPL(__imp__sub_823B1698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b16e8
	ctx.lr = 0x823B16B8;
	sub_823B16E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B16CC;
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

__attribute__((alias("__imp__sub_823B16E8"))) PPC_WEAK_FUNC(sub_823B16E8);
PPC_FUNC_IMPL(__imp__sub_823B16E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28308
	ctx.r31.s64 = ctx.r11.s64 + -28308;
	// lwz r11,-28312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28312);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1730
	if (!ctx.cr0.eq) goto loc_823B1730;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15156
	ctx.r9.s64 = ctx.r9.s64 + 15156;
	// stw r11,-28312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28312, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21584
	ctx.r3.s64 = ctx.r11.s64 + -21584;
	// bl 0x82a4c758
	ctx.lr = 0x823B1730;
	sub_82A4C758(ctx, base);
loc_823B1730:
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

__attribute__((alias("__imp__sub_823B1748"))) PPC_WEAK_FUNC(sub_823B1748);
PPC_FUNC_IMPL(__imp__sub_823B1748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B1760;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b17ac
	if (ctx.cr0.eq) goto loc_823B17AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B1770;
	sub_82532A80(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,29080
	ctx.r11.s64 = ctx.r11.s64 + 29080;
	// addi r10,r10,31528
	ctx.r10.s64 = ctx.r10.s64 + 31528;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b17b0
	goto loc_823B17B0;
loc_823B17AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B17B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B17C8"))) PPC_WEAK_FUNC(sub_823B17C8);
PPC_FUNC_IMPL(__imp__sub_823B17C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1808
	if (!ctx.cr0.eq) goto loc_823B1808;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30876, ctx.r11.u32);
	// addi r3,r9,-15396
	ctx.r3.s64 = ctx.r9.s64 + -15396;
	// bl 0x82816528
	ctx.lr = 0x823B1800;
	sub_82816528(ctx, base);
	// stw r3,-30880(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30880, ctx.r3.u32);
	// b 0x823b180c
	goto loc_823B180C;
loc_823B1808:
	// lwz r3,-30880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30880);
loc_823B180C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1820"))) PPC_WEAK_FUNC(sub_823B1820);
PPC_FUNC_IMPL(__imp__sub_823B1820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1870
	ctx.lr = 0x823B1840;
	sub_823B1870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1854;
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

__attribute__((alias("__imp__sub_823B1870"))) PPC_WEAK_FUNC(sub_823B1870);
PPC_FUNC_IMPL(__imp__sub_823B1870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28300
	ctx.r31.s64 = ctx.r11.s64 + -28300;
	// lwz r11,-28304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28304);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b18b8
	if (!ctx.cr0.eq) goto loc_823B18B8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,15176
	ctx.r9.s64 = ctx.r9.s64 + 15176;
	// stw r11,-28304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28304, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21608
	ctx.r3.s64 = ctx.r11.s64 + -21608;
	// bl 0x82a4c758
	ctx.lr = 0x823B18B8;
	sub_82A4C758(ctx, base);
loc_823B18B8:
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

__attribute__((alias("__imp__sub_823B18D0"))) PPC_WEAK_FUNC(sub_823B18D0);
PPC_FUNC_IMPL(__imp__sub_823B18D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B18E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1934
	if (ctx.cr0.eq) goto loc_823B1934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B18F8;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,15200
	ctx.r11.s64 = ctx.r11.s64 + 15200;
	// addi r10,r10,17648
	ctx.r10.s64 = ctx.r10.s64 + 17648;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b1938
	goto loc_823B1938;
loc_823B1934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1938:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1950"))) PPC_WEAK_FUNC(sub_823B1950);
PPC_FUNC_IMPL(__imp__sub_823B1950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1990
	if (!ctx.cr0.eq) goto loc_823B1990;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30884(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30884, ctx.r11.u32);
	// addi r3,r9,-15364
	ctx.r3.s64 = ctx.r9.s64 + -15364;
	// bl 0x82816528
	ctx.lr = 0x823B1988;
	sub_82816528(ctx, base);
	// stw r3,-30888(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30888, ctx.r3.u32);
	// b 0x823b1994
	goto loc_823B1994;
loc_823B1990:
	// lwz r3,-30888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30888);
loc_823B1994:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B19A8"))) PPC_WEAK_FUNC(sub_823B19A8);
PPC_FUNC_IMPL(__imp__sub_823B19A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b19f8
	ctx.lr = 0x823B19C8;
	sub_823B19F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B19DC;
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

__attribute__((alias("__imp__sub_823B19F8"))) PPC_WEAK_FUNC(sub_823B19F8);
PPC_FUNC_IMPL(__imp__sub_823B19F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28292
	ctx.r31.s64 = ctx.r11.s64 + -28292;
	// lwz r11,-28296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1a40
	if (!ctx.cr0.eq) goto loc_823B1A40;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17700
	ctx.r9.s64 = ctx.r9.s64 + 17700;
	// stw r11,-28296(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28296, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21632
	ctx.r3.s64 = ctx.r11.s64 + -21632;
	// bl 0x82a4c758
	ctx.lr = 0x823B1A40;
	sub_82A4C758(ctx, base);
loc_823B1A40:
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

__attribute__((alias("__imp__sub_823B1A58"))) PPC_WEAK_FUNC(sub_823B1A58);
PPC_FUNC_IMPL(__imp__sub_823B1A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B1A70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1abc
	if (ctx.cr0.eq) goto loc_823B1ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B1A80;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,17720
	ctx.r11.s64 = ctx.r11.s64 + 17720;
	// addi r10,r10,20168
	ctx.r10.s64 = ctx.r10.s64 + 20168;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b1ac0
	goto loc_823B1AC0;
loc_823B1ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1AC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1AD8"))) PPC_WEAK_FUNC(sub_823B1AD8);
PPC_FUNC_IMPL(__imp__sub_823B1AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1b18
	if (!ctx.cr0.eq) goto loc_823B1B18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30892, ctx.r11.u32);
	// addi r3,r9,-15228
	ctx.r3.s64 = ctx.r9.s64 + -15228;
	// bl 0x82816528
	ctx.lr = 0x823B1B10;
	sub_82816528(ctx, base);
	// stw r3,-30896(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30896, ctx.r3.u32);
	// b 0x823b1b1c
	goto loc_823B1B1C;
loc_823B1B18:
	// lwz r3,-30896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30896);
loc_823B1B1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1B30"))) PPC_WEAK_FUNC(sub_823B1B30);
PPC_FUNC_IMPL(__imp__sub_823B1B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1b80
	ctx.lr = 0x823B1B50;
	sub_823B1B80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1B64;
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

__attribute__((alias("__imp__sub_823B1B80"))) PPC_WEAK_FUNC(sub_823B1B80);
PPC_FUNC_IMPL(__imp__sub_823B1B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28284
	ctx.r31.s64 = ctx.r11.s64 + -28284;
	// lwz r11,-28288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28288);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1bc8
	if (!ctx.cr0.eq) goto loc_823B1BC8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,20220
	ctx.r9.s64 = ctx.r9.s64 + 20220;
	// stw r11,-28288(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28288, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21656
	ctx.r3.s64 = ctx.r11.s64 + -21656;
	// bl 0x82a4c758
	ctx.lr = 0x823B1BC8;
	sub_82A4C758(ctx, base);
loc_823B1BC8:
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

__attribute__((alias("__imp__sub_823B1BE0"))) PPC_WEAK_FUNC(sub_823B1BE0);
PPC_FUNC_IMPL(__imp__sub_823B1BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x823B1BF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1c44
	if (ctx.cr0.eq) goto loc_823B1C44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82532a80
	ctx.lr = 0x823B1C08;
	sub_82532A80(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,20240
	ctx.r11.s64 = ctx.r11.s64 + 20240;
	// addi r10,r10,22688
	ctx.r10.s64 = ctx.r10.s64 + 22688;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
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
	// b 0x823b1c48
	goto loc_823B1C48;
loc_823B1C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1C48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1C60"))) PPC_WEAK_FUNC(sub_823B1C60);
PPC_FUNC_IMPL(__imp__sub_823B1C60) {
	PPC_FUNC_PROLOGUE();
	// li r3,6992
	ctx.r3.s64 = 6992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1C68"))) PPC_WEAK_FUNC(sub_823B1C68);
PPC_FUNC_IMPL(__imp__sub_823B1C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1ca8
	if (!ctx.cr0.eq) goto loc_823B1CA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30900(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30900, ctx.r11.u32);
	// addi r3,r9,-15096
	ctx.r3.s64 = ctx.r9.s64 + -15096;
	// bl 0x82816528
	ctx.lr = 0x823B1CA0;
	sub_82816528(ctx, base);
	// stw r3,-30904(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30904, ctx.r3.u32);
	// b 0x823b1cac
	goto loc_823B1CAC;
loc_823B1CA8:
	// lwz r3,-30904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30904);
loc_823B1CAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1CC0"))) PPC_WEAK_FUNC(sub_823B1CC0);
PPC_FUNC_IMPL(__imp__sub_823B1CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1d10
	ctx.lr = 0x823B1CE0;
	sub_823B1D10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1CF4;
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

__attribute__((alias("__imp__sub_823B1D10"))) PPC_WEAK_FUNC(sub_823B1D10);
PPC_FUNC_IMPL(__imp__sub_823B1D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28276
	ctx.r31.s64 = ctx.r11.s64 + -28276;
	// lwz r11,-28280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28280);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1d58
	if (!ctx.cr0.eq) goto loc_823B1D58;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22764
	ctx.r9.s64 = ctx.r9.s64 + 22764;
	// stw r11,-28280(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28280, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21680
	ctx.r3.s64 = ctx.r11.s64 + -21680;
	// bl 0x82a4c758
	ctx.lr = 0x823B1D58;
	sub_82A4C758(ctx, base);
loc_823B1D58:
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

__attribute__((alias("__imp__sub_823B1D70"))) PPC_WEAK_FUNC(sub_823B1D70);
PPC_FUNC_IMPL(__imp__sub_823B1D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B1D88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1dc4
	if (ctx.cr0.eq) goto loc_823B1DC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B1D98;
	sub_8253B600(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// addi r10,r10,25232
	ctx.r10.s64 = ctx.r10.s64 + 25232;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b1dc8
	goto loc_823B1DC8;
loc_823B1DC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1DE0"))) PPC_WEAK_FUNC(sub_823B1DE0);
PPC_FUNC_IMPL(__imp__sub_823B1DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1e20
	if (!ctx.cr0.eq) goto loc_823B1E20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30908(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30908, ctx.r11.u32);
	// addi r3,r9,-14968
	ctx.r3.s64 = ctx.r9.s64 + -14968;
	// bl 0x82816528
	ctx.lr = 0x823B1E18;
	sub_82816528(ctx, base);
	// stw r3,-30912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30912, ctx.r3.u32);
	// b 0x823b1e24
	goto loc_823B1E24;
loc_823B1E20:
	// lwz r3,-30912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30912);
loc_823B1E24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1E38"))) PPC_WEAK_FUNC(sub_823B1E38);
PPC_FUNC_IMPL(__imp__sub_823B1E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1e88
	ctx.lr = 0x823B1E58;
	sub_823B1E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1E6C;
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

__attribute__((alias("__imp__sub_823B1E88"))) PPC_WEAK_FUNC(sub_823B1E88);
PPC_FUNC_IMPL(__imp__sub_823B1E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28268
	ctx.r31.s64 = ctx.r11.s64 + -28268;
	// lwz r11,-28272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1ed0
	if (!ctx.cr0.eq) goto loc_823B1ED0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25284
	ctx.r9.s64 = ctx.r9.s64 + 25284;
	// stw r11,-28272(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28272, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// bl 0x82a4c758
	ctx.lr = 0x823B1ED0;
	sub_82A4C758(ctx, base);
loc_823B1ED0:
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

__attribute__((alias("__imp__sub_823B1EE8"))) PPC_WEAK_FUNC(sub_823B1EE8);
PPC_FUNC_IMPL(__imp__sub_823B1EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B1F00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b1f3c
	if (ctx.cr0.eq) goto loc_823B1F3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B1F10;
	sub_8253B600(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,25304
	ctx.r11.s64 = ctx.r11.s64 + 25304;
	// addi r10,r10,27752
	ctx.r10.s64 = ctx.r10.s64 + 27752;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x823b1f40
	goto loc_823B1F40;
loc_823B1F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B1F40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1F58"))) PPC_WEAK_FUNC(sub_823B1F58);
PPC_FUNC_IMPL(__imp__sub_823B1F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b1f98
	if (!ctx.cr0.eq) goto loc_823B1F98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30916, ctx.r11.u32);
	// addi r3,r9,-14940
	ctx.r3.s64 = ctx.r9.s64 + -14940;
	// bl 0x82816528
	ctx.lr = 0x823B1F90;
	sub_82816528(ctx, base);
	// stw r3,-30920(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30920, ctx.r3.u32);
	// b 0x823b1f9c
	goto loc_823B1F9C;
loc_823B1F98:
	// lwz r3,-30920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30920);
loc_823B1F9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1FB0"))) PPC_WEAK_FUNC(sub_823B1FB0);
PPC_FUNC_IMPL(__imp__sub_823B1FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2000
	ctx.lr = 0x823B1FD0;
	sub_823B2000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B1FE4;
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

__attribute__((alias("__imp__sub_823B2000"))) PPC_WEAK_FUNC(sub_823B2000);
PPC_FUNC_IMPL(__imp__sub_823B2000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28260
	ctx.r31.s64 = ctx.r11.s64 + -28260;
	// lwz r11,-28264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2048
	if (!ctx.cr0.eq) goto loc_823B2048;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27804
	ctx.r9.s64 = ctx.r9.s64 + 27804;
	// stw r11,-28264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28264, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21728
	ctx.r3.s64 = ctx.r11.s64 + -21728;
	// bl 0x82a4c758
	ctx.lr = 0x823B2048;
	sub_82A4C758(ctx, base);
loc_823B2048:
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

__attribute__((alias("__imp__sub_823B2060"))) PPC_WEAK_FUNC(sub_823B2060);
PPC_FUNC_IMPL(__imp__sub_823B2060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2078;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b20c8
	if (ctx.cr0.eq) goto loc_823B20C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2088;
	sub_8253B600(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r10,31584
	ctx.r10.s64 = ctx.r10.s64 + 31584;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,-31504
	ctx.r9.s64 = ctx.r9.s64 + -31504;
	// addi r8,r8,-13324
	ctx.r8.s64 = ctx.r8.s64 + -13324;
	// stw r11,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
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
	// b 0x823b20cc
	goto loc_823B20CC;
loc_823B20C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B20CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B20E0"))) PPC_WEAK_FUNC(sub_823B20E0);
PPC_FUNC_IMPL(__imp__sub_823B20E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2120
	if (!ctx.cr0.eq) goto loc_823B2120;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30924(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30924, ctx.r11.u32);
	// addi r3,r9,-14908
	ctx.r3.s64 = ctx.r9.s64 + -14908;
	// bl 0x82816528
	ctx.lr = 0x823B2118;
	sub_82816528(ctx, base);
	// stw r3,-30928(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30928, ctx.r3.u32);
	// b 0x823b2124
	goto loc_823B2124;
loc_823B2120:
	// lwz r3,-30928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30928);
loc_823B2124:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2138"))) PPC_WEAK_FUNC(sub_823B2138);
PPC_FUNC_IMPL(__imp__sub_823B2138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2188
	ctx.lr = 0x823B2158;
	sub_823B2188(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B216C;
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

__attribute__((alias("__imp__sub_823B2188"))) PPC_WEAK_FUNC(sub_823B2188);
PPC_FUNC_IMPL(__imp__sub_823B2188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28252
	ctx.r31.s64 = ctx.r11.s64 + -28252;
	// lwz r11,-28256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b21d0
	if (!ctx.cr0.eq) goto loc_823B21D0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27824
	ctx.r9.s64 = ctx.r9.s64 + 27824;
	// stw r11,-28256(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28256, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21752
	ctx.r3.s64 = ctx.r11.s64 + -21752;
	// bl 0x82a4c758
	ctx.lr = 0x823B21D0;
	sub_82A4C758(ctx, base);
loc_823B21D0:
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

__attribute__((alias("__imp__sub_823B21E8"))) PPC_WEAK_FUNC(sub_823B21E8);
PPC_FUNC_IMPL(__imp__sub_823B21E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2200;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b224c
	if (ctx.cr0.eq) goto loc_823B224C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2210;
	sub_8253B600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-31448
	ctx.r11.s64 = ctx.r11.s64 + -31448;
	// addi r10,r10,-29000
	ctx.r10.s64 = ctx.r10.s64 + -29000;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b2250
	goto loc_823B2250;
loc_823B224C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2250:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2268"))) PPC_WEAK_FUNC(sub_823B2268);
PPC_FUNC_IMPL(__imp__sub_823B2268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b22a8
	if (!ctx.cr0.eq) goto loc_823B22A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30932(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30932, ctx.r11.u32);
	// addi r3,r9,-14876
	ctx.r3.s64 = ctx.r9.s64 + -14876;
	// bl 0x82816528
	ctx.lr = 0x823B22A0;
	sub_82816528(ctx, base);
	// stw r3,-30936(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30936, ctx.r3.u32);
	// b 0x823b22ac
	goto loc_823B22AC;
loc_823B22A8:
	// lwz r3,-30936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30936);
loc_823B22AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B22C0"))) PPC_WEAK_FUNC(sub_823B22C0);
PPC_FUNC_IMPL(__imp__sub_823B22C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2310
	ctx.lr = 0x823B22E0;
	sub_823B2310(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B22F4;
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

__attribute__((alias("__imp__sub_823B2310"))) PPC_WEAK_FUNC(sub_823B2310);
PPC_FUNC_IMPL(__imp__sub_823B2310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28244
	ctx.r31.s64 = ctx.r11.s64 + -28244;
	// lwz r11,-28248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28248);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2358
	if (!ctx.cr0.eq) goto loc_823B2358;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,27844
	ctx.r9.s64 = ctx.r9.s64 + 27844;
	// stw r11,-28248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28248, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21776
	ctx.r3.s64 = ctx.r11.s64 + -21776;
	// bl 0x82a4c758
	ctx.lr = 0x823B2358;
	sub_82A4C758(ctx, base);
loc_823B2358:
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

__attribute__((alias("__imp__sub_823B2370"))) PPC_WEAK_FUNC(sub_823B2370);
PPC_FUNC_IMPL(__imp__sub_823B2370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2388;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b23f8
	if (ctx.cr0.eq) goto loc_823B23F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2398;
	sub_8253B600(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,27864
	ctx.r11.s64 = ctx.r11.s64 + 27864;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,30312
	ctx.r10.s64 = ctx.r10.s64 + 30312;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,18067
	ctx.r5.s64 = 1184038912;
	// addi r4,r31,6924
	ctx.r4.s64 = ctx.r31.s64 + 6924;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,19860
	ctx.r5.u64 = ctx.r5.u64 | 19860;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x823B23E8;
	sub_823CF190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// b 0x823b23fc
	goto loc_823B23FC;
loc_823B23F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B23FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2410"))) PPC_WEAK_FUNC(sub_823B2410);
PPC_FUNC_IMPL(__imp__sub_823B2410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2450
	if (!ctx.cr0.eq) goto loc_823B2450;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30940(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30940, ctx.r11.u32);
	// addi r3,r9,-14844
	ctx.r3.s64 = ctx.r9.s64 + -14844;
	// bl 0x82816528
	ctx.lr = 0x823B2448;
	sub_82816528(ctx, base);
	// stw r3,-30944(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30944, ctx.r3.u32);
	// b 0x823b2454
	goto loc_823B2454;
loc_823B2450:
	// lwz r3,-30944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30944);
loc_823B2454:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2468"))) PPC_WEAK_FUNC(sub_823B2468);
PPC_FUNC_IMPL(__imp__sub_823B2468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b24b8
	ctx.lr = 0x823B2488;
	sub_823B24B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B249C;
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

__attribute__((alias("__imp__sub_823B24B8"))) PPC_WEAK_FUNC(sub_823B24B8);
PPC_FUNC_IMPL(__imp__sub_823B24B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28236
	ctx.r31.s64 = ctx.r11.s64 + -28236;
	// lwz r11,-28240(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28240);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2500
	if (!ctx.cr0.eq) goto loc_823B2500;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30364
	ctx.r9.s64 = ctx.r9.s64 + 30364;
	// stw r11,-28240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28240, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21800
	ctx.r3.s64 = ctx.r11.s64 + -21800;
	// bl 0x82a4c758
	ctx.lr = 0x823B2500;
	sub_82A4C758(ctx, base);
loc_823B2500:
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

__attribute__((alias("__imp__sub_823B2518"))) PPC_WEAK_FUNC(sub_823B2518);
PPC_FUNC_IMPL(__imp__sub_823B2518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2530;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b2574
	if (ctx.cr0.eq) goto loc_823B2574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2540;
	sub_8253B600(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,30384
	ctx.r11.s64 = ctx.r11.s64 + 30384;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-32704
	ctx.r10.s64 = ctx.r10.s64 + -32704;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b2578
	goto loc_823B2578;
loc_823B2574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2578:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2590"))) PPC_WEAK_FUNC(sub_823B2590);
PPC_FUNC_IMPL(__imp__sub_823B2590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b25d0
	if (!ctx.cr0.eq) goto loc_823B25D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30948, ctx.r11.u32);
	// addi r3,r9,-14736
	ctx.r3.s64 = ctx.r9.s64 + -14736;
	// bl 0x82816528
	ctx.lr = 0x823B25C8;
	sub_82816528(ctx, base);
	// stw r3,-30952(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30952, ctx.r3.u32);
	// b 0x823b25d4
	goto loc_823B25D4;
loc_823B25D0:
	// lwz r3,-30952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30952);
loc_823B25D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B25E8"))) PPC_WEAK_FUNC(sub_823B25E8);
PPC_FUNC_IMPL(__imp__sub_823B25E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2638
	ctx.lr = 0x823B2608;
	sub_823B2638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B261C;
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

__attribute__((alias("__imp__sub_823B2638"))) PPC_WEAK_FUNC(sub_823B2638);
PPC_FUNC_IMPL(__imp__sub_823B2638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28228
	ctx.r31.s64 = ctx.r11.s64 + -28228;
	// lwz r11,-28232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2680
	if (!ctx.cr0.eq) goto loc_823B2680;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32652
	ctx.r9.s64 = ctx.r9.s64 + -32652;
	// stw r11,-28232(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28232, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// bl 0x82a4c758
	ctx.lr = 0x823B2680;
	sub_82A4C758(ctx, base);
loc_823B2680:
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

__attribute__((alias("__imp__sub_823B2698"))) PPC_WEAK_FUNC(sub_823B2698);
PPC_FUNC_IMPL(__imp__sub_823B2698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B26B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b26f4
	if (ctx.cr0.eq) goto loc_823B26F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B26C0;
	sub_8253B600(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-32632
	ctx.r11.s64 = ctx.r11.s64 + -32632;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-30184
	ctx.r10.s64 = ctx.r10.s64 + -30184;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b26f8
	goto loc_823B26F8;
loc_823B26F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B26F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2710"))) PPC_WEAK_FUNC(sub_823B2710);
PPC_FUNC_IMPL(__imp__sub_823B2710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2750
	if (!ctx.cr0.eq) goto loc_823B2750;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30956(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30956, ctx.r11.u32);
	// addi r3,r9,-14632
	ctx.r3.s64 = ctx.r9.s64 + -14632;
	// bl 0x82816528
	ctx.lr = 0x823B2748;
	sub_82816528(ctx, base);
	// stw r3,-30960(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30960, ctx.r3.u32);
	// b 0x823b2754
	goto loc_823B2754;
loc_823B2750:
	// lwz r3,-30960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30960);
loc_823B2754:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2768"))) PPC_WEAK_FUNC(sub_823B2768);
PPC_FUNC_IMPL(__imp__sub_823B2768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b27b8
	ctx.lr = 0x823B2788;
	sub_823B27B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B279C;
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

__attribute__((alias("__imp__sub_823B27B8"))) PPC_WEAK_FUNC(sub_823B27B8);
PPC_FUNC_IMPL(__imp__sub_823B27B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28220
	ctx.r31.s64 = ctx.r11.s64 + -28220;
	// lwz r11,-28224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28224);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2800
	if (!ctx.cr0.eq) goto loc_823B2800;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30132
	ctx.r9.s64 = ctx.r9.s64 + -30132;
	// stw r11,-28224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28224, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21848
	ctx.r3.s64 = ctx.r11.s64 + -21848;
	// bl 0x82a4c758
	ctx.lr = 0x823B2800;
	sub_82A4C758(ctx, base);
loc_823B2800:
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

__attribute__((alias("__imp__sub_823B2818"))) PPC_WEAK_FUNC(sub_823B2818);
PPC_FUNC_IMPL(__imp__sub_823B2818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2830;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b28a8
	if (ctx.cr0.eq) goto loc_823B28A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2840;
	sub_8253B600(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r11.u32);
	// stw r10,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r10.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r9,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,18067
	ctx.r5.s64 = 1184038912;
	// addi r4,r31,6924
	ctx.r4.s64 = ctx.r31.s64 + 6924;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,19860
	ctx.r5.u64 = ctx.r5.u64 | 19860;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x823B28A0;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823b28ac
	goto loc_823B28AC;
loc_823B28A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B28AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B28C0"))) PPC_WEAK_FUNC(sub_823B28C0);
PPC_FUNC_IMPL(__imp__sub_823B28C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2900
	if (!ctx.cr0.eq) goto loc_823B2900;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30964, ctx.r11.u32);
	// addi r3,r9,-14528
	ctx.r3.s64 = ctx.r9.s64 + -14528;
	// bl 0x82816528
	ctx.lr = 0x823B28F8;
	sub_82816528(ctx, base);
	// stw r3,-30968(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30968, ctx.r3.u32);
	// b 0x823b2904
	goto loc_823B2904;
loc_823B2900:
	// lwz r3,-30968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30968);
loc_823B2904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2918"))) PPC_WEAK_FUNC(sub_823B2918);
PPC_FUNC_IMPL(__imp__sub_823B2918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2968
	ctx.lr = 0x823B2938;
	sub_823B2968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B294C;
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

__attribute__((alias("__imp__sub_823B2968"))) PPC_WEAK_FUNC(sub_823B2968);
PPC_FUNC_IMPL(__imp__sub_823B2968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28212
	ctx.r31.s64 = ctx.r11.s64 + -28212;
	// lwz r11,-28216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b29b0
	if (!ctx.cr0.eq) goto loc_823B29B0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30112
	ctx.r9.s64 = ctx.r9.s64 + -30112;
	// stw r11,-28216(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28216, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21872
	ctx.r3.s64 = ctx.r11.s64 + -21872;
	// bl 0x82a4c758
	ctx.lr = 0x823B29B0;
	sub_82A4C758(ctx, base);
loc_823B29B0:
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

__attribute__((alias("__imp__sub_823B29C8"))) PPC_WEAK_FUNC(sub_823B29C8);
PPC_FUNC_IMPL(__imp__sub_823B29C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B29E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b2a2c
	if (ctx.cr0.eq) goto loc_823B2A2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B29F0;
	sub_8253B600(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-30088
	ctx.r11.s64 = ctx.r11.s64 + -30088;
	// addi r10,r10,-27640
	ctx.r10.s64 = ctx.r10.s64 + -27640;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b2a30
	goto loc_823B2A30;
loc_823B2A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2A48"))) PPC_WEAK_FUNC(sub_823B2A48);
PPC_FUNC_IMPL(__imp__sub_823B2A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2a88
	if (!ctx.cr0.eq) goto loc_823B2A88;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30972(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30972, ctx.r11.u32);
	// addi r3,r9,-14496
	ctx.r3.s64 = ctx.r9.s64 + -14496;
	// bl 0x82816528
	ctx.lr = 0x823B2A80;
	sub_82816528(ctx, base);
	// stw r3,-30976(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30976, ctx.r3.u32);
	// b 0x823b2a8c
	goto loc_823B2A8C;
loc_823B2A88:
	// lwz r3,-30976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30976);
loc_823B2A8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2AA0"))) PPC_WEAK_FUNC(sub_823B2AA0);
PPC_FUNC_IMPL(__imp__sub_823B2AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2af0
	ctx.lr = 0x823B2AC0;
	sub_823B2AF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2AD4;
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

__attribute__((alias("__imp__sub_823B2AF0"))) PPC_WEAK_FUNC(sub_823B2AF0);
PPC_FUNC_IMPL(__imp__sub_823B2AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28204
	ctx.r31.s64 = ctx.r11.s64 + -28204;
	// lwz r11,-28208(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28208);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2b38
	if (!ctx.cr0.eq) goto loc_823B2B38;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27588
	ctx.r9.s64 = ctx.r9.s64 + -27588;
	// stw r11,-28208(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28208, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21896
	ctx.r3.s64 = ctx.r11.s64 + -21896;
	// bl 0x82a4c758
	ctx.lr = 0x823B2B38;
	sub_82A4C758(ctx, base);
loc_823B2B38:
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

__attribute__((alias("__imp__sub_823B2B50"))) PPC_WEAK_FUNC(sub_823B2B50);
PPC_FUNC_IMPL(__imp__sub_823B2B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2B68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b2bb4
	if (ctx.cr0.eq) goto loc_823B2BB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2B78;
	sub_8253B600(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-27568
	ctx.r11.s64 = ctx.r11.s64 + -27568;
	// addi r10,r10,-25120
	ctx.r10.s64 = ctx.r10.s64 + -25120;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b2bb8
	goto loc_823B2BB8;
loc_823B2BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2BB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2BD0"))) PPC_WEAK_FUNC(sub_823B2BD0);
PPC_FUNC_IMPL(__imp__sub_823B2BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-30980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2c10
	if (!ctx.cr0.eq) goto loc_823B2C10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-30980(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30980, ctx.r11.u32);
	// addi r3,r9,-14368
	ctx.r3.s64 = ctx.r9.s64 + -14368;
	// bl 0x82816528
	ctx.lr = 0x823B2C08;
	sub_82816528(ctx, base);
	// stw r3,-30984(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30984, ctx.r3.u32);
	// b 0x823b2c14
	goto loc_823B2C14;
loc_823B2C10:
	// lwz r3,-30984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30984);
loc_823B2C14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2C28"))) PPC_WEAK_FUNC(sub_823B2C28);
PPC_FUNC_IMPL(__imp__sub_823B2C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2c78
	ctx.lr = 0x823B2C48;
	sub_823B2C78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823B2C5C;
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

__attribute__((alias("__imp__sub_823B2C78"))) PPC_WEAK_FUNC(sub_823B2C78);
PPC_FUNC_IMPL(__imp__sub_823B2C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,-28196
	ctx.r31.s64 = ctx.r11.s64 + -28196;
	// lwz r11,-28200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28200);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823b2cc0
	if (!ctx.cr0.eq) goto loc_823B2CC0;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25068
	ctx.r9.s64 = ctx.r9.s64 + -25068;
	// stw r11,-28200(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28200, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-21920
	ctx.r3.s64 = ctx.r11.s64 + -21920;
	// bl 0x82a4c758
	ctx.lr = 0x823B2CC0;
	sub_82A4C758(ctx, base);
loc_823B2CC0:
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

__attribute__((alias("__imp__sub_823B2CD8"))) PPC_WEAK_FUNC(sub_823B2CD8);
PPC_FUNC_IMPL(__imp__sub_823B2CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x823B2CF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823b2d3c
	if (ctx.cr0.eq) goto loc_823B2D3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253b600
	ctx.lr = 0x823B2D00;
	sub_8253B600(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// addi r10,r10,-22600
	ctx.r10.s64 = ctx.r10.s64 + -22600;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
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
	// b 0x823b2d40
	goto loc_823B2D40;
loc_823B2D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B2D40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B2D58"))) PPC_WEAK_FUNC(sub_823B2D58);
PPC_FUNC_IMPL(__imp__sub_823B2D58) {
	PPC_FUNC_PROLOGUE();
	// li r3,7040
	ctx.r3.s64 = 7040;
	// blr 
	return;
}

