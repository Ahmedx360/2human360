#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82946880"))) PPC_WEAK_FUNC(sub_82946880);
PPC_FUNC_IMPL(__imp__sub_82946880) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,23084
	ctx.r3.s64 = ctx.r11.s64 + 23084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946890"))) PPC_WEAK_FUNC(sub_82946890);
PPC_FUNC_IMPL(__imp__sub_82946890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82946898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x829468A8;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r29,28(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x829468C0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829468fc
	if (ctx.cr0.eq) goto loc_829468FC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,36
	ctx.r9.s64 = 36;
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
	// b 0x82946900
	goto loc_82946900;
loc_829468FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82946900:
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r29.u32);
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x8294691C;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946928"))) PPC_WEAK_FUNC(sub_82946928);
PPC_FUNC_IMPL(__imp__sub_82946928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82946978
	ctx.lr = 0x82946948;
	sub_82946978(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294695c
	if (ctx.cr6.eq) goto loc_8294695C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8294695C;
	sub_82333B08(ctx, base);
loc_8294695C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946978"))) PPC_WEAK_FUNC(sub_82946978);
PPC_FUNC_IMPL(__imp__sub_82946978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18396
	ctx.r31.s64 = ctx.r11.s64 + 18396;
	// lwz r11,18392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829469c0
	if (!ctx.cr0.eq) goto loc_829469C0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23368
	ctx.r9.s64 = ctx.r9.s64 + 23368;
	// stw r11,18392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18392, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12144
	ctx.r3.s64 = ctx.r11.s64 + -12144;
	// bl 0x82a4c758
	ctx.lr = 0x829469C0;
	sub_82A4C758(ctx, base);
loc_829469C0:
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

__attribute__((alias("__imp__sub_829469D8"))) PPC_WEAK_FUNC(sub_829469D8);
PPC_FUNC_IMPL(__imp__sub_829469D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26944(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26944);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82946a18
	if (!ctx.cr0.eq) goto loc_82946A18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26944(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26944, ctx.r11.u32);
	// addi r3,r9,23132
	ctx.r3.s64 = ctx.r9.s64 + 23132;
	// bl 0x82816528
	ctx.lr = 0x82946A10;
	sub_82816528(ctx, base);
	// stw r3,-26948(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26948, ctx.r3.u32);
	// b 0x82946a1c
	goto loc_82946A1C;
loc_82946A18:
	// lwz r3,-26948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26948);
loc_82946A1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946A30"))) PPC_WEAK_FUNC(sub_82946A30);
PPC_FUNC_IMPL(__imp__sub_82946A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82946978
	ctx.lr = 0x82946A50;
	sub_82946978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82946A64;
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

__attribute__((alias("__imp__sub_82946A80"))) PPC_WEAK_FUNC(sub_82946A80);
PPC_FUNC_IMPL(__imp__sub_82946A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82946ab8
	if (ctx.cr6.eq) goto loc_82946AB8;
	// bl 0x82946978
	ctx.lr = 0x82946AA8;
	sub_82946978(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82946ab8
	if (!ctx.cr6.eq) goto loc_82946AB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82946ac4
	goto loc_82946AC4;
loc_82946AB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82946AC4;
	sub_82333C70(ctx, base);
loc_82946AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946AE0"))) PPC_WEAK_FUNC(sub_82946AE0);
PPC_FUNC_IMPL(__imp__sub_82946AE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82946978
	sub_82946978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946AE8"))) PPC_WEAK_FUNC(sub_82946AE8);
PPC_FUNC_IMPL(__imp__sub_82946AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x82946B04;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82946b6c
	if (ctx.cr0.eq) goto loc_82946B6C;
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
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23288
	ctx.r9.s64 = ctx.r9.s64 + 23288;
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
	// b 0x82946b70
	goto loc_82946B70;
loc_82946B6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82946B70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946B88"))) PPC_WEAK_FUNC(sub_82946B88);
PPC_FUNC_IMPL(__imp__sub_82946B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,23132
	ctx.r3.s64 = ctx.r11.s64 + 23132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946B98"))) PPC_WEAK_FUNC(sub_82946B98);
PPC_FUNC_IMPL(__imp__sub_82946B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82946BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x82946BB0;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r29,28(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r28,24(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x82946BC8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82946c04
	if (ctx.cr0.eq) goto loc_82946C04;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,37
	ctx.r9.s64 = 37;
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
	// b 0x82946c08
	goto loc_82946C08;
loc_82946C04:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82946C08:
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r28,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r29.u32);
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x82946C24;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946C30"))) PPC_WEAK_FUNC(sub_82946C30);
PPC_FUNC_IMPL(__imp__sub_82946C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82946C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r10,7312
	ctx.r3.s64 = ctx.r10.s64 + 7312;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82946C60;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846e98
	ctx.lr = 0x82946C74;
	sub_82846E98(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946CB0"))) PPC_WEAK_FUNC(sub_82946CB0);
PPC_FUNC_IMPL(__imp__sub_82946CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82946CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82946CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82946D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946D10"))) PPC_WEAK_FUNC(sub_82946D10);
PPC_FUNC_IMPL(__imp__sub_82946D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880860
	ctx.lr = 0x82946D30;
	sub_82880860(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82946d40
	if (!ctx.cr6.eq) goto loc_82946D40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82946d58
	goto loc_82946D58;
loc_82946D40:
	// bl 0x828e67a8
	ctx.lr = 0x82946D44;
	sub_828E67A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82946d58
	if (ctx.cr6.eq) goto loc_82946D58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x82946D58;
	sub_82881A78(ctx, base);
loc_82946D58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946D70"))) PPC_WEAK_FUNC(sub_82946D70);
PPC_FUNC_IMPL(__imp__sub_82946D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82946da8
	if (ctx.cr6.eq) goto loc_82946DA8;
	// bl 0x82880860
	ctx.lr = 0x82946D98;
	sub_82880860(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82946da8
	if (!ctx.cr6.eq) goto loc_82946DA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82946db4
	goto loc_82946DB4;
loc_82946DA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829423b8
	ctx.lr = 0x82946DB4;
	sub_829423B8(ctx, base);
loc_82946DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946DD0"))) PPC_WEAK_FUNC(sub_82946DD0);
PPC_FUNC_IMPL(__imp__sub_82946DD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82880860
	sub_82880860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946DD8"))) PPC_WEAK_FUNC(sub_82946DD8);
PPC_FUNC_IMPL(__imp__sub_82946DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82946DF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82946e54
	if (ctx.cr0.eq) goto loc_82946E54;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,23392
	ctx.r11.s64 = ctx.r11.s64 + 23392;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82946e58
	goto loc_82946E58;
loc_82946E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82946E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946E70"))) PPC_WEAK_FUNC(sub_82946E70);
PPC_FUNC_IMPL(__imp__sub_82946E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24508
	ctx.r3.s64 = ctx.r11.s64 + 24508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946E80"))) PPC_WEAK_FUNC(sub_82946E80);
PPC_FUNC_IMPL(__imp__sub_82946E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-252
	ctx.r3.s64 = ctx.r11.s64 + -252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946E90"))) PPC_WEAK_FUNC(sub_82946E90);
PPC_FUNC_IMPL(__imp__sub_82946E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82946ec8
	if (ctx.cr6.eq) goto loc_82946EC8;
	// bl 0x8287a360
	ctx.lr = 0x82946EB8;
	sub_8287A360(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82946ec8
	if (!ctx.cr6.eq) goto loc_82946EC8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82946ed4
	goto loc_82946ED4;
loc_82946EC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82946ED4;
	sub_82338A28(ctx, base);
loc_82946ED4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946EF0"))) PPC_WEAK_FUNC(sub_82946EF0);
PPC_FUNC_IMPL(__imp__sub_82946EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8287a360
	sub_8287A360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82946EF8"))) PPC_WEAK_FUNC(sub_82946EF8);
PPC_FUNC_IMPL(__imp__sub_82946EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x82946F14;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82946f28
	if (ctx.cr0.eq) goto loc_82946F28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82946fa8
	ctx.lr = 0x82946F24;
	sub_82946FA8(ctx, base);
	// b 0x82946f2c
	goto loc_82946F2C;
loc_82946F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82946F2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946F40"))) PPC_WEAK_FUNC(sub_82946F40);
PPC_FUNC_IMPL(__imp__sub_82946F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8287a360
	ctx.lr = 0x82946F60;
	sub_8287A360(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82946f70
	if (!ctx.cr6.eq) goto loc_82946F70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82946f88
	goto loc_82946F88;
loc_82946F70:
	// bl 0x82338750
	ctx.lr = 0x82946F74;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82946f88
	if (ctx.cr6.eq) goto loc_82946F88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82946F88;
	sub_82338858(ctx, base);
loc_82946F88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946FA0"))) PPC_WEAK_FUNC(sub_82946FA0);
PPC_FUNC_IMPL(__imp__sub_82946FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82946FA8"))) PPC_WEAK_FUNC(sub_82946FA8);
PPC_FUNC_IMPL(__imp__sub_82946FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82946FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x82946FC0;
	sub_82338B88(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,23512
	ctx.r11.s64 = ctx.r11.s64 + 23512;
	// addi r10,r10,24524
	ctx.r10.s64 = ctx.r10.s64 + 24524;
	// addi r9,r9,24576
	ctx.r9.s64 = ctx.r9.s64 + 24576;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r4,r29,1412
	ctx.r4.s64 = ctx.r29.s64 + 1412;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// addi r3,r30,1412
	ctx.r3.s64 = ctx.r30.s64 + 1412;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// stw r11,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r11.u32);
	// bl 0x82947148
	ctx.lr = 0x82946FF8;
	sub_82947148(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,1648
	ctx.r31.s64 = ctx.r30.s64 + 1648;
	// addi r29,r29,1648
	ctx.r29.s64 = ctx.r29.s64 + 1648;
	// stw r11,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r11.u32);
	// stw r11,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r11.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r10.u32);
	// stw r11,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r11.u32);
	// stw r11,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r11.u32);
	// beq cr6,0x82947070
	if (ctx.cr6.eq) goto loc_82947070;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82947070
	if (!ctx.cr6.gt) goto loc_82947070;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82947054
	if (ctx.cr0.eq) goto loc_82947054;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82947054;
	sub_82332C38(ctx, base);
loc_82947054:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82947068;
	sub_82A45878(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82947070:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947080"))) PPC_WEAK_FUNC(sub_82947080);
PPC_FUNC_IMPL(__imp__sub_82947080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82947088;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r27,1648
	ctx.r31.s64 = ctx.r27.s64 + 1648;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1664(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1664);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x829470B0;
	sub_82332CA8(ctx, base);
	// lwz r3,1660(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1660);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829470c0
	if (ctx.cr6.eq) goto loc_829470C0;
	// bl 0x82332db8
	ctx.lr = 0x829470C0;
	sub_82332DB8(ctx, base);
loc_829470C0:
	// addi r28,r27,1412
	ctx.r28.s64 = ctx.r27.s64 + 1412;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
loc_829470E0:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82948f28
	ctx.lr = 0x829470EC;
	sub_82948F28(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x829470e0
	if (!ctx.cr0.lt) goto loc_829470E0;
	// addi r31,r30,104
	ctx.r31.s64 = ctx.r30.s64 + 104;
	// li r30,1
	ctx.r30.s64 = 1;
loc_829470FC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82948f28
	ctx.lr = 0x82947108;
	sub_82948F28(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x829470fc
	if (!ctx.cr0.lt) goto loc_829470FC;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x82948db0
	ctx.lr = 0x82947118;
	sub_82948DB0(ctx, base);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x8239d768
	ctx.lr = 0x82947120;
	sub_8239D768(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82947128;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947138
	if (ctx.cr0.eq) goto loc_82947138;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332db8
	ctx.lr = 0x82947138;
	sub_82332DB8(ctx, base);
loc_82947138:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947148"))) PPC_WEAK_FUNC(sub_82947148);
PPC_FUNC_IMPL(__imp__sub_82947148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82947150;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r30.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// beq cr6,0x829471e4
	if (ctx.cr6.eq) goto loc_829471E4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829471e4
	if (!ctx.cr6.gt) goto loc_829471E4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829471c8
	if (ctx.cr0.eq) goto loc_829471C8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829471C8;
	sub_82332C38(ctx, base);
loc_829471C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x829471DC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_829471E4:
	// addi r31,r29,32
	ctx.r31.s64 = ctx.r29.s64 + 32;
	// stw r30,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r30.u32);
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(ctx.r29.u32 + 52, ctx.r30.u32);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
	// beq cr6,0x82947290
	if (ctx.cr6.eq) goto loc_82947290;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82947290
	if (!ctx.cr6.gt) goto loc_82947290;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8294723c
	if (ctx.cr0.eq) goto loc_8294723C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8294723C;
	sub_82332C38(ctx, base);
loc_8294723C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82947290
	if (!ctx.cr6.gt) goto loc_82947290;
loc_8294724C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82947260;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294727c
	if (ctx.cr0.eq) goto loc_8294727C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82948fb0
	ctx.lr = 0x8294727C;
	sub_82948FB0(ctx, base);
loc_8294727C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294724c
	if (ctx.cr6.lt) goto loc_8294724C;
loc_82947290:
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82a4ea80
	ctx.lr = 0x829472A0;
	sub_82A4EA80(ctx, base);
	// addi r11,r28,104
	ctx.r11.s64 = ctx.r28.s64 + 104;
	// li r30,1
	ctx.r30.s64 = 1;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r27,r10,104
	ctx.r27.s64 = ctx.r10.s64 + 104;
loc_829472B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r27,r31
	ctx.r3.u64 = ctx.r27.u64 + ctx.r31.u64;
	// bl 0x82948e60
	ctx.lr = 0x829472C0;
	sub_82948E60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bge 0x829472b4
	if (!ctx.cr0.lt) goto loc_829472B4;
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// li r30,1
	ctx.r30.s64 = 1;
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r27,r10,152
	ctx.r27.s64 = ctx.r10.s64 + 152;
loc_829472E0:
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82948e60
	ctx.lr = 0x829472EC;
	sub_82948E60(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bge 0x829472e0
	if (!ctx.cr0.lt) goto loc_829472E0;
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r11.u32);
	// lwz r11,204(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// stw r11,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r11.u32);
	// lwz r11,208(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 208);
	// stw r11,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r11.u32);
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// stw r11,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r11.u32);
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// stw r11,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r11.u32);
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// stw r11,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r11.u32);
	// lfs f0,224(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 224, temp.u32);
	// lfs f0,228(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 228, temp.u32);
	// lwz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// stw r11,232(r29)
	PPC_STORE_U32(ctx.r29.u32 + 232, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947350"))) PPC_WEAK_FUNC(sub_82947350);
PPC_FUNC_IMPL(__imp__sub_82947350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82947358;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829473d4
	if (!ctx.cr6.gt) goto loc_829473D4;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x829473d4
	if (!ctx.cr6.gt) goto loc_829473D4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 * 48;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8294758c
	goto loc_8294758C;
loc_829473D4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8294744c
	if (!ctx.cr6.lt) goto loc_8294744C;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8294744c
	if (!ctx.cr6.gt) goto loc_8294744C;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blt cr6,0x8294743c
	if (ctx.cr6.lt) goto loc_8294743C;
	// bne cr6,0x8294759c
	if (!ctx.cr6.eq) goto loc_8294759C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f1,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
loc_8294740C:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mulli r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 * 48;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829475a8
	ctx.lr = 0x82947424;
	sub_829475A8(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_82947428:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x82947594
	goto loc_82947594;
loc_8294743C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// b 0x8294740c
	goto loc_8294740C;
loc_8294744C:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8294759c
	if (!ctx.cr6.lt) goto loc_8294759C;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8294753c
	if (!ctx.cr6.gt) goto loc_8294753C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8294753c
	if (!ctx.cr6.lt) goto loc_8294753C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829474f0
	if (ctx.cr6.lt) goto loc_829474F0;
	// bne cr6,0x8294759c
	if (!ctx.cr6.eq) goto loc_8294759C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 * 48;
	// lfs f1,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829475a8
	ctx.lr = 0x829474A0;
	sub_829475A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294759c
	if (!ctx.cr6.gt) goto loc_8294759C;
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829474B8:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82947350
	ctx.lr = 0x829474D8;
	sub_82947350(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829474b8
	if (ctx.cr6.lt) goto loc_829474B8;
	// b 0x8294759c
	goto loc_8294759C;
loc_829474F0:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8294759c
	if (!ctx.cr6.gt) goto loc_8294759C;
	// addi r26,r30,1
	ctx.r26.s64 = ctx.r30.s64 + 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82947504:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82947350
	ctx.lr = 0x82947524;
	sub_82947350(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947504
	if (ctx.cr6.lt) goto loc_82947504;
	// b 0x8294759c
	goto loc_8294759C;
loc_8294753C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82947578
	if (ctx.cr6.lt) goto loc_82947578;
	// bne cr6,0x8294759c
	if (!ctx.cr6.eq) goto loc_8294759C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 * 48;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829475a8
	ctx.lr = 0x82947570;
	sub_829475A8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82947428
	goto loc_82947428;
loc_82947578:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mulli r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8294758C:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f1,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
loc_82947594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829475a8
	ctx.lr = 0x8294759C;
	sub_829475A8(ctx, base);
loc_8294759C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829475A8"))) PPC_WEAK_FUNC(sub_829475A8);
PPC_FUNC_IMPL(__imp__sub_829475A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829475B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82947628
	if (!ctx.cr6.gt) goto loc_82947628;
	// addi r26,r31,24
	ctx.r26.s64 = ctx.r31.s64 + 24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_829475D8:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829475F0;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947608
	if (ctx.cr0.eq) goto loc_82947608;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82947608:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fc978
	ctx.lr = 0x82947614;
	sub_824FC978(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829475d8
	if (ctx.cr6.lt) goto loc_829475D8;
loc_82947628:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947630"))) PPC_WEAK_FUNC(sub_82947630);
PPC_FUNC_IMPL(__imp__sub_82947630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82947638;
	__savegprlr_15(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,56
	ctx.r10.s64 = 56;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// mr r16,r31
	ctx.r16.u64 = ctx.r31.u64;
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfs f0,56(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 224, temp.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lfs f0,60(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// lwz r11,64(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// stw r11,232(r30)
	PPC_STORE_U32(ctx.r30.u32 + 232, ctx.r11.u32);
	// lwz r10,12(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r29,r10,r18
	ctx.r29.u64 = ctx.r10.u64 + ctx.r18.u64;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// beq cr6,0x8294778c
	if (ctx.cr6.eq) goto loc_8294778C;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82947728
	if (!ctx.cr6.gt) goto loc_82947728;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_829476E0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332d50
	ctx.lr = 0x829476F4;
	sub_82332D50(ctx, base);
	// lwz r17,172(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add. r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947710
	if (ctx.cr0.eq) goto loc_82947710;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82947710;
	sub_82A4EA80(ctx, base);
loc_82947710:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829476e0
	if (ctx.cr6.lt) goto loc_829476E0;
	// lwz r15,176(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82947728:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294778c
	if (!ctx.cr6.gt) goto loc_8294778C;
loc_82947738:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332d50
	ctx.lr = 0x8294774C;
	sub_82332D50(ctx, base);
	// lwz r26,140(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// add. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947774
	if (ctx.cr0.eq) goto loc_82947774;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82947774:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947738
	if (ctx.cr6.lt) goto loc_82947738;
	// lwz r16,144(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_8294778C:
	// lfs f0,40(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 + 68;
	// lfs f0,32(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,36(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r9.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f11,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lfs f10,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,52(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// lfs f13,48(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r30,32
	ctx.r19.s64 = ctx.r30.s64 + 32;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,44(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r10.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lfs f9,68(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stw r10,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r10.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r9.u32);
	// stw r8,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r8.u32);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829478b0
	if (!ctx.cr6.gt) goto loc_829478B0;
	// stw r16,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332c38
	ctx.lr = 0x829478B0;
	sub_82332C38(ctx, base);
loc_829478B0:
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r20,r30,104
	ctx.r20.s64 = ctx.r30.s64 + 104;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829478d4
	if (!ctx.cr6.gt) goto loc_829478D4;
	// stw r16,20(r20)
	PPC_STORE_U32(ctx.r20.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332c38
	ctx.lr = 0x829478D4;
	sub_82332C38(ctx, base);
loc_829478D4:
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// addi r22,r30,128
	ctx.r22.s64 = ctx.r30.s64 + 128;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829478f8
	if (!ctx.cr6.gt) goto loc_829478F8;
	// stw r16,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332c38
	ctx.lr = 0x829478F8;
	sub_82332C38(ctx, base);
loc_829478F8:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// addi r24,r30,152
	ctx.r24.s64 = ctx.r30.s64 + 152;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8294791c
	if (!ctx.cr6.gt) goto loc_8294791C;
	// stw r16,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x8294791C;
	sub_82332C38(ctx, base);
loc_8294791C:
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// addi r25,r30,176
	ctx.r25.s64 = ctx.r30.s64 + 176;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82947940
	if (!ctx.cr6.gt) goto loc_82947940;
	// stw r16,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r16.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x82947940;
	sub_82332C38(ctx, base);
loc_82947940:
	// li r29,4
	ctx.r29.s64 = 4;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82947c54
	if (!ctx.cr6.gt) goto loc_82947C54;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
loc_82947950:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ble cr6,0x82947a38
	if (!ctx.cr6.gt) goto loc_82947A38;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82947988:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82947998;
	sub_82A4EA80(ctx, base);
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// li r9,16
	ctx.r9.s64 = 16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829479A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x829479a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829479A8;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x826c8a28
	ctx.lr = 0x829479C8;
	sub_826C8A28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829479D8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x829479d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829479D8;
	// lwz r11,448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947A08;
	sub_82332D50(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mulli r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 * 144;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947a24
	if (ctx.cr0.eq) goto loc_82947A24;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82a4ea80
	ctx.lr = 0x82947A24;
	sub_82A4EA80(ctx, base);
loc_82947A24:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,68
	ctx.r28.s64 = ctx.r28.s64 + 68;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947988
	if (ctx.cr6.lt) goto loc_82947988;
loc_82947A38:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332d50
	ctx.lr = 0x82947A4C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947a64
	if (ctx.cr0.eq) goto loc_82947A64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82948fb0
	ctx.lr = 0x82947A64;
	sub_82948FB0(ctx, base);
loc_82947A64:
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947AA8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947ac0
	if (ctx.cr0.eq) goto loc_82947AC0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x82949078
	ctx.lr = 0x82947AC0;
	sub_82949078(ctx, base);
loc_82947AC0:
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8239d768
	ctx.lr = 0x82947AC8;
	sub_8239D768(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8239d768
	ctx.lr = 0x82947AD0;
	sub_8239D768(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947B14;
	sub_82332D50(ctx, base);
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947b2c
	if (ctx.cr0.eq) goto loc_82947B2C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82949078
	ctx.lr = 0x82947B2C;
	sub_82949078(ctx, base);
loc_82947B2C:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8239d768
	ctx.lr = 0x82947B34;
	sub_8239D768(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8239d768
	ctx.lr = 0x82947B3C;
	sub_8239D768(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r29,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r29.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947B80;
	sub_82332D50(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947b98
	if (ctx.cr0.eq) goto loc_82947B98;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x82949078
	ctx.lr = 0x82947B98;
	sub_82949078(ctx, base);
loc_82947B98:
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x8239d768
	ctx.lr = 0x82947BA0;
	sub_8239D768(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8239d768
	ctx.lr = 0x82947BA8;
	sub_8239D768(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r29,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r29.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947BEC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mulli r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 * 48;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82947c04
	if (ctx.cr0.eq) goto loc_82947C04;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x82949078
	ctx.lr = 0x82947C04;
	sub_82949078(ctx, base);
loc_82947C04:
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8239d768
	ctx.lr = 0x82947C0C;
	sub_8239D768(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8239d768
	ctx.lr = 0x82947C14;
	sub_8239D768(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,144
	ctx.r6.s64 = 144;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332ca8
	ctx.lr = 0x82947C2C;
	sub_82332CA8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82947c3c
	if (ctx.cr6.eq) goto loc_82947C3C;
	// bl 0x82332db8
	ctx.lr = 0x82947C3C;
	sub_82332DB8(ctx, base);
loc_82947C3C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bne 0x82947950
	if (!ctx.cr0.eq) goto loc_82947950;
loc_82947C54:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// ble cr6,0x82947d7c
	if (!ctx.cr6.gt) goto loc_82947D7C;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
loc_82947C80:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82947e40
	ctx.lr = 0x82947C90;
	sub_82947E40(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// lwz r11,64(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// stw r11,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947CB8;
	sub_82332D50(ctx, base);
	// lwz r24,108(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947ccc
	if (ctx.cr0.eq) goto loc_82947CCC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82947CCC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,56
	ctx.r28.s64 = ctx.r28.s64 + 56;
	// bne 0x82947c80
	if (!ctx.cr0.eq) goto loc_82947C80;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82947d7c
	if (!ctx.cr6.gt) goto loc_82947D7C;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// addi r29,r17,48
	ctx.r29.s64 = ctx.r17.s64 + 48;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_82947CEC:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82947d08
	if (!ctx.cr6.gt) goto loc_82947D08;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
loc_82947D08:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82947d6c
	if (!ctx.cr6.gt) goto loc_82947D6C;
	// addi r27,r10,80
	ctx.r27.s64 = ctx.r10.s64 + 80;
loc_82947D24:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r26,r11,r24
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947D44;
	sub_82332D50(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947d58
	if (ctx.cr0.eq) goto loc_82947D58;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82947D58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947d24
	if (ctx.cr6.lt) goto loc_82947D24;
loc_82947D6C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bne 0x82947cec
	if (!ctx.cr0.eq) goto loc_82947CEC;
loc_82947D7C:
	// lwz r11,20(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r10,16(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82947de0
	if (!ctx.cr6.gt) goto loc_82947DE0;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82947D98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r28,r11,r24
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x82332d50
	ctx.lr = 0x82947DB8;
	sub_82332D50(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947dcc
	if (ctx.cr0.eq) goto loc_82947DCC;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82947DCC:
	// lwz r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947d98
	if (ctx.cr6.lt) goto loc_82947D98;
loc_82947DE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82947DE8;
	sub_8239D768(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82332ca8
	ctx.lr = 0x82947E00;
	sub_82332CA8(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82947e10
	if (ctx.cr6.eq) goto loc_82947E10;
	// bl 0x82332db8
	ctx.lr = 0x82947E10;
	sub_82332DB8(ctx, base);
loc_82947E10:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,56
	ctx.r6.s64 = 56;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332ca8
	ctx.lr = 0x82947E28;
	sub_82332CA8(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82947e38
	if (ctx.cr6.eq) goto loc_82947E38;
	// bl 0x82332db8
	ctx.lr = 0x82947E38;
	sub_82332DB8(ctx, base);
loc_82947E38:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947E40"))) PPC_WEAK_FUNC(sub_82947E40);
PPC_FUNC_IMPL(__imp__sub_82947E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82947E48;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// addi r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 + 12;
	// bl 0x82333900
	ctx.lr = 0x82947E64;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x82947ef8
	if (ctx.cr0.eq) goto loc_82947EF8;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_82947E8C:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x82947e8c
	if (!ctx.cr0.lt) goto loc_82947E8C;
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r28,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r28.u32);
	// stw r28,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r28.u32);
	// stw r28,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r28.u32);
	// stw r28,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r28.u32);
	// stw r28,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r28.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r28,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r28.u32);
	// b 0x82947efc
	goto loc_82947EFC;
loc_82947EF8:
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_82947EFC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r27,8
	ctx.r29.s64 = ctx.r27.s64 + 8;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r24,16
	ctx.r31.s64 = ctx.r24.s64 + 16;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r25,r27,24
	ctx.r25.s64 = ctx.r27.s64 + 24;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r22,2
	ctx.r22.s64 = 2;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,72(r24)
	PPC_STORE_U32(ctx.r24.u32 + 72, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r10.u32);
loc_82947F3C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82947fb0
	if (!ctx.cr6.gt) goto loc_82947FB0;
	// mulli r26,r10,24
	ctx.r26.s64 = ctx.r10.s64 * 24;
loc_82947F5C:
	// lwz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mulli r11,r10,144
	ctx.r11.s64 = ctx.r10.s64 * 144;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332d50
	ctx.lr = 0x82947F88;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82947f9c
	if (ctx.cr0.eq) goto loc_82947F9C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_82947F9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82947f5c
	if (ctx.cr6.lt) goto loc_82947F5C;
loc_82947FB0:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82947f3c
	if (!ctx.cr0.eq) goto loc_82947F3C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82947FD0"))) PPC_WEAK_FUNC(sub_82947FD0);
PPC_FUNC_IMPL(__imp__sub_82947FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82947FD8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r26,r11,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x829481f8
	if (ctx.cr6.eq) goto loc_829481F8;
	// addi r11,r26,5
	ctx.r11.s64 = ctx.r26.s64 + 5;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r25,r11,24
	ctx.r25.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829480f0
	if (!ctx.cr6.gt) goto loc_829480F0;
	// mulli r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 * 24;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82948034:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294805c
	if (ctx.cr6.eq) goto loc_8294805C;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8294805C;
	sub_82332C38(ctx, base);
loc_8294805C:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82948088
	if (ctx.cr6.eq) goto loc_82948088;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82948088;
	sub_82332C38(ctx, base);
loc_82948088:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829480b0
	if (ctx.cr6.eq) goto loc_829480B0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829480B0;
	sub_82332C38(ctx, base);
loc_829480B0:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829480dc
	if (ctx.cr6.eq) goto loc_829480DC;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829480DC;
	sub_82332C38(ctx, base);
loc_829480DC:
	// lwzx r11,r25,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82948034
	if (ctx.cr6.lt) goto loc_82948034;
loc_829480F0:
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294818c
	if (!ctx.cr6.gt) goto loc_8294818C;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8294818c
	if (!ctx.cr6.lt) goto loc_8294818C;
	// lfs f12,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8294818c
	if (!ctx.cr6.lt) goto loc_8294818C;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8294818c
	if (!ctx.cr6.gt) goto loc_8294818C;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x8294818c
	if (!ctx.cr6.gt) goto loc_8294818C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829481f4
	if (!ctx.cr6.gt) goto loc_829481F4;
	// mulli r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,152
	ctx.r28.s64 = ctx.r11.s64 + 152;
	// addi r27,r11,104
	ctx.r27.s64 = ctx.r11.s64 + 104;
loc_82948154:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82947350
	ctx.lr = 0x82948174;
	sub_82947350(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82948154
	if (ctx.cr6.lt) goto loc_82948154;
	// b 0x829481f4
	goto loc_829481F4;
loc_8294818C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829481f4
	if (!ctx.cr6.gt) goto loc_829481F4;
	// mulli r11,r26,24
	ctx.r11.s64 = ctx.r26.s64 * 24;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r26,53
	ctx.r10.s64 = ctx.r26.s64 + 53;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_829481B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfsx f1,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// bge cr6,0x829481d4
	if (!ctx.cr6.lt) goto loc_829481D4;
	// lwz r4,164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// b 0x829481dc
	goto loc_829481DC;
loc_829481D4:
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_829481DC:
	// bl 0x829475a8
	ctx.lr = 0x829481E0;
	sub_829475A8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829481b4
	if (ctx.cr6.lt) goto loc_829481B4;
loc_829481F4:
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
loc_829481F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82948208"))) PPC_WEAK_FUNC(sub_82948208);
PPC_FUNC_IMPL(__imp__sub_82948208) {
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
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// ori r9,r9,36008
	ctx.r9.u64 = ctx.r9.u64 | 36008;
	// lwz r30,13024(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,204(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82948398
	if (ctx.cr6.eq) goto loc_82948398;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8294825c
	if (ctx.cr6.eq) goto loc_8294825C;
	// lwz r10,108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82948394
	if (!ctx.cr6.eq) goto loc_82948394;
loc_8294825C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82948370
	if (ctx.cr6.eq) goto loc_82948370;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82948370
	if (ctx.cr6.eq) goto loc_82948370;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r4,r6,80
	ctx.r4.s64 = ctx.r6.s64 + 80;
	// addi r11,r11,-30160
	ctx.r11.s64 = ctx.r11.s64 + -30160;
	// addi r5,r6,92
	ctx.r5.s64 = ctx.r6.s64 + 92;
	// addi r3,r11,568
	ctx.r3.s64 = ctx.r11.s64 + 568;
	// bl 0x8281a320
	ctx.lr = 0x82948284;
	sub_8281A320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82948394
	if (ctx.cr0.eq) goto loc_82948394;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,224(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfd f10,16456(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16456);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82948348
	if (!ctx.cr6.gt) goto loc_82948348;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 196608;
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// ori r10,r10,35920
	ctx.r10.u64 = ctx.r10.u64 | 35920;
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r9,r9,-30096
	ctx.r9.s64 = ctx.r9.s64 + -30096;
	// lfs f0,228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfsx f7,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f13,f8,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f13,f7,f7,f13
	ctx.f13.f64 = double(float(-(ctx.f7.f64 * ctx.f7.f64 - ctx.f13.f64)));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x82948394
	if (!ctx.cr6.gt) goto loc_82948394;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82948320
	if (!ctx.cr6.lt) goto loc_82948320;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82948320
	if (!ctx.cr6.gt) goto loc_82948320;
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82948328
	goto loc_82948328;
loc_82948320:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
loc_82948328:
	// addi r11,r31,53
	ctx.r11.s64 = ctx.r31.s64 + 53;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,36012
	ctx.r11.u64 = ctx.r11.u64 | 36012;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82948390
	goto loc_82948390;
loc_82948348:
	// addi r11,r31,53
	ctx.r11.s64 = ctx.r31.s64 + 53;
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r9,36012
	ctx.r9.u64 = ctx.r9.u64 | 36012;
	// lfs f0,908(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82948390
	goto loc_82948390;
loc_82948370:
	// addi r10,r31,53
	ctx.r10.s64 = ctx.r31.s64 + 53;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r9,36012
	ctx.r9.u64 = ctx.r9.u64 | 36012;
	// lfs f0,908(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82948390:
	// stw r11,208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 208, ctx.r11.u32);
loc_82948394:
	// stw r31,204(r6)
	PPC_STORE_U32(ctx.r6.u32 + 204, ctx.r31.u32);
loc_82948398:
	// lwz r3,208(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 208);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829483B8"))) PPC_WEAK_FUNC(sub_829483B8);
PPC_FUNC_IMPL(__imp__sub_829483B8) {
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
	// bl 0x829bc540
	ctx.lr = 0x829483D0;
	sub_829BC540(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r10,24524
	ctx.r10.s64 = ctx.r10.s64 + 24524;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r11,23512
	ctx.r11.s64 = ctx.r11.s64 + 23512;
	// addi r9,r9,24576
	ctx.r9.s64 = ctx.r9.s64 + 24576;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r6,24
	ctx.r6.s64 = 24;
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// stw r5,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r5.u32);
	// stw r10,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r10.u32);
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// addi r9,r11,104
	ctx.r9.s64 = ctx.r11.s64 + 104;
	// stw r10,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r6,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// stfs f0,1472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1472, temp.u32);
	// stfs f0,1476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
loc_8294846C:
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bge 0x8294846c
	if (!ctx.cr0.lt) goto loc_8294846C;
	// addi r9,r11,152
	ctx.r9.s64 = ctx.r11.s64 + 152;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82948498:
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// stw r10,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r10.u32);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bge 0x82948498
	if (!ctx.cr0.lt) goto loc_82948498;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 208, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// stw r9,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// lfs f0,908(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,220(r11)
	PPC_STORE_U32(ctx.r11.u32 + 220, ctx.r9.u32);
	// stfs f0,212(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// stfs f0,216(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// stw r5,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r5.u32);
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// stw r10,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r10.u32);
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// stw r10,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r10.u32);
	// stw r10,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r10.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stw r7,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r7.u32);
	// stw r7,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r7.u32);
	// stw r10,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r10.u32);
	// stw r7,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r7.u32);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82948530"))) PPC_WEAK_FUNC(sub_82948530);
PPC_FUNC_IMPL(__imp__sub_82948530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v125,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829be2e8
	ctx.lr = 0x82948560;
	sub_829BE2E8(ctx, base);
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82948854
	if (!ctx.cr6.eq) goto loc_82948854;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,17344
	ctx.r11.s64 = ctx.r11.s64 + 17344;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r10,r10,17360
	ctx.r10.s64 = ctx.r10.s64 + 17360;
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r9,r9,17376
	ctx.r9.s64 = ctx.r9.s64 + 17376;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x824f97d8
	ctx.lr = 0x829485C0;
	sub_824F97D8(ctx, base);
	// lfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f0,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f13,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vmrghw128 v10,v126,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v126.u32)));
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v9,v126,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v126.u32)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// vmrghw128 v8,v127,v125
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r8,r8,17456
	ctx.r8.s64 = ctx.r8.s64 + 17456;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vmrglw128 v7,v127,v125
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vmrghw v6,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vmrghw v5,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v4,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v1,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v2,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v11,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrglw v31,v3,v12
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v12,v3,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v4,v4,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v3,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v29,v0,v31
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v31.f32), 0xFF));
	// vmsum4fp128 v1,v0,v4
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v30,v0,v12
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v28,v2,v31
	simde_mm_store_ps(ctx.v28.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v31.f32), 0xFF));
	// vmsum4fp128 v27,v13,v31
	simde_mm_store_ps(ctx.v27.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v31.f32), 0xFF));
	// vmsum4fp128 v31,v0,v31
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v31.f32), 0xFF));
	// vmsum4fp128 v26,v0,v11
	simde_mm_store_ps(ctx.v26.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v25,v0,v12
	simde_mm_store_ps(ctx.v25.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v0,v0,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32), 0xFF));
	// vmrghw v1,v1,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmsum4fp128 v30,v13,v11
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v3,v3,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmsum4fp128 v29,v13,v12
	simde_mm_store_ps(ctx.v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmrglw v10,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmsum4fp128 v13,v13,v4
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v4.f32), 0xFF));
	// vmrglw v9,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v12,v2,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v7,v2,v4
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v4.f32), 0xFF));
	// vmrghw v0,v0,v25
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v25.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v8,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmsum4fp128 v11,v2,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v31,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v31.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v26.u32)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vmsum4fp128 v3,v8,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// vmsum4fp128 v4,v8,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmrghw v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v2,v8,v10
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// vmsum4fp128 v8,v8,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,8
	ctx.r9.s64 = 8;
	// vmrghw v1,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v27.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// vmrghw v13,v13,v29
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v7,v0,v5
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmrghw v11,v11,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v28.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v13,v1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmsum4fp128 v11,v0,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v4,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmsum4fp128 v1,v13,v5
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v3,v13,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v8,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmsum4fp128 v2,v0,v9
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v5,v12,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v6,v12,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v8,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v4,v13,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v9,v12,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v12,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// stvx128 v8,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v10,v3,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v8,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v0,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v13,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829487A0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x829487a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829487A0;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x829487C4;
	sub_82A4EA80(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_829487D8:
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82948800
	if (ctx.cr6.gt) goto loc_82948800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x829487d8
	if (ctx.cr6.lt) goto loc_829487D8;
loc_82948800:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82948854
	if (!ctx.cr6.lt) goto loc_82948854;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82948840
	if (ctx.cr6.eq) goto loc_82948840;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82948840:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7850
	ctx.lr = 0x8294884C;
	sub_827E7850(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82948800
	goto loc_82948800;
loc_82948854:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v125,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82948880"))) PPC_WEAK_FUNC(sub_82948880);
PPC_FUNC_IMPL(__imp__sub_82948880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82948888;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r14,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r14.u32);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// bl 0x82949140
	ctx.lr = 0x829488A8;
	sub_82949140(ctx, base);
	// bl 0x82a3cbc8
	ctx.lr = 0x829488AC;
	sub_82A3CBC8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x829488C0;
	sub_829BCBF0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r28,r17,140
	ctx.r28.s64 = ctx.r17.s64 + 140;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// lwz r11,152(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 152);
	// stw r11,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x829488D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82846e98
	ctx.lr = 0x829488EC;
	sub_82846E98(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,168(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 168);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r10,164(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 164);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// ble cr6,0x82948990
	if (!ctx.cr6.gt) goto loc_82948990;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82948934:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332d50
	ctx.lr = 0x82948948;
	sub_82332D50(ctx, base);
	// lwz r26,172(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82948978
	if (ctx.cr0.eq) goto loc_82948978;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82948978:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82948934
	if (ctx.cr6.lt) goto loc_82948934;
	// lwz r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
loc_82948990:
	// lwz r11,1668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1668);
	// addi r31,r29,1648
	ctx.r31.s64 = ctx.r29.s64 + 1648;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x829489b4
	if (!ctx.cr6.gt) goto loc_829489B4;
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x829489B4;
	sub_82332C38(ctx, base);
loc_829489B4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x829489C8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x829489E0;
	sub_82A455D0(ctx, base);
	// li r21,4
	ctx.r21.s64 = 4;
	// li r31,3
	ctx.r31.s64 = 3;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x82332c38
	ctx.lr = 0x82948A10;
	sub_82332C38(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82948A24;
	sub_82410060(ctx, base);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82948A38;
	sub_82410060(ctx, base);
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82948A4C;
	sub_82410060(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x82332c38
	ctx.lr = 0x82948A74;
	sub_82332C38(ctx, base);
	// addi r4,r28,88
	ctx.r4.s64 = ctx.r28.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82410060
	ctx.lr = 0x82948A80;
	sub_82410060(ctx, base);
	// addi r4,r28,92
	ctx.r4.s64 = ctx.r28.s64 + 92;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82410060
	ctx.lr = 0x82948A8C;
	sub_82410060(ctx, base);
	// addi r4,r28,96
	ctx.r4.s64 = ctx.r28.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82410060
	ctx.lr = 0x82948A98;
	sub_82410060(ctx, base);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82948cb4
	if (!ctx.cr6.gt) goto loc_82948CB4;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r16,140(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// subf r15,r16,r11
	ctx.r15.s64 = ctx.r11.s64 - ctx.r16.s64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r18,r11,-16200
	ctx.r18.s64 = ctx.r11.s64 + -16200;
loc_82948AD0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82948da4
	if (!ctx.cr6.eq) goto loc_82948DA4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,4(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// bl 0x82846fb0
	ctx.lr = 0x82948AEC;
	sub_82846FB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,544
	ctx.r3.s64 = 544;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82833108
	ctx.lr = 0x82948AFC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82948bd8
	if (ctx.cr0.eq) goto loc_82948BD8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r14,68(r28)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829795a8
	ctx.lr = 0x82948B1C;
	sub_829795A8(ctx, base);
	// li r11,808
	ctx.r11.s64 = 808;
	// li r10,132
	ctx.r10.s64 = 132;
	// stw r25,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r25.u32);
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
	// addi r4,r26,132
	ctx.r4.s64 = ctx.r26.s64 + 132;
	// stw r14,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r14.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r21,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r21.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r26,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r26.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stfs f31,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82948BC4;
	sub_82A4EA80(ctx, base);
	// lwz r14,452(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// stw r24,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// b 0x82948bdc
	goto loc_82948BDC;
loc_82948BD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82948BDC:
	// lwz r10,1660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r11,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,1660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// addi r31,r29,496
	ctx.r31.s64 = ctx.r29.s64 + 496;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x82a4ea80
	ctx.lr = 0x82948C1C;
	sub_82A4EA80(ctx, base);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// addi r3,r11,208
	ctx.r3.s64 = ctx.r11.s64 + 208;
	// bl 0x82a4ea80
	ctx.lr = 0x82948C34;
	sub_82A4EA80(ctx, base);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r24,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r24.u32);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// lwzx r3,r27,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82948ca0
	if (!ctx.cr6.gt) goto loc_82948CA0;
	// add r11,r16,r27
	ctx.r11.u64 = ctx.r16.u64 + ctx.r27.u64;
	// lwzx r10,r15,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82948ca0
	if (!ctx.cr6.eq) goto loc_82948CA0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82846fb0
	ctx.lr = 0x82948C90;
	sub_82846FB0(ctx, base);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
loc_82948CA0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r20,r20,16
	ctx.r20.s64 = ctx.r20.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82948ad0
	if (ctx.cr6.lt) goto loc_82948AD0;
loc_82948CB4:
	// addi r11,r19,-2
	ctx.r11.s64 = ctx.r19.s64 + -2;
loc_82948CB8:
	// stw r11,1632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1632, ctx.r11.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,1412
	ctx.r3.s64 = ctx.r29.s64 + 1412;
	// bl 0x82947630
	ctx.lr = 0x82948CD4;
	sub_82947630(ctx, base);
	// addi r6,r17,84
	ctx.r6.s64 = ctx.r17.s64 + 84;
	// addi r5,r17,100
	ctx.r5.s64 = ctx.r17.s64 + 100;
	// addi r4,r17,48
	ctx.r4.s64 = ctx.r17.s64 + 48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826c1e08
	ctx.lr = 0x82948CE8;
	sub_826C1E08(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// ble cr6,0x82948d3c
	if (!ctx.cr6.gt) goto loc_82948D3C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_82948CF8:
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lfs f1,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// lfs f1,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82948cf8
	if (!ctx.cr0.eq) goto loc_82948CF8;
loc_82948D3C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,824(r29)
	PPC_STORE_U32(ctx.r29.u32 + 824, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82948D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239d768
	ctx.lr = 0x82948D68;
	sub_8239D768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82948D70;
	sub_8239D768(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332ca8
	ctx.lr = 0x82948D88;
	sub_82332CA8(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82948d98
	if (ctx.cr6.eq) goto loc_82948D98;
	// bl 0x82332db8
	ctx.lr = 0x82948D98;
	sub_82332DB8(ctx, base);
loc_82948D98:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
loc_82948DA4:
	// addi r11,r25,-2
	ctx.r11.s64 = ctx.r25.s64 + -2;
	// b 0x82948cb8
	goto loc_82948CB8;
}

__attribute__((alias("__imp__sub_82948DB0"))) PPC_WEAK_FUNC(sub_82948DB0);
PPC_FUNC_IMPL(__imp__sub_82948DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82948DB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82948e20
	if (!ctx.cr6.gt) goto loc_82948E20;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82948DD8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,144
	ctx.r6.s64 = 144;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x82948DF8;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82948e08
	if (ctx.cr6.eq) goto loc_82948E08;
	// bl 0x82332db8
	ctx.lr = 0x82948E08;
	sub_82332DB8(ctx, base);
loc_82948E08:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bne 0x82948dd8
	if (!ctx.cr0.eq) goto loc_82948DD8;
loc_82948E20:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82948E38;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82948e48
	if (ctx.cr6.eq) goto loc_82948E48;
	// bl 0x82332db8
	ctx.lr = 0x82948E48;
	sub_82332DB8(ctx, base);
loc_82948E48:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82948E60"))) PPC_WEAK_FUNC(sub_82948E60);
PPC_FUNC_IMPL(__imp__sub_82948E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82948E68;
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
	// li r11,48
	ctx.r11.s64 = 48;
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
	// beq cr6,0x82948f18
	if (ctx.cr6.eq) goto loc_82948F18;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82948f18
	if (!ctx.cr6.gt) goto loc_82948F18;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82948ec4
	if (ctx.cr0.eq) goto loc_82948EC4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82332c38
	ctx.lr = 0x82948EC4;
	sub_82332C38(ctx, base);
loc_82948EC4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82948f18
	if (!ctx.cr6.gt) goto loc_82948F18;
loc_82948ED4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82948EE8;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 * 48;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82948f04
	if (ctx.cr0.eq) goto loc_82948F04;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82949078
	ctx.lr = 0x82948F04;
	sub_82949078(ctx, base);
loc_82948F04:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82948ed4
	if (ctx.cr6.lt) goto loc_82948ED4;
loc_82948F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82948F28"))) PPC_WEAK_FUNC(sub_82948F28);
PPC_FUNC_IMPL(__imp__sub_82948F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82948F30;
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
	// ble cr6,0x82948f74
	if (!ctx.cr6.gt) goto loc_82948F74;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82948F50:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x8239d768
	ctx.lr = 0x82948F60;
	sub_8239D768(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239d768
	ctx.lr = 0x82948F68;
	sub_8239D768(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x82948f50
	if (!ctx.cr0.eq) goto loc_82948F50;
loc_82948F74:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82948F8C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82948f9c
	if (ctx.cr6.eq) goto loc_82948F9C;
	// bl 0x82332db8
	ctx.lr = 0x82948F9C;
	sub_82332DB8(ctx, base);
loc_82948F9C:
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

__attribute__((alias("__imp__sub_82948FB0"))) PPC_WEAK_FUNC(sub_82948FB0);
PPC_FUNC_IMPL(__imp__sub_82948FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82948FB8;
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
	// li r11,144
	ctx.r11.s64 = 144;
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
	// beq cr6,0x8294906c
	if (ctx.cr6.eq) goto loc_8294906C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294906c
	if (!ctx.cr6.gt) goto loc_8294906C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82949014
	if (ctx.cr0.eq) goto loc_82949014;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x82332c38
	ctx.lr = 0x82949014;
	sub_82332C38(ctx, base);
loc_82949014:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294906c
	if (!ctx.cr6.gt) goto loc_8294906C;
loc_82949024:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82949038;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,144
	ctx.r11.s64 = ctx.r3.s64 * 144;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82949058
	if (ctx.cr0.eq) goto loc_82949058;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,144
	ctx.r5.s64 = 144;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82949058;
	sub_82A4EA80(ctx, base);
loc_82949058:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82949024
	if (ctx.cr6.lt) goto loc_82949024;
loc_8294906C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949078"))) PPC_WEAK_FUNC(sub_82949078);
PPC_FUNC_IMPL(__imp__sub_82949078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,4
	ctx.r10.s64 = 4;
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
	// beq cr6,0x82949100
	if (ctx.cr6.eq) goto loc_82949100;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82949100
	if (!ctx.cr6.gt) goto loc_82949100;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829490e4
	if (ctx.cr0.eq) goto loc_829490E4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x829490E4;
	sub_82332C38(ctx, base);
loc_829490E4:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x829490F8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82949100:
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82873b58
	ctx.lr = 0x8294910C;
	sub_82873B58(ctx, base);
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

__attribute__((alias("__imp__sub_82949128"))) PPC_WEAK_FUNC(sub_82949128);
PPC_FUNC_IMPL(__imp__sub_82949128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82946f40
	sub_82946F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949130"))) PPC_WEAK_FUNC(sub_82949130);
PPC_FUNC_IMPL(__imp__sub_82949130) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82947080
	sub_82947080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949138"))) PPC_WEAK_FUNC(sub_82949138);
PPC_FUNC_IMPL(__imp__sub_82949138) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82947080
	sub_82947080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949140"))) PPC_WEAK_FUNC(sub_82949140);
PPC_FUNC_IMPL(__imp__sub_82949140) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,18416
	ctx.r31.s64 = ctx.r11.s64 + 18416;
	// lwz r11,19024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19024);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829491bc
	if (!ctx.cr0.eq) goto loc_829491BC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,19024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19024, ctx.r11.u32);
	// bl 0x82a3e5a0
	ctx.lr = 0x82949178;
	sub_82A3E5A0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r9,-12120
	ctx.r3.s64 = ctx.r9.s64 + -12120;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f0,596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f0,600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f0,604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x82a4c758
	ctx.lr = 0x829491BC;
	sub_82A4C758(ctx, base);
loc_829491BC:
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

__attribute__((alias("__imp__sub_829491D8"))) PPC_WEAK_FUNC(sub_829491D8);
PPC_FUNC_IMPL(__imp__sub_829491D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829491E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r10,7312
	ctx.r3.s64 = ctx.r10.s64 + 7312;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82949208;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82846e98
	ctx.lr = 0x8294921C;
	sub_82846E98(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8292cc98
	ctx.lr = 0x82949270;
	sub_8292CC98(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949290"))) PPC_WEAK_FUNC(sub_82949290);
PPC_FUNC_IMPL(__imp__sub_82949290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828806b8
	ctx.lr = 0x829492B0;
	sub_828806B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829492c0
	if (!ctx.cr6.eq) goto loc_829492C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829492d8
	goto loc_829492D8;
loc_829492C0:
	// bl 0x828e67a8
	ctx.lr = 0x829492C4;
	sub_828E67A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829492d8
	if (ctx.cr6.eq) goto loc_829492D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x829492D8;
	sub_82881A78(ctx, base);
loc_829492D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829492F0"))) PPC_WEAK_FUNC(sub_829492F0);
PPC_FUNC_IMPL(__imp__sub_829492F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82949328
	if (ctx.cr6.eq) goto loc_82949328;
	// bl 0x828806b8
	ctx.lr = 0x82949318;
	sub_828806B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949328
	if (!ctx.cr6.eq) goto loc_82949328;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82949334
	goto loc_82949334;
loc_82949328:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829423b8
	ctx.lr = 0x82949334;
	sub_829423B8(ctx, base);
loc_82949334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949350"))) PPC_WEAK_FUNC(sub_82949350);
PPC_FUNC_IMPL(__imp__sub_82949350) {
	PPC_FUNC_PROLOGUE();
	// b 0x828806b8
	sub_828806B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949358"))) PPC_WEAK_FUNC(sub_82949358);
PPC_FUNC_IMPL(__imp__sub_82949358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x82949374;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82949404
	if (ctx.cr0.eq) goto loc_82949404;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24600
	ctx.r11.s64 = ctx.r11.s64 + 24600;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x82949408
	goto loc_82949408;
loc_82949404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82949408:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949420"))) PPC_WEAK_FUNC(sub_82949420);
PPC_FUNC_IMPL(__imp__sub_82949420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24544
	ctx.r3.s64 = ctx.r11.s64 + 24544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949430"))) PPC_WEAK_FUNC(sub_82949430);
PPC_FUNC_IMPL(__imp__sub_82949430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r3,396
	ctx.r11.s64 = ctx.r3.s64 + 396;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r11.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
	// lfs f0,24(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,420(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 420, temp.u32);
	// lfs f0,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// lfs f0,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,428(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stw r9,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949480"))) PPC_WEAK_FUNC(sub_82949480);
PPC_FUNC_IMPL(__imp__sub_82949480) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// b 0x829bd700
	sub_829BD700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949490"))) PPC_WEAK_FUNC(sub_82949490);
PPC_FUNC_IMPL(__imp__sub_82949490) {
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
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82949514
	if (ctx.cr6.eq) goto loc_82949514;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82333900
	ctx.lr = 0x829494B8;
	sub_82333900(ctx, base);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// addi r11,r31,396
	ctx.r11.s64 = ctx.r31.s64 + 396;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lfs f0,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8296c3c0
	ctx.lr = 0x82949514;
	sub_8296C3C0(ctx, base);
loc_82949514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949528"))) PPC_WEAK_FUNC(sub_82949528);
PPC_FUNC_IMPL(__imp__sub_82949528) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82949580
	if (!ctx.cr6.gt) goto loc_82949580;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82949560:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829495c0
	if (ctx.cr6.eq) goto loc_829495C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82949560
	if (ctx.cr6.lt) goto loc_82949560;
loc_82949580:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x82949594;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829495a8
	if (ctx.cr0.eq) goto loc_829495A8;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_829495A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_829495C0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// bl 0x82332db8
	ctx.lr = 0x82949604;
	sub_82332DB8(ctx, base);
	// b 0x829495a8
	goto loc_829495A8;
}

__attribute__((alias("__imp__sub_82949608"))) PPC_WEAK_FUNC(sub_82949608);
PPC_FUNC_IMPL(__imp__sub_82949608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82949610
	sub_82949610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949610"))) PPC_WEAK_FUNC(sub_82949610);
PPC_FUNC_IMPL(__imp__sub_82949610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82888550
	ctx.lr = 0x82949630;
	sub_82888550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82949644
	if (ctx.cr6.eq) goto loc_82949644;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82949644;
	sub_82338858(ctx, base);
loc_82949644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949660"))) PPC_WEAK_FUNC(sub_82949660);
PPC_FUNC_IMPL(__imp__sub_82949660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82949698
	if (ctx.cr6.eq) goto loc_82949698;
	// bl 0x82888550
	ctx.lr = 0x82949688;
	sub_82888550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949698
	if (!ctx.cr6.eq) goto loc_82949698;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829496a4
	goto loc_829496A4;
loc_82949698:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x829496A4;
	sub_82338A88(ctx, base);
loc_829496A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829496C0"))) PPC_WEAK_FUNC(sub_829496C0);
PPC_FUNC_IMPL(__imp__sub_829496C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82888550
	sub_82888550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829496C8"))) PPC_WEAK_FUNC(sub_829496C8);
PPC_FUNC_IMPL(__imp__sub_829496C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,436
	ctx.r3.s64 = 436;
	// bl 0x82833108
	ctx.lr = 0x829496E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82949734
	if (ctx.cr0.eq) goto loc_82949734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823393a0
	ctx.lr = 0x829496FC;
	sub_823393A0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,24720
	ctx.r11.s64 = ctx.r11.s64 + 24720;
	// addi r10,r10,24976
	ctx.r10.s64 = ctx.r10.s64 + 24976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82a4ea80
	ctx.lr = 0x82949724;
	sub_82A4EA80(ctx, base);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// b 0x82949738
	goto loc_82949738;
loc_82949734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82949738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949750"))) PPC_WEAK_FUNC(sub_82949750);
PPC_FUNC_IMPL(__imp__sub_82949750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,22696
	ctx.r3.s64 = ctx.r11.s64 + 22696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949760"))) PPC_WEAK_FUNC(sub_82949760);
PPC_FUNC_IMPL(__imp__sub_82949760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,40(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829497D8"))) PPC_WEAK_FUNC(sub_829497D8);
PPC_FUNC_IMPL(__imp__sub_829497D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880518
	ctx.lr = 0x829497F8;
	sub_82880518(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949808
	if (!ctx.cr6.eq) goto loc_82949808;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82949820
	goto loc_82949820;
loc_82949808:
	// bl 0x828e67a8
	ctx.lr = 0x8294980C;
	sub_828E67A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82949820
	if (ctx.cr6.eq) goto loc_82949820;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x82949820;
	sub_82881A78(ctx, base);
loc_82949820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949838"))) PPC_WEAK_FUNC(sub_82949838);
PPC_FUNC_IMPL(__imp__sub_82949838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82949870
	if (ctx.cr6.eq) goto loc_82949870;
	// bl 0x82880518
	ctx.lr = 0x82949860;
	sub_82880518(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949870
	if (!ctx.cr6.eq) goto loc_82949870;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294987c
	goto loc_8294987C;
loc_82949870:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829423b8
	ctx.lr = 0x8294987C;
	sub_829423B8(ctx, base);
loc_8294987C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949898"))) PPC_WEAK_FUNC(sub_82949898);
PPC_FUNC_IMPL(__imp__sub_82949898) {
	PPC_FUNC_PROLOGUE();
	// b 0x82880518
	sub_82880518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829498A0"))) PPC_WEAK_FUNC(sub_829498A0);
PPC_FUNC_IMPL(__imp__sub_829498A0) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x829498BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82949954
	if (ctx.cr0.eq) goto loc_82949954;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25032
	ctx.r11.s64 = ctx.r11.s64 + 25032;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x82949958
	goto loc_82949958;
loc_82949954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82949958:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949970"))) PPC_WEAK_FUNC(sub_82949970);
PPC_FUNC_IMPL(__imp__sub_82949970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24576
	ctx.r3.s64 = ctx.r11.s64 + 24576;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949980"))) PPC_WEAK_FUNC(sub_82949980);
PPC_FUNC_IMPL(__imp__sub_82949980) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829499A0"))) PPC_WEAK_FUNC(sub_829499A0);
PPC_FUNC_IMPL(__imp__sub_829499A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829499A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,636(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,172(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// lwz r7,720(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r10,632(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// lhzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// lwz r29,512(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// mullw r9,r9,r7
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82949a18
	if (!ctx.cr6.gt) goto loc_82949A18;
	// lwz r26,12(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r30,508(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
loc_829499EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829499FC;
	sub_82A4EA80(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82949a78
	if (ctx.cr6.eq) goto loc_82949A78;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x829499ec
	if (ctx.cr6.lt) goto loc_829499EC;
loc_82949A18:
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817340
	ctx.lr = 0x82949A24;
	sub_82817340(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
loc_82949A4C:
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_82949A78:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lbz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lbz r6,123(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r11,121(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// lfs f13,16848(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16848);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lfd f12,16376(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16376);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f0,16368(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsel f10,f10,f10,f12
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fsel f9,f9,f9,f12
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fsel f11,f11,f11,f12
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 - ctx.f0.f64;
	// fsub f12,f9,f0
	ctx.f12.f64 = ctx.f9.f64 - ctx.f0.f64;
	// fsub f7,f11,f0
	ctx.f7.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fsub f6,f13,f0
	ctx.f6.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f10,f8,f0,f10
	ctx.f10.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fsel f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f11,f7,f0,f11
	ctx.f11.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsel f0,f6,f0,f13
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// b 0x82949a4c
	goto loc_82949A4C;
}

__attribute__((alias("__imp__sub_82949B58"))) PPC_WEAK_FUNC(sub_82949B58);
PPC_FUNC_IMPL(__imp__sub_82949B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82883ee8
	ctx.lr = 0x82949B78;
	sub_82883EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949b88
	if (!ctx.cr6.eq) goto loc_82949B88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82949ba0
	goto loc_82949BA0;
loc_82949B88:
	// bl 0x82884060
	ctx.lr = 0x82949B8C;
	sub_82884060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82949ba0
	if (ctx.cr6.eq) goto loc_82949BA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x82949BA0;
	sub_82881A78(ctx, base);
loc_82949BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949BB8"))) PPC_WEAK_FUNC(sub_82949BB8);
PPC_FUNC_IMPL(__imp__sub_82949BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82949bf0
	if (ctx.cr6.eq) goto loc_82949BF0;
	// bl 0x82883ee8
	ctx.lr = 0x82949BE0;
	sub_82883EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949bf0
	if (!ctx.cr6.eq) goto loc_82949BF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82949bfc
	goto loc_82949BFC;
loc_82949BF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82884178
	ctx.lr = 0x82949BFC;
	sub_82884178(ctx, base);
loc_82949BFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949C18"))) PPC_WEAK_FUNC(sub_82949C18);
PPC_FUNC_IMPL(__imp__sub_82949C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82883ee8
	sub_82883EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949C20"))) PPC_WEAK_FUNC(sub_82949C20);
PPC_FUNC_IMPL(__imp__sub_82949C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x82949C3C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82949c8c
	if (ctx.cr0.eq) goto loc_82949C8C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25160
	ctx.r11.s64 = ctx.r11.s64 + 25160;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82949c90
	goto loc_82949C90;
loc_82949C8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82949C90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949CA8"))) PPC_WEAK_FUNC(sub_82949CA8);
PPC_FUNC_IMPL(__imp__sub_82949CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23860
	ctx.r3.s64 = ctx.r11.s64 + 23860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949CB8"))) PPC_WEAK_FUNC(sub_82949CB8);
PPC_FUNC_IMPL(__imp__sub_82949CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82949CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r10,7312
	ctx.r3.s64 = ctx.r10.s64 + 7312;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82949CE8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82846e98
	ctx.lr = 0x82949CFC;
	sub_82846E98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8292cc98
	ctx.lr = 0x82949D84;
	sub_8292CC98(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82949df8
	if (ctx.cr6.eq) goto loc_82949DF8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x82949DB4;
	sub_823327E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82949df8
	if (!ctx.cr6.gt) goto loc_82949DF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82949DC8:
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82949dc8
	if (ctx.cr6.lt) goto loc_82949DC8;
loc_82949DF8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949E30"))) PPC_WEAK_FUNC(sub_82949E30);
PPC_FUNC_IMPL(__imp__sub_82949E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8284aff8
	ctx.lr = 0x82949E54;
	sub_8284AFF8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,30984
	ctx.r11.s64 = ctx.r11.s64 + 30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82833238
	ctx.lr = 0x82949E68;
	sub_82833238(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82949e78
	if (ctx.cr0.eq) goto loc_82949E78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82949E78;
	sub_82332DB8(ctx, base);
loc_82949E78:
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

__attribute__((alias("__imp__sub_82949E98"))) PPC_WEAK_FUNC(sub_82949E98);
PPC_FUNC_IMPL(__imp__sub_82949E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82882548
	ctx.lr = 0x82949EB8;
	sub_82882548(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82949ecc
	if (ctx.cr6.eq) goto loc_82949ECC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x82949ECC;
	sub_82881A78(ctx, base);
loc_82949ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949EE8"))) PPC_WEAK_FUNC(sub_82949EE8);
PPC_FUNC_IMPL(__imp__sub_82949EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82949f20
	if (ctx.cr6.eq) goto loc_82949F20;
	// bl 0x82882548
	ctx.lr = 0x82949F10;
	sub_82882548(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82949f20
	if (!ctx.cr6.eq) goto loc_82949F20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82949f2c
	goto loc_82949F2C;
loc_82949F20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82881b38
	ctx.lr = 0x82949F2C;
	sub_82881B38(ctx, base);
loc_82949F2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949F48"))) PPC_WEAK_FUNC(sub_82949F48);
PPC_FUNC_IMPL(__imp__sub_82949F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82882548
	sub_82882548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82949F50"))) PPC_WEAK_FUNC(sub_82949F50);
PPC_FUNC_IMPL(__imp__sub_82949F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82949F6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82949f80
	if (ctx.cr0.eq) goto loc_82949F80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82949f98
	ctx.lr = 0x82949F7C;
	sub_82949F98(ctx, base);
	// b 0x82949f84
	goto loc_82949F84;
loc_82949F80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82949F84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82949F98"))) PPC_WEAK_FUNC(sub_82949F98);
PPC_FUNC_IMPL(__imp__sub_82949F98) {
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
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,25256
	ctx.r9.s64 = ctx.r9.s64 + 25256;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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
	// bl 0x8284b058
	ctx.lr = 0x8294A03C;
	sub_8284B058(ctx, base);
	// lfs f0,72(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A0A8"))) PPC_WEAK_FUNC(sub_8294A0A8);
PPC_FUNC_IMPL(__imp__sub_8294A0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23256
	ctx.r3.s64 = ctx.r11.s64 + 23256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A0B8"))) PPC_WEAK_FUNC(sub_8294A0B8);
PPC_FUNC_IMPL(__imp__sub_8294A0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294A0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8292b890
	ctx.lr = 0x8294A0E8;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8292cc98
	ctx.lr = 0x8294A0F8;
	sub_8292CC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A100"))) PPC_WEAK_FUNC(sub_8294A100);
PPC_FUNC_IMPL(__imp__sub_8294A100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8294A108;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,720(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,72(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294A15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294a220
	if (ctx.cr6.eq) goto loc_8294A220;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8294a1b8
	if (!ctx.cr6.eq) goto loc_8294A1B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x8294a204
	goto loc_8294A204;
loc_8294A1B8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8294a1dc
	if (!ctx.cr6.lt) goto loc_8294A1DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x8294a200
	goto loc_8294A200;
loc_8294A1DC:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
loc_8294A200:
	// stfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8294A204:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// b 0x8294a380
	goto loc_8294A380;
loc_8294A220:
	// lfs f13,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f10,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x8294a298
	if (!ctx.cr6.eq) goto loc_8294A298;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// b 0x8294a2d8
	goto loc_8294A2D8;
loc_8294A298:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f8,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x8294a2b8
	if (!ctx.cr6.lt) goto loc_8294A2B8;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x8294a2d8
	goto loc_8294A2D8;
loc_8294A2B8:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8294A2D8:
	// lfs f13,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f7,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfs f6,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f8,f0,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f7,f0,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f7,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f8,f0,f10
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fmadds f11,f6,f13,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f12,f5,f13,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f4,f9,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmadds f13,f3,f9,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f0,f10,f9,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8294A380:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294a3e4
	if (ctx.cr6.eq) goto loc_8294A3E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294A3A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8294A3E4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,32(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A458"))) PPC_WEAK_FUNC(sub_8294A458);
PPC_FUNC_IMPL(__imp__sub_8294A458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828803b8
	ctx.lr = 0x8294A478;
	sub_828803B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294a488
	if (!ctx.cr6.eq) goto loc_8294A488;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294a4a0
	goto loc_8294A4A0;
loc_8294A488:
	// bl 0x8294a508
	ctx.lr = 0x8294A48C;
	sub_8294A508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294a4a0
	if (ctx.cr6.eq) goto loc_8294A4A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294A4A0;
	sub_82881A78(ctx, base);
loc_8294A4A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A4B8"))) PPC_WEAK_FUNC(sub_8294A4B8);
PPC_FUNC_IMPL(__imp__sub_8294A4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8294a508
	ctx.lr = 0x8294A4D8;
	sub_8294A508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294a4ec
	if (ctx.cr6.eq) goto loc_8294A4EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294A4EC;
	sub_82881A78(ctx, base);
loc_8294A4EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A508"))) PPC_WEAK_FUNC(sub_8294A508);
PPC_FUNC_IMPL(__imp__sub_8294A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19028
	ctx.r31.s64 = ctx.r11.s64 + 19028;
	// lwz r11,19032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8294a550
	if (!ctx.cr0.eq) goto loc_8294A550;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25480
	ctx.r9.s64 = ctx.r9.s64 + 25480;
	// stw r11,19032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19032, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12104
	ctx.r3.s64 = ctx.r11.s64 + -12104;
	// bl 0x82a4c758
	ctx.lr = 0x8294A550;
	sub_82A4C758(ctx, base);
loc_8294A550:
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

__attribute__((alias("__imp__sub_8294A568"))) PPC_WEAK_FUNC(sub_8294A568);
PPC_FUNC_IMPL(__imp__sub_8294A568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x8294A580;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8294a5a4
	if (ctx.cr0.eq) goto loc_8294A5A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x8294A590;
	sub_829394C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,25384
	ctx.r11.s64 = ctx.r11.s64 + 25384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8294a5a8
	goto loc_8294A5A8;
loc_8294A5A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294A5A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A5C0"))) PPC_WEAK_FUNC(sub_8294A5C0);
PPC_FUNC_IMPL(__imp__sub_8294A5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26952(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26952);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8294a600
	if (!ctx.cr0.eq) goto loc_8294A600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26952(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26952, ctx.r11.u32);
	// addi r3,r9,25352
	ctx.r3.s64 = ctx.r9.s64 + 25352;
	// bl 0x82816528
	ctx.lr = 0x8294A5F8;
	sub_82816528(ctx, base);
	// stw r3,-26956(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26956, ctx.r3.u32);
	// b 0x8294a604
	goto loc_8294A604;
loc_8294A600:
	// lwz r3,-26956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26956);
loc_8294A604:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A618"))) PPC_WEAK_FUNC(sub_8294A618);
PPC_FUNC_IMPL(__imp__sub_8294A618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8294a508
	ctx.lr = 0x8294A638;
	sub_8294A508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294A64C;
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

__attribute__((alias("__imp__sub_8294A668"))) PPC_WEAK_FUNC(sub_8294A668);
PPC_FUNC_IMPL(__imp__sub_8294A668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294a6a0
	if (ctx.cr6.eq) goto loc_8294A6A0;
	// bl 0x828803b8
	ctx.lr = 0x8294A690;
	sub_828803B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294a6a0
	if (!ctx.cr6.eq) goto loc_8294A6A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294a6ac
	goto loc_8294A6AC;
loc_8294A6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294a6c8
	ctx.lr = 0x8294A6AC;
	sub_8294A6C8(ctx, base);
loc_8294A6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A6C8"))) PPC_WEAK_FUNC(sub_8294A6C8);
PPC_FUNC_IMPL(__imp__sub_8294A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294a700
	if (ctx.cr6.eq) goto loc_8294A700;
	// bl 0x8294a508
	ctx.lr = 0x8294A6F0;
	sub_8294A508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294a700
	if (!ctx.cr6.eq) goto loc_8294A700;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294a70c
	goto loc_8294A70C;
loc_8294A700:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82881b38
	ctx.lr = 0x8294A70C;
	sub_82881B38(ctx, base);
loc_8294A70C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A728"))) PPC_WEAK_FUNC(sub_8294A728);
PPC_FUNC_IMPL(__imp__sub_8294A728) {
	PPC_FUNC_PROLOGUE();
	// b 0x828803b8
	sub_828803B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A730"))) PPC_WEAK_FUNC(sub_8294A730);
PPC_FUNC_IMPL(__imp__sub_8294A730) {
	PPC_FUNC_PROLOGUE();
	// b 0x8294a508
	sub_8294A508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A738"))) PPC_WEAK_FUNC(sub_8294A738);
PPC_FUNC_IMPL(__imp__sub_8294A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x8294A754;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294a7a4
	if (ctx.cr0.eq) goto loc_8294A7A4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25504
	ctx.r11.s64 = ctx.r11.s64 + 25504;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8294a7a8
	goto loc_8294A7A8;
loc_8294A7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294A7A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A7C0"))) PPC_WEAK_FUNC(sub_8294A7C0);
PPC_FUNC_IMPL(__imp__sub_8294A7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x8294A7DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294a81c
	if (ctx.cr0.eq) goto loc_8294A81C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25384
	ctx.r11.s64 = ctx.r11.s64 + 25384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8294a820
	goto loc_8294A820;
loc_8294A81C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294A820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A838"))) PPC_WEAK_FUNC(sub_8294A838);
PPC_FUNC_IMPL(__imp__sub_8294A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,25352
	ctx.r3.s64 = ctx.r11.s64 + 25352;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A848"))) PPC_WEAK_FUNC(sub_8294A848);
PPC_FUNC_IMPL(__imp__sub_8294A848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24200
	ctx.r3.s64 = ctx.r11.s64 + 24200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A858"))) PPC_WEAK_FUNC(sub_8294A858);
PPC_FUNC_IMPL(__imp__sub_8294A858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294A860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8292b890
	ctx.lr = 0x8294A888;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8292cc98
	ctx.lr = 0x8294A898;
	sub_8292CC98(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A8B0"))) PPC_WEAK_FUNC(sub_8294A8B0);
PPC_FUNC_IMPL(__imp__sub_8294A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294A8B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// lfs f1,744(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,720(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,72(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294A908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lfs f1,744(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294A924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,96
	ctx.r9.s64 = ctx.r31.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294A998"))) PPC_WEAK_FUNC(sub_8294A998);
PPC_FUNC_IMPL(__imp__sub_8294A998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82883d80
	ctx.lr = 0x8294A9B8;
	sub_82883D80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294a9c8
	if (!ctx.cr6.eq) goto loc_8294A9C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294a9e0
	goto loc_8294A9E0;
loc_8294A9C8:
	// bl 0x82884060
	ctx.lr = 0x8294A9CC;
	sub_82884060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294a9e0
	if (ctx.cr6.eq) goto loc_8294A9E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294A9E0;
	sub_82881A78(ctx, base);
loc_8294A9E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294A9F8"))) PPC_WEAK_FUNC(sub_8294A9F8);
PPC_FUNC_IMPL(__imp__sub_8294A9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294aa30
	if (ctx.cr6.eq) goto loc_8294AA30;
	// bl 0x82883d80
	ctx.lr = 0x8294AA20;
	sub_82883D80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294aa30
	if (!ctx.cr6.eq) goto loc_8294AA30;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294aa3c
	goto loc_8294AA3C;
loc_8294AA30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82884178
	ctx.lr = 0x8294AA3C;
	sub_82884178(ctx, base);
loc_8294AA3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294AA58"))) PPC_WEAK_FUNC(sub_8294AA58);
PPC_FUNC_IMPL(__imp__sub_8294AA58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82883d80
	sub_82883D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294AA60"))) PPC_WEAK_FUNC(sub_8294AA60);
PPC_FUNC_IMPL(__imp__sub_8294AA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8294AA7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294aad4
	if (ctx.cr0.eq) goto loc_8294AAD4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25600
	ctx.r11.s64 = ctx.r11.s64 + 25600;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// b 0x8294aad8
	goto loc_8294AAD8;
loc_8294AAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294AAD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294AAF0"))) PPC_WEAK_FUNC(sub_8294AAF0);
PPC_FUNC_IMPL(__imp__sub_8294AAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23892
	ctx.r3.s64 = ctx.r11.s64 + 23892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294AB00"))) PPC_WEAK_FUNC(sub_8294AB00);
PPC_FUNC_IMPL(__imp__sub_8294AB00) {
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
	// lwz r11,728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// lwz r9,636(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,720(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r11,632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lhzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8294abc4
	if (ctx.cr6.eq) goto loc_8294ABC4;
	// lwz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,144
	ctx.r9.s64 = ctx.r11.s64 + 144;
	// lfs f13,540(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,536(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f5,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f8,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,532(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f8,f0,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f12,f9,f10,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f11,f4,f10,f5
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f0,f6,f10,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f7,f13,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f3,f13,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8294abd4
	goto loc_8294ABD4;
loc_8294ABC4:
	// lwz r11,172(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// lwz r9,536(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
loc_8294ABD4:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f1,744(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,172(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294AC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fadds f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// fadds f11,f9,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
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

__attribute__((alias("__imp__sub_8294AC90"))) PPC_WEAK_FUNC(sub_8294AC90);
PPC_FUNC_IMPL(__imp__sub_8294AC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82880258
	ctx.lr = 0x8294ACB0;
	sub_82880258(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294acc0
	if (!ctx.cr6.eq) goto loc_8294ACC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294acd8
	goto loc_8294ACD8;
loc_8294ACC0:
	// bl 0x8294a508
	ctx.lr = 0x8294ACC4;
	sub_8294A508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294acd8
	if (ctx.cr6.eq) goto loc_8294ACD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294ACD8;
	sub_82881A78(ctx, base);
loc_8294ACD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294ACF0"))) PPC_WEAK_FUNC(sub_8294ACF0);
PPC_FUNC_IMPL(__imp__sub_8294ACF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294ad28
	if (ctx.cr6.eq) goto loc_8294AD28;
	// bl 0x82880258
	ctx.lr = 0x8294AD18;
	sub_82880258(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294ad28
	if (!ctx.cr6.eq) goto loc_8294AD28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294ad34
	goto loc_8294AD34;
loc_8294AD28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294a6c8
	ctx.lr = 0x8294AD34;
	sub_8294A6C8(ctx, base);
loc_8294AD34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294AD50"))) PPC_WEAK_FUNC(sub_8294AD50);
PPC_FUNC_IMPL(__imp__sub_8294AD50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82880258
	sub_82880258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294AD58"))) PPC_WEAK_FUNC(sub_8294AD58);
PPC_FUNC_IMPL(__imp__sub_8294AD58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x8294AD74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294adbc
	if (ctx.cr0.eq) goto loc_8294ADBC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25696
	ctx.r11.s64 = ctx.r11.s64 + 25696;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8294adc0
	goto loc_8294ADC0;
loc_8294ADBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294ADC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294ADD8"))) PPC_WEAK_FUNC(sub_8294ADD8);
PPC_FUNC_IMPL(__imp__sub_8294ADD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24224
	ctx.r3.s64 = ctx.r11.s64 + 24224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294ADE8"))) PPC_WEAK_FUNC(sub_8294ADE8);
PPC_FUNC_IMPL(__imp__sub_8294ADE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8294ADF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// lwz r27,632(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r26,720(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// lwz r11,636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	// blt 0x8294aec0
	if (ctx.cr0.lt) goto loc_8294AEC0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8294AE1C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294aeb4
	if (!ctx.cr0.eq) goto loc_8294AEB4;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294AE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294AE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8294AEB4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// bge 0x8294ae1c
	if (!ctx.cr0.lt) goto loc_8294AE1C;
loc_8294AEC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294AEC8"))) PPC_WEAK_FUNC(sub_8294AEC8);
PPC_FUNC_IMPL(__imp__sub_8294AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294AED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// lwz r10,636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,720(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294AF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294AF3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294AFA8"))) PPC_WEAK_FUNC(sub_8294AFA8);
PPC_FUNC_IMPL(__imp__sub_8294AFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82883c18
	ctx.lr = 0x8294AFC8;
	sub_82883C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294afd8
	if (!ctx.cr6.eq) goto loc_8294AFD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294aff0
	goto loc_8294AFF0;
loc_8294AFD8:
	// bl 0x82884060
	ctx.lr = 0x8294AFDC;
	sub_82884060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294aff0
	if (ctx.cr6.eq) goto loc_8294AFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294AFF0;
	sub_82881A78(ctx, base);
loc_8294AFF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B008"))) PPC_WEAK_FUNC(sub_8294B008);
PPC_FUNC_IMPL(__imp__sub_8294B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294b040
	if (ctx.cr6.eq) goto loc_8294B040;
	// bl 0x82883c18
	ctx.lr = 0x8294B030;
	sub_82883C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294b040
	if (!ctx.cr6.eq) goto loc_8294B040;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294b04c
	goto loc_8294B04C;
loc_8294B040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82884178
	ctx.lr = 0x8294B04C;
	sub_82884178(ctx, base);
loc_8294B04C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B068"))) PPC_WEAK_FUNC(sub_8294B068);
PPC_FUNC_IMPL(__imp__sub_8294B068) {
	PPC_FUNC_PROLOGUE();
	// b 0x82883c18
	sub_82883C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B070"))) PPC_WEAK_FUNC(sub_8294B070);
PPC_FUNC_IMPL(__imp__sub_8294B070) {
	PPC_FUNC_PROLOGUE();
	// b 0x82884060
	sub_82884060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B078"))) PPC_WEAK_FUNC(sub_8294B078);
PPC_FUNC_IMPL(__imp__sub_8294B078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8294B094;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294b0ec
	if (ctx.cr0.eq) goto loc_8294B0EC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25792
	ctx.r11.s64 = ctx.r11.s64 + 25792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// b 0x8294b0f0
	goto loc_8294B0F0;
loc_8294B0EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294B0F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B108"))) PPC_WEAK_FUNC(sub_8294B108);
PPC_FUNC_IMPL(__imp__sub_8294B108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23916
	ctx.r3.s64 = ctx.r11.s64 + 23916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B118"))) PPC_WEAK_FUNC(sub_8294B118);
PPC_FUNC_IMPL(__imp__sub_8294B118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8292b890
	ctx.lr = 0x8294B14C;
	sub_8292B890(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_8294B170"))) PPC_WEAK_FUNC(sub_8294B170);
PPC_FUNC_IMPL(__imp__sub_8294B170) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8294b208
	if (ctx.cr6.eq) goto loc_8294B208;
	// lwz r10,728(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,636(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,720(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r11,632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// lwz r6,172(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294B1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
loc_8294B208:
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

__attribute__((alias("__imp__sub_8294B220"))) PPC_WEAK_FUNC(sub_8294B220);
PPC_FUNC_IMPL(__imp__sub_8294B220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8294B228;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r23,180(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r26,632(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r25,720(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// blt 0x8294b3bc
	if (ctx.cr0.lt) goto loc_8294B3BC;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_8294B268:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294b3b0
	if (!ctx.cr0.eq) goto loc_8294B3B0;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294B2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294b37c
	if (ctx.cr6.eq) goto loc_8294B37C;
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294b360
	if (!ctx.cr6.eq) goto loc_8294B360;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r28,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f3,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// lfs f7,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f12,f2,f12,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f6,f0,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f13,f1,f13,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f12,f5,f31,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f0,f4,f31,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f9,f31,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8294B360:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// b 0x8294b3b0
	goto loc_8294B3B0;
loc_8294B37C:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 + 48;
	// lfs f13,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
loc_8294B3B0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// bge 0x8294b268
	if (!ctx.cr0.lt) goto loc_8294B268;
loc_8294B3BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B3C8"))) PPC_WEAK_FUNC(sub_8294B3C8);
PPC_FUNC_IMPL(__imp__sub_8294B3C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828800f0
	ctx.lr = 0x8294B3E8;
	sub_828800F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294b3f8
	if (!ctx.cr6.eq) goto loc_8294B3F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294b410
	goto loc_8294B410;
loc_8294B3F8:
	// bl 0x8294a508
	ctx.lr = 0x8294B3FC;
	sub_8294A508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294b410
	if (ctx.cr6.eq) goto loc_8294B410;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294B410;
	sub_82881A78(ctx, base);
loc_8294B410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B428"))) PPC_WEAK_FUNC(sub_8294B428);
PPC_FUNC_IMPL(__imp__sub_8294B428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294b460
	if (ctx.cr6.eq) goto loc_8294B460;
	// bl 0x828800f0
	ctx.lr = 0x8294B450;
	sub_828800F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294b460
	if (!ctx.cr6.eq) goto loc_8294B460;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294b46c
	goto loc_8294B46C;
loc_8294B460:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294a6c8
	ctx.lr = 0x8294B46C;
	sub_8294A6C8(ctx, base);
loc_8294B46C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B488"))) PPC_WEAK_FUNC(sub_8294B488);
PPC_FUNC_IMPL(__imp__sub_8294B488) {
	PPC_FUNC_PROLOGUE();
	// b 0x828800f0
	sub_828800F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B490"))) PPC_WEAK_FUNC(sub_8294B490);
PPC_FUNC_IMPL(__imp__sub_8294B490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x8294B4AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294b4fc
	if (ctx.cr0.eq) goto loc_8294B4FC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25888
	ctx.r11.s64 = ctx.r11.s64 + 25888;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x8294b500
	goto loc_8294B500;
loc_8294B4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294B500:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B518"))) PPC_WEAK_FUNC(sub_8294B518);
PPC_FUNC_IMPL(__imp__sub_8294B518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,24264
	ctx.r3.s64 = ctx.r11.s64 + 24264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B528"))) PPC_WEAK_FUNC(sub_8294B528);
PPC_FUNC_IMPL(__imp__sub_8294B528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294B530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8292b890
	ctx.lr = 0x8294B558;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8292cc98
	ctx.lr = 0x8294B568;
	sub_8292CC98(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B580"))) PPC_WEAK_FUNC(sub_8294B580);
PPC_FUNC_IMPL(__imp__sub_8294B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294B588;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,720(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// beq cr6,0x8294b5ec
	if (ctx.cr6.eq) goto loc_8294B5EC;
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294B5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8294b5fc
	goto loc_8294B5FC;
loc_8294B5EC:
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294B5F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_8294B5FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294B634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,96(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 96, temp.u32);
	// stfs f13,100(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 100, temp.u32);
	// stfs f12,104(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// stfs f11,108(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 108, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B678"))) PPC_WEAK_FUNC(sub_8294B678);
PPC_FUNC_IMPL(__imp__sub_8294B678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8294B680;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// lwz r26,632(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r25,720(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r11,636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// blt 0x8294b790
	if (ctx.cr0.lt) goto loc_8294B790;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8294B6AC:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294b784
	if (!ctx.cr0.eq) goto loc_8294B784;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// beq cr6,0x8294b6fc
	if (ctx.cr6.eq) goto loc_8294B6FC;
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294B6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8294b710
	goto loc_8294B710;
loc_8294B6FC:
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294B70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
loc_8294B710:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294B748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// stfs f13,100(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// stfs f12,104(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// stfs f11,108(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
loc_8294B784:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// bge 0x8294b6ac
	if (!ctx.cr0.lt) goto loc_8294B6AC;
loc_8294B790:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B798"))) PPC_WEAK_FUNC(sub_8294B798);
PPC_FUNC_IMPL(__imp__sub_8294B798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82883ab8
	ctx.lr = 0x8294B7B8;
	sub_82883AB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294b7c8
	if (!ctx.cr6.eq) goto loc_8294B7C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294b7e0
	goto loc_8294B7E0;
loc_8294B7C8:
	// bl 0x82884060
	ctx.lr = 0x8294B7CC;
	sub_82884060(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294b7e0
	if (ctx.cr6.eq) goto loc_8294B7E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294B7E0;
	sub_82881A78(ctx, base);
loc_8294B7E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B7F8"))) PPC_WEAK_FUNC(sub_8294B7F8);
PPC_FUNC_IMPL(__imp__sub_8294B7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294b830
	if (ctx.cr6.eq) goto loc_8294B830;
	// bl 0x82883ab8
	ctx.lr = 0x8294B820;
	sub_82883AB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294b830
	if (!ctx.cr6.eq) goto loc_8294B830;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294b83c
	goto loc_8294B83C;
loc_8294B830:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82884178
	ctx.lr = 0x8294B83C;
	sub_82884178(ctx, base);
loc_8294B83C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B858"))) PPC_WEAK_FUNC(sub_8294B858);
PPC_FUNC_IMPL(__imp__sub_8294B858) {
	PPC_FUNC_PROLOGUE();
	// b 0x82883ab8
	sub_82883AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B860"))) PPC_WEAK_FUNC(sub_8294B860);
PPC_FUNC_IMPL(__imp__sub_8294B860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8294B87C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294b8d4
	if (ctx.cr0.eq) goto loc_8294B8D4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,25984
	ctx.r11.s64 = ctx.r11.s64 + 25984;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// b 0x8294b8d8
	goto loc_8294B8D8;
loc_8294B8D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294B8D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B8F0"))) PPC_WEAK_FUNC(sub_8294B8F0);
PPC_FUNC_IMPL(__imp__sub_8294B8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23948
	ctx.r3.s64 = ctx.r11.s64 + 23948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294B900"))) PPC_WEAK_FUNC(sub_8294B900);
PPC_FUNC_IMPL(__imp__sub_8294B900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294B908;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x8292b890
	ctx.lr = 0x8294B998;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8292cc98
	ctx.lr = 0x8294B9A8;
	sub_8292CC98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x8292b890
	ctx.lr = 0x8294B9B8;
	sub_8292B890(ctx, base);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lfs f0,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r5,44(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// bl 0x8292cc98
	ctx.lr = 0x8294B9E0;
	sub_8292CC98(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294B9F0"))) PPC_WEAK_FUNC(sub_8294B9F0);
PPC_FUNC_IMPL(__imp__sub_8294B9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8294B9F8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294BA14;
	sub_82943E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294bc50
	if (ctx.cr0.eq) goto loc_8294BC50;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294bc50
	if (ctx.cr6.eq) goto loc_8294BC50;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294bc50
	if (ctx.cr6.eq) goto loc_8294BC50;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,720(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r28,1128(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lwz r11,632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lhzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lwz r5,184(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lfs f30,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x8294bafc
	if (ctx.cr6.eq) goto loc_8294BAFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8294BAFC:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// bl 0x82870268
	ctx.lr = 0x8294BB04;
	sub_82870268(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8294bb50
	if (!ctx.cr0.eq) goto loc_8294BB50;
	// bl 0x828703e8
	ctx.lr = 0x8294BB2C;
	sub_828703E8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BB48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294bb54
	if (ctx.cr0.eq) goto loc_8294BB54;
loc_8294BB50:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8294BB54:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8294bc50
	if (!ctx.cr0.gt) goto loc_8294BC50;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8294BB6C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8294bb84
	if (ctx.cr6.eq) goto loc_8294BB84;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294bb88
	if (!ctx.cr6.eq) goto loc_8294BB88;
loc_8294BB84:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8294BB88:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwx r9,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294bc38
	if (ctx.cr6.eq) goto loc_8294BC38;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// neg r28,r28
	ctx.r28.s64 = -ctx.r28.s64;
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwx r9,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8294BC38:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294bb6c
	if (ctx.cr6.lt) goto loc_8294BB6C;
loc_8294BC50:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294BC60"))) PPC_WEAK_FUNC(sub_8294BC60);
PPC_FUNC_IMPL(__imp__sub_8294BC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8294BC68;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61748
	ctx.lr = 0x8294BC70;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294BC88;
	sub_82943E60(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x8294bfe0
	if (ctx.cr0.eq) goto loc_8294BFE0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294bfe0
	if (ctx.cr6.eq) goto loc_8294BFE0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8294bfe0
	if (ctx.cr6.eq) goto loc_8294BFE0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r23,1128(r20)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1128);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// bl 0x82870268
	ctx.lr = 0x8294BCB8;
	sub_82870268(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8294bd04
	if (!ctx.cr0.eq) goto loc_8294BD04;
	// bl 0x828703e8
	ctx.lr = 0x8294BCE0;
	sub_828703E8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BCFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294bd08
	if (ctx.cr0.eq) goto loc_8294BD08;
loc_8294BD04:
	// li r19,1
	ctx.r19.s64 = 1;
loc_8294BD08:
	// lwz r11,728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 728);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lwz r22,632(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 632);
	// addic. r25,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r25.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r21,720(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 720);
	// lwz r11,636(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 636);
	// blt 0x8294bfe0
	if (ctx.cr0.lt) goto loc_8294BFE0;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f29,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_8294BD3C:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r21.s32);
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294bfd4
	if (!ctx.cr0.eq) goto loc_8294BFD4;
	// lwz r7,184(r20)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + 184);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BDBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8294bfd4
	if (ctx.cr6.gt) goto loc_8294BFD4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8294bde0
	if (ctx.cr6.eq) goto loc_8294BDE0;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// neg r27,r27
	ctx.r27.s64 = -ctx.r27.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294bde4
	if (!ctx.cr6.eq) goto loc_8294BDE4;
loc_8294BDE0:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_8294BDE4:
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x8294bfd4
	if (ctx.cr6.lt) goto loc_8294BFD4;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// ble cr6,0x8294bf54
	if (!ctx.cr6.gt) goto loc_8294BF54;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294bf48
	if (!ctx.cr6.gt) goto loc_8294BF48;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8294bf40
	if (!ctx.cr0.gt) goto loc_8294BF40;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// beq cr6,0x8294bed0
	if (ctx.cr6.eq) goto loc_8294BED0;
loc_8294BE5C:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,172(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BE94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294be5c
	if (ctx.cr6.lt) goto loc_8294BE5C;
	// b 0x8294bf40
	goto loc_8294BF40;
loc_8294BED0:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,172(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294bed0
	if (ctx.cr6.lt) goto loc_8294BED0;
loc_8294BF40:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8294BF48:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8294bfd4
	goto loc_8294BFD4;
loc_8294BF54:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294bfd4
	if (!ctx.cr6.gt) goto loc_8294BFD4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_8294BF64:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,172(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294BF9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294bf64
	if (ctx.cr6.lt) goto loc_8294BF64;
loc_8294BFD4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r24,r24,-2
	ctx.r24.s64 = ctx.r24.s64 + -2;
	// bge 0x8294bd3c
	if (!ctx.cr0.lt) goto loc_8294BD3C;
loc_8294BFE0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61794
	ctx.lr = 0x8294BFEC;
	__restfpr_28(ctx, base);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294BFF0"))) PPC_WEAK_FUNC(sub_8294BFF0);
PPC_FUNC_IMPL(__imp__sub_8294BFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8294c00c
	if (ctx.cr6.lt) goto loc_8294C00C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8294C00C:
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C018"))) PPC_WEAK_FUNC(sub_8294C018);
PPC_FUNC_IMPL(__imp__sub_8294C018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82884750
	ctx.lr = 0x8294C038;
	sub_82884750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294c048
	if (!ctx.cr6.eq) goto loc_8294C048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294c060
	goto loc_8294C060;
loc_8294C048:
	// bl 0x8294c0c8
	ctx.lr = 0x8294C04C;
	sub_8294C0C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294c060
	if (ctx.cr6.eq) goto loc_8294C060;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294C060;
	sub_82881A78(ctx, base);
loc_8294C060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C078"))) PPC_WEAK_FUNC(sub_8294C078);
PPC_FUNC_IMPL(__imp__sub_8294C078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8294c0c8
	ctx.lr = 0x8294C098;
	sub_8294C0C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294c0ac
	if (ctx.cr6.eq) goto loc_8294C0AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294C0AC;
	sub_82881A78(ctx, base);
loc_8294C0AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C0C8"))) PPC_WEAK_FUNC(sub_8294C0C8);
PPC_FUNC_IMPL(__imp__sub_8294C0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,19036
	ctx.r31.s64 = ctx.r11.s64 + 19036;
	// lwz r11,19040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8294c110
	if (!ctx.cr0.eq) goto loc_8294C110;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26304
	ctx.r9.s64 = ctx.r9.s64 + 26304;
	// stw r11,19040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19040, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12080
	ctx.r3.s64 = ctx.r11.s64 + -12080;
	// bl 0x82a4c758
	ctx.lr = 0x8294C110;
	sub_82A4C758(ctx, base);
loc_8294C110:
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

__attribute__((alias("__imp__sub_8294C128"))) PPC_WEAK_FUNC(sub_8294C128);
PPC_FUNC_IMPL(__imp__sub_8294C128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x8294C140;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8294c164
	if (ctx.cr0.eq) goto loc_8294C164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829394c8
	ctx.lr = 0x8294C150;
	sub_829394C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26208
	ctx.r11.s64 = ctx.r11.s64 + 26208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8294c168
	goto loc_8294C168;
loc_8294C164:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294C168:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C180"))) PPC_WEAK_FUNC(sub_8294C180);
PPC_FUNC_IMPL(__imp__sub_8294C180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26960);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8294c1c0
	if (!ctx.cr0.eq) goto loc_8294C1C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26960(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26960, ctx.r11.u32);
	// addi r3,r9,26080
	ctx.r3.s64 = ctx.r9.s64 + 26080;
	// bl 0x82816528
	ctx.lr = 0x8294C1B8;
	sub_82816528(ctx, base);
	// stw r3,-26964(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26964, ctx.r3.u32);
	// b 0x8294c1c4
	goto loc_8294C1C4;
loc_8294C1C0:
	// lwz r3,-26964(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26964);
loc_8294C1C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C1D8"))) PPC_WEAK_FUNC(sub_8294C1D8);
PPC_FUNC_IMPL(__imp__sub_8294C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8294c0c8
	ctx.lr = 0x8294C1F8;
	sub_8294C0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294C20C;
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

__attribute__((alias("__imp__sub_8294C228"))) PPC_WEAK_FUNC(sub_8294C228);
PPC_FUNC_IMPL(__imp__sub_8294C228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294c260
	if (ctx.cr6.eq) goto loc_8294C260;
	// bl 0x82884750
	ctx.lr = 0x8294C250;
	sub_82884750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294c260
	if (!ctx.cr6.eq) goto loc_8294C260;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294c26c
	goto loc_8294C26C;
loc_8294C260:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294c288
	ctx.lr = 0x8294C26C;
	sub_8294C288(ctx, base);
loc_8294C26C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C288"))) PPC_WEAK_FUNC(sub_8294C288);
PPC_FUNC_IMPL(__imp__sub_8294C288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294c2c0
	if (ctx.cr6.eq) goto loc_8294C2C0;
	// bl 0x8294c0c8
	ctx.lr = 0x8294C2B0;
	sub_8294C0C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294c2c0
	if (!ctx.cr6.eq) goto loc_8294C2C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294c2cc
	goto loc_8294C2CC;
loc_8294C2C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82881b38
	ctx.lr = 0x8294C2CC;
	sub_82881B38(ctx, base);
loc_8294C2CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C2E8"))) PPC_WEAK_FUNC(sub_8294C2E8);
PPC_FUNC_IMPL(__imp__sub_8294C2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82884750
	sub_82884750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294C2F0"))) PPC_WEAK_FUNC(sub_8294C2F0);
PPC_FUNC_IMPL(__imp__sub_8294C2F0) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x8294C30C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294c3dc
	if (ctx.cr0.eq) goto loc_8294C3DC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26104
	ctx.r11.s64 = ctx.r11.s64 + 26104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lfs f0,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// b 0x8294c3e0
	goto loc_8294C3E0;
loc_8294C3DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294C3E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C3F8"))) PPC_WEAK_FUNC(sub_8294C3F8);
PPC_FUNC_IMPL(__imp__sub_8294C3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x8294C414;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294c454
	if (ctx.cr0.eq) goto loc_8294C454;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26208
	ctx.r11.s64 = ctx.r11.s64 + 26208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8294c458
	goto loc_8294C458;
loc_8294C454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294C458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C470"))) PPC_WEAK_FUNC(sub_8294C470);
PPC_FUNC_IMPL(__imp__sub_8294C470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C480"))) PPC_WEAK_FUNC(sub_8294C480);
PPC_FUNC_IMPL(__imp__sub_8294C480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23104
	ctx.r3.s64 = ctx.r11.s64 + 23104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C490"))) PPC_WEAK_FUNC(sub_8294C490);
PPC_FUNC_IMPL(__imp__sub_8294C490) {
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
	// lwz r11,728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f1,744(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,636(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,720(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r11,632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// lwz r5,172(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r9,72(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8294C4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294c510
	if (!ctx.cr6.gt) goto loc_8294C510;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x8294c524
	goto loc_8294C524;
loc_8294C510:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8294c524
	if (!ctx.cr6.gt) goto loc_8294C524;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_8294C524:
	// stfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8294C548"))) PPC_WEAK_FUNC(sub_8294C548);
PPC_FUNC_IMPL(__imp__sub_8294C548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82883958
	ctx.lr = 0x8294C568;
	sub_82883958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294c57c
	if (ctx.cr6.eq) goto loc_8294C57C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294C57C;
	sub_82881A78(ctx, base);
loc_8294C57C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C598"))) PPC_WEAK_FUNC(sub_8294C598);
PPC_FUNC_IMPL(__imp__sub_8294C598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294c5d0
	if (ctx.cr6.eq) goto loc_8294C5D0;
	// bl 0x82883958
	ctx.lr = 0x8294C5C0;
	sub_82883958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294c5d0
	if (!ctx.cr6.eq) goto loc_8294C5D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294c5dc
	goto loc_8294C5DC;
loc_8294C5D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82881b38
	ctx.lr = 0x8294C5DC;
	sub_82881B38(ctx, base);
loc_8294C5DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C5F8"))) PPC_WEAK_FUNC(sub_8294C5F8);
PPC_FUNC_IMPL(__imp__sub_8294C5F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82883958
	sub_82883958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294C600"))) PPC_WEAK_FUNC(sub_8294C600);
PPC_FUNC_IMPL(__imp__sub_8294C600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x8294C61C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294c664
	if (ctx.cr0.eq) goto loc_8294C664;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26328
	ctx.r11.s64 = ctx.r11.s64 + 26328;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8294c668
	goto loc_8294C668;
loc_8294C664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294C668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C680"))) PPC_WEAK_FUNC(sub_8294C680);
PPC_FUNC_IMPL(__imp__sub_8294C680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23280
	ctx.r3.s64 = ctx.r11.s64 + 23280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294C690"))) PPC_WEAK_FUNC(sub_8294C690);
PPC_FUNC_IMPL(__imp__sub_8294C690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294C698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8292b890
	ctx.lr = 0x8294C700;
	sub_8292B890(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8292b890
	ctx.lr = 0x8294C718;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x8292cc98
	ctx.lr = 0x8294C728;
	sub_8292CC98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294C730"))) PPC_WEAK_FUNC(sub_8294C730);
PPC_FUNC_IMPL(__imp__sub_8294C730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8294C738;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294C750;
	sub_82943E60(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8294c858
	if (ctx.cr0.eq) goto loc_8294C858;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,720(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lhzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r5,184(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// lwz r3,1128(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1128);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294C7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// lwz r8,728(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 728);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8294ca08
	ctx.lr = 0x8294C808;
	sub_8294CA08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r31.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r31.u32);
loc_8294C858:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294C860"))) PPC_WEAK_FUNC(sub_8294C860);
PPC_FUNC_IMPL(__imp__sub_8294C860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8294C868;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294c89c
	if (ctx.cr6.eq) goto loc_8294C89C;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294c89c
	if (ctx.cr6.eq) goto loc_8294C89C;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294c984
	if (!ctx.cr6.eq) goto loc_8294C984;
loc_8294C89C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294C8A4;
	sub_82943E60(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8294c984
	if (ctx.cr0.eq) goto loc_8294C984;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// lwz r26,1128(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r24,632(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// lwz r23,720(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// blt 0x8294c984
	if (ctx.cr0.lt) goto loc_8294C984;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8294C8D4:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294c978
	if (!ctx.cr0.eq) goto loc_8294C978;
	// lwz r7,184(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294C958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8294ca08
	ctx.lr = 0x8294C978;
	sub_8294CA08(ctx, base);
loc_8294C978:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r25,-2
	ctx.r25.s64 = ctx.r25.s64 + -2;
	// bge 0x8294c8d4
	if (!ctx.cr0.lt) goto loc_8294C8D4;
loc_8294C984:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294C990"))) PPC_WEAK_FUNC(sub_8294C990);
PPC_FUNC_IMPL(__imp__sub_8294C990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82943e60
	ctx.lr = 0x8294C9B4;
	sub_82943E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294c9e8
	if (ctx.cr0.eq) goto loc_8294C9E8;
	// lwz r11,1128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294c9e8
	if (ctx.cr6.eq) goto loc_8294C9E8;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8294c9d8
	if (!ctx.cr6.eq) goto loc_8294C9D8;
	// li r31,4
	ctx.r31.s64 = 4;
loc_8294C9D8:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8294c9e8
	if (!ctx.cr6.eq) goto loc_8294C9E8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8294C9E8:
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

__attribute__((alias("__imp__sub_8294CA08"))) PPC_WEAK_FUNC(sub_8294CA08);
PPC_FUNC_IMPL(__imp__sub_8294CA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8294CA10;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294CA38;
	sub_82943E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294ca7c
	if (ctx.cr0.eq) goto loc_8294CA7C;
	// lwz r10,1128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8294ca7c
	if (ctx.cr6.eq) goto loc_8294CA7C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8294ca64
	if (!ctx.cr6.eq) goto loc_8294CA64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8294CA64:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8294ca7c
	if (!ctx.cr6.eq) goto loc_8294CA7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8294CA7C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r28,r11,6,0,25
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r10,r28
	ctx.r30.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x8294cab0
	if (ctx.cr6.eq) goto loc_8294CAB0;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294ccd8
	if (!ctx.cr6.eq) goto loc_8294CCD8;
loc_8294CAB0:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8294cbb4
	if (ctx.cr6.eq) goto loc_8294CBB4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8294cb88
	if (ctx.cr6.eq) goto loc_8294CB88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8294cb18
	if (ctx.cr6.eq) goto loc_8294CB18;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8294cbfc
	if (!ctx.cr6.eq) goto loc_8294CBFC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294cbfc
	if (ctx.cr6.eq) goto loc_8294CBFC;
	// lwz r11,1192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8294caf4
	if (!ctx.cr6.eq) goto loc_8294CAF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8295ec40
	ctx.lr = 0x8294CAF4;
	sub_8295EC40(ctx, base);
loc_8294CAF4:
	// lwz r11,1192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294cbfc
	if (ctx.cr6.eq) goto loc_8294CBFC;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// b 0x8294ccd4
	goto loc_8294CCD4;
loc_8294CB18:
	// lwz r11,1128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1128);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8294cbfc
	if (!ctx.cr6.eq) goto loc_8294CBFC;
	// lwz r11,1196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8294cb3c
	if (!ctx.cr6.eq) goto loc_8294CB3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8295ec40
	ctx.lr = 0x8294CB3C;
	sub_8295EC40(ctx, base);
loc_8294CB3C:
	// lwz r11,1196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294cbfc
	if (ctx.cr6.eq) goto loc_8294CBFC;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// lfs f13,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8294ccd8
	goto loc_8294CCD8;
loc_8294CB88:
	// lfs f0,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8294ccd0
	goto loc_8294CCD0;
loc_8294CBB4:
	// lwz r11,1216(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294cbfc
	if (!ctx.cr6.gt) goto loc_8294CBFC;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294cbe4
	if (ctx.cr6.lt) goto loc_8294CBE4;
	// lwz r11,1212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1212);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8294CBD4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8294ccd4
	goto loc_8294CCD4;
loc_8294CBE4:
	// lwz r10,1212(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1212);
	// mulli r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 * 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8294cbd4
	goto loc_8294CBD4;
loc_8294CBFC:
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lfs f1,744(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8294cc44
	if (ctx.cr6.eq) goto loc_8294CC44;
	// bctrl 
	ctx.lr = 0x8294CC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8294ccd4
	goto loc_8294CCD4;
loc_8294CC44:
	// bctrl 
	ctx.lr = 0x8294CC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f3,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f5,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f11,f9,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f13.f64));
	// lfs f4,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f12,f3,f9,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f1,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f7,f8,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f13,f6,f8,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f12,f2,f8,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8294CCD0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8294CCD4:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8294CCD8:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x8294ccec
	if (ctx.cr6.eq) goto loc_8294CCEC;
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294ced4
	if (!ctx.cr6.eq) goto loc_8294CED4;
loc_8294CCEC:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8294cdc0
	if (ctx.cr6.lt) goto loc_8294CDC0;
	// beq cr6,0x8294cd78
	if (ctx.cr6.eq) goto loc_8294CD78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8294cd3c
	if (ctx.cr6.lt) goto loc_8294CD3C;
	// bne cr6,0x8294cdf4
	if (!ctx.cr6.eq) goto loc_8294CDF4;
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x8294ced4
	goto loc_8294CED4;
loc_8294CD3C:
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lfs f1,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294CD60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8294ced0
	goto loc_8294CED0;
loc_8294CD78:
	// lwz r11,1240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294cdf4
	if (!ctx.cr6.gt) goto loc_8294CDF4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294cda8
	if (ctx.cr6.lt) goto loc_8294CDA8;
	// lwz r11,1236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1236);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8294CD98:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8294ced0
	goto loc_8294CED0;
loc_8294CDA8:
	// lwz r10,1236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1236);
	// mulli r11,r26,12
	ctx.r11.s64 = ctx.r26.s64 * 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// b 0x8294cd98
	goto loc_8294CD98;
loc_8294CDC0:
	// lfs f12,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x8294ced4
	goto loc_8294CED4;
loc_8294CDF4:
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// lfs f1,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294CE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294ced4
	if (!ctx.cr6.eq) goto loc_8294CED4;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f9,f10,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f9,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f9,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f8,f10,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f9,f7,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f13.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// fmadds f0,f2,f0,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
loc_8294CED0:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8294CED4:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// beq cr6,0x8294cee8
	if (ctx.cr6.eq) goto loc_8294CEE8;
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294cf44
	if (!ctx.cr6.eq) goto loc_8294CF44;
loc_8294CEE8:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8294cf24
	if (!ctx.cr6.eq) goto loc_8294CF24;
	// lwz r11,1264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294cf24
	if (!ctx.cr6.gt) goto loc_8294CF24;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1260);
	// blt cr6,0x8294cf14
	if (ctx.cr6.lt) goto loc_8294CF14;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8294cf1c
	goto loc_8294CF1C;
loc_8294CF14:
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8294CF1C:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x8294cf44
	goto loc_8294CF44;
loc_8294CF24:
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lfs f1,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294CF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_8294CF44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294CF50"))) PPC_WEAK_FUNC(sub_8294CF50);
PPC_FUNC_IMPL(__imp__sub_8294CF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x8294CF78;
	sub_82332D50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x8294CF94;
	sub_82A455D0(ctx, base);
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

__attribute__((alias("__imp__sub_8294CFB0"))) PPC_WEAK_FUNC(sub_8294CFB0);
PPC_FUNC_IMPL(__imp__sub_8294CFB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23132
	ctx.r3.s64 = ctx.r11.s64 + 23132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294CFC0"))) PPC_WEAK_FUNC(sub_8294CFC0);
PPC_FUNC_IMPL(__imp__sub_8294CFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828845e0
	ctx.lr = 0x8294CFE0;
	sub_828845E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294cff0
	if (!ctx.cr6.eq) goto loc_8294CFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294d008
	goto loc_8294D008;
loc_8294CFF0:
	// bl 0x8294c0c8
	ctx.lr = 0x8294CFF4;
	sub_8294C0C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294d008
	if (ctx.cr6.eq) goto loc_8294D008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294D008;
	sub_82881A78(ctx, base);
loc_8294D008:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D020"))) PPC_WEAK_FUNC(sub_8294D020);
PPC_FUNC_IMPL(__imp__sub_8294D020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294d058
	if (ctx.cr6.eq) goto loc_8294D058;
	// bl 0x828845e0
	ctx.lr = 0x8294D048;
	sub_828845E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294d058
	if (!ctx.cr6.eq) goto loc_8294D058;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294d064
	goto loc_8294D064;
loc_8294D058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294c288
	ctx.lr = 0x8294D064;
	sub_8294C288(ctx, base);
loc_8294D064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D080"))) PPC_WEAK_FUNC(sub_8294D080);
PPC_FUNC_IMPL(__imp__sub_8294D080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828845e0
	sub_828845E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294D088"))) PPC_WEAK_FUNC(sub_8294D088);
PPC_FUNC_IMPL(__imp__sub_8294D088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82833108
	ctx.lr = 0x8294D0A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294d134
	if (ctx.cr0.eq) goto loc_8294D134;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26424
	ctx.r11.s64 = ctx.r11.s64 + 26424;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// b 0x8294d138
	goto loc_8294D138;
loc_8294D134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294D138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D150"))) PPC_WEAK_FUNC(sub_8294D150);
PPC_FUNC_IMPL(__imp__sub_8294D150) {
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
	// lwz r11,728(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 728);
	// lfs f1,744(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,180(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// lwz r9,636(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 636);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,720(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 720);
	// lwz r11,632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 632);
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lhzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// lwz r6,172(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8294d1f8
	if (ctx.cr6.eq) goto loc_8294D1F8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294D1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8294d2e8
	goto loc_8294D2E8;
loc_8294D1F8:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,72(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294D224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f9,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f8,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f7,f11,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lfs f1,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f6,f11,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f11,f5,f11,f8
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f31,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f4,f12,f10
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f10,f3,f13,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f11,f2,f13,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f13,f1,f0,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmadds f12,f31,f0,f10
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmadds f0,f7,f0,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_8294D2E8:
	// stfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D308"))) PPC_WEAK_FUNC(sub_8294D308);
PPC_FUNC_IMPL(__imp__sub_8294D308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D318"))) PPC_WEAK_FUNC(sub_8294D318);
PPC_FUNC_IMPL(__imp__sub_8294D318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828837f8
	ctx.lr = 0x8294D338;
	sub_828837F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294d348
	if (!ctx.cr6.eq) goto loc_8294D348;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294d360
	goto loc_8294D360;
loc_8294D348:
	// bl 0x8292ba38
	ctx.lr = 0x8294D34C;
	sub_8292BA38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294d360
	if (ctx.cr6.eq) goto loc_8294D360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294D360;
	sub_82881A78(ctx, base);
loc_8294D360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D378"))) PPC_WEAK_FUNC(sub_8294D378);
PPC_FUNC_IMPL(__imp__sub_8294D378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294d3b0
	if (ctx.cr6.eq) goto loc_8294D3B0;
	// bl 0x828837f8
	ctx.lr = 0x8294D3A0;
	sub_828837F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294d3b0
	if (!ctx.cr6.eq) goto loc_8294D3B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294d3bc
	goto loc_8294D3BC;
loc_8294D3B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8292bbf8
	ctx.lr = 0x8294D3BC;
	sub_8292BBF8(ctx, base);
loc_8294D3BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D3D8"))) PPC_WEAK_FUNC(sub_8294D3D8);
PPC_FUNC_IMPL(__imp__sub_8294D3D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828837f8
	sub_828837F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294D3E0"))) PPC_WEAK_FUNC(sub_8294D3E0);
PPC_FUNC_IMPL(__imp__sub_8294D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x8294D3FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294d444
	if (ctx.cr0.eq) goto loc_8294D444;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26528
	ctx.r11.s64 = ctx.r11.s64 + 26528;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x8294d448
	goto loc_8294D448;
loc_8294D444:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294D448:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D460"))) PPC_WEAK_FUNC(sub_8294D460);
PPC_FUNC_IMPL(__imp__sub_8294D460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8294D468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8292b890
	ctx.lr = 0x8294D4D0;
	sub_8292B890(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8292b890
	ctx.lr = 0x8294D4E8;
	sub_8292B890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x8292cc98
	ctx.lr = 0x8294D4F8;
	sub_8292CC98(ctx, base);
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294D508"))) PPC_WEAK_FUNC(sub_8294D508);
PPC_FUNC_IMPL(__imp__sub_8294D508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8294D510;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294D528;
	sub_82943E60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8294d5e0
	if (ctx.cr0.eq) goto loc_8294D5E0;
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,720(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lwz r3,1128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294D5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// lwz r8,728(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 728);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8294d7c0
	ctx.lr = 0x8294D5E0;
	sub_8294D7C0(ctx, base);
loc_8294D5E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294D5E8"))) PPC_WEAK_FUNC(sub_8294D5E8);
PPC_FUNC_IMPL(__imp__sub_8294D5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8294D5F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,28(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294d624
	if (ctx.cr6.eq) goto loc_8294D624;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294d624
	if (ctx.cr6.eq) goto loc_8294D624;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294d70c
	if (!ctx.cr6.eq) goto loc_8294D70C;
loc_8294D624:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294D62C;
	sub_82943E60(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8294d70c
	if (ctx.cr0.eq) goto loc_8294D70C;
	// lwz r11,728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 728);
	// lwz r26,1128(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1128);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r24,632(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 632);
	// lwz r23,720(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 720);
	// lwz r11,636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 636);
	// blt 0x8294d70c
	if (ctx.cr0.lt) goto loc_8294D70C;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8294D65C:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// add r28,r11,r24
	ctx.r28.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r11,92(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8294d700
	if (!ctx.cr0.eq) goto loc_8294D700;
	// lwz r7,184(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294D6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,276
	ctx.r7.s64 = ctx.r1.s64 + 276;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8294d7c0
	ctx.lr = 0x8294D700;
	sub_8294D7C0(ctx, base);
loc_8294D700:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r25,-2
	ctx.r25.s64 = ctx.r25.s64 + -2;
	// bge 0x8294d65c
	if (!ctx.cr0.lt) goto loc_8294D65C;
loc_8294D70C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294D718"))) PPC_WEAK_FUNC(sub_8294D718);
PPC_FUNC_IMPL(__imp__sub_8294D718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,512(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8294d768
	if (!ctx.cr6.gt) goto loc_8294D768;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
loc_8294D74C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8294d7a4
	if (ctx.cr6.eq) goto loc_8294D7A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8294d74c
	if (ctx.cr6.lt) goto loc_8294D74C;
loc_8294D768:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x8294cf50
	ctx.lr = 0x8294D774;
	sub_8294CF50(ctx, base);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
loc_8294D7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294D7C0"))) PPC_WEAK_FUNC(sub_8294D7C0);
PPC_FUNC_IMPL(__imp__sub_8294D7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8294D7C8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82943e60
	ctx.lr = 0x8294D7F4;
	sub_82943E60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294d820
	if (ctx.cr0.eq) goto loc_8294D820;
	// lwz r11,1128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294d820
	if (ctx.cr6.eq) goto loc_8294D820;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8294d820
	if (!ctx.cr6.eq) goto loc_8294D820;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8294D820:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// xori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 ^ 64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// beq cr6,0x8294d854
	if (ctx.cr6.eq) goto loc_8294D854;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294da80
	if (!ctx.cr6.eq) goto loc_8294DA80;
loc_8294D854:
	// lwz r11,1128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1128);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294d904
	if (!ctx.cr6.eq) goto loc_8294D904;
	// lwz r11,1128(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1128);
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294D880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16856(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16856);
	// fabs f13,f31
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294d8a0
	if (!ctx.cr6.lt) goto loc_8294D8A0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,16444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16444);
	ctx.f31.f64 = double(temp.f32);
loc_8294D8A0:
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
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
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x8294D8C8;
	sub_82332E18(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// b 0x8294da64
	goto loc_8294DA64;
loc_8294D904:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8294d95c
	if (ctx.cr6.eq) goto loc_8294D95C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8294d9a4
	if (!ctx.cr6.eq) goto loc_8294D9A4;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294d9a4
	if (ctx.cr6.eq) goto loc_8294D9A4;
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8294d938
	if (!ctx.cr6.eq) goto loc_8294D938;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8295ed58
	ctx.lr = 0x8294D938;
	sub_8295ED58(ctx, base);
loc_8294D938:
	// lwz r11,1416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294d9a4
	if (ctx.cr6.eq) goto loc_8294D9A4;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// b 0x8294da7c
	goto loc_8294DA7C;
loc_8294D95C:
	// lwz r11,1312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294d9a4
	if (!ctx.cr6.gt) goto loc_8294D9A4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294d98c
	if (ctx.cr6.lt) goto loc_8294D98C;
	// lwz r11,1308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1308);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_8294D97C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8294da7c
	goto loc_8294DA7C;
loc_8294D98C:
	// lwz r10,1308(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1308);
	// mulli r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 * 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// b 0x8294d97c
	goto loc_8294D97C;
loc_8294D9A4:
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lfs f1,744(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8294d9ec
	if (ctx.cr6.eq) goto loc_8294D9EC;
	// bctrl 
	ctx.lr = 0x8294D9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8294da7c
	goto loc_8294DA7C;
loc_8294D9EC:
	// bctrl 
	ctx.lr = 0x8294D9F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f13,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f10,f3,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f5,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f11,f9,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f13.f64));
	// lfs f4,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f12,f3,f9,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f1,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f7,f8,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f13,f6,f8,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f12,f2,f8,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
loc_8294DA64:
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_8294DA7C:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8294DA80:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8294da94
	if (ctx.cr6.eq) goto loc_8294DA94;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294dc7c
	if (!ctx.cr6.eq) goto loc_8294DC7C;
loc_8294DA94:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8294db68
	if (ctx.cr6.lt) goto loc_8294DB68;
	// beq cr6,0x8294db20
	if (ctx.cr6.eq) goto loc_8294DB20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8294dae4
	if (ctx.cr6.lt) goto loc_8294DAE4;
	// bne cr6,0x8294db9c
	if (!ctx.cr6.eq) goto loc_8294DB9C;
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x8294dc7c
	goto loc_8294DC7C;
loc_8294DAE4:
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294DB08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8294dc78
	goto loc_8294DC78;
loc_8294DB20:
	// lwz r11,1336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294db9c
	if (!ctx.cr6.gt) goto loc_8294DB9C;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294db50
	if (ctx.cr6.lt) goto loc_8294DB50;
	// lwz r11,1332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1332);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_8294DB40:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8294dc78
	goto loc_8294DC78;
loc_8294DB50:
	// lwz r10,1332(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1332);
	// mulli r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 * 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x8294db40
	goto loc_8294DB40;
loc_8294DB68:
	// lfs f13,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// b 0x8294dc7c
	goto loc_8294DC7C;
loc_8294DB9C:
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r6,172(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294DBC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294dc7c
	if (!ctx.cr6.eq) goto loc_8294DC7C;
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f9,f10,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f9,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f9,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f12,f8,f10,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f11,f4,f0,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f9,f7,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f13.f64));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// fmadds f0,f2,f0,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_8294DC78:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8294DC7C:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8294dc90
	if (ctx.cr6.eq) goto loc_8294DC90;
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294dcec
	if (!ctx.cr6.eq) goto loc_8294DCEC;
loc_8294DC90:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8294dccc
	if (!ctx.cr6.eq) goto loc_8294DCCC;
	// lwz r11,1288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294dccc
	if (!ctx.cr6.gt) goto loc_8294DCCC;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,1284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1284);
	// blt cr6,0x8294dcbc
	if (ctx.cr6.lt) goto loc_8294DCBC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8294dcc4
	goto loc_8294DCC4;
loc_8294DCBC:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_8294DCC4:
	// stfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x8294dcec
	goto loc_8294DCEC;
loc_8294DCCC:
	// lwz r3,48(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// lfs f1,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294DCE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8294DCEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294DD00"))) PPC_WEAK_FUNC(sub_8294DD00);
PPC_FUNC_IMPL(__imp__sub_8294DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82884460
	ctx.lr = 0x8294DD20;
	sub_82884460(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294dd30
	if (!ctx.cr6.eq) goto loc_8294DD30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8294dd48
	goto loc_8294DD48;
loc_8294DD30:
	// bl 0x8294c0c8
	ctx.lr = 0x8294DD34;
	sub_8294C0C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8294dd48
	if (ctx.cr6.eq) goto loc_8294DD48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82881a78
	ctx.lr = 0x8294DD48;
	sub_82881A78(ctx, base);
loc_8294DD48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294DD60"))) PPC_WEAK_FUNC(sub_8294DD60);
PPC_FUNC_IMPL(__imp__sub_8294DD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8294dd98
	if (ctx.cr6.eq) goto loc_8294DD98;
	// bl 0x82884460
	ctx.lr = 0x8294DD88;
	sub_82884460(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8294dd98
	if (!ctx.cr6.eq) goto loc_8294DD98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8294dda4
	goto loc_8294DDA4;
loc_8294DD98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8294c288
	ctx.lr = 0x8294DDA4;
	sub_8294C288(ctx, base);
loc_8294DDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294DDC0"))) PPC_WEAK_FUNC(sub_8294DDC0);
PPC_FUNC_IMPL(__imp__sub_8294DDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82884460
	sub_82884460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294DDC8"))) PPC_WEAK_FUNC(sub_8294DDC8);
PPC_FUNC_IMPL(__imp__sub_8294DDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8294c0c8
	sub_8294C0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294DDD0"))) PPC_WEAK_FUNC(sub_8294DDD0);
PPC_FUNC_IMPL(__imp__sub_8294DDD0) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82833108
	ctx.lr = 0x8294DDEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8294de84
	if (ctx.cr0.eq) goto loc_8294DE84;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,30984
	ctx.r10.s64 = ctx.r10.s64 + 30984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,26624
	ctx.r11.s64 = ctx.r11.s64 + 26624;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// b 0x8294de88
	goto loc_8294DE88;
loc_8294DE84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294DE88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294DEA0"))) PPC_WEAK_FUNC(sub_8294DEA0);
PPC_FUNC_IMPL(__imp__sub_8294DEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,23160
	ctx.r3.s64 = ctx.r11.s64 + 23160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294DEB0"))) PPC_WEAK_FUNC(sub_8294DEB0);
PPC_FUNC_IMPL(__imp__sub_8294DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1356, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8294e05c
	if (ctx.cr6.eq) goto loc_8294E05C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_8294DEEC:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8294e05c
	if (!ctx.cr6.lt) goto loc_8294E05C;
	// lwz r10,1356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r9,440(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 440);
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,1356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8294dfb4
	if (ctx.cr0.eq) goto loc_8294DFB4;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,-4(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_8294DFB4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294dfc8
	if (!ctx.cr6.lt) goto loc_8294DFC8;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8294dfd8
	goto loc_8294DFD8;
loc_8294DFC8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r8,2
	ctx.r8.s64 = 2;
	// bgt cr6,0x8294dfd8
	if (ctx.cr6.gt) goto loc_8294DFD8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8294DFD8:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294dfec
	if (!ctx.cr6.lt) goto loc_8294DFEC;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x8294dffc
	goto loc_8294DFFC;
loc_8294DFEC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r9,8
	ctx.r9.s64 = 8;
	// bgt cr6,0x8294dffc
	if (ctx.cr6.gt) goto loc_8294DFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8294DFFC:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294e010
	if (!ctx.cr6.lt) goto loc_8294E010;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8294e020
	goto loc_8294E020;
loc_8294E010:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,32
	ctx.r10.s64 = 32;
	// bgt cr6,0x8294e020
	if (ctx.cr6.gt) goto loc_8294E020;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8294E020:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r11,r11,275
	ctx.r11.s64 = ctx.r11.s64 + 275;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8294deec
	if (!ctx.cr6.eq) goto loc_8294DEEC;
loc_8294E05C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,440(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 440);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294E0B8"))) PPC_WEAK_FUNC(sub_8294E0B8);
PPC_FUNC_IMPL(__imp__sub_8294E0B8) {
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
	// bl 0x828d4368
	ctx.lr = 0x8294E0D0;
	sub_828D4368(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r11,r11,26728
	ctx.r11.s64 = ctx.r11.s64 + 26728;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f0,412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f0,416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f13,424(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 424, temp.u32);
	// stfs f13,428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 428, temp.u32);
	// stfs f13,432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stw r8,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r8.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294E130"))) PPC_WEAK_FUNC(sub_8294E130);
PPC_FUNC_IMPL(__imp__sub_8294E130) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lfs f13,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lwz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// fadds f30,f13,f1
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x8294e228
	if (!ctx.cr6.gt) goto loc_8294E228;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x8294E1FC;
	sub_82332E18(ctx, base);
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8294E228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8294E248"))) PPC_WEAK_FUNC(sub_8294E248);
PPC_FUNC_IMPL(__imp__sub_8294E248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8294E250;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61740
	ctx.lr = 0x8294E258;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r7,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r7.u64);
	// std r8,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r8.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// std r9,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r9.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r23,356(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// lwz r25,348(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r24,340(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// std r10,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r10.u64);
	// beq cr6,0x8294e4b8
	if (ctx.cr6.eq) goto loc_8294E4B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f11,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,30252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30252);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,16444(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16444);
	ctx.f26.f64 = double(temp.f32);
loc_8294E2BC:
	// lwz r10,440(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// mulli r11,r27,60
	ctx.r11.s64 = ctx.r27.s64 * 60;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f10,f9,f30,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f0,f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f10,f7,f31,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsubs f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8294e348
	if (!ctx.cr6.gt) goto loc_8294E348;
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// ble cr6,0x8294e348
	if (!ctx.cr6.gt) goto loc_8294E348;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294e338
	if (ctx.cr0.eq) goto loc_8294E338;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// li r9,33
	ctx.r9.s64 = 33;
	// rlwimi r11,r9,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r11,r9,0,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8294e33c
	if (ctx.cr0.eq) goto loc_8294E33C;
loc_8294E338:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8294E33C:
	// lwz r27,36(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// or r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x8294e4b0
	goto loc_8294E4B0;
loc_8294E348:
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bge cr6,0x8294e39c
	if (!ctx.cr6.lt) goto loc_8294E39C;
	// fcmpu cr6,f10,f26
	ctx.cr6.compare(ctx.f10.f64, ctx.f26.f64);
	// bge cr6,0x8294e39c
	if (!ctx.cr6.lt) goto loc_8294E39C;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294e384
	if (ctx.cr0.eq) goto loc_8294E384;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// li r9,33
	ctx.r9.s64 = 33;
	// rlwimi r11,r9,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwimi r11,r9,0,26,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x30) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFCF);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8294e388
	if (ctx.cr0.eq) goto loc_8294E388;
loc_8294E384:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8294E388:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 & ctx.r24.u64;
	// b 0x8294e4b0
	goto loc_8294E4B0;
loc_8294E39C:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// fsubs f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// fsubs f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fsubs f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x8294e4dc
	if (!ctx.cr6.gt) goto loc_8294E4DC;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8294e504
	if (!ctx.cr6.eq) goto loc_8294E504;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294e404
	if (ctx.cr0.eq) goto loc_8294E404;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r10,r25,33
	ctx.r10.u64 = ctx.r25.u64 | 33;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8294e504
	if (ctx.cr0.eq) goto loc_8294E504;
loc_8294E404:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8294E408:
	// addi r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 8;
	// lwz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x8294e248
	ctx.lr = 0x8294E444;
	sub_8294E248(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294e534
	if (ctx.cr0.eq) goto loc_8294E534;
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addic. r10,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8294e50c
	if (ctx.cr0.eq) goto loc_8294E50C;
	// bne cr6,0x8294e52c
	if (!ctx.cr6.eq) goto loc_8294E52C;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8294e47c
	if (ctx.cr0.eq) goto loc_8294E47C;
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r9,r25,33
	ctx.r9.u64 = ctx.r25.u64 | 33;
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8294e52c
	if (ctx.cr0.eq) goto loc_8294E52C;
loc_8294E47C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_8294E480:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// lfs f13,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
	// lfs f11,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// lfs f12,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r27,r11,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_8294E4B0:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x8294e2bc
	if (!ctx.cr6.eq) goto loc_8294E2BC;
loc_8294E4B8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8294e5f0
	if (!ctx.cr6.eq) goto loc_8294E5F0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294e53c
	if (!ctx.cr6.eq) goto loc_8294E53C;
	// rlwinm. r11,r25,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8294e53c
	if (ctx.cr0.eq) goto loc_8294E53C;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8294e5f8
	goto loc_8294E5F8;
loc_8294E4DC:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8294e404
	if (ctx.cr6.eq) goto loc_8294E404;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294e504
	if (ctx.cr0.eq) goto loc_8294E504;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r10,r25,33
	ctx.r10.u64 = ctx.r25.u64 | 33;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8294e404
	if (ctx.cr0.eq) goto loc_8294E404;
loc_8294E504:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8294e408
	goto loc_8294E408;
loc_8294E50C:
	// beq cr6,0x8294e47c
	if (ctx.cr6.eq) goto loc_8294E47C;
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8294e52c
	if (ctx.cr0.eq) goto loc_8294E52C;
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r9,r25,33
	ctx.r9.u64 = ctx.r25.u64 | 33;
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8294e47c
	if (ctx.cr0.eq) goto loc_8294E47C;
loc_8294E52C:
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8294e480
	goto loc_8294E480;
loc_8294E534:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8294e5fc
	goto loc_8294E5FC;
loc_8294E53C:
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mulli r31,r5,60
	ctx.r31.s64 = ctx.r5.s64 * 60;
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r9,328(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r5,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r5.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r26.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294e5a8
	if (ctx.cr6.eq) goto loc_8294E5A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294E5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8294E5A8:
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lwz r11,440(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 440);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// bne cr6,0x8294e5f8
	if (!ctx.cr6.eq) goto loc_8294E5F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294E5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// b 0x8294e5f8
	goto loc_8294E5F8;
loc_8294E5F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_8294E5F8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8294E5FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a6178c
	ctx.lr = 0x8294E608;
	__restfpr_26(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294E610"))) PPC_WEAK_FUNC(sub_8294E610);
PPC_FUNC_IMPL(__imp__sub_8294E610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lfs f13,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// lfs f12,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// std r8,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r8.u64);
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// std r9,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r9.u64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lfs f10,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r31,1384
	ctx.r10.s64 = ctx.r31.s64 + 1384;
	// lfs f9,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lfs f0,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r10,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r10.u32);
	// stw r9,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r9.u32);
	// stw r8,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r8.u32);
	// stw r6,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r6.u32);
	// stw r5,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r5.u32);
	// stw r4,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r4.u32);
	// stfs f0,1384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1384, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// stfs f13,1388(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1388, temp.u32);
	// stfs f12,1392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1392, temp.u32);
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lfs f13,1384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stw r6,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r6.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stw r10,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r10.u32);
	// stw r8,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r8.u32);
	// stw r7,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r7.u32);
	// stw r5,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r5.u32);
	// stw r9,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r9.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,1396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1396, temp.u32);
	// bne cr6,0x8294e784
	if (!ctx.cr6.eq) goto loc_8294E784;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82936910
	ctx.lr = 0x8294E770;
	sub_82936910(ctx, base);
	// addi r11,r31,1424
	ctx.r11.s64 = ctx.r31.s64 + 1424;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8294E784;
	sub_82A4EA80(ctx, base);
loc_8294E784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294E7A0"))) PPC_WEAK_FUNC(sub_8294E7A0);
PPC_FUNC_IMPL(__imp__sub_8294E7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// beq cr6,0x8294e7d0
	if (ctx.cr6.eq) goto loc_8294E7D0;
	// lvlx v0,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vandc128 v13,v88,v68
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v88.u8)));
	// lvrx v12,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vandc128 v0,v0,v68
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// b 0x8294e884
	goto loc_8294E884;
loc_8294E7D0:
	// lvrx v10,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v12,v65,v65
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v65.u8));
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// vor v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vcfsx v0,v0,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vrlimi128 v13,v12,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmsum3fp128 v10,v12,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vrsqrtefp v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v10.f32))));
	// vor v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmulfp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v11,v10,v65
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v65.f32)));
	// vmulfp128 v10,v13,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v8,v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v13,v13,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmsum4fp128 v11,v13,v81
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v81.f32), 0xFF));
	// vmsum4fp128 v12,v13,v83
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v83.f32), 0xFF));
	// vmsum4fp128 v10,v13,v82
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v82.f32), 0xFF));
	// vmsum4fp128 v13,v13,v80
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v80.f32), 0xFF));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum3fp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vrsqrtefp v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v11.f32))));
	// vor v10,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmulfp128 v9,v11,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v11,v11,v65
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v65.f32)));
	// vmulfp128 v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v9,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vmulfp128 v0,v0,v89
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v89.f32)));
	// vmsum4fp128 v13,v0,v87
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v87.f32), 0xFF));
	// vmsum4fp128 v12,v0,v85
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v85.f32), 0xFF));
	// vmsum4fp128 v11,v0,v86
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v86.f32), 0xFF));
	// vmsum4fp128 v0,v0,v84
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v84.f32), 0xFF));
	// vmrghw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vandc128 v0,v0,v68
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v0,v0,v64
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v64.f32), 0xEF));
loc_8294E884:
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294E890"))) PPC_WEAK_FUNC(sub_8294E890);
PPC_FUNC_IMPL(__imp__sub_8294E890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f13,1380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// vandc128 v0,v78,v68
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v78.u8)));
	// lfs f12,1368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvrx v12,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lfs f11,1376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	ctx.f11.f64 = double(temp.f32);
	// vor v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lfs f10,1364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	ctx.f8.f64 = double(temp.f32);
	// vandc128 v13,v13,v68
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lfs f7,1360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// vmsum3fp128 v79,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v79.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// fmadds f13,f8,f9,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f0,f7,f9,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f0.f64));
	// vor128 v0,v79,v79
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v79.u8));
	// fsubs f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8294e930
	if (!ctx.cr6.gt) goto loc_8294E930;
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8294e930
	if (ctx.cr6.lt) goto loc_8294E930;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294e930
	if (!ctx.cr6.lt) goto loc_8294E930;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8294E930:
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8294e95c
	if (!ctx.cr6.lt) goto loc_8294E95C;
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294e9a8
	if (!ctx.cr6.lt) goto loc_8294E9A8;
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x8294e9a8
	goto loc_8294E9A8;
loc_8294E95C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8294e998
	if (!ctx.cr6.gt) goto loc_8294E998;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294e9a8
	if (!ctx.cr6.gt) goto loc_8294E9A8;
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8294e9a8
	goto loc_8294E9A8;
loc_8294E998:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x8294e9a8
	if (!ctx.cr6.gt) goto loc_8294E9A8;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x8294e9bc
	if (ctx.cr6.gt) goto loc_8294E9BC;
loc_8294E9A8:
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8294E9BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294E9C8"))) PPC_WEAK_FUNC(sub_8294E9C8);
PPC_FUNC_IMPL(__imp__sub_8294E9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,16
	ctx.r11.s64 = 16;
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v65,v65
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v65.u8));
	// vspltisw v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x1)));
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lvrx v10,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vcfsx v0,v0,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// vor v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// fmuls f0,f12,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f11,1376(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	ctx.f10.f64 = double(temp.f32);
	// vrlimi128 v13,v12,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	ctx.f8.f64 = double(temp.f32);
	// vor v12,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,1360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// vmsum3fp128 v10,v12,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// fmadds f13,f8,f9,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f0,f9,f12,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// vrsqrtefp v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v10.f32))));
	// vor v9,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmulfp128 v8,v10,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)));
	// fsubs f11,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// vcmpeqfp128 v11,v10,v65
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v65.f32)));
	// fsubs f10,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// vmulfp128 v10,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// fcmpu cr6,f11,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// vnmsubfp v10,v8,v10,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v13,v13,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmsum4fp128 v11,v13,v81
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v81.f32), 0xFF));
	// vmsum4fp128 v12,v13,v83
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v83.f32), 0xFF));
	// vmsum4fp128 v10,v13,v82
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v82.f32), 0xFF));
	// vmsum4fp128 v13,v13,v80
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v80.f32), 0xFF));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v12,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum3fp128 v11,v12,v12
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vrsqrtefp v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v11.f32))));
	// vor v10,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vmulfp128 v9,v11,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v11,v11,v65
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v65.f32)));
	// vmulfp128 v8,v13,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v9,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vmulfp128 v0,v0,v70
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v70.f32)));
	// vmsum4fp128 v13,v0,v87
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v87.f32), 0xFF));
	// vmsum4fp128 v12,v0,v85
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v85.f32), 0xFF));
	// vmsum4fp128 v11,v0,v86
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v86.f32), 0xFF));
	// vmsum4fp128 v0,v0,v84
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v84.f32), 0xFF));
	// vmrghw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vandc128 v0,v0,v68
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v79,v0,v64
	simde_mm_store_ps(ctx.v79.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v64.f32), 0xEF));
	// vor128 v0,v79,v79
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v79.u8));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// ble cr6,0x8294eb04
	if (!ctx.cr6.gt) goto loc_8294EB04;
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8294eb04
	if (ctx.cr6.lt) goto loc_8294EB04;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294eb04
	if (!ctx.cr6.lt) goto loc_8294EB04;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8294EB04:
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8294eb30
	if (!ctx.cr6.lt) goto loc_8294EB30;
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294eb7c
	if (!ctx.cr6.lt) goto loc_8294EB7C;
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// b 0x8294eb7c
	goto loc_8294EB7C;
loc_8294EB30:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8294eb6c
	if (!ctx.cr6.gt) goto loc_8294EB6C;
	// lfs f0,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294eb7c
	if (!ctx.cr6.gt) goto loc_8294EB7C;
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8294eb7c
	goto loc_8294EB7C;
loc_8294EB6C:
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// ble cr6,0x8294eb7c
	if (!ctx.cr6.gt) goto loc_8294EB7C;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x8294eb90
	if (ctx.cr6.gt) goto loc_8294EB90;
loc_8294EB7C:
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8294EB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294EB98"))) PPC_WEAK_FUNC(sub_8294EB98);
PPC_FUNC_IMPL(__imp__sub_8294EB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8294EBA0;
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
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8294ec08
	if (!ctx.cr6.eq) goto loc_8294EC08;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,1528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// slw r28,r11,r29
	ctx.r28.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r28,r10
	ctx.r11.u64 = ctx.r28.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8294ebe0
	if (ctx.cr0.eq) goto loc_8294EBE0;
	// addi r11,r29,376
	ctx.r11.s64 = ctx.r29.s64 + 376;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8294ec14
	goto loc_8294EC14;
loc_8294EBE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294e7a0
	ctx.lr = 0x8294EBEC;
	sub_8294E7A0(ctx, base);
	// addi r11,r29,376
	ctx.r11.s64 = ctx.r29.s64 + 376;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// or r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 | ctx.r11.u64;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// b 0x8294ec14
	goto loc_8294EC14;
loc_8294EC08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8294e7a0
	ctx.lr = 0x8294EC14;
	sub_8294E7A0(ctx, base);
loc_8294EC14:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f9,f8,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f0,f7,f9,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsubs f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8294ec88
	if (!ctx.cr6.gt) goto loc_8294EC88;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8294ec88
	if (ctx.cr6.lt) goto loc_8294EC88;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294ec88
	if (!ctx.cr6.lt) goto loc_8294EC88;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8294EC88:
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8294ecb4
	if (!ctx.cr6.lt) goto loc_8294ECB4;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294ed00
	if (!ctx.cr6.lt) goto loc_8294ED00;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x8294ed00
	goto loc_8294ED00;
loc_8294ECB4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8294ecf0
	if (!ctx.cr6.gt) goto loc_8294ECF0;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294ed00
	if (!ctx.cr6.gt) goto loc_8294ED00;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8294ed00
	goto loc_8294ED00;
loc_8294ECF0:
	// fcmpu cr6,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x8294ed00
	if (!ctx.cr6.gt) goto loc_8294ED00;
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bgt cr6,0x8294ed14
	if (ctx.cr6.gt) goto loc_8294ED14;
loc_8294ED00:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8294ed18
	if (ctx.cr6.lt) goto loc_8294ED18;
loc_8294ED14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294ED18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294ED20"))) PPC_WEAK_FUNC(sub_8294ED20);
PPC_FUNC_IMPL(__imp__sub_8294ED20) {
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
	// bl 0x8294e7a0
	ctx.lr = 0x8294ED40;
	sub_8294E7A0(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1372(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f0,f7,f9,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsubs f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsubs f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8294edb4
	if (!ctx.cr6.gt) goto loc_8294EDB4;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8294edb4
	if (ctx.cr6.lt) goto loc_8294EDB4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294edb4
	if (!ctx.cr6.lt) goto loc_8294EDB4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8294EDB4:
	// fsubs f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8294ede0
	if (!ctx.cr6.lt) goto loc_8294EDE0;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294ee2c
	if (!ctx.cr6.lt) goto loc_8294EE2C;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x8294ee2c
	goto loc_8294EE2C;
loc_8294EDE0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16776);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8294ee1c
	if (!ctx.cr6.gt) goto loc_8294EE1C;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8294ee2c
	if (!ctx.cr6.gt) goto loc_8294EE2C;
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x8294ee2c
	goto loc_8294EE2C;
loc_8294EE1C:
	// fcmpu cr6,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x8294ee2c
	if (!ctx.cr6.gt) goto loc_8294EE2C;
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// bgt cr6,0x8294ee40
	if (ctx.cr6.gt) goto loc_8294EE40;
loc_8294EE2C:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8294ee44
	if (ctx.cr6.lt) goto loc_8294EE44;
loc_8294EE40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294EE44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8294EE60"))) PPC_WEAK_FUNC(sub_8294EE60);
PPC_FUNC_IMPL(__imp__sub_8294EE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8294EE68;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61710
	ctx.lr = 0x8294EE70;
	__savefpr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// vmulfp128 v89,v90,v70
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v89.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v70.f32)));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// vmulfp128 v88,v90,v78
	simde_mm_store_ps(ctx.v88.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v78.f32)));
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,1
	ctx.r22.s64 = 1;
	// beq cr6,0x8294f038
	if (ctx.cr6.eq) goto loc_8294F038;
	// addi r25,r29,1372
	ctx.r25.s64 = ctx.r29.s64 + 1372;
	// addi r24,r29,1360
	ctx.r24.s64 = ctx.r29.s64 + 1360;
loc_8294EEA0:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r28,60
	ctx.r11.s64 = ctx.r28.s64 * 60;
	// lfs f10,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// vmulfp128 v89,v90,v70
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v89.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v70.f32)));
	// lfs f9,0(r24)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// vmulfp128 v88,v90,v78
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v88.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v78.f32)));
	// lfs f8,4(r25)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// lfs f6,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmadds f0,f7,f0,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f10,f12,f8,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f0,f5,f12,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f6,f13,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsubs f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f31,f13,f11
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// bl 0x8294e7a0
	ctx.lr = 0x8294EF34;
	sub_8294E7A0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x8294ef48
	if (!ctx.cr6.gt) goto loc_8294EF48;
	// fcmpu cr6,f30,f1
	ctx.cr6.compare(ctx.f30.f64, ctx.f1.f64);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r23.u32);
	// bgt cr6,0x8294ef4c
	if (ctx.cr6.gt) goto loc_8294EF4C;
loc_8294EF48:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_8294EF4C:
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8294ef64
	if (!ctx.cr6.lt) goto loc_8294EF64;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// blt cr6,0x8294ef68
	if (ctx.cr6.lt) goto loc_8294EF68;
loc_8294EF64:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
loc_8294EF68:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// bge cr6,0x8294ef78
	if (!ctx.cr6.lt) goto loc_8294EF78;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8294EF78:
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294efd8
	if (ctx.cr6.eq) goto loc_8294EFD8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8294f104
	if (ctx.cr6.eq) goto loc_8294F104;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8294f128
	if (!ctx.cr6.eq) goto loc_8294F128;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294efb8
	if (ctx.cr0.eq) goto loc_8294EFB8;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f128
	if (ctx.cr0.eq) goto loc_8294F128;
loc_8294EFB8:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
loc_8294EFBC:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8294ee60
	ctx.lr = 0x8294EFD8;
	sub_8294EE60(ctx, base);
loc_8294EFD8:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8294f880
	if (ctx.cr6.eq) goto loc_8294F880;
	// neg r11,r30
	ctx.r11.s64 = -ctx.r30.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwzx r28,r10,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// beq 0x8294f130
	if (ctx.cr0.eq) goto loc_8294F130;
	// bne cr6,0x8294f150
	if (!ctx.cr6.eq) goto loc_8294F150;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f02c
	if (ctx.cr0.eq) goto loc_8294F02C;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f150
	if (ctx.cr0.eq) goto loc_8294F150;
loc_8294F02C:
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
loc_8294F030:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x8294eea0
	if (!ctx.cr6.eq) goto loc_8294EEA0;
loc_8294F038:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// vor128 v88,v78,v78
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_load_si128((simde__m128i*)ctx.v78.u8));
	// vor128 v89,v70,v70
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_load_si128((simde__m128i*)ctx.v70.u8));
	// lwz r10,440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8294f880
	if (!ctx.cr6.eq) goto loc_8294F880;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8294f880
	if (ctx.cr6.eq) goto loc_8294F880;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8294deb0
	ctx.lr = 0x8294F070;
	sub_8294DEB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,1500(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1500);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f29.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f29,68(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// lfs f0,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// stw r9,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r9.u32);
	// beq cr6,0x8294f158
	if (ctx.cr6.eq) goto loc_8294F158;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294f18c
	if (!ctx.cr6.gt) goto loc_8294F18C;
	// addi r31,r29,76
	ctx.r31.s64 = ctx.r29.s64 + 76;
loc_8294F0D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8294e890
	ctx.lr = 0x8294F0E4;
	sub_8294E890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294f0d8
	if (ctx.cr6.lt) goto loc_8294F0D8;
	// b 0x8294f18c
	goto loc_8294F18C;
loc_8294F104:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8294efb8
	if (ctx.cr6.eq) goto loc_8294EFB8;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f128
	if (ctx.cr0.eq) goto loc_8294F128;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294efb8
	if (ctx.cr0.eq) goto loc_8294EFB8;
loc_8294F128:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// b 0x8294efbc
	goto loc_8294EFBC;
loc_8294F130:
	// beq cr6,0x8294f02c
	if (ctx.cr6.eq) goto loc_8294F02C;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f150
	if (ctx.cr0.eq) goto loc_8294F150;
	// lbz r11,51(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8294f02c
	if (ctx.cr0.eq) goto loc_8294F02C;
loc_8294F150:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x8294f030
	goto loc_8294F030;
loc_8294F158:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8294f18c
	if (!ctx.cr6.gt) goto loc_8294F18C;
	// addi r31,r29,76
	ctx.r31.s64 = ctx.r29.s64 + 76;
loc_8294F164:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8294e9c8
	ctx.lr = 0x8294F170;
	sub_8294E9C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294f164
	if (ctx.cr6.lt) goto loc_8294F164;
loc_8294F18C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f30,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F1BC;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f24,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// stfs f24,88(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F1F4;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F224;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r5,3
	ctx.r5.s64 = 3;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f24,80(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F254;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,4
	ctx.r5.s64 = 4;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F284;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r5,5
	ctx.r5.s64 = 5;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8294eb98
	ctx.lr = 0x8294F2B4;
	sub_8294EB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f23,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// lfs f21,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f20,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f20.f64 = double(temp.f32);
	// lfs f19,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f17.f64 = double(temp.f32);
	// lfs f16,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f15.f64 = double(temp.f32);
	// ble cr6,0x8294f838
	if (!ctx.cr6.gt) goto loc_8294F838;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r29,1100
	ctx.r26.s64 = ctx.r29.s64 + 1100;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// lfs f14,17904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17904);
	ctx.f14.f64 = double(temp.f32);
loc_8294F304:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8294f820
	if (!ctx.cr6.lt) goto loc_8294F820;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8294F31C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8294f4c8
	if (!ctx.cr6.eq) goto loc_8294F4C8;
	// lfs f28,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f26,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f21,f28
	ctx.f0.f64 = double(float(ctx.f21.f64 * ctx.f28.f64));
	// fmuls f13,f26,f22
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f22.f64));
	// lfs f25,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f30,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f22,f25,f0
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f13,f30,f23,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f23.f64 + ctx.f13.f64));
	// fmadds f0,f23,f29,f0
	ctx.f0.f64 = double(float(ctx.f23.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f13,f27,f21,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f21.f64 + ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, ctx.f14.f64);
	// bge cr6,0x8294f4c4
	if (!ctx.cr6.lt) goto loc_8294F4C4;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82950fa8
	ctx.lr = 0x8294F384;
	sub_82950FA8(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f22,f0
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f0.f64));
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f21
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fmuls f9,f12,f23
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f27,f28
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f30,f29
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fadds f4,f26,f25
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmsubs f13,f13,f23,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64 - ctx.f11.f64));
	// fmsubs f11,f12,f22,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f22.f64 - ctx.f10.f64));
	// fmsubs f10,f21,f0,f9
	ctx.f10.f64 = double(float(ctx.f21.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f9,f24,f0
	ctx.f9.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f4,f13,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f8,f31,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f420
	if (!ctx.cr6.lt) goto loc_8294F420;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_8294F420:
	// fmuls f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f30,f13
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmsubs f11,f0,f10,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmsubs f10,f8,f0,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmsubs f9,f13,f6,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmsubs f8,f4,f13,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f7,f12,f29,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f3.f64));
	// fmsubs f6,f30,f12,f2
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f11,f8,f9,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f4c4
	if (!ctx.cr6.lt) goto loc_8294F4C4;
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f10,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x8294ed20
	ctx.lr = 0x8294F4BC;
	sub_8294ED20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
loc_8294F4C4:
	// lfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_8294F4C8:
	// rlwinm r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8294f668
	if (!ctx.cr6.eq) goto loc_8294F668;
	// lfs f26,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f30,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f0,f26,f19
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f19.f64));
	// fmuls f13,f20,f30
	ctx.f13.f64 = double(float(ctx.f20.f64 * ctx.f30.f64));
	// lfs f29,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f29,f20,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f20.f64 + ctx.f0.f64));
	// fmadds f13,f19,f25,f13
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f25.f64 + ctx.f13.f64));
	// fmadds f0,f28,f18,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f18.f64 + ctx.f0.f64));
	// fmadds f13,f18,f27,f13
	ctx.f13.f64 = double(float(ctx.f18.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, ctx.f14.f64);
	// bge cr6,0x8294f664
	if (!ctx.cr6.lt) goto loc_8294F664;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82950fa8
	ctx.lr = 0x8294F524;
	sub_82950FA8(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f19,f0
	ctx.f11.f64 = double(float(ctx.f19.f64 * ctx.f0.f64));
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f18
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// fmuls f9,f12,f20
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f20.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f28,f27
	ctx.f7.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f29,f30
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fadds f4,f26,f25
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmsubs f13,f13,f20,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 - ctx.f11.f64));
	// fmsubs f11,f12,f19,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 - ctx.f10.f64));
	// fmsubs f10,f18,f0,f9
	ctx.f10.f64 = double(float(ctx.f18.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f9,f24,f0
	ctx.f9.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f4,f13,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f8,f31,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f5c0
	if (!ctx.cr6.lt) goto loc_8294F5C0;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_8294F5C0:
	// fmuls f11,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmsubs f11,f0,f10,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmsubs f10,f8,f0,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmsubs f9,f13,f6,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmsubs f8,f4,f13,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f7,f12,f30,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f3.f64));
	// fmsubs f6,f29,f12,f2
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f11,f8,f9,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f664
	if (!ctx.cr6.lt) goto loc_8294F664;
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f10,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x8294ed20
	ctx.lr = 0x8294F65C;
	sub_8294ED20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
loc_8294F664:
	// lfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_8294F668:
	// rlwinm r11,r28,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x8294f808
	if (!ctx.cr6.eq) goto loc_8294F808;
	// lfs f30,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f26,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f0,f17,f30
	ctx.f0.f64 = double(float(ctx.f17.f64 * ctx.f30.f64));
	// fmuls f13,f26,f16
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f16.f64));
	// lfs f25,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f16,f25,f0
	ctx.f0.f64 = double(float(ctx.f16.f64 * ctx.f25.f64 + ctx.f0.f64));
	// fmadds f13,f29,f17,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f17.f64 + ctx.f13.f64));
	// fmadds f0,f15,f28,f0
	ctx.f0.f64 = double(float(ctx.f15.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f13,f27,f15,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f15.f64 + ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f14
	ctx.cr6.compare(ctx.f0.f64, ctx.f14.f64);
	// bge cr6,0x8294f804
	if (!ctx.cr6.lt) goto loc_8294F804;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82950fa8
	ctx.lr = 0x8294F6C4;
	sub_82950FA8(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f16,f0
	ctx.f11.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f15
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f15.f64));
	// fmuls f9,f12,f17
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f27,f28
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f29,f30
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fadds f4,f26,f25
	ctx.f4.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fmsubs f13,f13,f17,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f17.f64 - ctx.f11.f64));
	// fmsubs f11,f12,f16,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f16.f64 - ctx.f10.f64));
	// fmsubs f10,f15,f0,f9
	ctx.f10.f64 = double(float(ctx.f15.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f9,f24,f0
	ctx.f9.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// fmuls f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f4,f13,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f8,f31,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f760
	if (!ctx.cr6.lt) goto loc_8294F760;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8294F760:
	// fmuls f11,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f10,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmsubs f11,f0,f10,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 - ctx.f11.f64));
	// fmsubs f10,f8,f0,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmsubs f9,f13,f6,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmsubs f8,f4,f13,f5
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fmsubs f7,f12,f30,f3
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f3.f64));
	// fmsubs f6,f29,f12,f2
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmadds f11,f8,f9,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f11,f6,f7,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8294f804
	if (!ctx.cr6.lt) goto loc_8294F804;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// stw r9,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r9.u32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,284(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bl 0x8294ed20
	ctx.lr = 0x8294F7FC;
	sub_8294ED20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8294f880
	if (ctx.cr0.eq) goto loc_8294F880;
loc_8294F804:
	// lfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
loc_8294F808:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294f31c
	if (ctx.cr6.lt) goto loc_8294F31C;
loc_8294F820:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8294f304
	if (ctx.cr6.lt) goto loc_8294F304;
loc_8294F838:
	// lfs f13,68(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x8294f880
	if (!ctx.cr6.gt) goto loc_8294F880;
	// lfs f0,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8294f880
	if (!ctx.cr6.lt) goto loc_8294F880;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8294f880
	if (!ctx.cr6.gt) goto loc_8294F880;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r22,1400(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1400, ctx.r22.u32);
loc_8294F880:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a6175c
	ctx.lr = 0x8294F88C;
	__restfpr_14(ctx, base);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8294F890"))) PPC_WEAK_FUNC(sub_8294F890);
PPC_FUNC_IMPL(__imp__sub_8294F890) {
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
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r4,1404(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r5,1408(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lfs f0,16364(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v83,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v80,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v81,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v82,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v0,v81,v83
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v83.u32), simde_mm_load_si128((simde__m128i*)ctx.v81.u32)));
	// vmrghw128 v13,v80,v82
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v82.u32), simde_mm_load_si128((simde__m128i*)ctx.v80.u32)));
	// lvx128 v87,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v84,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v8,v80,v82
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v82.u32), simde_mm_load_si128((simde__m128i*)ctx.v80.u32)));
	// lvx128 v86,r5,r9
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v7,v81,v83
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v83.u32), simde_mm_load_si128((simde__m128i*)ctx.v81.u32)));
	// lvx128 v85,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v9,v84,v86
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v86.u32), simde_mm_load_si128((simde__m128i*)ctx.v84.u32)));
	// vmrghw128 v10,v85,v87
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v87.u32), simde_mm_load_si128((simde__m128i*)ctx.v85.u32)));
	// addi r11,r3,1488
	ctx.r11.s64 = ctx.r3.s64 + 1488;
	// vmrghw128 v80,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v80.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// li r5,0
	ctx.r5.s64 = 0;
	// vmrglw128 v81,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v81.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// li r4,0
	ctx.r4.s64 = 0;
	// vmrglw128 v13,v85,v87
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v87.u32), simde_mm_load_si128((simde__m128i*)ctx.v85.u32)));
	// vmrglw v12,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvlx v11,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v5,v84,v86
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v86.u32), simde_mm_load_si128((simde__m128i*)ctx.v84.u32)));
	// lvrx v6,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghw128 v82,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v82.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vor128 v78,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglw128 v83,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v83.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vor128 v85,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vmrghw128 v84,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v84.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw128 v86,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v86.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrglw128 v87,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v87.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vor128 v90,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmulfp128 v89,v90,v70
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v89.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v70.f32)));
	// vmulfp128 v88,v90,v78
	simde_mm_store_ps(ctx.v88.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v90.f32), simde_mm_load_ps(ctx.v78.f32)));
	// bl 0x8294ee60
	ctx.lr = 0x8294F95C;
	sub_8294EE60(ctx, base);
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

__attribute__((alias("__imp__sub_8294F970"))) PPC_WEAK_FUNC(sub_8294F970);
PPC_FUNC_IMPL(__imp__sub_8294F970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8294F978;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61724
	ctx.lr = 0x8294F980;
	__savefpr_19(ctx, base);
	// stwu r1,-2032(r1)
	ea = -2032 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r5,2064(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2064, ctx.r5.u64);
	// std r6,2072(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2072, ctx.r6.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r7,2080(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2080, ctx.r7.u64);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r8,2088(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2088, ctx.r8.u64);
	// std r7,2096(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2096, ctx.r7.u64);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// std r10,2104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 2104, ctx.r10.u64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8295011c
	if (ctx.cr6.eq) goto loc_8295011C;
	// lfs f29,2088(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2088);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r30,160
	ctx.r5.s64 = ctx.r30.s64 + 160;
	// lfs f30,2084(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2084);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f11,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f0,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,2068(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2068);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// lfs f12,2072(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2072);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f31,2080(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2080);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f25,f12,f29
	ctx.f25.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// lfs f4,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f3,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f5,f30,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f10.f64));
	// lfs f7,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f4
	ctx.f5.f64 = ctx.f4.f64;
	// fmadds f11,f4,f31,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f11.f64));
	// lfs f0,2064(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f22,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f22.f64 = double(temp.f32);
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// lfs f21,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f24,208(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f8,f3,f31,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f8.f64));
	// lfs f28,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f6,f5,f0,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f5,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f2,f13,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f9,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// fmadds f7,f4,f0,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f4,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f23,f9,f31,f10
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// lfs f10,2104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2104);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f5,f5,f29,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f11.f64));
	// lfs f11,2096(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2096);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f8,f4,f29,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f8.f64));
	// lfs f9,2100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 2100);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fcmpu cr6,f11,f28
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// fmadds f0,f3,f0,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmr f13,f22
	ctx.f13.f64 = ctx.f22.f64;
	// fmadds f6,f2,f12,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// fmadds f12,f1,f12,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fadds f24,f23,f24
	ctx.f24.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// stfs f24,192(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f23,f5,f22
	ctx.f23.f64 = double(float(ctx.f5.f64 + ctx.f22.f64));
	// stfs f23,196(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f22,f8,f21
	ctx.f22.f64 = double(float(ctx.f8.f64 + ctx.f21.f64));
	// stfs f22,200(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f21,f0,f4
	ctx.f21.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f21,160(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f20,f6,f13
	ctx.f20.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f20,164(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f19,f12,f3
	ctx.f19.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f19,168(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bne cr6,0x8294fd94
	if (!ctx.cr6.eq) goto loc_8294FD94;
	// fcmpu cr6,f9,f28
	ctx.cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// bne cr6,0x8294fd94
	if (!ctx.cr6.eq) goto loc_8294FD94;
	// fcmpu cr6,f10,f28
	ctx.cr6.compare(ctx.f10.f64, ctx.f28.f64);
	// bne cr6,0x8294fd94
	if (!ctx.cr6.eq) goto loc_8294FD94;
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8294e248
	ctx.lr = 0x8294FB2C;
	sub_8294E248(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8294fd8c
	if (!ctx.cr0.eq) goto loc_8294FD8C;
	// fsubs f11,f19,f22
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f19.f64 - ctx.f22.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f0,f22
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f22.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f21,f24
	ctx.f10.f64 = double(float(ctx.f21.f64 - ctx.f24.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f13,f24
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f24.f64));
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// fsubs f8,f20,f23
	ctx.f8.f64 = double(float(ctx.f20.f64 - ctx.f23.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fsubs f6,f0,f23
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,16376(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfd f0,16368(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16368);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f9,f10,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f11,f7,f10,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f10,f8,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f11,f6,f8,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f13,f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsub f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294fc10
	if (ctx.cr6.eq) goto loc_8294FC10;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294FC10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8294FC10:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8294fc2c
	if (!ctx.cr6.eq) goto loc_8294FC2C;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// b 0x8294fc70
	goto loc_8294FC70;
loc_8294FC2C:
	// lwz r9,440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// bne cr6,0x8294fc70
	if (!ctx.cr6.eq) goto loc_8294FC70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294FC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_8294FC70:
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bl 0x82936910
	ctx.lr = 0x8294FC80;
	sub_82936910(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f8,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f13,f10,f13,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f7,f12,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f9,f2,f12,f4
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f8,f28,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f13.f64));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f31,f0,f9
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fmadds f13,f3,f28,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f28.f64 + ctx.f10.f64));
	// fmadds f0,f11,f28,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x8294FD24;
	sub_82332E18(ctx, base);
	// fneg f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f25
	ctx.f13.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fneg f12,f27
	ctx.f12.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f10,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8294fd8c
	if (!ctx.cr6.lt) goto loc_8294FD8C;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8294FD8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82950120
	goto loc_82950120;
loc_8294FD94:
	// lwz r10,2096(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2096);
	// fneg f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fneg f0,f9
	ctx.f0.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,2100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2100);
	// lwz r8,2104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2104);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r6,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r6.u8);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lwz r29,144(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// bl 0x82817590
	ctx.lr = 0x8294FDF0;
	sub_82817590(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f12,248(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r29,r11,20416
	ctx.r29.s64 = ctx.r11.s64 + 20416;
	// lfs f11,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r28,r30,96
	ctx.r28.s64 = ctx.r30.s64 + 96;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,17820(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17820);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x8294e610
	ctx.lr = 0x8294FEA0;
	sub_8294E610(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,436(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8294f890
	ctx.lr = 0x8294FEB8;
	sub_8294F890(ctx, base);
	// lwz r11,1736(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82950114
	if (ctx.cr6.eq) goto loc_82950114;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1732(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1732);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f24,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// fdivs f9,f24,f13
	ctx.f9.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// lfd f12,16656(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16656);
	// lfd f11,16376(r9)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16376);
	// lfd f13,16368(r8)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16368);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f0,f0,f12,f8
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// fsub f12,f0,f9
	ctx.f12.f64 = ctx.f0.f64 - ctx.f9.f64;
	// fsel f0,f12,f9,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsel f0,f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsub f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f12,f25,f0
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8294ff84
	if (ctx.cr6.eq) goto loc_8294FF84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294FF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8294FF84:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8294ffc0
	if (ctx.cr6.eq) goto loc_8294FFC0;
	// lwz r9,440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8294FFC0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8294ffe0
	if (!ctx.cr6.eq) goto loc_8294FFE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8294FFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_8294FFE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// bl 0x82936910
	ctx.lr = 0x8294FFF0;
	sub_82936910(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f10,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f7,f13,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f3,f13,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f8,f12,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f5,f12,f9
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f0,f12,f2,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f13,f6,f28,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f13.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// fmadds f13,f4,f28,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f0,f10,f28,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x82950094;
	sub_82332E18(ctx, base);
	// fneg f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f25
	ctx.f13.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fneg f12,f27
	ctx.f12.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x829500fc
	if (!ctx.cr6.lt) goto loc_829500FC;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_829500FC:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// beq cr6,0x82950120
	if (ctx.cr6.eq) goto loc_82950120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82950120
	goto loc_82950120;
loc_82950114:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82950120
	goto loc_82950120;
loc_8295011C:
	// lwz r3,436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
loc_82950120:
	// addi r1,r1,2032
	ctx.r1.s64 = ctx.r1.s64 + 2032;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61770
	ctx.lr = 0x8295012C;
	__restfpr_19(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82950130"))) PPC_WEAK_FUNC(sub_82950130);
PPC_FUNC_IMPL(__imp__sub_82950130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f8,1368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,1360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f11,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f8,f10,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f10,f9
	ctx.f10.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f9,f6
	ctx.f9.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fsubs f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8295024c
	if (!ctx.cr6.gt) goto loc_8295024C;
	// lfs f13,1372(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8295024c
	if (!ctx.cr6.lt) goto loc_8295024C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82950258
	if (!ctx.cr6.lt) goto loc_82950258;
	// stfs f0,1372(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1372, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f7,1360(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,1368(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1368);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,17520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17520);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f8,f4,f9
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fadds f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f9,-16(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f10,-12(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f11,36(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_8295024C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82950258:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82950260"))) PPC_WEAK_FUNC(sub_82950260);
PPC_FUNC_IMPL(__imp__sub_82950260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82950268;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61730
	ctx.lr = 0x82950270;
	__savefpr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x829503e0
	if (ctx.cr6.eq) goto loc_829503E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// addi r27,r29,1360
	ctx.r27.s64 = ctx.r29.s64 + 1360;
	// lfs f31,16364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f31.f64 = double(temp.f32);
loc_8295029C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f8,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// lfs f7,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fmadds f0,f12,f6,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fadds f30,f13,f9
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fsubs f29,f0,f5
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fneg f0,f30
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x82950394
	if (!ctx.cr6.gt) goto loc_82950394;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82950374
	if (!ctx.cr6.eq) goto loc_82950374;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8295036c
	if (ctx.cr0.eq) goto loc_8295036C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82950374
	if (ctx.cr0.eq) goto loc_82950374;
loc_8295036C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82950378
	goto loc_82950378;
loc_82950374:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82950378:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950260
	ctx.lr = 0x82950388;
	sub_82950260(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82950394
	if (!ctx.cr0.eq) goto loc_82950394;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82950394:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x829503cc
	if (ctx.cr6.eq) goto loc_829503CC;
	// lbz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x829503c4
	if (ctx.cr0.eq) goto loc_829503C4;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r10,51(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 51);
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829503cc
	if (ctx.cr0.eq) goto loc_829503CC;
loc_829503C4:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x829503d0
	goto loc_829503D0;
loc_829503CC:
	// li r26,0
	ctx.r26.s64 = 0;
loc_829503D0:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bgt cr6,0x82950ad8
	if (ctx.cr6.gt) goto loc_82950AD8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8295029c
	if (!ctx.cr6.eq) goto loc_8295029C;
loc_829503E0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82950ad8
	if (!ctx.cr6.eq) goto loc_82950AD8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r4,60
	ctx.r11.s64 = ctx.r4.s64 * 60;
	// lwz r10,440(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 440);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82950ad8
	if (ctx.cr6.eq) goto loc_82950AD8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8294deb0
	ctx.lr = 0x82950410;
	sub_8294DEB0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82950464
	if (!ctx.cr6.gt) goto loc_82950464;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,76
	ctx.r30.s64 = ctx.r29.s64 + 76;
loc_82950428:
	// lwz r11,1356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r5,r11,0,2,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// bl 0x82950130
	ctx.lr = 0x82950444;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82950428
	if (ctx.cr6.lt) goto loc_82950428;
loc_82950464:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lfs f30,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f23,24000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24000);
	ctx.f23.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f23,88(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82950130
	ctx.lr = 0x829504A8;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f24,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f24.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f24,88(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82950130
	ctx.lr = 0x829504E4;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lfs f0,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f23,80(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950130
	ctx.lr = 0x82950518;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r6,3
	ctx.r6.s64 = 3;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f24,80(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950130
	ctx.lr = 0x8295054C;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f23,84(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950130
	ctx.lr = 0x82950580;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r6,5
	ctx.r6.s64 = 5;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f24,84(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950130
	ctx.lr = 0x829505B4;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82950ad4
	if (!ctx.cr6.gt) goto loc_82950AD4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r23,r29,1100
	ctx.r23.s64 = ctx.r29.s64 + 1100;
	// addi r22,r29,84
	ctx.r22.s64 = ctx.r29.s64 + 84;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lfs f22,17904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17904);
	ctx.f22.f64 = double(temp.f32);
loc_829505E4:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82950abc
	if (!ctx.cr6.gt) goto loc_82950ABC;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_829505F8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82950790
	if (!ctx.cr6.eq) goto loc_82950790;
	// lfs f28,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f26,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// fadds f0,f26,f28
	ctx.f0.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fadds f13,f25,f27
	ctx.f13.f64 = double(float(ctx.f25.f64 + ctx.f27.f64));
	// lfs f30,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// fmadds f13,f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82950790
	if (!ctx.cr6.lt) goto loc_82950790;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82950fa8
	ctx.lr = 0x82950658;
	sub_82950FA8(ctx, base);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f26,f25
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f9,f28,f27
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fadds f7,f30,f29
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fmsubs f8,f13,f31,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f12.f64));
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f12,f8,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f6,f24,f12
	ctx.f6.f64 = double(float(ctx.f24.f64 / ctx.f12.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f0,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f31,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x829506ec
	if (!ctx.cr6.lt) goto loc_829506EC;
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_829506EC:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f4,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fmsubs f8,f30,f12,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f7,f12,f29,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f7.f64));
	// fmsubs f6,f4,f0,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f11,f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmsubs f9,f13,f9,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f10,f6,f10,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82950790
	if (!ctx.cr6.lt) goto loc_82950790;
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// stw r9,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82950130
	ctx.lr = 0x82950788;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
loc_82950790:
	// rlwinm r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8295091c
	if (!ctx.cr6.eq) goto loc_8295091C;
	// lfs f28,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f30,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fadds f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// fadds f13,f29,f27
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lfs f26,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f26.f64));
	// fmadds f13,f13,f31,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f25.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x8295091c
	if (!ctx.cr6.lt) goto loc_8295091C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82950fa8
	ctx.lr = 0x829507E4;
	sub_82950FA8(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f26,f25
	ctx.f11.f64 = double(float(ctx.f26.f64 + ctx.f25.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f28,f27
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fadds f7,f30,f29
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fmsubs f12,f13,f31,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f12.f64));
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmadds f13,f5,f5,f6
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f8,f24,f13
	ctx.f8.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// fmuls f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f31,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82950878
	if (!ctx.cr6.lt) goto loc_82950878;
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82950878:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f29
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f4,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fmsubs f8,f30,f12,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f7,f12,f29,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f7.f64));
	// fmsubs f6,f4,f0,f5
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f11,f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmsubs f9,f13,f9,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f10,f6,f10,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8295091c
	if (!ctx.cr6.lt) goto loc_8295091C;
	// lfs f11,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f10,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r9,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r9.u32);
	// fmadds f13,f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// bl 0x82950130
	ctx.lr = 0x82950914;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
loc_8295091C:
	// rlwinm r11,r28,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// bne cr6,0x82950aa8
	if (!ctx.cr6.eq) goto loc_82950AA8;
	// lfs f26,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// lfs f30,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r31,-8
	ctx.r6.s64 = ctx.r31.s64 + -8;
	// lfs f25,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f25.f64 = double(temp.f32);
	// fadds f0,f30,f26
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// lfs f29,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fadds f13,f29,f25
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f25.f64));
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f28.f64));
	// fmadds f13,f13,f31,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f27.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82950aa8
	if (!ctx.cr6.lt) goto loc_82950AA8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82950fa8
	ctx.lr = 0x82950970;
	sub_82950FA8(ctx, base);
	// lfs f8,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f25,f26
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f26.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f27,f28
	ctx.f9.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f12,f13,f31,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f12.f64));
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f8,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f6,f24,f13
	ctx.f6.f64 = double(float(ctx.f24.f64 / ctx.f13.f64));
	// fmuls f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f11,f9,f12,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f7,f0,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f31,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82950a04
	if (!ctx.cr6.lt) goto loc_82950A04;
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f12,f12,f23
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82950A04:
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f29,f13
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f4,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fmsubs f8,f29,f12,f8
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmsubs f7,f12,f30,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f7.f64));
	// fmsubs f6,f0,f4,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 - ctx.f5.f64));
	// fmsubs f11,f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmsubs f9,f13,f9,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f2.f64));
	// fmuls f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f10,f6,f10,f8
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f11,f9,f11,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x82950aa8
	if (!ctx.cr6.lt) goto loc_82950AA8;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// fmadds f13,f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// bl 0x82950130
	ctx.lr = 0x82950AA0;
	sub_82950130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82950ad8
	if (ctx.cr0.eq) goto loc_82950AD8;
loc_82950AA8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r25,r26
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x829505f8
	if (ctx.cr6.lt) goto loc_829505F8;
loc_82950ABC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829505e4
	if (ctx.cr6.lt) goto loc_829505E4;
loc_82950AD4:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82950AD8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a6177c
	ctx.lr = 0x82950AE8;
	__restfpr_22(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82950AF0"))) PPC_WEAK_FUNC(sub_82950AF0);
PPC_FUNC_IMPL(__imp__sub_82950AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82950AF8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-1568(r1)
	ea = -1568 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r5,1600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1600, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,1600(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// lwz r9,1604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r6,1608(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1608, ctx.r6.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r7,1616(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1616, ctx.r7.u64);
	// std r8,1624(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1624, ctx.r8.u64);
	// lwz r8,1608(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82950b84
	if (ctx.cr6.eq) goto loc_82950B84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82950B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82950B84:
	// stfs f31,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stw r3,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r3.u32);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// beq cr6,0x82950d64
	if (ctx.cr6.eq) goto loc_82950D64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82950d64
	if (ctx.cr6.eq) goto loc_82950D64;
	// lfs f0,1604(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,1608(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,1600(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,164(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f9,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f8,f13,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f8,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,1616(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lfs f7,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f6,f12,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f5,f12,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f12,f4,f12,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f11,f8
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x82950c48
	if (!ctx.cr6.eq) goto loc_82950C48;
	// lfs f11,1620(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bne cr6,0x82950c48
	if (!ctx.cr6.eq) goto loc_82950C48;
	// lfs f11,1624(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1624);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x82950cdc
	if (ctx.cr6.eq) goto loc_82950CDC;
loc_82950C48:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,1616(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// lwz r7,1620(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r28,1624(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1624);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,17072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17072);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,1484(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1484, temp.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stb r29,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r29.u8);
	// stw r27,1472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1472, ctx.r27.u32);
	// stw r26,1476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1476, ctx.r26.u32);
	// stw r25,1480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1480, ctx.r25.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82950260
	ctx.lr = 0x82950CD8;
	sub_82950260(ctx, base);
	// b 0x82950d64
	goto loc_82950D64;
loc_82950CDC:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82950CE4:
	// mulli r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 * 60;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f11,f0,f9,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x82950d70
	if (!ctx.cr6.gt) goto loc_82950D70;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82950d98
	if (!ctx.cr6.eq) goto loc_82950D98;
	// lbz r11,50(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82950d40
	if (ctx.cr0.eq) goto loc_82950D40;
	// lbz r11,51(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82950d98
	if (ctx.cr0.eq) goto loc_82950D98;
loc_82950D40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82950D44:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82950ce4
	if (!ctx.cr6.eq) goto loc_82950CE4;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82950D64:
	// addi r1,r1,1568
	ctx.r1.s64 = ctx.r1.s64 + 1568;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_82950D70:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82950d40
	if (ctx.cr6.eq) goto loc_82950D40;
	// lbz r11,50(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 50);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82950d98
	if (ctx.cr0.eq) goto loc_82950D98;
	// lbz r11,51(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 51);
	// andi. r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 33;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82950d40
	if (ctx.cr0.eq) goto loc_82950D40;
loc_82950D98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82950d44
	goto loc_82950D44;
}

__attribute__((alias("__imp__sub_82950DA0"))) PPC_WEAK_FUNC(sub_82950DA0);
PPC_FUNC_IMPL(__imp__sub_82950DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82950DA8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,440(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
	// beq cr6,0x82950f9c
	if (ctx.cr6.eq) goto loc_82950F9C;
	// addi r29,r31,96
	ctx.r29.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826c8a28
	ctx.lr = 0x82950DFC;
	sub_826C8A28(ctx, base);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82950E10;
	sub_82A4EA80(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82950f0c
	if (ctx.cr6.eq) goto loc_82950F0C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
loc_82950E34:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82950ea8
	if (!ctx.cr0.gt) goto loc_82950EA8;
	// lwz r5,-34(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -34);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mulli r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 * 24;
loc_82950E4C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82950e9c
	if (ctx.cr6.lt) goto loc_82950E9C;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mulli r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 * 12;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
loc_82950E9C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bne 0x82950e4c
	if (!ctx.cr0.eq) goto loc_82950E4C;
loc_82950EA8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 + 60;
	// bne 0x82950e34
	if (!ctx.cr0.eq) goto loc_82950E34;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82950f0c
	if (ctx.cr6.eq) goto loc_82950F0C;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r9,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r9.u32);
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
loc_82950F0C:
	// lfs f0,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f3,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f11,432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f10,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f3,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f7,f8,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r9,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r9.u32);
	// stw r10,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r10.u32);
loc_82950F9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82950FA8"))) PPC_WEAK_FUNC(sub_82950FA8);
PPC_FUNC_IMPL(__imp__sub_82950FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61744
	ctx.lr = 0x82950FB8;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f10,17516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f12,f11,f9,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// fmsubs f13,f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmsubs f0,f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x8295107c
	if (!ctx.cr6.lt) goto loc_8295107C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// b 0x82951140
	goto loc_82951140;
loc_8295107C:
	// lfs f9,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f1,f0
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f30,f31,f12
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f29,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmsubs f10,f12,f6,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 - ctx.f7.f64));
	// fmsubs f8,f0,f8,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f2.f64));
	// fmsubs f12,f4,f12,f28
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 - ctx.f28.f64));
	// fmsubs f0,f9,f0,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f30.f64));
	// fmsubs f7,f1,f13,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 - ctx.f5.f64));
	// lfs f1,16668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f13,f31,f13,f3
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmuls f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f9,f7,f27
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x8295113C;
	sub_82332E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82951140:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82a61790
	ctx.lr = 0x8295114C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951158"))) PPC_WEAK_FUNC(sub_82951158);
PPC_FUNC_IMPL(__imp__sub_82951158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,26728
	ctx.r11.s64 = ctx.r11.s64 + 26728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d4450
	ctx.lr = 0x82951184;
	sub_828D4450(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82951194
	if (ctx.cr0.eq) goto loc_82951194;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82951194;
	sub_82332DB8(ctx, base);
loc_82951194:
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

__attribute__((alias("__imp__sub_829511B0"))) PPC_WEAK_FUNC(sub_829511B0);
PPC_FUNC_IMPL(__imp__sub_829511B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82890108
	ctx.lr = 0x829511D0;
	sub_82890108(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x829511e0
	if (!ctx.cr6.eq) goto loc_829511E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829511f8
	goto loc_829511F8;
loc_829511E0:
	// bl 0x825415f0
	ctx.lr = 0x829511E4;
	sub_825415F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829511f8
	if (ctx.cr6.eq) goto loc_829511F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713600
	ctx.lr = 0x829511F8;
	sub_82713600(ctx, base);
loc_829511F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951210"))) PPC_WEAK_FUNC(sub_82951210);
PPC_FUNC_IMPL(__imp__sub_82951210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82951248
	if (ctx.cr6.eq) goto loc_82951248;
	// bl 0x82890108
	ctx.lr = 0x82951238;
	sub_82890108(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82951248
	if (!ctx.cr6.eq) goto loc_82951248;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82951254
	goto loc_82951254;
loc_82951248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828da018
	ctx.lr = 0x82951254;
	sub_828DA018(ctx, base);
loc_82951254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951270"))) PPC_WEAK_FUNC(sub_82951270);
PPC_FUNC_IMPL(__imp__sub_82951270) {
	PPC_FUNC_PROLOGUE();
	// b 0x82890108
	sub_82890108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951278"))) PPC_WEAK_FUNC(sub_82951278);
PPC_FUNC_IMPL(__imp__sub_82951278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x82833108
	ctx.lr = 0x82951298;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82951320
	if (ctx.cr0.eq) goto loc_82951320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828da0f8
	ctx.lr = 0x829512AC;
	sub_828DA0F8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26728
	ctx.r11.s64 = ctx.r11.s64 + 26728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// b 0x82951324
	goto loc_82951324;
loc_82951320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82951324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951340"))) PPC_WEAK_FUNC(sub_82951340);
PPC_FUNC_IMPL(__imp__sub_82951340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-32408
	ctx.r3.s64 = ctx.r11.s64 + -32408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951350"))) PPC_WEAK_FUNC(sub_82951350);
PPC_FUNC_IMPL(__imp__sub_82951350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-30612
	ctx.r3.s64 = ctx.r11.s64 + -30612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951360"))) PPC_WEAK_FUNC(sub_82951360);
PPC_FUNC_IMPL(__imp__sub_82951360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82951398
	if (ctx.cr6.eq) goto loc_82951398;
	// bl 0x828a06c8
	ctx.lr = 0x82951388;
	sub_828A06C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82951398
	if (!ctx.cr6.eq) goto loc_82951398;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829513a4
	goto loc_829513A4;
loc_82951398:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x829513A4;
	sub_82338A28(ctx, base);
loc_829513A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829513C0"))) PPC_WEAK_FUNC(sub_829513C0);
PPC_FUNC_IMPL(__imp__sub_829513C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a06c8
	sub_828A06C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829513C8"))) PPC_WEAK_FUNC(sub_829513C8);
PPC_FUNC_IMPL(__imp__sub_829513C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x829513E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82951440
	if (ctx.cr0.eq) goto loc_82951440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x829513FC;
	sub_82338B88(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,26912
	ctx.r11.s64 = ctx.r11.s64 + 26912;
	// addi r10,r10,27936
	ctx.r10.s64 = ctx.r10.s64 + 27936;
	// addi r9,r9,27988
	ctx.r9.s64 = ctx.r9.s64 + 27988;
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
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// b 0x82951444
	goto loc_82951444;
loc_82951440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82951444:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951460"))) PPC_WEAK_FUNC(sub_82951460);
PPC_FUNC_IMPL(__imp__sub_82951460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a06c8
	ctx.lr = 0x82951480;
	sub_828A06C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82951490
	if (!ctx.cr6.eq) goto loc_82951490;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x829514a8
	goto loc_829514A8;
loc_82951490:
	// bl 0x82338750
	ctx.lr = 0x82951494;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x829514a8
	if (ctx.cr6.eq) goto loc_829514A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x829514A8;
	sub_82338858(ctx, base);
loc_829514A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829514C0"))) PPC_WEAK_FUNC(sub_829514C0);
PPC_FUNC_IMPL(__imp__sub_829514C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,26912
	ctx.r11.s64 = ctx.r11.s64 + 26912;
	// addi r10,r10,27936
	ctx.r10.s64 = ctx.r10.s64 + 27936;
	// addi r9,r9,27988
	ctx.r9.s64 = ctx.r9.s64 + 27988;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x82951504;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82951514
	if (ctx.cr0.eq) goto loc_82951514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82951514;
	sub_82332DB8(ctx, base);
loc_82951514:
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

__attribute__((alias("__imp__sub_82951530"))) PPC_WEAK_FUNC(sub_82951530);
PPC_FUNC_IMPL(__imp__sub_82951530) {
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
	// bl 0x829bc540
	ctx.lr = 0x8295154C;
	sub_829BC540(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r3,-32216
	ctx.r3.s64 = -2111307776;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,-32456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// stfs f0,968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 968, temp.u32);
	// lis r30,-32216
	ctx.r30.s64 = -2111307776;
	// lfd f12,19328(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19328);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,17852(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17852);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,27936
	ctx.r3.s64 = ctx.r3.s64 + 27936;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// li r9,5000
	ctx.r9.s64 = 5000;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r11.u32);
	// li r6,30000
	ctx.r6.s64 = 30000;
	// stw r11,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r4,26912
	ctx.r4.s64 = ctx.r4.s64 + 26912;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r11,r30,27988
	ctx.r11.s64 = ctx.r30.s64 + 27988;
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lfs f0,972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r10.u32);
	// fadd f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 + ctx.f12.f64;
	// stw r10,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r10.u32);
	// stw r10,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r10.u32);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// stw r9,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r9.u32);
	// stw r8,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r8.u32);
	// stw r7,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r7.u32);
	// stw r6,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r6.u32);
	// stw r5,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r5.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951618"))) PPC_WEAK_FUNC(sub_82951618);
PPC_FUNC_IMPL(__imp__sub_82951618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1092);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82951638"))) PPC_WEAK_FUNC(sub_82951638);
PPC_FUNC_IMPL(__imp__sub_82951638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951640"))) PPC_WEAK_FUNC(sub_82951640);
PPC_FUNC_IMPL(__imp__sub_82951640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,26892
	ctx.r3.s64 = ctx.r10.s64 + 26892;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x82951670;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829516f0
	if (!ctx.cr6.eq) goto loc_829516F0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,20328
	ctx.r31.s64 = ctx.r11.s64 + 20328;
	// lwz r11,20332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20332);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829516b0
	if (!ctx.cr0.eq) goto loc_829516B0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,28012
	ctx.r9.s64 = ctx.r9.s64 + 28012;
	// stw r11,20332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20332, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-12056
	ctx.r3.s64 = ctx.r11.s64 + -12056;
	// bl 0x82a4c758
	ctx.lr = 0x829516B0;
	sub_82A4C758(ctx, base);
loc_829516B0:
	// stw r31,1408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1408, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829516CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,1612(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829516f0
	if (ctx.cr6.eq) goto loc_829516F0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829516F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829516F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951708"))) PPC_WEAK_FUNC(sub_82951708);
PPC_FUNC_IMPL(__imp__sub_82951708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82951718"))) PPC_WEAK_FUNC(sub_82951718);
PPC_FUNC_IMPL(__imp__sub_82951718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,1412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,964(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// stfs f13,968(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 968, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,1688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8295176c
	if (!ctx.cr6.eq) goto loc_8295176C;
	// stw r10,1688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1688, ctx.r10.u32);
loc_8295176C:
	// stw r10,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951778"))) PPC_WEAK_FUNC(sub_82951778);
PPC_FUNC_IMPL(__imp__sub_82951778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x82951794;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829517a4
	if (ctx.cr0.eq) goto loc_829517A4;
	// bl 0x8289fc80
	ctx.lr = 0x829517A0;
	sub_8289FC80(ctx, base);
	// b 0x829517a8
	goto loc_829517A8;
loc_829517A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829517A8:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829517C0"))) PPC_WEAK_FUNC(sub_829517C0);
PPC_FUNC_IMPL(__imp__sub_829517C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,31084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82951800
	if (!ctx.cr0.eq) goto loc_82951800;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,31084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31084, ctx.r11.u32);
	// addi r3,r9,8184
	ctx.r3.s64 = ctx.r9.s64 + 8184;
	// bl 0x82816528
	ctx.lr = 0x829517F8;
	sub_82816528(ctx, base);
	// stw r3,31080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31080, ctx.r3.u32);
	// b 0x82951804
	goto loc_82951804;
loc_82951800:
	// lwz r3,31080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31080);
loc_82951804:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951818"))) PPC_WEAK_FUNC(sub_82951818);
PPC_FUNC_IMPL(__imp__sub_82951818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x829514c0
	sub_829514C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951820"))) PPC_WEAK_FUNC(sub_82951820);
PPC_FUNC_IMPL(__imp__sub_82951820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82951460
	sub_82951460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951828"))) PPC_WEAK_FUNC(sub_82951828);
PPC_FUNC_IMPL(__imp__sub_82951828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x829514c0
	sub_829514C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951830"))) PPC_WEAK_FUNC(sub_82951830);
PPC_FUNC_IMPL(__imp__sub_82951830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82951838;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x82765d00
	ctx.lr = 0x8295184C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829518ac
	if (ctx.cr0.eq) goto loc_829518AC;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,28032
	ctx.r4.s64 = ctx.r11.s64 + 28032;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x82951868;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13408(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13408);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82951888
	if (!ctx.cr6.eq) goto loc_82951888;
	// bl 0x829ea5b8
	ctx.lr = 0x82951880;
	sub_829EA5B8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13408, ctx.r6.u32);
loc_82951888:
	// lis r11,-32107
	ctx.r11.s64 = -2104164352;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r8,r11,6616
	ctx.r8.s64 = ctx.r11.s64 + 6616;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829518A4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829518b0
	goto loc_829518B0;
loc_829518AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829518B0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829518c0
	if (ctx.cr0.eq) goto loc_829518C0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829518C0;
	sub_829EF5F8(ctx, base);
loc_829518C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829518D0"))) PPC_WEAK_FUNC(sub_829518D0);
PPC_FUNC_IMPL(__imp__sub_829518D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828b20a8
	ctx.lr = 0x829518EC;
	sub_828B20A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82951904
	if (ctx.cr0.eq) goto loc_82951904;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82951904:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951918"))) PPC_WEAK_FUNC(sub_82951918);
PPC_FUNC_IMPL(__imp__sub_82951918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951920"))) PPC_WEAK_FUNC(sub_82951920);
PPC_FUNC_IMPL(__imp__sub_82951920) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82951938"))) PPC_WEAK_FUNC(sub_82951938);
PPC_FUNC_IMPL(__imp__sub_82951938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951948"))) PPC_WEAK_FUNC(sub_82951948);
PPC_FUNC_IMPL(__imp__sub_82951948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951958"))) PPC_WEAK_FUNC(sub_82951958);
PPC_FUNC_IMPL(__imp__sub_82951958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82951980
	if (!ctx.cr6.eq) goto loc_82951980;
	// bl 0x82951830
	ctx.lr = 0x8295197C;
	sub_82951830(ctx, base);
	// stw r3,13104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13104, ctx.r3.u32);
loc_82951980:
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951998"))) PPC_WEAK_FUNC(sub_82951998);
PPC_FUNC_IMPL(__imp__sub_82951998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829519c0
	if (!ctx.cr6.eq) goto loc_829519C0;
	// bl 0x82951830
	ctx.lr = 0x829519BC;
	sub_82951830(ctx, base);
	// stw r3,13104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13104, ctx.r3.u32);
loc_829519C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829519D8"))) PPC_WEAK_FUNC(sub_829519D8);
PPC_FUNC_IMPL(__imp__sub_829519D8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82765d00
	ctx.lr = 0x829519EC;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82951a1c
	if (ctx.cr0.eq) goto loc_82951A1C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28064
	ctx.r10.s64 = ctx.r10.s64 + 28064;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// b 0x82951a20
	goto loc_82951A20;
loc_82951A1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82951A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951A30"))) PPC_WEAK_FUNC(sub_82951A30);
PPC_FUNC_IMPL(__imp__sub_82951A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82951A38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r28.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82951b28
	if (!ctx.cr6.gt) goto loc_82951B28;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82951b28
	if (!ctx.cr6.eq) goto loc_82951B28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// beq cr6,0x82951ab0
	if (ctx.cr6.eq) goto loc_82951AB0;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82951AB0;
	sub_82332C38(ctx, base);
loc_82951AB0:
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x82951AC4;
	sub_82332D50(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82951b30
	if (!ctx.cr6.gt) goto loc_82951B30;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82951AD8:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82951ad8
	if (ctx.cr6.lt) goto loc_82951AD8;
	// b 0x82951b30
	goto loc_82951B30;
loc_82951B28:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_82951B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82645cb0
	ctx.lr = 0x82951B38;
	sub_82645CB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951B40"))) PPC_WEAK_FUNC(sub_82951B40);
PPC_FUNC_IMPL(__imp__sub_82951B40) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951B50"))) PPC_WEAK_FUNC(sub_82951B50);
PPC_FUNC_IMPL(__imp__sub_82951B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82951bb8
	if (ctx.cr6.lt) goto loc_82951BB8;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82951ba8
	if (!ctx.cr6.eq) goto loc_82951BA8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
loc_82951BA8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82951BB8:
	// stfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951BC0"))) PPC_WEAK_FUNC(sub_82951BC0);
PPC_FUNC_IMPL(__imp__sub_82951BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,28104
	ctx.r3.s64 = ctx.r11.s64 + 28104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951BD0"))) PPC_WEAK_FUNC(sub_82951BD0);
PPC_FUNC_IMPL(__imp__sub_82951BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82951c08
	if (ctx.cr6.eq) goto loc_82951C08;
	// bl 0x82953488
	ctx.lr = 0x82951BF8;
	sub_82953488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82951c08
	if (!ctx.cr6.eq) goto loc_82951C08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82951c14
	goto loc_82951C14;
loc_82951C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8240ada0
	ctx.lr = 0x82951C14;
	sub_8240ADA0(ctx, base);
loc_82951C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951C30"))) PPC_WEAK_FUNC(sub_82951C30);
PPC_FUNC_IMPL(__imp__sub_82951C30) {
	PPC_FUNC_PROLOGUE();
	// b 0x82953488
	sub_82953488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951C38"))) PPC_WEAK_FUNC(sub_82951C38);
PPC_FUNC_IMPL(__imp__sub_82951C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1208
	ctx.r3.s64 = 1208;
	// bl 0x82833108
	ctx.lr = 0x82951C54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82951c68
	if (ctx.cr0.eq) goto loc_82951C68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82951d20
	ctx.lr = 0x82951C64;
	sub_82951D20(ctx, base);
	// b 0x82951c6c
	goto loc_82951C6C;
loc_82951C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82951C6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951C80"))) PPC_WEAK_FUNC(sub_82951C80);
PPC_FUNC_IMPL(__imp__sub_82951C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82953488
	ctx.lr = 0x82951CA0;
	sub_82953488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82951cb4
	if (ctx.cr6.eq) goto loc_82951CB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8240ac00
	ctx.lr = 0x82951CB4;
	sub_8240AC00(ctx, base);
loc_82951CB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951CD0"))) PPC_WEAK_FUNC(sub_82951CD0);
PPC_FUNC_IMPL(__imp__sub_82951CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// addi r11,r11,29448
	ctx.r11.s64 = ctx.r11.s64 + 29448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x82951CF8;
	sub_8239D768(ctx, base);
	// addi r3,r31,1160
	ctx.r3.s64 = ctx.r31.s64 + 1160;
	// bl 0x82333960
	ctx.lr = 0x82951D00;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c8b78
	ctx.lr = 0x82951D08;
	sub_828C8B78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951D20"))) PPC_WEAK_FUNC(sub_82951D20);
PPC_FUNC_IMPL(__imp__sub_82951D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82951D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82409ff0
	ctx.lr = 0x82951D38;
	sub_82409FF0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,1160
	ctx.r4.s64 = ctx.r30.s64 + 1160;
	// addi r11,r11,29448
	ctx.r11.s64 = ctx.r11.s64 + 29448;
	// addi r3,r29,1160
	ctx.r3.s64 = ctx.r29.s64 + 1160;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82951D50;
	sub_823339B8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,1184
	ctx.r31.s64 = ctx.r29.s64 + 1184;
	// addi r30,r30,1184
	ctx.r30.s64 = ctx.r30.s64 + 1184;
	// stw r11,1192(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1192, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,1196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1196, ctx.r11.u32);
	// stw r11,1200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1200, ctx.r11.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r10,1188(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1188, ctx.r10.u32);
	// stw r11,1204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1204, ctx.r11.u32);
	// stw r11,1184(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1184, ctx.r11.u32);
	// beq cr6,0x82951dc8
	if (ctx.cr6.eq) goto loc_82951DC8;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82951dc8
	if (!ctx.cr6.gt) goto loc_82951DC8;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82951dac
	if (ctx.cr0.eq) goto loc_82951DAC;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82951DAC;
	sub_82332C38(ctx, base);
loc_82951DAC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82951DC0;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82951DC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82951DD8"))) PPC_WEAK_FUNC(sub_82951DD8);
PPC_FUNC_IMPL(__imp__sub_82951DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82951cd0
	ctx.lr = 0x82951DF8;
	sub_82951CD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82951e08
	if (ctx.cr0.eq) goto loc_82951E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82951E08;
	sub_82332DB8(ctx, base);
loc_82951E08:
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

__attribute__((alias("__imp__sub_82951E28"))) PPC_WEAK_FUNC(sub_82951E28);
PPC_FUNC_IMPL(__imp__sub_82951E28) {
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
	// bl 0x828c8a78
	ctx.lr = 0x82951E40;
	sub_828C8A78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r8,r11,29448
	ctx.r8.s64 = ctx.r11.s64 + 29448;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r7,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r7.u32);
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// lfs f0,20416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r11.u32);
	// lfs f13,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// stw r8,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r8.u32);
	// stw r11,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r11.u32);
	// stw r11,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r11.u32);
	// stw r11,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r11.u32);
	// stw r11,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r11.u32);
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f13,1124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stw r6,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951EC0"))) PPC_WEAK_FUNC(sub_82951EC0);
PPC_FUNC_IMPL(__imp__sub_82951EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82951EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,1200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82951f0c
	if (!ctx.cr6.gt) goto loc_82951F0C;
	// lwz r10,1764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1764);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
loc_82951EEC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,1764(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1764);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82951f3c
	if (ctx.cr6.gt) goto loc_82951F3C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82951eec
	if (ctx.cr6.lt) goto loc_82951EEC;
loc_82951F0C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x823327e0
	ctx.lr = 0x82951F20;
	sub_823327E0(ctx, base);
	// lwz r10,1200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
loc_82951F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82951F3C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x823327e0
	ctx.lr = 0x82951F54;
	sub_823327E0(ctx, base);
	// lwz r10,1196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// b 0x82951f34
	goto loc_82951F34;
}

__attribute__((alias("__imp__sub_82951F68"))) PPC_WEAK_FUNC(sub_82951F68);
PPC_FUNC_IMPL(__imp__sub_82951F68) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,1184
	ctx.r3.s64 = ctx.r3.s64 + 1184;
	// bl 0x824b99b0
	ctx.lr = 0x82951F84;
	sub_824B99B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951F98"))) PPC_WEAK_FUNC(sub_82951F98);
PPC_FUNC_IMPL(__imp__sub_82951F98) {
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
	// lwz r5,1200(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1184
	ctx.r3.s64 = ctx.r3.s64 + 1184;
	// bl 0x82332ca8
	ctx.lr = 0x82951FBC;
	sub_82332CA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82951FD0"))) PPC_WEAK_FUNC(sub_82951FD0);
PPC_FUNC_IMPL(__imp__sub_82951FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82951FD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-20668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20668);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952014
	if (!ctx.cr6.eq) goto loc_82952014;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82952014
	if (!ctx.cr6.eq) goto loc_82952014;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,19052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19052);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,19052(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19052, ctx.r11.u32);
loc_82952014:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952040
	if (ctx.cr0.eq) goto loc_82952040;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x82952040
	if (ctx.cr6.eq) goto loc_82952040;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82952758
	goto loc_82952758;
loc_82952040:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82952064
	if (ctx.cr6.eq) goto loc_82952064;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82952064
	if (ctx.cr6.eq) goto loc_82952064;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82952758
	goto loc_82952758;
loc_82952064:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82952074;
	sub_8233A258(ctx, base);
	// addi r25,r23,1160
	ctx.r25.s64 = ctx.r23.s64 + 1160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x82952084;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8295208C;
	sub_82333960(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r30,-31943
	ctx.r30.s64 = -2093416448;
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r11,-17720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x829520c0
	if (!ctx.cr0.eq) goto loc_829520C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-17720(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17720, ctx.r11.u32);
	// addi r3,r9,-14980
	ctx.r3.s64 = ctx.r9.s64 + -14980;
	// bl 0x828165a8
	ctx.lr = 0x829520B8;
	sub_828165A8(ctx, base);
	// stw r3,-17724(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17724, ctx.r3.u32);
	// b 0x829520c4
	goto loc_829520C4;
loc_829520C0:
	// lwz r3,-17724(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17724);
loc_829520C4:
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x829520e4
	if (!ctx.cr6.eq) goto loc_829520E4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952718
	if (!ctx.cr6.eq) goto loc_82952718;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,936(r23)
	PPC_STORE_U32(ctx.r23.u32 + 936, ctx.r27.u32);
	// stw r27,932(r23)
	PPC_STORE_U32(ctx.r23.u32 + 932, ctx.r27.u32);
	// b 0x82952718
	goto loc_82952718;
loc_829520E4:
	// lwz r11,-20668(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -20668);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// lis r4,-32216
	ctx.r4.s64 = -2111307776;
	// lis r3,-32216
	ctx.r3.s64 = -2111307776;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// addi r22,r10,29048
	ctx.r22.s64 = ctx.r10.s64 + 29048;
	// addi r21,r9,29012
	ctx.r21.s64 = ctx.r9.s64 + 29012;
	// addi r20,r8,28964
	ctx.r20.s64 = ctx.r8.s64 + 28964;
	// addi r19,r7,28932
	ctx.r19.s64 = ctx.r7.s64 + 28932;
	// addi r18,r6,28884
	ctx.r18.s64 = ctx.r6.s64 + 28884;
	// addi r17,r5,28852
	ctx.r17.s64 = ctx.r5.s64 + 28852;
	// addi r16,r4,28808
	ctx.r16.s64 = ctx.r4.s64 + 28808;
	// addi r15,r3,28780
	ctx.r15.s64 = ctx.r3.s64 + 28780;
	// bne cr6,0x829521a0
	if (!ctx.cr6.eq) goto loc_829521A0;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8295214c
	if (!ctx.cr6.eq) goto loc_8295214C;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28116
	ctx.r4.s64 = ctx.r11.s64 + 28116;
	// b 0x82952154
	goto loc_82952154;
loc_8295214C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28136
	ctx.r4.s64 = ctx.r11.s64 + 28136;
loc_82952154:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824099b8
	ctx.lr = 0x8295215C;
	sub_824099B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// slw. r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82952718
	if (ctx.cr0.eq) goto loc_82952718;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8295241c
	if (!ctx.cr6.eq) goto loc_8295241C;
	// lwz r10,928(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 928);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82952454
	if (ctx.cr6.eq) goto loc_82952454;
	// lwz r9,932(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r8,936(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 936);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// stw r9,932(r23)
	PPC_STORE_U32(ctx.r23.u32 + 932, ctx.r9.u32);
	// stw r11,936(r23)
	PPC_STORE_U32(ctx.r23.u32 + 936, ctx.r11.u32);
	// b 0x82952450
	goto loc_82952450;
loc_829521A0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20664);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829521d4
	if (!ctx.cr6.eq) goto loc_829521D4;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x829521c8
	if (!ctx.cr6.eq) goto loc_829521C8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28160
	ctx.r4.s64 = ctx.r11.s64 + 28160;
	// b 0x82952154
	goto loc_82952154;
loc_829521C8:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28180
	ctx.r4.s64 = ctx.r11.s64 + 28180;
	// b 0x82952154
	goto loc_82952154;
loc_829521D4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20660);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952208
	if (!ctx.cr6.eq) goto loc_82952208;
	// li r24,2
	ctx.r24.s64 = 2;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x829521fc
	if (!ctx.cr6.eq) goto loc_829521FC;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28204
	ctx.r4.s64 = ctx.r11.s64 + 28204;
	// b 0x82952154
	goto loc_82952154;
loc_829521FC:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28224
	ctx.r4.s64 = ctx.r11.s64 + 28224;
	// b 0x82952154
	goto loc_82952154;
loc_82952208:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20656);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8295223c
	if (!ctx.cr6.eq) goto loc_8295223C;
	// li r24,3
	ctx.r24.s64 = 3;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952230
	if (!ctx.cr6.eq) goto loc_82952230;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28248
	ctx.r4.s64 = ctx.r11.s64 + 28248;
	// b 0x82952154
	goto loc_82952154;
loc_82952230:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28268
	ctx.r4.s64 = ctx.r11.s64 + 28268;
	// b 0x82952154
	goto loc_82952154;
loc_8295223C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20652);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952270
	if (!ctx.cr6.eq) goto loc_82952270;
	// li r24,7
	ctx.r24.s64 = 7;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952264
	if (!ctx.cr6.eq) goto loc_82952264;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28292
	ctx.r4.s64 = ctx.r11.s64 + 28292;
	// b 0x82952154
	goto loc_82952154;
loc_82952264:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28316
	ctx.r4.s64 = ctx.r11.s64 + 28316;
	// b 0x82952154
	goto loc_82952154;
loc_82952270:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20596);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829522a4
	if (!ctx.cr6.eq) goto loc_829522A4;
	// li r24,5
	ctx.r24.s64 = 5;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952298
	if (!ctx.cr6.eq) goto loc_82952298;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28344
	ctx.r4.s64 = ctx.r11.s64 + 28344;
	// b 0x82952154
	goto loc_82952154;
loc_82952298:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28388
	ctx.r4.s64 = ctx.r11.s64 + 28388;
	// b 0x82952154
	goto loc_82952154;
loc_829522A4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20600);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829522d8
	if (!ctx.cr6.eq) goto loc_829522D8;
	// li r24,4
	ctx.r24.s64 = 4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x829522cc
	if (!ctx.cr6.eq) goto loc_829522CC;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28436
	ctx.r4.s64 = ctx.r11.s64 + 28436;
	// b 0x82952154
	goto loc_82952154;
loc_829522CC:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28476
	ctx.r4.s64 = ctx.r11.s64 + 28476;
	// b 0x82952154
	goto loc_82952154;
loc_829522D8:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20624);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8295230c
	if (!ctx.cr6.eq) goto loc_8295230C;
	// li r24,6
	ctx.r24.s64 = 6;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952300
	if (!ctx.cr6.eq) goto loc_82952300;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28520
	ctx.r4.s64 = ctx.r11.s64 + 28520;
	// b 0x82952154
	goto loc_82952154;
loc_82952300:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28548
	ctx.r4.s64 = ctx.r11.s64 + 28548;
	// b 0x82952154
	goto loc_82952154;
loc_8295230C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20632);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952340
	if (!ctx.cr6.eq) goto loc_82952340;
	// li r24,8
	ctx.r24.s64 = 8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952334
	if (!ctx.cr6.eq) goto loc_82952334;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28580
	ctx.r4.s64 = ctx.r11.s64 + 28580;
	// b 0x82952154
	goto loc_82952154;
loc_82952334:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28628
	ctx.r4.s64 = ctx.r11.s64 + 28628;
	// b 0x82952154
	goto loc_82952154;
loc_82952340:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20628);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952374
	if (!ctx.cr6.eq) goto loc_82952374;
	// li r24,9
	ctx.r24.s64 = 9;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82952368
	if (!ctx.cr6.eq) goto loc_82952368;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28680
	ctx.r4.s64 = ctx.r11.s64 + 28680;
	// b 0x82952154
	goto loc_82952154;
loc_82952368:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,28728
	ctx.r4.s64 = ctx.r11.s64 + 28728;
	// b 0x82952154
	goto loc_82952154;
loc_82952374:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20584);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8295239c
	if (!ctx.cr6.eq) goto loc_8295239C;
	// li r24,10
	ctx.r24.s64 = 10;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// beq cr6,0x82952154
	if (ctx.cr6.eq) goto loc_82952154;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// b 0x82952154
	goto loc_82952154;
loc_8295239C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20580);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829523c4
	if (!ctx.cr6.eq) goto loc_829523C4;
	// li r24,11
	ctx.r24.s64 = 11;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// beq cr6,0x82952154
	if (ctx.cr6.eq) goto loc_82952154;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x82952154
	goto loc_82952154;
loc_829523C4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20572);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829523ec
	if (!ctx.cr6.eq) goto loc_829523EC;
	// li r24,12
	ctx.r24.s64 = 12;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// beq cr6,0x82952154
	if (ctx.cr6.eq) goto loc_82952154;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82952154
	goto loc_82952154;
loc_829523EC:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20576);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952414
	if (!ctx.cr6.eq) goto loc_82952414;
	// li r24,13
	ctx.r24.s64 = 13;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// beq cr6,0x82952154
	if (ctx.cr6.eq) goto loc_82952154;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82952154
	goto loc_82952154;
loc_82952414:
	// li r24,-1
	ctx.r24.s64 = -1;
	// b 0x82952718
	goto loc_82952718;
loc_8295241C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82952454
	if (!ctx.cr6.eq) goto loc_82952454;
	// lwz r10,928(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 928);
	// and. r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8295243c
	if (ctx.cr0.eq) goto loc_8295243C;
	// lwz r9,936(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 936);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,936(r23)
	PPC_STORE_U32(ctx.r23.u32 + 936, ctx.r9.u32);
loc_8295243C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r9,932(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r11,932(r23)
	PPC_STORE_U32(ctx.r23.u32 + 932, ctx.r11.u32);
loc_82952450:
	// stw r10,928(r23)
	PPC_STORE_U32(ctx.r23.u32 + 928, ctx.r10.u32);
loc_82952454:
	// lwz r10,16(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// beq cr6,0x82952470
	if (ctx.cr6.eq) goto loc_82952470;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82952474
	goto loc_82952474;
loc_82952470:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82952474:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x8295247C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952718
	if (ctx.cr0.eq) goto loc_82952718;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r23,1184
	ctx.r3.s64 = ctx.r23.s64 + 1184;
	// addi r4,r11,-14640
	ctx.r4.s64 = ctx.r11.s64 + -14640;
	// bl 0x829532e8
	ctx.lr = 0x82952494;
	sub_829532E8(ctx, base);
	// lwz r11,1200(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82952718
	if (!ctx.cr6.gt) goto loc_82952718;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r29,r11,-14616
	ctx.r29.s64 = ctx.r11.s64 + -14616;
	// addi r26,r10,29096
	ctx.r26.s64 = ctx.r10.s64 + 29096;
loc_829524B4:
	// lwz r11,1196(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1196);
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829524D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952704
	if (ctx.cr0.eq) goto loc_82952704;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952704
	if (ctx.cr6.eq) goto loc_82952704;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82952508
	if (!ctx.cr0.gt) goto loc_82952508;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82952704
	if (!ctx.cr6.eq) goto loc_82952704;
loc_82952508:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r14,0(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82952518;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1040(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 1040);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,932(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8295258c
	if (ctx.cr6.eq) goto loc_8295258C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8295256C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829525b0
	if (ctx.cr0.eq) goto loc_829525B0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82824308
	ctx.lr = 0x82952588;
	sub_82824308(ctx, base);
	// b 0x829525b0
	goto loc_829525B0;
loc_8295258C:
	// lwz r11,936(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829525b0
	if (ctx.cr6.eq) goto loc_829525B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829525B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829525B0:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829525c4
	if (ctx.cr6.eq) goto loc_829525C4;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x829525c8
	goto loc_829525C8;
loc_829525C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829525C8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829525D0;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952648
	if (ctx.cr0.eq) goto loc_82952648;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829525ec
	if (ctx.cr6.eq) goto loc_829525EC;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x829525f0
	goto loc_829525F0;
loc_829525EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829525F0:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829525F8;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952648
	if (ctx.cr0.eq) goto loc_82952648;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952614
	if (ctx.cr6.eq) goto loc_82952614;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82952618
	goto loc_82952618;
loc_82952614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82952618:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952620;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952648
	if (ctx.cr0.eq) goto loc_82952648;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8295263c
	if (ctx.cr6.eq) goto loc_8295263C;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82952640
	goto loc_82952640;
loc_8295263C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82952640:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952648;
	sub_82A4CC80(ctx, base);
loc_82952648:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8295265c
	if (ctx.cr6.eq) goto loc_8295265C;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82952660
	goto loc_82952660;
loc_8295265C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82952660:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952668;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829526e8
	if (ctx.cr0.eq) goto loc_829526E8;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952684
	if (ctx.cr6.eq) goto loc_82952684;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82952688
	goto loc_82952688;
loc_82952684:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82952688:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952690;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829526e8
	if (ctx.cr0.eq) goto loc_829526E8;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829526ac
	if (ctx.cr6.eq) goto loc_829526AC;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x829526b0
	goto loc_829526B0;
loc_829526AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829526B0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829526B8;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829526e8
	if (ctx.cr0.eq) goto loc_829526E8;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829526d4
	if (ctx.cr6.eq) goto loc_829526D4;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x829526d8
	goto loc_829526D8;
loc_829526D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829526D8:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x829526E0;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82952704
	if (!ctx.cr0.eq) goto loc_82952704;
loc_829526E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82952704:
	// lwz r11,1200(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1200);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x829524b4
	if (ctx.cr6.lt) goto loc_829524B4;
loc_82952718:
	// lwz r11,932(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952738
	if (ctx.cr6.eq) goto loc_82952738;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282bdc8
	ctx.lr = 0x82952738;
	sub_8282BDC8(ctx, base);
loc_82952738:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8295274C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_82952758:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82952760"))) PPC_WEAK_FUNC(sub_82952760);
PPC_FUNC_IMPL(__imp__sub_82952760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82952768;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829527a4
	if (ctx.cr0.eq) goto loc_829527A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829531fc
	goto loc_829531FC;
loc_829527A4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x829527cc
	if (ctx.cr6.eq) goto loc_829527CC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x829527cc
	if (ctx.cr6.eq) goto loc_829527CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829531fc
	goto loc_829531FC;
loc_829527CC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r24,r31,1160
	ctx.r24.s64 = ctx.r31.s64 + 1160;
	// addi r17,r11,7896
	ctx.r17.s64 = ctx.r11.s64 + 7896;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x824099b8
	ctx.lr = 0x829527E4;
	sub_824099B8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r16,0
	ctx.r16.s64 = 0;
	// lfs f0,652(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// li r14,-1
	ctx.r14.s64 = -1;
	// lfs f13,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// lfs f11,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f10.f64 = double(temp.f32);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// lfs f9,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// stfs f0,852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// mr r20,r16
	ctx.r20.u64 = ctx.r16.u64;
	// stfs f12,844(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,848(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f11,744(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f10,748(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stfs f9,752(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// ble cr6,0x82952860
	if (!ctx.cr6.gt) goto loc_82952860;
	// lfs f9,1120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fneg f9,f8
	ctx.f9.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f9,f9,f30,f8
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// b 0x82952880
	goto loc_82952880;
loc_82952860:
	// fneg f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f8,1120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f9,f8,f30,f9
	ctx.f9.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fdivs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82952880:
	// lwa r11,1128(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1128));
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f9,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lwz r11,-20636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20636);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lis r15,-32243
	ctx.r15.s64 = -2113077248;
	// lis r21,-31944
	ctx.r21.s64 = -2093481984;
	// lis r28,-31944
	ctx.r28.s64 = -2093481984;
	// lis r19,-31944
	ctx.r19.s64 = -2093481984;
	// lis r23,-31944
	ctx.r23.s64 = -2093481984;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bne cr6,0x82952954
	if (!ctx.cr6.eq) goto loc_82952954;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x829528cc
	if (!ctx.cr6.eq) goto loc_829528CC;
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// b 0x829528e8
	goto loc_829528E8;
loc_829528CC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x829528e0
	if (!ctx.cr6.lt) goto loc_829528E0;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,628(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// b 0x829528ec
	goto loc_829528EC;
loc_829528E0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x829528ec
	if (!ctx.cr6.gt) goto loc_829528EC;
loc_829528E8:
	// stfs f0,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
loc_829528EC:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,32752(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,848(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82952920
	if (!ctx.cr6.gt) goto loc_82952920;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29116
	ctx.r4.s64 = ctx.r11.s64 + 29116;
	// bl 0x824099b8
	ctx.lr = 0x82952914;
	sub_824099B8(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
	// li r14,20
	ctx.r14.s64 = 20;
	// b 0x82952d30
	goto loc_82952D30;
loc_82952920:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8295294c
	if (!ctx.cr6.lt) goto loc_8295294C;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29148
	ctx.r4.s64 = ctx.r11.s64 + 29148;
	// bl 0x824099b8
	ctx.lr = 0x82952940;
	sub_824099B8(ctx, base);
	// li r22,1
	ctx.r22.s64 = 1;
	// li r14,21
	ctx.r14.s64 = 21;
	// b 0x82952d30
	goto loc_82952D30;
loc_8295294C:
	// stw r16,19060(r23)
	PPC_STORE_U32(ctx.r23.u32 + 19060, ctx.r16.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_82952954:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20640);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829529f8
	if (!ctx.cr6.eq) goto loc_829529F8;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82952974
	if (!ctx.cr6.eq) goto loc_82952974;
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// b 0x82952990
	goto loc_82952990;
loc_82952974:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82952988
	if (!ctx.cr6.lt) goto loc_82952988;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,640(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// b 0x82952994
	goto loc_82952994;
loc_82952988:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82952994
	if (!ctx.cr6.gt) goto loc_82952994;
loc_82952990:
	// stfs f0,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
loc_82952994:
	// lfs f13,32752(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,844(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// ble cr6,0x829529c4
	if (!ctx.cr6.gt) goto loc_829529C4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29184
	ctx.r4.s64 = ctx.r11.s64 + 29184;
	// bl 0x824099b8
	ctx.lr = 0x829529B8;
	sub_824099B8(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// li r14,22
	ctx.r14.s64 = 22;
	// b 0x82952d30
	goto loc_82952D30;
loc_829529C4:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,5808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829529f0
	if (!ctx.cr6.lt) goto loc_829529F0;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29220
	ctx.r4.s64 = ctx.r11.s64 + 29220;
	// bl 0x824099b8
	ctx.lr = 0x829529E4;
	sub_824099B8(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// li r14,23
	ctx.r14.s64 = 23;
	// b 0x82952d30
	goto loc_82952D30;
loc_829529F0:
	// stw r16,19076(r19)
	PPC_STORE_U32(ctx.r19.u32 + 19076, ctx.r16.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_829529F8:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20644);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952b48
	if (!ctx.cr6.eq) goto loc_82952B48;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82952a1c
	if (!ctx.cr6.eq) goto loc_82952A1C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// b 0x82952a38
	goto loc_82952A38;
loc_82952A1C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82952a2c
	if (!ctx.cr6.lt) goto loc_82952A2C;
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// b 0x82952a3c
	goto loc_82952A3C;
loc_82952A2C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82952a3c
	if (!ctx.cr6.gt) goto loc_82952A3C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82952A38:
	// stfs f13,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_82952A3C:
	// lfs f13,32752(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// stfs f10,748(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// ble cr6,0x82952a70
	if (!ctx.cr6.gt) goto loc_82952A70;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,28780
	ctx.r4.s64 = ctx.r11.s64 + 28780;
	// bl 0x824099b8
	ctx.lr = 0x82952A64;
	sub_824099B8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r14,16
	ctx.r14.s64 = 16;
	// b 0x82952a9c
	goto loc_82952A9C;
loc_82952A70:
	// lfs f13,5808(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82952a98
	if (!ctx.cr6.lt) goto loc_82952A98;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,28852
	ctx.r4.s64 = ctx.r11.s64 + 28852;
	// bl 0x824099b8
	ctx.lr = 0x82952A8C;
	sub_824099B8(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r14,17
	ctx.r14.s64 = 17;
	// b 0x82952a9c
	goto loc_82952A9C;
loc_82952A98:
	// stw r16,19056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 19056, ctx.r16.u32);
loc_82952A9C:
	// lfs f0,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32752(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82952ae0
	if (ctx.cr6.gt) goto loc_82952AE0;
	// lfs f13,5808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82952ae0
	if (ctx.cr6.lt) goto loc_82952AE0;
	// lis r8,-31944
	ctx.r8.s64 = -2093481984;
	// lis r7,-31944
	ctx.r7.s64 = -2093481984;
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,19064(r8)
	PPC_STORE_U32(ctx.r8.u32 + 19064, ctx.r11.u32);
	// stw r10,19068(r7)
	PPC_STORE_U32(ctx.r7.u32 + 19068, ctx.r10.u32);
	// stw r9,-25096(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25096, ctx.r9.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_82952AE0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,19064(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19064);
	// lwz r7,-25096(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25096);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,19064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19064, ctx.r9.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// lwz r9,19068(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19068);
	// bne cr6,0x82952b1c
	if (!ctx.cr6.eq) goto loc_82952B1C;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stw r16,19056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 19056, ctx.r16.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,19064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19064, ctx.r8.u32);
	// stw r9,19068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19068, ctx.r9.u32);
loc_82952B1C:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82952d30
	if (!ctx.cr6.gt) goto loc_82952D30;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82952d30
	if (!ctx.cr6.eq) goto loc_82952D30;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stw r9,-25096(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25096, ctx.r9.u32);
	// stw r8,19064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19064, ctx.r8.u32);
	// stw r7,19068(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19068, ctx.r7.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_82952B48:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20648);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952c3c
	if (!ctx.cr6.eq) goto loc_82952C3C;
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82952b68
	if (!ctx.cr6.eq) goto loc_82952B68;
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// b 0x82952b84
	goto loc_82952B84;
loc_82952B68:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82952b7c
	if (!ctx.cr6.lt) goto loc_82952B7C;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// b 0x82952b88
	goto loc_82952B88;
loc_82952B7C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82952b88
	if (!ctx.cr6.gt) goto loc_82952B88;
loc_82952B84:
	// stfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
loc_82952B88:
	// lfs f13,32752(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// stfs f11,744(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// ble cr6,0x82952bbc
	if (!ctx.cr6.gt) goto loc_82952BBC;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29012
	ctx.r4.s64 = ctx.r11.s64 + 29012;
	// bl 0x824099b8
	ctx.lr = 0x82952BB0;
	sub_824099B8(ctx, base);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r14,18
	ctx.r14.s64 = 18;
	// b 0x82952be8
	goto loc_82952BE8;
loc_82952BBC:
	// lfs f13,5808(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82952be4
	if (!ctx.cr6.lt) goto loc_82952BE4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,28932
	ctx.r4.s64 = ctx.r11.s64 + 28932;
	// bl 0x824099b8
	ctx.lr = 0x82952BD8;
	sub_824099B8(ctx, base);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r14,19
	ctx.r14.s64 = 19;
	// b 0x82952be8
	goto loc_82952BE8;
loc_82952BE4:
	// stw r16,19072(r21)
	PPC_STORE_U32(ctx.r21.u32 + 19072, ctx.r16.u32);
loc_82952BE8:
	// lfs f0,744(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32752(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82952c14
	if (ctx.cr6.gt) goto loc_82952C14;
	// lfs f13,5808(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82952c14
	if (ctx.cr6.lt) goto loc_82952C14;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// stw r11,19080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 19080, ctx.r11.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_82952C14:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r10,19080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19080);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,19080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19080, ctx.r10.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82952d30
	if (!ctx.cr6.eq) goto loc_82952D30;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// stw r16,19072(r21)
	PPC_STORE_U32(ctx.r21.u32 + 19072, ctx.r16.u32);
	// stw r10,19080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 19080, ctx.r10.u32);
	// b 0x82952d30
	goto loc_82952D30;
loc_82952C3C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20592);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952cb4
	if (!ctx.cr6.eq) goto loc_82952CB4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1048(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f0,1044(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82952c90
	if (!ctx.cr6.gt) goto loc_82952C90;
	// lfs f12,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82952c90
	if (!ctx.cr6.lt) goto loc_82952C90;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29256
	ctx.r4.s64 = ctx.r11.s64 + 29256;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x824099b8
	ctx.lr = 0x82952C88;
	sub_824099B8(ctx, base);
	// li r14,14
	ctx.r14.s64 = 14;
	// b 0x82952d30
	goto loc_82952D30;
loc_82952C90:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82952d30
	if (!ctx.cr6.lt) goto loc_82952D30;
	// lfs f0,1048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82952d30
	if (!ctx.cr6.gt) goto loc_82952D30;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r4,r11,29296
	ctx.r4.s64 = ctx.r11.s64 + 29296;
	// b 0x82952d28
	goto loc_82952D28;
loc_82952CB4:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-20588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20588);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82952d30
	if (!ctx.cr6.eq) goto loc_82952D30;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,1040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1052(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// stfs f0,1040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82952d08
	if (!ctx.cr6.gt) goto loc_82952D08;
	// lfs f12,1052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82952d08
	if (!ctx.cr6.lt) goto loc_82952D08;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,29340
	ctx.r4.s64 = ctx.r11.s64 + 29340;
	// li r20,1
	ctx.r20.s64 = 1;
	// bl 0x824099b8
	ctx.lr = 0x82952D00;
	sub_824099B8(ctx, base);
	// li r14,15
	ctx.r14.s64 = 15;
	// b 0x82952d30
	goto loc_82952D30;
loc_82952D08:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82952d30
	if (!ctx.cr6.lt) goto loc_82952D30;
	// lfs f0,1052(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82952d30
	if (!ctx.cr6.gt) goto loc_82952D30;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r4,r11,29380
	ctx.r4.s64 = ctx.r11.s64 + 29380;
loc_82952D28:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824099b8
	ctx.lr = 0x82952D30;
	sub_824099B8(ctx, base);
loc_82952D30:
	// lwz r9,19056(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19056);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// and r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & ctx.r27.u64;
	// addi r25,r11,-14640
	ctx.r25.s64 = ctx.r11.s64 + -14640;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// addi r26,r10,-14616
	ctx.r26.s64 = ctx.r10.s64 + -14616;
	// bne cr6,0x82952d60
	if (!ctx.cr6.eq) goto loc_82952D60;
	// lwz r11,19060(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19060);
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82952e68
	if (ctx.cr6.eq) goto loc_82952E68;
loc_82952D60:
	// lwz r11,19056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 19056);
	// lwz r10,19060(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19060);
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// or r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 | ctx.r22.u64;
	// stw r11,19056(r28)
	PPC_STORE_U32(ctx.r28.u32 + 19056, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,19060(r23)
	PPC_STORE_U32(ctx.r23.u32 + 19060, ctx.r10.u32);
	// beq cr6,0x82952d8c
	if (ctx.cr6.eq) goto loc_82952D8C;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// b 0x82952d90
	goto loc_82952D90;
loc_82952D8C:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_82952D90:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952D98;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952e68
	if (ctx.cr0.eq) goto loc_82952E68;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x829532e8
	ctx.lr = 0x82952DAC;
	sub_829532E8(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82952e68
	if (!ctx.cr6.gt) goto loc_82952E68;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82952DC0:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952e54
	if (ctx.cr0.eq) goto loc_82952E54;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82952e54
	if (!ctx.cr6.eq) goto loc_82952E54;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952e54
	if (ctx.cr6.eq) goto loc_82952E54;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82952e20
	if (!ctx.cr0.gt) goto loc_82952E20;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82952e54
	if (!ctx.cr6.eq) goto loc_82952E54;
loc_82952E20:
	// lfs f0,1556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82952e54
	if (ctx.cr6.gt) goto loc_82952E54;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823339b8
	ctx.lr = 0x82952E3C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1040(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1040);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82952E54:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82952dc0
	if (ctx.cr6.lt) goto loc_82952DC0;
loc_82952E68:
	// lwz r11,19072(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19072);
	// and r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 & ctx.r18.u64;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// bne cr6,0x82952e88
	if (!ctx.cr6.eq) goto loc_82952E88;
	// lwz r11,19076(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19076);
	// and r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82952f90
	if (ctx.cr6.eq) goto loc_82952F90;
loc_82952E88:
	// lwz r11,19072(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 19072);
	// lwz r10,19076(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 19076);
	// lwz r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// or r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 | ctx.r18.u64;
	// or r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 | ctx.r20.u64;
	// stw r11,19072(r21)
	PPC_STORE_U32(ctx.r21.u32 + 19072, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,19076(r19)
	PPC_STORE_U32(ctx.r19.u32 + 19076, ctx.r10.u32);
	// beq cr6,0x82952eb4
	if (ctx.cr6.eq) goto loc_82952EB4;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// b 0x82952eb8
	goto loc_82952EB8;
loc_82952EB4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
loc_82952EB8:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x82952EC0;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952f90
	if (ctx.cr0.eq) goto loc_82952F90;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x829532e8
	ctx.lr = 0x82952ED4;
	sub_829532E8(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82952f90
	if (!ctx.cr6.gt) goto loc_82952F90;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_82952EE8:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82952f7c
	if (ctx.cr0.eq) goto loc_82952F7C;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82952f7c
	if (!ctx.cr6.eq) goto loc_82952F7C;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82952f7c
	if (ctx.cr6.eq) goto loc_82952F7C;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82952f48
	if (!ctx.cr0.gt) goto loc_82952F48;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82952f7c
	if (!ctx.cr6.eq) goto loc_82952F7C;
loc_82952F48:
	// lfs f0,1556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82952f7c
	if (ctx.cr6.gt) goto loc_82952F7C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823339b8
	ctx.lr = 0x82952F64;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1040(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1040);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82952F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82952F7C:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82952ee8
	if (ctx.cr6.lt) goto loc_82952EE8;
loc_82952F90:
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// lfs f13,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// li r5,100
	ctx.r5.s64 = 100;
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82952FD0;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,828
	ctx.r4.s64 = ctx.r31.s64 + 828;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x82952FE0;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,528
	ctx.r4.s64 = ctx.r31.s64 + 528;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x82952FF0;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,628
	ctx.r4.s64 = ctx.r31.s64 + 628;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x82953000;
	sub_82A4EA80(ctx, base);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32752(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829530e0
	if (!ctx.cr6.lt) goto loc_829530E0;
	// lfs f0,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829530e0
	if (ctx.cr6.lt) goto loc_829530E0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x829532e8
	ctx.lr = 0x82953028;
	sub_829532E8(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829530e0
	if (!ctx.cr6.gt) goto loc_829530E0;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r27,r11,29096
	ctx.r27.s64 = ctx.r11.s64 + 29096;
loc_82953044:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82953060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829530cc
	if (ctx.cr0.eq) goto loc_829530CC;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829530cc
	if (!ctx.cr6.eq) goto loc_829530CC;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829530cc
	if (ctx.cr6.eq) goto loc_829530CC;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x829530a4
	if (!ctx.cr0.gt) goto loc_829530A4;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x829530cc
	if (!ctx.cr6.eq) goto loc_829530CC;
loc_829530A4:
	// lfs f0,1556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x829530cc
	if (ctx.cr6.gt) goto loc_829530CC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829530CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829530CC:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82953044
	if (ctx.cr6.lt) goto loc_82953044;
loc_829530E0:
	// lfs f0,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32752(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 32752);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829531c0
	if (!ctx.cr6.lt) goto loc_829531C0;
	// lfs f0,452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829531c0
	if (ctx.cr6.lt) goto loc_829531C0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = ctx.r31.s64 + 1184;
	// bl 0x829532e8
	ctx.lr = 0x82953108;
	sub_829532E8(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x829531c0
	if (!ctx.cr6.gt) goto loc_829531C0;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r27,r11,29424
	ctx.r27.s64 = ctx.r11.s64 + 29424;
loc_82953124:
	// lwz r11,1196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1196);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82953140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x829531ac
	if (ctx.cr0.eq) goto loc_829531AC;
	// lwz r11,1756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829531ac
	if (!ctx.cr6.eq) goto loc_829531AC;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829531ac
	if (ctx.cr6.eq) goto loc_829531AC;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82953184
	if (!ctx.cr0.gt) goto loc_82953184;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x829531ac
	if (!ctx.cr6.eq) goto loc_829531AC;
loc_82953184:
	// lfs f0,1556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x829531ac
	if (ctx.cr6.gt) goto loc_829531AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829531AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829531AC:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82953124
	if (ctx.cr6.lt) goto loc_82953124;
loc_829531C0:
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// beq cr6,0x829531dc
	if (ctx.cr6.eq) goto loc_829531DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282bdc8
	ctx.lr = 0x829531DC;
	sub_8282BDC8(ctx, base);
loc_829531DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829531F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_829531FC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82953210"))) PPC_WEAK_FUNC(sub_82953210);
PPC_FUNC_IMPL(__imp__sub_82953210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82953218;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-14640
	ctx.r31.s64 = ctx.r11.s64 + -14640;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82953288
	if (!ctx.cr6.gt) goto loc_82953288;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8295323C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r29,r30,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82953258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8295326c
	if (ctx.cr0.eq) goto loc_8295326C;
	// lwz r11,1536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82953284
	if (!ctx.cr6.eq) goto loc_82953284;
loc_8295326C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8295323c
	if (ctx.cr6.lt) goto loc_8295323C;
	// b 0x82953288
	goto loc_82953288;
loc_82953284:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82953288:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82953298"))) PPC_WEAK_FUNC(sub_82953298);
PPC_FUNC_IMPL(__imp__sub_82953298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-14640
	ctx.r11.s64 = ctx.r11.s64 + -14640;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_829532B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,1532(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1532);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x829532dc
	if (!ctx.cr6.eq) goto loc_829532DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x829532b8
	if (ctx.cr6.lt) goto loc_829532B8;
	// blr 
	return;
loc_829532DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829532E8"))) PPC_WEAK_FUNC(sub_829532E8);
PPC_FUNC_IMPL(__imp__sub_829532E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-14640
	ctx.r30.s64 = ctx.r11.s64 + -14640;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82953384
	if (ctx.cr6.eq) goto loc_82953384;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82953360
	if (!ctx.cr6.gt) goto loc_82953360;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x82953340
	if (ctx.cr6.eq) goto loc_82953340;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82953340;
	sub_82332C38(ctx, base);
loc_82953340:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82953354;
	sub_82A45878(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82953384
	goto loc_82953384;
loc_82953360:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x82953384
	if (ctx.cr6.eq) goto loc_82953384;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82953384;
	sub_82332C38(ctx, base);
loc_82953384:
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

