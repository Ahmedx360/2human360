#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82820AB8"))) PPC_WEAK_FUNC(sub_82820AB8);
PPC_FUNC_IMPL(__imp__sub_82820AB8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82820af8
	if (ctx.cr6.eq) goto loc_82820AF8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,836(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284b058
	ctx.lr = 0x82820AEC;
	sub_8284B058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915208
	ctx.lr = 0x82820AF8;
	sub_82915208(ctx, base);
loc_82820AF8:
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

__attribute__((alias("__imp__sub_82820B10"))) PPC_WEAK_FUNC(sub_82820B10);
PPC_FUNC_IMPL(__imp__sub_82820B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23052
	ctx.r3.s64 = ctx.r11.s64 + 23052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820B20"))) PPC_WEAK_FUNC(sub_82820B20);
PPC_FUNC_IMPL(__imp__sub_82820B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82820b58
	if (ctx.cr6.eq) goto loc_82820B58;
	// bl 0x8282e870
	ctx.lr = 0x82820B48;
	sub_8282E870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82820b58
	if (!ctx.cr6.eq) goto loc_82820B58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82820b64
	goto loc_82820B64;
loc_82820B58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82820310
	ctx.lr = 0x82820B64;
	sub_82820310(ctx, base);
loc_82820B64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820B80"))) PPC_WEAK_FUNC(sub_82820B80);
PPC_FUNC_IMPL(__imp__sub_82820B80) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282e870
	sub_8282E870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820B88"))) PPC_WEAK_FUNC(sub_82820B88);
PPC_FUNC_IMPL(__imp__sub_82820B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82820BA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82820bf4
	if (ctx.cr0.eq) goto loc_82820BF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82820520
	ctx.lr = 0x82820BBC;
	sub_82820520(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,31176
	ctx.r11.s64 = ctx.r11.s64 + 31176;
	// addi r10,r10,32200
	ctx.r10.s64 = ctx.r10.s64 + 32200;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8284b058
	ctx.lr = 0x82820BEC;
	sub_8284B058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82820bf8
	goto loc_82820BF8;
loc_82820BF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82820BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820C10"))) PPC_WEAK_FUNC(sub_82820C10);
PPC_FUNC_IMPL(__imp__sub_82820C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e870
	ctx.lr = 0x82820C30;
	sub_8282E870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82820c44
	if (ctx.cr6.eq) goto loc_82820C44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82820370
	ctx.lr = 0x82820C44;
	sub_82820370(ctx, base);
loc_82820C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820C60"))) PPC_WEAK_FUNC(sub_82820C60);
PPC_FUNC_IMPL(__imp__sub_82820C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82820C68;
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
	// beq cr6,0x82820cc4
	if (ctx.cr6.eq) goto loc_82820CC4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14736
	ctx.r31.s64 = ctx.r11.s64 + 14736;
	// lwz r11,14732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82820cb4
	if (!ctx.cr0.eq) goto loc_82820CB4;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25532
	ctx.r9.s64 = ctx.r9.s64 + 25532;
	// stw r11,14732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14732, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// bl 0x82a4c758
	ctx.lr = 0x82820CB4;
	sub_82A4C758(ctx, base);
loc_82820CB4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82820cc4
	if (!ctx.cr6.eq) goto loc_82820CC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82820cd0
	goto loc_82820CD0;
loc_82820CC4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x82820CD0;
	sub_82339B70(ctx, base);
loc_82820CD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820CD8"))) PPC_WEAK_FUNC(sub_82820CD8);
PPC_FUNC_IMPL(__imp__sub_82820CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82820CE0;
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
	// addi r31,r11,14736
	ctx.r31.s64 = ctx.r11.s64 + 14736;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82820d24
	if (!ctx.cr0.eq) goto loc_82820D24;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25532
	ctx.r9.s64 = ctx.r9.s64 + 25532;
	// stw r11,14732(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14732, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25256
	ctx.r3.s64 = ctx.r11.s64 + -25256;
	// bl 0x82a4c758
	ctx.lr = 0x82820D24;
	sub_82A4C758(ctx, base);
loc_82820D24:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82820d38
	if (ctx.cr6.eq) goto loc_82820D38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82820D38;
	sub_82339F40(ctx, base);
loc_82820D38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820D40"))) PPC_WEAK_FUNC(sub_82820D40);
PPC_FUNC_IMPL(__imp__sub_82820D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14744
	ctx.r31.s64 = ctx.r11.s64 + 14744;
	// lwz r11,14740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82820d88
	if (!ctx.cr0.eq) goto loc_82820D88;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25532
	ctx.r9.s64 = ctx.r9.s64 + 25532;
	// stw r11,14740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14740, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// bl 0x82a4c758
	ctx.lr = 0x82820D88;
	sub_82A4C758(ctx, base);
loc_82820D88:
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

__attribute__((alias("__imp__sub_82820DA0"))) PPC_WEAK_FUNC(sub_82820DA0);
PPC_FUNC_IMPL(__imp__sub_82820DA0) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82820de0
	if (ctx.cr6.eq) goto loc_82820DE0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,840(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284b058
	ctx.lr = 0x82820DD4;
	sub_8284B058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915590
	ctx.lr = 0x82820DE0;
	sub_82915590(ctx, base);
loc_82820DE0:
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

__attribute__((alias("__imp__sub_82820DF8"))) PPC_WEAK_FUNC(sub_82820DF8);
PPC_FUNC_IMPL(__imp__sub_82820DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820E08"))) PPC_WEAK_FUNC(sub_82820E08);
PPC_FUNC_IMPL(__imp__sub_82820E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82820e40
	if (ctx.cr6.eq) goto loc_82820E40;
	// bl 0x8282ead0
	ctx.lr = 0x82820E30;
	sub_8282EAD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82820e40
	if (!ctx.cr6.eq) goto loc_82820E40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82820e4c
	goto loc_82820E4C;
loc_82820E40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82820310
	ctx.lr = 0x82820E4C;
	sub_82820310(ctx, base);
loc_82820E4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820E68"))) PPC_WEAK_FUNC(sub_82820E68);
PPC_FUNC_IMPL(__imp__sub_82820E68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282ead0
	sub_8282EAD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820E70"))) PPC_WEAK_FUNC(sub_82820E70);
PPC_FUNC_IMPL(__imp__sub_82820E70) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282e218
	sub_8282E218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820E78"))) PPC_WEAK_FUNC(sub_82820E78);
PPC_FUNC_IMPL(__imp__sub_82820E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82820E98;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82820ee4
	if (ctx.cr0.eq) goto loc_82820EE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82820520
	ctx.lr = 0x82820EAC;
	sub_82820520(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,32256
	ctx.r11.s64 = ctx.r11.s64 + 32256;
	// addi r10,r10,-32256
	ctx.r10.s64 = ctx.r10.s64 + -32256;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8284b058
	ctx.lr = 0x82820EDC;
	sub_8284B058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82820ee8
	goto loc_82820EE8;
loc_82820EE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82820EE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820F00"))) PPC_WEAK_FUNC(sub_82820F00);
PPC_FUNC_IMPL(__imp__sub_82820F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282ead0
	ctx.lr = 0x82820F20;
	sub_8282EAD0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82820f34
	if (ctx.cr6.eq) goto loc_82820F34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82820370
	ctx.lr = 0x82820F34;
	sub_82820370(ctx, base);
loc_82820F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82820F50"))) PPC_WEAK_FUNC(sub_82820F50);
PPC_FUNC_IMPL(__imp__sub_82820F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82820F58;
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
	// beq cr6,0x82820fb4
	if (ctx.cr6.eq) goto loc_82820FB4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14760
	ctx.r31.s64 = ctx.r11.s64 + 14760;
	// lwz r11,14756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82820fa4
	if (!ctx.cr0.eq) goto loc_82820FA4;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25612
	ctx.r9.s64 = ctx.r9.s64 + 25612;
	// stw r11,14756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14756, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// bl 0x82a4c758
	ctx.lr = 0x82820FA4;
	sub_82A4C758(ctx, base);
loc_82820FA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82820fb4
	if (!ctx.cr6.eq) goto loc_82820FB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82820fc0
	goto loc_82820FC0;
loc_82820FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x82820FC0;
	sub_82339B70(ctx, base);
loc_82820FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82820FC8"))) PPC_WEAK_FUNC(sub_82820FC8);
PPC_FUNC_IMPL(__imp__sub_82820FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82820FD0;
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
	// addi r31,r11,14760
	ctx.r31.s64 = ctx.r11.s64 + 14760;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14756(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14756);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821014
	if (!ctx.cr0.eq) goto loc_82821014;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25612
	ctx.r9.s64 = ctx.r9.s64 + 25612;
	// stw r11,14756(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14756, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25328
	ctx.r3.s64 = ctx.r11.s64 + -25328;
	// bl 0x82a4c758
	ctx.lr = 0x82821014;
	sub_82A4C758(ctx, base);
loc_82821014:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82821028
	if (ctx.cr6.eq) goto loc_82821028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82821028;
	sub_82339F40(ctx, base);
loc_82821028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821030"))) PPC_WEAK_FUNC(sub_82821030);
PPC_FUNC_IMPL(__imp__sub_82821030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14768
	ctx.r31.s64 = ctx.r11.s64 + 14768;
	// lwz r11,14764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821078
	if (!ctx.cr0.eq) goto loc_82821078;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25612
	ctx.r9.s64 = ctx.r9.s64 + 25612;
	// stw r11,14764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14764, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// bl 0x82a4c758
	ctx.lr = 0x82821078;
	sub_82A4C758(ctx, base);
loc_82821078:
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

__attribute__((alias("__imp__sub_82821090"))) PPC_WEAK_FUNC(sub_82821090);
PPC_FUNC_IMPL(__imp__sub_82821090) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828210d0
	if (ctx.cr6.eq) goto loc_828210D0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,844(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284b058
	ctx.lr = 0x828210C4;
	sub_8284B058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915928
	ctx.lr = 0x828210D0;
	sub_82915928(ctx, base);
loc_828210D0:
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

__attribute__((alias("__imp__sub_828210E8"))) PPC_WEAK_FUNC(sub_828210E8);
PPC_FUNC_IMPL(__imp__sub_828210E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828210F8"))) PPC_WEAK_FUNC(sub_828210F8);
PPC_FUNC_IMPL(__imp__sub_828210F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82821130
	if (ctx.cr6.eq) goto loc_82821130;
	// bl 0x8282ed30
	ctx.lr = 0x82821120;
	sub_8282ED30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821130
	if (!ctx.cr6.eq) goto loc_82821130;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8282113c
	goto loc_8282113C;
loc_82821130:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82820310
	ctx.lr = 0x8282113C;
	sub_82820310(ctx, base);
loc_8282113C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821158"))) PPC_WEAK_FUNC(sub_82821158);
PPC_FUNC_IMPL(__imp__sub_82821158) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282ed30
	sub_8282ED30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821160"))) PPC_WEAK_FUNC(sub_82821160);
PPC_FUNC_IMPL(__imp__sub_82821160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82821180;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828211cc
	if (ctx.cr0.eq) goto loc_828211CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82820520
	ctx.lr = 0x82821194;
	sub_82820520(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,-31104
	ctx.r11.s64 = ctx.r11.s64 + -31104;
	// addi r10,r10,-30080
	ctx.r10.s64 = ctx.r10.s64 + -30080;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8284b058
	ctx.lr = 0x828211C4;
	sub_8284B058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828211d0
	goto loc_828211D0;
loc_828211CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828211D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828211E8"))) PPC_WEAK_FUNC(sub_828211E8);
PPC_FUNC_IMPL(__imp__sub_828211E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282ed30
	ctx.lr = 0x82821208;
	sub_8282ED30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8282121c
	if (ctx.cr6.eq) goto loc_8282121C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82820370
	ctx.lr = 0x8282121C;
	sub_82820370(ctx, base);
loc_8282121C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821238"))) PPC_WEAK_FUNC(sub_82821238);
PPC_FUNC_IMPL(__imp__sub_82821238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821240;
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
	// beq cr6,0x8282129c
	if (ctx.cr6.eq) goto loc_8282129C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14784
	ctx.r31.s64 = ctx.r11.s64 + 14784;
	// lwz r11,14780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282128c
	if (!ctx.cr0.eq) goto loc_8282128C;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r11,14780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14780, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25400
	ctx.r3.s64 = ctx.r11.s64 + -25400;
	// bl 0x82a4c758
	ctx.lr = 0x8282128C;
	sub_82A4C758(ctx, base);
loc_8282128C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8282129c
	if (!ctx.cr6.eq) goto loc_8282129C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828212a8
	goto loc_828212A8;
loc_8282129C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x828212A8;
	sub_82339B70(ctx, base);
loc_828212A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828212B0"))) PPC_WEAK_FUNC(sub_828212B0);
PPC_FUNC_IMPL(__imp__sub_828212B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828212B8;
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
	// addi r31,r11,14784
	ctx.r31.s64 = ctx.r11.s64 + 14784;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828212fc
	if (!ctx.cr0.eq) goto loc_828212FC;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r11,14780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14780, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25400
	ctx.r3.s64 = ctx.r11.s64 + -25400;
	// bl 0x82a4c758
	ctx.lr = 0x828212FC;
	sub_82A4C758(ctx, base);
loc_828212FC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82821310
	if (ctx.cr6.eq) goto loc_82821310;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82821310;
	sub_82339F40(ctx, base);
loc_82821310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821318"))) PPC_WEAK_FUNC(sub_82821318);
PPC_FUNC_IMPL(__imp__sub_82821318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14792
	ctx.r31.s64 = ctx.r11.s64 + 14792;
	// lwz r11,14788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821360
	if (!ctx.cr0.eq) goto loc_82821360;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r11,14788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14788, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// bl 0x82a4c758
	ctx.lr = 0x82821360;
	sub_82A4C758(ctx, base);
loc_82821360:
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

__attribute__((alias("__imp__sub_82821378"))) PPC_WEAK_FUNC(sub_82821378);
PPC_FUNC_IMPL(__imp__sub_82821378) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8282ff10
	ctx.lr = 0x82821394;
	sub_8282FF10(ctx, base);
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

__attribute__((alias("__imp__sub_828213A8"))) PPC_WEAK_FUNC(sub_828213A8);
PPC_FUNC_IMPL(__imp__sub_828213A8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828213e8
	if (ctx.cr6.eq) goto loc_828213E8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,852(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284b058
	ctx.lr = 0x828213DC;
	sub_8284B058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82915d20
	ctx.lr = 0x828213E8;
	sub_82915D20(ctx, base);
loc_828213E8:
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

__attribute__((alias("__imp__sub_82821400"))) PPC_WEAK_FUNC(sub_82821400);
PPC_FUNC_IMPL(__imp__sub_82821400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821410"))) PPC_WEAK_FUNC(sub_82821410);
PPC_FUNC_IMPL(__imp__sub_82821410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82821448
	if (ctx.cr6.eq) goto loc_82821448;
	// bl 0x8282ef90
	ctx.lr = 0x82821438;
	sub_8282EF90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821448
	if (!ctx.cr6.eq) goto loc_82821448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82821454
	goto loc_82821454;
loc_82821448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82820310
	ctx.lr = 0x82821454;
	sub_82820310(ctx, base);
loc_82821454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821470"))) PPC_WEAK_FUNC(sub_82821470);
PPC_FUNC_IMPL(__imp__sub_82821470) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282ef90
	sub_8282EF90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821478"))) PPC_WEAK_FUNC(sub_82821478);
PPC_FUNC_IMPL(__imp__sub_82821478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82821498;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828214e4
	if (ctx.cr0.eq) goto loc_828214E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82820520
	ctx.lr = 0x828214AC;
	sub_82820520(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,-30000
	ctx.r11.s64 = ctx.r11.s64 + -30000;
	// addi r10,r10,-28976
	ctx.r10.s64 = ctx.r10.s64 + -28976;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8284b058
	ctx.lr = 0x828214DC;
	sub_8284B058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828214e8
	goto loc_828214E8;
loc_828214E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828214E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821500"))) PPC_WEAK_FUNC(sub_82821500);
PPC_FUNC_IMPL(__imp__sub_82821500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282ef90
	ctx.lr = 0x82821520;
	sub_8282EF90(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82821534
	if (ctx.cr6.eq) goto loc_82821534;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82820370
	ctx.lr = 0x82821534;
	sub_82820370(ctx, base);
loc_82821534:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821550"))) PPC_WEAK_FUNC(sub_82821550);
PPC_FUNC_IMPL(__imp__sub_82821550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821558;
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
	// beq cr6,0x828215b4
	if (ctx.cr6.eq) goto loc_828215B4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14808
	ctx.r31.s64 = ctx.r11.s64 + 14808;
	// lwz r11,14804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828215a4
	if (!ctx.cr0.eq) goto loc_828215A4;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25772
	ctx.r9.s64 = ctx.r9.s64 + 25772;
	// stw r11,14804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14804, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25472
	ctx.r3.s64 = ctx.r11.s64 + -25472;
	// bl 0x82a4c758
	ctx.lr = 0x828215A4;
	sub_82A4C758(ctx, base);
loc_828215A4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828215b4
	if (!ctx.cr6.eq) goto loc_828215B4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828215c0
	goto loc_828215C0;
loc_828215B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x828215C0;
	sub_82339B70(ctx, base);
loc_828215C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828215C8"))) PPC_WEAK_FUNC(sub_828215C8);
PPC_FUNC_IMPL(__imp__sub_828215C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828215D0;
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
	// addi r31,r11,14808
	ctx.r31.s64 = ctx.r11.s64 + 14808;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14804);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821614
	if (!ctx.cr0.eq) goto loc_82821614;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25772
	ctx.r9.s64 = ctx.r9.s64 + 25772;
	// stw r11,14804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14804, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25472
	ctx.r3.s64 = ctx.r11.s64 + -25472;
	// bl 0x82a4c758
	ctx.lr = 0x82821614;
	sub_82A4C758(ctx, base);
loc_82821614:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82821628
	if (ctx.cr6.eq) goto loc_82821628;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82821628;
	sub_82339F40(ctx, base);
loc_82821628:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821630"))) PPC_WEAK_FUNC(sub_82821630);
PPC_FUNC_IMPL(__imp__sub_82821630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14816
	ctx.r31.s64 = ctx.r11.s64 + 14816;
	// lwz r11,14812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821678
	if (!ctx.cr0.eq) goto loc_82821678;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25772
	ctx.r9.s64 = ctx.r9.s64 + 25772;
	// stw r11,14812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14812, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// bl 0x82a4c758
	ctx.lr = 0x82821678;
	sub_82A4C758(ctx, base);
loc_82821678:
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

__attribute__((alias("__imp__sub_82821690"))) PPC_WEAK_FUNC(sub_82821690);
PPC_FUNC_IMPL(__imp__sub_82821690) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828216d0
	if (ctx.cr6.eq) goto loc_828216D0;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,856(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8284b058
	ctx.lr = 0x828216C4;
	sub_8284B058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829162d0
	ctx.lr = 0x828216D0;
	sub_829162D0(ctx, base);
loc_828216D0:
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

__attribute__((alias("__imp__sub_828216E8"))) PPC_WEAK_FUNC(sub_828216E8);
PPC_FUNC_IMPL(__imp__sub_828216E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23172
	ctx.r3.s64 = ctx.r11.s64 + 23172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828216F8"))) PPC_WEAK_FUNC(sub_828216F8);
PPC_FUNC_IMPL(__imp__sub_828216F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82821730
	if (ctx.cr6.eq) goto loc_82821730;
	// bl 0x8282f278
	ctx.lr = 0x82821720;
	sub_8282F278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821730
	if (!ctx.cr6.eq) goto loc_82821730;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8282173c
	goto loc_8282173C;
loc_82821730:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8282173C;
	sub_82338A28(ctx, base);
loc_8282173C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821758"))) PPC_WEAK_FUNC(sub_82821758);
PPC_FUNC_IMPL(__imp__sub_82821758) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282f278
	sub_8282F278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821760"))) PPC_WEAK_FUNC(sub_82821760);
PPC_FUNC_IMPL(__imp__sub_82821760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1520
	ctx.r3.s64 = 1520;
	// bl 0x82833108
	ctx.lr = 0x82821780;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82821804
	if (ctx.cr0.eq) goto loc_82821804;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82821794;
	sub_82338B88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-28920
	ctx.r11.s64 = ctx.r11.s64 + -28920;
	// addi r10,r10,-27900
	ctx.r10.s64 = ctx.r10.s64 + -27900;
	// addi r9,r9,-27848
	ctx.r9.s64 = ctx.r9.s64 + -27848;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1408
	ctx.r11.s64 = ctx.r31.s64 + 1408;
	// stw r8,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r8.u32);
	// addi r4,r30,1412
	ctx.r4.s64 = ctx.r30.s64 + 1412;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828217D8;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,1440
	ctx.r4.s64 = ctx.r30.s64 + 1440;
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// bl 0x824a2bd0
	ctx.lr = 0x828217E4;
	sub_824A2BD0(ctx, base);
	// addi r4,r30,1464
	ctx.r4.s64 = ctx.r30.s64 + 1464;
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// bl 0x8282f0b8
	ctx.lr = 0x828217F0;
	sub_8282F0B8(ctx, base);
	// addi r4,r30,1488
	ctx.r4.s64 = ctx.r30.s64 + 1488;
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// bl 0x824a2bd0
	ctx.lr = 0x828217FC;
	sub_824A2BD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82821808
	goto loc_82821808;
loc_82821804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82821808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821820"))) PPC_WEAK_FUNC(sub_82821820);
PPC_FUNC_IMPL(__imp__sub_82821820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282f278
	ctx.lr = 0x82821840;
	sub_8282F278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821850
	if (!ctx.cr6.eq) goto loc_82821850;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82821868
	goto loc_82821868;
loc_82821850:
	// bl 0x82338750
	ctx.lr = 0x82821854;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82821868
	if (ctx.cr6.eq) goto loc_82821868;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82821868;
	sub_82338858(ctx, base);
loc_82821868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821880"))) PPC_WEAK_FUNC(sub_82821880);
PPC_FUNC_IMPL(__imp__sub_82821880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// bl 0x824a2978
	ctx.lr = 0x828218A4;
	sub_824A2978(ctx, base);
	// addi r3,r31,1464
	ctx.r3.s64 = ctx.r31.s64 + 1464;
	// bl 0x8243c0d0
	ctx.lr = 0x828218AC;
	sub_8243C0D0(ctx, base);
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// bl 0x824a2978
	ctx.lr = 0x828218B4;
	sub_824A2978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828218C8;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828218d8
	if (ctx.cr0.eq) goto loc_828218D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828218D8;
	sub_82332DB8(ctx, base);
loc_828218D8:
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

__attribute__((alias("__imp__sub_828218F8"))) PPC_WEAK_FUNC(sub_828218F8);
PPC_FUNC_IMPL(__imp__sub_828218F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821900;
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
	// beq cr6,0x8282195c
	if (ctx.cr6.eq) goto loc_8282195C;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14832
	ctx.r31.s64 = ctx.r11.s64 + 14832;
	// lwz r11,14828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282194c
	if (!ctx.cr0.eq) goto loc_8282194C;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25852
	ctx.r9.s64 = ctx.r9.s64 + 25852;
	// stw r11,14828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14828, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// bl 0x82a4c758
	ctx.lr = 0x8282194C;
	sub_82A4C758(ctx, base);
loc_8282194C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8282195c
	if (!ctx.cr6.eq) goto loc_8282195C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82821968
	goto loc_82821968;
loc_8282195C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x82821968;
	sub_82339B70(ctx, base);
loc_82821968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821970"))) PPC_WEAK_FUNC(sub_82821970);
PPC_FUNC_IMPL(__imp__sub_82821970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821978;
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
	// addi r31,r11,14832
	ctx.r31.s64 = ctx.r11.s64 + 14832;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14828(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828219bc
	if (!ctx.cr0.eq) goto loc_828219BC;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25852
	ctx.r9.s64 = ctx.r9.s64 + 25852;
	// stw r11,14828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14828, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25544
	ctx.r3.s64 = ctx.r11.s64 + -25544;
	// bl 0x82a4c758
	ctx.lr = 0x828219BC;
	sub_82A4C758(ctx, base);
loc_828219BC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x828219d0
	if (ctx.cr6.eq) goto loc_828219D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x828219D0;
	sub_82339F40(ctx, base);
loc_828219D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828219D8"))) PPC_WEAK_FUNC(sub_828219D8);
PPC_FUNC_IMPL(__imp__sub_828219D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14840
	ctx.r31.s64 = ctx.r11.s64 + 14840;
	// lwz r11,14836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821a20
	if (!ctx.cr0.eq) goto loc_82821A20;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25852
	ctx.r9.s64 = ctx.r9.s64 + 25852;
	// stw r11,14836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14836, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
	// bl 0x82a4c758
	ctx.lr = 0x82821A20;
	sub_82A4C758(ctx, base);
loc_82821A20:
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

__attribute__((alias("__imp__sub_82821A38"))) PPC_WEAK_FUNC(sub_82821A38);
PPC_FUNC_IMPL(__imp__sub_82821A38) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82830080
	ctx.lr = 0x82821A54;
	sub_82830080(ctx, base);
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

__attribute__((alias("__imp__sub_82821A68"))) PPC_WEAK_FUNC(sub_82821A68);
PPC_FUNC_IMPL(__imp__sub_82821A68) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82821aa8
	if (ctx.cr6.eq) goto loc_82821AA8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,860(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8282f0b8
	ctx.lr = 0x82821A9C;
	sub_8282F0B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291e4b8
	ctx.lr = 0x82821AA8;
	sub_8291E4B8(ctx, base);
loc_82821AA8:
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

__attribute__((alias("__imp__sub_82821AC0"))) PPC_WEAK_FUNC(sub_82821AC0);
PPC_FUNC_IMPL(__imp__sub_82821AC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821AD0"))) PPC_WEAK_FUNC(sub_82821AD0);
PPC_FUNC_IMPL(__imp__sub_82821AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82821b08
	if (ctx.cr6.eq) goto loc_82821B08;
	// bl 0x8282f508
	ctx.lr = 0x82821AF8;
	sub_8282F508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821b08
	if (!ctx.cr6.eq) goto loc_82821B08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82821b14
	goto loc_82821B14;
loc_82821B08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82821B14;
	sub_82338A28(ctx, base);
loc_82821B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821B30"))) PPC_WEAK_FUNC(sub_82821B30);
PPC_FUNC_IMPL(__imp__sub_82821B30) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282f508
	sub_8282F508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821B38"))) PPC_WEAK_FUNC(sub_82821B38);
PPC_FUNC_IMPL(__imp__sub_82821B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82821B58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82821bbc
	if (ctx.cr0.eq) goto loc_82821BBC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82821B6C;
	sub_82338B88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// addi r10,r10,-31180
	ctx.r10.s64 = ctx.r10.s64 + -31180;
	// addi r9,r9,-31128
	ctx.r9.s64 = ctx.r9.s64 + -31128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x8282f0b8
	ctx.lr = 0x82821B9C;
	sub_8282F0B8(ctx, base);
	// addi r4,r30,1432
	ctx.r4.s64 = ctx.r30.s64 + 1432;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x828584c0
	ctx.lr = 0x82821BA8;
	sub_828584C0(ctx, base);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8282f0b8
	ctx.lr = 0x82821BB4;
	sub_8282F0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82821bc0
	goto loc_82821BC0;
loc_82821BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82821BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821BD8"))) PPC_WEAK_FUNC(sub_82821BD8);
PPC_FUNC_IMPL(__imp__sub_82821BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282f508
	ctx.lr = 0x82821BF8;
	sub_8282F508(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821c08
	if (!ctx.cr6.eq) goto loc_82821C08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82821c20
	goto loc_82821C20;
loc_82821C08:
	// bl 0x82338750
	ctx.lr = 0x82821C0C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82821c20
	if (ctx.cr6.eq) goto loc_82821C20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82821C20;
	sub_82338858(ctx, base);
loc_82821C20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821C38"))) PPC_WEAK_FUNC(sub_82821C38);
PPC_FUNC_IMPL(__imp__sub_82821C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8243c0d0
	ctx.lr = 0x82821C5C;
	sub_8243C0D0(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x828585a0
	ctx.lr = 0x82821C64;
	sub_828585A0(ctx, base);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x8243c0d0
	ctx.lr = 0x82821C6C;
	sub_8243C0D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x82821C74;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82821c84
	if (ctx.cr0.eq) goto loc_82821C84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82821C84;
	sub_82332DB8(ctx, base);
loc_82821C84:
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

__attribute__((alias("__imp__sub_82821CA0"))) PPC_WEAK_FUNC(sub_82821CA0);
PPC_FUNC_IMPL(__imp__sub_82821CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821CA8;
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
	// beq cr6,0x82821d04
	if (ctx.cr6.eq) goto loc_82821D04;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14856
	ctx.r31.s64 = ctx.r11.s64 + 14856;
	// lwz r11,14852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821cf4
	if (!ctx.cr0.eq) goto loc_82821CF4;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25932
	ctx.r9.s64 = ctx.r9.s64 + 25932;
	// stw r11,14852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14852, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// bl 0x82a4c758
	ctx.lr = 0x82821CF4;
	sub_82A4C758(ctx, base);
loc_82821CF4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82821d04
	if (!ctx.cr6.eq) goto loc_82821D04;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82821d10
	goto loc_82821D10;
loc_82821D04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x82821D10;
	sub_82339B70(ctx, base);
loc_82821D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821D18"))) PPC_WEAK_FUNC(sub_82821D18);
PPC_FUNC_IMPL(__imp__sub_82821D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82821D20;
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
	// addi r31,r11,14856
	ctx.r31.s64 = ctx.r11.s64 + 14856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14852(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14852);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821d64
	if (!ctx.cr0.eq) goto loc_82821D64;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25932
	ctx.r9.s64 = ctx.r9.s64 + 25932;
	// stw r11,14852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14852, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25616
	ctx.r3.s64 = ctx.r11.s64 + -25616;
	// bl 0x82a4c758
	ctx.lr = 0x82821D64;
	sub_82A4C758(ctx, base);
loc_82821D64:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82821d78
	if (ctx.cr6.eq) goto loc_82821D78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82821D78;
	sub_82339F40(ctx, base);
loc_82821D78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821D80"))) PPC_WEAK_FUNC(sub_82821D80);
PPC_FUNC_IMPL(__imp__sub_82821D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14864
	ctx.r31.s64 = ctx.r11.s64 + 14864;
	// lwz r11,14860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82821dc8
	if (!ctx.cr0.eq) goto loc_82821DC8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25932
	ctx.r9.s64 = ctx.r9.s64 + 25932;
	// stw r11,14860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14860, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// bl 0x82a4c758
	ctx.lr = 0x82821DC8;
	sub_82A4C758(ctx, base);
loc_82821DC8:
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

__attribute__((alias("__imp__sub_82821DE0"))) PPC_WEAK_FUNC(sub_82821DE0);
PPC_FUNC_IMPL(__imp__sub_82821DE0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x828301b8
	ctx.lr = 0x82821DFC;
	sub_828301B8(ctx, base);
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

__attribute__((alias("__imp__sub_82821E10"))) PPC_WEAK_FUNC(sub_82821E10);
PPC_FUNC_IMPL(__imp__sub_82821E10) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82821e50
	if (ctx.cr6.eq) goto loc_82821E50;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,848(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828584c0
	ctx.lr = 0x82821E44;
	sub_828584C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82928630
	ctx.lr = 0x82821E50;
	sub_82928630(ctx, base);
loc_82821E50:
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

__attribute__((alias("__imp__sub_82821E68"))) PPC_WEAK_FUNC(sub_82821E68);
PPC_FUNC_IMPL(__imp__sub_82821E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23228
	ctx.r3.s64 = ctx.r11.s64 + 23228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821E78"))) PPC_WEAK_FUNC(sub_82821E78);
PPC_FUNC_IMPL(__imp__sub_82821E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82821eb0
	if (ctx.cr6.eq) goto loc_82821EB0;
	// bl 0x8282f870
	ctx.lr = 0x82821EA0;
	sub_8282F870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821eb0
	if (!ctx.cr6.eq) goto loc_82821EB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82821ebc
	goto loc_82821EBC;
loc_82821EB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x82821EBC;
	sub_82338A28(ctx, base);
loc_82821EBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821ED8"))) PPC_WEAK_FUNC(sub_82821ED8);
PPC_FUNC_IMPL(__imp__sub_82821ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282f870
	sub_8282F870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82821EE0"))) PPC_WEAK_FUNC(sub_82821EE0);
PPC_FUNC_IMPL(__imp__sub_82821EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1488
	ctx.r3.s64 = 1488;
	// bl 0x82833108
	ctx.lr = 0x82821F00;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82821f64
	if (ctx.cr0.eq) goto loc_82821F64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b88
	ctx.lr = 0x82821F14;
	sub_82338B88(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,-27824
	ctx.r11.s64 = ctx.r11.s64 + -27824;
	// addi r10,r10,-26804
	ctx.r10.s64 = ctx.r10.s64 + -26804;
	// addi r9,r9,-26752
	ctx.r9.s64 = ctx.r9.s64 + -26752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1408
	ctx.r4.s64 = ctx.r30.s64 + 1408;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x8282f630
	ctx.lr = 0x82821F44;
	sub_8282F630(ctx, base);
	// addi r4,r30,1432
	ctx.r4.s64 = ctx.r30.s64 + 1432;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x8282f630
	ctx.lr = 0x82821F50;
	sub_8282F630(ctx, base);
	// addi r4,r30,1456
	ctx.r4.s64 = ctx.r30.s64 + 1456;
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x8282f630
	ctx.lr = 0x82821F5C;
	sub_8282F630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82821f68
	goto loc_82821F68;
loc_82821F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82821F68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821F80"))) PPC_WEAK_FUNC(sub_82821F80);
PPC_FUNC_IMPL(__imp__sub_82821F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282f870
	ctx.lr = 0x82821FA0;
	sub_8282F870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82821fb0
	if (!ctx.cr6.eq) goto loc_82821FB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82821fc8
	goto loc_82821FC8;
loc_82821FB0:
	// bl 0x82338750
	ctx.lr = 0x82821FB4;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82821fc8
	if (ctx.cr6.eq) goto loc_82821FC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82821FC8;
	sub_82338858(ctx, base);
loc_82821FC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82821FE0"))) PPC_WEAK_FUNC(sub_82821FE0);
PPC_FUNC_IMPL(__imp__sub_82821FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// bl 0x82400f38
	ctx.lr = 0x82822004;
	sub_82400F38(ctx, base);
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82400f38
	ctx.lr = 0x8282200C;
	sub_82400F38(ctx, base);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x82400f38
	ctx.lr = 0x82822014;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x8282201C;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282202c
	if (ctx.cr0.eq) goto loc_8282202C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8282202C;
	sub_82332DB8(ctx, base);
loc_8282202C:
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

__attribute__((alias("__imp__sub_82822048"))) PPC_WEAK_FUNC(sub_82822048);
PPC_FUNC_IMPL(__imp__sub_82822048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82822050;
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
	// beq cr6,0x828220ac
	if (ctx.cr6.eq) goto loc_828220AC;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14880
	ctx.r31.s64 = ctx.r11.s64 + 14880;
	// lwz r11,14876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282209c
	if (!ctx.cr0.eq) goto loc_8282209C;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26012
	ctx.r9.s64 = ctx.r9.s64 + 26012;
	// stw r11,14876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14876, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// bl 0x82a4c758
	ctx.lr = 0x8282209C;
	sub_82A4C758(ctx, base);
loc_8282209C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828220ac
	if (!ctx.cr6.eq) goto loc_828220AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828220b8
	goto loc_828220B8;
loc_828220AC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339b70
	ctx.lr = 0x828220B8;
	sub_82339B70(ctx, base);
loc_828220B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828220C0"))) PPC_WEAK_FUNC(sub_828220C0);
PPC_FUNC_IMPL(__imp__sub_828220C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828220C8;
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
	// addi r31,r11,14880
	ctx.r31.s64 = ctx.r11.s64 + 14880;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282210c
	if (!ctx.cr0.eq) goto loc_8282210C;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26012
	ctx.r9.s64 = ctx.r9.s64 + 26012;
	// stw r11,14876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14876, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25688
	ctx.r3.s64 = ctx.r11.s64 + -25688;
	// bl 0x82a4c758
	ctx.lr = 0x8282210C;
	sub_82A4C758(ctx, base);
loc_8282210C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82822120
	if (ctx.cr6.eq) goto loc_82822120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339f40
	ctx.lr = 0x82822120;
	sub_82339F40(ctx, base);
loc_82822120:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822128"))) PPC_WEAK_FUNC(sub_82822128);
PPC_FUNC_IMPL(__imp__sub_82822128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14888
	ctx.r31.s64 = ctx.r11.s64 + 14888;
	// lwz r11,14884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82822170
	if (!ctx.cr0.eq) goto loc_82822170;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26012
	ctx.r9.s64 = ctx.r9.s64 + 26012;
	// stw r11,14884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14884, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// bl 0x82a4c758
	ctx.lr = 0x82822170;
	sub_82A4C758(ctx, base);
loc_82822170:
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

__attribute__((alias("__imp__sub_82822188"))) PPC_WEAK_FUNC(sub_82822188);
PPC_FUNC_IMPL(__imp__sub_82822188) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x828302f0
	ctx.lr = 0x828221A4;
	sub_828302F0(ctx, base);
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

__attribute__((alias("__imp__sub_828221B8"))) PPC_WEAK_FUNC(sub_828221B8);
PPC_FUNC_IMPL(__imp__sub_828221B8) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828221f8
	if (ctx.cr6.eq) goto loc_828221F8;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// lwz r31,864(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8282f630
	ctx.lr = 0x828221EC;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82929230
	ctx.lr = 0x828221F8;
	sub_82929230(ctx, base);
loc_828221F8:
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

__attribute__((alias("__imp__sub_82822210"))) PPC_WEAK_FUNC(sub_82822210);
PPC_FUNC_IMPL(__imp__sub_82822210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23264
	ctx.r3.s64 = ctx.r11.s64 + 23264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822220"))) PPC_WEAK_FUNC(sub_82822220);
PPC_FUNC_IMPL(__imp__sub_82822220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82822258
	if (ctx.cr6.eq) goto loc_82822258;
	// bl 0x8282fb98
	ctx.lr = 0x82822248;
	sub_8282FB98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82822258
	if (!ctx.cr6.eq) goto loc_82822258;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82822264
	goto loc_82822264;
loc_82822258:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x82822264;
	sub_82338A88(ctx, base);
loc_82822264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822280"))) PPC_WEAK_FUNC(sub_82822280);
PPC_FUNC_IMPL(__imp__sub_82822280) {
	PPC_FUNC_PROLOGUE();
	// b 0x8282fb98
	sub_8282FB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822288"))) PPC_WEAK_FUNC(sub_82822288);
PPC_FUNC_IMPL(__imp__sub_82822288) {
	PPC_FUNC_PROLOGUE();
	// b 0x823388b8
	sub_823388B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822290"))) PPC_WEAK_FUNC(sub_82822290);
PPC_FUNC_IMPL(__imp__sub_82822290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,488
	ctx.r3.s64 = 488;
	// bl 0x82833108
	ctx.lr = 0x828222B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82822330
	if (ctx.cr0.eq) goto loc_82822330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823393a0
	ctx.lr = 0x828222C4;
	sub_823393A0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,28704
	ctx.r11.s64 = ctx.r11.s64 + 28704;
	// addi r10,r10,28960
	ctx.r10.s64 = ctx.r10.s64 + 28960;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,396
	ctx.r4.s64 = ctx.r30.s64 + 396;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// bl 0x82971f40
	ctx.lr = 0x828222E8;
	sub_82971F40(ctx, base);
	// addi r4,r30,436
	ctx.r4.s64 = ctx.r30.s64 + 436;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828222F8;
	sub_82A4EA80(ctx, base);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// lwz r11,484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// b 0x82822334
	goto loc_82822334;
loc_82822330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82822334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82822350"))) PPC_WEAK_FUNC(sub_82822350);
PPC_FUNC_IMPL(__imp__sub_82822350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282fb98
	ctx.lr = 0x82822370;
	sub_8282FB98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82822384
	if (ctx.cr6.eq) goto loc_82822384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82822384;
	sub_82338858(ctx, base);
loc_82822384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828223A0"))) PPC_WEAK_FUNC(sub_828223A0);
PPC_FUNC_IMPL(__imp__sub_828223A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828223A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,396
	ctx.r30.s64 = ctx.r31.s64 + 396;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// bl 0x82332db8
	ctx.lr = 0x828223C0;
	sub_82332DB8(ctx, base);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x8282f998
	ctx.lr = 0x828223C8;
	sub_8282F998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bcf90
	ctx.lr = 0x828223D0;
	sub_829BCF90(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828223e0
	if (ctx.cr0.eq) goto loc_828223E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828223E0;
	sub_82332DB8(ctx, base);
loc_828223E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828223F0"))) PPC_WEAK_FUNC(sub_828223F0);
PPC_FUNC_IMPL(__imp__sub_828223F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828223F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r3,9
	ctx.r3.s64 = 589824;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ori r3,r3,4256
	ctx.r3.u64 = ctx.r3.u64 | 4256;
	// stw r11,9800(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9800, ctx.r11.u32);
	// stw r10,9804(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9804, ctx.r10.u32);
	// bl 0x82a4fb98
	ctx.lr = 0x82822424;
	sub_82A4FB98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// beq 0x828224cc
	if (ctx.cr0.eq) goto loc_828224CC;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// ori r10,r10,4200
	ctx.r10.u64 = ctx.r10.u64 | 4200;
	// ori r9,r9,4204
	ctx.r9.u64 = ctx.r9.u64 | 4204;
	// ori r8,r8,4208
	ctx.r8.u64 = ctx.r8.u64 | 4208;
	// ori r7,r7,4212
	ctx.r7.u64 = ctx.r7.u64 | 4212;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// stwx r31,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u32);
	// ori r6,r6,4216
	ctx.r6.u64 = ctx.r6.u64 | 4216;
	// stwx r31,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r31.u32);
	// ori r5,r5,4220
	ctx.r5.u64 = ctx.r5.u64 | 4220;
	// stwx r31,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r31.u32);
	// lis r29,9
	ctx.r29.s64 = 589824;
	// stwx r31,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r31.u32);
	// lis r4,6
	ctx.r4.s64 = 393216;
	// lis r30,6
	ctx.r30.s64 = 393216;
	// lis r28,9
	ctx.r28.s64 = 589824;
	// stwx r31,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r31.u32);
	// lis r27,-32215
	ctx.r27.s64 = -2111242240;
	// stwx r31,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r31.u32);
	// ori r8,r29,4244
	ctx.r8.u64 = ctx.r29.u64 | 4244;
	// lis r26,-32217
	ctx.r26.s64 = -2111373312;
	// ori r10,r4,4224
	ctx.r10.u64 = ctx.r4.u64 | 4224;
	// ori r9,r30,4232
	ctx.r9.u64 = ctx.r30.u64 | 4232;
	// ori r7,r28,4248
	ctx.r7.u64 = ctx.r28.u64 | 4248;
	// lfd f0,16376(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16376);
	// addi r6,r26,-26204
	ctx.r6.s64 = ctx.r26.s64 + -26204;
	// stwx r31,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.r31.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stwx r31,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfdx f0,r3,r9
	PPC_STORE_U64(ctx.r3.u32 + ctx.r9.u32, ctx.f0.u64);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stwx r31,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r31.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// b 0x828224d0
	goto loc_828224D0;
loc_828224CC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_828224D0:
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r29,13016(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13016, ctx.r29.u32);
	// addi r30,r11,13016
	ctx.r30.s64 = ctx.r11.s64 + 13016;
	// bl 0x82a4fb98
	ctx.lr = 0x828224E0;
	sub_82A4FB98(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8282251c
	if (ctx.cr0.eq) goto loc_8282251C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,22764
	ctx.r11.s64 = ctx.r11.s64 + 22764;
	// addi r10,r10,22784
	ctx.r10.s64 = ctx.r10.s64 + 22784;
	// addi r9,r9,22796
	ctx.r9.s64 = ctx.r9.s64 + 22796;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82822514;
	sub_8312E7DC(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82822520
	goto loc_82822520;
loc_8282251C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82822520:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82a4fb98
	ctx.lr = 0x82822528;
	sub_82A4FB98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82822548
	if (ctx.cr0.eq) goto loc_82822548;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-26264
	ctx.r11.s64 = ctx.r11.s64 + -26264;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8282254c
	goto loc_8282254C;
loc_82822548:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8282254C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822568"))) PPC_WEAK_FUNC(sub_82822568);
PPC_FUNC_IMPL(__imp__sub_82822568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82822570;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61738
	ctx.lr = 0x82822578;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r11,136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// beq cr6,0x828225a8
	if (ctx.cr6.eq) goto loc_828225A8;
	// lfd f0,80(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// b 0x828225ac
	goto loc_828225AC;
loc_828225A8:
	// lfs f0,480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
loc_828225AC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// frsp f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f0.f64));
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// lfs f24,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x828228b4
	if (ctx.cr6.eq) goto loc_828228B4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x828225d4
	if (ctx.cr6.eq) goto loc_828225D4;
	// lwz r11,1412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1412);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828228b4
	if (ctx.cr6.eq) goto loc_828228B4;
loc_828225D4:
	// lwz r11,800(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828225e8
	if (ctx.cr6.eq) goto loc_828225E8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828228b4
	if (ctx.cr6.eq) goto loc_828228B4;
loc_828225E8:
	// lwz r11,108(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828228c0
	if (!ctx.cr6.eq) goto loc_828228C0;
	// lfs f0,624(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,620(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f27,f29,f29,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// beq cr6,0x82822854
	if (ctx.cr6.eq) goto loc_82822854;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-25080
	ctx.r11.s64 = ctx.r11.s64 + -25080;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f28,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,-15732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15732);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f31,f12,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x828226a0
	if (!ctx.cr6.lt) goto loc_828226A0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f0,17584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17584);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x8282268c
	if (!ctx.cr6.gt) goto loc_8282268C;
	// fmuls f25,f25,f26
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// b 0x828226a0
	goto loc_828226A0;
loc_8282268C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x828226a0
	if (!ctx.cr6.gt) goto loc_828226A0;
	// fmuls f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
loc_828226A0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828226B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82822760
	if (ctx.cr0.eq) goto loc_82822760;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x828228c0
	if (!ctx.cr6.eq) goto loc_828228C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bne cr6,0x828226fc
	if (!ctx.cr6.eq) goto loc_828226FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8282272c
	goto loc_8282272C;
loc_828226FC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bge cr6,0x82822718
	if (!ctx.cr6.lt) goto loc_82822718;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x8282272c
	goto loc_8282272C;
loc_82822718:
	// fsqrts f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f27.f64)));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f13,f31,f12
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f28,f30,f12
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
loc_8282272C:
	// lfs f12,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmuls f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,23664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f10,f0,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x828228c0
	if (!ctx.cr6.gt) goto loc_828228C0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f0,-28792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28792);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828228bc
	goto loc_828228BC;
loc_82822760:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82822838
	if (ctx.cr0.eq) goto loc_82822838;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82822820
	if (!ctx.cr6.eq) goto loc_82822820;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bne cr6,0x828227bc
	if (!ctx.cr6.eq) goto loc_828227BC;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828227ec
	goto loc_828227EC;
loc_828227BC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bge cr6,0x828227d8
	if (!ctx.cr6.lt) goto loc_828227D8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// b 0x828227ec
	goto loc_828227EC;
loc_828227D8:
	// fsqrts f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f27.f64)));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f28,f30,f12
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f12.f64));
loc_828227EC:
	// lfs f12,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmuls f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,23664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23664);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f10,f0,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82822820
	if (!ctx.cr6.gt) goto loc_82822820;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f0,-28792(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28792);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
loc_82822820:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x828228c0
	if (!ctx.cr6.gt) goto loc_828228C0;
	// fmuls f25,f25,f26
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// b 0x828228c0
	goto loc_828228C0;
loc_82822838:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x828228c0
	if (!ctx.cr6.gt) goto loc_828228C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17328);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828228bc
	goto loc_828228BC;
loc_82822854:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f30,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f13,f11,f29,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828228c0
	if (!ctx.cr6.lt) goto loc_828228C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17584);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x8282289c
	if (!ctx.cr6.gt) goto loc_8282289C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-25080
	ctx.r11.s64 = ctx.r11.s64 + -25080;
	// lfs f0,-10100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10100);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828228bc
	goto loc_828228BC;
loc_8282289C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// ble cr6,0x828228c0
	if (!ctx.cr6.gt) goto loc_828228C0;
	// fmuls f25,f25,f24
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// b 0x828228c0
	goto loc_828228C0;
loc_828228B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-25080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
loc_828228BC:
	// fmuls f25,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
loc_828228C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f0,17572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17572);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f24
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f24.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x828228DC;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r30
	PPC_STORE_U32(ctx.r30.u32, ctx.f0.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61784
	ctx.lr = 0x828228F8;
	__restfpr_24(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822900"))) PPC_WEAK_FUNC(sub_82822900);
PPC_FUNC_IMPL(__imp__sub_82822900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82822908;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,27264
	ctx.r11.s64 = ctx.r11.s64 + 27264;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,4
	ctx.r29.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// addi r11,r31,148
	ctx.r11.s64 = ctx.r31.s64 + 148;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82822958;
	sub_8312E7DC(ctx, base);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
	// stw r30,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r29,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r29.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r30.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r30.u32);
	// stw r29,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r30.u32);
	// stw r29,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r29.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
	// stw r29,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r29.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r29,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r29.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// stw r29,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r29,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r29.u32);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r29,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r29.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// addi r3,r31,660
	ctx.r3.s64 = ctx.r31.s64 + 660;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// stw r11,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// bl 0x828ec190
	ctx.lr = 0x82822A8C;
	sub_828EC190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r29,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r29.u32);
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// addi r9,r31,1268
	ctx.r9.s64 = ctx.r31.s64 + 1268;
	// stw r30,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r30.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r30,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r30.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r29,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r29.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r30,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r30.u32);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// stw r30,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r30.u32);
	// stw r30,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r30.u32);
	// stw r30,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r30.u32);
	// stw r30,1268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1268, ctx.r30.u32);
	// stw r30,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r30.u32);
	// stw r30,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r30.u32);
	// stw r30,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r30.u32);
	// stw r8,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r8.u32);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// stw r30,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r30.u32);
	// stw r30,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r30.u32);
	// stw r30,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r30.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// lwz r11,20180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20180);
	// stw r30,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r30.u32);
	// stw r29,1324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1324, ctx.r29.u32);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r29,r9,20176
	ctx.r29.s64 = ctx.r9.s64 + 20176;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,1328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1328, ctx.r30.u32);
	// stw r30,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r30.u32);
	// stw r30,1336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1336, ctx.r30.u32);
	// stw r30,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r30.u32);
	// stw r30,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r30.u32);
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// stw r8,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r8.u32);
	// stw r7,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r7.u32);
	// bne 0x82822b74
	if (!ctx.cr0.eq) goto loc_82822B74;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24092
	ctx.r9.s64 = ctx.r9.s64 + 24092;
	// stw r11,20180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20180, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25760
	ctx.r3.s64 = ctx.r11.s64 + -25760;
	// bl 0x82a4c758
	ctx.lr = 0x82822B74;
	sub_82A4C758(ctx, base);
loc_82822B74:
	// stw r29,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r29.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-29036
	ctx.r3.s64 = ctx.r11.s64 + -29036;
	// bl 0x828165a8
	ctx.lr = 0x82822B84;
	sub_828165A8(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r3,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r29,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r29.u32);
	// stw r29,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r29.u32);
	// stw r29,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r29.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r30.u32);
	// stw r30,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// stw r30,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r30.u32);
	// stw r30,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r30.u32);
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r30,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r30.u32);
	// stw r30,940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 940, ctx.r30.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r30.u32);
	// stw r30,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r30.u32);
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// stw r30,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r30.u32);
	// bl 0x829f1ad0
	ctx.lr = 0x82822C30;
	sub_829F1AD0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2936
	ctx.r4.s64 = ctx.r11.s64 + -2936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x82822C44;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82927d40
	ctx.lr = 0x82822C50;
	sub_82927D40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8233a258
	ctx.lr = 0x82822C60;
	sub_8233A258(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82822C68;
	sub_82333960(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822c7c
	if (ctx.cr6.eq) goto loc_82822C7C;
	// bl 0x82765d70
	ctx.lr = 0x82822C78;
	sub_82765D70(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82822C7C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x82822C84;
	sub_829EF5F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,250
	ctx.r10.s64 = 250;
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r30,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r30.u32);
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r30.u32);
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// stw r30,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r30.u32);
	// stw r30,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r30.u32);
	// stw r30,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// stw r30,1348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1348, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r30,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
	// stw r11,1352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1352, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r30.u32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x824be760
	ctx.lr = 0x82822D1C;
	sub_824BE760(ctx, base);
	// stw r3,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r3.u32);
	// stfs f31,804(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r29,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r29.u32);
	// stw r29,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r29.u32);
	// bl 0x8282a368
	ctx.lr = 0x82822D5C;
	sub_8282A368(ctx, base);
	// li r11,1085
	ctx.r11.s64 = 1085;
	// stfs f31,924(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r30,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r3,r31,1416
	ctx.r3.s64 = ctx.r31.s64 + 1416;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82822D94;
	sub_82A4EFB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82822DA8"))) PPC_WEAK_FUNC(sub_82822DA8);
PPC_FUNC_IMPL(__imp__sub_82822DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82822df8
	ctx.lr = 0x82822DC8;
	sub_82822DF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82822dd8
	if (ctx.cr0.eq) goto loc_82822DD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82822DD8;
	sub_82332DB8(ctx, base);
loc_82822DD8:
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

__attribute__((alias("__imp__sub_82822DF8"))) PPC_WEAK_FUNC(sub_82822DF8);
PPC_FUNC_IMPL(__imp__sub_82822DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82822E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r11,r11,27264
	ctx.r11.s64 = ctx.r11.s64 + 27264;
	// lwz r3,636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 636);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822e34
	if (ctx.cr6.eq) goto loc_82822E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82822E34:
	// lwz r3,600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	// bl 0x82332db8
	ctx.lr = 0x82822E3C;
	sub_82332DB8(ctx, base);
	// lwz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822e5c
	if (ctx.cr6.eq) goto loc_82822E5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82822E5C:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822e6c
	if (ctx.cr6.eq) goto loc_82822E6C;
	// bl 0x82332db8
	ctx.lr = 0x82822E6C;
	sub_82332DB8(ctx, base);
loc_82822E6C:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822e8c
	if (ctx.cr6.eq) goto loc_82822E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82822E8C:
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822eac
	if (ctx.cr6.eq) goto loc_82822EAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82822EAC:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822ecc
	if (ctx.cr6.eq) goto loc_82822ECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82822ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82822ECC:
	// bl 0x829f1e88
	ctx.lr = 0x82822ED0;
	sub_829F1E88(ctx, base);
	// addi r29,r30,1320
	ctx.r29.s64 = ctx.r30.s64 + 1320;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1336(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1336);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82822EEC;
	sub_82332CA8(ctx, base);
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822efc
	if (ctx.cr6.eq) goto loc_82822EFC;
	// bl 0x82332db8
	ctx.lr = 0x82822EFC;
	sub_82332DB8(ctx, base);
loc_82822EFC:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,1272
	ctx.r3.s64 = ctx.r30.s64 + 1272;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// bl 0x82833068
	ctx.lr = 0x82822F14;
	sub_82833068(ctx, base);
	// addi r3,r30,868
	ctx.r3.s64 = ctx.r30.s64 + 868;
	// bl 0x8239d768
	ctx.lr = 0x82822F1C;
	sub_8239D768(ctx, base);
	// addi r3,r30,808
	ctx.r3.s64 = ctx.r30.s64 + 808;
	// bl 0x8239d768
	ctx.lr = 0x82822F24;
	sub_8239D768(ctx, base);
	// addi r3,r30,660
	ctx.r3.s64 = ctx.r30.s64 + 660;
	// bl 0x8281fa90
	ctx.lr = 0x82822F2C;
	sub_8281FA90(ctx, base);
	// addi r28,r30,564
	ctx.r28.s64 = ctx.r30.s64 + 564;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,580(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82822F48;
	sub_82332CA8(ctx, base);
	// lwz r3,576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822f58
	if (ctx.cr6.eq) goto loc_82822F58;
	// bl 0x82332db8
	ctx.lr = 0x82822F58;
	sub_82332DB8(ctx, base);
loc_82822F58:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r29,r30,436
	ctx.r29.s64 = ctx.r30.s64 + 436;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,452(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82822F80;
	sub_82332CA8(ctx, base);
	// lwz r3,448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822f90
	if (ctx.cr6.eq) goto loc_82822F90;
	// bl 0x82332db8
	ctx.lr = 0x82822F90;
	sub_82332DB8(ctx, base);
loc_82822F90:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// bl 0x8239d768
	ctx.lr = 0x82822FA4;
	sub_8239D768(ctx, base);
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,400(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82822FC0;
	sub_82332CA8(ctx, base);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82822fd0
	if (ctx.cr6.eq) goto loc_82822FD0;
	// bl 0x82332db8
	ctx.lr = 0x82822FD0;
	sub_82332DB8(ctx, base);
loc_82822FD0:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r3,r30,360
	ctx.r3.s64 = ctx.r30.s64 + 360;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// bl 0x8239d768
	ctx.lr = 0x82822FE4;
	sub_8239D768(ctx, base);
	// addi r3,r30,336
	ctx.r3.s64 = ctx.r30.s64 + 336;
	// bl 0x8239d768
	ctx.lr = 0x82822FEC;
	sub_8239D768(ctx, base);
	// addi r29,r30,312
	ctx.r29.s64 = ctx.r30.s64 + 312;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,328(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82823008;
	sub_82332CA8(ctx, base);
	// lwz r3,324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82823018
	if (ctx.cr6.eq) goto loc_82823018;
	// bl 0x82332db8
	ctx.lr = 0x82823018;
	sub_82332DB8(ctx, base);
loc_82823018:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// bl 0x8239d768
	ctx.lr = 0x8282302C;
	sub_8239D768(ctx, base);
	// addi r29,r30,264
	ctx.r29.s64 = ctx.r30.s64 + 264;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82823048;
	sub_82332CA8(ctx, base);
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82823058
	if (ctx.cr6.eq) goto loc_82823058;
	// bl 0x82332db8
	ctx.lr = 0x82823058;
	sub_82332DB8(ctx, base);
loc_82823058:
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// addi r28,r30,240
	ctx.r28.s64 = ctx.r30.s64 + 240;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,256(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82332ca8
	ctx.lr = 0x82823080;
	sub_82332CA8(ctx, base);
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82823090
	if (ctx.cr6.eq) goto loc_82823090;
	// bl 0x82332db8
	ctx.lr = 0x82823090;
	sub_82332DB8(ctx, base);
loc_82823090:
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// addi r3,r30,216
	ctx.r3.s64 = ctx.r30.s64 + 216;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// bl 0x824d8e70
	ctx.lr = 0x828230A4;
	sub_824D8E70(ctx, base);
	// addi r3,r30,192
	ctx.r3.s64 = ctx.r30.s64 + 192;
	// bl 0x824d8e70
	ctx.lr = 0x828230AC;
	sub_824D8E70(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x828230C0;
	sub_8239D768(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828230C8"))) PPC_WEAK_FUNC(sub_828230C8);
PPC_FUNC_IMPL(__imp__sub_828230C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828230D0;
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
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,13024(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13024, ctx.r31.u32);
	// bl 0x82a46028
	ctx.lr = 0x828230EC;
	sub_82A46028(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,2
	ctx.r22.s64 = 2;
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// li r23,4
	ctx.r23.s64 = 4;
	// beq 0x82823190
	if (ctx.cr0.eq) goto loc_82823190;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a4e530
	ctx.lr = 0x82823110;
	sub_82A4E530(ctx, base);
	// stb r29,382(r1)
	PPC_STORE_U8(ctx.r1.u32 + 382, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a57d08
	ctx.lr = 0x8282311C;
	sub_82A57D08(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24008
	ctx.r4.s64 = ctx.r11.s64 + 24008;
	// bl 0x82a4d040
	ctx.lr = 0x8282312C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823138
	if (ctx.cr0.eq) goto loc_82823138;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_82823138:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24028
	ctx.r4.s64 = ctx.r11.s64 + 24028;
	// bl 0x82a4d040
	ctx.lr = 0x82823148;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823154
	if (ctx.cr0.eq) goto loc_82823154;
	// stw r22,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r22.u32);
loc_82823154:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24048
	ctx.r4.s64 = ctx.r11.s64 + 24048;
	// bl 0x82a4d040
	ctx.lr = 0x82823164;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823170
	if (ctx.cr0.eq) goto loc_82823170;
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
loc_82823170:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24064
	ctx.r4.s64 = ctx.r11.s64 + 24064;
	// bl 0x82a4d040
	ctx.lr = 0x82823180;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823190
	if (ctx.cr0.eq) goto loc_82823190;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,16440(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16440, ctx.r11.u32);
loc_82823190:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
loc_82823198:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a46708
	ctx.lr = 0x828231A0;
	sub_82A46708(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82823198
	if (ctx.cr0.eq) goto loc_82823198;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r31,968
	ctx.r3.s64 = ctx.r31.s64 + 968;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// stfs f0,992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// bl 0x82a46740
	ctx.lr = 0x828231CC;
	sub_82A46740(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// std r29,976(r31)
	PPC_STORE_U64(ctx.r31.u32 + 976, ctx.r29.u64);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// stfs f31,988(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// bl 0x82a46760
	ctx.lr = 0x828231E8;
	sub_82A46760(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r3,13
	ctx.r3.s64 = 13;
	// stw r11,13012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13012, ctx.r11.u32);
	// bl 0x828243b0
	ctx.lr = 0x828231FC;
	sub_828243B0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x82823204;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823220
	if (ctx.cr0.eq) goto loc_82823220;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x8281ab48
	ctx.lr = 0x82823214;
	sub_8281AB48(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,10720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10720, ctx.r3.u32);
	// b 0x8282322c
	goto loc_8282322C;
loc_82823220:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,10720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10720, ctx.r11.u32);
loc_8282322C:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r10,-18760
	ctx.r3.s64 = ctx.r10.s64 + -18760;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82823258
	if (ctx.cr6.eq) goto loc_82823258;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x82823258;
	sub_82332C38(ctx, base);
loc_82823258:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-18688
	ctx.r3.s64 = ctx.r11.s64 + -18688;
	// bl 0x827677d0
	ctx.lr = 0x82823264;
	sub_827677D0(ctx, base);
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823278;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828232A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828232e4
	if (!ctx.cr6.eq) goto loc_828232E4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x828232B4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828232dc
	if (ctx.cr0.eq) goto loc_828232DC;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r23,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r23.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,10404
	ctx.r10.s64 = ctx.r10.s64 + 10404;
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x828232e0
	goto loc_828232E0;
loc_828232DC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828232E0:
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_828232E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 960, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828232FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1336
	ctx.r3.s64 = 1336;
	// bl 0x82333900
	ctx.lr = 0x82823304;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823318
	if (ctx.cr0.eq) goto loc_82823318;
	// bl 0x829b8b38
	ctx.lr = 0x82823310;
	sub_829B8B38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8282331c
	goto loc_8282331C;
loc_82823318:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8282331C:
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,36496
	ctx.r3.u64 = ctx.r3.u64 | 36496;
	// bl 0x82833108
	ctx.lr = 0x8282332C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823340
	if (ctx.cr0.eq) goto loc_82823340;
	// bl 0x82969a40
	ctx.lr = 0x82823338;
	sub_82969A40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823344
	goto loc_82823344;
loc_82823340:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823344:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x82823350;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823364
	if (ctx.cr0.eq) goto loc_82823364;
	// bl 0x82832b50
	ctx.lr = 0x8282335C;
	sub_82832B50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823368
	goto loc_82823368;
loc_82823364:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823368:
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// li r3,7420
	ctx.r3.s64 = 7420;
	// bl 0x82333900
	ctx.lr = 0x82823374;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823384
	if (ctx.cr0.eq) goto loc_82823384;
	// bl 0x829165f0
	ctx.lr = 0x82823380;
	sub_829165F0(ctx, base);
	// b 0x82823388
	goto loc_82823388;
loc_82823384:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82823388:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r3,524
	ctx.r3.s64 = 524;
	// bl 0x82833108
	ctx.lr = 0x82823394;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828233a8
	if (ctx.cr0.eq) goto loc_828233A8;
	// bl 0x829727a8
	ctx.lr = 0x828233A0;
	sub_829727A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828233ac
	goto loc_828233AC;
loc_828233A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828233AC:
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// li r3,456
	ctx.r3.s64 = 456;
	// bl 0x82833108
	ctx.lr = 0x828233B8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828233cc
	if (ctx.cr0.eq) goto loc_828233CC;
	// bl 0x82929618
	ctx.lr = 0x828233C4;
	sub_82929618(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x828233d0
	goto loc_828233D0;
loc_828233CC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828233D0:
	// stw r11,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r11.u32);
	// li r3,4608
	ctx.r3.s64 = 4608;
	// bl 0x82333900
	ctx.lr = 0x828233DC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823448
	if (ctx.cr0.eq) goto loc_82823448;
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_828233EC:
	// stfs f31,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f31,-16(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f31,-12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f31,-8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f31,-4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,12(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stfs f30,16(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
	// stw r29,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// stw r29,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bge 0x828233ec
	if (!ctx.cr0.lt) goto loc_828233EC;
	// b 0x8282344c
	goto loc_8282344C;
loc_82823448:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8282344C:
	// stw r3,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r3.u32);
	// li r3,444
	ctx.r3.s64 = 444;
	// bl 0x82833108
	ctx.lr = 0x82823458;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282346c
	if (ctx.cr0.eq) goto loc_8282346C;
	// bl 0x82929c28
	ctx.lr = 0x82823464;
	sub_82929C28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823470
	goto loc_82823470;
loc_8282346C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823470:
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82333900
	ctx.lr = 0x8282347C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823490
	if (ctx.cr0.eq) goto loc_82823490;
	// bl 0x82823d38
	ctx.lr = 0x82823488;
	sub_82823D38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82823494
	goto loc_82823494;
loc_82823490:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823494:
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82333900
	ctx.lr = 0x828234A0;
	sub_82333900(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828234c4
	if (ctx.cr0.eq) goto loc_828234C4;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// stb r26,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r26.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-23056
	ctx.r10.s64 = ctx.r10.s64 + -23056;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x828234c8
	goto loc_828234C8;
loc_828234C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828234C8:
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82333900
	ctx.lr = 0x828234D4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823540
	if (ctx.cr0.eq) goto loc_82823540;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r8,r11,11128
	ctx.r8.s64 = ctx.r11.s64 + 11128;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// stw r3,18268(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18268, ctx.r3.u32);
	// b 0x82823544
	goto loc_82823544;
loc_82823540:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823544:
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82833108
	ctx.lr = 0x82823550;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8282358c
	if (ctx.cr0.eq) goto loc_8282358C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a57c8
	ctx.lr = 0x82823560;
	sub_828A57C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,26160
	ctx.r11.s64 = ctx.r11.s64 + 26160;
	// addi r10,r10,27208
	ctx.r10.s64 = ctx.r10.s64 + 27208;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// b 0x82823590
	goto loc_82823590;
loc_8282358C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823590:
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r11.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,-32456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1492, temp.u32);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stw r7,1480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1480, ctx.r7.u32);
	// lfs f0,16772(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16772);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1484, ctx.r10.u32);
	// stw r9,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r9.u32);
	// lwz r11,896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// stfs f0,1496(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1496, temp.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82833ea8
	ctx.lr = 0x828235E0;
	sub_82833EA8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x828235E8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823600
	if (ctx.cr0.eq) goto loc_82823600;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x8281ab48
	ctx.lr = 0x828235F8;
	sub_8281AB48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82823604
	goto loc_82823604;
loc_82823600:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82823604:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,9852
	ctx.r11.s64 = ctx.r11.s64 + 9852;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// addi r5,r11,9824
	ctx.r5.s64 = ctx.r11.s64 + 9824;
	// bl 0x82a6ed50
	ctx.lr = 0x8282362C;
	sub_82A6ED50(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r3,9856(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9856, ctx.r3.u32);
	// bl 0x82a48718
	ctx.lr = 0x8282363C;
	sub_82A48718(ctx, base);
	// li r3,664
	ctx.r3.s64 = 664;
	// bl 0x82833108
	ctx.lr = 0x82823644;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823658
	if (ctx.cr0.eq) goto loc_82823658;
	// bl 0x82842478
	ctx.lr = 0x82823650;
	sub_82842478(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8282365c
	goto loc_8282365C;
loc_82823658:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8282365C:
	// stw r4,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x8282366C;
	sub_829B8EE8(ctx, base);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82823680
	if (ctx.cr6.eq) goto loc_82823680;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82823684
	goto loc_82823684;
loc_82823680:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823684:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b9fe8
	ctx.lr = 0x82823694;
	sub_829B9FE8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// addi r30,r11,23288
	ctx.r30.s64 = ctx.r11.s64 + 23288;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82824ab8
	ctx.lr = 0x828236C4;
	sub_82824AB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x828236CC;
	sub_82816528(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f8078
	ctx.lr = 0x828236E0;
	sub_824F8078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f30,-25412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25412);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8282371c
	goto loc_8282371C;
loc_828236EC:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82833ea8
	ctx.lr = 0x828236F4;
	sub_82833EA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82766940
	ctx.lr = 0x828236FC;
	sub_82766940(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,1000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8708
	ctx.lr = 0x82823710;
	sub_829B8708(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// bl 0x824f8078
	ctx.lr = 0x8282371C;
	sub_824F8078(ctx, base);
loc_8282371C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828236ec
	if (ctx.cr0.eq) goto loc_828236EC;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82823770
	if (!ctx.cr6.gt) goto loc_82823770;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_82823740:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282375C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82823740
	if (ctx.cr6.lt) goto loc_82823740;
loc_82823770:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r29.u32);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828237B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16440(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828237fc
	if (ctx.cr6.eq) goto loc_828237FC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lwz r11,10408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10408);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828237e8
	if (!ctx.cr6.eq) goto loc_828237E8;
	// bl 0x829e8660
	ctx.lr = 0x828237E8;
	sub_829E8660(ctx, base);
loc_828237E8:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8312eb2c
	ctx.lr = 0x828237F0;
	sub_8312EB2C(ctx, base);
	// bl 0x8276a398
	ctx.lr = 0x828237F4;
	sub_8276A398(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x828237FC;
	sub_82333960(ctx, base);
loc_828237FC:
	// lwz r4,636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82823814
	if (ctx.cr6.eq) goto loc_82823814;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823814;
	sub_829B8EE8(ctx, base);
loc_82823814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829dbe78
	ctx.lr = 0x8282381C;
	sub_829DBE78(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x8282382C;
	sub_829B8EE8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82823840
	if (ctx.cr6.eq) goto loc_82823840;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82823844
	goto loc_82823844;
loc_82823840:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823844:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r28,644(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// bl 0x82333900
	ctx.lr = 0x82823854;
	sub_82333900(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r11,15852
	ctx.r27.s64 = ctx.r11.s64 + 15852;
	// beq 0x82823874
	if (ctx.cr0.eq) goto loc_82823874;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82823870;
	sub_8312E7DC(ctx, base);
	// b 0x82823878
	goto loc_82823878;
loc_82823874:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82823878:
	// stw r30,1408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1408, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x82823884;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8282389c
	if (ctx.cr0.eq) goto loc_8282389C;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82823898;
	sub_8312E7DC(ctx, base);
	// b 0x828238a0
	goto loc_828238A0;
loc_8282389C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828238A0:
	// stw r30,1412(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1412, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r26,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r26.u32);
	// bl 0x82333900
	ctx.lr = 0x828238B0;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828238d0
	if (ctx.cr0.eq) goto loc_828238D0;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x828238C4;
	sub_8312E7DC(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r30,9912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9912, ctx.r30.u32);
	// b 0x828238dc
	goto loc_828238DC;
loc_828238D0:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,9912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9912, ctx.r11.u32);
loc_828238DC:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r11,9888
	ctx.r3.s64 = ctx.r11.s64 + 9888;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x828238F0;
	sub_82A4EFB0(ctx, base);
	// stw r26,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,644(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823904;
	sub_829B8EE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282b538
	ctx.lr = 0x82823924;
	sub_8282B538(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,488
	ctx.r3.s64 = 488;
	// bl 0x82833108
	ctx.lr = 0x8282396C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828239c0
	if (ctx.cr0.eq) goto loc_828239C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc368
	ctx.lr = 0x8282397C;
	sub_829BC368(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-9496
	ctx.r11.s64 = ctx.r11.s64 + -9496;
	// addi r10,r10,-9240
	ctx.r10.s64 = ctx.r10.s64 + -9240;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r23,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r23.u32);
	// stw r29,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r29.u32);
	// stw r29,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r29.u32);
	// stw r29,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r29.u32);
	// stw r29,440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 440, ctx.r29.u32);
	// stw r29,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r29.u32);
	// stw r26,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r26.u32);
	// stw r9,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r9.u32);
	// b 0x828239c4
	goto loc_828239C4;
loc_828239C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_828239C4:
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x828239d8
	if (ctx.cr0.eq) goto loc_828239D8;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x828239dc
	goto loc_828239DC;
loc_828239D8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828239DC:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x828239EC;
	sub_829B8EE8(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,1384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x828239FC;
	sub_829B8EE8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,1388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823A0C;
	sub_829B8EE8(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1008
	ctx.r3.s64 = ctx.r31.s64 + 1008;
	// bl 0x82a4efb0
	ctx.lr = 0x82823A1C;
	sub_82A4EFB0(ctx, base);
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x82833108
	ctx.lr = 0x82823A24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823a34
	if (ctx.cr0.eq) goto loc_82823A34;
	// bl 0x82835fb0
	ctx.lr = 0x82823A30;
	sub_82835FB0(ctx, base);
	// b 0x82823a38
	goto loc_82823A38;
loc_82823A34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82823A38:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r28,r31,600
	ctx.r28.s64 = ctx.r31.s64 + 600;
	// stw r3,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,668
	ctx.r3.s64 = 668;
	// bl 0x82833108
	ctx.lr = 0x82823A7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823a90
	if (ctx.cr0.eq) goto loc_82823A90;
	// bl 0x828dea60
	ctx.lr = 0x82823A88;
	sub_828DEA60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82823a94
	goto loc_82823A94;
loc_82823A90:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82823A94:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823AA8;
	sub_829B8EE8(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,532(r11)
	PPC_STORE_U32(ctx.r11.u32 + 532, ctx.r30.u32);
	// bl 0x828dec88
	ctx.lr = 0x82823AB8;
	sub_828DEC88(ctx, base);
	// stw r29,656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 656, ctx.r29.u32);
	// stw r29,648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 648, ctx.r29.u32);
	// stw r26,636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 636, ctx.r26.u32);
	// stw r29,640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 640, ctx.r29.u32);
	// stw r29,644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 644, ctx.r29.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82823b8c
	if (ctx.cr6.eq) goto loc_82823B8C;
	// li r3,584
	ctx.r3.s64 = 584;
	// bl 0x82833108
	ctx.lr = 0x82823AE4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82823af8
	if (ctx.cr0.eq) goto loc_82823AF8;
	// bl 0x828ccb18
	ctx.lr = 0x82823AF0;
	sub_828CCB18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82823afc
	goto loc_82823AFC;
loc_82823AF8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82823AFC:
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823B10;
	sub_829B8EE8(ctx, base);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// bl 0x828ccd68
	ctx.lr = 0x82823B34;
	sub_828CCD68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82823B3C;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82823b8c
	if (ctx.cr6.eq) goto loc_82823B8C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,23308
	ctx.r5.s64 = ctx.r11.s64 + 23308;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823B8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82823B8C:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829b9fe8
	ctx.lr = 0x82823B98;
	sub_829B9FE8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// addi r30,r11,23336
	ctx.r30.s64 = ctx.r11.s64 + 23336;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82824ab8
	ctx.lr = 0x82823BC8;
	sub_82824AB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82816528
	ctx.lr = 0x82823BD0;
	sub_82816528(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82823c08
	goto loc_82823C08;
loc_82823BE0:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x82833ea8
	ctx.lr = 0x82823BE8;
	sub_82833EA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82766940
	ctx.lr = 0x82823BF0;
	sub_82766940(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r4,1000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8708
	ctx.lr = 0x82823C04;
	sub_829B8708(ctx, base);
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
loc_82823C08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f8078
	ctx.lr = 0x82823C10;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82823be0
	if (ctx.cr0.eq) goto loc_82823BE0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r30,r11,20452
	ctx.r30.s64 = ctx.r11.s64 + 20452;
	// lwz r11,20456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20456);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82823c50
	if (!ctx.cr0.eq) goto loc_82823C50;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-6048
	ctx.r9.s64 = ctx.r9.s64 + -6048;
	// stw r11,20456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20456, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25784
	ctx.r3.s64 = ctx.r11.s64 + -25784;
	// bl 0x82a4c758
	ctx.lr = 0x82823C50;
	sub_82A4C758(ctx, base);
loc_82823C50:
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82823c98
	if (ctx.cr0.eq) goto loc_82823C98;
	// bl 0x824be760
	ctx.lr = 0x82823C74;
	sub_824BE760(ctx, base);
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
	ctx.lr = 0x82823C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82823c9c
	if (!ctx.cr0.eq) goto loc_82823C9C;
loc_82823C98:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82823C9C:
	// stfs f31,1368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// stw r29,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r29.u32);
	// li r3,488
	ctx.r3.s64 = 488;
	// bl 0x82833108
	ctx.lr = 0x82823CB0;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82823d10
	if (ctx.cr0.eq) goto loc_82823D10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc368
	ctx.lr = 0x82823CC0;
	sub_829BC368(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,28704
	ctx.r11.s64 = ctx.r11.s64 + 28704;
	// addi r10,r10,28960
	ctx.r10.s64 = ctx.r10.s64 + 28960;
	// li r9,36
	ctx.r9.s64 = 36;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r11,r30,396
	ctx.r11.s64 = ctx.r30.s64 + 396;
	// stw r29,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r29.u32);
	// stw r29,404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 404, ctx.r29.u32);
	// stw r9,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r9.u32);
	// stw r29,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r29.u32);
	// stw r29,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r29.u32);
	// stw r29,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r29.u32);
	// stw r29,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r29.u32);
	// stw r29,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r29.u32);
	// stw r29,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r29.u32);
	// b 0x82823d14
	goto loc_82823D14;
loc_82823D10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82823D14:
	// stw r4,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r4.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82823D24;
	sub_829B8EE8(ctx, base);
	// bl 0x82974650
	ctx.lr = 0x82823D28;
	sub_82974650(ctx, base);
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

__attribute__((alias("__imp__sub_82823D38"))) PPC_WEAK_FUNC(sub_82823D38);
PPC_FUNC_IMPL(__imp__sub_82823D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r30,r11,15852
	ctx.r30.s64 = ctx.r11.s64 + 15852;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82823D64;
	sub_8312E7DC(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82823D74;
	sub_8312E7DC(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r10,44
	ctx.r10.s64 = 44;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82823DE8"))) PPC_WEAK_FUNC(sub_82823DE8);
PPC_FUNC_IMPL(__imp__sub_82823DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82823DF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32125
	ctx.r9.s64 = -2105344000;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r30,r9,-20176
	ctx.r30.s64 = ctx.r9.s64 + -20176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// li r29,20
	ctx.r29.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,1000(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1000);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r31,r10,640
	ctx.r31.s64 = ctx.r10.s64 + 640;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// bl 0x82332d50
	ctx.lr = 0x82823E64;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82823e94
	if (ctx.cr0.eq) goto loc_82823E94;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82873b58
	ctx.lr = 0x82823E84;
	sub_82873B58(ctx, base);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82873b58
	ctx.lr = 0x82823E90;
	sub_82873B58(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82823E94:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8239d768
	ctx.lr = 0x82823E9C;
	sub_8239D768(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8239d768
	ctx.lr = 0x82823EA4;
	sub_8239D768(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82823EB0"))) PPC_WEAK_FUNC(sub_82823EB0);
PPC_FUNC_IMPL(__imp__sub_82823EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82823EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r11,-20176
	ctx.r8.s64 = ctx.r11.s64 + -20176;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r11,1000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// lwz r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82823f5c
	if (!ctx.cr6.gt) goto loc_82823F5C;
	// lwz r10,652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 652);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
loc_82823EE8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82823f08
	if (ctx.cr6.eq) goto loc_82823F08;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82823ee8
	if (ctx.cr6.lt) goto loc_82823EE8;
	// b 0x82823f5c
	goto loc_82823F5C;
loc_82823F08:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r27,r11,640
	ctx.r27.s64 = ctx.r11.s64 + 640;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82823f44
	if (!ctx.cr6.lt) goto loc_82823F44;
	// mulli r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 * 56;
	// subf r30,r31,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_82823F20:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x8239d768
	ctx.lr = 0x82823F30;
	sub_8239D768(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x82823F38;
	sub_8239D768(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// bne 0x82823f20
	if (!ctx.cr0.eq) goto loc_82823F20;
loc_82823F44:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82823F5C;
	sub_82332CA8(ctx, base);
loc_82823F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82823F68"))) PPC_WEAK_FUNC(sub_82823F68);
PPC_FUNC_IMPL(__imp__sub_82823F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82823F70;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824c1c28
	ctx.lr = 0x82823F88;
	sub_824C1C28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a46740
	ctx.lr = 0x82823F90;
	sub_82A46740(ctx, base);
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82823fc4
	if (ctx.cr6.eq) goto loc_82823FC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82823fb4
	if (!ctx.cr6.eq) goto loc_82823FB4;
	// stw r29,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r29.u32);
	// b 0x82823fc4
	goto loc_82823FC4;
loc_82823FB4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82823fc4
	if (!ctx.cr6.eq) goto loc_82823FC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
loc_82823FC4:
	// lwz r3,916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82823fe4
	if (ctx.cr6.eq) goto loc_82823FE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82823FE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82823FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82828ee8
	ctx.lr = 0x82823FF0;
	sub_82828EE8(ctx, base);
	// lfs f0,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x829b9fe8
	ctx.lr = 0x82824000;
	sub_829B9FE8(ctx, base);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824040
	if (ctx.cr6.eq) goto loc_82824040;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// bne 0x82824040
	if (!ctx.cr0.eq) goto loc_82824040;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r31,1416
	ctx.r30.s64 = ctx.r31.s64 + 1416;
	// addi r3,r11,24080
	ctx.r3.s64 = ctx.r11.s64 + 24080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82925ea0
	ctx.lr = 0x82824030;
	sub_82925EA0(ctx, base);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82824040;
	sub_82A4EFB0(ctx, base);
loc_82824040:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46740
	ctx.lr = 0x82824048;
	sub_82A46740(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f12,-25412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25412);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x82824068
	if (ctx.cr0.eq) goto loc_82824068;
	// ld r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 968);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x8282407c
	goto loc_8282407C;
loc_82824068:
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8282407C:
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f0,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x828240b8
	if (!ctx.cr6.gt) goto loc_828240B8;
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_828240B8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13028);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828240dc
	if (ctx.cr6.eq) goto loc_828240DC;
	// fdivs f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_828240DC:
	// ld r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 976);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r9,968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 968, ctx.r9.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r11,976(r31)
	PPC_STORE_U64(ctx.r31.u32 + 976, ctx.r11.u64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,988(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// bl 0x82766940
	ctx.lr = 0x82824120;
	sub_82766940(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a46740
	ctx.lr = 0x82824128;
	sub_82A46740(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824148
	if (ctx.cr6.eq) goto loc_82824148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82824600
	ctx.lr = 0x82824148;
	sub_82824600(ctx, base);
loc_82824148:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82927a30
	ctx.lr = 0x82824150;
	sub_82927A30(ctx, base);
	// lwz r3,1316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82824188
	if (ctx.cr6.eq) goto loc_82824188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82824188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282cd78
	ctx.lr = 0x82824190;
	sub_8282CD78(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824218
	if (ctx.cr6.eq) goto loc_82824218;
	// lwz r4,1312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828241c0
	if (ctx.cr6.eq) goto loc_828241C0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828241B8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x828241BC;
	sub_82409C40(ctx, base);
	// b 0x828241c4
	goto loc_828241C4;
loc_828241C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828241C4:
	// bl 0x82411b98
	ctx.lr = 0x828241C8;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82824218
	if (ctx.cr0.eq) goto loc_82824218;
	// lwz r10,1900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,932(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 932);
loc_828241E0:
	// slw r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x828241f0
	if (ctx.cr0.eq) goto loc_828241F0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_828241F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x828241e0
	if (!ctx.cr6.gt) goto loc_828241E0;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8282420c
	if (ctx.cr6.eq) goto loc_8282420C;
	// stfs f31,1368(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// b 0x82824218
	goto loc_82824218;
loc_8282420C:
	// lfs f0,1368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,1368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
loc_82824218:
	// lwz r11,928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282422c
	if (ctx.cr6.eq) goto loc_8282422C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
loc_8282422C:
	// lfs f0,924(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8282424c
	if (!ctx.cr6.gt) goto loc_8282424C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,924(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8282424c
	if (!ctx.cr6.lt) goto loc_8282424C;
	// stfs f31,924(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 924, temp.u32);
loc_8282424C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824260"))) PPC_WEAK_FUNC(sub_82824260);
PPC_FUNC_IMPL(__imp__sub_82824260) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8282428c
	if (!ctx.cr6.eq) goto loc_8282428C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-10424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10424);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8282429c
	goto loc_8282429C;
loc_8282428C:
	// lfs f0,924(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8282429c
	if (ctx.cr6.gt) goto loc_8282429C;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
loc_8282429C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f0,924(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 924, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828242b8
	if (ctx.cr6.eq) goto loc_828242B8;
	// stw r31,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r31.u32);
loc_828242B8:
	// lwz r4,1312(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828242d4
	if (ctx.cr6.eq) goto loc_828242D4;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828242CC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x828242D0;
	sub_82409C40(ctx, base);
	// b 0x828242d8
	goto loc_828242D8;
loc_828242D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_828242D8:
	// bl 0x82411b98
	ctx.lr = 0x828242DC;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828242f4
	if (ctx.cr0.eq) goto loc_828242F4;
	// lwz r11,1900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828242f4
	if (ctx.cr6.eq) goto loc_828242F4;
	// stw r31,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r31.u32);
loc_828242F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82824308"))) PPC_WEAK_FUNC(sub_82824308);
PPC_FUNC_IMPL(__imp__sub_82824308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r10,13024(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bne cr6,0x82824330
	if (!ctx.cr6.eq) goto loc_82824330;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82824340
	goto loc_82824340;
loc_82824330:
	// lwz r11,928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82824340
	if (ctx.cr6.gt) goto loc_82824340;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82824340:
	// stw r11,928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 928, ctx.r11.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282435c
	if (ctx.cr6.eq) goto loc_8282435C;
	// stw r31,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r31.u32);
loc_8282435C:
	// lwz r4,1312(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82824378
	if (ctx.cr6.eq) goto loc_82824378;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82824370;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82824374;
	sub_82409C40(ctx, base);
	// b 0x8282437c
	goto loc_8282437C;
loc_82824378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8282437C:
	// bl 0x82411b98
	ctx.lr = 0x82824380;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82824398
	if (ctx.cr0.eq) goto loc_82824398;
	// lwz r11,1900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82824398
	if (ctx.cr6.eq) goto loc_82824398;
	// stw r31,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r31.u32);
loc_82824398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828243B0"))) PPC_WEAK_FUNC(sub_828243B0);
PPC_FUNC_IMPL(__imp__sub_828243B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828243B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,1096
	ctx.r11.s64 = 1096;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r26,r30,r11
	ctx.r26.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82824488
	if (!ctx.cr6.eq) goto loc_82824488;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x8281aa78
	ctx.lr = 0x828243E4;
	sub_8281AA78(ctx, base);
	// bl 0x82802b38
	ctx.lr = 0x828243E8;
	sub_82802B38(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,1088
	ctx.r29.s64 = 1088;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwx r31,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82824460
	if (ctx.cr6.eq) goto loc_82824460;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_8282440C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282441C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82824438
	goto loc_82824438;
loc_82824420:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82824438:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82824420
	if (ctx.cr6.lt) goto loc_82824420;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8282440c
	if (!ctx.cr6.eq) goto loc_8282440C;
loc_82824460:
	// lwzx r3,r30,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82925df8
	ctx.lr = 0x82824468;
	sub_82925DF8(ctx, base);
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82824474
	if (ctx.cr0.eq) goto loc_82824474;
	// bl 0x829dbbb8
	ctx.lr = 0x82824474;
	sub_829DBBB8(ctx, base);
loc_82824474:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46760
	ctx.lr = 0x8282447C;
	sub_82A46760(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// xor r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// bl 0x82a4cd48
	ctx.lr = 0x82824488;
	sub_82A4CD48(ctx, base);
loc_82824488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824490"))) PPC_WEAK_FUNC(sub_82824490);
PPC_FUNC_IMPL(__imp__sub_82824490) {
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
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r31,13024(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// beq cr6,0x828244c8
	if (ctx.cr6.eq) goto loc_828244C8;
	// lwz r11,80(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_828244C8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828244d8
	if (ctx.cr6.eq) goto loc_828244D8;
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_828244D8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82332d50
	ctx.lr = 0x828244F8;
	sub_82332D50(ctx, base);
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282452c
	if (ctx.cr0.eq) goto loc_8282452C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8282452C:
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

__attribute__((alias("__imp__sub_82824540"))) PPC_WEAK_FUNC(sub_82824540);
PPC_FUNC_IMPL(__imp__sub_82824540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82824548;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r24,1000(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x82409b80
	ctx.lr = 0x82824568;
	sub_82409B80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828245ec
	if (ctx.cr0.eq) goto loc_828245EC;
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828245ec
	if (!ctx.cr6.eq) goto loc_828245EC;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828245f0
	if (!ctx.cr6.gt) goto loc_828245F0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82824590:
	// lwz r11,248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409b80
	ctx.lr = 0x828245A4;
	sub_82409B80(ctx, base);
	// and. r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828245f0
	if (ctx.cr0.eq) goto loc_828245F0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82845820
	ctx.lr = 0x828245C0;
	sub_82845820(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82824540
	ctx.lr = 0x828245CC;
	sub_82824540(ctx, base);
	// and. r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828245f0
	if (ctx.cr0.eq) goto loc_828245F0;
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82824590
	if (ctx.cr6.lt) goto loc_82824590;
	// b 0x828245f0
	goto loc_828245F0;
loc_828245EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828245F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824600"))) PPC_WEAK_FUNC(sub_82824600);
PPC_FUNC_IMPL(__imp__sub_82824600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82824608;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r4,1312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282463c
	if (ctx.cr6.eq) goto loc_8282463C;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82824630;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82824634;
	sub_82409C40(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x82824640
	goto loc_82824640;
loc_8282463C:
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
loc_82824640:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// bl 0x82837ff0
	ctx.lr = 0x8282466C;
	sub_82837FF0(ctx, base);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// lis r20,-31949
	ctx.r20.s64 = -2093809664;
	// li r18,1
	ctx.r18.s64 = 1;
	// addic. r23,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r23.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x8282478c
	if (ctx.cr0.lt) goto loc_8282478C;
	// rlwinm r24,r23,4,0,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r21,-32243
	ctx.r21.s64 = -2113077248;
loc_82824688:
	// lwz r11,576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,13024(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lwz r3,84(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x829b9720
	ctx.lr = 0x828246A4;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x828246A8;
	sub_82416348(ctx, base);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828246BC;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x828246C0;
	sub_82416348(ctx, base);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828246e0
	if (!ctx.cr6.eq) goto loc_828246E0;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_828246E0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82824758
	if (!ctx.cr6.gt) goto loc_82824758;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_828246F4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8282473c
	if (!ctx.cr6.eq) goto loc_8282473C;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282473c
	if (ctx.cr0.eq) goto loc_8282473C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_8282473C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828246f4
	if (ctx.cr6.lt) goto loc_828246F4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82824768
	if (!ctx.cr6.eq) goto loc_82824768;
loc_82824758:
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24640(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82824780
	if (ctx.cr6.lt) goto loc_82824780;
loc_82824768:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r30,564
	ctx.r3.s64 = ctx.r30.s64 + 564;
	// bl 0x82332ca8
	ctx.lr = 0x82824780;
	sub_82332CA8(ctx, base);
loc_82824780:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,-16
	ctx.r24.s64 = ctx.r24.s64 + -16;
	// bge 0x82824688
	if (!ctx.cr0.lt) goto loc_82824688;
loc_8282478C:
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82824848
	if (!ctx.cr6.gt) goto loc_82824848;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_828247A4:
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82824830
	if (ctx.cr6.eq) goto loc_82824830;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828247d4
	if (!ctx.cr6.eq) goto loc_828247D4;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x828247d4
	if (ctx.cr6.eq) goto loc_828247D4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x828361f0
	ctx.lr = 0x828247D4;
	sub_828361F0(ctx, base);
loc_828247D4:
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,1000(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r4,320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x82845820
	ctx.lr = 0x828247F4;
	sub_82845820(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82824830
	if (ctx.cr0.eq) goto loc_82824830;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82824830
	if (!ctx.cr6.eq) goto loc_82824830;
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// lfs f0,988(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82824830:
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828247a4
	if (ctx.cr6.lt) goto loc_828247A4;
loc_82824848:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8282492c
	if (ctx.cr6.eq) goto loc_8282492C;
	// lwz r11,1412(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282492c
	if (ctx.cr6.eq) goto loc_8282492C;
	// lwz r10,560(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824880
	if (ctx.cr6.eq) goto loc_82824880;
	// lwz r9,328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82824880
	if (ctx.cr6.eq) goto loc_82824880;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282492c
	if (!ctx.cr6.eq) goto loc_8282492C;
loc_82824880:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824904
	if (ctx.cr6.eq) goto loc_82824904;
	// lwz r4,320(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82824904
	if (ctx.cr6.eq) goto loc_82824904;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1000(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1000);
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82845820
	ctx.lr = 0x828248A8;
	sub_82845820(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282492c
	if (ctx.cr0.eq) goto loc_8282492C;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282492c
	if (ctx.cr0.eq) goto loc_8282492C;
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828248e0
	if (!ctx.cr6.eq) goto loc_828248E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82824540
	ctx.lr = 0x828248D8;
	sub_82824540(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282492c
	if (ctx.cr0.eq) goto loc_8282492C;
loc_828248E0:
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282492c
	if (!ctx.cr6.eq) goto loc_8282492C;
	// lwz r10,252(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82824900
	if (ctx.cr6.eq) goto loc_82824900;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282492c
	if (!ctx.cr6.eq) goto loc_8282492C;
loc_82824900:
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
loc_82824904:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282491C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// stw r18,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r18.u32);
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// stw r18,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r18.u32);
loc_8282492C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82824934;
	sub_8239D768(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824940"))) PPC_WEAK_FUNC(sub_82824940);
PPC_FUNC_IMPL(__imp__sub_82824940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82824948;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// beq cr6,0x82824a48
	if (ctx.cr6.eq) goto loc_82824A48;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82824968;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828249b0
	if (ctx.cr0.eq) goto loc_828249B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82824978;
	sub_82833180(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-24648
	ctx.r11.s64 = ctx.r11.s64 + -24648;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// b 0x828249b8
	goto loc_828249B8;
loc_828249B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828249B8:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833ab8
	ctx.lr = 0x828249CC;
	sub_82833AB8(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824a48
	if (ctx.cr6.eq) goto loc_82824A48;
	// lwz r4,1312(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828249fc
	if (ctx.cr6.eq) goto loc_828249FC;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828249F0;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x828249F4;
	sub_82409C40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82824a00
	goto loc_82824A00;
loc_828249FC:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82824A00:
	// lwz r11,560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82824a48
	if (!ctx.cr6.gt) goto loc_82824A48;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82824A14:
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82824a30
	if (ctx.cr6.eq) goto loc_82824A30;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828362f8
	ctx.lr = 0x82824A30;
	sub_828362F8(ctx, base);
loc_82824A30:
	// lwz r11,560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82824a14
	if (ctx.cr6.lt) goto loc_82824A14;
loc_82824A48:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82824a60
	if (ctx.cr6.eq) goto loc_82824A60;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82824a8c
	if (!ctx.cr6.eq) goto loc_82824A8C;
loc_82824A60:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824a8c
	if (ctx.cr6.eq) goto loc_82824A8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,656(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8276d7d8
	ctx.lr = 0x82824A8C;
	sub_8276D7D8(ctx, base);
loc_82824A8C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82824ab0
	if (ctx.cr6.eq) goto loc_82824AB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82824AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82824AB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824AB8"))) PPC_WEAK_FUNC(sub_82824AB8);
PPC_FUNC_IMPL(__imp__sub_82824AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82824AC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x82833108
	ctx.lr = 0x82824AF4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82824b4c
	if (ctx.cr0.eq) goto loc_82824B4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r22,1
	ctx.r22.s64 = 1;
	// bl 0x8233a258
	ctx.lr = 0x82824B10;
	sub_8233A258(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82848000
	ctx.lr = 0x82824B44;
	sub_82848000(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82824b50
	goto loc_82824B50;
loc_82824B4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82824B50:
	// clrlwi. r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82824b60
	if (ctx.cr0.eq) goto loc_82824B60;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82824B60;
	sub_82333960(ctx, base);
loc_82824B60:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82824B74;
	sub_82833A30(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824B80"))) PPC_WEAK_FUNC(sub_82824B80);
PPC_FUNC_IMPL(__imp__sub_82824B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82824B88;
	__savegprlr_21(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82a56fe0
	ctx.lr = 0x82824BC4;
	sub_82A56FE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a4e530
	ctx.lr = 0x82824BD8;
	sub_82A4E530(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r30,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r30.u8);
	// beq cr6,0x82824bf0
	if (ctx.cr6.eq) goto loc_82824BF0;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stbx r30,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u8);
loc_82824BF0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,25612
	ctx.r4.s64 = ctx.r11.s64 + 25612;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a4e980
	ctx.lr = 0x82824C04;
	sub_82A4E980(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r11,r11,-29248
	ctx.r11.s64 = ctx.r11.s64 + -29248;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82824c20
	if (ctx.cr6.eq) goto loc_82824C20;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82824c28
	goto loc_82824C28;
loc_82824C20:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82824C28:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82409058
	ctx.lr = 0x82824C30;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4e980
	ctx.lr = 0x82824C44;
	sub_82A4E980(ctx, base);
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82824c60
	if (ctx.cr6.eq) goto loc_82824C60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82824c60
	if (ctx.cr6.eq) goto loc_82824C60;
	// bl 0x82332db8
	ctx.lr = 0x82824C60;
	sub_82332DB8(ctx, base);
loc_82824C60:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82824c78
	if (ctx.cr6.eq) goto loc_82824C78;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a4e980
	ctx.lr = 0x82824C78;
	sub_82A4E980(ctx, base);
loc_82824C78:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82824C80;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82824ce8
	if (ctx.cr0.eq) goto loc_82824CE8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x82824C94;
	sub_8233A258(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// bl 0x82848000
	ctx.lr = 0x82824CC8;
	sub_82848000(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r11,r11,-6320
	ctx.r11.s64 = ctx.r11.s64 + -6320;
	// addi r10,r10,13768
	ctx.r10.s64 = ctx.r10.s64 + 13768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// b 0x82824cec
	goto loc_82824CEC;
loc_82824CE8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82824CEC:
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82824cfc
	if (ctx.cr0.eq) goto loc_82824CFC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82824CFC;
	sub_82333960(ctx, base);
loc_82824CFC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82824D10;
	sub_82833A30(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824D18"))) PPC_WEAK_FUNC(sub_82824D18);
PPC_FUNC_IMPL(__imp__sub_82824D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82824D20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82833108
	ctx.lr = 0x82824D3C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82824dc8
	if (ctx.cr0.eq) goto loc_82824DC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82824D54;
	sub_8233A258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82824D60;
	sub_82833180(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-24544
	ctx.r10.s64 = ctx.r10.s64 + -24544;
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// bl 0x82400b48
	ctx.lr = 0x82824DB4;
	sub_82400B48(ctx, base);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x82824DC0;
	sub_82333960(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82824dcc
	goto loc_82824DCC;
loc_82824DC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82824DCC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82824DDC;
	sub_82833A30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824DE8"))) PPC_WEAK_FUNC(sub_82824DE8);
PPC_FUNC_IMPL(__imp__sub_82824DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82824DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r3,28
	ctx.r3.s64 = 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r29,13024(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// bl 0x82833108
	ctx.lr = 0x82824E08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82824e50
	if (ctx.cr0.eq) goto loc_82824E50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x82824E1C;
	sub_82833180(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r10,r10,-24440
	ctx.r10.s64 = ctx.r10.s64 + -24440;
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82824e54
	goto loc_82824E54;
loc_82824E50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82824E54:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82824E60;
	sub_82833A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824E68"))) PPC_WEAK_FUNC(sub_82824E68);
PPC_FUNC_IMPL(__imp__sub_82824E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82824E70;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r27,13024(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
loc_82824E8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82824e8c
	if (!ctx.cr0.eq) goto loc_82824E8C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-23100
	ctx.r31.s64 = ctx.r11.s64 + -23100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a4d040
	ctx.lr = 0x82824EB4;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82824eec
	if (!ctx.cr0.eq) goto loc_82824EEC;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82824EC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82824ec0
	if (!ctx.cr6.eq) goto loc_82824EC0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82824ED4:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82824ed4
	if (!ctx.cr6.eq) goto loc_82824ED4;
loc_82824EEC:
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82824f2c
	if (!ctx.cr6.gt) goto loc_82824F2C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82824F0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x82824F18;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82824f0c
	if (ctx.cr6.lt) goto loc_82824F0C;
loc_82824F2C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82824f50
	if (ctx.cr6.eq) goto loc_82824F50;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82824F50;
	sub_82332C38(ctx, base);
loc_82824F50:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82824F5C;
	sub_8233A258(ctx, base);
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82400b48
	ctx.lr = 0x82824F6C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82824F74;
	sub_82333960(ctx, base);
	// stw r26,1264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1264, ctx.r26.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82824F80"))) PPC_WEAK_FUNC(sub_82824F80);
PPC_FUNC_IMPL(__imp__sub_82824F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82824F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bl 0x82833108
	ctx.lr = 0x82824F9C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82824fe4
	if (ctx.cr0.eq) goto loc_82824FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x82824FB0;
	sub_82833180(ctx, base);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-9680
	ctx.r10.s64 = ctx.r10.s64 + -9680;
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82824fe8
	goto loc_82824FE8;
loc_82824FE4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82824FE8:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833ab8
	ctx.lr = 0x82824FFC;
	sub_82833AB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825008"))) PPC_WEAK_FUNC(sub_82825008);
PPC_FUNC_IMPL(__imp__sub_82825008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82825010;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,13024(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bl 0x828166e0
	ctx.lr = 0x8282502C;
	sub_828166E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82825034;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x82833108
	ctx.lr = 0x82825044;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82825094
	if (ctx.cr0.eq) goto loc_82825094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x82825058;
	sub_82833180(ctx, base);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// addi r10,r10,-24320
	ctx.r10.s64 = ctx.r10.s64 + -24320;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// b 0x82825098
	goto loc_82825098;
loc_82825094:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82825098:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828250A4;
	sub_82833A30(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828250B0"))) PPC_WEAK_FUNC(sub_828250B0);
PPC_FUNC_IMPL(__imp__sub_828250B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828250B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// bl 0x823928a0
	ctx.lr = 0x828250E4;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82825140
	if (ctx.cr0.eq) goto loc_82825140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828250FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x82825230
	ctx.lr = 0x82825140;
	sub_82825230(ctx, base);
loc_82825140:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825148"))) PPC_WEAK_FUNC(sub_82825148);
PPC_FUNC_IMPL(__imp__sub_82825148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82825150;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823928a0
	ctx.lr = 0x82825174;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82825184
	if (!ctx.cr0.eq) goto loc_82825184;
loc_8282517C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82825224
	goto loc_82825224;
loc_82825184:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82825194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828251e4
	if (ctx.cr0.eq) goto loc_828251E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824381f0
	ctx.lr = 0x828251A4;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828251e4
	if (ctx.cr0.eq) goto loc_828251E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828251C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828251e4
	if (!ctx.cr0.eq) goto loc_828251E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828251E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8282517c
	goto loc_8282517C;
loc_828251E4:
	// lwz r6,244(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82825230
	ctx.lr = 0x82825224;
	sub_82825230(ctx, base);
loc_82825224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825230"))) PPC_WEAK_FUNC(sub_82825230);
PPC_FUNC_IMPL(__imp__sub_82825230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82825238;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82416348
	ctx.lr = 0x82825258;
	sub_82416348(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r24,276(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82825278
	if (!ctx.cr6.eq) goto loc_82825278;
	// lwz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828252a0
	if (ctx.cr6.eq) goto loc_828252A0;
loc_82825278:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x828252a0
	if (!ctx.cr6.eq) goto loc_828252A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82825298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82825328
	goto loc_82825328;
loc_828252A0:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// beq cr6,0x828252e4
	if (ctx.cr6.eq) goto loc_828252E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828252e4
	if (ctx.cr6.eq) goto loc_828252E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c4710
	ctx.lr = 0x828252E4;
	sub_829C4710(ctx, base);
loc_828252E4:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82825324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82825328:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825330"))) PPC_WEAK_FUNC(sub_82825330);
PPC_FUNC_IMPL(__imp__sub_82825330) {
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
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ori r7,r7,1024
	ctx.r7.u64 = ctx.r7.u64 | 1024;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x828253c8
	ctx.lr = 0x8282536C;
	sub_828253C8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82825388
	if (ctx.cr0.eq) goto loc_82825388;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82825384;
	sub_82A4EA80(ctx, base);
	// b 0x8282539c
	goto loc_8282539C;
loc_82825388:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r10.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
loc_8282539C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828253A4;
	sub_82332DB8(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828253C8"))) PPC_WEAK_FUNC(sub_828253C8);
PPC_FUNC_IMPL(__imp__sub_828253C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828253D0;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r12,-4608
	ctx.r12.s64 = -4608;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// bl 0x82ec4914
	ctx.lr = 0x82825400;
	sub_82EC4914(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r5,4608
	ctx.r5.s64 = 4608;
	// lwz r4,1004(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1004);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a45878
	ctx.lr = 0x8282541C;
	sub_82A45878(ctx, base);
	// andi. r11,r30,8347
	ctx.r11.u64 = ctx.r30.u64 & 8347;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828254cc
	if (ctx.cr0.eq) goto loc_828254CC;
	// lwz r3,644(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 644);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828254cc
	if (ctx.cr6.eq) goto loc_828254CC;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r6,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x828d7790
	ctx.lr = 0x82825464;
	sub_828D7790(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq 0x828254c0
	if (ctx.cr0.eq) goto loc_828254C0;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82825474:
	// cmpwi cr6,r24,64
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 64, ctx.xer);
	// bge cr6,0x828254c0
	if (!ctx.cr6.lt) goto loc_828254C0;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828254a8
	if (ctx.cr6.eq) goto loc_828254A8;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828254A0;
	sub_82A4EA80(ctx, base);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
loc_828254A8:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82825474
	if (!ctx.cr6.eq) goto loc_82825474;
	// b 0x828254c0
	goto loc_828254C0;
loc_828254B8:
	// lwz r29,68(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x828254C0;
	sub_82332DB8(ctx, base);
loc_828254C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x828254b8
	if (!ctx.cr6.eq) goto loc_828254B8;
loc_828254CC:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x828255e4
	if (ctx.cr6.eq) goto loc_828255E4;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r6,r11,8272
	ctx.r6.s64 = ctx.r11.s64 + 8272;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a4d558
	ctx.lr = 0x828254F0;
	sub_82A4D558(ctx, base);
	// lis r11,910
	ctx.r11.s64 = 59637760;
	// mulli r3,r24,72
	ctx.r3.s64 = ctx.r24.s64 * 72;
	// ori r11,r11,14563
	ctx.r11.u64 = ctx.r11.u64 | 14563;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82825508
	if (!ctx.cr6.gt) goto loc_82825508;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82825508:
	// bl 0x82333900
	ctx.lr = 0x8282550C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82825590
	if (ctx.cr0.eq) goto loc_82825590;
	// addic. r10,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r10.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x82825588
	if (ctx.cr0.lt) goto loc_82825588;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f13,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_82825530:
	// stfs f0,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,-16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfs f0,-8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r22,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// stw r22,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r22.u32);
	// stw r22,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r22.u32);
	// stw r22,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r22.u32);
	// stw r22,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r22.u32);
	// stw r22,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r22.u32);
	// stw r22,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r22.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bge 0x82825530
	if (!ctx.cr0.lt) goto loc_82825530;
loc_82825588:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82825594
	goto loc_82825594;
loc_82825590:
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_82825594:
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x828255e4
	if (!ctx.cr6.gt) goto loc_828255E4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r30,r27,68
	ctx.r30.s64 = ctx.r27.s64 + 68;
loc_828255A8:
	// addi r3,r30,-68
	ctx.r3.s64 = ctx.r30.s64 + -68;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828255B8;
	sub_82A4EA80(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828255cc
	if (ctx.cr6.lt) goto loc_828255CC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_828255CC:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x828255a8
	if (ctx.cr6.lt) goto loc_828255A8;
loc_828255E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = ctx.r31.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828255F0"))) PPC_WEAK_FUNC(sub_828255F0);
PPC_FUNC_IMPL(__imp__sub_828255F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828255F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x828256a8
	if (ctx.cr0.eq) goto loc_828256A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,644(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// bl 0x828d7608
	ctx.lr = 0x8282563C;
	sub_828D7608(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828256a8
	if (ctx.cr0.eq) goto loc_828256A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82825654;
	sub_82A4EA80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82825658:
	// lwz r29,68(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x82825660;
	sub_82332DB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82825658
	if (!ctx.cr6.eq) goto loc_82825658;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x8282567C;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8282569c
	if (ctx.cr0.eq) goto loc_8282569C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82825694;
	sub_82A4EA80(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// b 0x828256a0
	goto loc_828256A0;
loc_8282569C:
	// li r27,0
	ctx.r27.s64 = 0;
loc_828256A0:
	// rlwinm. r11,r26,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8282573c
	if (!ctx.cr0.eq) goto loc_8282573C;
loc_828256A8:
	// lwz r29,644(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 644);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,1552(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1552);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// ble cr6,0x82825728
	if (!ctx.cr6.gt) goto loc_82825728;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828256F4:
	// lwz r11,1548(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1548);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x828d84d0
	ctx.lr = 0x8282570C;
	sub_828D84D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82825728
	if (!ctx.cr0.eq) goto loc_82825728;
	// lwz r11,1552(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1552);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828256f4
	if (ctx.cr6.lt) goto loc_828256F4;
loc_82825728:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82825738
	if (ctx.cr6.eq) goto loc_82825738;
	// stw r3,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r3.u32);
	// b 0x8282573c
	goto loc_8282573C;
loc_82825738:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8282573C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825748"))) PPC_WEAK_FUNC(sub_82825748);
PPC_FUNC_IMPL(__imp__sub_82825748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82825750;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61734
	ctx.lr = 0x82825758;
	__savefpr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,620(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r8,624(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,628(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lwz r29,13024(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13024);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// bl 0x829bed50
	ctx.lr = 0x828257B4;
	sub_829BED50(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82825860
	if (ctx.cr0.eq) goto loc_82825860;
	// lfs f0,376(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,368(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,368(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,372(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,372(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,376(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 376);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r4,368
	ctx.r11.s64 = ctx.r4.s64 + 368;
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82825834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f23,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f23.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
loc_82825860:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f24,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f25,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f25.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f26,80(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stfs f25,84(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f24,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r8,r8,10390
	ctx.r8.u64 = ctx.r8.u64 | 10390;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x828258FC;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825984
	if (!ctx.cr0.eq) goto loc_82825984;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f13,f23
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
	// fsubs f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fadds f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// stfs f27,88(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82825998
	if (ctx.cr6.eq) goto loc_82825998;
	// lwz r11,816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825998
	if (ctx.cr6.eq) goto loc_82825998;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,644(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828d7608
	ctx.lr = 0x82825968;
	sub_828D7608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82825998
	if (ctx.cr0.eq) goto loc_82825998;
loc_82825970:
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x82825978;
	sub_82332DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82825970
	if (!ctx.cr6.eq) goto loc_82825970;
loc_82825984:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82825988:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61780
	ctx.lr = 0x82825994;
	__restfpr_23(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82825998:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// fsubs f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// fsubs f13,f28,f25
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// fsubs f12,f27,f24
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f24.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stfs f31,256(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stfs f30,260(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828264e0
	ctx.lr = 0x82825A2C;
	sub_828264E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824381f0
	ctx.lr = 0x82825A34;
	sub_824381F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82825a4c
	if (ctx.cr0.eq) goto loc_82825A4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82825A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82825A4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82825988
	goto loc_82825988;
}

__attribute__((alias("__imp__sub_82825A58"))) PPC_WEAK_FUNC(sub_82825A58);
PPC_FUNC_IMPL(__imp__sub_82825A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x82a4cd78
	ctx.lr = 0x82825A78;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f1,f13,f0,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825AB8"))) PPC_WEAK_FUNC(sub_82825AB8);
PPC_FUNC_IMPL(__imp__sub_82825AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82825ae0
	if (!ctx.cr6.gt) goto loc_82825AE0;
	// b 0x82825b10
	goto loc_82825B10;
loc_82825AE0:
	// bl 0x82a4cd78
	ctx.lr = 0x82825AE4;
	sub_82A4CD78(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twlgei r10,-1
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82825B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82825B28"))) PPC_WEAK_FUNC(sub_82825B28);
PPC_FUNC_IMPL(__imp__sub_82825B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82825B30;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61738
	ctx.lr = 0x82825B38;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f25,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f25.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stfs f25,164(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stfs f25,168(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r29,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r29.u32);
	// stfs f25,172(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// stfs f25,180(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// stfs f25,188(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// bl 0x8282a528
	ctx.lr = 0x82825BB4;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825bc4
	if (!ctx.cr0.eq) goto loc_82825BC4;
loc_82825BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82825e8c
	goto loc_82825E8C;
loc_82825BC4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82825be8
	if (!ctx.cr6.eq) goto loc_82825BE8;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x82825be8
	if (!ctx.cr6.eq) goto loc_82825BE8;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// beq cr6,0x82825e88
	if (ctx.cr6.eq) goto loc_82825E88;
loc_82825BE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r26,8(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// bl 0x8282a5b0
	ctx.lr = 0x82825C1C;
	sub_8282A5B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825bbc
	if (!ctx.cr0.eq) goto loc_82825BBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825e88
	if (ctx.cr6.eq) goto loc_82825E88;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lfs f29,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f28,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f27,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,16364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f24.f64 = double(temp.f32);
	// lfs f26,18008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18008);
	ctx.f26.f64 = double(temp.f32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_82825C80:
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82825C84:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bge cr6,0x82825d28
	if (!ctx.cr6.lt) goto loc_82825D28;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fmuls f30,f0,f26
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f31,f0,f26
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fadds f0,f28,f31
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8282a528
	ctx.lr = 0x82825CF4;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825d28
	if (!ctx.cr0.eq) goto loc_82825D28;
	// fmuls f0,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f24.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f31,f24
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f24.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_82825D28:
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82825c84
	if (ctx.cr6.lt) goto loc_82825C84;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x82825c80
	if (ctx.cr6.lt) goto loc_82825C80;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82825e88
	if (ctx.cr6.eq) goto loc_82825E88;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r29,r11,24724
	ctx.r29.s64 = ctx.r11.s64 + 24724;
	// bne cr6,0x82825da4
	if (!ctx.cr6.eq) goto loc_82825DA4;
	// lfs f0,13512(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 13512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fsubs f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_82825DA4:
	// stfs f25,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f25,140(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82825330
	ctx.lr = 0x82825DD4;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82825e88
	if (!ctx.cr6.eq) goto loc_82825E88;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8282a528
	ctx.lr = 0x82825DF4;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825e88
	if (!ctx.cr0.eq) goto loc_82825E88;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f28,f13
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fsubs f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,24708
	ctx.r8.s64 = 24708;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x82825E60;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825bbc
	if (ctx.cr6.eq) goto loc_82825BBC;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82825bbc
	goto loc_82825BBC;
loc_82825E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82825E8C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61784
	ctx.lr = 0x82825E98;
	__restfpr_24(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825EA0"))) PPC_WEAK_FUNC(sub_82825EA0);
PPC_FUNC_IMPL(__imp__sub_82825EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82825EA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82825f00
	if (ctx.cr6.eq) goto loc_82825F00;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82825f00
	if (!ctx.cr6.eq) goto loc_82825F00;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825f04
	if (ctx.cr6.eq) goto loc_82825F04;
loc_82825F00:
	// bl 0x82919328
	ctx.lr = 0x82825F04;
	sub_82919328(ctx, base);
loc_82825F04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82825f14
	if (ctx.cr6.eq) goto loc_82825F14;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82825f1c
	goto loc_82825F1C;
loc_82825F14:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r11,r11,13868
	ctx.r11.s64 = ctx.r11.s64 + 13868;
loc_82825F1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x828f8cc0
	ctx.lr = 0x82825F54;
	sub_828F8CC0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82825fe0
	if (!ctx.cr6.gt) goto loc_82825FE0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82825F68:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82825f84
	if (ctx.cr0.eq) goto loc_82825F84;
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82825f88
	goto loc_82825F88;
loc_82825F84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82825F88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82825fb8
	if (ctx.cr6.eq) goto loc_82825FB8;
	// lwz r11,1716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82825fb8
	if (ctx.cr6.eq) goto loc_82825FB8;
	// bl 0x8257c780
	ctx.lr = 0x82825FA0;
	sub_8257C780(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,1728
	ctx.r3.s64 = ctx.r31.s64 + 1728;
	// bl 0x827f0270
	ctx.lr = 0x82825FB0;
	sub_827F0270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82825fd0
	if (!ctx.cr0.eq) goto loc_82825FD0;
loc_82825FB8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82825f68
	if (ctx.cr6.lt) goto loc_82825F68;
	// b 0x82825fe0
	goto loc_82825FE0;
loc_82825FD0:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82825fe0
	if (ctx.cr6.eq) goto loc_82825FE0;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82825FE0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239d768
	ctx.lr = 0x82825FE8;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82825FF8"))) PPC_WEAK_FUNC(sub_82825FF8);
PPC_FUNC_IMPL(__imp__sub_82825FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82826000;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// lwz r28,13024(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828264cc
	if (!ctx.cr6.eq) goto loc_828264CC;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828264cc
	if (ctx.cr6.eq) goto loc_828264CC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8282607c
	if (ctx.cr6.eq) goto loc_8282607C;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8282607c
	if (!ctx.cr6.eq) goto loc_8282607C;
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282607c
	if (!ctx.cr6.eq) goto loc_8282607C;
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282607c
	if (!ctx.cr6.eq) goto loc_8282607C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828264d0
	goto loc_828264D0;
loc_8282607C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r8,620(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r7,624(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r6,628(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r25,716(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne cr6,0x82826118
	if (!ctx.cr6.eq) goto loc_82826118;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828260e4
	if (!ctx.cr6.eq) goto loc_828260E4;
	// lwz r11,892(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826118
	if (ctx.cr6.eq) goto loc_82826118;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82826118
	if (ctx.cr6.eq) goto loc_82826118;
loc_828260E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82825b28
	ctx.lr = 0x82826110;
	sub_82825B28(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82826158
	if (ctx.cr0.eq) goto loc_82826158;
loc_82826118:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82826158
	if (!ctx.cr6.eq) goto loc_82826158;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82826158
	if (!ctx.cr6.eq) goto loc_82826158;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,656(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282a950
	ctx.lr = 0x82826150;
	sub_8282A950(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82826158:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82826188
	if (!ctx.cr6.eq) goto loc_82826188;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82826188
	if (!ctx.cr6.eq) goto loc_82826188;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x828261b4
	if (ctx.cr6.eq) goto loc_828261B4;
loc_82826188:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x828261b4
	if (!ctx.cr6.eq) goto loc_828261B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828261A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828261b4
	if (!ctx.cr0.eq) goto loc_828261B4;
loc_828261AC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x828264d0
	goto loc_828264D0;
loc_828261B4:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82826428
	if (ctx.cr6.eq) goto loc_82826428;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82826234
	if (!ctx.cr6.eq) goto loc_82826234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828261F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82826234
	if (!ctx.cr6.eq) goto loc_82826234;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82826234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282624C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bee20
	ctx.lr = 0x82826254;
	sub_829BEE20(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8282629c
	if (ctx.cr0.eq) goto loc_8282629C;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8258d438
	ctx.lr = 0x82826284;
	sub_8258D438(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282629C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282629C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// bl 0x829bee20
	ctx.lr = 0x828262F0;
	sub_829BEE20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82826330
	if (ctx.cr0.eq) goto loc_82826330;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,320(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82826334
	goto loc_82826334;
loc_82826330:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82826334:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,32748(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,600(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 600);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,16607
	ctx.r8.s64 = 16607;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x82825330
	ctx.lr = 0x828263B0;
	sub_82825330(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 140);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828263E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82826428
	if (!ctx.cr6.eq) goto loc_82826428;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82826428:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x828261ac
	if (!ctx.cr6.eq) goto loc_828261AC;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826458
	if (ctx.cr6.eq) goto loc_82826458;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826458
	if (ctx.cr6.eq) goto loc_82826458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c5d20
	ctx.lr = 0x82826450;
	sub_829C5D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c5da8
	ctx.lr = 0x82826458;
	sub_829C5DA8(ctx, base);
loc_82826458:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r11,r11,4232
	ctx.r11.s64 = ctx.r11.s64 + 4232;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x82826474;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828264b8
	if (ctx.cr0.eq) goto loc_828264B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82826484;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r10,r10,26056
	ctx.r10.s64 = ctx.r10.s64 + 26056;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x828264bc
	goto loc_828264BC;
loc_828264B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828264BC:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828264C8;
	sub_82833A30(ctx, base);
	// b 0x828261ac
	goto loc_828261AC;
loc_828264CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828264D0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828264E0"))) PPC_WEAK_FUNC(sub_828264E0);
PPC_FUNC_IMPL(__imp__sub_828264E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x828264E8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61730
	ctx.lr = 0x828264F0;
	__savefpr_22(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82826520
	if (ctx.cr0.eq) goto loc_82826520;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82826b64
	goto loc_82826B64;
loc_82826520:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824c1c28
	ctx.lr = 0x82826528;
	sub_824C1C28(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a46740
	ctx.lr = 0x82826530;
	sub_82A46740(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r22,64(r21)
	PPC_STORE_U32(ctx.r21.u32 + 64, ctx.r22.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f22,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f22.f64 = double(temp.f32);
	// stfs f22,36(r21)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r21.u32 + 36, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,-10428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10428);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x828265d4
	if (!ctx.cr6.lt) goto loc_828265D4;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x828265d4
	if (!ctx.cr6.lt) goto loc_828265D4;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x828265d4
	if (!ctx.cr6.lt) goto loc_828265D4;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,656(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x828265bc
	if (!ctx.cr6.eq) goto loc_828265BC;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x828265bc
	if (!ctx.cr6.eq) goto loc_828265BC;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828265bc
	if (!ctx.cr6.eq) goto loc_828265BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82826b64
	goto loc_82826B64;
loc_828265BC:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fmr f23,f30
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f30.f64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82826620
	goto loc_82826620;
loc_828265D4:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f23,f11
	ctx.f23.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f22,f23
	ctx.f11.f64 = double(float(ctx.f22.f64 / ctx.f23.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82826620:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r26,r27,0,30,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r20,r27,31
	ctx.r20.u64 = ctx.r27.u32 & 0x1;
	// lfs f31,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// fmuls f28,f10,f31
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// fmuls f29,f11,f31
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// fmuls f27,f9,f31
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// fadds f25,f12,f28
	ctx.f25.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// fadds f26,f0,f29
	ctx.f26.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f24,f13,f27
	ctx.f24.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// bl 0x829bee20
	ctx.lr = 0x82826684;
	sub_829BEE20(ctx, base);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82826930
	if (!ctx.cr0.eq) goto loc_82826930;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828266ac
	if (ctx.cr6.eq) goto loc_828266AC;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828266b8
	if (!ctx.cr6.eq) goto loc_828266B8;
loc_828266AC:
	// lwz r10,844(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82826930
	if (ctx.cr6.eq) goto loc_82826930;
loc_828266B8:
	// fcmpu cr6,f23,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f30.f64);
	// beq cr6,0x82826930
	if (ctx.cr6.eq) goto loc_82826930;
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// beq 0x828266d0
	if (ctx.cr0.eq) goto loc_828266D0;
	// li r30,2048
	ctx.r30.s64 = 2048;
loc_828266D0:
	// rlwinm. r10,r27,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828266dc
	if (ctx.cr0.eq) goto loc_828266DC;
	// oris r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 65536;
loc_828266DC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828266f4
	if (ctx.cr6.eq) goto loc_828266F4;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828266f4
	if (ctx.cr6.eq) goto loc_828266F4;
	// ori r30,r30,27
	ctx.r30.u64 = ctx.r30.u64 | 27;
loc_828266F4:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826704
	if (ctx.cr6.eq) goto loc_82826704;
	// ori r30,r30,24710
	ctx.r30.u64 = ctx.r30.u64 | 24710;
loc_82826704:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8282671c
	if (ctx.cr6.eq) goto loc_8282671C;
	// lwz r10,368(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// lwz r9,372(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// lwz r8,376(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// b 0x82826728
	goto loc_82826728;
loc_8282671C:
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
loc_82826728:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne cr6,0x82826754
	if (!ctx.cr6.eq) goto loc_82826754;
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826930
	if (ctx.cr6.eq) goto loc_82826930;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826930
	if (ctx.cr6.eq) goto loc_82826930;
loc_82826754:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r11,600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282676C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// fadds f12,f12,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828253c8
	ctx.lr = 0x828267B0;
	sub_828253C8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r22.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r22.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r22,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r22.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stfs f22,180(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82826810;
	sub_82A4EA80(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x828268a8
	if (ctx.cr6.eq) goto loc_828268A8;
loc_8282681C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82826840
	if (ctx.cr6.eq) goto loc_82826840;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8282682C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82826888
	if (ctx.cr6.eq) goto loc_82826888;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8282682c
	if (!ctx.cr6.eq) goto loc_8282682C;
loc_82826840:
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82826864
	if (ctx.cr0.eq) goto loc_82826864;
loc_82826850:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82826888
	if (ctx.cr6.eq) goto loc_82826888;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82826850
	if (!ctx.cr6.eq) goto loc_82826850;
loc_82826864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82826898
	if (!ctx.cr0.eq) goto loc_82826898;
loc_82826888:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8282681c
	if (!ctx.cr6.eq) goto loc_8282681C;
	// b 0x828268a8
	goto loc_828268A8;
loc_82826898:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828268A8;
	sub_82A4EA80(ctx, base);
loc_828268A8:
	// lfs f0,36(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x82826930
	if (!ctx.cr6.lt) goto loc_82826930;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82826930
	if (!ctx.cr6.eq) goto loc_82826930;
	// fadds f13,f23,f31
	ctx.f13.f64 = double(float(ctx.f23.f64 + ctx.f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x828268e8
	if (ctx.cr6.gt) goto loc_828268E8;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,36(r21)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r21.u32 + 36, temp.u32);
	// b 0x82826920
	goto loc_82826920;
loc_828268E8:
	// fmuls f12,f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f0.f64));
	// fmuls f11,f0,f26
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fdivs f0,f13,f23
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f23.f64));
	// stfs f0,36(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 36, temp.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_82826920:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82826930:
	// lfs f11,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f10,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282697C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828269c4
	if (ctx.cr6.eq) goto loc_828269C4;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x8258d438
	ctx.lr = 0x828269AC;
	sub_8258D438(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828269C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828269C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828269DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r29,r27,0,27,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82826a48
	if (!ctx.cr0.eq) goto loc_82826A48;
	// lwz r4,64(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82826a48
	if (ctx.cr6.eq) goto loc_82826A48;
	// lwz r11,44(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826a48
	if (ctx.cr6.eq) goto loc_82826A48;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82826A00:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82826a48
	if (ctx.cr6.eq) goto loc_82826A48;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82826a00
	if (!ctx.cr6.eq) goto loc_82826A00;
	// addi r30,r21,12
	ctx.r30.s64 = ctx.r21.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x829c6080
	ctx.lr = 0x82826A24;
	sub_829C6080(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82826a48
	if (ctx.cr0.eq) goto loc_82826A48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,64(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 980);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82826A48:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82826b28
	if (!ctx.cr6.eq) goto loc_82826B28;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82826a94
	if (!ctx.cr6.eq) goto loc_82826A94;
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826a70
	if (ctx.cr6.eq) goto loc_82826A70;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82826b28
	if (!ctx.cr6.eq) goto loc_82826B28;
loc_82826A70:
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82826b28
	if (!ctx.cr6.eq) goto loc_82826B28;
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826b28
	if (ctx.cr6.eq) goto loc_82826B28;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826b28
	if (ctx.cr6.eq) goto loc_82826B28;
loc_82826A94:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82826b38
	if (ctx.cr6.eq) goto loc_82826B38;
loc_82826AA0:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82826b28
	if (!ctx.cr6.lt) goto loc_82826B28;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x829bee20
	ctx.lr = 0x82826AB8;
	sub_829BEE20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82826ae0
	if (ctx.cr6.eq) goto loc_82826AE0;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82826ACC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82826b1c
	if (ctx.cr6.eq) goto loc_82826B1C;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82826acc
	if (!ctx.cr6.eq) goto loc_82826ACC;
loc_82826AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82826b1c
	if (!ctx.cr0.eq) goto loc_82826B1C;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82826b1c
	if (ctx.cr6.eq) goto loc_82826B1C;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c5b00
	ctx.lr = 0x82826B1C;
	sub_829C5B00(ctx, base);
loc_82826B1C:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82826aa0
	if (!ctx.cr6.eq) goto loc_82826AA0;
loc_82826B28:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82826b38
	if (ctx.cr6.eq) goto loc_82826B38;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332db8
	ctx.lr = 0x82826B38;
	sub_82332DB8(ctx, base);
loc_82826B38:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82826b48
	if (!ctx.cr6.eq) goto loc_82826B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c5d20
	ctx.lr = 0x82826B48;
	sub_829C5D20(ctx, base);
loc_82826B48:
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82a46740
	ctx.lr = 0x82826B50;
	sub_82A46740(ctx, base);
	// lfs f0,36(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82826b64
	if (ctx.cr6.gt) goto loc_82826B64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82826B64:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a6177c
	ctx.lr = 0x82826B70;
	__restfpr_22(ctx, base);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826B78"))) PPC_WEAK_FUNC(sub_82826B78);
PPC_FUNC_IMPL(__imp__sub_82826B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82826B80;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82826c0c
	if (!ctx.cr0.eq) goto loc_82826C0C;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82826bd8
	if (ctx.cr6.eq) goto loc_82826BD8;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x82826be0
	goto loc_82826BE0;
loc_82826BD8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82826BE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x82826BE8;
	sub_82409058(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82826c04
	if (ctx.cr6.eq) goto loc_82826C04;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82826c04
	if (ctx.cr6.eq) goto loc_82826C04;
	// bl 0x82332db8
	ctx.lr = 0x82826C04;
	sub_82332DB8(ctx, base);
loc_82826C04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82826d24
	goto loc_82826D24;
loc_82826C0C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c2358
	ctx.lr = 0x82826C18;
	sub_828C2358(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r29,956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 956, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 960, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82826c88
	if (ctx.cr0.eq) goto loc_82826C88;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82826c88
	if (!ctx.cr6.gt) goto loc_82826C88;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82826C58:
	// lwz r11,260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82826c70
	if (ctx.cr6.eq) goto loc_82826C70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828361f0
	ctx.lr = 0x82826C70;
	sub_828361F0(ctx, base);
loc_82826C70:
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82826c58
	if (ctx.cr6.lt) goto loc_82826C58;
loc_82826C88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r31,r31,808
	ctx.r31.s64 = ctx.r31.s64 + 808;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82826ce0
	if (!ctx.cr6.gt) goto loc_82826CE0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82826CC4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82826d08
	if (ctx.cr6.eq) goto loc_82826D08;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82826cc4
	if (ctx.cr6.lt) goto loc_82826CC4;
loc_82826CE0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82826CF4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82826d08
	if (ctx.cr0.eq) goto loc_82826D08;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82826D08:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82826d20
	if (!ctx.cr6.eq) goto loc_82826D20;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r10,6280
	ctx.r10.s64 = ctx.r10.s64 + 6280;
	// stw r11,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r11.u32);
loc_82826D20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82826D24:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826D30"))) PPC_WEAK_FUNC(sub_82826D30);
PPC_FUNC_IMPL(__imp__sub_82826D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82826D38;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,100
	ctx.r4.s64 = ctx.r4.s64 + 100;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x82826D50;
	sub_823339B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82826d7c
	if (!ctx.cr0.eq) goto loc_82826D7C;
loc_82826D74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82826e14
	goto loc_82826E14;
loc_82826D7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r26,664(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r27,660(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r6,r30,620
	ctx.r6.s64 = ctx.r30.s64 + 620;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r28,656(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// bl 0x828250b0
	ctx.lr = 0x82826DDC;
	sub_828250B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82826d74
	if (ctx.cr0.eq) goto loc_82826D74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82826d74
	if (ctx.cr0.eq) goto loc_82826D74;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
loc_82826E14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826E20"))) PPC_WEAK_FUNC(sub_82826E20);
PPC_FUNC_IMPL(__imp__sub_82826E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82826E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82411b98
	ctx.lr = 0x82826E38;
	sub_82411B98(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82826ea8
	if (ctx.cr0.eq) goto loc_82826EA8;
	// lwz r11,824(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 824);
	// addi r29,r28,808
	ctx.r29.s64 = ctx.r28.s64 + 808;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82826e9c
	if (!ctx.cr6.gt) goto loc_82826E9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82826E58:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82826e88
	if (!ctx.cr6.eq) goto loc_82826E88;
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
	ctx.lr = 0x82826E80;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82826E88:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82826e58
	if (ctx.cr6.lt) goto loc_82826E58;
loc_82826E9C:
	// lwz r11,800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,800(r28)
	PPC_STORE_U32(ctx.r28.u32 + 800, ctx.r11.u32);
loc_82826EA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82826EB0"))) PPC_WEAK_FUNC(sub_82826EB0);
PPC_FUNC_IMPL(__imp__sub_82826EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82826EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82826ef8
	if (ctx.cr0.eq) goto loc_82826EF8;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,23360
	ctx.r3.s64 = ctx.r11.s64 + 23360;
	// stw r4,1312(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1312, ctx.r4.u32);
	// bl 0x825d6ef8
	ctx.lr = 0x82826EF8;
	sub_825D6EF8(ctx, base);
loc_82826EF8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// bl 0x82414568
	ctx.lr = 0x82826F0C;
	sub_82414568(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82826f68
	if (!ctx.cr0.eq) goto loc_82826F68;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,112(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82826F48;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82827068
	if (ctx.cr0.eq) goto loc_82827068;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r4,112(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82826F64;
	sub_829B9720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82826F68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82826fb8
	if (ctx.cr6.eq) goto loc_82826FB8;
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82826fa0
	if (ctx.cr6.eq) goto loc_82826FA0;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82648380
	ctx.lr = 0x82826F84;
	sub_82648380(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,1164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1164);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82826FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82826FA0:
	// stw r29,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a9d00
	ctx.lr = 0x82826FB4;
	sub_828A9D00(ctx, base);
	// b 0x82827068
	goto loc_82827068;
loc_82826FB8:
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82826fe4
	if (!ctx.cr6.eq) goto loc_82826FE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82826FE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
loc_82826FE4:
	// lwz r28,1412(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82827068
	if (ctx.cr6.eq) goto loc_82827068;
	// lwz r29,1492(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8282700c
	if (ctx.cr6.eq) goto loc_8282700C;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// b 0x82827010
	goto loc_82827010;
loc_8282700C:
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
loc_82827010:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82651058
	ctx.lr = 0x82827018;
	sub_82651058(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282702c
	if (ctx.cr0.eq) goto loc_8282702C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// b 0x82827030
	goto loc_82827030;
loc_8282702C:
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
loc_82827030:
	// lfs f0,984(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a9d00
	ctx.lr = 0x82827048;
	sub_828A9D00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,664(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,656(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 656);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827068:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827070"))) PPC_WEAK_FUNC(sub_82827070);
PPC_FUNC_IMPL(__imp__sub_82827070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82827078;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828270BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828250b0
	ctx.lr = 0x828270F4;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282711c
	if (ctx.cr0.eq) goto loc_8282711C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,956(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 956);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
loc_8282711C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827128"))) PPC_WEAK_FUNC(sub_82827128);
PPC_FUNC_IMPL(__imp__sub_82827128) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827130"))) PPC_WEAK_FUNC(sub_82827130);
PPC_FUNC_IMPL(__imp__sub_82827130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82827138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828271c0
	if (!ctx.cr0.eq) goto loc_828271C0;
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x828271c0
	if (ctx.cr6.eq) goto loc_828271C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x828271b8
	if (!ctx.cr6.gt) goto loc_828271B8;
	// lwz r9,252(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82827184:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,1732(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1732);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x828271a8
	if (!ctx.cr6.eq) goto loc_828271A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82827184
	if (ctx.cr6.lt) goto loc_82827184;
	// b 0x828271b8
	goto loc_828271B8;
loc_828271A8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828271c0
	if (!ctx.cr6.eq) goto loc_828271C0;
loc_828271B8:
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_828271C0:
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828271d0
	if (ctx.cr6.eq) goto loc_828271D0;
	// lwz r31,540(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
loc_828271D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x828271D8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828271E8"))) PPC_WEAK_FUNC(sub_828271E8);
PPC_FUNC_IMPL(__imp__sub_828271E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// lfs f13,16680(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16680);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
loc_82827210:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f0,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,40(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f10,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82827254
	if (!ctx.cr6.lt) goto loc_82827254;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82827254:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82827210
	if (!ctx.cr0.eq) goto loc_82827210;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827268"))) PPC_WEAK_FUNC(sub_82827268);
PPC_FUNC_IMPL(__imp__sub_82827268) {
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
	ctx.lr = 0x82827284;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282729c
	if (ctx.cr0.eq) goto loc_8282729C;
	// bl 0x8281fc00
	ctx.lr = 0x82827294;
	sub_8281FC00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828272a0
	goto loc_828272A0;
loc_8282729C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_828272A0:
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
	ctx.lr = 0x82827300;
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

__attribute__((alias("__imp__sub_82827320"))) PPC_WEAK_FUNC(sub_82827320);
PPC_FUNC_IMPL(__imp__sub_82827320) {
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x8282733C;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82827354
	if (ctx.cr0.eq) goto loc_82827354;
	// bl 0x827d9c50
	ctx.lr = 0x8282734C;
	sub_827D9C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82827358
	goto loc_82827358;
loc_82827354:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82827358:
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
	ctx.lr = 0x828273B8;
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

__attribute__((alias("__imp__sub_828273D8"))) PPC_WEAK_FUNC(sub_828273D8);
PPC_FUNC_IMPL(__imp__sub_828273D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828273E0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// addi r3,r10,22988
	ctx.r3.s64 = ctx.r10.s64 + 22988;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r30,r1,368
	ctx.r30.s64 = ctx.r1.s64 + 368;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82827424;
	sub_82816528(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82827460;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82827490
	if (ctx.cr0.eq) goto loc_82827490;
	// bl 0x8282e3b0
	ctx.lr = 0x8282746C;
	sub_8282E3B0(ctx, base);
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
	ctx.lr = 0x82827484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82827494
	if (!ctx.cr0.eq) goto loc_82827494;
loc_82827490:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82827494:
	// stw r11,832(r27)
	PPC_STORE_U32(ctx.r27.u32 + 832, ctx.r11.u32);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,272
	ctx.r30.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,23012
	ctx.r3.s64 = ctx.r11.s64 + 23012;
	// addi r26,r1,176
	ctx.r26.s64 = ctx.r1.s64 + 176;
	// bl 0x82816528
	ctx.lr = 0x828274C4;
	sub_82816528(ctx, base);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x828274F8;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82827528
	if (ctx.cr0.eq) goto loc_82827528;
	// bl 0x8282e610
	ctx.lr = 0x82827504;
	sub_8282E610(ctx, base);
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
	ctx.lr = 0x8282751C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8282752c
	if (!ctx.cr0.eq) goto loc_8282752C;
loc_82827528:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8282752C:
	// stw r11,836(r27)
	PPC_STORE_U32(ctx.r27.u32 + 836, ctx.r11.u32);
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,336
	ctx.r30.s64 = ctx.r1.s64 + 336;
	// addi r3,r11,23052
	ctx.r3.s64 = ctx.r11.s64 + 23052;
	// addi r26,r1,208
	ctx.r26.s64 = ctx.r1.s64 + 208;
	// bl 0x82816528
	ctx.lr = 0x8282755C;
	sub_82816528(ctx, base);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82827594;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828275c4
	if (ctx.cr0.eq) goto loc_828275C4;
	// bl 0x8282e870
	ctx.lr = 0x828275A0;
	sub_8282E870(ctx, base);
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
	ctx.lr = 0x828275B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x828275c8
	if (!ctx.cr0.eq) goto loc_828275C8;
loc_828275C4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828275C8:
	// stw r11,840(r27)
	PPC_STORE_U32(ctx.r27.u32 + 840, ctx.r11.u32);
	// stfs f31,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,304
	ctx.r30.s64 = ctx.r1.s64 + 304;
	// addi r3,r11,23080
	ctx.r3.s64 = ctx.r11.s64 + 23080;
	// addi r26,r1,240
	ctx.r26.s64 = ctx.r1.s64 + 240;
	// bl 0x82816528
	ctx.lr = 0x828275F8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8282762C;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8282765c
	if (ctx.cr0.eq) goto loc_8282765C;
	// bl 0x8282ead0
	ctx.lr = 0x82827638;
	sub_8282EAD0(ctx, base);
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
	ctx.lr = 0x82827650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82827660
	if (!ctx.cr0.eq) goto loc_82827660;
loc_8282765C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82827660:
	// stw r11,844(r27)
	PPC_STORE_U32(ctx.r27.u32 + 844, ctx.r11.u32);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,23200
	ctx.r3.s64 = ctx.r11.s64 + 23200;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// bl 0x82816528
	ctx.lr = 0x82827690;
	sub_82816528(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x828276C4;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828276f4
	if (ctx.cr0.eq) goto loc_828276F4;
	// bl 0x8282f508
	ctx.lr = 0x828276D0;
	sub_8282F508(ctx, base);
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
	ctx.lr = 0x828276E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x828276f8
	if (!ctx.cr0.eq) goto loc_828276F8;
loc_828276F4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828276F8:
	// stw r11,848(r27)
	PPC_STORE_U32(ctx.r27.u32 + 848, ctx.r11.u32);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,160
	ctx.r30.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,23112
	ctx.r3.s64 = ctx.r11.s64 + 23112;
	// addi r26,r1,192
	ctx.r26.s64 = ctx.r1.s64 + 192;
	// bl 0x82816528
	ctx.lr = 0x82827728;
	sub_82816528(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8282775C;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8282778c
	if (ctx.cr0.eq) goto loc_8282778C;
	// bl 0x8282ed30
	ctx.lr = 0x82827768;
	sub_8282ED30(ctx, base);
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
	ctx.lr = 0x82827780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82827790
	if (!ctx.cr0.eq) goto loc_82827790;
loc_8282778C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82827790:
	// stw r11,852(r27)
	PPC_STORE_U32(ctx.r27.u32 + 852, ctx.r11.u32);
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f31,260(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,224
	ctx.r30.s64 = ctx.r1.s64 + 224;
	// addi r3,r11,23136
	ctx.r3.s64 = ctx.r11.s64 + 23136;
	// addi r26,r1,256
	ctx.r26.s64 = ctx.r1.s64 + 256;
	// bl 0x82816528
	ctx.lr = 0x828277C0;
	sub_82816528(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x828277F4;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82827824
	if (ctx.cr0.eq) goto loc_82827824;
	// bl 0x8282ef90
	ctx.lr = 0x82827800;
	sub_8282EF90(ctx, base);
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
	ctx.lr = 0x82827818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82827828
	if (!ctx.cr0.eq) goto loc_82827828;
loc_82827824:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82827828:
	// stw r11,856(r27)
	PPC_STORE_U32(ctx.r27.u32 + 856, ctx.r11.u32);
	// stfs f31,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,288
	ctx.r30.s64 = ctx.r1.s64 + 288;
	// addi r3,r11,23172
	ctx.r3.s64 = ctx.r11.s64 + 23172;
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// bl 0x82816528
	ctx.lr = 0x82827858;
	sub_82816528(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8282788C;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828278bc
	if (ctx.cr0.eq) goto loc_828278BC;
	// bl 0x8282f278
	ctx.lr = 0x82827898;
	sub_8282F278(ctx, base);
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
	ctx.lr = 0x828278B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x828278c0
	if (!ctx.cr0.eq) goto loc_828278C0;
loc_828278BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828278C0:
	// stw r11,860(r27)
	PPC_STORE_U32(ctx.r27.u32 + 860, ctx.r11.u32);
	// stfs f31,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stw r31,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r31.u32);
	// stw r31,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r31.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// addi r3,r11,23228
	ctx.r3.s64 = ctx.r11.s64 + 23228;
	// addi r26,r1,384
	ctx.r26.s64 = ctx.r1.s64 + 384;
	// bl 0x82816528
	ctx.lr = 0x828278F0;
	sub_82816528(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82827924;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82827954
	if (ctx.cr0.eq) goto loc_82827954;
	// bl 0x8282f870
	ctx.lr = 0x82827930;
	sub_8282F870(ctx, base);
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
	ctx.lr = 0x82827948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82827958
	if (!ctx.cr0.eq) goto loc_82827958;
loc_82827954:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82827958:
	// stw r11,864(r27)
	PPC_STORE_U32(ctx.r27.u32 + 864, ctx.r11.u32);
	// stw r31,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r31.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827970"))) PPC_WEAK_FUNC(sub_82827970);
PPC_FUNC_IMPL(__imp__sub_82827970) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828279c4
	if (ctx.cr6.eq) goto loc_828279C4;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// b 0x8282a2b0
	sub_8282A2B0(ctx, base);
	return;
loc_828279C4:
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r11.u32);
	// b 0x8282a2b0
	sub_8282A2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828279E0"))) PPC_WEAK_FUNC(sub_828279E0);
PPC_FUNC_IMPL(__imp__sub_828279E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828279E8"))) PPC_WEAK_FUNC(sub_828279E8);
PPC_FUNC_IMPL(__imp__sub_828279E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82827a40
	if (!ctx.cr0.eq) goto loc_82827A40;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82827a40
	if (ctx.cr6.eq) goto loc_82827A40;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x824c1588
	ctx.lr = 0x82827A40;
	sub_824C1588(ctx, base);
loc_82827A40:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282a368
	ctx.lr = 0x82827A4C;
	sub_8282A368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827A60"))) PPC_WEAK_FUNC(sub_82827A60);
PPC_FUNC_IMPL(__imp__sub_82827A60) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82827a74
	if (ctx.cr6.eq) goto loc_82827A74;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,13048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13048, ctx.r11.u32);
loc_82827A74:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82827a90
	if (!ctx.cr6.eq) goto loc_82827A90;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82827A90:
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82827AA4"))) PPC_WEAK_FUNC(sub_82827AA4);
PPC_FUNC_IMPL(__imp__sub_82827AA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827AA8"))) PPC_WEAK_FUNC(sub_82827AA8);
PPC_FUNC_IMPL(__imp__sub_82827AA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,4100
	ctx.r11.u64 = ctx.r11.u64 | 4100;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82827adc
	if (ctx.cr6.eq) goto loc_82827ADC;
	// lis r11,21
	ctx.r11.s64 = 1376256;
	// ori r11,r11,4336
	ctx.r11.u64 = ctx.r11.u64 | 4336;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82827aec
	goto loc_82827AEC;
loc_82827ADC:
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82827AEC:
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827AF8"))) PPC_WEAK_FUNC(sub_82827AF8);
PPC_FUNC_IMPL(__imp__sub_82827AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82827b40
	if (ctx.cr6.eq) goto loc_82827B40;
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x82333900
	ctx.lr = 0x82827B24;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82827b34
	if (ctx.cr0.eq) goto loc_82827B34;
	// bl 0x828e81c8
	ctx.lr = 0x82827B30;
	sub_828E81C8(ctx, base);
	// b 0x82827b38
	goto loc_82827B38;
loc_82827B34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82827B38:
	// stw r3,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r3.u32);
	// b 0x82827b48
	goto loc_82827B48;
loc_82827B40:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r11.u32);
loc_82827B48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827B60"))) PPC_WEAK_FUNC(sub_82827B60);
PPC_FUNC_IMPL(__imp__sub_82827B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82827B88;
	sub_829B98F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82827bb8
	if (ctx.cr0.eq) goto loc_82827BB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 648);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82827bb8
	if (!ctx.cr6.eq) goto loc_82827BB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 648, ctx.r11.u32);
loc_82827BB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827BD0"))) PPC_WEAK_FUNC(sub_82827BD0);
PPC_FUNC_IMPL(__imp__sub_82827BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82827BF8;
	sub_829B98F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82827c0c
	if (ctx.cr0.eq) goto loc_82827C0C;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82827c6c
	if (ctx.cr0.eq) goto loc_82827C6C;
loc_82827C0C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x82827C20;
	sub_823928A0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82416348
	ctx.lr = 0x82827C34;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82827c6c
	if (ctx.cr0.eq) goto loc_82827C6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x82827C54;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82827C6C;
	sub_829B8EE8(ctx, base);
loc_82827C6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827C88"))) PPC_WEAK_FUNC(sub_82827C88);
PPC_FUNC_IMPL(__imp__sub_82827C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82827C90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82827d30
	if (!ctx.cr6.eq) goto loc_82827D30;
	// lwz r4,624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82827CB4;
	sub_829B98F8(ctx, base);
	// bl 0x824384e8
	ctx.lr = 0x82827CB8;
	sub_824384E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82827d30
	if (ctx.cr0.eq) goto loc_82827D30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15724
	ctx.r4.s64 = ctx.r11.s64 + -15724;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r4,480(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82827d30
	if (ctx.cr6.eq) goto loc_82827D30;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827D30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827D38"))) PPC_WEAK_FUNC(sub_82827D38);
PPC_FUNC_IMPL(__imp__sub_82827D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r31,13024(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82827e48
	ctx.lr = 0x82827D5C;
	sub_82827E48(ctx, base);
	// lwz r4,484(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82827d84
	if (ctx.cr6.eq) goto loc_82827D84;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827D84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827DA0"))) PPC_WEAK_FUNC(sub_82827DA0);
PPC_FUNC_IMPL(__imp__sub_82827DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82827DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r30,13024(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82827DC0;
	sub_829B98F8(ctx, base);
	// bl 0x824384e8
	ctx.lr = 0x82827DC4;
	sub_824384E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82827e40
	if (ctx.cr0.eq) goto loc_82827E40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-32492
	ctx.r4.s64 = ctx.r11.s64 + -32492;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827E08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b38f0
	ctx.lr = 0x82827E10;
	sub_828B38F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r4,484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82827e40
	if (ctx.cr6.eq) goto loc_82827E40;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827E48"))) PPC_WEAK_FUNC(sub_82827E48);
PPC_FUNC_IMPL(__imp__sub_82827E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82827E6C;
	sub_829B98F8(ctx, base);
	// bl 0x824384e8
	ctx.lr = 0x82827E70;
	sub_824384E8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82827ea4
	if (ctx.cr0.eq) goto loc_82827EA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// bl 0x828b38f0
	ctx.lr = 0x82827E88;
	sub_828B38F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82827EA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827EB8"))) PPC_WEAK_FUNC(sub_82827EB8);
PPC_FUNC_IMPL(__imp__sub_82827EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82827EC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r27,512
	ctx.r31.s64 = ctx.r27.s64 + 512;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,528(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82827f08
	if (!ctx.cr6.gt) goto loc_82827F08;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82827EE8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x82827EF4;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82827ee8
	if (ctx.cr6.lt) goto loc_82827EE8;
loc_82827F08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82827f2c
	if (ctx.cr6.eq) goto loc_82827F2C;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82827F2C;
	sub_82332C38(ctx, base);
loc_82827F2C:
	// lwz r11,556(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 556);
	// addi r30,r27,536
	ctx.r30.s64 = ctx.r27.s64 + 536;
	// stw r28,552(r27)
	PPC_STORE_U32(ctx.r27.u32 + 552, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82827f54
	if (ctx.cr6.eq) goto loc_82827F54;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82827F54;
	sub_82332C38(ctx, base);
loc_82827F54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,1000(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1000);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828459c8
	ctx.lr = 0x82827F64;
	sub_828459C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82827F70"))) PPC_WEAK_FUNC(sub_82827F70);
PPC_FUNC_IMPL(__imp__sub_82827F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82827f9c
	if (ctx.cr6.eq) goto loc_82827F9C;
loc_82827F94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82827fe4
	goto loc_82827FE4;
loc_82827F9C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82827FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82827fe0
	if (ctx.cr0.eq) goto loc_82827FE0;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82827f94
	if (ctx.cr6.eq) goto loc_82827F94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82827f94
	if (ctx.cr6.eq) goto loc_82827F94;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82827f94
	if (ctx.cr6.eq) goto loc_82827F94;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82827fe4
	goto loc_82827FE4;
loc_82827FE0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82827FE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82827FF8"))) PPC_WEAK_FUNC(sub_82827FF8);
PPC_FUNC_IMPL(__imp__sub_82827FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82828020;
	sub_82333960(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828030"))) PPC_WEAK_FUNC(sub_82828030);
PPC_FUNC_IMPL(__imp__sub_82828030) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828050
	if (ctx.cr6.eq) goto loc_82828050;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// b 0x82828078
	goto loc_82828078;
loc_82828050:
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82828070
	if (!ctx.cr6.eq) goto loc_82828070;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82828070
	if (!ctx.cr6.eq) goto loc_82828070;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82828070:
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_82828078:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828088"))) PPC_WEAK_FUNC(sub_82828088);
PPC_FUNC_IMPL(__imp__sub_82828088) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82911f10
	ctx.lr = 0x828280A4;
	sub_82911F10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r11,23440
	ctx.r4.s64 = ctx.r11.s64 + 23440;
	// bl 0x82913b00
	ctx.lr = 0x828280B4;
	sub_82913B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828280C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828280E0"))) PPC_WEAK_FUNC(sub_828280E0);
PPC_FUNC_IMPL(__imp__sub_828280E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828280E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-2560(r1)
	ea = -2560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,2596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2596, ctx.r5.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23456
	ctx.r4.s64 = ctx.r11.s64 + 23456;
	// bl 0x82831f38
	ctx.lr = 0x82828108;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828120
	if (ctx.cr0.eq) goto loc_82828120;
	// lwz r3,2596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// bl 0x82a4cad0
	ctx.lr = 0x82828118;
	sub_82A4CAD0(ctx, base);
	// stw r3,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r3.u32);
	// b 0x82828900
	goto loc_82828900;
loc_82828120:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828270
	if (ctx.cr6.eq) goto loc_82828270;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,23476
	ctx.r4.s64 = ctx.r11.s64 + 23476;
	// bl 0x82831f38
	ctx.lr = 0x82828140;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282816c
	if (ctx.cr0.eq) goto loc_8282816C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82828900
	goto loc_82828900;
loc_8282816C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23492
	ctx.r4.s64 = ctx.r11.s64 + 23492;
	// bl 0x82831f38
	ctx.lr = 0x8282817C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82828900
	if (!ctx.cr0.eq) goto loc_82828900;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23504
	ctx.r4.s64 = ctx.r11.s64 + 23504;
	// bl 0x82831f38
	ctx.lr = 0x82828194;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828281a8
	if (ctx.cr0.eq) goto loc_828281A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828281c8
	goto loc_828281C8;
loc_828281A8:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23524
	ctx.r4.s64 = ctx.r11.s64 + 23524;
	// bl 0x82831f38
	ctx.lr = 0x828281B8;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828281dc
	if (ctx.cr0.eq) goto loc_828281DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_828281C8:
	// lwz r4,2596(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828281D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82828900
	goto loc_82828900;
loc_828281DC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23548
	ctx.r4.s64 = ctx.r11.s64 + 23548;
	// bl 0x82831f38
	ctx.lr = 0x828281EC;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828900
	if (ctx.cr0.eq) goto loc_82828900;
	// lwz r29,2596(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,23568
	ctx.r4.s64 = ctx.r11.s64 + 23568;
	// bl 0x828ff768
	ctx.lr = 0x8282820C;
	sub_828FF768(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// addi r4,r10,23584
	ctx.r4.s64 = ctx.r10.s64 + 23584;
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// bl 0x828ff6f0
	ctx.lr = 0x82828240;
	sub_828FF6F0(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x828288fc
	goto loc_828288FC;
loc_82828270:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,23596
	ctx.r4.s64 = ctx.r11.s64 + 23596;
	// bl 0x82831f38
	ctx.lr = 0x8282827C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828300
	if (ctx.cr0.eq) goto loc_82828300;
	// lwz r31,2596(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,219
	ctx.r11.s64 = 219;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,23608
	ctx.r4.s64 = ctx.r10.s64 + 23608;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x828ff768
	ctx.lr = 0x828282A8;
	sub_828FF768(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r11,23624
	ctx.r4.s64 = ctx.r11.s64 + 23624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ff768
	ctx.lr = 0x828282BC;
	sub_828FF768(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82a46740
	ctx.lr = 0x828282C4;
	sub_82A46740(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,292(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r4,r11,23640
	ctx.r4.s64 = ctx.r11.s64 + 23640;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stw r6,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r6.u32);
	// bl 0x82913b00
	ctx.lr = 0x828282E8;
	sub_82913B00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828282FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82828900
	goto loc_82828900;
loc_82828300:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23720
	ctx.r4.s64 = ctx.r11.s64 + 23720;
	// bl 0x82831f38
	ctx.lr = 0x82828310;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282834c
	if (ctx.cr0.eq) goto loc_8282834C;
	// lwz r3,2596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// bl 0x82a4cad0
	ctx.lr = 0x82828320;
	sub_82A4CAD0(ctx, base);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// cmpwi cr6,r3,1800
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1800, ctx.xer);
	// lwz r11,488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// bge cr6,0x82828338
	if (!ctx.cr6.lt) goto loc_82828338;
	// li r3,1800
	ctx.r3.s64 = 1800;
	// b 0x82828344
	goto loc_82828344;
loc_82828338:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82828344
	if (ctx.cr6.lt) goto loc_82828344;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82828344:
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// b 0x82828900
	goto loc_82828900;
loc_8282834C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23740
	ctx.r4.s64 = ctx.r11.s64 + 23740;
	// bl 0x82831f38
	ctx.lr = 0x8282835C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82828900
	if (!ctx.cr0.eq) goto loc_82828900;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23752
	ctx.r4.s64 = ctx.r11.s64 + 23752;
	// bl 0x82831f38
	ctx.lr = 0x82828374;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82828900
	if (!ctx.cr0.eq) goto loc_82828900;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23764
	ctx.r4.s64 = ctx.r11.s64 + 23764;
	// bl 0x82831f38
	ctx.lr = 0x8282838C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828284cc
	if (ctx.cr0.eq) goto loc_828284CC;
	// lwz r29,2596(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r11,23776
	ctx.r4.s64 = ctx.r11.s64 + 23776;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ff768
	ctx.lr = 0x828283B4;
	sub_828FF768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282847c
	if (ctx.cr0.eq) goto loc_8282847C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,288(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828283D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8282847c
	if (!ctx.cr6.eq) goto loc_8282847C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,466
	ctx.r3.s64 = ctx.r1.s64 + 466;
	// lhz r11,7896(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 7896);
	// sth r11,464(r1)
	PPC_STORE_U16(ctx.r1.u32 + 464, ctx.r11.u16);
	// bl 0x82a4efb0
	ctx.lr = 0x828283FC;
	sub_82A4EFB0(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r10,23836
	ctx.r4.s64 = ctx.r10.s64 + 23836;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// bl 0x828ff5d0
	ctx.lr = 0x82828448;
	sub_828FF5D0(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r28,300
	ctx.r3.s64 = ctx.r28.s64 + 300;
	// bl 0x824099b8
	ctx.lr = 0x82828454;
	sub_824099B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282846C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82828474;
	sub_82333960(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x828288fc
	goto loc_828288FC;
loc_8282847C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x8282849C;
	sub_82333960(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// addi r4,r11,23796
	ctx.r4.s64 = ctx.r11.s64 + 23796;
	// bl 0x82913b00
	ctx.lr = 0x828284AC;
	sub_82913B00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828284C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r11.u32);
	// b 0x82828900
	goto loc_82828900;
loc_828284CC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23848
	ctx.r4.s64 = ctx.r11.s64 + 23848;
	// bl 0x82831f38
	ctx.lr = 0x828284DC;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828740
	if (ctx.cr0.eq) goto loc_82828740;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82828740
	if (ctx.cr6.gt) goto loc_82828740;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,316(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 316);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// beq cr6,0x8282852c
	if (ctx.cr6.eq) goto loc_8282852C;
	// lwz r5,312(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// b 0x82828530
	goto loc_82828530;
loc_8282852C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82828530:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// bl 0x828ec258
	ctx.lr = 0x82828544;
	sub_828EC258(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x82826b78
	ctx.lr = 0x8282855C;
	sub_82826B78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8281fa90
	ctx.lr = 0x82828568;
	sub_8281FA90(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x828285b8
	if (ctx.cr6.gt) goto loc_828285B8;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82828588
	if (!ctx.cr6.eq) goto loc_82828588;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82828588:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// addi r4,r11,23860
	ctx.r4.s64 = ctx.r11.s64 + 23860;
	// bl 0x82913b00
	ctx.lr = 0x82828598;
	sub_82913B00(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828285AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 140, ctx.r11.u32);
	// b 0x82828738
	goto loc_82828738;
loc_828285B8:
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828285cc
	if (ctx.cr6.eq) goto loc_828285CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x828285e8
	goto loc_828285E8;
loc_828285CC:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828285e4
	if (ctx.cr6.eq) goto loc_828285E4;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828285e8
	if (!ctx.cr6.eq) goto loc_828285E8;
loc_828285E4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_828285E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828658
	if (ctx.cr6.eq) goto loc_82828658;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82828600
	if (ctx.cr6.eq) goto loc_82828600;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8282861c
	goto loc_8282861C;
loc_82828600:
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828618
	if (ctx.cr6.eq) goto loc_82828618;
	// lwz r30,140(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8282861c
	if (!ctx.cr6.eq) goto loc_8282861C;
loc_82828618:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8282861C:
	// addi r3,r30,396
	ctx.r3.s64 = ctx.r30.s64 + 396;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82828634;
	sub_82332D50(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82828648
	if (ctx.cr0.eq) goto loc_82828648;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82828648:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// bl 0x824b99b0
	ctx.lr = 0x82828654;
	sub_824B99B0(ctx, base);
	// stw r31,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r31.u32);
loc_82828658:
	// bl 0x8282df08
	ctx.lr = 0x8282865C;
	sub_8282DF08(ctx, base);
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
	ctx.lr = 0x82828674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82828684
	if (!ctx.cr0.eq) goto loc_82828684;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82828684:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828694
	if (ctx.cr6.eq) goto loc_82828694;
	// lwz r11,20436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20436);
	// b 0x82828698
	goto loc_82828698;
loc_82828694:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_82828698:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828286a4
	if (ctx.cr6.eq) goto loc_828286A4;
	// lwz r31,80(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
loc_828286A4:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r11,r10,6792
	ctx.r11.s64 = ctx.r10.s64 + 6792;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x828286c4
	if (!ctx.cr6.gt) goto loc_828286C4;
	// twi 31,r0,22
loc_828286C4:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_828286C8:
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x828286d4
	if (!ctx.cr6.gt) goto loc_828286D4;
	// twi 31,r0,22
loc_828286D4:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82828730
	if (ctx.cr6.eq) goto loc_82828730;
	// blt cr6,0x828286e4
	if (ctx.cr6.lt) goto loc_828286E4;
	// twi 31,r0,22
loc_828286E4:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_828286F0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82828710
	if (!ctx.cr0.eq) goto loc_82828710;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x828286f0
	if (!ctx.cr6.eq) goto loc_828286F0;
loc_82828710:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8282872c
	if (ctx.cr0.eq) goto loc_8282872C;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82828724
	if (ctx.cr6.lt) goto loc_82828724;
	// twi 31,r0,22
loc_82828724:
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// b 0x828286c8
	goto loc_828286C8;
loc_8282872C:
	// stw r31,224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 224, ctx.r31.u32);
loc_82828730:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82912288
	ctx.lr = 0x82828738;
	sub_82912288(ctx, base);
loc_82828738:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x828288fc
	goto loc_828288FC;
loc_82828740:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23884
	ctx.r4.s64 = ctx.r11.s64 + 23884;
	// bl 0x82831f38
	ctx.lr = 0x82828750;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828287a0
	if (ctx.cr0.eq) goto loc_828287A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r4,r10,23912
	ctx.r4.s64 = ctx.r10.s64 + 23912;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// bl 0x828ff6f0
	ctx.lr = 0x8282878C;
	sub_828FF6F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829120f8
	ctx.lr = 0x82828798;
	sub_829120F8(ctx, base);
loc_82828798:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x828288fc
	goto loc_828288FC;
loc_828287A0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// bl 0x82831f38
	ctx.lr = 0x828287B0;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828287fc
	if (ctx.cr0.eq) goto loc_828287FC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r4,r10,23912
	ctx.r4.s64 = ctx.r10.s64 + 23912;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// bl 0x828ff6f0
	ctx.lr = 0x828287EC;
	sub_828FF6F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829121d0
	ctx.lr = 0x828287F8;
	sub_829121D0(ctx, base);
	// b 0x82828798
	goto loc_82828798;
loc_828287FC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23548
	ctx.r4.s64 = ctx.r11.s64 + 23548;
	// bl 0x82831f38
	ctx.lr = 0x8282880C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828890
	if (ctx.cr0.eq) goto loc_82828890;
	// lwz r29,2596(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,23568
	ctx.r4.s64 = ctx.r11.s64 + 23568;
	// bl 0x828ff768
	ctx.lr = 0x8282882C;
	sub_828FF768(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r4,r10,23584
	ctx.r4.s64 = ctx.r10.s64 + 23584;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// bl 0x828ff6f0
	ctx.lr = 0x82828860;
	sub_828FF6F0(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x828288fc
	goto loc_828288FC;
loc_82828890:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,2596
	ctx.r3.s64 = ctx.r1.s64 + 2596;
	// addi r4,r11,23956
	ctx.r4.s64 = ctx.r11.s64 + 23956;
	// bl 0x82831f38
	ctx.lr = 0x828288A0;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82828900
	if (ctx.cr0.eq) goto loc_82828900;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,2596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2596);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r4,r10,23584
	ctx.r4.s64 = ctx.r10.s64 + 23584;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// bl 0x828ff6f0
	ctx.lr = 0x828288DC;
	sub_828FF6F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828288F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_828288FC:
	// bl 0x82333960
	ctx.lr = 0x82828900;
	sub_82333960(ctx, base);
loc_82828900:
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82828908"))) PPC_WEAK_FUNC(sub_82828908);
PPC_FUNC_IMPL(__imp__sub_82828908) {
	PPC_FUNC_PROLOGUE();
	// mulli r10,r4,237
	ctx.r10.s64 = ctx.r4.s64 * 237;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// xoris r3,r11,37886
	ctx.r3.u64 = ctx.r11.u64 ^ 2482896896;
	// xori r3,r3,37582
	ctx.r3.u64 = ctx.r3.u64 ^ 37582;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828928"))) PPC_WEAK_FUNC(sub_82828928);
PPC_FUNC_IMPL(__imp__sub_82828928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828988
	if (ctx.cr6.eq) goto loc_82828988;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828984
	if (ctx.cr6.eq) goto loc_82828984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82828984:
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
loc_82828988:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828289c8
	if (ctx.cr6.eq) goto loc_828289C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828289A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828289c4
	if (ctx.cr6.eq) goto loc_828289C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828289C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828289C4:
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
loc_828289C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828289E0"))) PPC_WEAK_FUNC(sub_828289E0);
PPC_FUNC_IMPL(__imp__sub_828289E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828289E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// lwz r31,13024(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828b34
	if (ctx.cr6.eq) goto loc_82828B34;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828a18
	if (ctx.cr6.eq) goto loc_82828A18;
loc_82828A10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82828b38
	goto loc_82828B38;
loc_82828A18:
	// li r3,624
	ctx.r3.s64 = 624;
	// bl 0x82833108
	ctx.lr = 0x82828A20;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82828a34
	if (ctx.cr0.eq) goto loc_82828A34;
	// bl 0x829e8e68
	ctx.lr = 0x82828A30;
	sub_829E8E68(ctx, base);
	// b 0x82828a38
	goto loc_82828A38;
loc_82828A34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82828A38:
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r3,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r3.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r31,660
	ctx.r5.s64 = ctx.r31.s64 + 660;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828A74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82828ac0
	if (!ctx.cr0.eq) goto loc_82828AC0;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828ab0
	if (ctx.cr6.eq) goto loc_82828AB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82828AB0:
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82828ABC;
	sub_82333960(ctx, base);
	// b 0x82828a10
	goto loc_82828A10;
loc_82828AC0:
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 492);
	// lwz r9,488(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 488);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82828ae0
	if (!ctx.cr6.lt) goto loc_82828AE0;
	// cmpwi cr6,r10,2500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2500, ctx.xer);
	// ble cr6,0x82828ae0
	if (!ctx.cr6.gt) goto loc_82828AE0;
	// stw r10,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
loc_82828AE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,656(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r11,236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r29.u32);
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8276d7d8
	ctx.lr = 0x82828B2C;
	sub_8276D7D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82828B34;
	sub_82333960(ctx, base);
loc_82828B34:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82828B38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82828B40"))) PPC_WEAK_FUNC(sub_82828B40);
PPC_FUNC_IMPL(__imp__sub_82828B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82828B48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// lwz r31,13024(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828c2c
	if (ctx.cr6.eq) goto loc_82828C2C;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82828c38
	if (ctx.cr6.eq) goto loc_82828C38;
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82828b8c
	if (ctx.cr6.eq) goto loc_82828B8C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82828c38
	if (!ctx.cr6.eq) goto loc_82828C38;
loc_82828B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82400b48
	ctx.lr = 0x82828BE8;
	sub_82400B48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824bc0c0
	ctx.lr = 0x82828BF4;
	sub_824BC0C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r31,912(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// bl 0x82400b48
	ctx.lr = 0x82828C04;
	sub_82400B48(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x824bc0c0
	ctx.lr = 0x82828C10;
	sub_824BC0C0(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,10836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10836, ctx.r11.u32);
	// bl 0x82400988
	ctx.lr = 0x82828C24;
	sub_82400988(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82828C2C;
	sub_82333960(ctx, base);
loc_82828C2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82828C30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82828C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82828c30
	goto loc_82828C30;
}

__attribute__((alias("__imp__sub_82828C40"))) PPC_WEAK_FUNC(sub_82828C40);
PPC_FUNC_IMPL(__imp__sub_82828C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// lwz r31,13024(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828ca0
	if (ctx.cr6.eq) goto loc_82828CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82828928
	ctx.lr = 0x82828C70;
	sub_82828928(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r9.u32);
	// stw r11,10836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10836, ctx.r11.u32);
loc_82828CA0:
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

__attribute__((alias("__imp__sub_82828CB8"))) PPC_WEAK_FUNC(sub_82828CB8);
PPC_FUNC_IMPL(__imp__sub_82828CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828df8
	if (ctx.cr6.eq) goto loc_82828DF8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82828d1c
	if (ctx.cr6.eq) goto loc_82828D1C;
loc_82828D14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82828dfc
	goto loc_82828DFC;
loc_82828D1C:
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82828d14
	if (!ctx.cr6.eq) goto loc_82828D14;
	// lwz r11,652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82828d14
	if (!ctx.cr6.eq) goto loc_82828D14;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// addi r4,r10,23984
	ctx.r4.s64 = ctx.r10.s64 + 23984;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lbz r6,129(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lbz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// lbz r8,131(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// lbz r7,130(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// bl 0x82816c30
	ctx.lr = 0x82828D64;
	sub_82816C30(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828ec190
	ctx.lr = 0x82828D78;
	sub_828EC190(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82828d8c
	if (!ctx.cr6.eq) goto loc_82828D8C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82828D8C:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x828ec258
	ctx.lr = 0x82828D9C;
	sub_828EC258(ctx, base);
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82833108
	ctx.lr = 0x82828DA4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82828db8
	if (ctx.cr0.eq) goto loc_82828DB8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82926a40
	ctx.lr = 0x82828DB4;
	sub_82926A40(ctx, base);
	// b 0x82828dbc
	goto loc_82828DBC;
loc_82828DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82828DBC:
	// stw r3,652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 652, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828e14
	if (ctx.cr6.eq) goto loc_82828E14;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828e14
	if (ctx.cr6.eq) goto loc_82828E14;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r11,10836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10836, ctx.r11.u32);
	// bl 0x8281fa90
	ctx.lr = 0x82828DE8;
	sub_8281FA90(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8281fa90
	ctx.lr = 0x82828DF0;
	sub_8281FA90(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82828DF8;
	sub_82333960(ctx, base);
loc_82828DF8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82828DFC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82828E14:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8281fa90
	ctx.lr = 0x82828E1C;
	sub_8281FA90(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8281fa90
	ctx.lr = 0x82828E24;
	sub_8281FA90(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82828E2C;
	sub_82333960(ctx, base);
	// b 0x82828d14
	goto loc_82828D14;
}

__attribute__((alias("__imp__sub_82828E30"))) PPC_WEAK_FUNC(sub_82828E30);
PPC_FUNC_IMPL(__imp__sub_82828E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828e8c
	if (ctx.cr6.eq) goto loc_82828E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828e88
	if (ctx.cr6.eq) goto loc_82828E88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82828E88:
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
loc_82828E8C:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828ecc
	if (ctx.cr6.eq) goto loc_82828ECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82828ec8
	if (ctx.cr6.eq) goto loc_82828EC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82828EC8:
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
loc_82828ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82828EE8"))) PPC_WEAK_FUNC(sub_82828EE8);
PPC_FUNC_IMPL(__imp__sub_82828EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82828EF0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,804(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82828f20
	if (!ctx.cr6.gt) goto loc_82828F20;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,804(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 804, temp.u32);
loc_82828F20:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
	// lwz r11,500(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828f88
	if (ctx.cr6.eq) goto loc_82828F88;
	// lwz r11,10824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10824);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x82828f88
	if (!ctx.cr6.eq) goto loc_82828F88;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82828f88
	if (!ctx.cr6.eq) goto loc_82828F88;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r26,500(r28)
	PPC_STORE_U32(ctx.r28.u32 + 500, ctx.r26.u32);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, ctx.r11.u32);
	// bl 0x82828c40
	ctx.lr = 0x82828F88;
	sub_82828C40(ctx, base);
loc_82828F88:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82773368
	ctx.lr = 0x82828F90;
	sub_82773368(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82828ff8
	if (ctx.cr6.eq) goto loc_82828FF8;
	// lwz r11,788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82828fbc
	if (!ctx.cr6.eq) goto loc_82828FBC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82828ff8
	if (ctx.cr6.lt) goto loc_82828FF8;
loc_82828FBC:
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r11,10864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10864, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82828FD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82828ff4
	if (!ctx.cr0.eq) goto loc_82828FF4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82828e30
	ctx.lr = 0x82828FE8;
	sub_82828E30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82828928
	ctx.lr = 0x82828FF0;
	sub_82828928(ctx, base);
	// b 0x82828ff8
	goto loc_82828FF8;
loc_82828FF4:
	// stw r26,792(r28)
	PPC_STORE_U32(ctx.r28.u32 + 792, ctx.r26.u32);
loc_82828FF8:
	// lwz r11,1408(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
	// lwz r11,10824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828290bc
	if (!ctx.cr6.eq) goto loc_828290BC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828290bc
	if (!ctx.cr0.eq) goto loc_828290BC;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r26,1408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1408, ctx.r26.u32);
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8276aed8
	ctx.lr = 0x8282904C;
	sub_8276AED8(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829084
	if (!ctx.cr6.eq) goto loc_82829084;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,1348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
loc_82829084:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828290bc
	if (ctx.cr6.eq) goto loc_828290BC;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1016
	ctx.r4.s64 = 1016;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828290BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828290BC:
	// lwz r3,656(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82829110
	if (ctx.cr6.eq) goto loc_82829110;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828290DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// lwz r11,444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828290f8
	if (!ctx.cr6.eq) goto loc_828290F8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828293e0
	ctx.lr = 0x828290F8;
	sub_828293E0(ctx, base);
loc_828290F8:
	// lwz r3,656(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282910C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82829128
	goto loc_82829128;
loc_82829110:
	// lwz r11,652(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829128
	if (ctx.cr6.eq) goto loc_82829128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82829270
	ctx.lr = 0x82829128;
	sub_82829270(ctx, base);
loc_82829128:
	// lwz r11,1404(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828291c4
	if (ctx.cr6.eq) goto loc_828291C4;
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// bne cr6,0x82829184
	if (!ctx.cr6.eq) goto loc_82829184;
	// lwz r11,10824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829164
	if (ctx.cr6.eq) goto loc_82829164;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829184
	if (!ctx.cr6.eq) goto loc_82829184;
loc_82829164:
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282917C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,1404(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1404, ctx.r26.u32);
	// b 0x828291c4
	goto loc_828291C4;
loc_82829184:
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x828291c4
	if (!ctx.cr6.eq) goto loc_828291C4;
	// lwz r11,10824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828291c4
	if (!ctx.cr6.eq) goto loc_828291C4;
	// lwz r3,912(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828291C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828291C4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828291e4
	if (ctx.cr6.eq) goto loc_828291E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828291E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828291E4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282925c
	if (!ctx.cr6.eq) goto loc_8282925C;
	// lwz r11,936(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 936);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282925c
	if (ctx.cr6.eq) goto loc_8282925C;
	// lwz r31,1000(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1000);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82829258
	if (!ctx.cr6.gt) goto loc_82829258;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82829218:
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82829244
	if (ctx.cr6.eq) goto loc_82829244;
	// lwz r11,156(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// rlwinm. r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82829244
	if (ctx.cr0.eq) goto loc_82829244;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x82824540
	ctx.lr = 0x8282923C;
	sub_82824540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282925c
	if (ctx.cr0.eq) goto loc_8282925C;
loc_82829244:
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82829218
	if (ctx.cr6.lt) goto loc_82829218;
loc_82829258:
	// stw r26,936(r28)
	PPC_STORE_U32(ctx.r28.u32 + 936, ctx.r26.u32);
loc_8282925C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82829270"))) PPC_WEAK_FUNC(sub_82829270);
PPC_FUNC_IMPL(__imp__sub_82829270) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282929C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828292bc
	if (ctx.cr6.eq) goto loc_828292BC;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x828292c0
	goto loc_828292C0;
loc_828292BC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_828292C0:
	// bl 0x82a4cc80
	ctx.lr = 0x828292C4;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282930c
	if (ctx.cr0.eq) goto loc_8282930C;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828292E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82829300
	if (ctx.cr6.eq) goto loc_82829300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82829300:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// b 0x828293c4
	goto loc_828293C4;
loc_8282930C:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828293c4
	if (ctx.cr6.eq) goto loc_828293C4;
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828293c4
	if (!ctx.cr6.eq) goto loc_828293C4;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828293c4
	if (!ctx.cr6.eq) goto loc_828293C4;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// beq cr6,0x82829368
	if (ctx.cr6.eq) goto loc_82829368;
	// stw r31,448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 448, ctx.r31.u32);
loc_82829368:
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282937C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// stw r30,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r30.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828293b8
	if (ctx.cr6.eq) goto loc_828293B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828293B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828293B8:
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828293C4;
	sub_82333960(ctx, base);
loc_828293C4:
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

__attribute__((alias("__imp__sub_828293E0"))) PPC_WEAK_FUNC(sub_828293E0);
PPC_FUNC_IMPL(__imp__sub_828293E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828293E8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828294b4
	if (ctx.cr6.eq) goto loc_828294B4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828294b4
	if (ctx.cr6.eq) goto loc_828294B4;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10836);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828294b4
	if (!ctx.cr6.eq) goto loc_828294B4;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,10836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10836, ctx.r11.u32);
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// addi r30,r11,236
	ctx.r30.s64 = ctx.r11.s64 + 236;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82829454
	if (ctx.cr6.eq) goto loc_82829454;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282948c
	if (!ctx.cr6.eq) goto loc_8282948C;
loc_82829454:
	// lwz r11,912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282948c
	if (ctx.cr6.eq) goto loc_8282948C;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-24708
	ctx.r11.s64 = ctx.r11.s64 + -24708;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8282c688
	ctx.lr = 0x82829480;
	sub_8282C688(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8282948C:
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// bl 0x828e70a8
	ctx.lr = 0x82829494;
	sub_828E70A8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282cac0
	ctx.lr = 0x828294AC;
	sub_8282CAC0(ctx, base);
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// bl 0x828e94f0
	ctx.lr = 0x828294B4;
	sub_828E94F0(ctx, base);
loc_828294B4:
	// lwz r11,1336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828294f8
	if (!ctx.cr6.gt) goto loc_828294F8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828294C8:
	// lwz r11,1332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828294E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1336);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828294c8
	if (ctx.cr6.lt) goto loc_828294C8;
loc_828294F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82829510
	ctx.lr = 0x82829504;
	sub_82829510(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82829510"))) PPC_WEAK_FUNC(sub_82829510);
PPC_FUNC_IMPL(__imp__sub_82829510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82829518;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a6173c
	ctx.lr = 0x82829520;
	__savefpr_25(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,656(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lwz r11,412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a200
	if (ctx.cr6.eq) goto loc_8282A200;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,804(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8282a200
	if (ctx.cr6.gt) goto loc_8282A200;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r14,0
	ctx.r14.s64 = 0;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// ori r20,r8,65535
	ctx.r20.u64 = ctx.r8.u64 | 65535;
	// lfs f0,18616(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,804(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 804, temp.u32);
	// lwz r10,412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 412);
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// blt 0x82829648
	if (ctx.cr0.lt) goto loc_82829648;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f30,18608(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18608);
loc_82829598:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lwz r3,84(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lwzx r31,r11,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x829b9720
	ctx.lr = 0x828295B0;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x828295B4;
	sub_82411B98(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82829638
	if (ctx.cr0.eq) goto loc_82829638;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828295D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82829638
	if (ctx.cr0.eq) goto loc_82829638;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82829638
	if (!ctx.cr6.eq) goto loc_82829638;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lfd f0,376(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 376);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82829638
	if (!ctx.cr6.lt) goto loc_82829638;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20420, ctx.r3.u32);
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82829628
	if (!ctx.cr6.gt) goto loc_82829628;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82829628:
	// bl 0x82333900
	ctx.lr = 0x8282962C;
	sub_82333900(ctx, base);
	// stw r3,20424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20424, ctx.r3.u32);
	// stw r14,20428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20428, ctx.r14.u32);
	// b 0x8282963c
	goto loc_8282963C;
loc_82829638:
	// stw r14,20420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20420, ctx.r14.u32);
loc_8282963C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bge 0x82829598
	if (!ctx.cr0.lt) goto loc_82829598;
loc_82829648:
	// cmplw cr6,r28,r20
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r20.u32, ctx.xer);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82829658
	if (!ctx.cr6.gt) goto loc_82829658;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82829658:
	// bl 0x82333900
	ctx.lr = 0x8282965C;
	sub_82333900(ctx, base);
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// beq cr6,0x828296e4
	if (ctx.cr6.eq) goto loc_828296E4;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828296e4
	if (ctx.cr6.eq) goto loc_828296E4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,16896(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16896);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bgt cr6,0x828296e8
	if (ctx.cr6.gt) goto loc_828296E8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfd f12,16888(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16888);
	// lfd f13,16880(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16880);
	// fsel f0,f11,f0,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsub f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x828296e8
	goto loc_828296E8;
loc_828296E4:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_828296E8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x828296fc
	if (ctx.cr6.eq) goto loc_828296FC;
	// fdivs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
loc_828296FC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r26,r11,1044
	ctx.r26.s64 = ctx.r11.s64 + 1044;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828298a8
	if (!ctx.cr6.gt) goto loc_828298A8;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82829724:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwzx r30,r11,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82829890
	if (ctx.cr6.eq) goto loc_82829890;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82829890
	if (!ctx.cr0.eq) goto loc_82829890;
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829890
	if (ctx.cr6.eq) goto loc_82829890;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829890
	if (ctx.cr6.eq) goto loc_82829890;
	// lfs f28,984(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 984);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82a4cd78
	ctx.lr = 0x82829760;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,968(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 968);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fadds f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829884
	if (!ctx.cr6.eq) goto loc_82829884;
	// lwz r11,1016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829884
	if (ctx.cr6.eq) goto loc_82829884;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82416348
	ctx.lr = 0x828297B8;
	sub_82416348(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x828297fc
	if (!ctx.cr0.eq) goto loc_828297FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828297D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828297f8
	if (!ctx.cr0.eq) goto loc_828297F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828297F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82829890
	if (ctx.cr0.eq) goto loc_82829890;
loc_828297F8:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_828297FC:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82829890
	if (!ctx.cr6.gt) goto loc_82829890;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_82829814:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lwz r3,84(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x829b9720
	ctx.lr = 0x8282982C;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x82829830;
	sub_82411B98(ctx, base);
	// lwz r11,20420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82829868
	if (ctx.cr6.eq) goto loc_82829868;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8282984c
	if (ctx.cr6.eq) goto loc_8282984C;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82829868
	if (!ctx.cr6.eq) goto loc_82829868;
loc_8282984C:
	// lwz r11,20428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20428);
	// lwz r10,20424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20424);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,20428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20428, ctx.r11.u32);
loc_82829868:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82829814
	if (ctx.cr6.lt) goto loc_82829814;
	// b 0x82829890
	goto loc_82829890;
loc_82829884:
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_82829890:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82829724
	if (ctx.cr6.lt) goto loc_82829724;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_828298A8:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282a1b0
	if (!ctx.cr6.gt) goto loc_8282A1B0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r8,r10,-11424
	ctx.r8.s64 = ctx.r10.s64 + -11424;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lfs f26,-11424(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f26.f64 = double(temp.f32);
	// lfs f27,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f27.f64 = double(temp.f32);
	// lis r15,-31949
	ctx.r15.s64 = -2093809664;
	// lfs f31,-23864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23864);
	ctx.f31.f64 = double(temp.f32);
	// addi r17,r11,-27968
	ctx.r17.s64 = ctx.r11.s64 + -27968;
	// lfd f25,16368(r7)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16368);
	// lfs f28,17052(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17052);
	ctx.f28.f64 = double(temp.f32);
loc_828298F0:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r18,20420(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20420);
	// stw r16,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r16.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8282a19c
	if (ctx.cr6.eq) goto loc_8282A19C;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a19c
	if (ctx.cr6.eq) goto loc_8282A19C;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r3,84(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82829928;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x8282992C;
	sub_82411B98(ctx, base);
	// lwz r10,796(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// stw r10,796(r21)
	PPC_STORE_U32(ctx.r21.u32 + 796, ctx.r10.u32);
	// lwz r10,20412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 412, ctx.r10.u32);
	// ble cr6,0x82829980
	if (!ctx.cr6.gt) goto loc_82829980;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8282995C:
	// lwz r9,20408(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,796(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 988, ctx.r8.u32);
	// lwz r9,20412(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20412);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8282995c
	if (ctx.cr6.lt) goto loc_8282995C;
loc_82829980:
	// lwz r11,620(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 620);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r9,624(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 624);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,628(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 628);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,664(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 664);
	// lwz r9,660(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 660);
	// lwz r10,656(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 656);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,1344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828299CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82829ac8
	if (ctx.cr0.eq) goto loc_82829AC8;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828299e8
	if (ctx.cr0.eq) goto loc_828299E8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x828299ec
	goto loc_828299EC;
loc_828299E8:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_828299EC:
	// lfs f13,580(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f12,572(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lfs f9,576(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 576);
	ctx.f9.f64 = double(temp.f32);
	// stw r14,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r14.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f29,220(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// stfs f29,224(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r14,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r14.u32);
	// stfs f29,228(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r14,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r14.u32);
	// stfs f29,232(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r14,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r14.u32);
	// stfs f29,236(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r14,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r14.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f29,240(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f30,244(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stw r14,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r14.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r4,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82825330
	ctx.lr = 0x82829AB0;
	sub_82825330(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_82829AC8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 * 12;
	// ble cr6,0x82829af8
	if (!ctx.cr6.gt) goto loc_82829AF8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82829AF8:
	// bl 0x82333900
	ctx.lr = 0x82829AFC;
	sub_82333900(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r20.u32, ctx.xer);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82829b10
	if (!ctx.cr6.gt) goto loc_82829B10;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82829B10:
	// bl 0x82333900
	ctx.lr = 0x82829B14;
	sub_82333900(ctx, base);
	// lwz r11,656(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 656);
	// lwz r10,660(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 660);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r9,664(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 664);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,620(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 620);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r7,624(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 624);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lwz r11,628(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 628);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82817bb8
	ctx.lr = 0x82829B54;
	sub_82817BB8(ctx, base);
	// lwz r11,800(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 800);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82829b64
	if (ctx.cr6.lt) goto loc_82829B64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82829B64:
	// lwa r10,8(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 8));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r10.u64);
	// li r24,1
	ctx.r24.s64 = 1;
	// std r11,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r11.u64);
	// lfd f0,312(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,280(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x82829ba0
	if (ctx.cr6.lt) goto loc_82829BA0;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_82829BA0:
	// lwz r11,1556(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829bb8
	if (ctx.cr6.eq) goto loc_82829BB8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82829bbc
	if (!ctx.cr6.eq) goto loc_82829BBC;
loc_82829BB8:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82829BBC:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,1556(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1556, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82829cbc
	if (!ctx.cr6.gt) goto loc_82829CBC;
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// rotlwi r25,r10,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_82829BDC:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,796(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// lwz r10,988(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82829cb0
	if (ctx.cr6.eq) goto loc_82829CB0;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829964f0
	ctx.lr = 0x82829C04;
	sub_829964F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82829c14
	if (ctx.cr0.eq) goto loc_82829C14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82829C14;
	sub_828E28B0(ctx, base);
loc_82829C14:
	// lwz r11,1060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829c5c
	if (ctx.cr6.eq) goto loc_82829C5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82829c5c
	if (ctx.cr6.eq) goto loc_82829C5C;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829c5c
	if (!ctx.cr6.eq) goto loc_82829C5C;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829c5c
	if (ctx.cr6.eq) goto loc_82829C5C;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829c5c
	if (!ctx.cr6.eq) goto loc_82829C5C;
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,72(r28)
	PPC_STORE_U64(ctx.r28.u32 + 72, ctx.f0.u64);
	// b 0x82829cb0
	goto loc_82829CB0;
loc_82829C5C:
	// lwz r11,796(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 988, ctx.r11.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82822568
	ctx.lr = 0x82829C88;
	sub_82822568(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82829CB0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82829bdc
	if (!ctx.cr0.eq) goto loc_82829BDC;
loc_82829CBC:
	// lwz r11,20428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20428);
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82829dcc
	if (!ctx.cr6.gt) goto loc_82829DCC;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r23,12
	ctx.r10.s64 = ctx.r23.s64 * 12;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r31,r10,r19
	ctx.r31.u64 = ctx.r10.u64 + ctx.r19.u64;
loc_82829CE0:
	// lwz r11,20424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20424);
	// lwz r10,796(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// lwzx r29,r11,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,988(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 988);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82829db8
	if (ctx.cr6.eq) goto loc_82829DB8;
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r30,92
	ctx.r3.s64 = ctx.r30.s64 + 92;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829964f0
	ctx.lr = 0x82829D0C;
	sub_829964F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82829d1c
	if (ctx.cr0.eq) goto loc_82829D1C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82829D1C;
	sub_828E28B0(ctx, base);
loc_82829D1C:
	// lwz r11,1060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829d64
	if (ctx.cr6.eq) goto loc_82829D64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82829d64
	if (ctx.cr6.eq) goto loc_82829D64;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829d64
	if (!ctx.cr6.eq) goto loc_82829D64;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82829d64
	if (ctx.cr6.eq) goto loc_82829D64;
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829d64
	if (!ctx.cr6.eq) goto loc_82829D64;
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,72(r28)
	PPC_STORE_U64(ctx.r28.u32 + 72, ctx.f0.u64);
	// b 0x82829db8
	goto loc_82829DB8;
loc_82829D64:
	// lwz r11,796(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 796);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,988(r29)
	PPC_STORE_U32(ctx.r29.u32 + 988, ctx.r11.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82822568
	ctx.lr = 0x82829D90;
	sub_82822568(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82829DB8:
	// lwz r11,20428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20428);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82829ce0
	if (ctx.cr6.lt) goto loc_82829CE0;
loc_82829DCC:
	// lwz r3,20424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20424);
	// bl 0x82332db8
	ctx.lr = 0x82829DD4;
	sub_82332DB8(ctx, base);
	// stw r14,20428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20428, ctx.r14.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r14,20424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20424, ctx.r14.u32);
	// lfd f0,456(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// stfd f0,400(r30)
	PPC_STORE_U64(ctx.r30.u32 + 400, ctx.f0.u64);
	// bl 0x82830480
	ctx.lr = 0x82829DF4;
	sub_82830480(ctx, base);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x8282a108
	if (!ctx.cr6.gt) goto loc_8282A108;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_82829E08:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82829e28
	if (ctx.cr6.eq) goto loc_82829E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e28b0
	ctx.lr = 0x82829E20;
	sub_828E28B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282a0f0
	if (ctx.cr0.eq) goto loc_8282A0F0;
loc_82829E28:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82829e90
	if (!ctx.cr6.eq) goto loc_82829E90;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82829e60
	if (ctx.cr6.eq) goto loc_82829E60;
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x82829e90
	if (!ctx.cr6.gt) goto loc_82829E90;
loc_82829E60:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82829eb4
	if (!ctx.cr0.eq) goto loc_82829EB4;
loc_82829E90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8282a0f0
	if (ctx.cr6.eq) goto loc_8282A0F0;
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// lfd f13,456(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 456);
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8282a0f0
	if (!ctx.cr6.lt) goto loc_8282A0F0;
loc_82829EB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82829fe8
	if (!ctx.cr6.eq) goto loc_82829FE8;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82829ee4
	if (!ctx.cr6.eq) goto loc_82829EE4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,796(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 796);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82829f04
	if (ctx.cr0.eq) goto loc_82829F04;
loc_82829EE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 792);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a0f0
	if (ctx.cr0.eq) goto loc_8282A0F0;
loc_82829F04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r11,r30,3936
	ctx.r11.s64 = ctx.r30.s64 + 3936;
loc_82829F20:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82829f3c
	if (ctx.cr6.eq) goto loc_82829F3C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r29,1023
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1023, ctx.xer);
	// blt cr6,0x82829f20
	if (ctx.cr6.lt) goto loc_82829F20;
loc_82829F3C:
	// cmpwi cr6,r29,1023
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1023, ctx.xer);
	// beq cr6,0x82829fd0
	if (ctx.cr6.eq) goto loc_82829FD0;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82829F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,983
	ctx.r11.s64 = ctx.r29.s64 + 983;
	// addi r3,r30,20348
	ctx.r3.s64 = ctx.r30.s64 + 20348;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r31,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r31.u32);
	// bl 0x82332d50
	ctx.lr = 0x82829F98;
	sub_82332D50(ctx, base);
	// lwz r11,20360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20360);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82829fac
	if (ctx.cr0.eq) goto loc_82829FAC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82829FAC:
	// bl 0x828316a0
	ctx.lr = 0x82829FB0;
	sub_828316A0(ctx, base);
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
	ctx.lr = 0x82829FC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82829fd4
	if (!ctx.cr0.eq) goto loc_82829FD4;
loc_82829FD0:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
loc_82829FD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8282a0f0
	if (ctx.cr6.eq) goto loc_8282A0F0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e2920
	ctx.lr = 0x82829FE8;
	sub_828E2920(ctx, base);
loc_82829FE8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a104
	if (ctx.cr0.eq) goto loc_8282A104;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8282a070
	if (ctx.cr6.eq) goto loc_8282A070;
	// lis r10,2995
	ctx.r10.s64 = 196280320;
	// lwz r11,13012(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 13012);
	// lwz r9,656(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// ori r10,r10,33845
	ctx.r10.u64 = ctx.r10.u64 | 33845;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lfd f13,456(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 456);
	// addis r11,r11,13849
	ctx.r11.s64 = ctx.r11.s64 + 907608064;
	// addi r11,r11,25451
	ctx.r11.s64 = ctx.r11.s64 + 25451;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,13012(r15)
	PPC_STORE_U32(ctx.r15.u32 + 13012, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// lwa r11,108(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 108));
	// std r11,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r11.u64);
	// lfd f12,304(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// stfd f0,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.f0.u64);
loc_8282A070:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x8282a0b4
	if (!ctx.cr6.lt) goto loc_8282A0B4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a0b4
	if (ctx.cr0.eq) goto loc_8282A0B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828e3468
	ctx.lr = 0x8282A0A4;
	sub_828E3468(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8282a0d0
	goto loc_8282A0D0;
loc_8282A0B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,984(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282A0D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a104
	if (ctx.cr0.eq) goto loc_8282A104;
loc_8282A0F0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82829e08
	if (ctx.cr6.lt) goto loc_82829E08;
	// b 0x8282a108
	goto loc_8282A108;
loc_8282A104:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8282A108:
	// stw r24,1556(r22)
	PPC_STORE_U32(ctx.r22.u32 + 1556, ctx.r24.u32);
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8282a180
	if (!ctx.cr6.lt) goto loc_8282A180;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r26,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r26.s64;
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_8282A120:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a174
	if (ctx.cr0.eq) goto loc_8282A174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,984(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282A174:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8282a120
	if (!ctx.cr0.eq) goto loc_8282A120;
loc_8282A180:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332db8
	ctx.lr = 0x8282A188;
	sub_82332DB8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332db8
	ctx.lr = 0x8282A190;
	sub_82332DB8(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// lwz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
loc_8282A19C:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828298f0
	if (ctx.cr6.lt) goto loc_828298F0;
loc_8282A1B0:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// addic. r29,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x8282a1f0
	if (ctx.cr0.lt) goto loc_8282A1F0;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8282A1C4:
	// lwz r11,656(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 656);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,20424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20424);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282a1e4
	if (ctx.cr6.eq) goto loc_8282A1E4;
	// bl 0x82332db8
	ctx.lr = 0x8282A1E0;
	sub_82332DB8(ctx, base);
	// stw r14,20424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20424, ctx.r14.u32);
loc_8282A1E4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x8282a1c4
	if (!ctx.cr0.lt) goto loc_8282A1C4;
loc_8282A1F0:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82332db8
	ctx.lr = 0x8282A1F8;
	sub_82332DB8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8282a204
	goto loc_8282A204;
loc_8282A200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282A204:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61788
	ctx.lr = 0x8282A210;
	__restfpr_25(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282A218"))) PPC_WEAK_FUNC(sub_8282A218);
PPC_FUNC_IMPL(__imp__sub_8282A218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a298
	if (ctx.cr6.eq) goto loc_8282A298;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a298
	if (ctx.cr6.eq) goto loc_8282A298;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// bne cr6,0x8282a264
	if (!ctx.cr6.eq) goto loc_8282A264;
	// lwz r9,432(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// blt cr6,0x8282a298
	if (ctx.cr6.lt) goto loc_8282A298;
loc_8282A264:
	// lwz r9,824(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x8282a294
	if (ctx.cr6.gt) goto loc_8282A294;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282a298
	if (!ctx.cr6.eq) goto loc_8282A298;
	// lwz r3,912(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A28C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a298
	if (ctx.cr0.eq) goto loc_8282A298;
loc_8282A294:
	// li r31,1
	ctx.r31.s64 = 1;
loc_8282A298:
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

__attribute__((alias("__imp__sub_8282A2B0"))) PPC_WEAK_FUNC(sub_8282A2B0);
PPC_FUNC_IMPL(__imp__sub_8282A2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a2d8
	if (ctx.cr6.eq) goto loc_8282A2D8;
	// stw r4,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r4.u32);
	// b 0x8282a2e8
	goto loc_8282A2E8;
loc_8282A2D8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8282a2e8
	if (!ctx.cr6.eq) goto loc_8282A2E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
loc_8282A2E8:
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// beq cr6,0x8282a304
	if (ctx.cr6.eq) goto loc_8282A304;
	// lwz r11,348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x8282a308
	goto loc_8282A308;
loc_8282A304:
	// lwz r11,352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
loc_8282A308:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A310;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282a330
	if (ctx.cr6.eq) goto loc_8282A330;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282A330:
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A348"))) PPC_WEAK_FUNC(sub_8282A348);
PPC_FUNC_IMPL(__imp__sub_8282A348) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8282a35c
	if (ctx.cr6.eq) goto loc_8282A35C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r4,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r4.u32);
loc_8282A35C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A368"))) PPC_WEAK_FUNC(sub_8282A368);
PPC_FUNC_IMPL(__imp__sub_8282A368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8282a400
	if (ctx.cr6.eq) goto loc_8282A400;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
loc_8282A39C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282a3d0
	if (ctx.cr6.eq) goto loc_8282A3D0;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8282a3d0
	if (ctx.cr6.eq) goto loc_8282A3D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282a3e0
	if (!ctx.cr0.eq) goto loc_8282A3E0;
loc_8282A3D0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8282a39c
	if (ctx.cr6.lt) goto loc_8282A39C;
	// b 0x8282a3e4
	goto loc_8282A3E4;
loc_8282A3E0:
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
loc_8282A3E4:
	// lwz r11,552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8282a400
	if (!ctx.cr6.eq) goto loc_8282A400;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
loc_8282A400:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A418"))) PPC_WEAK_FUNC(sub_8282A418);
PPC_FUNC_IMPL(__imp__sub_8282A418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282A420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827d9bf0
	ctx.lr = 0x8282A440;
	sub_827D9BF0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r30,548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 548, ctx.r30.u32);
	// bl 0x8282a368
	ctx.lr = 0x8282A458;
	sub_8282A368(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// stw r28,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r28.u32);
	// beq cr6,0x8282a488
	if (ctx.cr6.eq) goto loc_8282A488;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// stw r28,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r28.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8282a488
	if (ctx.cr6.eq) goto loc_8282A488;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,13048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13048, ctx.r11.u32);
loc_8282A488:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a4e8
	if (ctx.cr6.eq) goto loc_8282A4E8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8282a4e8
	if (ctx.cr6.eq) goto loc_8282A4E8;
	// lwz r10,13024(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a4ec
	if (ctx.cr6.eq) goto loc_8282A4EC;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a4ec
	if (ctx.cr6.eq) goto loc_8282A4EC;
	// lwz r9,636(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8282a4ec
	if (ctx.cr6.eq) goto loc_8282A4EC;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r10,r10,-2536
	ctx.r10.s64 = ctx.r10.s64 + -2536;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826f01d8
	ctx.lr = 0x8282A4E8;
	sub_826F01D8(ctx, base);
loc_8282A4E8:
	// lwz r10,13024(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_8282A4EC:
	// lwz r11,184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282a520
	if (ctx.cr6.eq) goto loc_8282A520;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8282a504
	if (!ctx.cr6.eq) goto loc_8282A504;
	// stw r28,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r28.u32);
loc_8282A504:
	// lwz r3,184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282A520:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282A528"))) PPC_WEAK_FUNC(sub_8282A528);
PPC_FUNC_IMPL(__imp__sub_8282A528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,8836
	ctx.r6.s64 = 8836;
	// bl 0x828255f0
	ctx.lr = 0x8282A550;
	sub_828255F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8282a560
	if (!ctx.cr0.eq) goto loc_8282A560;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8282a594
	goto loc_8282A594;
loc_8282A560:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8282A570;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8282A574:
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x8282A57C;
	sub_82332DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8282a574
	if (!ctx.cr6.eq) goto loc_8282A574;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_8282A594:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282A5B0"))) PPC_WEAK_FUNC(sub_8282A5B0);
PPC_FUNC_IMPL(__imp__sub_8282A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8282A5B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61748
	ctx.lr = 0x8282A5C0;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f30,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f31,904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x8282a528
	ctx.lr = 0x8282A668;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282a930
	if (!ctx.cr0.eq) goto loc_8282A930;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f28,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f28.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x8282A6C0;
	sub_82825330(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x8282a7c4
	if (ctx.cr6.eq) goto loc_8282A7C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8282a7f4
	if (ctx.cr6.gt) goto loc_8282A7F4;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8282a528
	ctx.lr = 0x8282A75C;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282a8bc
	if (ctx.cr0.eq) goto loc_8282A8BC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8282a918
	goto loc_8282A918;
loc_8282A7C4:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x8282a834
	goto loc_8282A834;
loc_8282A7F4:
	// fmsubs f0,f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f30.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8282A834:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8282a528
	ctx.lr = 0x8282A850;
	sub_8282A528(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x8282a8c4
	if (!ctx.cr0.eq) goto loc_8282A8C4;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82825330
	ctx.lr = 0x8282A898;
	sub_82825330(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282a8bc
	if (ctx.cr6.eq) goto loc_8282A8BC;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8282A8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8282a93c
	goto loc_8282A93C;
loc_8282A8C4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8282A918:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8282a528
	ctx.lr = 0x8282A924;
	sub_8282A528(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8282a93c
	goto loc_8282A93C;
loc_8282A930:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8282A93C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61794
	ctx.lr = 0x8282A948;
	__restfpr_28(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282A950"))) PPC_WEAK_FUNC(sub_8282A950);
PPC_FUNC_IMPL(__imp__sub_8282A950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8282A958;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61718
	ctx.lr = 0x8282A960;
	__savefpr_16(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r5,800(r1)
	PPC_STORE_U64(ctx.r1.u32 + 800, ctx.r5.u64);
	// std r6,808(r1)
	PPC_STORE_U64(ctx.r1.u32 + 808, ctx.r6.u64);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// std r7,816(r1)
	PPC_STORE_U64(ctx.r1.u32 + 816, ctx.r7.u64);
	// std r8,824(r1)
	PPC_STORE_U64(ctx.r1.u32 + 824, ctx.r8.u64);
	// lwz r11,808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282a994
	if (ctx.cr6.eq) goto loc_8282A994;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282a9b0
	if (!ctx.cr6.eq) goto loc_8282A9B0;
loc_8282A994:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282b0d0
	if (ctx.cr0.eq) goto loc_8282B0D0;
loc_8282A9B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r24,r31,620
	ctx.r24.s64 = ctx.r31.s64 + 620;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r7,656(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r6,660(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r5,664(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282A9F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282aae4
	if (ctx.cr0.eq) goto loc_8282AAE4;
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8282AA14;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x826c8a28
	ctx.lr = 0x8282AA20;
	sub_826C8A28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8282AA30:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8282aa30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8282AA30;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,800(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282aaa4
	if (!ctx.cr6.eq) goto loc_8282AAA4;
	// lfs f0,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,804(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282aaa4
	if (!ctx.cr6.eq) goto loc_8282AAA4;
	// lfs f0,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,808(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282aaa4
	if (!ctx.cr6.eq) goto loc_8282AAA4;
	// lwz r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r8,816(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8282aaa4
	if (!ctx.cr6.eq) goto loc_8282AAA4;
	// lwz r9,820(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8282aaa4
	if (!ctx.cr6.eq) goto loc_8282AAA4;
	// lwz r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8282aad4
	if (ctx.cr6.eq) goto loc_8282AAD4;
loc_8282AAA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,816
	ctx.r4.s64 = ctx.r1.s64 + 816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282AAD4:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8282AAE4;
	sub_82A4EA80(ctx, base);
loc_8282AAE4:
	// lwz r30,644(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 644);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8282ab7c
	if (ctx.cr6.eq) goto loc_8282AB7C;
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lwz r9,816(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// lwz r8,820(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lwz r7,1552(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// lwz r27,824(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r26,808(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ble cr6,0x8282ab74
	if (!ctx.cr6.gt) goto loc_8282AB74;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8282AB34:
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// li r9,16543
	ctx.r9.s64 = 16543;
	// rldicr r8,r27,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r6,r26,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x828d8688
	ctx.lr = 0x8282AB58;
	sub_828D8688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8282ab74
	if (!ctx.cr0.eq) goto loc_8282AB74;
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282ab34
	if (ctx.cr6.lt) goto loc_8282AB34;
loc_8282AB74:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x8282ab80
	goto loc_8282AB80;
loc_8282AB7C:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8282AB80:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8282b010
	if (ctx.cr6.eq) goto loc_8282B010;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,-25080
	ctx.r9.s64 = ctx.r11.s64 + -25080;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lfs f20,-25080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f20.f64 = double(temp.f32);
	// lfs f22,16684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16684);
	ctx.f22.f64 = double(temp.f32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// lfs f23,-20040(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20040);
	ctx.f23.f64 = double(temp.f32);
	// lfs f21,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f21.f64 = double(temp.f32);
	// lfs f27,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,23968(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 23968);
	ctx.f31.f64 = double(temp.f32);
loc_8282ABC0:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x829bee20
	ctx.lr = 0x8282ABC8;
	sub_829BEE20(ctx, base);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8282b004
	if (ctx.cr6.eq) goto loc_8282B004;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8282abf8
	if (ctx.cr0.eq) goto loc_8282ABF8;
loc_8282ABE4:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8282b004
	if (ctx.cr6.eq) goto loc_8282B004;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8282abe4
	if (!ctx.cr6.eq) goto loc_8282ABE4;
loc_8282ABF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282b004
	if (ctx.cr0.eq) goto loc_8282B004;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AC28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282afe4
	if (ctx.cr0.eq) goto loc_8282AFE4;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282afe4
	if (!ctx.cr0.eq) goto loc_8282AFE4;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,800(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fsubs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lwz r9,816(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,804(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwz r8,620(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,624(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lfs f13,808(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// fsubs f29,f11,f12
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bne cr6,0x8282acc8
	if (!ctx.cr6.eq) goto loc_8282ACC8;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8282acc8
	if (!ctx.cr6.eq) goto loc_8282ACC8;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,824(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8282adc4
	if (ctx.cr6.eq) goto loc_8282ADC4;
loc_8282ACC8:
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,440(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,432(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f9,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f7,f13,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f7,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f6,f13,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f2,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f1.f64 = double(temp.f32);
	// lfs f26,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f24.f64 = double(temp.f32);
	// lfs f19,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f11,f5,f12,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f5,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f10,f4,f12,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f4,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f3,f12,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f17,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f17.f64 = double(temp.f32);
	// lfs f3,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f3.f64 = double(temp.f32);
	// lfs f16,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f16.f64 = double(temp.f32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f9,f8,f2
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f1,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f6,f26,f11
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f11.f64));
	// fmadds f8,f25,f10,f8
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f7,f24,f9,f7
	ctx.f7.f64 = double(float(ctx.f24.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f10,f19,f10,f6
	ctx.f10.f64 = double(float(ctx.f19.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f8,f18,f9,f8
	ctx.f8.f64 = double(float(ctx.f18.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f11,f5,f11,f7
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f10,f4,f9,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fadds f9,f8,f17
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f17.f64));
	// fadds f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f10,f10,f16
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f16.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8282ADC4:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282ADE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f27,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f27,292(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stw r27,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r27.u32);
	// stfs f27,296(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stw r28,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// stfs f27,300(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stw r28,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r28.u32);
	// stfs f27,304(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// stfs f27,308(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// stfs f27,312(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stw r28,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r28.u32);
	// stfs f27,316(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stw r28,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r28.u32);
	// stfs f27,320(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// stfs f21,324(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x829c4950
	ctx.lr = 0x8282AE3C;
	sub_829C4950(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8282af78
	if (ctx.cr0.eq) goto loc_8282AF78;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282af70
	if (ctx.cr0.eq) goto loc_8282AF70;
	// stfs f27,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// stfs f27,212(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// stfs f27,216(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stfs f27,220(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stfs f27,224(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r28.u32);
	// stfs f27,228(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r28.u32);
	// stfs f27,232(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stfs f27,236(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r28,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r28.u32);
	// stfs f27,240(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r8,16543
	ctx.r8.s64 = 16543;
	// stfs f21,244(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f27,96(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c4ca0
	ctx.lr = 0x8282AED0;
	sub_829C4CA0(ctx, base);
	// lfs f0,244(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// bge cr6,0x8282af70
	if (!ctx.cr6.lt) goto loc_8282AF70;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AEF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x829bed50
	ctx.lr = 0x8282AEF4;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282af04
	if (ctx.cr0.eq) goto loc_8282AF04;
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8282af08
	goto loc_8282AF08;
loc_8282AF04:
	// fmr f0,f21
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f21.f64;
loc_8282AF08:
	// lfs f13,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// lfs f12,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f25,f11,f0
	ctx.f25.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f26,176(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f25,180(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// fmuls f24,f13,f0
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f24,184(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AF50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f30,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fadds f29,f25,f29
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f29.f64));
	// fadds f28,f24,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// bl 0x829c4950
	ctx.lr = 0x8282AF6C;
	sub_829C4950(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8282AF70:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8282afe4
	if (!ctx.cr6.eq) goto loc_8282AFE4;
loc_8282AF78:
	// fmuls f0,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fmadds f0,f30,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f20
	ctx.cr6.compare(ctx.f0.f64, ctx.f20.f64);
	// ble cr6,0x8282afdc
	if (!ctx.cr6.gt) goto loc_8282AFDC;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// fmuls f0,f30,f22
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f22.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f29,f22
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f22.f64));
	// fmuls f0,f28,f22
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f22.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x828264e0
	ctx.lr = 0x8282AFDC;
	sub_828264E0(ctx, base);
loc_8282AFDC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8282b004
	if (ctx.cr6.eq) goto loc_8282B004;
loc_8282AFE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 864);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282AFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282b0e4
	if (!ctx.cr0.eq) goto loc_8282B0E4;
loc_8282B004:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8282abc0
	if (!ctx.cr6.eq) goto loc_8282ABC0;
loc_8282B010:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,364
	ctx.r5.s64 = ctx.r1.s64 + 364;
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8282b0b0
	if (ctx.cr6.eq) goto loc_8282B0B0;
loc_8282B038:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x829bee20
	ctx.lr = 0x8282B040;
	sub_829BEE20(ctx, base);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8282b0a4
	if (ctx.cr6.eq) goto loc_8282B0A4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8282b070
	if (ctx.cr0.eq) goto loc_8282B070;
loc_8282B05C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8282b0a4
	if (ctx.cr6.eq) goto loc_8282B0A4;
	// lwz r11,716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8282b05c
	if (!ctx.cr6.eq) goto loc_8282B05C;
loc_8282B070:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,604(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282b0a4
	if (ctx.cr0.eq) goto loc_8282B0A4;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282B0A4:
	// lwz r30,68(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8282b038
	if (!ctx.cr6.eq) goto loc_8282B038;
loc_8282B0B0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8282b0d0
	if (ctx.cr6.eq) goto loc_8282B0D0;
loc_8282B0BC:
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// bl 0x82332db8
	ctx.lr = 0x8282B0C4;
	sub_82332DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8282b0bc
	if (!ctx.cr6.eq) goto loc_8282B0BC;
loc_8282B0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282B0D4:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61764
	ctx.lr = 0x8282B0E0;
	__restfpr_16(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
loc_8282B0E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B0FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8282b0d4
	goto loc_8282B0D4;
}

__attribute__((alias("__imp__sub_8282B120"))) PPC_WEAK_FUNC(sub_8282B120);
PPC_FUNC_IMPL(__imp__sub_8282B120) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82a45cf0
	sub_82A45CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B130"))) PPC_WEAK_FUNC(sub_8282B130);
PPC_FUNC_IMPL(__imp__sub_8282B130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8282B138;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r28,13024(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,452(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b1d8
	if (!ctx.cr6.gt) goto loc_8282B1D8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
loc_8282B164:
	// lwz r11,448(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwzx r24,r30,r11
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82414568
	ctx.lr = 0x8282B19C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B1B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x8282B1BC;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8282B1C4;
	sub_82333960(ctx, base);
	// lwz r11,452(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 452);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b164
	if (ctx.cr6.lt) goto loc_8282B164;
loc_8282B1D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B1E0"))) PPC_WEAK_FUNC(sub_8282B1E0);
PPC_FUNC_IMPL(__imp__sub_8282B1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8282B1E8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// std r7,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r7.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r8,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r8.u64);
	// std r9,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r9.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r10,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r10.u64);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x8282b438
	if (ctx.cr6.eq) goto loc_8282B438;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r23,r31,148
	ctx.r23.s64 = ctx.r31.s64 + 148;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b424
	if (!ctx.cr6.gt) goto loc_8282B424;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,13040(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13040);
loc_8282B254:
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// twllei r11,0
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r28,r5,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// lwzx r31,r6,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8282b294
	if (ctx.cr6.eq) goto loc_8282B294;
	// lwz r10,1432(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1432);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282b2a4
	if (ctx.cr6.eq) goto loc_8282B2A4;
loc_8282B294:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b254
	if (ctx.cr6.lt) goto loc_8282B254;
	// b 0x8282b424
	goto loc_8282B424;
loc_8282B2A4:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,1408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282B2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8282b364
	if (ctx.cr6.eq) goto loc_8282B364;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8282b358
	if (ctx.cr6.eq) goto loc_8282B358;
	// bl 0x82416348
	ctx.lr = 0x8282B350;
	sub_82416348(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829c6648
	ctx.lr = 0x8282B358;
	sub_829C6648(ctx, base);
loc_8282B358:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c65d8
	ctx.lr = 0x8282B364;
	sub_829C65D8(ctx, base);
loc_8282B364:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r27,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r27.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwimi r11,r27,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// lwz r7,292(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 488, ctx.r11.u32);
	// bl 0x828ae6e8
	ctx.lr = 0x8282B398;
	sub_828AE6E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B3E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978d98
	ctx.lr = 0x8282B3EC;
	sub_82978D98(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r29,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r29.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r11,13040(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13040, ctx.r11.u32);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8282b414
	if (ctx.cr6.lt) goto loc_8282B414;
	// stw r29,13040(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13040, ctx.r29.u32);
loc_8282B414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc498
	ctx.lr = 0x8282B41C;
	sub_829BC498(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
loc_8282B424:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282B438:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B448"))) PPC_WEAK_FUNC(sub_8282B448);
PPC_FUNC_IMPL(__imp__sub_8282B448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282B450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// beq cr6,0x8282b52c
	if (ctx.cr6.eq) goto loc_8282B52C;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r29,r11,148
	ctx.r29.s64 = ctx.r11.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,1408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8282b4ac
	if (ctx.cr6.eq) goto loc_8282B4AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978ed0
	ctx.lr = 0x8282B494;
	sub_82978ED0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282B4AC:
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282b4c8
	if (ctx.cr6.eq) goto loc_8282B4C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82978bc0
	ctx.lr = 0x8282B4C8;
	sub_82978BC0(ctx, base);
loc_8282B4C8:
	// lwz r9,1420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// stw r8,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r8.u32);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282b510
	if (!ctx.cr6.eq) goto loc_8282B510;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282b510
	if (ctx.cr6.eq) goto loc_8282B510;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282b510
	if (!ctx.cr6.eq) goto loc_8282B510;
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
loc_8282B510:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282B52C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B538"))) PPC_WEAK_FUNC(sub_8282B538);
PPC_FUNC_IMPL(__imp__sub_8282B538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8282B540;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282b6a8
	if (!ctx.cr6.eq) goto loc_8282B6A8;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b6a8
	if (!ctx.cr6.gt) goto loc_8282B6A8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r27,r3,124
	ctx.r27.s64 = ctx.r3.s64 + 124;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_8282B580:
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x8282B588;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282b5a0
	if (ctx.cr0.eq) goto loc_8282B5A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828ae770
	ctx.lr = 0x8282B598;
	sub_828AE770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8282b5a4
	goto loc_8282B5A4;
loc_8282B5A0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8282B5A4:
	// stw r28,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r28.u32);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
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
	ctx.lr = 0x8282B5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332d50
	ctx.lr = 0x8282B610;
	sub_82332D50(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282b624
	if (ctx.cr0.eq) goto loc_8282B624;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8282B624:
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// stw r28,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r28.u32);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282b654
	if (!ctx.cr6.eq) goto loc_8282B654;
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282b654
	if (ctx.cr6.eq) goto loc_8282B654;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282b654
	if (!ctx.cr6.eq) goto loc_8282B654;
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
loc_8282B654:
	// lwz r30,1408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8282b698
	if (ctx.cr0.eq) goto loc_8282B698;
	// bl 0x82831538
	ctx.lr = 0x8282B664;
	sub_82831538(ctx, base);
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
	ctx.lr = 0x8282B67C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8282b68c
	if (!ctx.cr0.eq) goto loc_8282B68C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8282B68C:
	// stw r28,564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 564, ctx.r28.u32);
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// stw r31,576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 576, ctx.r31.u32);
loc_8282B698:
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b580
	if (ctx.cr6.lt) goto loc_8282B580;
loc_8282B6A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B6B8"))) PPC_WEAK_FUNC(sub_8282B6B8);
PPC_FUNC_IMPL(__imp__sub_8282B6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8282B6C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8282b760
	if (ctx.cr6.eq) goto loc_8282B760;
	// lwz r8,168(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8282b728
	if (!ctx.cr6.gt) goto loc_8282B728;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8282B6F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282b760
	if (!ctx.cr6.eq) goto loc_8282B760;
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8282b710
	if (!ctx.cr6.eq) goto loc_8282B710;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8282B710:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8282b6f0
	if (ctx.cr6.lt) goto loc_8282B6F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282b760
	if (!ctx.cr6.eq) goto loc_8282B760;
loc_8282B728:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8282B730:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8282b760
	if (!ctx.cr6.lt) goto loc_8282B760;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x8282B750;
	sub_8282B6B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282b730
	if (ctx.cr0.eq) goto loc_8282B730;
loc_8282B760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B768"))) PPC_WEAK_FUNC(sub_8282B768);
PPC_FUNC_IMPL(__imp__sub_8282B768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8282B770;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r31,r28,248
	ctx.r31.s64 = ctx.r28.s64 + 248;
	// lwz r26,264(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8282b7e0
	if (!ctx.cr6.gt) goto loc_8282B7E0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8282B79C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8282b7cc
	if (!ctx.cr6.eq) goto loc_8282B7CC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8282B7C4;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_8282B7CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b79c
	if (ctx.cr6.lt) goto loc_8282B79C;
loc_8282B7E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf. r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8282b834
	if (!ctx.cr0.eq) goto loc_8282B834;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b8b8
	if (!ctx.cr6.gt) goto loc_8282B8B8;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8282B800:
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8282b768
	ctx.lr = 0x8282B814;
	sub_8282B768(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x8282b834
	if (!ctx.cr0.eq) goto loc_8282B834;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b800
	if (ctx.cr6.lt) goto loc_8282B800;
	// b 0x8282b8b8
	goto loc_8282B8B8;
loc_8282B834:
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b894
	if (!ctx.cr6.gt) goto loc_8282B894;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8282B848:
	// lwz r11,560(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 560);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r30,260(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 260);
	// addi r31,r11,248
	ctx.r31.s64 = ctx.r11.s64 + 248;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8282B868;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282b880
	if (ctx.cr0.eq) goto loc_8282B880;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8282B880:
	// lwz r11,264(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 264);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b848
	if (ctx.cr6.lt) goto loc_8282B848;
loc_8282B894:
	// lwz r11,268(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// addi r3,r27,248
	ctx.r3.s64 = ctx.r27.s64 + 248;
	// stw r24,264(r27)
	PPC_STORE_U32(ctx.r27.u32 + 264, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282b8b8
	if (ctx.cr6.eq) goto loc_8282B8B8;
	// stw r24,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8282B8B8;
	sub_82332C38(ctx, base);
loc_8282B8B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282B8C8"))) PPC_WEAK_FUNC(sub_8282B8C8);
PPC_FUNC_IMPL(__imp__sub_8282B8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282B8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r31,604(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r30,504(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282b974
	if (!ctx.cr6.gt) goto loc_8282B974;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8282B934:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282b964
	if (!ctx.cr6.eq) goto loc_8282B964;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8282b964
	if (!ctx.cr6.eq) goto loc_8282B964;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8282b97c
	if (ctx.cr6.eq) goto loc_8282B97C;
loc_8282B964:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282b934
	if (ctx.cr6.lt) goto loc_8282B934;
loc_8282B974:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824cac78
	ctx.lr = 0x8282B97C;
	sub_824CAC78(ctx, base);
loc_8282B97C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282b9a8
	if (ctx.cr6.eq) goto loc_8282B9A8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282ba1c
	if (!ctx.cr6.eq) goto loc_8282BA1C;
loc_8282B9A8:
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r10,r10,-12444
	ctx.r10.s64 = ctx.r10.s64 + -12444;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
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
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// bl 0x824cac78
	ctx.lr = 0x8282BA00;
	sub_824CAC78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bl 0x8282c688
	ctx.lr = 0x8282BA0C;
	sub_8282C688(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400f38
	ctx.lr = 0x8282BA14;
	sub_82400F38(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82400f38
	ctx.lr = 0x8282BA1C;
	sub_82400F38(ctx, base);
loc_8282BA1C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BA28"))) PPC_WEAK_FUNC(sub_8282BA28);
PPC_FUNC_IMPL(__imp__sub_8282BA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282BA30;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r4.u64);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,604(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r29,504(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BA78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 + 520;
	// bl 0x828cd3d0
	ctx.lr = 0x8282BA84;
	sub_828CD3D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282bab0
	if (ctx.cr6.eq) goto loc_8282BAB0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282bb28
	if (!ctx.cr6.eq) goto loc_8282BB28;
loc_8282BAB0:
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r9,r9,-12444
	ctx.r9.s64 = ctx.r9.s64 + -12444;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x824cac78
	ctx.lr = 0x8282BB0C;
	sub_824CAC78(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x8282c688
	ctx.lr = 0x8282BB18;
	sub_8282C688(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400f38
	ctx.lr = 0x8282BB20;
	sub_82400F38(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82400f38
	ctx.lr = 0x8282BB28;
	sub_82400F38(ctx, base);
loc_8282BB28:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BB30"))) PPC_WEAK_FUNC(sub_8282BB30);
PPC_FUNC_IMPL(__imp__sub_8282BB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8282BB38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,604(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 604);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r27,504(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,508
	ctx.r4.s64 = ctx.r31.s64 + 508;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824cac78
	ctx.lr = 0x8282BB68;
	sub_824CAC78(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282bba0
	if (!ctx.cr6.gt) goto loc_8282BBA0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8282BB7C:
	// lwz r11,532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x824cac78
	ctx.lr = 0x8282BB8C;
	sub_824CAC78(ctx, base);
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282bb7c
	if (ctx.cr6.lt) goto loc_8282BB7C;
loc_8282BBA0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BBC0"))) PPC_WEAK_FUNC(sub_8282BBC0);
PPC_FUNC_IMPL(__imp__sub_8282BBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282BBC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r31,604(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// lwz r30,504(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BBF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282bc18
	if (ctx.cr6.eq) goto loc_8282BC18;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x8282BC18;
	sub_82332C38(ctx, base);
loc_8282BC18:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282bc44
	if (ctx.cr6.eq) goto loc_8282BC44;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282bca8
	if (!ctx.cr6.eq) goto loc_8282BCA8;
loc_8282BC44:
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r9,r9,-12444
	ctx.r9.s64 = ctx.r9.s64 + -12444;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x8282c688
	ctx.lr = 0x8282BC98;
	sub_8282C688(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400f38
	ctx.lr = 0x8282BCA0;
	sub_82400F38(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82400f38
	ctx.lr = 0x8282BCA8;
	sub_82400F38(ctx, base);
loc_8282BCA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BCB0"))) PPC_WEAK_FUNC(sub_8282BCB0);
PPC_FUNC_IMPL(__imp__sub_8282BCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8282BCB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r11,-12444
	ctx.r9.s64 = ctx.r11.s64 + -12444;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// lwz r30,604(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r29,504(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BD34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282bd6c
	if (!ctx.cr6.gt) goto loc_8282BD6C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8282BD48:
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x824cac78
	ctx.lr = 0x8282BD58;
	sub_824CAC78(ctx, base);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282bd48
	if (ctx.cr6.lt) goto loc_8282BD48;
loc_8282BD6C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282bdac
	if (!ctx.cr6.gt) goto loc_8282BDAC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8282bd9c
	if (ctx.cr6.eq) goto loc_8282BD9C;
	// lwz r4,80(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// b 0x8282bda0
	goto loc_8282BDA0;
loc_8282BD9C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8282BDA0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bl 0x8282c600
	ctx.lr = 0x8282BDAC;
	sub_8282C600(ctx, base);
loc_8282BDAC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400f38
	ctx.lr = 0x8282BDB4;
	sub_82400F38(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82400f38
	ctx.lr = 0x8282BDBC;
	sub_82400F38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BDC8"))) PPC_WEAK_FUNC(sub_8282BDC8);
PPC_FUNC_IMPL(__imp__sub_8282BDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8282BDD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r3,560(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 560);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// beq cr6,0x8282bed0
	if (ctx.cr6.eq) goto loc_8282BED0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x828380b0
	ctx.lr = 0x8282BE1C;
	sub_828380B0(ctx, base);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8282bed0
	if (!ctx.cr6.gt) goto loc_8282BED0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8282BE30:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8282be64
	if (ctx.cr6.eq) goto loc_8282BE64;
	// bl 0x8282dc98
	ctx.lr = 0x8282BE44;
	sub_8282DC98(ctx, base);
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
	ctx.lr = 0x8282BE5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282be68
	if (!ctx.cr0.eq) goto loc_8282BE68;
loc_8282BE64:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8282BE68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8282bebc
	if (ctx.cr6.eq) goto loc_8282BEBC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8282be84
	if (ctx.cr6.eq) goto loc_8282BE84;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8282bebc
	if (!ctx.cr6.eq) goto loc_8282BEBC;
loc_8282BE84:
	// lwz r11,788(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282bea4
	if (ctx.cr6.eq) goto loc_8282BEA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0ad0
	ctx.lr = 0x8282BE9C;
	sub_828E0AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282bebc
	if (!ctx.cr0.eq) goto loc_8282BEBC;
loc_8282BEA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282BEBC:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8282be30
	if (ctx.cr6.lt) goto loc_8282BE30;
loc_8282BED0:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x8282BEE4;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282bef4
	if (ctx.cr6.eq) goto loc_8282BEF4;
	// bl 0x82332db8
	ctx.lr = 0x8282BEF4;
	sub_82332DB8(ctx, base);
loc_8282BEF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BF00"))) PPC_WEAK_FUNC(sub_8282BF00);
PPC_FUNC_IMPL(__imp__sub_8282BF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8282BF08;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// beq cr6,0x8282bfd8
	if (ctx.cr6.eq) goto loc_8282BFD8;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282bfd8
	if (!ctx.cr6.eq) goto loc_8282BFD8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r3,560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// bl 0x82830778
	ctx.lr = 0x8282BF68;
	sub_82830778(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282bfd0
	if (!ctx.cr6.gt) goto loc_8282BFD0;
loc_8282BF78:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8282bfbc
	if (!ctx.cr6.eq) goto loc_8282BFBC;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8282bfbc
	if (ctx.cr0.eq) goto loc_8282BFBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282BFB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8282BFBC:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282bf78
	if (ctx.cr6.lt) goto loc_8282BF78;
loc_8282BFD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8282BFD8;
	sub_8239D768(ctx, base);
loc_8282BFD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282BFE8"))) PPC_WEAK_FUNC(sub_8282BFE8);
PPC_FUNC_IMPL(__imp__sub_8282BFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282BFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r31,832(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C018;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,836(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 836);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C044;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C05C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,840(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 840);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C070;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,844(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 844);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C09C;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C0B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,848(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 848);
	// addi r4,r31,1456
	ctx.r4.s64 = ctx.r31.s64 + 1456;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f0b8
	ctx.lr = 0x8282C0C8;
	sub_8282F0B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C0E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,852(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C0F4;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,856(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 856);
	// addi r4,r31,1432
	ctx.r4.s64 = ctx.r31.s64 + 1432;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C120;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,860(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 860);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,1488
	ctx.r4.s64 = ctx.r31.s64 + 1488;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x824a2bd0
	ctx.lr = 0x8282C14C;
	sub_824A2BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,864(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 864);
	// addi r4,r31,1456
	ctx.r4.s64 = ctx.r31.s64 + 1456;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8282f630
	ctx.lr = 0x8282C178;
	sub_8282F630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1012(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1012);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C198"))) PPC_WEAK_FUNC(sub_8282C198);
PPC_FUNC_IMPL(__imp__sub_8282C198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14696
	ctx.r31.s64 = ctx.r11.s64 + 14696;
	// lwz r11,14692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14692);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c1e0
	if (!ctx.cr0.eq) goto loc_8282C1E0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25372
	ctx.r9.s64 = ctx.r9.s64 + 25372;
	// stw r11,14692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14692, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25136
	ctx.r3.s64 = ctx.r11.s64 + -25136;
	// bl 0x82a4c758
	ctx.lr = 0x8282C1E0;
	sub_82A4C758(ctx, base);
loc_8282C1E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C1E8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14720
	ctx.r31.s64 = ctx.r11.s64 + 14720;
	// lwz r11,14716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14716);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c220
	if (!ctx.cr0.eq) goto loc_8282C220;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25452
	ctx.r9.s64 = ctx.r9.s64 + 25452;
	// stw r11,14716(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14716, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25208
	ctx.r3.s64 = ctx.r11.s64 + -25208;
	// bl 0x82a4c758
	ctx.lr = 0x8282C220;
	sub_82A4C758(ctx, base);
loc_8282C220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C228;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14744
	ctx.r31.s64 = ctx.r11.s64 + 14744;
	// lwz r11,14740(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14740);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c260
	if (!ctx.cr0.eq) goto loc_8282C260;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25532
	ctx.r9.s64 = ctx.r9.s64 + 25532;
	// stw r11,14740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14740, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25280
	ctx.r3.s64 = ctx.r11.s64 + -25280;
	// bl 0x82a4c758
	ctx.lr = 0x8282C260;
	sub_82A4C758(ctx, base);
loc_8282C260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C268;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14768
	ctx.r31.s64 = ctx.r11.s64 + 14768;
	// lwz r11,14764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c2a0
	if (!ctx.cr0.eq) goto loc_8282C2A0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25612
	ctx.r9.s64 = ctx.r9.s64 + 25612;
	// stw r11,14764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14764, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// bl 0x82a4c758
	ctx.lr = 0x8282C2A0;
	sub_82A4C758(ctx, base);
loc_8282C2A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C2A8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14864
	ctx.r31.s64 = ctx.r11.s64 + 14864;
	// lwz r11,14860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14860);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c2e0
	if (!ctx.cr0.eq) goto loc_8282C2E0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25932
	ctx.r9.s64 = ctx.r9.s64 + 25932;
	// stw r11,14860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14860, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25640
	ctx.r3.s64 = ctx.r11.s64 + -25640;
	// bl 0x82a4c758
	ctx.lr = 0x8282C2E0;
	sub_82A4C758(ctx, base);
loc_8282C2E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C2E8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14792
	ctx.r31.s64 = ctx.r11.s64 + 14792;
	// lwz r11,14788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c320
	if (!ctx.cr0.eq) goto loc_8282C320;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25692
	ctx.r9.s64 = ctx.r9.s64 + 25692;
	// stw r11,14788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14788, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25424
	ctx.r3.s64 = ctx.r11.s64 + -25424;
	// bl 0x82a4c758
	ctx.lr = 0x8282C320;
	sub_82A4C758(ctx, base);
loc_8282C320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C328;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14816
	ctx.r31.s64 = ctx.r11.s64 + 14816;
	// lwz r11,14812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14812);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c360
	if (!ctx.cr0.eq) goto loc_8282C360;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25772
	ctx.r9.s64 = ctx.r9.s64 + 25772;
	// stw r11,14812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14812, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25496
	ctx.r3.s64 = ctx.r11.s64 + -25496;
	// bl 0x82a4c758
	ctx.lr = 0x8282C360;
	sub_82A4C758(ctx, base);
loc_8282C360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C368;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14840
	ctx.r31.s64 = ctx.r11.s64 + 14840;
	// lwz r11,14836(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14836);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c3a0
	if (!ctx.cr0.eq) goto loc_8282C3A0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25852
	ctx.r9.s64 = ctx.r9.s64 + 25852;
	// stw r11,14836(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14836, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25568
	ctx.r3.s64 = ctx.r11.s64 + -25568;
	// bl 0x82a4c758
	ctx.lr = 0x8282C3A0;
	sub_82A4C758(ctx, base);
loc_8282C3A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C3A8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14656
	ctx.r31.s64 = ctx.r11.s64 + 14656;
	// lwz r11,14652(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14652);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c3e0
	if (!ctx.cr0.eq) goto loc_8282C3E0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24172
	ctx.r9.s64 = ctx.r9.s64 + 24172;
	// stw r11,14652(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14652, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25040
	ctx.r3.s64 = ctx.r11.s64 + -25040;
	// bl 0x82a4c758
	ctx.lr = 0x8282C3E0;
	sub_82A4C758(ctx, base);
loc_8282C3E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C3E8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14888
	ctx.r31.s64 = ctx.r11.s64 + 14888;
	// lwz r11,14884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c420
	if (!ctx.cr0.eq) goto loc_8282C420;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26012
	ctx.r9.s64 = ctx.r9.s64 + 26012;
	// stw r11,14884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14884, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25712
	ctx.r3.s64 = ctx.r11.s64 + -25712;
	// bl 0x82a4c758
	ctx.lr = 0x8282C420;
	sub_82A4C758(ctx, base);
loc_8282C420:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C428;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14592
	ctx.r31.s64 = ctx.r11.s64 + 14592;
	// lwz r11,14596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c460
	if (!ctx.cr0.eq) goto loc_8282C460;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24728
	ctx.r9.s64 = ctx.r9.s64 + -24728;
	// stw r11,14596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14596, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24560
	ctx.r3.s64 = ctx.r11.s64 + -24560;
	// bl 0x82a4c758
	ctx.lr = 0x8282C460;
	sub_82A4C758(ctx, base);
loc_8282C460:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C468;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14580
	ctx.r31.s64 = ctx.r11.s64 + 14580;
	// lwz r11,14584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c4a0
	if (!ctx.cr0.eq) goto loc_8282C4A0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-24668
	ctx.r9.s64 = ctx.r9.s64 + -24668;
	// stw r11,14584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14584, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24608
	ctx.r3.s64 = ctx.r11.s64 + -24608;
	// bl 0x82a4c758
	ctx.lr = 0x8282C4A0;
	sub_82A4C758(ctx, base);
loc_8282C4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C4A8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14628
	ctx.r31.s64 = ctx.r11.s64 + 14628;
	// lwz r11,14632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c4e0
	if (!ctx.cr0.eq) goto loc_8282C4E0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-12404
	ctx.r9.s64 = ctx.r9.s64 + -12404;
	// stw r11,14632(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14632, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24632
	ctx.r3.s64 = ctx.r11.s64 + -24632;
	// bl 0x82a4c758
	ctx.lr = 0x8282C4E0;
	sub_82A4C758(ctx, base);
loc_8282C4E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C4E8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,14928
	ctx.r31.s64 = ctx.r11.s64 + 14928;
	// lwz r11,14924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c520
	if (!ctx.cr0.eq) goto loc_8282C520;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26452
	ctx.r9.s64 = ctx.r9.s64 + -26452;
	// stw r11,14924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14924, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24872
	ctx.r3.s64 = ctx.r11.s64 + -24872;
	// bl 0x82a4c758
	ctx.lr = 0x8282C520;
	sub_82A4C758(ctx, base);
loc_8282C520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C528;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13268
	ctx.r31.s64 = ctx.r11.s64 + 13268;
	// lwz r11,13264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c560
	if (!ctx.cr0.eq) goto loc_8282C560;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22316
	ctx.r9.s64 = ctx.r9.s64 + 22316;
	// stw r11,13264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13264, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,25848
	ctx.r3.s64 = ctx.r11.s64 + 25848;
	// bl 0x82a4c758
	ctx.lr = 0x8282C560;
	sub_82A4C758(ctx, base);
loc_8282C560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C568;
	sub_8243B490(ctx, base);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r31,r11,-25564
	ctx.r31.s64 = ctx.r11.s64 + -25564;
	// lwz r11,-25552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c5a0
	if (!ctx.cr0.eq) goto loc_8282C5A0;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14708
	ctx.r9.s64 = ctx.r9.s64 + 14708;
	// stw r11,-25552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25552, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-9520
	ctx.r3.s64 = ctx.r11.s64 + -9520;
	// bl 0x82a4c758
	ctx.lr = 0x8282C5A0;
	sub_82A4C758(ctx, base);
loc_8282C5A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C5A8;
	sub_8243B490(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,11436
	ctx.r31.s64 = ctx.r11.s64 + 11436;
	// lwz r11,11432(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11432);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282c5e0
	if (!ctx.cr0.eq) goto loc_8282C5E0;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26796
	ctx.r9.s64 = ctx.r9.s64 + 26796;
	// stw r11,11432(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11432, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,15208
	ctx.r3.s64 = ctx.r11.s64 + 15208;
	// bl 0x82a4c758
	ctx.lr = 0x8282C5E0;
	sub_82A4C758(ctx, base);
loc_8282C5E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8243b490
	ctx.lr = 0x8282C5E8;
	sub_8243B490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C600"))) PPC_WEAK_FUNC(sub_8282C600);
PPC_FUNC_IMPL(__imp__sub_8282C600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282c640
	if (ctx.cr6.eq) goto loc_8282C640;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8282c644
	goto loc_8282C644;
loc_8282C640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282C644:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282c658
	if (ctx.cr6.eq) goto loc_8282C658;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829141f0
	ctx.lr = 0x8282C654;
	sub_829141F0(ctx, base);
	// b 0x8282c670
	goto loc_8282C670;
loc_8282C658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C66C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282C670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C688"))) PPC_WEAK_FUNC(sub_8282C688);
PPC_FUNC_IMPL(__imp__sub_8282C688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282C690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c6ec
	if (ctx.cr6.eq) goto loc_8282C6EC;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8282c6e4
	if (!ctx.cr6.gt) goto loc_8282C6E4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8282C6BC:
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x829141f0
	ctx.lr = 0x8282C6CC;
	sub_829141F0(ctx, base);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8282c6bc
	if (ctx.cr6.lt) goto loc_8282C6BC;
loc_8282C6E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8282c704
	goto loc_8282C704;
loc_8282C6EC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282C704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C710"))) PPC_WEAK_FUNC(sub_8282C710);
PPC_FUNC_IMPL(__imp__sub_8282C710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8282C718;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r26,13024(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1020(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1020);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8282C74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282c774
	if (ctx.cr0.eq) goto loc_8282C774;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8282c810
	goto loc_8282C810;
loc_8282C774:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c78c
	if (ctx.cr6.eq) goto loc_8282C78C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282c80c
	if (!ctx.cr6.eq) goto loc_8282C80C;
loc_8282C78C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282c7b0
	if (ctx.cr0.eq) goto loc_8282C7B0;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8282c80c
	if (!ctx.cr6.eq) goto loc_8282C80C;
loc_8282C7B0:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8282c80c
	if (!ctx.cr0.eq) goto loc_8282C80C;
	// lwz r11,656(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c80c
	if (ctx.cr6.eq) goto loc_8282C80C;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c80c
	if (ctx.cr6.eq) goto loc_8282C80C;
	// lwz r3,656(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282c80c
	if (ctx.cr0.eq) goto loc_8282C80C;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82913ec0
	ctx.lr = 0x8282C808;
	sub_82913EC0(ctx, base);
	// b 0x8282c810
	goto loc_8282C810;
loc_8282C80C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282C810:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C818"))) PPC_WEAK_FUNC(sub_8282C818);
PPC_FUNC_IMPL(__imp__sub_8282C818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8282C820;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8282c860
	if (ctx.cr6.eq) goto loc_8282C860;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8282c948
	if (!ctx.cr0.eq) goto loc_8282C948;
loc_8282C860:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c87c
	if (ctx.cr6.eq) goto loc_8282C87C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282c948
	if (!ctx.cr6.eq) goto loc_8282C948;
loc_8282C87C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8282c8a4
	if (ctx.cr6.eq) goto loc_8282C8A4;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8282c948
	if (!ctx.cr0.eq) goto loc_8282C948;
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282c8a4
	if (ctx.cr6.eq) goto loc_8282C8A4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8282c948
	if (ctx.cr6.eq) goto loc_8282C948;
loc_8282C8A4:
	// lwz r11,824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 824);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282c948
	if (!ctx.cr6.gt) goto loc_8282C948;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8282C8B8:
	// lwz r11,820(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 820);
	// lwzx r31,r11,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282c934
	if (!ctx.cr0.eq) goto loc_8282C934;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c934
	if (ctx.cr6.eq) goto loc_8282C934;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c934
	if (ctx.cr6.eq) goto loc_8282C934;
	// lwz r3,656(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282C90C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282c934
	if (ctx.cr0.eq) goto loc_8282C934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x8282c930
	if (!ctx.cr6.eq) goto loc_8282C930;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8282C930:
	// bl 0x82913ec0
	ctx.lr = 0x8282C934;
	sub_82913EC0(ctx, base);
loc_8282C934:
	// lwz r11,824(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 824);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282c8b8
	if (ctx.cr6.lt) goto loc_8282C8B8;
loc_8282C948:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282C950"))) PPC_WEAK_FUNC(sub_8282C950);
PPC_FUNC_IMPL(__imp__sub_8282C950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,13024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282c97c
	if (ctx.cr6.eq) goto loc_8282C97C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282c97c
	if (ctx.cr6.eq) goto loc_8282C97C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282c994
	if (!ctx.cr6.eq) goto loc_8282C994;
loc_8282C97C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8282C994:
	// lwz r11,656(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282c9c8
	if (ctx.cr6.eq) goto loc_8282C9C8;
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 444);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282c9c8
	if (ctx.cr6.eq) goto loc_8282C9C8;
	// lwz r11,84(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8282c9c8
	if (!ctx.cr0.eq) goto loc_8282C9C8;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x82913ec0
	sub_82913EC0(ctx, base);
	return;
loc_8282C9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282C9D0"))) PPC_WEAK_FUNC(sub_8282C9D0);
PPC_FUNC_IMPL(__imp__sub_8282C9D0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,1336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r8,1332(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8282C9F0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8282ca14
	if (ctx.cr6.eq) goto loc_8282CA14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8282c9f0
	if (ctx.cr6.lt) goto loc_8282C9F0;
	// blr 
	return;
loc_8282CA14:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282CA20"))) PPC_WEAK_FUNC(sub_8282CA20);
PPC_FUNC_IMPL(__imp__sub_8282CA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282CA28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r29,r11,1320
	ctx.r29.s64 = ctx.r11.s64 + 1320;
	// lwz r11,1336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282ca94
	if (!ctx.cr6.gt) goto loc_8282CA94;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8282CA50:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8282ca80
	if (!ctx.cr6.eq) goto loc_8282CA80;
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
	ctx.lr = 0x8282CA78;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8282CA80:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282ca50
	if (ctx.cr6.lt) goto loc_8282CA50;
loc_8282CA94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8282cab4
	if (ctx.cr6.eq) goto loc_8282CAB4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282CAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282CAB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282CAC0"))) PPC_WEAK_FUNC(sub_8282CAC0);
PPC_FUNC_IMPL(__imp__sub_8282CAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8282CAC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x8282caf4
	if (!ctx.cr6.eq) goto loc_8282CAF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282CAF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282cc2c
	if (!ctx.cr6.gt) goto loc_8282CC2C;
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// lwz r29,1316(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1316);
	// stw r7,1400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1400, ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282cc2c
	if (!ctx.cr6.eq) goto loc_8282CC2C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,60
	ctx.r3.s64 = ctx.r29.s64 + 60;
	// bl 0x82400b48
	ctx.lr = 0x8282CB1C;
	sub_82400B48(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282cb30
	if (ctx.cr6.eq) goto loc_8282CB30;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8282cb38
	goto loc_8282CB38;
loc_8282CB30:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8282CB38:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x8282CB40;
	sub_82409058(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// lwz r4,132(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282CB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8282cb78
	if (ctx.cr6.eq) goto loc_8282CB78;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282cb78
	if (ctx.cr6.eq) goto loc_8282CB78;
	// bl 0x82332db8
	ctx.lr = 0x8282CB78;
	sub_82332DB8(ctx, base);
loc_8282CB78:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r31,r29,84
	ctx.r31.s64 = ctx.r29.s64 + 84;
	// lwz r28,16(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282cbb4
	if (!ctx.cr6.gt) goto loc_8282CBB4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8282CB94:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x8282CBA0;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282cb94
	if (ctx.cr6.lt) goto loc_8282CB94;
loc_8282CBB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8282cbdc
	if (ctx.cr6.eq) goto loc_8282CBDC;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8282CBDC;
	sub_82332C38(ctx, base);
loc_8282CBDC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282cc14
	if (!ctx.cr6.gt) goto loc_8282CC14;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8282CBF0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82418940
	ctx.lr = 0x8282CC00;
	sub_82418940(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282cbf0
	if (ctx.cr6.lt) goto loc_8282CBF0;
loc_8282CC14:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8282cc30
	if (ctx.cr6.eq) goto loc_8282CC30;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282cc40
	ctx.lr = 0x8282CC28;
	sub_8282CC40(ctx, base);
	// b 0x8282cc30
	goto loc_8282CC30;
loc_8282CC2C:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8282CC30:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282CC40"))) PPC_WEAK_FUNC(sub_8282CC40);
PPC_FUNC_IMPL(__imp__sub_8282CC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282CC48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r30,r11,1392
	ctx.r30.s64 = ctx.r11.s64 + 1392;
	// lwz r10,1392(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8282cd6c
	if (!ctx.cr6.eq) goto loc_8282CD6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282CC78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8282cc94
	if (!ctx.cr6.eq) goto loc_8282CC94;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82827c88
	ctx.lr = 0x8282CC90;
	sub_82827C88(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8282CC94:
	// lwz r10,560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r9.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282ccc8
	if (ctx.cr6.eq) goto loc_8282CCC8;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8282CCBC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8282CCC0;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// b 0x8282cccc
	goto loc_8282CCCC;
loc_8282CCC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282CCCC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282cd58
	if (ctx.cr6.eq) goto loc_8282CD58;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282ccf4
	if (ctx.cr6.eq) goto loc_8282CCF4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8282CCE8;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8282CCEC;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// b 0x8282ccf8
	goto loc_8282CCF8;
loc_8282CCF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282CCF8:
	// lwz r10,1412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282cd58
	if (ctx.cr6.eq) goto loc_8282CD58;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8282cd24
	if (ctx.cr6.eq) goto loc_8282CD24;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8282CD18;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8282CD1C;
	sub_82409C40(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// b 0x8282cd28
	goto loc_8282CD28;
loc_8282CD24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282CD28:
	// lwz r10,1412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// stw r29,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r29.u32);
	// lwz r9,788(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8282cd58
	if (!ctx.cr6.eq) goto loc_8282CD58;
	// lwz r9,144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8282cd58
	if (ctx.cr6.eq) goto loc_8282CD58;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8282cd58
	if (!ctx.cr6.eq) goto loc_8282CD58;
	// stw r29,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r29.u32);
loc_8282CD58:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,68(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282CD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282CD6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282CD78"))) PPC_WEAK_FUNC(sub_8282CD78);
PPC_FUNC_IMPL(__imp__sub_8282CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8282CD80;
	__savegprlr_26(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,1392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1392);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x8282d0f0
	if (ctx.cr6.gt) goto loc_8282D0F0;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30096
	ctx.r12.s64 = ctx.r12.s64 + -30096;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32125
	ctx.r12.s64 = -2105344000;
	// addi r12,r12,-12868
	ctx.r12.s64 = ctx.r12.s64 + -12868;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8282CDBC;
	case 1:
		goto loc_8282CDCC;
	case 2:
		goto loc_8282CDE8;
	case 3:
		goto loc_8282CE48;
	case 4:
		goto loc_8282CEA4;
	case 5:
		goto loc_8282CF60;
	case 6:
		goto loc_8282CDE8;
	case 7:
		goto loc_8282CE48;
	case 8:
		goto loc_8282D090;
	default:
		__builtin_unreachable();
	}
loc_8282CDBC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,14968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14968, ctx.r11.u32);
	// b 0x8282d0f0
	goto loc_8282D0F0;
loc_8282CDCC:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,14968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14968);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,14968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14968, ctx.r11.u32);
	// bne 0x8282d0f0
	if (!ctx.cr0.eq) goto loc_8282D0F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8282d0ec
	goto loc_8282D0EC;
loc_8282CDE8:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282ce04
	if (ctx.cr6.eq) goto loc_8282CE04;
	// bl 0x8282d448
	ctx.lr = 0x8282CE00;
	sub_8282D448(ctx, base);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8282CE04:
	// bl 0x82824f80
	ctx.lr = 0x8282CE08;
	sub_82824F80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x82824de8
	ctx.lr = 0x8282CE14;
	sub_82824DE8(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,14968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14968, ctx.r11.u32);
	// lwz r11,1392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1392);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// beq cr6,0x8282ce34
	if (ctx.cr6.eq) goto loc_8282CE34;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8282CE34:
	// stw r11,1392(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1392, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x8282CE44;
	sub_8282A2B0(ctx, base);
	// b 0x8282d0f0
	goto loc_8282D0F0;
loc_8282CE48:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,1000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8282d0f0
	if (ctx.cr6.gt) goto loc_8282D0F0;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r11,14968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14968);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,14968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14968, ctx.r11.u32);
	// bne 0x8282d0f0
	if (!ctx.cr0.eq) goto loc_8282D0F0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282CE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1392(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1392);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8282ce9c
	if (!ctx.cr6.eq) goto loc_8282CE9C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8282d0ec
	goto loc_8282D0EC;
loc_8282CE9C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8282d0ec
	goto loc_8282D0EC;
loc_8282CEA4:
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282cf58
	if (!ctx.cr6.gt) goto loc_8282CF58;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
loc_8282CECC:
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282ceec
	if (ctx.cr6.eq) goto loc_8282CEEC;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8282cef0
	goto loc_8282CEF0;
loc_8282CEEC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8282CEF0:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82409058
	ctx.lr = 0x8282CEF8;
	sub_82409058(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82824ab8
	ctx.lr = 0x8282CF24;
	sub_82824AB8(ctx, base);
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8282cf40
	if (ctx.cr6.eq) goto loc_8282CF40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282cf40
	if (ctx.cr6.eq) goto loc_8282CF40;
	// bl 0x82332db8
	ctx.lr = 0x8282CF40;
	sub_82332DB8(ctx, base);
loc_8282CF40:
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282cecc
	if (ctx.cr6.lt) goto loc_8282CECC;
loc_8282CF58:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8282d0ec
	goto loc_8282D0EC;
loc_8282CF60:
	// lwz r11,1400(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1316(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1316);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x8282d00c
	if (ctx.cr6.eq) goto loc_8282D00C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282cf84
	if (ctx.cr6.eq) goto loc_8282CF84;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8282cf8c
	goto loc_8282CF8C;
loc_8282CF84:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8282CF8C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82409058
	ctx.lr = 0x8282CF94;
	sub_82409058(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82824ab8
	ctx.lr = 0x8282CFC4;
	sub_82824AB8(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8282cfe0
	if (ctx.cr6.eq) goto loc_8282CFE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282cfe0
	if (ctx.cr6.eq) goto loc_8282CFE0;
	// bl 0x82332db8
	ctx.lr = 0x8282CFE0;
	sub_82332DB8(ctx, base);
loc_8282CFE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x8282CFEC;
	sub_8282A2B0(ctx, base);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x8282d448
	ctx.lr = 0x8282CFF4;
	sub_8282D448(ctx, base);
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r4,r11,-20176
	ctx.r4.s64 = ctx.r11.s64 + -20176;
	// bl 0x82823eb0
	ctx.lr = 0x8282D004;
	sub_82823EB0(ctx, base);
	// stw r30,1400(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1400, ctx.r30.u32);
	// b 0x8282d088
	goto loc_8282D088;
loc_8282D00C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282d01c
	if (ctx.cr6.eq) goto loc_8282D01C;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8282d024
	goto loc_8282D024;
loc_8282D01C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8282D024:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82409058
	ctx.lr = 0x8282D02C;
	sub_82409058(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82824ab8
	ctx.lr = 0x8282D05C;
	sub_82824AB8(ctx, base);
	// lwz r3,516(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// addi r11,r1,388
	ctx.r11.s64 = ctx.r1.s64 + 388;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8282d078
	if (ctx.cr6.eq) goto loc_8282D078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8282d078
	if (ctx.cr6.eq) goto loc_8282D078;
	// bl 0x82332db8
	ctx.lr = 0x8282D078;
	sub_82332DB8(ctx, base);
loc_8282D078:
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r4,r11,-20176
	ctx.r4.s64 = ctx.r11.s64 + -20176;
	// bl 0x82823de8
	ctx.lr = 0x8282D088;
	sub_82823DE8(ctx, base);
loc_8282D088:
	// stw r30,1392(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1392, ctx.r30.u32);
	// b 0x8282d0f0
	goto loc_8282D0F0;
loc_8282D090:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d0f0
	if (ctx.cr6.eq) goto loc_8282D0F0;
	// lwz r11,912(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 912);
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d0c0
	if (!ctx.cr6.eq) goto loc_8282D0C0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d0e8
	if (ctx.cr6.eq) goto loc_8282D0E8;
loc_8282D0C0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d0f0
	if (!ctx.cr6.eq) goto loc_8282D0F0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10836);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282d0f0
	if (!ctx.cr6.eq) goto loc_8282D0F0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82828cb8
	ctx.lr = 0x8282D0E8;
	sub_82828CB8(ctx, base);
loc_8282D0E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282D0EC:
	// stw r11,1392(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1392, ctx.r11.u32);
loc_8282D0F0:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D0F8"))) PPC_WEAK_FUNC(sub_8282D0F8);
PPC_FUNC_IMPL(__imp__sub_8282D0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d130
	if (ctx.cr6.eq) goto loc_8282D130;
	// lwz r8,532(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 656, ctx.r11.u32);
	// stw r11,648(r8)
	PPC_STORE_U32(ctx.r8.u32 + 648, ctx.r11.u32);
	// stw r9,636(r8)
	PPC_STORE_U32(ctx.r8.u32 + 636, ctx.r9.u32);
	// stw r11,640(r8)
	PPC_STORE_U32(ctx.r8.u32 + 640, ctx.r11.u32);
	// stw r11,644(r8)
	PPC_STORE_U32(ctx.r8.u32 + 644, ctx.r11.u32);
loc_8282D130:
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d164
	if (!ctx.cr6.eq) goto loc_8282D164;
	// lwz r11,520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d164
	if (!ctx.cr6.eq) goto loc_8282D164;
	// lwz r11,548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8282d164
	if (ctx.cr6.eq) goto loc_8282D164;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8282d164
	if (ctx.cr6.eq) goto loc_8282D164;
	// stw r9,528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 528, ctx.r9.u32);
loc_8282D164:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D170"))) PPC_WEAK_FUNC(sub_8282D170);
PPC_FUNC_IMPL(__imp__sub_8282D170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282D178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31946
	ctx.r31.s64 = -2093613056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-1476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1476);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d1f0
	if (ctx.cr6.eq) goto loc_8282D1F0;
	// bl 0x8312e74c
	ctx.lr = 0x8282D198;
	sub_8312E74C(ctx, base);
	// lwz r3,-1476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1476);
	// bl 0x8312e73c
	ctx.lr = 0x8282D1A0;
	sub_8312E73C(ctx, base);
	// lwz r29,-1476(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1476);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8282d1bc
	if (ctx.cr6.eq) goto loc_8282D1BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a63c0
	ctx.lr = 0x8282D1B4;
	sub_828A63C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x8282D1BC;
	sub_82332DB8(ctx, base);
loc_8282D1BC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82333900
	ctx.lr = 0x8282D1C4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282d1e8
	if (ctx.cr0.eq) goto loc_8282D1E8;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828a6288
	ctx.lr = 0x8282D1E0;
	sub_828A6288(ctx, base);
	// stw r3,-1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1476, ctx.r3.u32);
	// b 0x8282d1f0
	goto loc_8282D1F0;
loc_8282D1E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1476, ctx.r11.u32);
loc_8282D1F0:
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8282d20c
	if (ctx.cr6.eq) goto loc_8282D20C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8282d20c
	if (ctx.cr6.eq) goto loc_8282D20C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8282d224
	if (!ctx.cr6.eq) goto loc_8282D224;
loc_8282D20C:
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d224
	if (!ctx.cr6.eq) goto loc_8282D224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82828928
	ctx.lr = 0x8282D220;
	sub_82828928(ctx, base);
	// b 0x8282d2b4
	goto loc_8282D2B4;
loc_8282D224:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d2a8
	if (ctx.cr6.eq) goto loc_8282D2A8;
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8282d2a8
	if (!ctx.cr6.eq) goto loc_8282D2A8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x8282d264
	if (ctx.cr6.eq) goto loc_8282D264;
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// bne cr6,0x8282d2a8
	if (!ctx.cr6.eq) goto loc_8282D2A8;
loc_8282D264:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8276e958
	ctx.lr = 0x8282D294;
	sub_8276E958(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1404, ctx.r11.u32);
	// bl 0x82828928
	ctx.lr = 0x8282D2A4;
	sub_82828928(ctx, base);
	// b 0x8282d2d8
	goto loc_8282D2D8;
loc_8282D2A8:
	// lwz r11,792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d2d8
	if (!ctx.cr6.eq) goto loc_8282D2D8;
loc_8282D2B4:
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D2C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282d2d8
	if (ctx.cr0.eq) goto loc_8282D2D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1404(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1404, ctx.r11.u32);
loc_8282D2D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,792(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D2F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 936, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D300"))) PPC_WEAK_FUNC(sub_8282D300);
PPC_FUNC_IMPL(__imp__sub_8282D300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r11,10884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,1316(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1316);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8282D368"))) PPC_WEAK_FUNC(sub_8282D368);
PPC_FUNC_IMPL(__imp__sub_8282D368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D370"))) PPC_WEAK_FUNC(sub_8282D370);
PPC_FUNC_IMPL(__imp__sub_8282D370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282D378;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r29,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r29.u32);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8282d3b4
	if (!ctx.cr6.eq) goto loc_8282D3B4;
loc_8282D39C:
	// lwz r3,1316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8282d420
	goto loc_8282D420;
loc_8282D3B4:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282d408
	if (!ctx.cr0.eq) goto loc_8282D408;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8282d408
	if (!ctx.cr0.eq) goto loc_8282D408;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8282d39c
	if (ctx.cr0.eq) goto loc_8282D39C;
loc_8282D408:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282D420:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r29,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r29.u32);
	// lwz r11,1392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d43c
	if (ctx.cr6.eq) goto loc_8282D43C;
	// stw r29,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r29.u32);
	// bl 0x8282cd78
	ctx.lr = 0x8282D43C;
	sub_8282CD78(ctx, base);
loc_8282D43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D448"))) PPC_WEAK_FUNC(sub_8282D448);
PPC_FUNC_IMPL(__imp__sub_8282D448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8282D460;
	sub_82833108(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282d48c
	if (ctx.cr0.eq) goto loc_8282D48C;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82439d58
	ctx.lr = 0x8282D484;
	sub_82439D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8282d490
	goto loc_8282D490;
loc_8282D48C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8282D490:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8282D49C;
	sub_82833A30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D4B0"))) PPC_WEAK_FUNC(sub_8282D4B0);
PPC_FUNC_IMPL(__imp__sub_8282D4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8282D4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8282d500
	if (ctx.cr6.eq) goto loc_8282D500;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82830888
	ctx.lr = 0x8282D4F4;
	sub_82830888(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8282d528
	if (!ctx.cr6.eq) goto loc_8282D528;
loc_8282D500:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82830888
	ctx.lr = 0x8282D51C;
	sub_82830888(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d52c
	if (ctx.cr6.eq) goto loc_8282D52C;
loc_8282D528:
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_8282D52C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D538"))) PPC_WEAK_FUNC(sub_8282D538);
PPC_FUNC_IMPL(__imp__sub_8282D538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8282D540;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// lwz r30,1384(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8282d570
	if (ctx.cr6.eq) goto loc_8282D570;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8282d570
	if (ctx.cr6.eq) goto loc_8282D570;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8282d62c
	if (!ctx.cr6.eq) goto loc_8282D62C;
loc_8282D570:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-31404
	ctx.r10.s64 = ctx.r10.s64 + -31404;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r10,412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8282d5e8
	if (!ctx.cr6.gt) goto loc_8282D5E8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8282D5B8:
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8282D5D4;
	sub_82410060(ctx, base);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8282d5b8
	if (ctx.cr6.lt) goto loc_8282D5B8;
loc_8282D5E8:
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8282d624
	if (!ctx.cr6.gt) goto loc_8282D624;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-29644
	ctx.r3.s64 = ctx.r11.s64 + -29644;
	// bl 0x82816528
	ctx.lr = 0x8282D604;
	sub_82816528(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8282c710
	ctx.lr = 0x8282D624;
	sub_8282C710(ctx, base);
loc_8282D624:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8239d768
	ctx.lr = 0x8282D62C;
	sub_8239D768(ctx, base);
loc_8282D62C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D638"))) PPC_WEAK_FUNC(sub_8282D638);
PPC_FUNC_IMPL(__imp__sub_8282D638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r30,r11,1356
	ctx.r30.s64 = ctx.r11.s64 + 1356;
	// stw r4,1356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1356, ctx.r4.u32);
	// bne cr6,0x8282d688
	if (!ctx.cr6.eq) goto loc_8282D688;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8282d688
	if (!ctx.cr6.eq) goto loc_8282D688;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8282D688:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8282d6b4
	if (!ctx.cr6.eq) goto loc_8282D6B4;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8282d6b4
	if (!ctx.cr6.eq) goto loc_8282D6B4;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8282D6B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D6D0"))) PPC_WEAK_FUNC(sub_8282D6D0);
PPC_FUNC_IMPL(__imp__sub_8282D6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8282D6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r4,788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 788, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8282d798
	if (ctx.cr6.eq) goto loc_8282D798;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r31,r10,36420
	ctx.r31.u64 = ctx.r10.u64 | 36420;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8282d798
	if (ctx.cr6.eq) goto loc_8282D798;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bne cr6,0x8282d758
	if (!ctx.cr6.eq) goto loc_8282D758;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282d74c
	if (ctx.cr6.eq) goto loc_8282D74C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r5,r11,-20052
	ctx.r5.s64 = ctx.r11.s64 + -20052;
	// addi r4,r10,-20136
	ctx.r4.s64 = ctx.r10.s64 + -20136;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5680
	ctx.lr = 0x8282D74C;
	sub_828C5680(ctx, base);
loc_8282D74C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,288(r29)
	PPC_STORE_U32(ctx.r29.u32 + 288, ctx.r11.u32);
	// b 0x8282d798
	goto loc_8282D798;
loc_8282D758:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8282d784
	if (ctx.cr6.eq) goto loc_8282D784;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r5,r11,-20052
	ctx.r5.s64 = ctx.r11.s64 + -20052;
	// addi r4,r10,-20136
	ctx.r4.s64 = ctx.r10.s64 + -20136;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828c5680
	ctx.lr = 0x8282D784;
	sub_828C5680(ctx, base);
loc_8282D784:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r10,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r10.u32);
loc_8282D798:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D7A0"))) PPC_WEAK_FUNC(sub_8282D7A0);
PPC_FUNC_IMPL(__imp__sub_8282D7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r31,13024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8282d7cc
	if (!ctx.cr6.eq) goto loc_8282D7CC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_8282D7CC:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8282d7f8
	if (ctx.cr6.lt) goto loc_8282D7F8;
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8282d7fc
	if (ctx.cr6.eq) goto loc_8282D7FC;
loc_8282D7F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8282D7FC:
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,16440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8282d828
	if (ctx.cr6.eq) goto loc_8282D828;
	// bl 0x8276d7d8
	ctx.lr = 0x8282D828;
	sub_8276D7D8(ctx, base);
loc_8282D828:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D83C;
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

__attribute__((alias("__imp__sub_8282D850"))) PPC_WEAK_FUNC(sub_8282D850);
PPC_FUNC_IMPL(__imp__sub_8282D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82833108
	ctx.lr = 0x8282D868;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282d8a4
	if (ctx.cr0.eq) goto loc_8282D8A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a57c8
	ctx.lr = 0x8282D878;
	sub_828A57C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// addi r11,r11,26160
	ctx.r11.s64 = ctx.r11.s64 + 26160;
	// addi r10,r10,27208
	ctx.r10.s64 = ctx.r10.s64 + 27208;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8282d8a8
	goto loc_8282D8A8;
loc_8282D8A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282D8A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D8C0"))) PPC_WEAK_FUNC(sub_8282D8C0);
PPC_FUNC_IMPL(__imp__sub_8282D8C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1536
	ctx.r3.s64 = 1536;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D8C8"))) PPC_WEAK_FUNC(sub_8282D8C8);
PPC_FUNC_IMPL(__imp__sub_8282D8C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282d908
	if (!ctx.cr0.eq) goto loc_8282D908;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23552, ctx.r11.u32);
	// addi r3,r9,22852
	ctx.r3.s64 = ctx.r9.s64 + 22852;
	// bl 0x82816528
	ctx.lr = 0x8282D900;
	sub_82816528(ctx, base);
	// stw r3,-23556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23556, ctx.r3.u32);
	// b 0x8282d90c
	goto loc_8282D90C;
loc_8282D908:
	// lwz r3,-23556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23556);
loc_8282D90C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282D920"))) PPC_WEAK_FUNC(sub_8282D920);
PPC_FUNC_IMPL(__imp__sub_8282D920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282d970
	ctx.lr = 0x8282D940;
	sub_8282D970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282D954;
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

__attribute__((alias("__imp__sub_8282D970"))) PPC_WEAK_FUNC(sub_8282D970);
PPC_FUNC_IMPL(__imp__sub_8282D970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14912
	ctx.r31.s64 = ctx.r11.s64 + 14912;
	// lwz r11,14908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282d9b8
	if (!ctx.cr0.eq) goto loc_8282D9B8;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26512
	ctx.r9.s64 = ctx.r9.s64 + -26512;
	// stw r11,14908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14908, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24824
	ctx.r3.s64 = ctx.r11.s64 + -24824;
	// bl 0x82a4c758
	ctx.lr = 0x8282D9B8;
	sub_82A4C758(ctx, base);
loc_8282D9B8:
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

__attribute__((alias("__imp__sub_8282D9D0"))) PPC_WEAK_FUNC(sub_8282D9D0);
PPC_FUNC_IMPL(__imp__sub_8282D9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82830938
	sub_82830938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8282D9D8"))) PPC_WEAK_FUNC(sub_8282D9D8);
PPC_FUNC_IMPL(__imp__sub_8282D9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,14972(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14972);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282da20
	if (!ctx.cr6.eq) goto loc_8282DA20;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26180
	ctx.r3.s64 = ctx.r10.s64 + -26180;
	// bl 0x82a4c7d8
	ctx.lr = 0x8282DA0C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8282DA14;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8282DA1C;
	sub_82816528(ctx, base);
	// stw r3,14972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14972, ctx.r3.u32);
loc_8282DA20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DA38"))) PPC_WEAK_FUNC(sub_8282DA38);
PPC_FUNC_IMPL(__imp__sub_8282DA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82833108
	ctx.lr = 0x8282DA50;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282da74
	if (ctx.cr0.eq) goto loc_8282DA74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823346f0
	ctx.lr = 0x8282DA60;
	sub_823346F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26616
	ctx.r11.s64 = ctx.r11.s64 + -26616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8282da78
	goto loc_8282DA78;
loc_8282DA74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282DA78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DA90"))) PPC_WEAK_FUNC(sub_8282DA90);
PPC_FUNC_IMPL(__imp__sub_8282DA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dad0
	if (!ctx.cr0.eq) goto loc_8282DAD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23560, ctx.r11.u32);
	// addi r3,r9,22868
	ctx.r3.s64 = ctx.r9.s64 + 22868;
	// bl 0x82816528
	ctx.lr = 0x8282DAC8;
	sub_82816528(ctx, base);
	// stw r3,-23564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23564, ctx.r3.u32);
	// b 0x8282dad4
	goto loc_8282DAD4;
loc_8282DAD0:
	// lwz r3,-23564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23564);
loc_8282DAD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DAE8"))) PPC_WEAK_FUNC(sub_8282DAE8);
PPC_FUNC_IMPL(__imp__sub_8282DAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282db38
	ctx.lr = 0x8282DB08;
	sub_8282DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282DB1C;
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

__attribute__((alias("__imp__sub_8282DB38"))) PPC_WEAK_FUNC(sub_8282DB38);
PPC_FUNC_IMPL(__imp__sub_8282DB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14936
	ctx.r31.s64 = ctx.r11.s64 + 14936;
	// lwz r11,14932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282db80
	if (!ctx.cr0.eq) goto loc_8282DB80;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26432
	ctx.r9.s64 = ctx.r9.s64 + -26432;
	// stw r11,14932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14932, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24896
	ctx.r3.s64 = ctx.r11.s64 + -24896;
	// bl 0x82a4c758
	ctx.lr = 0x8282DB80;
	sub_82A4C758(ctx, base);
loc_8282DB80:
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

__attribute__((alias("__imp__sub_8282DB98"))) PPC_WEAK_FUNC(sub_8282DB98);
PPC_FUNC_IMPL(__imp__sub_8282DB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,168
	ctx.r3.s64 = 168;
	// bl 0x82833108
	ctx.lr = 0x8282DBB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282dbd4
	if (ctx.cr0.eq) goto loc_8282DBD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823346f0
	ctx.lr = 0x8282DBC0;
	sub_823346F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26728
	ctx.r11.s64 = ctx.r11.s64 + -26728;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8282dbd8
	goto loc_8282DBD8;
loc_8282DBD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282DBD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DBF0"))) PPC_WEAK_FUNC(sub_8282DBF0);
PPC_FUNC_IMPL(__imp__sub_8282DBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dc30
	if (!ctx.cr0.eq) goto loc_8282DC30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23568, ctx.r11.u32);
	// addi r3,r9,22892
	ctx.r3.s64 = ctx.r9.s64 + 22892;
	// bl 0x82816528
	ctx.lr = 0x8282DC28;
	sub_82816528(ctx, base);
	// stw r3,-23572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23572, ctx.r3.u32);
	// b 0x8282dc34
	goto loc_8282DC34;
loc_8282DC30:
	// lwz r3,-23572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23572);
loc_8282DC34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DC48"))) PPC_WEAK_FUNC(sub_8282DC48);
PPC_FUNC_IMPL(__imp__sub_8282DC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282dc98
	ctx.lr = 0x8282DC68;
	sub_8282DC98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282DC7C;
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

__attribute__((alias("__imp__sub_8282DC98"))) PPC_WEAK_FUNC(sub_8282DC98);
PPC_FUNC_IMPL(__imp__sub_8282DC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14944
	ctx.r31.s64 = ctx.r11.s64 + 14944;
	// lwz r11,14940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dce0
	if (!ctx.cr0.eq) goto loc_8282DCE0;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26412
	ctx.r9.s64 = ctx.r9.s64 + -26412;
	// stw r11,14940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14940, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24920
	ctx.r3.s64 = ctx.r11.s64 + -24920;
	// bl 0x82a4c758
	ctx.lr = 0x8282DCE0;
	sub_82A4C758(ctx, base);
loc_8282DCE0:
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

__attribute__((alias("__imp__sub_8282DCF8"))) PPC_WEAK_FUNC(sub_8282DCF8);
PPC_FUNC_IMPL(__imp__sub_8282DCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x8282DD10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282dd34
	if (ctx.cr0.eq) goto loc_8282DD34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823346f0
	ctx.lr = 0x8282DD20;
	sub_823346F0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-26392
	ctx.r11.s64 = ctx.r11.s64 + -26392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8282dd38
	goto loc_8282DD38;
loc_8282DD34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282DD38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DD50"))) PPC_WEAK_FUNC(sub_8282DD50);
PPC_FUNC_IMPL(__imp__sub_8282DD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dd90
	if (!ctx.cr0.eq) goto loc_8282DD90;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23576, ctx.r11.u32);
	// addi r3,r9,22916
	ctx.r3.s64 = ctx.r9.s64 + 22916;
	// bl 0x82816528
	ctx.lr = 0x8282DD88;
	sub_82816528(ctx, base);
	// stw r3,-23580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23580, ctx.r3.u32);
	// b 0x8282dd94
	goto loc_8282DD94;
loc_8282DD90:
	// lwz r3,-23580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23580);
loc_8282DD94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DDA8"))) PPC_WEAK_FUNC(sub_8282DDA8);
PPC_FUNC_IMPL(__imp__sub_8282DDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282ddf8
	ctx.lr = 0x8282DDC8;
	sub_8282DDF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282DDDC;
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

__attribute__((alias("__imp__sub_8282DDF8"))) PPC_WEAK_FUNC(sub_8282DDF8);
PPC_FUNC_IMPL(__imp__sub_8282DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14952
	ctx.r31.s64 = ctx.r11.s64 + 14952;
	// lwz r11,14948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282de40
	if (!ctx.cr0.eq) goto loc_8282DE40;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26284
	ctx.r9.s64 = ctx.r9.s64 + -26284;
	// stw r11,14948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14948, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24944
	ctx.r3.s64 = ctx.r11.s64 + -24944;
	// bl 0x82a4c758
	ctx.lr = 0x8282DE40;
	sub_82A4C758(ctx, base);
loc_8282DE40:
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

__attribute__((alias("__imp__sub_8282DE58"))) PPC_WEAK_FUNC(sub_8282DE58);
PPC_FUNC_IMPL(__imp__sub_8282DE58) {
	PPC_FUNC_PROLOGUE();
	// li r3,20456
	ctx.r3.s64 = 20456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DE60"))) PPC_WEAK_FUNC(sub_8282DE60);
PPC_FUNC_IMPL(__imp__sub_8282DE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dea0
	if (!ctx.cr0.eq) goto loc_8282DEA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23584, ctx.r11.u32);
	// addi r3,r9,22940
	ctx.r3.s64 = ctx.r9.s64 + 22940;
	// bl 0x82816528
	ctx.lr = 0x8282DE98;
	sub_82816528(ctx, base);
	// stw r3,-23588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23588, ctx.r3.u32);
	// b 0x8282dea4
	goto loc_8282DEA4;
loc_8282DEA0:
	// lwz r3,-23588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23588);
loc_8282DEA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DEB8"))) PPC_WEAK_FUNC(sub_8282DEB8);
PPC_FUNC_IMPL(__imp__sub_8282DEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282df08
	ctx.lr = 0x8282DED8;
	sub_8282DF08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282DEEC;
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

__attribute__((alias("__imp__sub_8282DF08"))) PPC_WEAK_FUNC(sub_8282DF08);
PPC_FUNC_IMPL(__imp__sub_8282DF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14904
	ctx.r31.s64 = ctx.r11.s64 + 14904;
	// lwz r11,14900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282df50
	if (!ctx.cr0.eq) goto loc_8282DF50;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-26144
	ctx.r9.s64 = ctx.r9.s64 + -26144;
	// stw r11,14900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14900, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24968
	ctx.r3.s64 = ctx.r11.s64 + -24968;
	// bl 0x82a4c758
	ctx.lr = 0x8282DF50;
	sub_82A4C758(ctx, base);
loc_8282DF50:
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

__attribute__((alias("__imp__sub_8282DF68"))) PPC_WEAK_FUNC(sub_8282DF68);
PPC_FUNC_IMPL(__imp__sub_8282DF68) {
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
	// li r3,1824
	ctx.r3.s64 = 1824;
	// bl 0x82833108
	ctx.lr = 0x8282DF7C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282df8c
	if (ctx.cr0.eq) goto loc_8282DF8C;
	// bl 0x8281fc00
	ctx.lr = 0x8282DF88;
	sub_8281FC00(ctx, base);
	// b 0x8282df90
	goto loc_8282DF90;
loc_8282DF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282DF90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DFA0"))) PPC_WEAK_FUNC(sub_8282DFA0);
PPC_FUNC_IMPL(__imp__sub_8282DFA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282dfe0
	if (!ctx.cr0.eq) goto loc_8282DFE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23592, ctx.r11.u32);
	// addi r3,r9,22960
	ctx.r3.s64 = ctx.r9.s64 + 22960;
	// bl 0x82816528
	ctx.lr = 0x8282DFD8;
	sub_82816528(ctx, base);
	// stw r3,-23596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23596, ctx.r3.u32);
	// b 0x8282dfe4
	goto loc_8282DFE4;
loc_8282DFE0:
	// lwz r3,-23596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23596);
loc_8282DFE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282DFF8"))) PPC_WEAK_FUNC(sub_8282DFF8);
PPC_FUNC_IMPL(__imp__sub_8282DFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e048
	ctx.lr = 0x8282E018;
	sub_8282E048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282E02C;
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

__attribute__((alias("__imp__sub_8282E048"))) PPC_WEAK_FUNC(sub_8282E048);
PPC_FUNC_IMPL(__imp__sub_8282E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14664
	ctx.r31.s64 = ctx.r11.s64 + 14664;
	// lwz r11,14660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14660);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e090
	if (!ctx.cr0.eq) goto loc_8282E090;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,24112
	ctx.r9.s64 = ctx.r9.s64 + 24112;
	// stw r11,14660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14660, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-24992
	ctx.r3.s64 = ctx.r11.s64 + -24992;
	// bl 0x82a4c758
	ctx.lr = 0x8282E090;
	sub_82A4C758(ctx, base);
loc_8282E090:
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

__attribute__((alias("__imp__sub_8282E0A8"))) PPC_WEAK_FUNC(sub_8282E0A8);
PPC_FUNC_IMPL(__imp__sub_8282E0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,14976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14976);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282e0f0
	if (!ctx.cr6.eq) goto loc_8282E0F0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26144
	ctx.r3.s64 = ctx.r10.s64 + -26144;
	// bl 0x82a4c7d8
	ctx.lr = 0x8282E0DC;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8282E0E4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8282E0EC;
	sub_82816528(ctx, base);
	// stw r3,14976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14976, ctx.r3.u32);
loc_8282E0F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E108"))) PPC_WEAK_FUNC(sub_8282E108);
PPC_FUNC_IMPL(__imp__sub_8282E108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82333900
	ctx.lr = 0x8282E120;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282e14c
	if (ctx.cr0.eq) goto loc_8282E14C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,24132
	ctx.r11.s64 = ctx.r11.s64 + 24132;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x827dff88
	ctx.lr = 0x8282E144;
	sub_827DFF88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8282e150
	goto loc_8282E150;
loc_8282E14C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E150:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E168"))) PPC_WEAK_FUNC(sub_8282E168);
PPC_FUNC_IMPL(__imp__sub_8282E168) {
	PPC_FUNC_PROLOGUE();
	// li r3,1456
	ctx.r3.s64 = 1456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E170"))) PPC_WEAK_FUNC(sub_8282E170);
PPC_FUNC_IMPL(__imp__sub_8282E170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e1b0
	if (!ctx.cr0.eq) goto loc_8282E1B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23600(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23600, ctx.r11.u32);
	// addi r3,r9,22972
	ctx.r3.s64 = ctx.r9.s64 + 22972;
	// bl 0x82816528
	ctx.lr = 0x8282E1A8;
	sub_82816528(ctx, base);
	// stw r3,-23604(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23604, ctx.r3.u32);
	// b 0x8282e1b4
	goto loc_8282E1B4;
loc_8282E1B0:
	// lwz r3,-23604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23604);
loc_8282E1B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E1C8"))) PPC_WEAK_FUNC(sub_8282E1C8);
PPC_FUNC_IMPL(__imp__sub_8282E1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e218
	ctx.lr = 0x8282E1E8;
	sub_8282E218(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282E1FC;
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

__attribute__((alias("__imp__sub_8282E218"))) PPC_WEAK_FUNC(sub_8282E218);
PPC_FUNC_IMPL(__imp__sub_8282E218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14672
	ctx.r31.s64 = ctx.r11.s64 + 14672;
	// lwz r11,14668(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14668);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e260
	if (!ctx.cr0.eq) goto loc_8282E260;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25292
	ctx.r9.s64 = ctx.r9.s64 + 25292;
	// stw r11,14668(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14668, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25064
	ctx.r3.s64 = ctx.r11.s64 + -25064;
	// bl 0x82a4c758
	ctx.lr = 0x8282E260;
	sub_82A4C758(ctx, base);
loc_8282E260:
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

__attribute__((alias("__imp__sub_8282E278"))) PPC_WEAK_FUNC(sub_8282E278);
PPC_FUNC_IMPL(__imp__sub_8282E278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8282E290;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282e2ec
	if (ctx.cr0.eq) goto loc_8282E2EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82830aa0
	ctx.lr = 0x8282E2A0;
	sub_82830AA0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,29016
	ctx.r11.s64 = ctx.r11.s64 + 29016;
	// addi r10,r10,30040
	ctx.r10.s64 = ctx.r10.s64 + 30040;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8282e2f0
	goto loc_8282E2F0;
loc_8282E2EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E2F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E308"))) PPC_WEAK_FUNC(sub_8282E308);
PPC_FUNC_IMPL(__imp__sub_8282E308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e348
	if (!ctx.cr0.eq) goto loc_8282E348;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23608(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23608, ctx.r11.u32);
	// addi r3,r9,22988
	ctx.r3.s64 = ctx.r9.s64 + 22988;
	// bl 0x82816528
	ctx.lr = 0x8282E340;
	sub_82816528(ctx, base);
	// stw r3,-23612(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23612, ctx.r3.u32);
	// b 0x8282e34c
	goto loc_8282E34C;
loc_8282E348:
	// lwz r3,-23612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23612);
loc_8282E34C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E360"))) PPC_WEAK_FUNC(sub_8282E360);
PPC_FUNC_IMPL(__imp__sub_8282E360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e3b0
	ctx.lr = 0x8282E380;
	sub_8282E3B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282E394;
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

__attribute__((alias("__imp__sub_8282E3B0"))) PPC_WEAK_FUNC(sub_8282E3B0);
PPC_FUNC_IMPL(__imp__sub_8282E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14680
	ctx.r31.s64 = ctx.r11.s64 + 14680;
	// lwz r11,14676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14676);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e3f8
	if (!ctx.cr0.eq) goto loc_8282E3F8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25312
	ctx.r9.s64 = ctx.r9.s64 + 25312;
	// stw r11,14676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14676, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25088
	ctx.r3.s64 = ctx.r11.s64 + -25088;
	// bl 0x82a4c758
	ctx.lr = 0x8282E3F8;
	sub_82A4C758(ctx, base);
loc_8282E3F8:
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

__attribute__((alias("__imp__sub_8282E410"))) PPC_WEAK_FUNC(sub_8282E410);
PPC_FUNC_IMPL(__imp__sub_8282E410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,14980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14980);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282e458
	if (!ctx.cr6.eq) goto loc_8282E458;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26096
	ctx.r3.s64 = ctx.r10.s64 + -26096;
	// bl 0x82a4c7d8
	ctx.lr = 0x8282E444;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8282E44C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8282E454;
	sub_82816528(ctx, base);
	// stw r3,14980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14980, ctx.r3.u32);
loc_8282E458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E470"))) PPC_WEAK_FUNC(sub_8282E470);
PPC_FUNC_IMPL(__imp__sub_8282E470) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8282E484;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282e4c4
	if (ctx.cr0.eq) goto loc_8282E4C4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,25332
	ctx.r9.s64 = ctx.r11.s64 + 25332;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8282e4c8
	goto loc_8282E4C8;
loc_8282E4C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E4C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E4D8"))) PPC_WEAK_FUNC(sub_8282E4D8);
PPC_FUNC_IMPL(__imp__sub_8282E4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8282E4F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282e54c
	if (ctx.cr0.eq) goto loc_8282E54C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82830aa0
	ctx.lr = 0x8282E500;
	sub_82830AA0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,30096
	ctx.r11.s64 = ctx.r11.s64 + 30096;
	// addi r10,r10,31120
	ctx.r10.s64 = ctx.r10.s64 + 31120;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8282e550
	goto loc_8282E550;
loc_8282E54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E550:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E568"))) PPC_WEAK_FUNC(sub_8282E568);
PPC_FUNC_IMPL(__imp__sub_8282E568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e5a8
	if (!ctx.cr0.eq) goto loc_8282E5A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23616, ctx.r11.u32);
	// addi r3,r9,23012
	ctx.r3.s64 = ctx.r9.s64 + 23012;
	// bl 0x82816528
	ctx.lr = 0x8282E5A0;
	sub_82816528(ctx, base);
	// stw r3,-23620(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23620, ctx.r3.u32);
	// b 0x8282e5ac
	goto loc_8282E5AC;
loc_8282E5A8:
	// lwz r3,-23620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23620);
loc_8282E5AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E5C0"))) PPC_WEAK_FUNC(sub_8282E5C0);
PPC_FUNC_IMPL(__imp__sub_8282E5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e610
	ctx.lr = 0x8282E5E0;
	sub_8282E610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282E5F4;
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

__attribute__((alias("__imp__sub_8282E610"))) PPC_WEAK_FUNC(sub_8282E610);
PPC_FUNC_IMPL(__imp__sub_8282E610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14704
	ctx.r31.s64 = ctx.r11.s64 + 14704;
	// lwz r11,14700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e658
	if (!ctx.cr0.eq) goto loc_8282E658;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25392
	ctx.r9.s64 = ctx.r9.s64 + 25392;
	// stw r11,14700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14700, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25160
	ctx.r3.s64 = ctx.r11.s64 + -25160;
	// bl 0x82a4c758
	ctx.lr = 0x8282E658;
	sub_82A4C758(ctx, base);
loc_8282E658:
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

__attribute__((alias("__imp__sub_8282E670"))) PPC_WEAK_FUNC(sub_8282E670);
PPC_FUNC_IMPL(__imp__sub_8282E670) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8282E684;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282e6c4
	if (ctx.cr0.eq) goto loc_8282E6C4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,25412
	ctx.r9.s64 = ctx.r11.s64 + 25412;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8282e6c8
	goto loc_8282E6C8;
loc_8282E6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E6C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E6D8"))) PPC_WEAK_FUNC(sub_8282E6D8);
PPC_FUNC_IMPL(__imp__sub_8282E6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,14984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14984);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282e720
	if (!ctx.cr6.eq) goto loc_8282E720;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26064
	ctx.r3.s64 = ctx.r10.s64 + -26064;
	// bl 0x82a4c7d8
	ctx.lr = 0x8282E70C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8282E714;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8282E71C;
	sub_82816528(ctx, base);
	// stw r3,14984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14984, ctx.r3.u32);
loc_8282E720:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E738"))) PPC_WEAK_FUNC(sub_8282E738);
PPC_FUNC_IMPL(__imp__sub_8282E738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8282E750;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282e7ac
	if (ctx.cr0.eq) goto loc_8282E7AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82830aa0
	ctx.lr = 0x8282E760;
	sub_82830AA0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,31176
	ctx.r11.s64 = ctx.r11.s64 + 31176;
	// addi r10,r10,32200
	ctx.r10.s64 = ctx.r10.s64 + 32200;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8282e7b0
	goto loc_8282E7B0;
loc_8282E7AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E7B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E7C8"))) PPC_WEAK_FUNC(sub_8282E7C8);
PPC_FUNC_IMPL(__imp__sub_8282E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e808
	if (!ctx.cr0.eq) goto loc_8282E808;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23624, ctx.r11.u32);
	// addi r3,r9,23052
	ctx.r3.s64 = ctx.r9.s64 + 23052;
	// bl 0x82816528
	ctx.lr = 0x8282E800;
	sub_82816528(ctx, base);
	// stw r3,-23628(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23628, ctx.r3.u32);
	// b 0x8282e80c
	goto loc_8282E80C;
loc_8282E808:
	// lwz r3,-23628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23628);
loc_8282E80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E820"))) PPC_WEAK_FUNC(sub_8282E820);
PPC_FUNC_IMPL(__imp__sub_8282E820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282e870
	ctx.lr = 0x8282E840;
	sub_8282E870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282E854;
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

__attribute__((alias("__imp__sub_8282E870"))) PPC_WEAK_FUNC(sub_8282E870);
PPC_FUNC_IMPL(__imp__sub_8282E870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14728
	ctx.r31.s64 = ctx.r11.s64 + 14728;
	// lwz r11,14724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14724);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282e8b8
	if (!ctx.cr0.eq) goto loc_8282E8B8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25472
	ctx.r9.s64 = ctx.r9.s64 + 25472;
	// stw r11,14724(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14724, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-25232
	ctx.r3.s64 = ctx.r11.s64 + -25232;
	// bl 0x82a4c758
	ctx.lr = 0x8282E8B8;
	sub_82A4C758(ctx, base);
loc_8282E8B8:
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

__attribute__((alias("__imp__sub_8282E8D0"))) PPC_WEAK_FUNC(sub_8282E8D0);
PPC_FUNC_IMPL(__imp__sub_8282E8D0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8282E8E4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8282e924
	if (ctx.cr0.eq) goto loc_8282E924;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,25492
	ctx.r9.s64 = ctx.r11.s64 + 25492;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8282e928
	goto loc_8282E928;
loc_8282E924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282E928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E938"))) PPC_WEAK_FUNC(sub_8282E938);
PPC_FUNC_IMPL(__imp__sub_8282E938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,14988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14988);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8282e980
	if (!ctx.cr6.eq) goto loc_8282E980;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26020
	ctx.r3.s64 = ctx.r10.s64 + -26020;
	// bl 0x82a4c7d8
	ctx.lr = 0x8282E96C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8282E974;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8282E97C;
	sub_82816528(ctx, base);
	// stw r3,14988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14988, ctx.r3.u32);
loc_8282E980:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282E998"))) PPC_WEAK_FUNC(sub_8282E998);
PPC_FUNC_IMPL(__imp__sub_8282E998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8282E9B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8282ea0c
	if (ctx.cr0.eq) goto loc_8282EA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82830aa0
	ctx.lr = 0x8282E9C0;
	sub_82830AA0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,32256
	ctx.r11.s64 = ctx.r11.s64 + 32256;
	// addi r10,r10,-32256
	ctx.r10.s64 = ctx.r10.s64 + -32256;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-30028
	ctx.r9.s64 = ctx.r9.s64 + -30028;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8282ea10
	goto loc_8282EA10;
loc_8282EA0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8282EA10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EA28"))) PPC_WEAK_FUNC(sub_8282EA28);
PPC_FUNC_IMPL(__imp__sub_8282EA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-23632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -23632);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8282ea68
	if (!ctx.cr0.eq) goto loc_8282EA68;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,-23632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23632, ctx.r11.u32);
	// addi r3,r9,23080
	ctx.r3.s64 = ctx.r9.s64 + 23080;
	// bl 0x82816528
	ctx.lr = 0x8282EA60;
	sub_82816528(ctx, base);
	// stw r3,-23636(r31)
	PPC_STORE_U32(ctx.r31.u32 + -23636, ctx.r3.u32);
	// b 0x8282ea6c
	goto loc_8282EA6C;
loc_8282EA68:
	// lwz r3,-23636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -23636);
loc_8282EA6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8282EA80"))) PPC_WEAK_FUNC(sub_8282EA80);
PPC_FUNC_IMPL(__imp__sub_8282EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8282ead0
	ctx.lr = 0x8282EAA0;
	sub_8282EAD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8282EAB4;
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

