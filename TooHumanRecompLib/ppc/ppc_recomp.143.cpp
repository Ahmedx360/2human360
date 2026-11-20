#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828C2B08"))) PPC_WEAK_FUNC(sub_828C2B08);
PPC_FUNC_IMPL(__imp__sub_828C2B08) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2B18"))) PPC_WEAK_FUNC(sub_828C2B18);
PPC_FUNC_IMPL(__imp__sub_828C2B18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C2B38"))) PPC_WEAK_FUNC(sub_828C2B38);
PPC_FUNC_IMPL(__imp__sub_828C2B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C2B40;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,560(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x8282b6b8
	ctx.lr = 0x828C2B60;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c2b9c
	if (ctx.cr0.eq) goto loc_828C2B9C;
	// bl 0x8282dc98
	ctx.lr = 0x828C2B6C;
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
	ctx.lr = 0x828C2B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c2b94
	if (!ctx.cr0.eq) goto loc_828C2B94;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_828C2B94:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x828c2ba4
	goto loc_828C2BA4;
loc_828C2B9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_828C2BA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828c2c14
	if (ctx.cr6.eq) goto loc_828C2C14;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r30,5
	ctx.r30.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_828C2BD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828c2be8
	if (ctx.cr6.eq) goto loc_828C2BE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x828C2BE8;
	sub_82410060(ctx, base);
loc_828C2BE8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x828c2bd0
	if (!ctx.cr0.eq) goto loc_828C2BD0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838450
	ctx.lr = 0x828C2C0C;
	sub_82838450(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x828C2C14;
	sub_8239D768(ctx, base);
loc_828C2C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C2C20"))) PPC_WEAK_FUNC(sub_828C2C20);
PPC_FUNC_IMPL(__imp__sub_828C2C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C2C28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C2C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C2C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// li r30,5
	ctx.r30.s64 = 5;
loc_828C2C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C2C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x828c2c70
	if (!ctx.cr0.eq) goto loc_828C2C70;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C2CA8"))) PPC_WEAK_FUNC(sub_828C2CA8);
PPC_FUNC_IMPL(__imp__sub_828C2CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x828C2CC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c2cf4
	if (ctx.cr0.eq) goto loc_828C2CF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828C2CD0;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-15600
	ctx.r11.s64 = ctx.r11.s64 + -15600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826459a8
	ctx.lr = 0x828C2CE4;
	sub_826459A8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x828c2cf8
	goto loc_828C2CF8;
loc_828C2CF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C2CF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2D10"))) PPC_WEAK_FUNC(sub_828C2D10);
PPC_FUNC_IMPL(__imp__sub_828C2D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26488);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c2d50
	if (!ctx.cr0.eq) goto loc_828C2D50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26488, ctx.r11.u32);
	// addi r3,r9,-23708
	ctx.r3.s64 = ctx.r9.s64 + -23708;
	// bl 0x82816528
	ctx.lr = 0x828C2D48;
	sub_82816528(ctx, base);
	// stw r3,-26492(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26492, ctx.r3.u32);
	// b 0x828c2d54
	goto loc_828C2D54;
loc_828C2D50:
	// lwz r3,-26492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26492);
loc_828C2D54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2D68"))) PPC_WEAK_FUNC(sub_828C2D68);
PPC_FUNC_IMPL(__imp__sub_828C2D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828c2db8
	ctx.lr = 0x828C2D88;
	sub_828C2DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C2D9C;
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

__attribute__((alias("__imp__sub_828C2DB8"))) PPC_WEAK_FUNC(sub_828C2DB8);
PPC_FUNC_IMPL(__imp__sub_828C2DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17932
	ctx.r31.s64 = ctx.r11.s64 + 17932;
	// lwz r11,17928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17928);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c2e00
	if (!ctx.cr0.eq) goto loc_828C2E00;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15512
	ctx.r9.s64 = ctx.r9.s64 + -15512;
	// stw r11,17928(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17928, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14664
	ctx.r3.s64 = ctx.r11.s64 + -14664;
	// bl 0x82a4c758
	ctx.lr = 0x828C2E00;
	sub_82A4C758(ctx, base);
loc_828C2E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2E18"))) PPC_WEAK_FUNC(sub_828C2E18);
PPC_FUNC_IMPL(__imp__sub_828C2E18) {
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82333900
	ctx.lr = 0x828C2E2C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c2e68
	if (ctx.cr0.eq) goto loc_828C2E68;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-15492
	ctx.r9.s64 = ctx.r11.s64 + -15492;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x828c2e6c
	goto loc_828C2E6C;
loc_828C2E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C2E6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2E80"))) PPC_WEAK_FUNC(sub_828C2E80);
PPC_FUNC_IMPL(__imp__sub_828C2E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,17952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828c2ec8
	if (!ctx.cr6.eq) goto loc_828C2EC8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25164
	ctx.r3.s64 = ctx.r10.s64 + -25164;
	// bl 0x82a4c7d8
	ctx.lr = 0x828C2EB4;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x828C2EBC;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x828C2EC4;
	sub_82816528(ctx, base);
	// stw r3,17952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17952, ctx.r3.u32);
loc_828C2EC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2EE0"))) PPC_WEAK_FUNC(sub_828C2EE0);
PPC_FUNC_IMPL(__imp__sub_828C2EE0) {
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
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82833108
	ctx.lr = 0x828C2EF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c2f50
	if (ctx.cr0.eq) goto loc_828C2F50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828C2F08;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-15600
	ctx.r11.s64 = ctx.r11.s64 + -15600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826459a8
	ctx.lr = 0x828C2F1C;
	sub_826459A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-15440
	ctx.r10.s64 = ctx.r10.s64 + -15440;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x828c2f54
	goto loc_828C2F54;
loc_828C2F50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C2F54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2F68"))) PPC_WEAK_FUNC(sub_828C2F68);
PPC_FUNC_IMPL(__imp__sub_828C2F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c2fa8
	if (!ctx.cr0.eq) goto loc_828C2FA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26496, ctx.r11.u32);
	// addi r3,r9,-23388
	ctx.r3.s64 = ctx.r9.s64 + -23388;
	// bl 0x82816528
	ctx.lr = 0x828C2FA0;
	sub_82816528(ctx, base);
	// stw r3,-26500(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26500, ctx.r3.u32);
	// b 0x828c2fac
	goto loc_828C2FAC;
loc_828C2FA8:
	// lwz r3,-26500(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26500);
loc_828C2FAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C2FC0"))) PPC_WEAK_FUNC(sub_828C2FC0);
PPC_FUNC_IMPL(__imp__sub_828C2FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828c3010
	ctx.lr = 0x828C2FE0;
	sub_828C3010(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C2FF4;
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

__attribute__((alias("__imp__sub_828C3010"))) PPC_WEAK_FUNC(sub_828C3010);
PPC_FUNC_IMPL(__imp__sub_828C3010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17916
	ctx.r31.s64 = ctx.r11.s64 + 17916;
	// lwz r11,17912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17912);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c3058
	if (!ctx.cr0.eq) goto loc_828C3058;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15352
	ctx.r9.s64 = ctx.r9.s64 + -15352;
	// stw r11,17912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17912, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14712
	ctx.r3.s64 = ctx.r11.s64 + -14712;
	// bl 0x82a4c758
	ctx.lr = 0x828C3058;
	sub_82A4C758(ctx, base);
loc_828C3058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3070"))) PPC_WEAK_FUNC(sub_828C3070);
PPC_FUNC_IMPL(__imp__sub_828C3070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828c30ac
	if (ctx.cr6.eq) goto loc_828C30AC;
	// bl 0x82400d68
	ctx.lr = 0x828C3090;
	sub_82400D68(ctx, base);
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
	ctx.lr = 0x828C30A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828c30b0
	goto loc_828C30B0;
loc_828C30AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C30B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C30C8"))) PPC_WEAK_FUNC(sub_828C30C8);
PPC_FUNC_IMPL(__imp__sub_828C30C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1392(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C30D8"))) PPC_WEAK_FUNC(sub_828C30D8);
PPC_FUNC_IMPL(__imp__sub_828C30D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1272(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C30E8"))) PPC_WEAK_FUNC(sub_828C30E8);
PPC_FUNC_IMPL(__imp__sub_828C30E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1388(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C30F8"))) PPC_WEAK_FUNC(sub_828C30F8);
PPC_FUNC_IMPL(__imp__sub_828C30F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17920
	ctx.r31.s64 = ctx.r11.s64 + 17920;
	// lwz r11,17924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c3140
	if (!ctx.cr0.eq) goto loc_828C3140;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15280
	ctx.r9.s64 = ctx.r9.s64 + -15280;
	// stw r11,17924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17924, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// bl 0x82a4c758
	ctx.lr = 0x828C3140;
	sub_82A4C758(ctx, base);
loc_828C3140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3158"))) PPC_WEAK_FUNC(sub_828C3158);
PPC_FUNC_IMPL(__imp__sub_828C3158) {
	PPC_FUNC_PROLOGUE();
	// li r3,20432
	ctx.r3.s64 = 20432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3160"))) PPC_WEAK_FUNC(sub_828C3160);
PPC_FUNC_IMPL(__imp__sub_828C3160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26504);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c31a0
	if (!ctx.cr0.eq) goto loc_828C31A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26504, ctx.r11.u32);
	// addi r3,r9,-15316
	ctx.r3.s64 = ctx.r9.s64 + -15316;
	// bl 0x82816528
	ctx.lr = 0x828C3198;
	sub_82816528(ctx, base);
	// stw r3,-26508(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26508, ctx.r3.u32);
	// b 0x828c31a4
	goto loc_828C31A4;
loc_828C31A0:
	// lwz r3,-26508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26508);
loc_828C31A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C31B8"))) PPC_WEAK_FUNC(sub_828C31B8);
PPC_FUNC_IMPL(__imp__sub_828C31B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828c30f8
	ctx.lr = 0x828C31D8;
	sub_828C30F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C31EC;
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

__attribute__((alias("__imp__sub_828C3208"))) PPC_WEAK_FUNC(sub_828C3208);
PPC_FUNC_IMPL(__imp__sub_828C3208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17944
	ctx.r31.s64 = ctx.r11.s64 + 17944;
	// lwz r11,17948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c3250
	if (!ctx.cr0.eq) goto loc_828C3250;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-15300
	ctx.r9.s64 = ctx.r9.s64 + -15300;
	// stw r11,17948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17948, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// bl 0x82a4c758
	ctx.lr = 0x828C3250;
	sub_82A4C758(ctx, base);
loc_828C3250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3268"))) PPC_WEAK_FUNC(sub_828C3268);
PPC_FUNC_IMPL(__imp__sub_828C3268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26512(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26512);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c32a8
	if (!ctx.cr0.eq) goto loc_828C32A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26512(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26512, ctx.r11.u32);
	// addi r3,r9,-15332
	ctx.r3.s64 = ctx.r9.s64 + -15332;
	// bl 0x82816528
	ctx.lr = 0x828C32A0;
	sub_82816528(ctx, base);
	// stw r3,-26516(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26516, ctx.r3.u32);
	// b 0x828c32ac
	goto loc_828C32AC;
loc_828C32A8:
	// lwz r3,-26516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26516);
loc_828C32AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C32C0"))) PPC_WEAK_FUNC(sub_828C32C0);
PPC_FUNC_IMPL(__imp__sub_828C32C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f0,28(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3300"))) PPC_WEAK_FUNC(sub_828C3300);
PPC_FUNC_IMPL(__imp__sub_828C3300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828C3320;
	sub_828A6D60(ctx, base);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3340"))) PPC_WEAK_FUNC(sub_828C3340);
PPC_FUNC_IMPL(__imp__sub_828C3340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C3348;
	__savegprlr_22(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828c74e0
	ctx.lr = 0x828C3360;
	sub_828C74E0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,36(r27)
	PPC_STORE_U32(ctx.r27.u32 + 36, ctx.r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// bl 0x828c73a0
	ctx.lr = 0x828C3374;
	sub_828C73A0(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lwz r11,-12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C33B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x828c37f0
	if (ctx.cr0.eq) goto loc_828C37F0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a21508
	ctx.lr = 0x828C33C0;
	sub_82A21508(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c37f0
	if (ctx.cr0.eq) goto loc_828C37F0;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r26,124(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r22,r11,7896
	ctx.r22.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x828c33e4
	if (!ctx.cr6.eq) goto loc_828C33E4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_828C33E4:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// addi r24,r11,-15260
	ctx.r24.s64 = ctx.r11.s64 + -15260;
loc_828C33F4:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x828c3408
	if (ctx.cr6.eq) goto loc_828C3408;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x828c3410
	if (!ctx.cr6.eq) goto loc_828C3410;
loc_828C3408:
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// b 0x828c33f4
	goto loc_828C33F4;
loc_828C3410:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x828c3438
	goto loc_828C3438;
loc_828C341C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x828c3440
	if (ctx.cr6.eq) goto loc_828C3440;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x828c3440
	if (ctx.cr6.eq) goto loc_828C3440;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
loc_828C3438:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c341c
	if (!ctx.cr0.eq) goto loc_828C341C;
loc_828C3440:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c3450
	if (!ctx.cr0.eq) goto loc_828C3450;
	// li r23,1
	ctx.r23.s64 = 1;
loc_828C3450:
	// sth r30,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r30.u16);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x828c3520
	if (!ctx.cr6.eq) goto loc_828C3520;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C346C;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bne cr6,0x828c3520
	if (!ctx.cr6.eq) goto loc_828C3520;
	// addi r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C348C;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// sth r30,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r30.u16);
	// bl 0x82414568
	ctx.lr = 0x828C34A4;
	sub_82414568(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C34B0;
	sub_828C6E70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C34BC;
	sub_82333960(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x828c37e8
	if (!ctx.cr6.eq) goto loc_828C37E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C34D0;
	sub_82414568(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// bl 0x828c6c18
	ctx.lr = 0x828C3508;
	sub_828C6C18(ctx, base);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82404ca8
	ctx.lr = 0x828C351C;
	sub_82404CA8(ctx, base);
	// b 0x828c37e0
	goto loc_828C37E0;
loc_828C3520:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828c37e8
	if (ctx.cr6.eq) goto loc_828C37E8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828c37e8
	if (ctx.cr0.eq) goto loc_828C37E8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4cc08
	ctx.lr = 0x828C3540;
	sub_82A4CC08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c37e8
	if (ctx.cr0.eq) goto loc_828C37E8;
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// b 0x828c356c
	goto loc_828C356C;
loc_828C3554:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c3568
	if (ctx.cr6.eq) goto loc_828C3568;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c35b4
	if (!ctx.cr6.eq) goto loc_828C35B4;
loc_828C3568:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_828C356C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c3554
	if (!ctx.cr0.eq) goto loc_828C3554;
	// b 0x828c35b4
	goto loc_828C35B4;
loc_828C357C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C3584;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c35a0
	if (ctx.cr6.eq) goto loc_828C35A0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c35dc
	if (!ctx.cr6.eq) goto loc_828C35DC;
loc_828C35A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C35A8;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r30,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r30.u16);
loc_828C35B4:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c357c
	if (!ctx.cr0.eq) goto loc_828C357C;
	// b 0x828c35dc
	goto loc_828C35DC;
loc_828C35C4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c35d8
	if (ctx.cr6.eq) goto loc_828C35D8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c3624
	if (!ctx.cr6.eq) goto loc_828C3624;
loc_828C35D8:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_828C35DC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c35c4
	if (!ctx.cr0.eq) goto loc_828C35C4;
	// b 0x828c3624
	goto loc_828C3624;
loc_828C35EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C35F4;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c3610
	if (ctx.cr6.eq) goto loc_828C3610;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c3630
	if (!ctx.cr6.eq) goto loc_828C3630;
loc_828C3610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C3618;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r30.u16);
loc_828C3624:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c35ec
	if (!ctx.cr0.eq) goto loc_828C35EC;
loc_828C3630:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x828c37b0
	if (!ctx.cr6.eq) goto loc_828C37B0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// b 0x828c3754
	goto loc_828C3754;
loc_828C365C:
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x828c3760
	if (ctx.cr6.eq) goto loc_828C3760;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x828c3694
	if (!ctx.cr6.eq) goto loc_828C3694;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x828c3688
	if (!ctx.cr6.eq) goto loc_828C3688;
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x828c3694
	goto loc_828C3694;
loc_828C3688:
	// cmplwi cr6,r10,34
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 34, ctx.xer);
	// bne cr6,0x828c36a4
	if (!ctx.cr6.eq) goto loc_828C36A4;
	// li r4,34
	ctx.r4.s64 = 34;
loc_828C3694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817208
	ctx.lr = 0x828C369C;
	sub_82817208(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x828c3754
	goto loc_828C3754;
loc_828C36A4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c36c0
	if (ctx.cr6.lt) goto loc_828C36C0;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c36c0
	if (ctx.cr6.gt) goto loc_828C36C0;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// b 0x828c36f0
	goto loc_828C36F0;
loc_828C36C0:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x828c36d8
	if (ctx.cr6.lt) goto loc_828C36D8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x828c36d8
	if (ctx.cr6.gt) goto loc_828C36D8;
	// addi r10,r11,-87
	ctx.r10.s64 = ctx.r11.s64 + -87;
	// b 0x828c36f0
	goto loc_828C36F0;
loc_828C36D8:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x828c36ec
	if (ctx.cr6.lt) goto loc_828C36EC;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// addi r10,r11,-55
	ctx.r10.s64 = ctx.r11.s64 + -55;
	// ble cr6,0x828c36f0
	if (!ctx.cr6.gt) goto loc_828C36F0;
loc_828C36EC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_828C36F0:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c370c
	if (ctx.cr6.lt) goto loc_828C370C;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c370c
	if (ctx.cr6.gt) goto loc_828C370C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x828c373c
	goto loc_828C373C;
loc_828C370C:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x828c3724
	if (ctx.cr6.lt) goto loc_828C3724;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x828c3724
	if (ctx.cr6.gt) goto loc_828C3724;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x828c373c
	goto loc_828C373C;
loc_828C3724:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x828c3738
	if (ctx.cr6.lt) goto loc_828C3738;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// ble cr6,0x828c373c
	if (!ctx.cr6.gt) goto loc_828C373C;
loc_828C3738:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828C373C:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82817208
	ctx.lr = 0x828C3750;
	sub_82817208(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_828C3754:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828c365c
	if (!ctx.cr0.eq) goto loc_828C365C;
loc_828C3760:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c3774
	if (!ctx.cr6.eq) goto loc_828C3774;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_828C3774:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82414568
	ctx.lr = 0x828C377C;
	sub_82414568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C3788;
	sub_82414568(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c6748
	ctx.lr = 0x828C3798;
	sub_828C6748(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C37A0;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828C37A8;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x828c37e4
	goto loc_828C37E4;
loc_828C37B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C37BC;
	sub_82414568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82414568
	ctx.lr = 0x828C37C8;
	sub_82414568(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c6748
	ctx.lr = 0x828C37D8;
	sub_828C6748(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828C37E0;
	sub_82333960(ctx, base);
loc_828C37E0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_828C37E4:
	// bl 0x82333960
	ctx.lr = 0x828C37E8;
	sub_82333960(ctx, base);
loc_828C37E8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x828c33f4
	if (ctx.cr6.eq) goto loc_828C33F4;
loc_828C37F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C37F8;
	sub_82333960(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3800"))) PPC_WEAK_FUNC(sub_828C3800);
PPC_FUNC_IMPL(__imp__sub_828C3800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C3808;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C3828;
	sub_824099B8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22900
	ctx.r4.s64 = ctx.r11.s64 + 22900;
	// bl 0x82414568
	ctx.lr = 0x828C3838;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C3844;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C3850;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c3860
	if (!ctx.cr6.eq) goto loc_828C3860;
loc_828C3858:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c38b4
	goto loc_828C38B4;
loc_828C3860:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,22876
	ctx.r4.s64 = ctx.r11.s64 + 22876;
	// bl 0x82414568
	ctx.lr = 0x828C3870;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6b60
	ctx.lr = 0x828C387C;
	sub_828C6B60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C3888;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c3858
	if (ctx.cr6.eq) goto loc_828C3858;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c38a4
	if (ctx.cr6.eq) goto loc_828C38A4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c38a8
	goto loc_828C38A8;
loc_828C38A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_828C38A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C38B0;
	sub_824099B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828C38B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C38C0"))) PPC_WEAK_FUNC(sub_828C38C0);
PPC_FUNC_IMPL(__imp__sub_828C38C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C38C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C38EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C38F8;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828c7130
	ctx.lr = 0x828C3904;
	sub_828C7130(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C3910;
	sub_82333960(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3930"))) PPC_WEAK_FUNC(sub_828C3930);
PPC_FUNC_IMPL(__imp__sub_828C3930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C3938;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r27,r3,44
	ctx.r27.s64 = ctx.r3.s64 + 44;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r29,r11,-14924
	ctx.r29.s64 = ctx.r11.s64 + -14924;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r10,7896
	ctx.r28.s64 = ctx.r10.s64 + 7896;
	// lwz r11,-14924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c39d8
	if (ctx.cr6.eq) goto loc_828C39D8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c3994
	if (ctx.cr6.eq) goto loc_828C3994;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c3998
	goto loc_828C3998;
loc_828C3994:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828C3998:
	// bl 0x828165a8
	ctx.lr = 0x828C399C;
	sub_828165A8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c39d0
	goto loc_828C39D0;
loc_828C39B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C39C4;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c39f8
	if (!ctx.cr0.eq) goto loc_828C39F8;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_828C39D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c39b8
	if (!ctx.cr6.eq) goto loc_828C39B8;
loc_828C39D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C39DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828c3a8c
	if (!ctx.cr6.eq) goto loc_828C3A8C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c3a00
	if (ctx.cr6.eq) goto loc_828C3A00;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c3a04
	goto loc_828C3A04;
loc_828C39F8:
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// b 0x828c39dc
	goto loc_828C39DC;
loc_828C3A00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828C3A04:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// lwz r11,-12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x828c3a2c
	if (!ctx.cr0.gt) goto loc_828C3A2C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x828c3a5c
	goto loc_828C3A5C;
loc_828C3A2C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15256
	ctx.r4.s64 = ctx.r11.s64 + -15256;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x8233a258
	ctx.lr = 0x828C3A40;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x8243b2d8
	ctx.lr = 0x828C3A50;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x828c3a60
	if (!ctx.cr0.eq) goto loc_828C3A60;
loc_828C3A5C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C3A60:
	// clrlwi. r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x828c3a74
	if (ctx.cr0.eq) goto loc_828C3A74;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x828C3A74;
	sub_82333960(ctx, base);
loc_828C3A74:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c3a8c
	if (ctx.cr0.eq) goto loc_828C3A8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8248db30
	ctx.lr = 0x828C3A8C;
	sub_8248DB30(ctx, base);
loc_828C3A8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3AB0"))) PPC_WEAK_FUNC(sub_828C3AB0);
PPC_FUNC_IMPL(__imp__sub_828C3AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C3AB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82414568
	ctx.lr = 0x828C3AD0;
	sub_82414568(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r22,188(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bne cr6,0x828c3b08
	if (!ctx.cr6.eq) goto loc_828C3B08;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_828C3B08:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C3B10;
	sub_82414568(ctx, base);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c7130
	ctx.lr = 0x828C3B20;
	sub_828C7130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C3B2C;
	sub_82333960(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x828c3b64
	if (!ctx.cr6.eq) goto loc_828C3B64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c3930
	ctx.lr = 0x828C3B58;
	sub_828C3930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// beq 0x828c3b68
	if (ctx.cr0.eq) goto loc_828C3B68;
loc_828C3B64:
	// li r30,1
	ctx.r30.s64 = 1;
loc_828C3B68:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x828c3c50
	if (!ctx.cr6.eq) goto loc_828C3C50;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828c3b94
	if (!ctx.cr6.eq) goto loc_828C3B94;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x828c3c50
	if (ctx.cr6.eq) goto loc_828C3C50;
loc_828C3B94:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bne cr6,0x828c3ba4
	if (!ctx.cr6.eq) goto loc_828C3BA4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_828C3BA4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C3BAC;
	sub_82414568(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// bl 0x828c6fc8
	ctx.lr = 0x828C3BF4;
	sub_828C6FC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82332db8
	ctx.lr = 0x828C3C00;
	sub_82332DB8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82404bf0
	ctx.lr = 0x828C3C08;
	sub_82404BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C3C10;
	sub_82333960(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bne cr6,0x828c3c20
	if (!ctx.cr6.eq) goto loc_828C3C20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_828C3C20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c3340
	ctx.lr = 0x828C3C28;
	sub_828C3340(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82409058
	ctx.lr = 0x828C3C34;
	sub_82409058(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c3c50
	if (ctx.cr6.eq) goto loc_828C3C50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c3c50
	if (ctx.cr6.eq) goto loc_828C3C50;
	// bl 0x82332db8
	ctx.lr = 0x828C3C50;
	sub_82332DB8(ctx, base);
loc_828C3C50:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828C3C6C;
	sub_82333960(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3C78"))) PPC_WEAK_FUNC(sub_828C3C78);
PPC_FUNC_IMPL(__imp__sub_828C3C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C3C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828c3cf4
	if (ctx.cr6.eq) goto loc_828C3CF4;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r31,r30,44
	ctx.r31.s64 = ctx.r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828c3cd8
	if (ctx.cr6.eq) goto loc_828C3CD8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C3CC0;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828c7078
	ctx.lr = 0x828C3CCC;
	sub_828C7078(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C3CD4;
	sub_82333960(ctx, base);
	// b 0x828c3ce0
	goto loc_828C3CE0;
loc_828C3CD8:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828c6f18
	ctx.lr = 0x828C3CE0;
	sub_828C6F18(ctx, base);
loc_828C3CE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C3CF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3D00"))) PPC_WEAK_FUNC(sub_828C3D00);
PPC_FUNC_IMPL(__imp__sub_828C3D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828C3D08;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x82414568
	ctx.lr = 0x828C3D1C;
	sub_82414568(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3930
	ctx.lr = 0x828C3D28;
	sub_828C3930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c3e30
	if (ctx.cr0.eq) goto loc_828C3E30;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x828c3d68
	if (!ctx.cr6.eq) goto loc_828C3D68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_828C3D68:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82414568
	ctx.lr = 0x828C3D70;
	sub_82414568(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x828c6fc8
	ctx.lr = 0x828C3DBC;
	sub_828C6FC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82332db8
	ctx.lr = 0x828C3DC8;
	sub_82332DB8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82404bf0
	ctx.lr = 0x828C3DD0;
	sub_82404BF0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828C3DD8;
	sub_82333960(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bne cr6,0x828c3de8
	if (!ctx.cr6.eq) goto loc_828C3DE8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_828C3DE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3340
	ctx.lr = 0x828C3DF0;
	sub_828C3340(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82409058
	ctx.lr = 0x828C3DFC;
	sub_82409058(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c3e18
	if (ctx.cr6.eq) goto loc_828C3E18;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c3e18
	if (ctx.cr6.eq) goto loc_828C3E18;
	// bl 0x82332db8
	ctx.lr = 0x828C3E18;
	sub_82332DB8(ctx, base);
loc_828C3E18:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828c3e58
	goto loc_828C3E58;
loc_828C3E30:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82409058
	ctx.lr = 0x828C3E3C;
	sub_82409058(ctx, base);
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c3e58
	if (ctx.cr6.eq) goto loc_828C3E58;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c3e58
	if (ctx.cr6.eq) goto loc_828C3E58;
	// bl 0x82332db8
	ctx.lr = 0x828C3E58;
	sub_82332DB8(ctx, base);
loc_828C3E58:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C3E60;
	sub_82333960(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3E68"))) PPC_WEAK_FUNC(sub_828C3E68);
PPC_FUNC_IMPL(__imp__sub_828C3E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C3E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C3EA4;
	sub_828C3AB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c3ecc
	if (ctx.cr0.eq) goto loc_828C3ECC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C3EB8;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828c7078
	ctx.lr = 0x828C3EC4;
	sub_828C7078(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C3ECC;
	sub_82333960(ctx, base);
loc_828C3ECC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C3EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C3EE8"))) PPC_WEAK_FUNC(sub_828C3EE8);
PPC_FUNC_IMPL(__imp__sub_828C3EE8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x828c3ab0
	ctx.lr = 0x828C3EFC;
	sub_828C3AB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c3f0c
	if (ctx.cr0.eq) goto loc_828C3F0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_828C3F0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C3F20"))) PPC_WEAK_FUNC(sub_828C3F20);
PPC_FUNC_IMPL(__imp__sub_828C3F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C3F28;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C3F54;
	sub_824099B8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r11,420
	ctx.r4.s64 = ctx.r11.s64 + 420;
	// bl 0x82400a48
	ctx.lr = 0x828C3F70;
	sub_82400A48(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c4044
	if (!ctx.cr6.gt) goto loc_828C4044;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// addi r26,r10,12
	ctx.r26.s64 = ctx.r10.s64 + 12;
loc_828C3F88:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c3f9c
	if (ctx.cr6.eq) goto loc_828C3F9C;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x828c3fa0
	goto loc_828C3FA0;
loc_828C3F9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828C3FA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C3FAC;
	sub_828C3AB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c4030
	if (ctx.cr0.eq) goto loc_828C4030;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C3FC0;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C3FCC;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C3FD8;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c4030
	if (ctx.cr6.eq) goto loc_828C4030;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C3FEC;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6b60
	ctx.lr = 0x828C3FF8;
	sub_828C6B60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C4004;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c4030
	if (ctx.cr6.eq) goto loc_828C4030;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4020
	if (ctx.cr6.eq) goto loc_828C4020;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c4024
	goto loc_828C4024;
loc_828C4020:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828C4024:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C402C;
	sub_824099B8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_828C4030:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// bne 0x828c3f88
	if (!ctx.cr0.eq) goto loc_828C3F88;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x828c4150
	if (!ctx.cr6.eq) goto loc_828C4150;
loc_828C4044:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C405C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C406C;
	sub_828C3AB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x828c409c
	if (!ctx.cr0.eq) goto loc_828C409C;
loc_828C4074:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400988
	ctx.lr = 0x828C4090;
	sub_82400988(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C4094:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
loc_828C409C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C40A8;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C40B4;
	sub_828C6E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C40C0;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828c4074
	if (ctx.cr6.eq) goto loc_828C4074;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C40D4;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6b60
	ctx.lr = 0x828C40E0;
	sub_828C6B60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C40EC;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828c411c
	if (!ctx.cr6.eq) goto loc_828C411C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
loc_828C410C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400988
	ctx.lr = 0x828C4114;
	sub_82400988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828c4094
	goto loc_828C4094;
loc_828C411C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4130
	if (ctx.cr6.eq) goto loc_828C4130;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c4134
	goto loc_828C4134;
loc_828C4130:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_828C4134:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C413C;
	sub_824099B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C4150:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c410c
	goto loc_828C410C;
}

__attribute__((alias("__imp__sub_828C4158"))) PPC_WEAK_FUNC(sub_828C4158);
PPC_FUNC_IMPL(__imp__sub_828C4158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828C4160;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r24,r29,44
	ctx.r24.s64 = ctx.r29.s64 + 44;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C418C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// ble cr6,0x828c41c4
	if (!ctx.cr6.gt) goto loc_828C41C4;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_828C41A4:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828C41B0;
	sub_82333960(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c41a4
	if (ctx.cr6.lt) goto loc_828C41A4;
loc_828C41C4:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r25,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c41e8
	if (ctx.cr6.eq) goto loc_828C41E8;
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C41E8;
	sub_82332C38(ctx, base);
loc_828C41E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C41F8;
	sub_828C3AB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c4220
	if (!ctx.cr0.eq) goto loc_828C4220;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C4218:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_828C4220:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C422C;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C4238;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C4244;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c426c
	if (!ctx.cr6.eq) goto loc_828C426C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_828C4250:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828c4218
	goto loc_828C4218;
loc_828C426C:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r30,r10,7896
	ctx.r30.s64 = ctx.r10.s64 + 7896;
	// addi r29,r11,-15248
	ctx.r29.s64 = ctx.r11.s64 + -15248;
loc_828C427C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x828c42f0
	if (ctx.cr6.lt) goto loc_828C42F0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c42f0
	if (!ctx.cr6.lt) goto loc_828C42F0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82400b00
	ctx.lr = 0x828C429C;
	sub_82400B00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c42e8
	if (ctx.cr0.eq) goto loc_828C42E8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r25,52
	ctx.r11.s64 = ctx.r25.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c42c4
	if (ctx.cr6.eq) goto loc_828C42C4;
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x828c42c8
	goto loc_828C42C8;
loc_828C42C4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_828C42C8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c42dc
	if (ctx.cr6.eq) goto loc_828C42DC;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828c42e0
	goto loc_828C42E0;
loc_828C42DC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_828C42E0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82816c30
	ctx.lr = 0x828C42E8;
	sub_82816C30(ctx, base);
loc_828C42E8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x828c427c
	goto loc_828C427C;
loc_828C42F0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c4250
	goto loc_828C4250;
}

__attribute__((alias("__imp__sub_828C42F8"))) PPC_WEAK_FUNC(sub_828C42F8);
PPC_FUNC_IMPL(__imp__sub_828C42F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828C4300;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r24,r29,44
	ctx.r24.s64 = ctx.r29.s64 + 44;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C432C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// ble cr6,0x828c4364
	if (!ctx.cr6.gt) goto loc_828C4364;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_828C4344:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828C4350;
	sub_82333960(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c4344
	if (ctx.cr6.lt) goto loc_828C4344;
loc_828C4364:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r25,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4388
	if (ctx.cr6.eq) goto loc_828C4388;
	// stw r25,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C4388;
	sub_82332C38(ctx, base);
loc_828C4388:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C4398;
	sub_828C3AB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c43c0
	if (!ctx.cr0.eq) goto loc_828C43C0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C43B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C43B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_828C43C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C43CC;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C43D8;
	sub_828C6E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C43E4;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bne cr6,0x828c440c
	if (!ctx.cr6.eq) goto loc_828C440C;
loc_828C43F0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828c43b8
	goto loc_828C43B8;
loc_828C440C:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r27,r10,7896
	ctx.r27.s64 = ctx.r10.s64 + 7896;
	// addi r29,r11,-16256
	ctx.r29.s64 = ctx.r11.s64 + -16256;
loc_828C441C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x828c4478
	if (ctx.cr6.lt) goto loc_828C4478;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c4478
	if (!ctx.cr6.lt) goto loc_828C4478;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82400b00
	ctx.lr = 0x828C443C;
	sub_82400B00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c4470
	if (ctx.cr0.eq) goto loc_828C4470;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c4464
	if (ctx.cr6.eq) goto loc_828C4464;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x828c4468
	goto loc_828C4468;
loc_828C4464:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_828C4468:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82816c30
	ctx.lr = 0x828C4470;
	sub_82816C30(ctx, base);
loc_828C4470:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x828c441c
	goto loc_828C441C;
loc_828C4478:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c43f0
	goto loc_828C43F0;
}

__attribute__((alias("__imp__sub_828C4480"))) PPC_WEAK_FUNC(sub_828C4480);
PPC_FUNC_IMPL(__imp__sub_828C4480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C4488;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r27,r31,44
	ctx.r27.s64 = ctx.r31.s64 + 44;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C44B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C44C8;
	sub_828C3AB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x828c44f4
	if (!ctx.cr0.eq) goto loc_828C44F4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828C44D4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C44E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_828C44F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C4500;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C450C;
	sub_828C6E70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4518;
	sub_82333960(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x828c4594
	if (!ctx.cr6.eq) goto loc_828C4594;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x828c44d4
	if (ctx.cr6.eq) goto loc_828C44D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C4534;
	sub_82414568(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x828c6c18
	ctx.lr = 0x828C4570;
	sub_828C6C18(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82404ca8
	ctx.lr = 0x828C4584;
	sub_82404CA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C458C;
	sub_82333960(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828c44d4
	if (ctx.cr6.eq) goto loc_828C44D4;
loc_828C4594:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828c45a4
	if (!ctx.cr6.eq) goto loc_828C45A4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x828c44d4
	if (!ctx.cr6.eq) goto loc_828C44D4;
loc_828C45A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// b 0x828c44d4
	goto loc_828C44D4;
}

__attribute__((alias("__imp__sub_828C45B0"))) PPC_WEAK_FUNC(sub_828C45B0);
PPC_FUNC_IMPL(__imp__sub_828C45B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C45B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C45E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C45F8;
	sub_828C3AB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C4608;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C4614;
	sub_828C6E70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4620;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828c468c
	if (!ctx.cr6.eq) goto loc_828C468C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C4634;
	sub_82414568(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x828c6c18
	ctx.lr = 0x828C4670;
	sub_828C6C18(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82404ca8
	ctx.lr = 0x828C4684;
	sub_82404CA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C468C;
	sub_82333960(ctx, base);
loc_828C468C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C4698;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6b60
	ctx.lr = 0x828C46A4;
	sub_828C6B60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C46B0;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c46fc
	if (!ctx.cr6.eq) goto loc_828C46FC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C46C4;
	sub_82414568(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C46D0;
	sub_82414568(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6748
	ctx.lr = 0x828C46E0;
	sub_828C6748(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C46E8;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C46F0;
	sub_82333960(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
	// b 0x828c4768
	goto loc_828C4768;
loc_828C46FC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c4718
	if (ctx.cr6.eq) goto loc_828C4718;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c471c
	goto loc_828C471C;
loc_828C4718:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C471C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4724;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4768
	if (ctx.cr0.eq) goto loc_828C4768;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4740
	if (ctx.cr6.eq) goto loc_828C4740;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c4744
	goto loc_828C4744;
loc_828C4740:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C4744:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a4dff0
	ctx.lr = 0x828C474C;
	sub_82A4DFF0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
	// bl 0x824099b8
	ctx.lr = 0x828C4768;
	sub_824099B8(ctx, base);
loc_828C4768:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C477C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C4788"))) PPC_WEAK_FUNC(sub_828C4788);
PPC_FUNC_IMPL(__imp__sub_828C4788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C4790;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r22,r26,44
	ctx.r22.s64 = ctx.r26.s64 + 44;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C47B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C47C8;
	sub_828C3AB0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x828c48f8
	if (ctx.cr0.eq) goto loc_828C48F8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C47DC;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C47E8;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C47F4;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c48f8
	if (ctx.cr6.eq) goto loc_828C48F8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c4880
	if (!ctx.cr6.gt) goto loc_828C4880;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// ble cr6,0x828c484c
	if (!ctx.cr6.gt) goto loc_828C484C;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_828C4820:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x828C4830;
	sub_82333960(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x828C4838;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c4820
	if (ctx.cr6.lt) goto loc_828C4820;
loc_828C484C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4870
	if (ctx.cr6.eq) goto loc_828C4870;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C4870;
	sub_82332C38(ctx, base);
loc_828C4870:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x828c72b0
	ctx.lr = 0x828C4880;
	sub_828C72B0(ctx, base);
loc_828C4880:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C488C;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c6db8
	ctx.lr = 0x828C4898;
	sub_828C6DB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C48A0;
	sub_82333960(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c48d4
	if (ctx.cr6.eq) goto loc_828C48D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C48D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828c48f8
	goto loc_828C48F8;
loc_828C48D4:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-12136
	ctx.r3.s64 = ctx.r11.s64 + -12136;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r11,-12136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12136);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C48F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C48F8:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C490C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C4918"))) PPC_WEAK_FUNC(sub_828C4918);
PPC_FUNC_IMPL(__imp__sub_828C4918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C4930"))) PPC_WEAK_FUNC(sub_828C4930);
PPC_FUNC_IMPL(__imp__sub_828C4930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C49A0"))) PPC_WEAK_FUNC(sub_828C49A0);
PPC_FUNC_IMPL(__imp__sub_828C49A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C49A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C49EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4a40
	if (ctx.cr0.eq) goto loc_828C4A40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x823339b8
	ctx.lr = 0x828C4A04;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828c4a58
	ctx.lr = 0x828C4A14;
	sub_828C4A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c4a40
	if (!ctx.cr0.eq) goto loc_828C4A40;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4a30
	if (ctx.cr6.eq) goto loc_828C4A30;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828c4a38
	goto loc_828C4A38;
loc_828C4A30:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C4A38:
	// bl 0x82a4cad0
	ctx.lr = 0x828C4A3C;
	sub_82A4CAD0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_828C4A40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4A48;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C4A58"))) PPC_WEAK_FUNC(sub_828C4A58);
PPC_FUNC_IMPL(__imp__sub_828C4A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C4A60;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// beq cr6,0x828c4aac
	if (ctx.cr6.eq) goto loc_828C4AAC;
	// lwz r31,12(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x828c4ab0
	goto loc_828C4AB0;
loc_828C4AAC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_828C4AB0:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c4ad8
	if (ctx.cr6.eq) goto loc_828C4AD8;
loc_828C4ABC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x828c4ad0
	if (ctx.cr6.eq) goto loc_828C4AD0;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x828c4ad8
	if (!ctx.cr6.eq) goto loc_828C4AD8;
loc_828C4AD0:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c4abc
	if (!ctx.cr0.eq) goto loc_828C4ABC;
loc_828C4AD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c4b1c
	if (ctx.cr6.eq) goto loc_828C4B1C;
loc_828C4AE4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828c4b1c
	if (ctx.cr0.eq) goto loc_828C4B1C;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x828c4b1c
	if (ctx.cr6.eq) goto loc_828C4B1C;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x828c4b1c
	if (ctx.cr6.eq) goto loc_828C4B1C;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c4b1c
	if (ctx.cr6.eq) goto loc_828C4B1C;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x828c4b1c
	if (!ctx.cr6.lt) goto loc_828C4B1C;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x828c4ae4
	if (!ctx.cr0.eq) goto loc_828C4AE4;
loc_828C4B1C:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828168a0
	ctx.lr = 0x828C4B28;
	sub_828168A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c4b44
	if (ctx.cr6.eq) goto loc_828C4B44;
loc_828C4B30:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x828c4b44
	if (!ctx.cr6.eq) goto loc_828C4B44;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c4b30
	if (!ctx.cr0.eq) goto loc_828C4B30;
loc_828C4B44:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824099b8
	ctx.lr = 0x828C4B50;
	sub_824099B8(ctx, base);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4b68
	if (!ctx.cr6.eq) goto loc_828C4B68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4B68:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-27632
	ctx.r4.s64 = ctx.r11.s64 + -27632;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4B74;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4c3c
	if (ctx.cr0.eq) goto loc_828C4C3C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4b8c
	if (!ctx.cr6.eq) goto loc_828C4B8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4B8C:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r11,-2684
	ctx.r4.s64 = ctx.r11.s64 + -2684;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4B98;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4c3c
	if (ctx.cr0.eq) goto loc_828C4C3C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4bb0
	if (!ctx.cr6.eq) goto loc_828C4BB0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4BB0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-15236
	ctx.r4.s64 = ctx.r11.s64 + -15236;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4BBC;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4c3c
	if (ctx.cr0.eq) goto loc_828C4C3C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4bd4
	if (!ctx.cr6.eq) goto loc_828C4BD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4BD4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,25356
	ctx.r4.s64 = ctx.r11.s64 + 25356;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4BE0;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4c30
	if (ctx.cr0.eq) goto loc_828C4C30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4bf8
	if (!ctx.cr6.eq) goto loc_828C4BF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4BF8:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r11,-2672
	ctx.r4.s64 = ctx.r11.s64 + -2672;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4C04;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4c30
	if (ctx.cr0.eq) goto loc_828C4C30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x828c4c1c
	if (!ctx.cr6.eq) goto loc_828C4C1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C4C1C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-15228
	ctx.r4.s64 = ctx.r11.s64 + -15228;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4C28;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c4c44
	if (!ctx.cr0.eq) goto loc_828C4C44;
loc_828C4C30:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r28,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// b 0x828c4c44
	goto loc_828C4C44;
loc_828C4C3C:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_828C4C44:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4C4C;
	sub_82333960(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82333960
	ctx.lr = 0x828C4C54;
	sub_82333960(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C4C60"))) PPC_WEAK_FUNC(sub_828C4C60);
PPC_FUNC_IMPL(__imp__sub_828C4C60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4ce0
	if (ctx.cr0.eq) goto loc_828C4CE0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4cc8
	if (ctx.cr6.eq) goto loc_828C4CC8;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828c4cd0
	goto loc_828C4CD0;
loc_828C4CC8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C4CD0:
	// bl 0x82a4cb98
	ctx.lr = 0x828C4CD4;
	sub_82A4CB98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_828C4CE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4CE8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828C4D08"))) PPC_WEAK_FUNC(sub_828C4D08);
PPC_FUNC_IMPL(__imp__sub_828C4D08) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4d88
	if (ctx.cr0.eq) goto loc_828C4D88;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4d70
	if (ctx.cr6.eq) goto loc_828C4D70;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828c4d78
	goto loc_828C4D78;
loc_828C4D70:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C4D78:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a575d0
	ctx.lr = 0x828C4D80;
	sub_82A575D0(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f1.u64);
	// li r31,1
	ctx.r31.s64 = 1;
loc_828C4D88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4D90;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828C4DB0"))) PPC_WEAK_FUNC(sub_828C4DB0);
PPC_FUNC_IMPL(__imp__sub_828C4DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C4DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4eb4
	if (ctx.cr0.eq) goto loc_828C4EB4;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// bne cr6,0x828c4e18
	if (!ctx.cr6.eq) goto loc_828C4E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C4E18:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-27632
	ctx.r4.s64 = ctx.r11.s64 + -27632;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4E24;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4ea8
	if (ctx.cr0.eq) goto loc_828C4EA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c4e40
	if (!ctx.cr6.eq) goto loc_828C4E40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C4E40:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r11,-2684
	ctx.r4.s64 = ctx.r11.s64 + -2684;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4E4C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4ea8
	if (ctx.cr0.eq) goto loc_828C4EA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c4e68
	if (!ctx.cr6.eq) goto loc_828C4E68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C4E68:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-15236
	ctx.r4.s64 = ctx.r11.s64 + -15236;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4E74;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c4ea8
	if (ctx.cr0.eq) goto loc_828C4EA8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c4e90
	if (!ctx.cr6.eq) goto loc_828C4E90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_828C4E90:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,22800
	ctx.r4.s64 = ctx.r11.s64 + 22800;
	// bl 0x82a4cc80
	ctx.lr = 0x828C4E9C;
	sub_82A4CC80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x828c4eac
	if (!ctx.cr0.eq) goto loc_828C4EAC;
loc_828C4EA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828C4EAC:
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_828C4EB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C4EBC;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C4EC8"))) PPC_WEAK_FUNC(sub_828C4EC8);
PPC_FUNC_IMPL(__imp__sub_828C4EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x828C4ED0;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// addi r19,r20,44
	ctx.r19.s64 = ctx.r20.s64 + 44;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,44(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 44);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C4F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// ble cr6,0x828c4f38
	if (!ctx.cr6.gt) goto loc_828C4F38;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_828C4F18:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x828C4F24;
	sub_82333960(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c4f18
	if (ctx.cr6.lt) goto loc_828C4F18;
loc_828C4F38:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c4f5c
	if (ctx.cr6.eq) goto loc_828C4F5C;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C4F5C;
	sub_82332C38(ctx, base);
loc_828C4F5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C4F6C;
	sub_828C3AB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r22,24
	ctx.r22.s64 = 24;
	// beq 0x828c5050
	if (ctx.cr0.eq) goto loc_828C5050;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C4F84;
	sub_82414568(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C4F90;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C4F9C;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5050
	if (ctx.cr6.eq) goto loc_828C5050;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82414568
	ctx.lr = 0x828C4FC8;
	sub_82414568(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6680
	ctx.lr = 0x828C4FD8;
	sub_828C6680(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C4FE0;
	sub_82333960(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C4FF8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// mulli r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 * 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828C5010;
	sub_82A455D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x828c5048
	if (ctx.cr0.lt) goto loc_828C5048;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 * 24;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828C5028:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82400b48
	ctx.lr = 0x828C5038;
	sub_82400B48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,-24
	ctx.r28.s64 = ctx.r28.s64 + -24;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// bge 0x828c5028
	if (!ctx.cr0.lt) goto loc_828C5028;
loc_828C5048:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400988
	ctx.lr = 0x828C5050;
	sub_82400988(ctx, base);
loc_828C5050:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// addi r4,r11,420
	ctx.r4.s64 = ctx.r11.s64 + 420;
	// bl 0x82400a48
	ctx.lr = 0x828C506C;
	sub_82400A48(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c51a4
	if (!ctx.cr6.gt) goto loc_828C51A4;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r25,r10,12
	ctx.r25.s64 = ctx.r10.s64 + 12;
	// addi r23,r11,7896
	ctx.r23.s64 = ctx.r11.s64 + 7896;
loc_828C508C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c50a0
	if (ctx.cr6.eq) goto loc_828C50A0;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x828c50a4
	goto loc_828C50A4;
loc_828C50A0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_828C50A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C50B0;
	sub_828C3AB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c5198
	if (ctx.cr0.eq) goto loc_828C5198;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82414568
	ctx.lr = 0x828C50C4;
	sub_82414568(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C50D0;
	sub_828C6E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C50DC;
	sub_82333960(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5198
	if (ctx.cr6.eq) goto loc_828C5198;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// bl 0x82414568
	ctx.lr = 0x828C5108;
	sub_82414568(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6680
	ctx.lr = 0x828C5118;
	sub_828C6680(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C5120;
	sub_82333960(ctx, base);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C5138;
	sub_82332D50(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 * 24;
	// mulli r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 * 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828C5150;
	sub_82A455D0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x828c5190
	if (ctx.cr0.lt) goto loc_828C5190;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulli r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 * 24;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mulli r27,r26,24
	ctx.r27.s64 = ctx.r26.s64 * 24;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_828C5170:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82400b48
	ctx.lr = 0x828C5180;
	sub_82400B48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,-24
	ctx.r28.s64 = ctx.r28.s64 + -24;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// bge 0x828c5170
	if (!ctx.cr0.lt) goto loc_828C5170;
loc_828C5190:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400988
	ctx.lr = 0x828C5198;
	sub_82400988(ctx, base);
loc_828C5198:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// bne 0x828c508c
	if (!ctx.cr0.eq) goto loc_828C508C;
loc_828C51A4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82400988
	ctx.lr = 0x828C51B0;
	sub_82400988(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C51C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C51D0"))) PPC_WEAK_FUNC(sub_828C51D0);
PPC_FUNC_IMPL(__imp__sub_828C51D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C51D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-25772
	ctx.r4.s64 = ctx.r11.s64 + -25772;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82816b80
	ctx.lr = 0x828C5200;
	sub_82816B80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5230"))) PPC_WEAK_FUNC(sub_828C5230);
PPC_FUNC_IMPL(__imp__sub_828C5230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C5238;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-2728
	ctx.r4.s64 = ctx.r11.s64 + -2728;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82816b80
	ctx.lr = 0x828C5264;
	sub_82816B80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5290"))) PPC_WEAK_FUNC(sub_828C5290);
PPC_FUNC_IMPL(__imp__sub_828C5290) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828c52a4
	if (ctx.cr6.eq) goto loc_828C52A4;
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r6,r11,-2684
	ctx.r6.s64 = ctx.r11.s64 + -2684;
	// b 0x828c52ac
	goto loc_828C52AC;
loc_828C52A4:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r6,r11,-2672
	ctx.r6.s64 = ctx.r11.s64 + -2672;
loc_828C52AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C52C0"))) PPC_WEAK_FUNC(sub_828C52C0);
PPC_FUNC_IMPL(__imp__sub_828C52C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x828C52C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r23,r31,44
	ctx.r23.s64 = ctx.r31.s64 + 44;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C52F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c3ab0
	ctx.lr = 0x828C5308;
	sub_828C3AB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C5318;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828c6e70
	ctx.lr = 0x828C5324;
	sub_828C6E70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C5330;
	sub_82333960(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x828c539c
	if (!ctx.cr6.eq) goto loc_828C539C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C5348;
	sub_82414568(ctx, base);
	// li r11,52
	ctx.r11.s64 = 52;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// bl 0x828c6c18
	ctx.lr = 0x828C5380;
	sub_828C6C18(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82404ca8
	ctx.lr = 0x828C5394;
	sub_82404CA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C539C;
	sub_82333960(ctx, base);
loc_828C539C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C53A8;
	sub_82414568(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c6838
	ctx.lr = 0x828C53B4;
	sub_828C6838(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bgt 0x828c53c8
	if (ctx.cr0.gt) goto loc_828C53C8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_828C53C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C53D0;
	sub_82333960(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c53dc
	if (ctx.cr0.eq) goto loc_828C53DC;
	// stw r25,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r25.u32);
loc_828C53DC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c5460
	if (!ctx.cr6.gt) goto loc_828C5460;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
loc_828C53F4:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c5410
	if (ctx.cr6.eq) goto loc_828C5410;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828c5414
	goto loc_828C5414;
loc_828C5410:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_828C5414:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82414568
	ctx.lr = 0x828C541C;
	sub_82414568(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C5428;
	sub_82414568(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c6748
	ctx.lr = 0x828C5438;
	sub_828C6748(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C5440;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C5448;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r25,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r25.u32);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c53f4
	if (ctx.cr6.lt) goto loc_828C53F4;
loc_828C5460:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5480"))) PPC_WEAK_FUNC(sub_828C5480);
PPC_FUNC_IMPL(__imp__sub_828C5480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C5488;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r22,r31,44
	ctx.r22.s64 = ctx.r31.s64 + 44;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C54AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828C54B4;
	sub_82A4CBE0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x828c54c8
	if (!ctx.cr6.eq) goto loc_828C54C8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828C54C8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 + 12;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_828C54D4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c54f8
	if (!ctx.cr6.lt) goto loc_828C54F8;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x828c54d4
	if (!ctx.cr0.eq) goto loc_828C54D4;
loc_828C54F8:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r25,r10,7896
	ctx.r25.s64 = ctx.r10.s64 + 7896;
loc_828C5500:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x828c5664
	if (ctx.cr6.lt) goto loc_828C5664;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c5664
	if (!ctx.cr6.lt) goto loc_828C5664;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828C5524;
	sub_823339B8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// bne cr6,0x828c5538
	if (!ctx.cr6.eq) goto loc_828C5538;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C5538:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x828c5630
	if (!ctx.cr6.gt) goto loc_828C5630;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828c5554
	if (!ctx.cr6.eq) goto loc_828C5554;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// beq cr6,0x828c555c
	if (ctx.cr6.eq) goto loc_828C555C;
loc_828C5554:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// b 0x828c5560
	goto loc_828C5560;
loc_828C555C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C5560:
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a56dc8
	ctx.lr = 0x828C5578;
	sub_82A56DC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5630
	if (!ctx.cr0.eq) goto loc_828C5630;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828c5630
	if (ctx.cr6.eq) goto loc_828C5630;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c55b4
	if (ctx.cr6.eq) goto loc_828C55B4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828c55b8
	goto loc_828C55B8;
loc_828C55B4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_828C55B8:
	// bl 0x828165a8
	ctx.lr = 0x828C55BC;
	sub_828165A8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c55fc
	goto loc_828C55FC;
loc_828C55DC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82419458
	ctx.lr = 0x828C55EC;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5608
	if (!ctx.cr0.eq) goto loc_828C5608;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_828C55FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c55dc
	if (!ctx.cr6.eq) goto loc_828C55DC;
	// b 0x828c5630
	goto loc_828C5630;
loc_828C5608:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r31,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r31.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_828C5630:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C5638;
	sub_82333960(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
loc_828C563C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c5500
	if (!ctx.cr6.lt) goto loc_828C5500;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lbz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 76);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x828c563c
	if (!ctx.cr0.eq) goto loc_828C563C;
	// b 0x828c5500
	goto loc_828C5500;
loc_828C5664:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5680"))) PPC_WEAK_FUNC(sub_828C5680);
PPC_FUNC_IMPL(__imp__sub_828C5680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C5688;
	__savegprlr_29(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C56A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5730
	if (!ctx.cr0.eq) goto loc_828C5730;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x828C56BC;
	sub_82409058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828C56C8;
	sub_82409058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x828C56D4;
	sub_82409058(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c56f0
	if (ctx.cr6.eq) goto loc_828C56F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c56f0
	if (ctx.cr6.eq) goto loc_828C56F0;
	// bl 0x82332db8
	ctx.lr = 0x828C56F0;
	sub_82332DB8(ctx, base);
loc_828C56F0:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c570c
	if (ctx.cr6.eq) goto loc_828C570C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c570c
	if (ctx.cr6.eq) goto loc_828C570C;
	// bl 0x82332db8
	ctx.lr = 0x828C570C;
	sub_82332DB8(ctx, base);
loc_828C570C:
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5728
	if (ctx.cr6.eq) goto loc_828C5728;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5728
	if (ctx.cr6.eq) goto loc_828C5728;
	// bl 0x82332db8
	ctx.lr = 0x828C5728;
	sub_82332DB8(ctx, base);
loc_828C5728:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c5734
	goto loc_828C5734;
loc_828C5730:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828C5734:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5740"))) PPC_WEAK_FUNC(sub_828C5740);
PPC_FUNC_IMPL(__imp__sub_828C5740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C5748;
	__savegprlr_29(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c57f0
	if (!ctx.cr0.eq) goto loc_828C57F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x828C577C;
	sub_82409058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828C5788;
	sub_82409058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x828C5794;
	sub_82409058(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c57b0
	if (ctx.cr6.eq) goto loc_828C57B0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c57b0
	if (ctx.cr6.eq) goto loc_828C57B0;
	// bl 0x82332db8
	ctx.lr = 0x828C57B0;
	sub_82332DB8(ctx, base);
loc_828C57B0:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c57cc
	if (ctx.cr6.eq) goto loc_828C57CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c57cc
	if (ctx.cr6.eq) goto loc_828C57CC;
	// bl 0x82332db8
	ctx.lr = 0x828C57CC;
	sub_82332DB8(ctx, base);
loc_828C57CC:
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c57e8
	if (ctx.cr6.eq) goto loc_828C57E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c57e8
	if (ctx.cr6.eq) goto loc_828C57E8;
	// bl 0x82332db8
	ctx.lr = 0x828C57E8;
	sub_82332DB8(ctx, base);
loc_828C57E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c57f4
	goto loc_828C57F4;
loc_828C57F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828C57F4:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5800"))) PPC_WEAK_FUNC(sub_828C5800);
PPC_FUNC_IMPL(__imp__sub_828C5800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82409058
	ctx.lr = 0x828C5828;
	sub_82409058(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x828C5834;
	sub_82409058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x828C5840;
	sub_82409058(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c585c
	if (ctx.cr6.eq) goto loc_828C585C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c585c
	if (ctx.cr6.eq) goto loc_828C585C;
	// bl 0x82332db8
	ctx.lr = 0x828C585C;
	sub_82332DB8(ctx, base);
loc_828C585C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5878
	if (ctx.cr6.eq) goto loc_828C5878;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5878
	if (ctx.cr6.eq) goto loc_828C5878;
	// bl 0x82332db8
	ctx.lr = 0x828C5878;
	sub_82332DB8(ctx, base);
loc_828C5878:
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5894
	if (ctx.cr6.eq) goto loc_828C5894;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5894
	if (ctx.cr6.eq) goto loc_828C5894;
	// bl 0x82332db8
	ctx.lr = 0x828C5894;
	sub_82332DB8(ctx, base);
loc_828C5894:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C58B0"))) PPC_WEAK_FUNC(sub_828C58B0);
PPC_FUNC_IMPL(__imp__sub_828C58B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C58B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5994
	if (!ctx.cr0.eq) goto loc_828C5994;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82409058
	ctx.lr = 0x828C5914;
	sub_82409058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x828C5920;
	sub_82409058(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82409058
	ctx.lr = 0x828C592C;
	sub_82409058(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5948
	if (ctx.cr6.eq) goto loc_828C5948;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5948
	if (ctx.cr6.eq) goto loc_828C5948;
	// bl 0x82332db8
	ctx.lr = 0x828C5948;
	sub_82332DB8(ctx, base);
loc_828C5948:
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5964
	if (ctx.cr6.eq) goto loc_828C5964;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5964
	if (ctx.cr6.eq) goto loc_828C5964;
	// bl 0x82332db8
	ctx.lr = 0x828C5964;
	sub_82332DB8(ctx, base);
loc_828C5964:
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// addi r11,r1,420
	ctx.r11.s64 = ctx.r1.s64 + 420;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5980
	if (ctx.cr6.eq) goto loc_828C5980;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5980
	if (ctx.cr6.eq) goto loc_828C5980;
	// bl 0x82332db8
	ctx.lr = 0x828C5980;
	sub_82332DB8(ctx, base);
loc_828C5980:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400988
	ctx.lr = 0x828C5988;
	sub_82400988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_828C5994:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828c59ec
	if (!ctx.cr6.gt) goto loc_828C59EC;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
loc_828C59A8:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c59c4
	if (ctx.cr6.eq) goto loc_828C59C4;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828c59c8
	goto loc_828C59C8;
loc_828C59C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_828C59C8:
	// bl 0x82a4cb98
	ctx.lr = 0x828C59CC;
	sub_82A4CB98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824fc978
	ctx.lr = 0x828C59E0;
	sub_824FC978(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x828c59a8
	if (!ctx.cr0.eq) goto loc_828C59A8;
loc_828C59EC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c5980
	goto loc_828C5980;
}

__attribute__((alias("__imp__sub_828C59F8"))) PPC_WEAK_FUNC(sub_828C59F8);
PPC_FUNC_IMPL(__imp__sub_828C59F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C5A00;
	__savegprlr_25(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C5A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5ae0
	if (!ctx.cr0.eq) goto loc_828C5AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82409058
	ctx.lr = 0x828C5A60;
	sub_82409058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x828C5A6C;
	sub_82409058(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82409058
	ctx.lr = 0x828C5A78;
	sub_82409058(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5a94
	if (ctx.cr6.eq) goto loc_828C5A94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5a94
	if (ctx.cr6.eq) goto loc_828C5A94;
	// bl 0x82332db8
	ctx.lr = 0x828C5A94;
	sub_82332DB8(ctx, base);
loc_828C5A94:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5ab0
	if (ctx.cr6.eq) goto loc_828C5AB0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5ab0
	if (ctx.cr6.eq) goto loc_828C5AB0;
	// bl 0x82332db8
	ctx.lr = 0x828C5AB0;
	sub_82332DB8(ctx, base);
loc_828C5AB0:
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5acc
	if (ctx.cr6.eq) goto loc_828C5ACC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5acc
	if (ctx.cr6.eq) goto loc_828C5ACC;
	// bl 0x82332db8
	ctx.lr = 0x828C5ACC;
	sub_82332DB8(ctx, base);
loc_828C5ACC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400988
	ctx.lr = 0x828C5AD4;
	sub_82400988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_828C5AE0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828c5b60
	if (!ctx.cr6.gt) goto loc_828C5B60;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
loc_828C5AF4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c5b10
	if (ctx.cr6.eq) goto loc_828C5B10;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828c5b14
	goto loc_828C5B14;
loc_828C5B10:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828C5B14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C5B24;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x828c4a58
	ctx.lr = 0x828C5B34;
	sub_828C4A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5b48
	if (!ctx.cr0.eq) goto loc_828C5B48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4cad0
	ctx.lr = 0x828C5B44;
	sub_82A4CAD0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_828C5B48:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410060
	ctx.lr = 0x828C5B54;
	sub_82410060(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// bne 0x828c5af4
	if (!ctx.cr0.eq) goto loc_828C5AF4;
loc_828C5B60:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c5acc
	goto loc_828C5ACC;
}

__attribute__((alias("__imp__sub_828C5B68"))) PPC_WEAK_FUNC(sub_828C5B68);
PPC_FUNC_IMPL(__imp__sub_828C5B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C5B70;
	__savegprlr_25(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r28,r11,-13588
	ctx.r28.s64 = ctx.r11.s64 + -13588;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r10,-13608
	ctx.r29.s64 = ctx.r10.s64 + -13608;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828C5BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5c60
	if (!ctx.cr0.eq) goto loc_828C5C60;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82409058
	ctx.lr = 0x828C5BE0;
	sub_82409058(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82409058
	ctx.lr = 0x828C5BEC;
	sub_82409058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x828C5BF8;
	sub_82409058(ctx, base);
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5c14
	if (ctx.cr6.eq) goto loc_828C5C14;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5c14
	if (ctx.cr6.eq) goto loc_828C5C14;
	// bl 0x82332db8
	ctx.lr = 0x828C5C14;
	sub_82332DB8(ctx, base);
loc_828C5C14:
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5c30
	if (ctx.cr6.eq) goto loc_828C5C30;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5c30
	if (ctx.cr6.eq) goto loc_828C5C30;
	// bl 0x82332db8
	ctx.lr = 0x828C5C30;
	sub_82332DB8(ctx, base);
loc_828C5C30:
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x828c5c4c
	if (ctx.cr6.eq) goto loc_828C5C4C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c5c4c
	if (ctx.cr6.eq) goto loc_828C5C4C;
	// bl 0x82332db8
	ctx.lr = 0x828C5C4C;
	sub_82332DB8(ctx, base);
loc_828C5C4C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400988
	ctx.lr = 0x828C5C54;
	sub_82400988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_828C5C60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828c5d34
	if (!ctx.cr6.gt) goto loc_828C5D34;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
loc_828C5C78:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x828c5cc0
	if (ctx.cr6.eq) goto loc_828C5CC0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828c5cc4
	goto loc_828C5CC4;
loc_828C5CC0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_828C5CC4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c5f50
	ctx.lr = 0x828C5CD0;
	sub_828C5F50(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C5CE4;
	sub_82332D50(ctx, base);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mulli r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 * 40;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828c5d20
	if (ctx.cr0.eq) goto loc_828C5D20;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828C5D08;
	sub_823339B8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
loc_828C5D20:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82333960
	ctx.lr = 0x828C5D28;
	sub_82333960(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x828c5c78
	if (!ctx.cr0.eq) goto loc_828C5C78;
loc_828C5D34:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x828c5c4c
	goto loc_828C5C4C;
}

__attribute__((alias("__imp__sub_828C5D40"))) PPC_WEAK_FUNC(sub_828C5D40);
PPC_FUNC_IMPL(__imp__sub_828C5D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x828C5D48;
	__savegprlr_23(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4808
	ctx.r4.s64 = ctx.r11.s64 + 4808;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a4cc08
	ctx.lr = 0x828C5D68;
	sub_82A4CC08(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x828c5f40
	if (!ctx.cr6.eq) goto loc_828C5F40;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x828c5f40
	if (ctx.cr6.eq) goto loc_828C5F40;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c5f40
	if (ctx.cr0.eq) goto loc_828C5F40;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r27,r11,-15204
	ctx.r27.s64 = ctx.r11.s64 + -15204;
	// addi r26,r10,-15208
	ctx.r26.s64 = ctx.r10.s64 + -15208;
	// addi r29,r9,-15212
	ctx.r29.s64 = ctx.r9.s64 + -15212;
loc_828C5DA0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c5f40
	if (ctx.cr6.eq) goto loc_828C5F40;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x828c5f40
	if (!ctx.cr6.lt) goto loc_828C5F40;
loc_828C5DB4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5dc8
	if (ctx.cr6.eq) goto loc_828C5DC8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5dd0
	if (!ctx.cr6.eq) goto loc_828C5DD0;
loc_828C5DC8:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5db4
	if (!ctx.cr0.eq) goto loc_828C5DB4;
loc_828C5DD0:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828c60a0
	ctx.lr = 0x828C5DE0;
	sub_828C60A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c5e04
	if (ctx.cr0.eq) goto loc_828C5E04;
loc_828C5DE8:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5dfc
	if (ctx.cr6.eq) goto loc_828C5DFC;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5e04
	if (!ctx.cr6.eq) goto loc_828C5E04;
loc_828C5DFC:
	// addic. r3,r3,2
	ctx.xer.ca = ctx.r3.u32 > 4294967293;
	ctx.r3.s64 = ctx.r3.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5de8
	if (!ctx.cr0.eq) goto loc_828C5DE8;
loc_828C5E04:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x828c5f00
	if (!ctx.cr6.eq) goto loc_828C5F00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5e38
	if (ctx.cr6.eq) goto loc_828C5E38;
loc_828C5E1C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5e30
	if (ctx.cr6.eq) goto loc_828C5E30;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5e38
	if (!ctx.cr6.eq) goto loc_828C5E38;
loc_828C5E30:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5e1c
	if (!ctx.cr0.eq) goto loc_828C5E1C;
loc_828C5E38:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82414568
	ctx.lr = 0x828C5E44;
	sub_82414568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x828C5E54;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x828C5E5C;
	sub_82419458(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828C5E68;
	sub_82333960(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x828c5e80
	if (ctx.cr6.eq) goto loc_828C5E80;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5ef8
	if (ctx.cr6.eq) goto loc_828C5EF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x828c5eec
	goto loc_828C5EEC;
loc_828C5E80:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x828C5E8C;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x828C5E94;
	sub_82419458(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x828C5EA0;
	sub_82333960(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x828c5eb8
	if (ctx.cr6.eq) goto loc_828C5EB8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5ef8
	if (ctx.cr6.eq) goto loc_828C5EF8;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// b 0x828c5eec
	goto loc_828C5EEC;
loc_828C5EB8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x828C5EC4;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82419458
	ctx.lr = 0x828C5ECC;
	sub_82419458(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C5ED8;
	sub_82333960(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x828c5ef8
	if (ctx.cr6.eq) goto loc_828C5EF8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5ef8
	if (ctx.cr6.eq) goto loc_828C5EF8;
	// addi r4,r28,8
	ctx.r4.s64 = ctx.r28.s64 + 8;
loc_828C5EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6110
	ctx.lr = 0x828C5EF4;
	sub_828C6110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828C5EF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828C5F00;
	sub_82333960(ctx, base);
loc_828C5F00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c5f24
	if (ctx.cr6.eq) goto loc_828C5F24;
loc_828C5F08:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5f1c
	if (ctx.cr6.eq) goto loc_828C5F1C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5f24
	if (!ctx.cr6.eq) goto loc_828C5F24;
loc_828C5F1C:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5f08
	if (!ctx.cr0.eq) goto loc_828C5F08;
loc_828C5F24:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c5f38
	if (ctx.cr6.eq) goto loc_828C5F38;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x828c5f40
	if (!ctx.cr6.eq) goto loc_828C5F40;
loc_828C5F38:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5da0
	if (!ctx.cr0.eq) goto loc_828C5DA0;
loc_828C5F40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C5F50"))) PPC_WEAK_FUNC(sub_828C5F50);
PPC_FUNC_IMPL(__imp__sub_828C5F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C5F58;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4808
	ctx.r4.s64 = ctx.r11.s64 + 4808;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a4cc08
	ctx.lr = 0x828C5F78;
	sub_82A4CC08(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x828c6090
	if (!ctx.cr6.eq) goto loc_828C6090;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828c6090
	if (ctx.cr6.eq) goto loc_828C6090;
	// b 0x828c6088
	goto loc_828C6088;
loc_828C5F94:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c6090
	if (ctx.cr6.eq) goto loc_828C6090;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x828c6090
	if (!ctx.cr6.lt) goto loc_828C6090;
loc_828C5FA8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5fbc
	if (ctx.cr6.eq) goto loc_828C5FBC;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5fc4
	if (!ctx.cr6.eq) goto loc_828C5FC4;
loc_828C5FBC:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5fa8
	if (!ctx.cr0.eq) goto loc_828C5FA8;
loc_828C5FC4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c60a0
	ctx.lr = 0x828C5FD4;
	sub_828C60A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c5ff8
	if (ctx.cr0.eq) goto loc_828C5FF8;
loc_828C5FDC:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c5ff0
	if (ctx.cr6.eq) goto loc_828C5FF0;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c5ff8
	if (!ctx.cr6.eq) goto loc_828C5FF8;
loc_828C5FF0:
	// addic. r3,r3,2
	ctx.xer.ca = ctx.r3.u32 > 4294967293;
	ctx.r3.s64 = ctx.r3.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c5fdc
	if (!ctx.cr0.eq) goto loc_828C5FDC;
loc_828C5FF8:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 2;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// bne cr6,0x828c6050
	if (!ctx.cr6.eq) goto loc_828C6050;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c602c
	if (ctx.cr6.eq) goto loc_828C602C;
loc_828C6010:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c6024
	if (ctx.cr6.eq) goto loc_828C6024;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c602c
	if (!ctx.cr6.eq) goto loc_828C602C;
loc_828C6024:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6010
	if (!ctx.cr0.eq) goto loc_828C6010;
loc_828C602C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828C6038;
	sub_82414568(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c6410
	ctx.lr = 0x828C604C;
	sub_828C6410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828C6050:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6074
	if (ctx.cr6.eq) goto loc_828C6074;
loc_828C6058:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x828c606c
	if (ctx.cr6.eq) goto loc_828C606C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x828c6074
	if (!ctx.cr6.eq) goto loc_828C6074;
loc_828C606C:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6058
	if (!ctx.cr0.eq) goto loc_828C6058;
loc_828C6074:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c6088
	if (ctx.cr6.eq) goto loc_828C6088;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x828c6090
	if (!ctx.cr6.eq) goto loc_828C6090;
loc_828C6088:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c5f94
	if (!ctx.cr0.eq) goto loc_828C5F94;
loc_828C6090:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C60A0"))) PPC_WEAK_FUNC(sub_828C60A0);
PPC_FUNC_IMPL(__imp__sub_828C60A0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_828C60A8:
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr. r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828c60f8
	if (ctx.cr0.eq) goto loc_828C60F8;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// beq cr6,0x828c60f8
	if (ctx.cr6.eq) goto loc_828C60F8;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// beq cr6,0x828c60f8
	if (ctx.cr6.eq) goto loc_828C60F8;
	// cmplwi cr6,r10,40
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 40, ctx.xer);
	// beq cr6,0x828c60f8
	if (ctx.cr6.eq) goto loc_828C60F8;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x828c60f8
	if (ctx.cr6.eq) goto loc_828C60F8;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x828c60f8
	if (ctx.cr6.eq) goto loc_828C60F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// blt cr6,0x828c60a8
	if (ctx.cr6.lt) goto loc_828C60A8;
loc_828C60F8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sthx r10,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C6110"))) PPC_WEAK_FUNC(sub_828C6110);
PPC_FUNC_IMPL(__imp__sub_828C6110) {
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
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x828c6158
	if (ctx.cr6.eq) goto loc_828C6158;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x828c6158
	if (ctx.cr6.eq) goto loc_828C6158;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x828c6158
	if (ctx.cr6.eq) goto loc_828C6158;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c61b4
	if (ctx.cr6.lt) goto loc_828C61B4;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c61b4
	if (ctx.cr6.gt) goto loc_828C61B4;
loc_828C6158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cb98
	ctx.lr = 0x828C6160;
	sub_82A4CB98(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_828C6168:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// beq cr6,0x828c6194
	if (ctx.cr6.eq) goto loc_828C6194;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x828c6194
	if (ctx.cr6.eq) goto loc_828C6194;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x828c6194
	if (ctx.cr6.eq) goto loc_828C6194;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c619c
	if (ctx.cr6.lt) goto loc_828C619C;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c619c
	if (ctx.cr6.gt) goto loc_828C619C;
loc_828C6194:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x828c6168
	goto loc_828C6168;
loc_828C619C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// beq cr6,0x828c61b0
	if (ctx.cr6.eq) goto loc_828C61B0;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bne cr6,0x828c61b4
	if (!ctx.cr6.eq) goto loc_828C61B4;
loc_828C61B0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_828C61B4:
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

__attribute__((alias("__imp__sub_828C61D0"))) PPC_WEAK_FUNC(sub_828C61D0);
PPC_FUNC_IMPL(__imp__sub_828C61D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C61D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6204
	if (ctx.cr6.eq) goto loc_828C6204;
loc_828C61F0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x828c6204
	if (!ctx.cr6.eq) goto loc_828C6204;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c61f0
	if (!ctx.cr0.eq) goto loc_828C61F0;
loc_828C6204:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82414568
	ctx.lr = 0x828C6214;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828c4a58
	ctx.lr = 0x828C6224;
	sub_828C4A58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c6254
	if (ctx.cr0.eq) goto loc_828C6254;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6344
	if (ctx.cr6.eq) goto loc_828C6344;
loc_828C6234:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x828c6344
	if (ctx.cr6.eq) goto loc_828C6344;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c6344
	if (ctx.cr6.eq) goto loc_828C6344;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6234
	if (!ctx.cr0.eq) goto loc_828C6234;
	// b 0x828c6344
	goto loc_828C6344;
loc_828C6254:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-15220
	ctx.r4.s64 = ctx.r11.s64 + -15220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a56dc8
	ctx.lr = 0x828C6268;
	sub_82A56DC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c62e8
	if (!ctx.cr0.eq) goto loc_828C62E8;
	// addic. r31,r31,4
	ctx.xer.ca = ctx.r31.u32 > 4294967291;
	ctx.r31.s64 = ctx.r31.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c6330
	if (ctx.cr0.eq) goto loc_828C6330;
loc_828C6278:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c6298
	if (ctx.cr6.lt) goto loc_828C6298;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c6298
	if (ctx.cr6.gt) goto loc_828C6298;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x828c62c8
	goto loc_828C62C8;
loc_828C6298:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x828c62b0
	if (ctx.cr6.lt) goto loc_828C62B0;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x828c62b0
	if (ctx.cr6.gt) goto loc_828C62B0;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x828c62c8
	goto loc_828C62C8;
loc_828C62B0:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x828c62c4
	if (ctx.cr6.lt) goto loc_828C62C4;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
	// ble cr6,0x828c62c8
	if (!ctx.cr6.gt) goto loc_828C62C8;
loc_828C62C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C62C8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c62dc
	if (!ctx.cr6.eq) goto loc_828C62DC;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x828c6330
	if (!ctx.cr6.eq) goto loc_828C6330;
loc_828C62DC:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6278
	if (!ctx.cr0.eq) goto loc_828C6278;
	// b 0x828c6330
	goto loc_828C6330;
loc_828C62E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6330
	if (ctx.cr6.eq) goto loc_828C6330;
loc_828C62F0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x828c6304
	if (ctx.cr6.eq) goto loc_828C6304;
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x828c630c
	if (!ctx.cr6.eq) goto loc_828C630C;
loc_828C6304:
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c62f0
	if (!ctx.cr0.eq) goto loc_828C62F0;
loc_828C630C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6330
	if (ctx.cr6.eq) goto loc_828C6330;
loc_828C6314:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x828c6330
	if (ctx.cr6.lt) goto loc_828C6330;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// bgt cr6,0x828c6330
	if (ctx.cr6.gt) goto loc_828C6330;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6314
	if (!ctx.cr0.eq) goto loc_828C6314;
loc_828C6330:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a57450
	ctx.lr = 0x828C6340;
	sub_82A57450(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_828C6344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6350"))) PPC_WEAK_FUNC(sub_828C6350);
PPC_FUNC_IMPL(__imp__sub_828C6350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_828C6370:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x828c6384
	if (!ctx.cr6.eq) goto loc_828C6384;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c6370
	if (!ctx.cr0.eq) goto loc_828C6370;
loc_828C6384:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c63c0
	if (ctx.cr6.eq) goto loc_828C63C0;
loc_828C6390:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x828c63c0
	if (ctx.cr6.eq) goto loc_828C63C0;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x828c63c0
	if (ctx.cr6.eq) goto loc_828C63C0;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x828c63c0
	if (ctx.cr6.eq) goto loc_828C63C0;
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bge cr6,0x828c63c0
	if (!ctx.cr6.lt) goto loc_828C63C0;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x828c6390
	if (!ctx.cr0.eq) goto loc_828C6390;
loc_828C63C0:
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828168a0
	ctx.lr = 0x828C63CC;
	sub_828168A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c63e8
	if (ctx.cr6.eq) goto loc_828C63E8;
loc_828C63D4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bne cr6,0x828c63e8
	if (!ctx.cr6.eq) goto loc_828C63E8;
	// addic. r31,r31,2
	ctx.xer.ca = ctx.r31.u32 > 4294967293;
	ctx.r31.s64 = ctx.r31.s64 + 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828c63d4
	if (!ctx.cr0.eq) goto loc_828C63D4;
loc_828C63E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824099b8
	ctx.lr = 0x828C63F4;
	sub_824099B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C6410"))) PPC_WEAK_FUNC(sub_828C6410);
PPC_FUNC_IMPL(__imp__sub_828C6410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C6418;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25584
	ctx.r4.s64 = ctx.r11.s64 + -25584;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8233a258
	ctx.lr = 0x828C643C;
	sub_8233A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6444;
	sub_82419458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C6450;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828c64c0
	if (ctx.cr6.eq) goto loc_828C64C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x828c64a4
	if (ctx.cr6.eq) goto loc_828C64A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6350
	ctx.lr = 0x828C648C;
	sub_828C6350(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c64a4
	if (ctx.cr6.eq) goto loc_828C64A4;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828c64ac
	goto loc_828C64AC;
loc_828C64A4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C64AC:
	// bl 0x828165a8
	ctx.lr = 0x828C64B0;
	sub_828165A8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C64BC;
	sub_82333960(ctx, base);
	// b 0x828c65ac
	goto loc_828C65AC;
loc_828C64C0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15200
	ctx.r4.s64 = ctx.r11.s64 + -15200;
	// bl 0x8233a258
	ctx.lr = 0x828C64D0;
	sub_8233A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82419458
	ctx.lr = 0x828C64D8;
	sub_82419458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C64E4;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828c6504
	if (ctx.cr6.eq) goto loc_828C6504;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c65ac
	if (ctx.cr6.eq) goto loc_828C65AC;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c6350
	ctx.lr = 0x828C6500;
	sub_828C6350(ctx, base);
	// b 0x828c65a8
	goto loc_828C65A8;
loc_828C6504:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15192
	ctx.r4.s64 = ctx.r11.s64 + -15192;
	// bl 0x8233a258
	ctx.lr = 0x828C6514;
	sub_8233A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82419458
	ctx.lr = 0x828C651C;
	sub_82419458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C6528;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828c6538
	if (ctx.cr6.eq) goto loc_828C6538;
	// addi r5,r29,28
	ctx.r5.s64 = ctx.r29.s64 + 28;
	// b 0x828c659c
	goto loc_828C659C;
loc_828C6538:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15184
	ctx.r4.s64 = ctx.r11.s64 + -15184;
	// bl 0x8233a258
	ctx.lr = 0x828C6548;
	sub_8233A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6550;
	sub_82419458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C655C;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828c656c
	if (ctx.cr6.eq) goto loc_828C656C;
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// b 0x828c659c
	goto loc_828C659C;
loc_828C656C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15176
	ctx.r4.s64 = ctx.r11.s64 + -15176;
	// bl 0x8233a258
	ctx.lr = 0x828C657C;
	sub_8233A258(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6584;
	sub_82419458(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828C6590;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828c65ac
	if (ctx.cr6.eq) goto loc_828C65AC;
	// addi r5,r29,36
	ctx.r5.s64 = ctx.r29.s64 + 36;
loc_828C659C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c61d0
	ctx.lr = 0x828C65A8;
	sub_828C61D0(ctx, base);
loc_828C65A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_828C65AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x828C65B4;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C65C0"))) PPC_WEAK_FUNC(sub_828C65C0);
PPC_FUNC_IMPL(__imp__sub_828C65C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C65C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-14924
	ctx.r30.s64 = ctx.r11.s64 + -14924;
	// lwz r11,-14924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c6674
	if (ctx.cr6.eq) goto loc_828C6674;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c65f8
	if (ctx.cr6.eq) goto loc_828C65F8;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x828c6600
	goto loc_828C6600;
loc_828C65F8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C6600:
	// bl 0x828165a8
	ctx.lr = 0x828C6604;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6640
	goto loc_828C6640;
loc_828C6624:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6630;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c664c
	if (!ctx.cr0.eq) goto loc_828C664C;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_828C6640:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c6624
	if (!ctx.cr6.eq) goto loc_828C6624;
	// b 0x828c6674
	goto loc_828C6674;
loc_828C664C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stb r10,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r10.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828C6674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6680"))) PPC_WEAK_FUNC(sub_828C6680);
PPC_FUNC_IMPL(__imp__sub_828C6680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C6688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c6740
	if (ctx.cr6.eq) goto loc_828C6740;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c6740
	if (!ctx.cr6.gt) goto loc_828C6740;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c66c4
	if (ctx.cr6.eq) goto loc_828C66C4;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828c66cc
	goto loc_828C66CC;
loc_828C66C4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C66CC:
	// bl 0x828165a8
	ctx.lr = 0x828C66D0;
	sub_828165A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6738
	goto loc_828C6738;
loc_828C66EC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r30,r11,52
	ctx.r30.s64 = ctx.r11.s64 * 52;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82419458
	ctx.lr = 0x828C6704;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c6730
	if (ctx.cr0.eq) goto loc_828C6730;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82400b00
	ctx.lr = 0x828C6718;
	sub_82400B00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c6730
	if (ctx.cr0.eq) goto loc_828C6730;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// bl 0x823339b8
	ctx.lr = 0x828C6730;
	sub_823339B8(ctx, base);
loc_828C6730:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_828C6738:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828c66ec
	if (!ctx.cr6.eq) goto loc_828C66EC;
loc_828C6740:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6748"))) PPC_WEAK_FUNC(sub_828C6748);
PPC_FUNC_IMPL(__imp__sub_828C6748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C6750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828c6770
	if (!ctx.cr6.eq) goto loc_828C6770;
	// bl 0x828c72b0
	ctx.lr = 0x828C6770;
	sub_828C72B0(ctx, base);
loc_828C6770:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C6784;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828c67b0
	if (ctx.cr0.eq) goto loc_828C67B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x823339b8
	ctx.lr = 0x828C67A0;
	sub_823339B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823339b8
	ctx.lr = 0x828C67AC;
	sub_823339B8(ctx, base);
	// b 0x828c67b4
	goto loc_828C67B4;
loc_828C67B0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828C67B4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c67c8
	if (ctx.cr6.eq) goto loc_828C67C8;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x828c67d0
	goto loc_828C67D0;
loc_828C67C8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C67D0:
	// bl 0x828165a8
	ctx.lr = 0x828C67D4;
	sub_828165A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828c6828
	if (!ctx.cr6.lt) goto loc_828C6828;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x828c72b0
	ctx.lr = 0x828C6828;
	sub_828C72B0(ctx, base);
loc_828C6828:
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6838"))) PPC_WEAK_FUNC(sub_828C6838);
PPC_FUNC_IMPL(__imp__sub_828C6838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x828C6840;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r18,r11,7896
	ctx.r18.s64 = ctx.r11.s64 + 7896;
	// lwz r10,16(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c6870
	if (ctx.cr6.eq) goto loc_828C6870;
	// lwz r3,12(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// b 0x828c6874
	goto loc_828C6874;
loc_828C6870:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_828C6874:
	// bl 0x828165a8
	ctx.lr = 0x828C6878;
	sub_828165A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r23,-1
	ctx.r23.s64 = -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828c68d8
	if (ctx.cr6.eq) goto loc_828C68D8;
loc_828C689C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r29,r11,52
	ctx.r29.s64 = ctx.r11.s64 * 52;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82419458
	ctx.lr = 0x828C68B4;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c68c0
	if (ctx.cr0.eq) goto loc_828C68C0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_828C68C0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828c689c
	if (!ctx.cr6.eq) goto loc_828C689C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x828c68e0
	if (!ctx.cr6.eq) goto loc_828C68E0;
loc_828C68D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c6b58
	goto loc_828C6B58;
loc_828C68E0:
	// rlwinm. r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828c68f0
	if (!ctx.cr0.eq) goto loc_828C68F0;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x828c6910
	goto loc_828C6910;
loc_828C68F0:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82ec4914
	ctx.lr = 0x828C6904;
	sub_82EC4914(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
loc_828C6910:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-258
	ctx.r10.s64 = -16908288;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r22,r10,65278
	ctx.r22.u64 = ctx.r10.u64 | 65278;
	// lwzx r28,r25,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x828c697c
	if (ctx.cr6.eq) goto loc_828C697C;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_828C6930:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r28,52
	ctx.r10.s64 = ctx.r28.s64 * 52;
	// lwzx r26,r10,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x82419458
	ctx.lr = 0x828C694C;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c6968
	if (ctx.cr0.eq) goto loc_828C6968;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x828c6970
	goto loc_828C6970;
loc_828C6968:
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_828C6970:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x828c6930
	if (!ctx.cr6.eq) goto loc_828C6930;
loc_828C697C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stwx r23,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r23.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// subf r25,r21,r11
	ctx.r25.s64 = ctx.r11.s64 - ctx.r21.s64;
	// ble cr6,0x828c6ab0
	if (!ctx.cr6.gt) goto loc_828C6AB0;
	// mulli r23,r24,52
	ctx.r23.s64 = ctx.r24.s64 * 52;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
loc_828C69A4:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r23,r10
	ctx.r4.u64 = ctx.r23.u64 + ctx.r10.u64;
	// lwzx r11,r23,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x828c6aa0
	if (ctx.cr6.eq) goto loc_828C6AA0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// b 0x828c69cc
	goto loc_828C69CC;
loc_828C69C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_828C69CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x828c69c4
	if (ctx.cr6.gt) goto loc_828C69C4;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwzx r27,r11,r19
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// mulli r11,r27,52
	ctx.r11.s64 = ctx.r27.s64 * 52;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828164b8
	ctx.lr = 0x828C69F4;
	sub_828164B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x828c6aa0
	if (ctx.cr6.eq) goto loc_828C6AA0;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6a18
	if (ctx.cr6.eq) goto loc_828C6A18;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x828c6a1c
	goto loc_828C6A1C;
loc_828C6A18:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_828C6A1C:
	// bl 0x828165a8
	ctx.lr = 0x828C6A20;
	sub_828165A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828c6a6c
	if (ctx.cr6.eq) goto loc_828C6A6C;
loc_828C6A40:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x828c6a4c
	if (!ctx.cr6.eq) goto loc_828C6A4C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_828C6A4C:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 * 52;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r28,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r28.u32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x828c6a40
	if (!ctx.cr6.eq) goto loc_828C6A40;
loc_828C6A6C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6a80
	if (ctx.cr6.eq) goto loc_828C6A80;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x828c6a84
	goto loc_828C6A84;
loc_828C6A80:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_828C6A84:
	// bl 0x828165a8
	ctx.lr = 0x828C6A88;
	sub_828165A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
loc_828C6AA0:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r23,r23,-52
	ctx.r23.s64 = ctx.r23.s64 + -52;
	// bne 0x828c69a4
	if (!ctx.cr0.eq) goto loc_828C69A4;
loc_828C6AB0:
	// add r11,r25,r21
	ctx.r11.u64 = ctx.r25.u64 + ctx.r21.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828c6ae8
	if (!ctx.cr6.lt) goto loc_828C6AE8;
	// mulli r28,r25,52
	ctx.r28.s64 = ctx.r25.s64 * 52;
	// subf r29,r25,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r25.s64;
loc_828C6AC4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r27,r28,r11
	ctx.r27.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x828C6AD4;
	sub_82333960(ctx, base);
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x828C6ADC;
	sub_82333960(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// bne 0x828c6ac4
	if (!ctx.cr0.eq) goto loc_828C6AC4;
loc_828C6AE8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828C6B00;
	sub_82332CA8(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x828c6b40
	if (!ctx.cr6.gt) goto loc_828C6B40;
loc_828C6B18:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x828c6b18
	if (ctx.cr6.gt) goto loc_828C6B18;
loc_828C6B40:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828c6b54
	if (ctx.cr6.eq) goto loc_828C6B54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c72b0
	ctx.lr = 0x828C6B54;
	sub_828C72B0(ctx, base);
loc_828C6B54:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_828C6B58:
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6B60"))) PPC_WEAK_FUNC(sub_828C6B60);
PPC_FUNC_IMPL(__imp__sub_828C6B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C6B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c6bf8
	if (ctx.cr6.eq) goto loc_828C6BF8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c6bf8
	if (!ctx.cr6.gt) goto loc_828C6BF8;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6ba0
	if (ctx.cr6.eq) goto loc_828C6BA0;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x828c6ba8
	goto loc_828C6BA8;
loc_828C6BA0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C6BA8:
	// bl 0x828165a8
	ctx.lr = 0x828C6BAC;
	sub_828165A8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6bf0
	goto loc_828C6BF0;
loc_828C6BC8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 * 52;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82419458
	ctx.lr = 0x828C6BE0;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c6c04
	if (!ctx.cr0.eq) goto loc_828C6C04;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_828C6BF0:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x828c6bc8
	if (!ctx.cr6.eq) goto loc_828C6BC8;
loc_828C6BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C6BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_828C6C04:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 * 52;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// b 0x828c6bfc
	goto loc_828C6BFC;
}

__attribute__((alias("__imp__sub_828C6C18"))) PPC_WEAK_FUNC(sub_828C6C18);
PPC_FUNC_IMPL(__imp__sub_828C6C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C6C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828c6c9c
	if (ctx.cr6.eq) goto loc_828C6C9C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6c58
	if (ctx.cr6.eq) goto loc_828C6C58;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828c6c5c
	goto loc_828C6C5C;
loc_828C6C58:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_828C6C5C:
	// bl 0x828165a8
	ctx.lr = 0x828C6C60;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6c94
	goto loc_828C6C94;
loc_828C6C7C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6C88;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c6ce8
	if (!ctx.cr0.eq) goto loc_828C6CE8;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_828C6C94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c6c7c
	if (!ctx.cr6.eq) goto loc_828C6C7C;
loc_828C6C9C:
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c6d10
	if (ctx.cr6.eq) goto loc_828C6D10;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
	// bl 0x82400b48
	ctx.lr = 0x828C6CC4;
	sub_82400B48(ctx, base);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828c79f8
	ctx.lr = 0x828C6CD4;
	sub_828C79F8(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x828c72b0
	ctx.lr = 0x828C6CE4;
	sub_828C72B0(ctx, base);
	// b 0x828c6d50
	goto loc_828C6D50;
loc_828C6CE8:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c79f8
	ctx.lr = 0x828C6CF8;
	sub_828C79F8(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x828c72b0
	ctx.lr = 0x828C6D08;
	sub_828C72B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828c6db0
	goto loc_828C6DB0;
loc_828C6D10:
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x828c7b68
	ctx.lr = 0x828C6D1C;
	sub_828C7B68(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c6d4c
	if (ctx.cr0.eq) goto loc_828C6D4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823339b8
	ctx.lr = 0x828C6D30;
	sub_823339B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x828c7808
	ctx.lr = 0x828C6D3C;
	sub_828C7808(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x828c6d50
	goto loc_828C6D50;
loc_828C6D4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828C6D50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c73a0
	ctx.lr = 0x828C6D58;
	sub_828C73A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c6dac
	if (!ctx.cr0.eq) goto loc_828C6DAC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6d74
	if (ctx.cr6.eq) goto loc_828C6D74;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c6d78
	goto loc_828C6D78;
loc_828C6D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_828C6D78:
	// bl 0x828165a8
	ctx.lr = 0x828C6D7C;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828C6DAC:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
loc_828C6DB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6DB8"))) PPC_WEAK_FUNC(sub_828C6DB8);
PPC_FUNC_IMPL(__imp__sub_828C6DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C6DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c6e68
	if (ctx.cr6.eq) goto loc_828C6E68;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6dec
	if (ctx.cr6.eq) goto loc_828C6DEC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x828c6df4
	goto loc_828C6DF4;
loc_828C6DEC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C6DF4:
	// bl 0x828165a8
	ctx.lr = 0x828C6DF8;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6e34
	goto loc_828C6E34;
loc_828C6E18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6E24;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c6e40
	if (!ctx.cr0.eq) goto loc_828C6E40;
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_828C6E34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c6e18
	if (!ctx.cr6.eq) goto loc_828C6E18;
	// b 0x828c6e68
	goto loc_828C6E68;
loc_828C6E40:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828C6E68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6E70"))) PPC_WEAK_FUNC(sub_828C6E70);
PPC_FUNC_IMPL(__imp__sub_828C6E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c6ef4
	if (ctx.cr6.eq) goto loc_828C6EF4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6eac
	if (ctx.cr6.eq) goto loc_828C6EAC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c6eb4
	goto loc_828C6EB4;
loc_828C6EAC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C6EB4:
	// bl 0x828165a8
	ctx.lr = 0x828C6EB8;
	sub_828165A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c6eec
	goto loc_828C6EEC;
loc_828C6ED4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C6EE0;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c6f10
	if (!ctx.cr0.eq) goto loc_828C6F10;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_828C6EEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c6ed4
	if (!ctx.cr6.eq) goto loc_828C6ED4;
loc_828C6EF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C6EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828C6F10:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// b 0x828c6ef8
	goto loc_828C6EF8;
}

__attribute__((alias("__imp__sub_828C6F18"))) PPC_WEAK_FUNC(sub_828C6F18);
PPC_FUNC_IMPL(__imp__sub_828C6F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C6F20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c6f8c
	if (!ctx.cr6.gt) goto loc_828C6F8C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_828C6F44:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828c6f78
	if (ctx.cr6.eq) goto loc_828C6F78;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r27,r30,24
	ctx.r27.s64 = ctx.r30.s64 + 24;
	// bl 0x82332db8
	ctx.lr = 0x828C6F60;
	sub_82332DB8(ctx, base);
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// bl 0x82404bf0
	ctx.lr = 0x828C6F68;
	sub_82404BF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x828C6F70;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x828C6F78;
	sub_82332DB8(ctx, base);
loc_828C6F78:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c6f44
	if (ctx.cr6.lt) goto loc_828C6F44;
loc_828C6F8C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c6fb0
	if (ctx.cr6.eq) goto loc_828C6FB0;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C6FB0;
	sub_82332C38(ctx, base);
loc_828C6FB0:
	// stw r25,36(r26)
	PPC_STORE_U32(ctx.r26.u32 + 36, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r25,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r25.u32);
	// bl 0x828c7590
	ctx.lr = 0x828C6FC0;
	sub_828C7590(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C6FC8"))) PPC_WEAK_FUNC(sub_828C6FC8);
PPC_FUNC_IMPL(__imp__sub_828C6FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C6FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c7048
	if (ctx.cr6.eq) goto loc_828C7048;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c7000
	if (ctx.cr6.eq) goto loc_828C7000;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x828c7008
	goto loc_828C7008;
loc_828C7000:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C7008:
	// bl 0x828165a8
	ctx.lr = 0x828C700C;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c7040
	goto loc_828C7040;
loc_828C7028:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C7034;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c7060
	if (!ctx.cr0.eq) goto loc_828C7060;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_828C7040:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c7028
	if (!ctx.cr6.eq) goto loc_828C7028;
loc_828C7048:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c76d0
	ctx.lr = 0x828C7058;
	sub_828C76D0(ctx, base);
loc_828C7058:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_828C7060:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c71d8
	ctx.lr = 0x828C7070;
	sub_828C71D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828c7058
	goto loc_828C7058;
}

__attribute__((alias("__imp__sub_828C7078"))) PPC_WEAK_FUNC(sub_828C7078);
PPC_FUNC_IMPL(__imp__sub_828C7078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C7080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c7128
	if (ctx.cr6.eq) goto loc_828C7128;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c70ac
	if (ctx.cr6.eq) goto loc_828C70AC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x828c70b4
	goto loc_828C70B4;
loc_828C70AC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C70B4:
	// bl 0x828165a8
	ctx.lr = 0x828C70B8;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c70f4
	goto loc_828C70F4;
loc_828C70D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C70E4;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c7100
	if (!ctx.cr0.eq) goto loc_828C7100;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_828C70F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c70d8
	if (!ctx.cr6.eq) goto loc_828C70D8;
	// b 0x828c7128
	goto loc_828C7128;
loc_828C7100:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828C7128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7130"))) PPC_WEAK_FUNC(sub_828C7130);
PPC_FUNC_IMPL(__imp__sub_828C7130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c71b4
	if (ctx.cr6.eq) goto loc_828C71B4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c716c
	if (ctx.cr6.eq) goto loc_828C716C;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c7174
	goto loc_828C7174;
loc_828C716C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C7174:
	// bl 0x828165a8
	ctx.lr = 0x828C7178;
	sub_828165A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x828c71ac
	goto loc_828C71AC;
loc_828C7194:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82419458
	ctx.lr = 0x828C71A0;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c71d0
	if (!ctx.cr0.eq) goto loc_828C71D0;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_828C71AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828c7194
	if (!ctx.cr6.eq) goto loc_828C7194;
loc_828C71B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C71B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828C71D0:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// b 0x828c71b8
	goto loc_828C71B8;
}

__attribute__((alias("__imp__sub_828C71D8"))) PPC_WEAK_FUNC(sub_828C71D8);
PPC_FUNC_IMPL(__imp__sub_828C71D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828C71E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x828c74e0
	ctx.lr = 0x828C7218;
	sub_828C74E0(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7284
	if (!ctx.cr6.gt) goto loc_828C7284;
	// li r26,0
	ctx.r26.s64 = 0;
loc_828C722C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x828c7b68
	ctx.lr = 0x828C7238;
	sub_828C7B68(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828c7270
	if (ctx.cr0.eq) goto loc_828C7270;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r27,r11,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823339b8
	ctx.lr = 0x828C7254;
	sub_823339B8(ctx, base);
	// addi r4,r27,24
	ctx.r4.s64 = ctx.r27.s64 + 24;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x828c7808
	ctx.lr = 0x828C7260;
	sub_828C7808(ctx, base);
	// lbz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 56);
	// stb r11,56(r28)
	PPC_STORE_U8(ctx.r28.u32 + 56, ctx.r11.u8);
	// lwz r11,60(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// stw r11,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r11.u32);
loc_828C7270:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c722c
	if (ctx.cr6.lt) goto loc_828C722C;
loc_828C7284:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C72B0"))) PPC_WEAK_FUNC(sub_828C72B0);
PPC_FUNC_IMPL(__imp__sub_828C72B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828C72B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c72dc
	if (!ctx.cr6.gt) goto loc_828C72DC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828C72DC:
	// bl 0x82333900
	ctx.lr = 0x828C72E0;
	sub_82333900(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828c7314
	if (!ctx.cr6.gt) goto loc_828C7314;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_828C72F8:
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
	// blt cr6,0x828c72f8
	if (ctx.cr6.lt) goto loc_828C72F8;
loc_828C7314:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7384
	if (!ctx.cr6.gt) goto loc_828C7384;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,7896
	ctx.r26.s64 = ctx.r11.s64 + 7896;
loc_828C7330:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c734c
	if (ctx.cr6.eq) goto loc_828C734C;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// b 0x828c7350
	goto loc_828C7350;
loc_828C734C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_828C7350:
	// bl 0x828165a8
	ctx.lr = 0x828C7354;
	sub_828165A8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stwx r30,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7330
	if (ctx.cr6.lt) goto loc_828C7330;
loc_828C7384:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c7394
	if (ctx.cr6.eq) goto loc_828C7394;
	// bl 0x82332db8
	ctx.lr = 0x828C7394;
	sub_82332DB8(ctx, base);
loc_828C7394:
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C73A0"))) PPC_WEAK_FUNC(sub_828C73A0);
PPC_FUNC_IMPL(__imp__sub_828C73A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828C73A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// subfic r8,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x828c7410
	if (!ctx.cr6.eq) goto loc_828C7410;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c7410
	if (ctx.cr6.eq) goto loc_828C7410;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c74d8
	goto loc_828C74D8;
loc_828C7410:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r24,r28,-1
	ctx.r24.s64 = ctx.r28.s64 + -1;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c7434
	if (!ctx.cr6.gt) goto loc_828C7434;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828C7434:
	// bl 0x82333900
	ctx.lr = 0x828C7438;
	sub_82333900(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828C7448;
	sub_82A455D0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c74c4
	if (!ctx.cr6.gt) goto loc_828C74C4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
loc_828C7460:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c74b0
	if (!ctx.cr0.eq) goto loc_828C74B0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c7488
	if (ctx.cr6.eq) goto loc_828C7488;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c748c
	goto loc_828C748C;
loc_828C7488:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_828C748C:
	// bl 0x828165a8
	ctx.lr = 0x828C7490;
	sub_828165A8(ctx, base);
	// and r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 & ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r10.u32);
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_828C74B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7460
	if (ctx.cr6.lt) goto loc_828C7460;
loc_828C74C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332db8
	ctx.lr = 0x828C74CC;
	sub_82332DB8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_828C74D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C74E0"))) PPC_WEAK_FUNC(sub_828C74E0);
PPC_FUNC_IMPL(__imp__sub_828C74E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C74E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7564
	if (!ctx.cr6.gt) goto loc_828C7564;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_828C750C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r29,r11,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828c7550
	if (ctx.cr6.eq) goto loc_828C7550;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c7530
	if (ctx.cr6.eq) goto loc_828C7530;
	// bl 0x82332db8
	ctx.lr = 0x828C7530;
	sub_82332DB8(ctx, base);
loc_828C7530:
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r26,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r26.u32);
	// bl 0x82404ca8
	ctx.lr = 0x828C7540;
	sub_82404CA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x828C7548;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x828C7550;
	sub_82332DB8(ctx, base);
loc_828C7550:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c750c
	if (ctx.cr6.lt) goto loc_828C750C;
loc_828C7564:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x828c7588
	if (ctx.cr6.eq) goto loc_828C7588;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C7588;
	sub_82332C38(ctx, base);
loc_828C7588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7590"))) PPC_WEAK_FUNC(sub_828C7590);
PPC_FUNC_IMPL(__imp__sub_828C7590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828C7598;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,26,0,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000;
	// subfic r8,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x828c7600
	if (!ctx.cr6.eq) goto loc_828C7600;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828c7600
	if (ctx.cr6.eq) goto loc_828C7600;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828c76c8
	goto loc_828C76C8;
loc_828C7600:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r24,r28,-1
	ctx.r24.s64 = ctx.r28.s64 + -1;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x828c7624
	if (!ctx.cr6.gt) goto loc_828C7624;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_828C7624:
	// bl 0x82333900
	ctx.lr = 0x828C7628;
	sub_82333900(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828C7638;
	sub_82A455D0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c76b4
	if (!ctx.cr6.gt) goto loc_828C76B4;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
loc_828C7650:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lbz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828c76a0
	if (!ctx.cr0.eq) goto loc_828C76A0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c7678
	if (ctx.cr6.eq) goto loc_828C7678;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828c767c
	goto loc_828C767C;
loc_828C7678:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_828C767C:
	// bl 0x828165a8
	ctx.lr = 0x828C7680;
	sub_828165A8(ctx, base);
	// and r11,r3,r24
	ctx.r11.u64 = ctx.r3.u64 & ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
	// stwx r30,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_828C76A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7650
	if (ctx.cr6.lt) goto loc_828C7650;
loc_828C76B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332db8
	ctx.lr = 0x828C76BC;
	sub_82332DB8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_828C76C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C76D0"))) PPC_WEAK_FUNC(sub_828C76D0);
PPC_FUNC_IMPL(__imp__sub_828C76D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C76D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828c771c
	if (ctx.cr6.eq) goto loc_828C771C;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// stb r10,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r10.u8);
	// bl 0x82400b48
	ctx.lr = 0x828C770C;
	sub_82400B48(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x828c71d8
	ctx.lr = 0x828C7718;
	sub_828C71D8(ctx, base);
	// b 0x828c779c
	goto loc_828C779C;
loc_828C771C:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r3,13016(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828c7738
	if (!ctx.cr6.eq) goto loc_828C7738;
	// bl 0x828223f0
	ctx.lr = 0x828C7734;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13016);
loc_828C7738:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C7750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C7768;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c7798
	if (ctx.cr6.eq) goto loc_828C7798;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828c7900
	ctx.lr = 0x828C7790;
	sub_828C7900(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828c779c
	goto loc_828C779C;
loc_828C7798:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828C779C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7590
	ctx.lr = 0x828C77A4;
	sub_828C7590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828c77fc
	if (!ctx.cr0.eq) goto loc_828C77FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c77c0
	if (ctx.cr6.eq) goto loc_828C77C0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x828c77c8
	goto loc_828C77C8;
loc_828C77C0:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_828C77C8:
	// bl 0x828165a8
	ctx.lr = 0x828C77CC;
	sub_828165A8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_828C77FC:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7808"))) PPC_WEAK_FUNC(sub_828C7808);
PPC_FUNC_IMPL(__imp__sub_828C7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C7810;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r11,52
	ctx.r11.s64 = 52;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// beq cr6,0x828c78e0
	if (ctx.cr6.eq) goto loc_828C78E0;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c78e0
	if (!ctx.cr6.gt) goto loc_828C78E0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c786c
	if (ctx.cr0.eq) goto loc_828C786C;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x82332c38
	ctx.lr = 0x828C786C;
	sub_82332C38(ctx, base);
loc_828C786C:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c78e0
	if (!ctx.cr6.gt) goto loc_828C78E0;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_828C7880:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C7894;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828c78cc
	if (ctx.cr0.eq) goto loc_828C78CC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828C78C0;
	sub_823339B8(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823339b8
	ctx.lr = 0x828C78CC;
	sub_823339B8(ctx, base);
loc_828C78CC:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7880
	if (ctx.cr6.lt) goto loc_828C7880;
loc_828C78E0:
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x828c72b0
	ctx.lr = 0x828C78F4;
	sub_828C72B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7900"))) PPC_WEAK_FUNC(sub_828C7900);
PPC_FUNC_IMPL(__imp__sub_828C7900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x828C7908;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823339b8
	ctx.lr = 0x828C7918;
	sub_823339B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r25,r30,12
	ctx.r25.s64 = ctx.r30.s64 + 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82333858
	ctx.lr = 0x828C7950;
	sub_82333858(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r22.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c79c4
	if (!ctx.cr6.gt) goto loc_828C79C4;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_828C796C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x828c7b68
	ctx.lr = 0x828C7978;
	sub_828C7B68(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x828c79b0
	if (ctx.cr0.eq) goto loc_828C79B0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r26,r11,r24
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x823339b8
	ctx.lr = 0x828C7994;
	sub_823339B8(ctx, base);
	// addi r4,r26,24
	ctx.r4.s64 = ctx.r26.s64 + 24;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x828c7808
	ctx.lr = 0x828C79A0;
	sub_828C7808(ctx, base);
	// lbz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 56);
	// stb r11,56(r27)
	PPC_STORE_U8(ctx.r27.u32 + 56, ctx.r11.u8);
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// stw r11,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r11.u32);
loc_828C79B0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c796c
	if (ctx.cr6.lt) goto loc_828C796C;
loc_828C79C4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stb r22,76(r28)
	PPC_STORE_U8(ctx.r28.u32 + 76, ctx.r22.u8);
	// stw r22,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C79F8"))) PPC_WEAK_FUNC(sub_828C79F8);
PPC_FUNC_IMPL(__imp__sub_828C79F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C7A00;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x828c7b58
	if (ctx.cr6.eq) goto loc_828C7B58;
	// lwz r26,16(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// ble cr6,0x828c7afc
	if (!ctx.cr6.gt) goto loc_828C7AFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7a64
	if (!ctx.cr6.gt) goto loc_828C7A64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_828C7A38:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x828C7A48;
	sub_82333960(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x828C7A50;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7a38
	if (ctx.cr6.lt) goto loc_828C7A38;
loc_828C7A64:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x828c7a88
	if (ctx.cr6.eq) goto loc_828C7A88;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C7A88;
	sub_82332C38(ctx, base);
loc_828C7A88:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7b58
	if (!ctx.cr6.gt) goto loc_828C7B58;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_828C7A98:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C7AAC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828c7ae4
	if (ctx.cr0.eq) goto loc_828C7AE4;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828C7AD8;
	sub_823339B8(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823339b8
	ctx.lr = 0x828C7AE4;
	sub_823339B8(ctx, base);
loc_828C7AE4:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,52
	ctx.r28.s64 = ctx.r28.s64 + 52;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7a98
	if (ctx.cr6.lt) goto loc_828C7A98;
	// b 0x828c7b58
	goto loc_828C7B58;
loc_828C7AFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c7b34
	if (!ctx.cr6.gt) goto loc_828C7B34;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_828C7B08:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x828C7B18;
	sub_82333960(ctx, base);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x828C7B20;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c7b08
	if (ctx.cr6.lt) goto loc_828C7B08;
loc_828C7B34:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c7b58
	if (ctx.cr6.eq) goto loc_828C7B58;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828C7B58;
	sub_82332C38(ctx, base);
loc_828C7B58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7B68"))) PPC_WEAK_FUNC(sub_828C7B68);
PPC_FUNC_IMPL(__imp__sub_828C7B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828c7b98
	if (!ctx.cr6.eq) goto loc_828C7B98;
	// bl 0x828223f0
	ctx.lr = 0x828C7B94;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_828C7B98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C7BB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x828C7BC8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7BF8"))) PPC_WEAK_FUNC(sub_828C7BF8);
PPC_FUNC_IMPL(__imp__sub_828C7BF8) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_828C7C08"))) PPC_WEAK_FUNC(sub_828C7C08);
PPC_FUNC_IMPL(__imp__sub_828C7C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15168
	ctx.r3.s64 = ctx.r11.s64 + -15168;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7C18"))) PPC_WEAK_FUNC(sub_828C7C18);
PPC_FUNC_IMPL(__imp__sub_828C7C18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828c7c58
	if (ctx.cr6.eq) goto loc_828C7C58;
	// bl 0x828cb408
	ctx.lr = 0x828C7C38;
	sub_828CB408(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c7c48
	if (!ctx.cr6.eq) goto loc_828C7C48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c7c5c
	goto loc_828C7C5C;
loc_828C7C48:
	// bl 0x82333d20
	ctx.lr = 0x828C7C4C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x828c7c5c
	if (ctx.cr6.eq) goto loc_828C7C5C;
loc_828C7C58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C7C5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7C70"))) PPC_WEAK_FUNC(sub_828C7C70);
PPC_FUNC_IMPL(__imp__sub_828C7C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cb408
	sub_828CB408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7C78"))) PPC_WEAK_FUNC(sub_828C7C78);
PPC_FUNC_IMPL(__imp__sub_828C7C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cb408
	ctx.lr = 0x828C7C98;
	sub_828CB408(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c7ca8
	if (!ctx.cr6.eq) goto loc_828C7CA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828c7cbc
	goto loc_828C7CBC;
loc_828C7CA8:
	// bl 0x82333d20
	ctx.lr = 0x828C7CAC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c7cbc
	if (ctx.cr6.eq) goto loc_828C7CBC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C7CBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7CD8"))) PPC_WEAK_FUNC(sub_828C7CD8);
PPC_FUNC_IMPL(__imp__sub_828C7CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828C7CF0;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,15356
	ctx.r8.s64 = ctx.r11.s64 + 15356;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r10,r10,-14920
	ctx.r10.s64 = ctx.r10.s64 + -14920;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r9,r9,-14832
	ctx.r9.s64 = ctx.r9.s64 + -14832;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7D50"))) PPC_WEAK_FUNC(sub_828C7D50);
PPC_FUNC_IMPL(__imp__sub_828C7D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C7D58;
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
	ctx.lr = 0x828C7D70;
	sub_82833180(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r8,r11,15356
	ctx.r8.s64 = ctx.r11.s64 + 15356;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r10,r10,-14920
	ctx.r10.s64 = ctx.r10.s64 + -14920;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r9,r9,-14832
	ctx.r9.s64 = ctx.r9.s64 + -14832;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7DD8"))) PPC_WEAK_FUNC(sub_828C7DD8);
PPC_FUNC_IMPL(__imp__sub_828C7DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828ca190
	ctx.lr = 0x828C7DF8;
	sub_828CA190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c7e08
	if (ctx.cr0.eq) goto loc_828C7E08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828C7E08;
	sub_82332DB8(ctx, base);
loc_828C7E08:
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

__attribute__((alias("__imp__sub_828C7E28"))) PPC_WEAK_FUNC(sub_828C7E28);
PPC_FUNC_IMPL(__imp__sub_828C7E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7E38"))) PPC_WEAK_FUNC(sub_828C7E38);
PPC_FUNC_IMPL(__imp__sub_828C7E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c7e70
	if (ctx.cr6.eq) goto loc_828C7E70;
	// bl 0x828cb570
	ctx.lr = 0x828C7E60;
	sub_828CB570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c7e70
	if (!ctx.cr6.eq) goto loc_828C7E70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c7e7c
	goto loc_828C7E7C;
loc_828C7E70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C7E7C;
	sub_828C7C18(ctx, base);
loc_828C7E7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7E98"))) PPC_WEAK_FUNC(sub_828C7E98);
PPC_FUNC_IMPL(__imp__sub_828C7E98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cb570
	sub_828CB570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C7EA0"))) PPC_WEAK_FUNC(sub_828C7EA0);
PPC_FUNC_IMPL(__imp__sub_828C7EA0) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828C7EC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c7f24
	if (ctx.cr0.eq) goto loc_828C7F24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c80b0
	ctx.lr = 0x828C7ED4;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14760
	ctx.r11.s64 = ctx.r11.s64 + -14760;
	// addi r10,r10,-14672
	ctx.r10.s64 = ctx.r10.s64 + -14672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
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
	// b 0x828c7f28
	goto loc_828C7F28;
loc_828C7F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C7F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7F40"))) PPC_WEAK_FUNC(sub_828C7F40);
PPC_FUNC_IMPL(__imp__sub_828C7F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cb570
	ctx.lr = 0x828C7F60;
	sub_828CB570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c7f74
	if (ctx.cr6.eq) goto loc_828C7F74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C7F74;
	sub_828C7C78(ctx, base);
loc_828C7F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C7F90"))) PPC_WEAK_FUNC(sub_828C7F90);
PPC_FUNC_IMPL(__imp__sub_828C7F90) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// lwz r6,220(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x828c7d50
	ctx.lr = 0x828C7FCC;
	sub_828C7D50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r11,-14760
	ctx.r11.s64 = ctx.r11.s64 + -14760;
	// addi r10,r10,-14672
	ctx.r10.s64 = ctx.r10.s64 + -14672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f0,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x828C7FFC;
	sub_82A4E118(ctx, base);
	// lfs f13,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,60(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f10,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x828c8048
	if (!ctx.cr6.eq) goto loc_828C8048;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// b 0x828c808c
	goto loc_828C808C;
loc_828C8048:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x828c806c
	if (!ctx.cr6.lt) goto loc_828C806C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x828c8088
	goto loc_828C8088;
loc_828C806C:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_828C8088:
	// stfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_828C808C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828C80B0"))) PPC_WEAK_FUNC(sub_828C80B0);
PPC_FUNC_IMPL(__imp__sub_828C80B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828C80EC;
	sub_82337440(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14920
	ctx.r11.s64 = ctx.r11.s64 + -14920;
	// addi r10,r10,-14832
	ctx.r10.s64 = ctx.r10.s64 + -14832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8140"))) PPC_WEAK_FUNC(sub_828C8140);
PPC_FUNC_IMPL(__imp__sub_828C8140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15124
	ctx.r3.s64 = ctx.r11.s64 + -15124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8150"))) PPC_WEAK_FUNC(sub_828C8150);
PPC_FUNC_IMPL(__imp__sub_828C8150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c8188
	if (ctx.cr6.eq) goto loc_828C8188;
	// bl 0x828cb6d8
	ctx.lr = 0x828C8178;
	sub_828CB6D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c8188
	if (!ctx.cr6.eq) goto loc_828C8188;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c8194
	goto loc_828C8194;
loc_828C8188:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C8194;
	sub_828C7C18(ctx, base);
loc_828C8194:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C81B0"))) PPC_WEAK_FUNC(sub_828C81B0);
PPC_FUNC_IMPL(__imp__sub_828C81B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cb6d8
	sub_828CB6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C81B8"))) PPC_WEAK_FUNC(sub_828C81B8);
PPC_FUNC_IMPL(__imp__sub_828C81B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828C81D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c81e8
	if (ctx.cr0.eq) goto loc_828C81E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c8250
	ctx.lr = 0x828C81E4;
	sub_828C8250(ctx, base);
	// b 0x828c81ec
	goto loc_828C81EC;
loc_828C81E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C81EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8200"))) PPC_WEAK_FUNC(sub_828C8200);
PPC_FUNC_IMPL(__imp__sub_828C8200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cb6d8
	ctx.lr = 0x828C8220;
	sub_828CB6D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c8234
	if (ctx.cr6.eq) goto loc_828C8234;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C8234;
	sub_828C7C78(ctx, base);
loc_828C8234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8250"))) PPC_WEAK_FUNC(sub_828C8250);
PPC_FUNC_IMPL(__imp__sub_828C8250) {
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
	// bl 0x828c80b0
	ctx.lr = 0x828C8270;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14600
	ctx.r11.s64 = ctx.r11.s64 + -14600;
	// addi r10,r10,-14512
	ctx.r10.s64 = ctx.r10.s64 + -14512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
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
	// lfs f0,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
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

__attribute__((alias("__imp__sub_828C8328"))) PPC_WEAK_FUNC(sub_828C8328);
PPC_FUNC_IMPL(__imp__sub_828C8328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15092
	ctx.r3.s64 = ctx.r11.s64 + -15092;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8338"))) PPC_WEAK_FUNC(sub_828C8338);
PPC_FUNC_IMPL(__imp__sub_828C8338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c8370
	if (ctx.cr6.eq) goto loc_828C8370;
	// bl 0x828cb840
	ctx.lr = 0x828C8360;
	sub_828CB840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c8370
	if (!ctx.cr6.eq) goto loc_828C8370;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c837c
	goto loc_828C837C;
loc_828C8370:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C837C;
	sub_828C7C18(ctx, base);
loc_828C837C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8398"))) PPC_WEAK_FUNC(sub_828C8398);
PPC_FUNC_IMPL(__imp__sub_828C8398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cb840
	sub_828CB840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C83A0"))) PPC_WEAK_FUNC(sub_828C83A0);
PPC_FUNC_IMPL(__imp__sub_828C83A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828C83BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c83d0
	if (ctx.cr0.eq) goto loc_828C83D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c8438
	ctx.lr = 0x828C83CC;
	sub_828C8438(ctx, base);
	// b 0x828c83d4
	goto loc_828C83D4;
loc_828C83D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C83D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C83E8"))) PPC_WEAK_FUNC(sub_828C83E8);
PPC_FUNC_IMPL(__imp__sub_828C83E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cb840
	ctx.lr = 0x828C8408;
	sub_828CB840(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c841c
	if (ctx.cr6.eq) goto loc_828C841C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C841C;
	sub_828C7C78(ctx, base);
loc_828C841C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8438"))) PPC_WEAK_FUNC(sub_828C8438);
PPC_FUNC_IMPL(__imp__sub_828C8438) {
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
	// bl 0x828c80b0
	ctx.lr = 0x828C8458;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14440
	ctx.r11.s64 = ctx.r11.s64 + -14440;
	// addi r10,r10,-14352
	ctx.r10.s64 = ctx.r10.s64 + -14352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lfs f0,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f0,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
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
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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
	// lfs f0,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8510"))) PPC_WEAK_FUNC(sub_828C8510);
PPC_FUNC_IMPL(__imp__sub_828C8510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15068
	ctx.r3.s64 = ctx.r11.s64 + -15068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8520"))) PPC_WEAK_FUNC(sub_828C8520);
PPC_FUNC_IMPL(__imp__sub_828C8520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c8558
	if (ctx.cr6.eq) goto loc_828C8558;
	// bl 0x828cb9a8
	ctx.lr = 0x828C8548;
	sub_828CB9A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c8558
	if (!ctx.cr6.eq) goto loc_828C8558;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c8564
	goto loc_828C8564;
loc_828C8558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C8564;
	sub_828C7C18(ctx, base);
loc_828C8564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8580"))) PPC_WEAK_FUNC(sub_828C8580);
PPC_FUNC_IMPL(__imp__sub_828C8580) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cb9a8
	sub_828CB9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C8588"))) PPC_WEAK_FUNC(sub_828C8588);
PPC_FUNC_IMPL(__imp__sub_828C8588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828C85A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c85b8
	if (ctx.cr0.eq) goto loc_828C85B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c8620
	ctx.lr = 0x828C85B4;
	sub_828C8620(ctx, base);
	// b 0x828c85bc
	goto loc_828C85BC;
loc_828C85B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C85BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C85D0"))) PPC_WEAK_FUNC(sub_828C85D0);
PPC_FUNC_IMPL(__imp__sub_828C85D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cb9a8
	ctx.lr = 0x828C85F0;
	sub_828CB9A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c8604
	if (ctx.cr6.eq) goto loc_828C8604;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C8604;
	sub_828C7C78(ctx, base);
loc_828C8604:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8620"))) PPC_WEAK_FUNC(sub_828C8620);
PPC_FUNC_IMPL(__imp__sub_828C8620) {
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
	// bl 0x828c80b0
	ctx.lr = 0x828C8640;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14280
	ctx.r11.s64 = ctx.r11.s64 + -14280;
	// addi r10,r10,-14192
	ctx.r10.s64 = ctx.r10.s64 + -14192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
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
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828C86F0"))) PPC_WEAK_FUNC(sub_828C86F0);
PPC_FUNC_IMPL(__imp__sub_828C86F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8700"))) PPC_WEAK_FUNC(sub_828C8700);
PPC_FUNC_IMPL(__imp__sub_828C8700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c8738
	if (ctx.cr6.eq) goto loc_828C8738;
	// bl 0x828cbc00
	ctx.lr = 0x828C8728;
	sub_828CBC00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c8738
	if (!ctx.cr6.eq) goto loc_828C8738;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c8744
	goto loc_828C8744;
loc_828C8738:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C8744;
	sub_828C7C18(ctx, base);
loc_828C8744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8760"))) PPC_WEAK_FUNC(sub_828C8760);
PPC_FUNC_IMPL(__imp__sub_828C8760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cbc00
	sub_828CBC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C8768"))) PPC_WEAK_FUNC(sub_828C8768);
PPC_FUNC_IMPL(__imp__sub_828C8768) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x828C8788;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c87e8
	if (ctx.cr0.eq) goto loc_828C87E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c80b0
	ctx.lr = 0x828C879C;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14120
	ctx.r11.s64 = ctx.r11.s64 + -14120;
	// addi r10,r10,-14032
	ctx.r10.s64 = ctx.r10.s64 + -14032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x827f8578
	ctx.lr = 0x828C87C0;
	sub_827F8578(ctx, base);
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x828c87ec
	goto loc_828C87EC;
loc_828C87E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C87EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8808"))) PPC_WEAK_FUNC(sub_828C8808);
PPC_FUNC_IMPL(__imp__sub_828C8808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cbc00
	ctx.lr = 0x828C8828;
	sub_828CBC00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c883c
	if (ctx.cr6.eq) goto loc_828C883C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C883C;
	sub_828C7C78(ctx, base);
loc_828C883C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8858"))) PPC_WEAK_FUNC(sub_828C8858);
PPC_FUNC_IMPL(__imp__sub_828C8858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8239d768
	ctx.lr = 0x828C887C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ca190
	ctx.lr = 0x828C8884;
	sub_828CA190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c8894
	if (ctx.cr0.eq) goto loc_828C8894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828C8894;
	sub_82332DB8(ctx, base);
loc_828C8894:
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

__attribute__((alias("__imp__sub_828C88B0"))) PPC_WEAK_FUNC(sub_828C88B0);
PPC_FUNC_IMPL(__imp__sub_828C88B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-15012
	ctx.r3.s64 = ctx.r11.s64 + -15012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C88C0"))) PPC_WEAK_FUNC(sub_828C88C0);
PPC_FUNC_IMPL(__imp__sub_828C88C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828c88f8
	if (ctx.cr6.eq) goto loc_828C88F8;
	// bl 0x828cbda0
	ctx.lr = 0x828C88E8;
	sub_828CBDA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828c88f8
	if (!ctx.cr6.eq) goto loc_828C88F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828c8904
	goto loc_828C8904;
loc_828C88F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828c7c18
	ctx.lr = 0x828C8904;
	sub_828C7C18(ctx, base);
loc_828C8904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8920"))) PPC_WEAK_FUNC(sub_828C8920);
PPC_FUNC_IMPL(__imp__sub_828C8920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cbda0
	sub_828CBDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C8928"))) PPC_WEAK_FUNC(sub_828C8928);
PPC_FUNC_IMPL(__imp__sub_828C8928) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x828C8948;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c89ac
	if (ctx.cr0.eq) goto loc_828C89AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c80b0
	ctx.lr = 0x828C895C;
	sub_828C80B0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-13960
	ctx.r11.s64 = ctx.r11.s64 + -13960;
	// addi r10,r10,-13872
	ctx.r10.s64 = ctx.r10.s64 + -13872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x827f8578
	ctx.lr = 0x828C8980;
	sub_827F8578(ctx, base);
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x828C8994;
	sub_82873B58(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x828c89b0
	goto loc_828C89B0;
loc_828C89AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C89B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C89C8"))) PPC_WEAK_FUNC(sub_828C89C8);
PPC_FUNC_IMPL(__imp__sub_828C89C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cbda0
	ctx.lr = 0x828C89E8;
	sub_828CBDA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828c89fc
	if (ctx.cr6.eq) goto loc_828C89FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828c7c78
	ctx.lr = 0x828C89FC;
	sub_828C7C78(ctx, base);
loc_828C89FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8A18"))) PPC_WEAK_FUNC(sub_828C8A18);
PPC_FUNC_IMPL(__imp__sub_828C8A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x828C8A3C;
	sub_8239D768(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8239d768
	ctx.lr = 0x828C8A44;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ca190
	ctx.lr = 0x828C8A4C;
	sub_828CA190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c8a5c
	if (ctx.cr0.eq) goto loc_828C8A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828C8A5C;
	sub_82332DB8(ctx, base);
loc_828C8A5C:
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

__attribute__((alias("__imp__sub_828C8A78"))) PPC_WEAK_FUNC(sub_828C8A78);
PPC_FUNC_IMPL(__imp__sub_828C8A78) {
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
	// bl 0x8240a778
	ctx.lr = 0x828C8A90;
	sub_8240A778(ctx, base);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,6768
	ctx.r10.s64 = ctx.r10.s64 + 6768;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// addi r7,r10,30248
	ctx.r7.s64 = ctx.r10.s64 + 30248;
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r11.u32);
	// lfs f13,912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lfs f11,30248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30248);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f0,-9832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -9832);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lfs f12,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f10,19948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19948);
	ctx.f10.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r7.u32);
	// lfs f9,19944(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 19944);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,19940(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 19940);
	ctx.f8.f64 = double(temp.f32);
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
	// lfs f7,5808(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5808);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r10.u32);
	// stfs f0,1120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// stfs f13,1124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// stfs f12,1056(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// stfs f11,1112(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1112, temp.u32);
	// stfs f10,1076(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1076, temp.u32);
	// stfs f9,1080(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1080, temp.u32);
	// stfs f8,1084(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1084, temp.u32);
	// stfs f7,1104(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1104, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828c8b60
	if (ctx.cr6.eq) goto loc_828C8B60;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r5,r11,-13608
	ctx.r5.s64 = ctx.r11.s64 + -13608;
	// addi r4,r10,-13588
	ctx.r4.s64 = ctx.r10.s64 + -13588;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,8
	ctx.r6.s64 = ctx.r31.s64 + 8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828c5b68
	ctx.lr = 0x828C8B60;
	sub_828C5B68(ctx, base);
loc_828C8B60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C8B78"))) PPC_WEAK_FUNC(sub_828C8B78);
PPC_FUNC_IMPL(__imp__sub_828C8B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C8B80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// lwz r10,1152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c8bf0
	if (ctx.cr6.eq) goto loc_828C8BF0;
	// addi r29,r31,1136
	ctx.r29.s64 = ctx.r31.s64 + 1136;
loc_828C8BA4:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82332ca8
	ctx.lr = 0x828C8BC4;
	sub_82332CA8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828c8be4
	if (ctx.cr6.eq) goto loc_828C8BE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8BE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C8BE4:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c8ba4
	if (!ctx.cr6.eq) goto loc_828C8BA4;
loc_828C8BF0:
	// addi r30,r31,1136
	ctx.r30.s64 = ctx.r31.s64 + 1136;
	// lwz r5,1152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828C8C0C;
	sub_82332CA8(ctx, base);
	// lwz r3,1148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828c8c1c
	if (ctx.cr6.eq) goto loc_828C8C1C;
	// bl 0x82332db8
	ctx.lr = 0x828C8C1C;
	sub_82332DB8(ctx, base);
loc_828C8C1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x828C8C34;
	sub_8239D768(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8269b988
	ctx.lr = 0x828C8C3C;
	sub_8269B988(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8239d768
	ctx.lr = 0x828C8C44;
	sub_8239D768(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8240a980
	ctx.lr = 0x828C8C4C;
	sub_8240A980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x828C8C54;
	sub_82833238(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C8C60"))) PPC_WEAK_FUNC(sub_828C8C60);
PPC_FUNC_IMPL(__imp__sub_828C8C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828C8C68;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// beq cr6,0x828c9170
	if (ctx.cr6.eq) goto loc_828C9170;
	// lfs f0,644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,660(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f13,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f10,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lfs f9,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// stfs f13,556(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lwz r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r7,564(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// lfs f7,652(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,664(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f8,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r8.u32);
	// stfs f8,752(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// stfs f7,852(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// stw r11,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r11.u32);
	// stfs f10,656(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stw r10,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r10.u32);
	// fmadds f0,f10,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,560(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// fmadds f13,f9,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stw r9,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r9.u32);
	// stw r7,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r7.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r6,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r6.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,1132(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1132);
	// lwz r8,13024(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
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
	// lwz r11,504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c8da4
	if (!ctx.cr6.eq) goto loc_828C8DA4;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828c8da4
	if (!ctx.cr6.gt) goto loc_828C8DA4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_828C8D40:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828c8d8c
	if (ctx.cr6.eq) goto loc_828C8D8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C8D8C:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828c8d40
	if (ctx.cr6.lt) goto loc_828C8D40;
	// lwz r8,13024(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_828C8DA4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// lfs f0,30248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fsel f13,f12,f13,f30
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f30.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828c8ff8
	if (!ctx.cr6.gt) goto loc_828C8FF8;
	// lfs f0,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,668(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x828c8e4c
	if (ctx.cr6.lt) goto loc_828C8E4C;
	// lfs f13,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,876(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828c8e4c
	if (!ctx.cr6.lt) goto loc_828C8E4C;
	// lwz r11,864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	// lwz r10,856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	// lwz r9,860(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 860);
	// stw r27,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r27.u32);
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// stfs f31,1100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// lfs f0,984(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,1108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
loc_828C8E4C:
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c8e80
	if (ctx.cr6.eq) goto loc_828C8E80;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// stw r27,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r27.u32);
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
	// stfs f31,1100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1100, temp.u32);
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// lfs f0,984(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1108, temp.u32);
loc_828C8E80:
	// lwz r11,504(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c9000
	if (!ctx.cr6.eq) goto loc_828C9000;
	// lfs f0,1096(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f0,1092(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,1092
	ctx.r11.s64 = ctx.r31.s64 + 1092;
	// lfs f8,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x828c8ee0
	if (!ctx.cr6.eq) goto loc_828C8EE0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// b 0x828c8f14
	goto loc_828C8F14;
loc_828C8EE0:
	// fcmpu cr6,f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bge cr6,0x828c8ef8
	if (!ctx.cr6.lt) goto loc_828C8EF8;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// fmr f10,f31
	ctx.f10.f64 = ctx.f31.f64;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// b 0x828c8f14
	goto loc_828C8F14;
loc_828C8EF8:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
loc_828C8F14:
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r7,664(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x828c8f68
	if (!ctx.cr6.eq) goto loc_828C8F68;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// b 0x828c8f94
	goto loc_828C8F94;
loc_828C8F68:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x828c8f80
	if (!ctx.cr6.lt) goto loc_828C8F80;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x828c8f94
	goto loc_828C8F94;
loc_828C8F80:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f8,f30,f0
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f12,f8,f31
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
loc_828C8F94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828c9000
	if (ctx.cr6.eq) goto loc_828C9000;
	// lfs f7,1108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,984(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f7,1112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bgt cr6,0x828c9000
	if (ctx.cr6.gt) goto loc_828C9000;
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f9,1104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x828c9000
	if (ctx.cr6.gt) goto loc_828C9000;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r5,r8,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,656(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828C8FF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
loc_828C9000:
	// lwz r10,568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// addi r11,r31,568
	ctx.r11.s64 = ctx.r31.s64 + 568;
	// lwz r9,572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// lwz r8,576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
	// stw r9,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r9.u32);
	// stw r8,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r8.u32);
	// ble cr6,0x828c9070
	if (!ctx.cr6.gt) goto loc_828C9070;
	// lfs f12,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// lfs f0,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,748(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,548(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,572(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x828c9094
	goto loc_828C9094;
loc_828C9070:
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_828C9094:
	// lwz r10,668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// addi r11,r31,668
	ctx.r11.s64 = ctx.r31.s64 + 668;
	// lwz r9,672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// lwz r8,676(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	// stw r10,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r10.u32);
	// stw r9,872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 872, ctx.r9.u32);
	// stw r8,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r8.u32);
	// ble cr6,0x828c9100
	if (!ctx.cr6.gt) goto loc_828C9100;
	// lfs f12,644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// lfs f0,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f11,848(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,672(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x828c9124
	goto loc_828C9124;
loc_828C9100:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_828C9124:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828c9170
	if (!ctx.cr6.eq) goto loc_828C9170;
	// addi r4,r31,728
	ctx.r4.s64 = ctx.r31.s64 + 728;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x828C9140;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,828
	ctx.r4.s64 = ctx.r31.s64 + 828;
	// addi r3,r31,428
	ctx.r3.s64 = ctx.r31.s64 + 428;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x828C9150;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,528
	ctx.r4.s64 = ctx.r31.s64 + 528;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x828C9160;
	sub_82A4EA80(ctx, base);
	// addi r4,r31,628
	ctx.r4.s64 = ctx.r31.s64 + 628;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// li r5,100
	ctx.r5.s64 = 100;
	// bl 0x82a4ea80
	ctx.lr = 0x828C9170;
	sub_82A4EA80(ctx, base);
loc_828C9170:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_828C9188"))) PPC_WEAK_FUNC(sub_828C9188);
PPC_FUNC_IMPL(__imp__sub_828C9188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x828c91c4
	if (ctx.cr6.lt) goto loc_828C91C4;
	// beq cr6,0x828c91b8
	if (ctx.cr6.eq) goto loc_828C91B8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x828c91ac
	if (ctx.cr6.lt) goto loc_828C91AC;
	// bne cr6,0x828c91e0
	if (!ctx.cr6.eq) goto loc_828C91E0;
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,352(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c91cc
	goto loc_828C91CC;
loc_828C91AC:
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c91cc
	goto loc_828C91CC;
loc_828C91B8:
	// lfs f0,1040(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c91cc
	goto loc_828C91CC;
loc_828C91C4:
	// lfs f0,1044(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
loc_828C91CC:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x828c91e0
	if (ctx.cr6.lt) goto loc_828C91E0;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_828C91E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C91E8"))) PPC_WEAK_FUNC(sub_828C91E8);
PPC_FUNC_IMPL(__imp__sub_828C91E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x828c9224
	if (ctx.cr6.lt) goto loc_828C9224;
	// beq cr6,0x828c9218
	if (ctx.cr6.eq) goto loc_828C9218;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x828c920c
	if (ctx.cr6.lt) goto loc_828C920C;
	// bne cr6,0x828c9240
	if (!ctx.cr6.eq) goto loc_828C9240;
	// lfs f0,152(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,352(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c922c
	goto loc_828C922C;
loc_828C920C:
	// lfs f0,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c922c
	goto loc_828C922C;
loc_828C9218:
	// lfs f0,1040(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828c922c
	goto loc_828C922C;
loc_828C9224:
	// lfs f0,1044(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
loc_828C922C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x828c9240
	if (!ctx.cr6.lt) goto loc_828C9240;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_828C9240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9248"))) PPC_WEAK_FUNC(sub_828C9248);
PPC_FUNC_IMPL(__imp__sub_828C9248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828C9250;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,-17696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17696);
	// lis r30,-31943
	ctx.r30.s64 = -2093416448;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828c929c
	if (!ctx.cr0.eq) goto loc_828C929C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-17696(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17696, ctx.r11.u32);
	// addi r3,r9,-14980
	ctx.r3.s64 = ctx.r9.s64 + -14980;
	// bl 0x828165a8
	ctx.lr = 0x828C9294;
	sub_828165A8(ctx, base);
	// stw r3,-17700(r30)
	PPC_STORE_U32(ctx.r30.u32 + -17700, ctx.r3.u32);
	// b 0x828c92a0
	goto loc_828C92A0;
loc_828C929C:
	// lwz r3,-17700(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17700);
loc_828C92A0:
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828c92ec
	if (!ctx.cr6.eq) goto loc_828C92EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x828c92cc
	if (ctx.cr6.eq) goto loc_828C92CC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x828c92d0
	if (ctx.cr6.eq) goto loc_828C92D0;
loc_828C92CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828C92D0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x828c956c
	if (!ctx.cr6.eq) goto loc_828C956C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828c956c
	if (ctx.cr6.eq) goto loc_828C956C;
	// stw r10,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r10.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// b 0x828c956c
	goto loc_828C956C;
loc_828C92EC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1540);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9304
	if (!ctx.cr6.eq) goto loc_828C9304;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9304:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c931c
	if (!ctx.cr6.eq) goto loc_828C931C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C931C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9334
	if (!ctx.cr6.eq) goto loc_828C9334;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9334:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c934c
	if (!ctx.cr6.eq) goto loc_828C934C;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C934C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9364
	if (!ctx.cr6.eq) goto loc_828C9364;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9364:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1584(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c937c
	if (!ctx.cr6.eq) goto loc_828C937C;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C937C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9394
	if (!ctx.cr6.eq) goto loc_828C9394;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9394:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c93ac
	if (!ctx.cr6.eq) goto loc_828C93AC;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C93AC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c93c4
	if (!ctx.cr6.eq) goto loc_828C93C4;
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C93C4:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1580);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c93dc
	if (!ctx.cr6.eq) goto loc_828C93DC;
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C93DC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c93f4
	if (!ctx.cr6.eq) goto loc_828C93F4;
	// stfs f31,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// b 0x828c956c
	goto loc_828C956C;
loc_828C93F4:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c940c
	if (!ctx.cr6.eq) goto loc_828C940C;
	// stfs f31,1040(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// b 0x828c956c
	goto loc_828C956C;
loc_828C940C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9424
	if (!ctx.cr6.eq) goto loc_828C9424;
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9424:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c943c
	if (!ctx.cr6.eq) goto loc_828C943C;
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C943C:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9454
	if (!ctx.cr6.eq) goto loc_828C9454;
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x828c9468
	goto loc_828C9468;
loc_828C9454:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1632);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c956c
	if (!ctx.cr6.eq) goto loc_828C956C;
	// li r30,13
	ctx.r30.s64 = 13;
loc_828C9468:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw. r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828c956c
	if (ctx.cr0.eq) goto loc_828C956C;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x828c94e8
	if (!ctx.cr6.eq) goto loc_828C94E8;
	// lwz r9,928(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// and r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828c9554
	if (ctx.cr6.eq) goto loc_828C9554;
	// lwz r7,932(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// addi r8,r30,235
	ctx.r8.s64 = ctx.r30.s64 + 235;
	// lwz r6,936(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r9.u32);
	// andc r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// stw r7,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r11.u32);
	// lfs f0,984(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C94D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c9554
	if (ctx.cr0.eq) goto loc_828C9554;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x828c9540
	goto loc_828C9540;
loc_828C94E8:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x828c9554
	if (!ctx.cr6.eq) goto loc_828C9554;
	// lwz r10,928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 928);
	// and. r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828c9508
	if (ctx.cr0.eq) goto loc_828C9508;
	// lwz r9,936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 936);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
loc_828C9508:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r9,932(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r10,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r10.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// lwz r11,160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C9534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c9554
	if (ctx.cr0.eq) goto loc_828C9554;
	// li r6,1
	ctx.r6.s64 = 1;
loc_828C9540:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc7c8
	ctx.lr = 0x828C9554;
	sub_828CC7C8(ctx, base);
loc_828C9554:
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,984(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// bl 0x8282bdc8
	ctx.lr = 0x828C956C;
	sub_8282BDC8(ctx, base);
loc_828C956C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9580"))) PPC_WEAK_FUNC(sub_828C9580);
PPC_FUNC_IMPL(__imp__sub_828C9580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828C9588;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x828c95e0
	if (!ctx.cr6.gt) goto loc_828C95E0;
	// lfs f12,1120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f12,f12,f0,f11
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fdivs f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// b 0x828c9600
	goto loc_828C9600;
loc_828C95E0:
	// fneg f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f11,1120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f11,f0,f12
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f30,f13
	ctx.f30.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_828C9600:
	// lwa r11,1128(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1128));
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,1572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1572);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// fmuls f31,f13,f30
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bne cr6,0x828c9674
	if (!ctx.cr6.eq) goto loc_828C9674;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x828c9638
	if (!ctx.cr6.eq) goto loc_828C9638;
	// stfs f31,628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// b 0x828c965c
	goto loc_828C965C;
loc_828C9638:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828c9650
	if (!ctx.cr6.lt) goto loc_828C9650;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// li r29,20
	ctx.r29.s64 = 20;
	// b 0x828c9660
	goto loc_828C9660;
loc_828C9650:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x828c9660
	if (!ctx.cr6.gt) goto loc_828C9660;
	// li r29,21
	ctx.r29.s64 = 21;
loc_828C965C:
	// stfs f31,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
loc_828C9660:
	// lfs f0,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f31
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,848(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f13,648(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C9674:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c96cc
	if (!ctx.cr6.eq) goto loc_828C96CC;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x828c9694
	if (!ctx.cr6.eq) goto loc_828C9694;
	// stfs f31,640(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// b 0x828c96b8
	goto loc_828C96B8;
loc_828C9694:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828c96ac
	if (!ctx.cr6.lt) goto loc_828C96AC;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// li r29,23
	ctx.r29.s64 = 23;
	// b 0x828c96bc
	goto loc_828C96BC;
loc_828C96AC:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x828c96bc
	if (!ctx.cr6.gt) goto loc_828C96BC;
	// li r29,22
	ctx.r29.s64 = 22;
loc_828C96B8:
	// stfs f31,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
loc_828C96BC:
	// lfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// stfs f31,644(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C96CC:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1564);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9728
	if (!ctx.cr6.eq) goto loc_828C9728;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x828c96f0
	if (!ctx.cr6.eq) goto loc_828C96F0;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// b 0x828c9714
	goto loc_828C9714;
loc_828C96F0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828c9704
	if (!ctx.cr6.lt) goto loc_828C9704;
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// li r29,17
	ctx.r29.s64 = 17;
	// b 0x828c9718
	goto loc_828C9718;
loc_828C9704:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x828c9718
	if (!ctx.cr6.gt) goto loc_828C9718;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// li r29,16
	ctx.r29.s64 = 16;
loc_828C9714:
	// stfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_828C9718:
	// lfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C9728:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1560);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c9780
	if (!ctx.cr6.eq) goto loc_828C9780;
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x828c9748
	if (!ctx.cr6.eq) goto loc_828C9748;
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// b 0x828c976c
	goto loc_828C976C;
loc_828C9748:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828c9760
	if (!ctx.cr6.lt) goto loc_828C9760;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// li r29,19
	ctx.r29.s64 = 19;
	// b 0x828c9770
	goto loc_828C9770;
loc_828C9760:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x828c9770
	if (!ctx.cr6.gt) goto loc_828C9770;
	// li r29,18
	ctx.r29.s64 = 18;
loc_828C976C:
	// stfs f31,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
loc_828C9770:
	// lfs f0,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,744(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// stfs f31,544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C9780:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c97a4
	if (!ctx.cr6.eq) goto loc_828C97A4;
	// lfs f0,1044(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1044);
	ctx.f0.f64 = double(temp.f32);
	// li r29,14
	ctx.r29.s64 = 14;
	// stfs f0,1048(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1048, temp.u32);
	// stfs f31,1044(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1044, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C97A4:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r11,1620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1620);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828c97c8
	if (!ctx.cr6.eq) goto loc_828C97C8;
	// lfs f0,1040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// li r29,15
	ctx.r29.s64 = 15;
	// stfs f0,1052(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1052, temp.u32);
	// stfs f31,1040(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1040, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C97C8:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2124
	ctx.r3.s64 = ctx.r11.s64 + 2124;
	// bl 0x828165a8
	ctx.lr = 0x828C97D4;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c996c
	if (ctx.cr6.eq) goto loc_828C996C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1940
	ctx.r3.s64 = ctx.r11.s64 + 1940;
	// bl 0x828165a8
	ctx.lr = 0x828C97E8;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c996c
	if (ctx.cr6.eq) goto loc_828C996C;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2196
	ctx.r3.s64 = ctx.r11.s64 + 2196;
	// bl 0x828165a8
	ctx.lr = 0x828C97FC;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9954
	if (ctx.cr6.eq) goto loc_828C9954;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1972
	ctx.r3.s64 = ctx.r11.s64 + 1972;
	// bl 0x828165a8
	ctx.lr = 0x828C9810;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9954
	if (ctx.cr6.eq) goto loc_828C9954;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2212
	ctx.r3.s64 = ctx.r11.s64 + 2212;
	// bl 0x828165a8
	ctx.lr = 0x828C9824;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9938
	if (ctx.cr6.eq) goto loc_828C9938;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1952
	ctx.r3.s64 = ctx.r11.s64 + 1952;
	// bl 0x828165a8
	ctx.lr = 0x828C9838;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9938
	if (ctx.cr6.eq) goto loc_828C9938;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2136
	ctx.r3.s64 = ctx.r11.s64 + 2136;
	// bl 0x828165a8
	ctx.lr = 0x828C984C;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9920
	if (ctx.cr6.eq) goto loc_828C9920;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1960
	ctx.r3.s64 = ctx.r11.s64 + 1960;
	// bl 0x828165a8
	ctx.lr = 0x828C9860;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828c9920
	if (ctx.cr6.eq) goto loc_828C9920;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2160
	ctx.r3.s64 = ctx.r11.s64 + 2160;
	// bl 0x828165a8
	ctx.lr = 0x828C9874;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828c9898
	if (!ctx.cr6.eq) goto loc_828C9898;
	// lfs f0,640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_828C9890:
	// stfs f0,644(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C9898:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2164
	ctx.r3.s64 = ctx.r11.s64 + 2164;
	// bl 0x828165a8
	ctx.lr = 0x828C98A4;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828c98c4
	if (!ctx.cr6.eq) goto loc_828C98C4;
	// lfs f0,632(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x828c98ec
	goto loc_828C98EC;
loc_828C98C4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2156
	ctx.r3.s64 = ctx.r11.s64 + 2156;
	// bl 0x828165a8
	ctx.lr = 0x828C98D0;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828c98f4
	if (!ctx.cr6.eq) goto loc_828C98F4;
	// lfs f0,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828C98EC:
	// stfs f0,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C98F4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// bl 0x828165a8
	ctx.lr = 0x828C9900;
	sub_828165A8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828c9984
	if (!ctx.cr6.eq) goto loc_828C9984;
	// lfs f0,636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f13,640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x828c9890
	goto loc_828C9890;
loc_828C9920:
	// lfs f0,536(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f13,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x828c9980
	goto loc_828C9980;
loc_828C9938:
	// lfs f0,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f13,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_828C994C:
	// stfs f0,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// b 0x828c9984
	goto loc_828C9984;
loc_828C9954:
	// lfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x828c994c
	goto loc_828C994C;
loc_828C996C:
	// lfs f0,540(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,536(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_828C9980:
	// stfs f0,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
loc_828C9984:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,17880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17880);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x828c99a4
	if (!ctx.cr6.lt) goto loc_828C99A4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,18600(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18600);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x828c99c0
	if (ctx.cr6.gt) goto loc_828C99C0;
loc_828C99A4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,984(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1056(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1056, temp.u32);
	// bl 0x8282bdc8
	ctx.lr = 0x828C99C0;
	sub_8282BDC8(ctx, base);
loc_828C99C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C99D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828c99f4
	if (ctx.cr0.eq) goto loc_828C99F4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc908
	ctx.lr = 0x828C99F4;
	sub_828CC908(ctx, base);
loc_828C99F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9A10"))) PPC_WEAK_FUNC(sub_828C9A10);
PPC_FUNC_IMPL(__imp__sub_828C9A10) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f31,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f30,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x828C9A70;
	sub_824F97D8(ctx, base);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f6,f5,f30
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f12,f11,f0,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f7,f0,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f13,f9,f31,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fmadds f0,f5,f31,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmadds f13,f8,f31,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9B20"))) PPC_WEAK_FUNC(sub_828C9B20);
PPC_FUNC_IMPL(__imp__sub_828C9B20) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r8,232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f31,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f30,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x828C9B80;
	sub_824F97D8(ctx, base);
	// lfs f0,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f7,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f6,f5,f30
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f12,f11,f0,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f7,f0,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f13,f9,f31,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fmadds f0,f5,f31,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmadds f13,f8,f31,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9C30"))) PPC_WEAK_FUNC(sub_828C9C30);
PPC_FUNC_IMPL(__imp__sub_828C9C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828C9C38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x828165a8
	ctx.lr = 0x828C9C4C;
	sub_828165A8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// bl 0x82816528
	ctx.lr = 0x828C9C5C;
	sub_82816528(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828c9c6c
	if (!ctx.cr6.eq) goto loc_828C9C6C;
	// addi r31,r29,1044
	ctx.r31.s64 = ctx.r29.s64 + 1044;
	// b 0x828c9c84
	goto loc_828C9C84;
loc_828C9C6C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-14940
	ctx.r3.s64 = ctx.r11.s64 + -14940;
	// bl 0x82816528
	ctx.lr = 0x828C9C78;
	sub_82816528(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828c9c84
	if (!ctx.cr6.eq) goto loc_828C9C84;
	// addi r31,r29,1040
	ctx.r31.s64 = ctx.r29.s64 + 1040;
loc_828C9C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9C90"))) PPC_WEAK_FUNC(sub_828C9C90);
PPC_FUNC_IMPL(__imp__sub_828C9C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828C9CAC"))) PPC_WEAK_FUNC(sub_828C9CAC);
PPC_FUNC_IMPL(__imp__sub_828C9CAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828C9CB0"))) PPC_WEAK_FUNC(sub_828C9CB0);
PPC_FUNC_IMPL(__imp__sub_828C9CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C9CB8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// li r3,76
	ctx.r3.s64 = 76;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82833108
	ctx.lr = 0x828C9CEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c9d24
	if (ctx.cr0.eq) goto loc_828C9D24;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x828c7f90
	ctx.lr = 0x828C9D20;
	sub_828C7F90(ctx, base);
	// b 0x828c9d28
	goto loc_828C9D28;
loc_828C9D24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C9D28:
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,1136
	ctx.r3.s64 = ctx.r27.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828C9D38;
	sub_82410060(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9D48"))) PPC_WEAK_FUNC(sub_828C9D48);
PPC_FUNC_IMPL(__imp__sub_828C9D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C9D50;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61748
	ctx.lr = 0x828C9D58;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,116
	ctx.r3.s64 = 116;
	// std r9,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r9.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82833108
	ctx.lr = 0x828C9D8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c9ddc
	if (ctx.cr0.eq) goto loc_828C9DDC;
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,328(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x828ca2f0
	ctx.lr = 0x828C9DD8;
	sub_828CA2F0(ctx, base);
	// b 0x828c9de0
	goto loc_828C9DE0;
loc_828C9DDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C9DE0:
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,1136
	ctx.r3.s64 = ctx.r27.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828C9DF0;
	sub_82410060(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61794
	ctx.lr = 0x828C9DFC;
	__restfpr_28(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9E00"))) PPC_WEAK_FUNC(sub_828C9E00);
PPC_FUNC_IMPL(__imp__sub_828C9E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828C9E08;
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
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,112
	ctx.r3.s64 = 112;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82833108
	ctx.lr = 0x828C9E44;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828c9eb4
	if (ctx.cr0.eq) goto loc_828C9EB4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,268(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7d50
	ctx.lr = 0x828C9E60;
	sub_828C7D50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// addi r11,r11,-14280
	ctx.r11.s64 = ctx.r11.s64 + -14280;
	// stfs f30,64(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// addi r10,r10,-14192
	ctx.r10.s64 = ctx.r10.s64 + -14192;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// lfs f0,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x828C9E98;
	sub_82A4E118(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// b 0x828c9eb8
	goto loc_828C9EB8;
loc_828C9EB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828C9EB8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r25,1136
	ctx.r3.s64 = ctx.r25.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828C9EC8;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_828C9EE0"))) PPC_WEAK_FUNC(sub_828C9EE0);
PPC_FUNC_IMPL(__imp__sub_828C9EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828C9EE8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61748
	ctx.lr = 0x828C9EF0;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,116
	ctx.r3.s64 = 116;
	// std r9,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r9.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82833108
	ctx.lr = 0x828C9F24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828c9f6c
	if (ctx.cr0.eq) goto loc_828C9F6C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828caa68
	ctx.lr = 0x828C9F68;
	sub_828CAA68(ctx, base);
	// b 0x828c9f70
	goto loc_828C9F70;
loc_828C9F6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828C9F70:
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,1136
	ctx.r3.s64 = ctx.r27.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828C9F80;
	sub_82410060(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61794
	ctx.lr = 0x828C9F8C;
	__restfpr_28(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828C9F90"))) PPC_WEAK_FUNC(sub_828C9F90);
PPC_FUNC_IMPL(__imp__sub_828C9F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828C9F98;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82833108
	ctx.lr = 0x828C9FC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828ca028
	if (ctx.cr0.eq) goto loc_828CA028;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7d50
	ctx.lr = 0x828C9FDC;
	sub_828C7D50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r9,r11,-14120
	ctx.r9.s64 = ctx.r11.s64 + -14120;
	// addi r10,r10,-14032
	ctx.r10.s64 = ctx.r10.s64 + -14032;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bl 0x828cba08
	ctx.lr = 0x828CA020;
	sub_828CBA08(ctx, base);
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x828ca02c
	goto loc_828CA02C;
loc_828CA028:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828CA02C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,1136
	ctx.r3.s64 = ctx.r26.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828CA03C;
	sub_82410060(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CA048"))) PPC_WEAK_FUNC(sub_828CA048);
PPC_FUNC_IMPL(__imp__sub_828CA048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CA050;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82833108
	ctx.lr = 0x828CA078;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828ca09c
	if (ctx.cr0.eq) goto loc_828CA09C;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828cb060
	ctx.lr = 0x828CA098;
	sub_828CB060(ctx, base);
	// b 0x828ca0a0
	goto loc_828CA0A0;
loc_828CA09C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CA0A0:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,1136
	ctx.r3.s64 = ctx.r27.s64 + 1136;
	// bl 0x82410060
	ctx.lr = 0x828CA0B0;
	sub_82410060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CA0C0"))) PPC_WEAK_FUNC(sub_828CA0C0);
PPC_FUNC_IMPL(__imp__sub_828CA0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CA0C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ca120
	if (!ctx.cr6.gt) goto loc_828CA120;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828CA0E8:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828ca10c
	if (!ctx.cr6.eq) goto loc_828CA10C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CA10C:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ca0e8
	if (ctx.cr6.lt) goto loc_828CA0E8;
loc_828CA120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CA128"))) PPC_WEAK_FUNC(sub_828CA128);
PPC_FUNC_IMPL(__imp__sub_828CA128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CA130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828ca188
	if (!ctx.cr6.gt) goto loc_828CA188;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828CA150:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828ca174
	if (!ctx.cr6.eq) goto loc_828CA174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CA174:
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ca150
	if (ctx.cr6.lt) goto loc_828CA150;
loc_828CA188:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CA190"))) PPC_WEAK_FUNC(sub_828CA190);
PPC_FUNC_IMPL(__imp__sub_828CA190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-14920
	ctx.r11.s64 = ctx.r11.s64 + -14920;
	// addi r10,r10,-14832
	ctx.r10.s64 = ctx.r10.s64 + -14832;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ca1ec
	if (ctx.cr6.eq) goto loc_828CA1EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_828CA1EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823375f0
	ctx.lr = 0x828CA1F4;
	sub_823375F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833238
	ctx.lr = 0x828CA1FC;
	sub_82833238(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CA218"))) PPC_WEAK_FUNC(sub_828CA218);
PPC_FUNC_IMPL(__imp__sub_828CA218) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CA228"))) PPC_WEAK_FUNC(sub_828CA228);
PPC_FUNC_IMPL(__imp__sub_828CA228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828CA240"))) PPC_WEAK_FUNC(sub_828CA240);
PPC_FUNC_IMPL(__imp__sub_828CA240) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,52(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lfs f1,56(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c9188
	ctx.lr = 0x828CA260;
	sub_828C9188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ca2e0
	if (ctx.cr0.eq) goto loc_828CA2E0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828ca284
	if (ctx.cr6.eq) goto loc_828CA284;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x828ca290
	if (!ctx.cr6.eq) goto loc_828CA290;
	// lfs f13,148(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,144(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ca298
	goto loc_828CA298;
loc_828CA284:
	// lfs f13,248(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ca298
	goto loc_828CA298;
loc_828CA290:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_828CA298:
	// lfs f12,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x828ca2e0
	if (ctx.cr6.lt) goto loc_828CA2E0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,40(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA2E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CA2E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CA2F0"))) PPC_WEAK_FUNC(sub_828CA2F0);
PPC_FUNC_IMPL(__imp__sub_828CA2F0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61740
	ctx.lr = 0x828CA308;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lwz r6,300(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// bl 0x828c7d50
	ctx.lr = 0x828CA334;
	sub_828C7D50(ctx, base);
	// lfs f13,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f30,60(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r10,-14600
	ctx.r10.s64 = ctx.r10.s64 + -14600;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r9,-14512
	ctx.r11.s64 = ctx.r9.s64 + -14512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f30,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f28,16668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16668);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x828ca3ac
	if (!ctx.cr6.eq) goto loc_828CA3AC;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x828ca3e4
	goto loc_828CA3E4;
loc_828CA3AC:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x828ca3c4
	if (!ctx.cr6.lt) goto loc_828CA3C4;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x828ca3e4
	goto loc_828CA3E4;
loc_828CA3C4:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_828CA3E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lfs f27,23784(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23784);
	ctx.f27.f64 = double(temp.f32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// fmuls f1,f29,f27
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// bl 0x82a4e118
	ctx.lr = 0x828CA40C;
	sub_82A4E118(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,88(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x828ca43c
	if (!ctx.cr6.eq) goto loc_828CA43C;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x828ca43c
	if (!ctx.cr6.eq) goto loc_828CA43C;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x828ca440
	if (ctx.cr6.eq) goto loc_828CA440;
loc_828CA43C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828CA440:
	// lfs f13,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lfs f12,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// lfs f11,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x828ca478
	if (!ctx.cr6.eq) goto loc_828CA478;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bne cr6,0x828ca478
	if (!ctx.cr6.eq) goto loc_828CA478;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x828ca478
	if (!ctx.cr6.eq) goto loc_828CA478;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// b 0x828ca4ec
	goto loc_828CA4EC;
loc_828CA478:
	// fmuls f0,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x828ca4a8
	if (!ctx.cr6.eq) goto loc_828CA4A8;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x828ca4e0
	goto loc_828CA4E0;
loc_828CA4A8:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x828ca4c0
	if (!ctx.cr6.lt) goto loc_828CA4C0;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x828ca4e0
	goto loc_828CA4E0;
loc_828CA4C0:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_828CA4E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_828CA4EC:
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// fcmpu cr6,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// bne cr6,0x828ca508
	if (!ctx.cr6.eq) goto loc_828CA508;
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x828ca518
	goto loc_828CA518;
loc_828CA508:
	// fmuls f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// bl 0x82a4e118
	ctx.lr = 0x828CA510;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_828CA518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a6178c
	ctx.lr = 0x828CA528;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CA540"))) PPC_WEAK_FUNC(sub_828CA540);
PPC_FUNC_IMPL(__imp__sub_828CA540) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c9188
	ctx.lr = 0x828CA56C;
	sub_828C9188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ca6dc
	if (ctx.cr0.eq) goto loc_828CA6DC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828ca598
	if (ctx.cr6.eq) goto loc_828CA598;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x828ca5a4
	if (!ctx.cr6.eq) goto loc_828CA5A4;
	// lfs f12,148(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
loc_828CA58C:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x828ca5ac
	goto loc_828CA5AC;
loc_828CA598:
	// lfs f12,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828ca58c
	goto loc_828CA58C;
loc_828CA5A4:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_828CA5AC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lfs f10,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,13024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,984(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x828ca63c
	if (!ctx.cr6.gt) goto loc_828CA63C;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x828ca600
	if (ctx.cr6.eq) goto loc_828CA600;
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x828ca624
	goto loc_828CA624;
loc_828CA600:
	// lfs f11,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f10,f0,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x828ca6c8
	if (ctx.cr6.lt) goto loc_828CA6C8;
loc_828CA624:
	// lfs f0,984(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x828ca6dc
	goto loc_828CA6DC;
loc_828CA63C:
	// lfs f10,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f10,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f10,f13,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// blt cr6,0x828ca6c8
	if (ctx.cr6.lt) goto loc_828CA6C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,100(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r9,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r9.u32);
	// bl 0x82643af0
	ctx.lr = 0x828CA684;
	sub_82643AF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x828ca6a8
	if (ctx.cr0.eq) goto loc_828CA6A8;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// b 0x828ca6ac
	goto loc_828CA6AC;
loc_828CA6A8:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_828CA6AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA6C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828ca6dc
	goto loc_828CA6DC;
loc_828CA6C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CA6DC:
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

__attribute__((alias("__imp__sub_828CA6F8"))) PPC_WEAK_FUNC(sub_828CA6F8);
PPC_FUNC_IMPL(__imp__sub_828CA6F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CA708"))) PPC_WEAK_FUNC(sub_828CA708);
PPC_FUNC_IMPL(__imp__sub_828CA708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828CA710;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c9188
	ctx.lr = 0x828CA740;
	sub_828C9188(ctx, base);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r29,13024(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lfs f29,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x828ca84c
	if (ctx.cr0.eq) goto loc_828CA84C;
	// lfs f0,984(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// beq cr6,0x828ca78c
	if (ctx.cr6.eq) goto loc_828CA78C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x828ca79c
	if (!ctx.cr6.eq) goto loc_828CA79C;
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828ca794
	goto loc_828CA794;
loc_828CA78C:
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
loc_828CA794:
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_828CA79C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x828CA7C4;
	sub_82332E18(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f0,f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828ca84c
	if (ctx.cr6.lt) goto loc_828CA84C;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828ca84c
	if (ctx.cr6.gt) goto loc_828CA84C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828ca830
	if (ctx.cr6.eq) goto loc_828CA830;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ca83c
	if (!ctx.cr6.eq) goto loc_828CA83C;
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ca834
	goto loc_828CA834;
loc_828CA830:
	// lfs f0,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
loc_828CA834:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
loc_828CA83C:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828ca84c
	if (ctx.cr6.lt) goto loc_828CA84C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_828CA84C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c9188
	ctx.lr = 0x828CA85C;
	sub_828C9188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ca948
	if (ctx.cr0.eq) goto loc_828CA948;
	// lfs f0,984(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// beq cr6,0x828ca888
	if (ctx.cr6.eq) goto loc_828CA888;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x828ca898
	if (!ctx.cr6.eq) goto loc_828CA898;
	// lfs f0,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828ca890
	goto loc_828CA890;
loc_828CA888:
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
loc_828CA890:
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_828CA898:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x828CA8C0;
	sub_82332E18(ctx, base);
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f0,f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828ca948
	if (ctx.cr6.lt) goto loc_828CA948;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828ca948
	if (ctx.cr6.gt) goto loc_828CA948;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828ca92c
	if (ctx.cr6.eq) goto loc_828CA92C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828ca938
	if (!ctx.cr6.eq) goto loc_828CA938;
	// lfs f0,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ca930
	goto loc_828CA930;
loc_828CA92C:
	// lfs f0,252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
loc_828CA930:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f31.f64;
loc_828CA938:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x828ca948
	if (ctx.cr6.lt) goto loc_828CA948;
	// li r27,1
	ctx.r27.s64 = 1;
loc_828CA948:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x828ca99c
	if (ctx.cr6.eq) goto loc_828CA99C;
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82643b88
	ctx.lr = 0x828CA964;
	sub_82643B88(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x828ca97c
	if (ctx.cr0.eq) goto loc_828CA97C;
	// stw r28,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r28.u32);
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r27,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r27.u32);
	// b 0x828ca980
	goto loc_828CA980;
loc_828CA97C:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_828CA980:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CA998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,13024(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
loc_828CA99C:
	// lfs f13,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,984(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x828ca9c4
	if (!ctx.cr6.gt) goto loc_828CA9C4;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828ca9f0
	if (ctx.cr6.gt) goto loc_828CA9F0;
loc_828CA9C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x828c91e8
	ctx.lr = 0x828CA9D4;
	sub_828C91E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828ca9f0
	if (!ctx.cr0.eq) goto loc_828CA9F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x828c91e8
	ctx.lr = 0x828CA9E8;
	sub_828C91E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828caa34
	if (ctx.cr0.eq) goto loc_828CAA34;
loc_828CA9F0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828caa34
	if (!ctx.cr6.eq) goto loc_828CAA34;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828caa20
	if (ctx.cr6.eq) goto loc_828CAA20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CAA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CAA20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CAA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CAA34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_828CAA48"))) PPC_WEAK_FUNC(sub_828CAA48);
PPC_FUNC_IMPL(__imp__sub_828CAA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CAA68"))) PPC_WEAK_FUNC(sub_828CAA68);
PPC_FUNC_IMPL(__imp__sub_828CAA68) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61748
	ctx.lr = 0x828CAA80;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// bl 0x828c7d50
	ctx.lr = 0x828CAAAC;
	sub_828C7D50(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f10,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,-14440
	ctx.r10.s64 = ctx.r10.s64 + -14440;
	// stfs f28,56(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r9,r9,-14352
	ctx.r9.s64 = ctx.r9.s64 + -14352;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// lfs f12,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bne cr6,0x828cab04
	if (!ctx.cr6.eq) goto loc_828CAB04;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bne cr6,0x828cab04
	if (!ctx.cr6.eq) goto loc_828CAB04;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bne cr6,0x828cab04
	if (!ctx.cr6.eq) goto loc_828CAB04;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x828cab9c
	goto loc_828CAB9C;
loc_828CAB04:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x828cab3c
	if (!ctx.cr6.eq) goto loc_828CAB3C;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x828cab7c
	goto loc_828CAB7C;
loc_828CAB3C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f8,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x828cab5c
	if (!ctx.cr6.lt) goto loc_828CAB5C;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x828cab7c
	goto loc_828CAB7C;
loc_828CAB5C:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_828CAB7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
loc_828CAB9C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f0,23784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x828CABBC;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f29,84(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x828CABD8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CABF0"))) PPC_WEAK_FUNC(sub_828CABF0);
PPC_FUNC_IMPL(__imp__sub_828CABF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CABF8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x828cac34
	if (ctx.cr6.eq) goto loc_828CAC34;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x828cac40
	if (!ctx.cr6.eq) goto loc_828CAC40;
	// lfs f12,148(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
loc_828CAC28:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x828cac48
	goto loc_828CAC48;
loc_828CAC34:
	// lfs f12,248(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,244(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// b 0x828cac28
	goto loc_828CAC28;
loc_828CAC40:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
loc_828CAC48:
	// fmuls f0,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x828cac90
	if (!ctx.cr6.eq) goto loc_828CAC90;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x828cacdc
	goto loc_828CACDC;
loc_828CAC90:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f10,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x828cacb0
	if (!ctx.cr6.lt) goto loc_828CACB0;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x828cacc8
	goto loc_828CACC8;
loc_828CACB0:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_828CACC8:
	// stfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_828CACDC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828c9188
	ctx.lr = 0x828CACE8;
	sub_828C9188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cad7c
	if (ctx.cr0.eq) goto loc_828CAD7C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cad0c
	if (ctx.cr6.eq) goto loc_828CAD0C;
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// b 0x828cad34
	goto loc_828CAD34;
loc_828CAD0C:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x828caea4
	if (ctx.cr6.lt) goto loc_828CAEA4;
loc_828CAD34:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r10,r10,-3712
	ctx.r10.s64 = ctx.r10.s64 + -3712;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x828cbe00
	ctx.lr = 0x828CAD78;
	sub_828CBE00(ctx, base);
	// b 0x828caea4
	goto loc_828CAEA4;
loc_828CAD7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828c91e8
	ctx.lr = 0x828CAD84;
	sub_828C91E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cae90
	if (!ctx.cr0.eq) goto loc_828CAE90;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828caea4
	if (ctx.cr6.eq) goto loc_828CAEA4;
	// fmr f1,f12
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f12.f64;
	// bl 0x82a4e678
	ctx.lr = 0x828CADA0;
	sub_82A4E678(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// lfs f2,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a4e678
	ctx.lr = 0x828CADB0;
	sub_82A4E678(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x828cae00
	if (!ctx.cr6.lt) goto loc_828CAE00;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,20252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828cade4
	if (!ctx.cr6.gt) goto loc_828CADE4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16448);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x828cae00
	goto loc_828CAE00;
loc_828CADE4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828cae00
	if (!ctx.cr6.lt) goto loc_828CAE00;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16448(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16448);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_828CAE00:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x828caea4
	if (ctx.cr6.eq) goto loc_828CAEA4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x828cae18
	if (ctx.cr6.lt) goto loc_828CAE18;
	// li r10,2
	ctx.r10.s64 = 2;
loc_828CAE18:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828cae2c
	if (ctx.cr6.eq) goto loc_828CAE2C;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x828cae90
	if (!ctx.cr6.eq) goto loc_828CAE90;
loc_828CAE2C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cae48
	if (ctx.cr6.eq) goto loc_828CAE48;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x828cae90
	if (!ctx.cr6.eq) goto loc_828CAE90;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828cae4c
	if (!ctx.cr6.eq) goto loc_828CAE4C;
loc_828CAE48:
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_828CAE4C:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x828caea4
	if (ctx.cr6.lt) goto loc_828CAEA4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CAE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CAE90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CAEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CAEA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CAEB8"))) PPC_WEAK_FUNC(sub_828CAEB8);
PPC_FUNC_IMPL(__imp__sub_828CAEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// addi r4,r10,-3712
	ctx.r4.s64 = ctx.r10.s64 + -3712;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828CAEF0"))) PPC_WEAK_FUNC(sub_828CAEF0);
PPC_FUNC_IMPL(__imp__sub_828CAEF0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,932(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// lwz r7,13024(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13024);
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// slw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// and. r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x828caf70
	if (ctx.cr0.eq) goto loc_828CAF70;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828caf58
	if (ctx.cr6.eq) goto loc_828CAF58;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,984(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828caf70
	if (ctx.cr6.gt) goto loc_828CAF70;
loc_828CAF58:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lfs f0,984(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// b 0x828cafe4
	goto loc_828CAFE4;
loc_828CAF70:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cafe4
	if (ctx.cr6.eq) goto loc_828CAFE4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828CAF84:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828caf94
	if (ctx.cr6.eq) goto loc_828CAF94;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828cafa4
	if (ctx.cr6.eq) goto loc_828CAFA4;
loc_828CAF94:
	// slw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and. r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x828cafa4
	if (ctx.cr0.eq) goto loc_828CAFA4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_828CAFA4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// ble cr6,0x828caf84
	if (!ctx.cr6.gt) goto loc_828CAF84;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x828cafd0
	if (!ctx.cr6.eq) goto loc_828CAFD0;
	// lfs f13,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,984(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x828cafe4
	if (!ctx.cr6.gt) goto loc_828CAFE4;
loc_828CAFD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CAFE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CAFE4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828cb024
	if (ctx.cr6.lt) goto loc_828CB024;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CB024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB040"))) PPC_WEAK_FUNC(sub_828CB040);
PPC_FUNC_IMPL(__imp__sub_828CB040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB060"))) PPC_WEAK_FUNC(sub_828CB060);
PPC_FUNC_IMPL(__imp__sub_828CB060) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c7d50
	ctx.lr = 0x828CB08C;
	sub_828C7D50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r9,r11,-13960
	ctx.r9.s64 = ctx.r11.s64 + -13960;
	// addi r8,r10,-13872
	ctx.r8.s64 = ctx.r10.s64 + -13872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// bl 0x828cba08
	ctx.lr = 0x828CB0F0;
	sub_828CBA08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x828CB108;
	sub_82332D50(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828CB120;
	sub_82A455D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_828CB140"))) PPC_WEAK_FUNC(sub_828CB140);
PPC_FUNC_IMPL(__imp__sub_828CB140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x828CB148;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828cb30c
	if (!ctx.cr6.gt) goto loc_828CB30C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lfs f29,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// addi r24,r11,9436
	ctx.r24.s64 = ctx.r11.s64 + 9436;
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_828CB194:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,932(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 932);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828cb2c4
	if (ctx.cr0.eq) goto loc_828CB2C4;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cb1dc
	if (ctx.cr6.eq) goto loc_828CB1DC;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828cb2b4
	if (!ctx.cr6.eq) goto loc_828CB2B4;
	// stwx r27,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x828cb2b4
	goto loc_828CB2B4;
loc_828CB1DC:
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r27,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-3712
	ctx.r4.s64 = ctx.r11.s64 + -3712;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stwx r27,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r27.u32);
	// lfs f31,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x829c80b8
	ctx.lr = 0x828CB214;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828cb298
	if (!ctx.cr0.eq) goto loc_828CB298;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x828cb228
	if (!ctx.cr6.eq) goto loc_828CB228;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
loc_828CB228:
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828cbda0
	ctx.lr = 0x828CB230;
	sub_828CBDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x828CB250;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cb284
	if (ctx.cr0.eq) goto loc_828CB284;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfs f30,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,20(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x828cb288
	goto loc_828CB288;
loc_828CB284:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_828CB288:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x828CB294;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828CB298:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB2B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CB2B4:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x828cb2dc
	if (ctx.cr6.eq) goto loc_828CB2DC;
loc_828CB2C4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828cb194
	if (ctx.cr6.lt) goto loc_828CB194;
	// b 0x828cb30c
	goto loc_828CB30C;
loc_828CB2DC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CB30C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CB320"))) PPC_WEAK_FUNC(sub_828CB320);
PPC_FUNC_IMPL(__imp__sub_828CB320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828CB340:
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828cb340
	if (ctx.cr6.lt) goto loc_828CB340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB360"))) PPC_WEAK_FUNC(sub_828CB360);
PPC_FUNC_IMPL(__imp__sub_828CB360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26520);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb3a0
	if (!ctx.cr0.eq) goto loc_828CB3A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26520, ctx.r11.u32);
	// addi r3,r9,-15168
	ctx.r3.s64 = ctx.r9.s64 + -15168;
	// bl 0x82816528
	ctx.lr = 0x828CB398;
	sub_82816528(ctx, base);
	// stw r3,-26524(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26524, ctx.r3.u32);
	// b 0x828cb3a4
	goto loc_828CB3A4;
loc_828CB3A0:
	// lwz r3,-26524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26524);
loc_828CB3A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB3B8"))) PPC_WEAK_FUNC(sub_828CB3B8);
PPC_FUNC_IMPL(__imp__sub_828CB3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cb408
	ctx.lr = 0x828CB3D8;
	sub_828CB408(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB3EC;
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

__attribute__((alias("__imp__sub_828CB408"))) PPC_WEAK_FUNC(sub_828CB408);
PPC_FUNC_IMPL(__imp__sub_828CB408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17960
	ctx.r31.s64 = ctx.r11.s64 + 17960;
	// lwz r11,17956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb450
	if (!ctx.cr0.eq) goto loc_828CB450;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14780
	ctx.r9.s64 = ctx.r9.s64 + -14780;
	// stw r11,17956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17956, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// bl 0x82a4c758
	ctx.lr = 0x828CB450;
	sub_82A4C758(ctx, base);
loc_828CB450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB468"))) PPC_WEAK_FUNC(sub_828CB468);
PPC_FUNC_IMPL(__imp__sub_828CB468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828CB480;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cb4b0
	if (ctx.cr0.eq) goto loc_828CB4B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CB490;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14760
	ctx.r11.s64 = ctx.r11.s64 + -14760;
	// addi r10,r10,-14672
	ctx.r10.s64 = ctx.r10.s64 + -14672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x828cb4b4
	goto loc_828CB4B4;
loc_828CB4B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB4B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB4C8"))) PPC_WEAK_FUNC(sub_828CB4C8);
PPC_FUNC_IMPL(__imp__sub_828CB4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26528);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb508
	if (!ctx.cr0.eq) goto loc_828CB508;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26528(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26528, ctx.r11.u32);
	// addi r3,r9,-15152
	ctx.r3.s64 = ctx.r9.s64 + -15152;
	// bl 0x82816528
	ctx.lr = 0x828CB500;
	sub_82816528(ctx, base);
	// stw r3,-26532(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26532, ctx.r3.u32);
	// b 0x828cb50c
	goto loc_828CB50C;
loc_828CB508:
	// lwz r3,-26532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26532);
loc_828CB50C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB520"))) PPC_WEAK_FUNC(sub_828CB520);
PPC_FUNC_IMPL(__imp__sub_828CB520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cb570
	ctx.lr = 0x828CB540;
	sub_828CB570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB554;
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

__attribute__((alias("__imp__sub_828CB570"))) PPC_WEAK_FUNC(sub_828CB570);
PPC_FUNC_IMPL(__imp__sub_828CB570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17968
	ctx.r31.s64 = ctx.r11.s64 + 17968;
	// lwz r11,17964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb5b8
	if (!ctx.cr0.eq) goto loc_828CB5B8;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14620
	ctx.r9.s64 = ctx.r9.s64 + -14620;
	// stw r11,17964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17964, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// bl 0x82a4c758
	ctx.lr = 0x828CB5B8;
	sub_82A4C758(ctx, base);
loc_828CB5B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB5D0"))) PPC_WEAK_FUNC(sub_828CB5D0);
PPC_FUNC_IMPL(__imp__sub_828CB5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x828CB5E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cb618
	if (ctx.cr0.eq) goto loc_828CB618;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CB5F8;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14600
	ctx.r11.s64 = ctx.r11.s64 + -14600;
	// addi r10,r10,-14512
	ctx.r10.s64 = ctx.r10.s64 + -14512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x828cb61c
	goto loc_828CB61C;
loc_828CB618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB61C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB630"))) PPC_WEAK_FUNC(sub_828CB630);
PPC_FUNC_IMPL(__imp__sub_828CB630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26536);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb670
	if (!ctx.cr0.eq) goto loc_828CB670;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26536(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26536, ctx.r11.u32);
	// addi r3,r9,-15124
	ctx.r3.s64 = ctx.r9.s64 + -15124;
	// bl 0x82816528
	ctx.lr = 0x828CB668;
	sub_82816528(ctx, base);
	// stw r3,-26540(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26540, ctx.r3.u32);
	// b 0x828cb674
	goto loc_828CB674;
loc_828CB670:
	// lwz r3,-26540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26540);
loc_828CB674:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB688"))) PPC_WEAK_FUNC(sub_828CB688);
PPC_FUNC_IMPL(__imp__sub_828CB688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cb6d8
	ctx.lr = 0x828CB6A8;
	sub_828CB6D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB6BC;
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

__attribute__((alias("__imp__sub_828CB6D8"))) PPC_WEAK_FUNC(sub_828CB6D8);
PPC_FUNC_IMPL(__imp__sub_828CB6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17976
	ctx.r31.s64 = ctx.r11.s64 + 17976;
	// lwz r11,17972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb720
	if (!ctx.cr0.eq) goto loc_828CB720;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14460
	ctx.r9.s64 = ctx.r9.s64 + -14460;
	// stw r11,17972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17972, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14480
	ctx.r3.s64 = ctx.r11.s64 + -14480;
	// bl 0x82a4c758
	ctx.lr = 0x828CB720;
	sub_82A4C758(ctx, base);
loc_828CB720:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB738"))) PPC_WEAK_FUNC(sub_828CB738);
PPC_FUNC_IMPL(__imp__sub_828CB738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x828CB750;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cb780
	if (ctx.cr0.eq) goto loc_828CB780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CB760;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14440
	ctx.r11.s64 = ctx.r11.s64 + -14440;
	// addi r10,r10,-14352
	ctx.r10.s64 = ctx.r10.s64 + -14352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x828cb784
	goto loc_828CB784;
loc_828CB780:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB798"))) PPC_WEAK_FUNC(sub_828CB798);
PPC_FUNC_IMPL(__imp__sub_828CB798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26544);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb7d8
	if (!ctx.cr0.eq) goto loc_828CB7D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26544, ctx.r11.u32);
	// addi r3,r9,-15092
	ctx.r3.s64 = ctx.r9.s64 + -15092;
	// bl 0x82816528
	ctx.lr = 0x828CB7D0;
	sub_82816528(ctx, base);
	// stw r3,-26548(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26548, ctx.r3.u32);
	// b 0x828cb7dc
	goto loc_828CB7DC;
loc_828CB7D8:
	// lwz r3,-26548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26548);
loc_828CB7DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB7F0"))) PPC_WEAK_FUNC(sub_828CB7F0);
PPC_FUNC_IMPL(__imp__sub_828CB7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cb840
	ctx.lr = 0x828CB810;
	sub_828CB840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB824;
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

__attribute__((alias("__imp__sub_828CB840"))) PPC_WEAK_FUNC(sub_828CB840);
PPC_FUNC_IMPL(__imp__sub_828CB840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17984
	ctx.r31.s64 = ctx.r11.s64 + 17984;
	// lwz r11,17980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb888
	if (!ctx.cr0.eq) goto loc_828CB888;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14300
	ctx.r9.s64 = ctx.r9.s64 + -14300;
	// stw r11,17980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17980, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14504
	ctx.r3.s64 = ctx.r11.s64 + -14504;
	// bl 0x82a4c758
	ctx.lr = 0x828CB888;
	sub_82A4C758(ctx, base);
loc_828CB888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB8A0"))) PPC_WEAK_FUNC(sub_828CB8A0);
PPC_FUNC_IMPL(__imp__sub_828CB8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x828CB8B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cb8e8
	if (ctx.cr0.eq) goto loc_828CB8E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CB8C8;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-14280
	ctx.r11.s64 = ctx.r11.s64 + -14280;
	// addi r10,r10,-14192
	ctx.r10.s64 = ctx.r10.s64 + -14192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x828cb8ec
	goto loc_828CB8EC;
loc_828CB8E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CB8EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB900"))) PPC_WEAK_FUNC(sub_828CB900);
PPC_FUNC_IMPL(__imp__sub_828CB900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb940
	if (!ctx.cr0.eq) goto loc_828CB940;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26552, ctx.r11.u32);
	// addi r3,r9,-15068
	ctx.r3.s64 = ctx.r9.s64 + -15068;
	// bl 0x82816528
	ctx.lr = 0x828CB938;
	sub_82816528(ctx, base);
	// stw r3,-26556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26556, ctx.r3.u32);
	// b 0x828cb944
	goto loc_828CB944;
loc_828CB940:
	// lwz r3,-26556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26556);
loc_828CB944:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CB958"))) PPC_WEAK_FUNC(sub_828CB958);
PPC_FUNC_IMPL(__imp__sub_828CB958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cb9a8
	ctx.lr = 0x828CB978;
	sub_828CB9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CB98C;
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

__attribute__((alias("__imp__sub_828CB9A8"))) PPC_WEAK_FUNC(sub_828CB9A8);
PPC_FUNC_IMPL(__imp__sub_828CB9A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17992
	ctx.r31.s64 = ctx.r11.s64 + 17992;
	// lwz r11,17988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cb9f0
	if (!ctx.cr0.eq) goto loc_828CB9F0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-14140
	ctx.r9.s64 = ctx.r9.s64 + -14140;
	// stw r11,17988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17988, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// bl 0x82a4c758
	ctx.lr = 0x828CB9F0;
	sub_82A4C758(ctx, base);
loc_828CB9F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBA08"))) PPC_WEAK_FUNC(sub_828CBA08);
PPC_FUNC_IMPL(__imp__sub_828CBA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CBA10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x828cbacc
	if (ctx.cr6.eq) goto loc_828CBACC;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ble cr6,0x828cbaac
	if (!ctx.cr6.gt) goto loc_828CBAAC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828cba54
	if (ctx.cr6.eq) goto loc_828CBA54;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828CBA54;
	sub_82332C38(ctx, base);
loc_828CBA54:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828cbacc
	if (!ctx.cr6.gt) goto loc_828CBACC;
loc_828CBA64:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828CBA78;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828cba94
	if (ctx.cr0.eq) goto loc_828CBA94;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_828CBA94:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828cba64
	if (ctx.cr6.lt) goto loc_828CBA64;
	// b 0x828cbacc
	goto loc_828CBACC;
loc_828CBAAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cbacc
	if (ctx.cr6.eq) goto loc_828CBACC;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828CBACC;
	sub_82332C38(ctx, base);
loc_828CBACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBAD8"))) PPC_WEAK_FUNC(sub_828CBAD8);
PPC_FUNC_IMPL(__imp__sub_828CBAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x828CBAF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cbb40
	if (ctx.cr0.eq) goto loc_828CBB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CBB00;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r9,r11,-14120
	ctx.r9.s64 = ctx.r11.s64 + -14120;
	// addi r10,r10,-14032
	ctx.r10.s64 = ctx.r10.s64 + -14032;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x828cbb44
	goto loc_828CBB44;
loc_828CBB40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CBB44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBB58"))) PPC_WEAK_FUNC(sub_828CBB58);
PPC_FUNC_IMPL(__imp__sub_828CBB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26560);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cbb98
	if (!ctx.cr0.eq) goto loc_828CBB98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26560, ctx.r11.u32);
	// addi r3,r9,-15040
	ctx.r3.s64 = ctx.r9.s64 + -15040;
	// bl 0x82816528
	ctx.lr = 0x828CBB90;
	sub_82816528(ctx, base);
	// stw r3,-26564(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26564, ctx.r3.u32);
	// b 0x828cbb9c
	goto loc_828CBB9C;
loc_828CBB98:
	// lwz r3,-26564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26564);
loc_828CBB9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBBB0"))) PPC_WEAK_FUNC(sub_828CBBB0);
PPC_FUNC_IMPL(__imp__sub_828CBBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cbc00
	ctx.lr = 0x828CBBD0;
	sub_828CBC00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CBBE4;
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

__attribute__((alias("__imp__sub_828CBC00"))) PPC_WEAK_FUNC(sub_828CBC00);
PPC_FUNC_IMPL(__imp__sub_828CBC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18000
	ctx.r31.s64 = ctx.r11.s64 + 18000;
	// lwz r11,17996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cbc48
	if (!ctx.cr0.eq) goto loc_828CBC48;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13980
	ctx.r9.s64 = ctx.r9.s64 + -13980;
	// stw r11,17996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17996, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// bl 0x82a4c758
	ctx.lr = 0x828CBC48;
	sub_82A4C758(ctx, base);
loc_828CBC48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBC60"))) PPC_WEAK_FUNC(sub_828CBC60);
PPC_FUNC_IMPL(__imp__sub_828CBC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x828CBC78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cbce0
	if (ctx.cr0.eq) goto loc_828CBCE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c7cd8
	ctx.lr = 0x828CBC88;
	sub_828C7CD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r9,r11,-13960
	ctx.r9.s64 = ctx.r11.s64 + -13960;
	// addi r8,r10,-13872
	ctx.r8.s64 = ctx.r10.s64 + -13872;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x828cbce4
	goto loc_828CBCE4;
loc_828CBCE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CBCE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBCF8"))) PPC_WEAK_FUNC(sub_828CBCF8);
PPC_FUNC_IMPL(__imp__sub_828CBCF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26568(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26568);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cbd38
	if (!ctx.cr0.eq) goto loc_828CBD38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26568(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26568, ctx.r11.u32);
	// addi r3,r9,-15012
	ctx.r3.s64 = ctx.r9.s64 + -15012;
	// bl 0x82816528
	ctx.lr = 0x828CBD30;
	sub_82816528(ctx, base);
	// stw r3,-26572(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26572, ctx.r3.u32);
	// b 0x828cbd3c
	goto loc_828CBD3C;
loc_828CBD38:
	// lwz r3,-26572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26572);
loc_828CBD3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBD50"))) PPC_WEAK_FUNC(sub_828CBD50);
PPC_FUNC_IMPL(__imp__sub_828CBD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cbda0
	ctx.lr = 0x828CBD70;
	sub_828CBDA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CBD84;
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

__attribute__((alias("__imp__sub_828CBDA0"))) PPC_WEAK_FUNC(sub_828CBDA0);
PPC_FUNC_IMPL(__imp__sub_828CBDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18008
	ctx.r31.s64 = ctx.r11.s64 + 18008;
	// lwz r11,18004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cbde8
	if (!ctx.cr0.eq) goto loc_828CBDE8;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13820
	ctx.r9.s64 = ctx.r9.s64 + -13820;
	// stw r11,18004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18004, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14576
	ctx.r3.s64 = ctx.r11.s64 + -14576;
	// bl 0x82a4c758
	ctx.lr = 0x828CBDE8;
	sub_82A4C758(ctx, base);
loc_828CBDE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CBE00"))) PPC_WEAK_FUNC(sub_828CBE00);
PPC_FUNC_IMPL(__imp__sub_828CBE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CBE08;
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
	ctx.lr = 0x828CBE2C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828cbec4
	if (!ctx.cr0.eq) goto loc_828CBEC4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x828cbe4c
	if (!ctx.cr6.eq) goto loc_828CBE4C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_828CBE4C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828cb840
	ctx.lr = 0x828CBE54;
	sub_828CB840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CBE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x828CBE74;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x828cbeb0
	if (ctx.cr0.eq) goto loc_828CBEB0;
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
	// b 0x828cbeb4
	goto loc_828CBEB4;
loc_828CBEB0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_828CBEB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x828CBEC0;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828CBEC4:
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
	ctx.lr = 0x828CBEE0;
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

__attribute__((alias("__imp__sub_828CBEF0"))) PPC_WEAK_FUNC(sub_828CBEF0);
PPC_FUNC_IMPL(__imp__sub_828CBEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c8a18
	sub_828C8A18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBEF8"))) PPC_WEAK_FUNC(sub_828CBEF8);
PPC_FUNC_IMPL(__imp__sub_828CBEF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c7f40
	sub_828C7F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF00"))) PPC_WEAK_FUNC(sub_828CBF00);
PPC_FUNC_IMPL(__imp__sub_828CBF00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c89c8
	sub_828C89C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF08"))) PPC_WEAK_FUNC(sub_828CBF08);
PPC_FUNC_IMPL(__imp__sub_828CBF08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c8808
	sub_828C8808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF10"))) PPC_WEAK_FUNC(sub_828CBF10);
PPC_FUNC_IMPL(__imp__sub_828CBF10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c8200
	sub_828C8200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF18"))) PPC_WEAK_FUNC(sub_828CBF18);
PPC_FUNC_IMPL(__imp__sub_828CBF18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c8858
	sub_828C8858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF20"))) PPC_WEAK_FUNC(sub_828CBF20);
PPC_FUNC_IMPL(__imp__sub_828CBF20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c7dd8
	sub_828C7DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF28"))) PPC_WEAK_FUNC(sub_828CBF28);
PPC_FUNC_IMPL(__imp__sub_828CBF28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c7c78
	sub_828C7C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF30"))) PPC_WEAK_FUNC(sub_828CBF30);
PPC_FUNC_IMPL(__imp__sub_828CBF30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c83e8
	sub_828C83E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF38"))) PPC_WEAK_FUNC(sub_828CBF38);
PPC_FUNC_IMPL(__imp__sub_828CBF38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828c85d0
	sub_828C85D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CBF40"))) PPC_WEAK_FUNC(sub_828CBF40);
PPC_FUNC_IMPL(__imp__sub_828CBF40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828cbf8c
	if (!ctx.cr6.gt) goto loc_828CBF8C;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2008(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2008);
loc_828CBF70:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cbf90
	if (ctx.cr6.eq) goto loc_828CBF90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828cbf70
	if (ctx.cr6.lt) goto loc_828CBF70;
loc_828CBF8C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CBF90:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828cbfe0
	if (!ctx.cr6.eq) goto loc_828CBFE0;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cbfd0
	if (!ctx.cr6.gt) goto loc_828CBFD0;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2012(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2012);
loc_828CBFB4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cbfd4
	if (ctx.cr6.eq) goto loc_828CBFD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cbfb4
	if (ctx.cr6.lt) goto loc_828CBFB4;
loc_828CBFD0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CBFD4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x828cbfe4
	if (ctx.cr6.eq) goto loc_828CBFE4;
loc_828CBFE0:
	// li r6,1
	ctx.r6.s64 = 1;
loc_828CBFE4:
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc01c
	if (!ctx.cr6.gt) goto loc_828CC01C;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2000(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2000);
loc_828CC000:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cc020
	if (ctx.cr6.eq) goto loc_828CC020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc000
	if (ctx.cr6.lt) goto loc_828CC000;
loc_828CC01C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CC020:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828cc070
	if (!ctx.cr6.eq) goto loc_828CC070;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc060
	if (!ctx.cr6.gt) goto loc_828CC060;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2004(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2004);
loc_828CC044:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cc064
	if (ctx.cr6.eq) goto loc_828CC064;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc044
	if (ctx.cr6.lt) goto loc_828CC044;
loc_828CC060:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CC064:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x828cc074
	if (ctx.cr6.eq) goto loc_828CC074;
loc_828CC070:
	// li r7,1
	ctx.r7.s64 = 1;
loc_828CC074:
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc0ac
	if (!ctx.cr6.gt) goto loc_828CC0AC;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2016(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2016);
loc_828CC090:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cc0b0
	if (ctx.cr6.eq) goto loc_828CC0B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc090
	if (ctx.cr6.lt) goto loc_828CC090;
loc_828CC0AC:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CC0B0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828cc100
	if (!ctx.cr6.eq) goto loc_828CC100;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc0f0
	if (!ctx.cr6.gt) goto loc_828CC0F0;
	// lis r8,-31946
	ctx.r8.s64 = -2093613056;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r8,2020(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2020);
loc_828CC0D4:
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x828cc0f4
	if (ctx.cr6.eq) goto loc_828CC0F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc0d4
	if (ctx.cr6.lt) goto loc_828CC0D4;
loc_828CC0F0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CC0F4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq cr6,0x828cc104
	if (ctx.cr6.eq) goto loc_828CC104;
loc_828CC100:
	// li r8,1
	ctx.r8.s64 = 1;
loc_828CC104:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x828cc170
	if (ctx.cr0.lt) goto loc_828CC170;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 * 40;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_828CC11C:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x828cc164
	if (!ctx.cr6.eq) goto loc_828CC164;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828cc13c
	if (ctx.cr6.eq) goto loc_828CC13C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x828cc164
	if (ctx.cr6.eq) goto loc_828CC164;
loc_828CC13C:
	// lwz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828cc150
	if (ctx.cr6.eq) goto loc_828CC150;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x828cc164
	if (ctx.cr6.eq) goto loc_828CC164;
loc_828CC150:
	// lwz r4,36(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828cc198
	if (ctx.cr6.eq) goto loc_828CC198;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x828cc198
	if (!ctx.cr6.eq) goto loc_828CC198;
loc_828CC164:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-40
	ctx.r10.s64 = ctx.r10.s64 + -40;
	// bge 0x828cc11c
	if (!ctx.cr0.lt) goto loc_828CC11C;
loc_828CC170:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
	// bl 0x82414568
	ctx.lr = 0x828CC180;
	sub_82414568(ctx, base);
loc_828CC180:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_828CC198:
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x823339b8
	ctx.lr = 0x828CC1AC;
	sub_823339B8(ctx, base);
	// b 0x828cc180
	goto loc_828CC180;
}

__attribute__((alias("__imp__sub_828CC1B0"))) PPC_WEAK_FUNC(sub_828CC1B0);
PPC_FUNC_IMPL(__imp__sub_828CC1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CC1B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,1196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1196, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1196
	ctx.r3.s64 = ctx.r1.s64 + 1196;
	// bl 0x828ff7b8
	ctx.lr = 0x828CC1D8;
	sub_828FF7B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc2f0
	if (ctx.cr0.eq) goto loc_828CC2F0;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r28,r11,-13800
	ctx.r28.s64 = ctx.r11.s64 + -13800;
loc_828CC1E8:
	// lbz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828cc238
	if (ctx.cr0.eq) goto loc_828CC238;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828cc21c
	if (!ctx.cr6.eq) goto loc_828CC21C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82831f38
	ctx.lr = 0x828CC210;
	sub_82831F38(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cc238
	if (!ctx.cr0.eq) goto loc_828CC238;
loc_828CC21C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828cc2d4
	goto loc_828CC2D4;
loc_828CC238:
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// bl 0x829c35d8
	ctx.lr = 0x828CC240;
	sub_829C35D8(ctx, base);
	// bl 0x8251a260
	ctx.lr = 0x828CC244;
	sub_8251A260(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cc2d4
	if (!ctx.cr0.eq) goto loc_828CC2D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828cc29c
	if (ctx.cr6.eq) goto loc_828CC29C;
	// lwz r11,1904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828cc29c
	if (ctx.cr6.eq) goto loc_828CC29C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cc2d4
	if (!ctx.cr0.eq) goto loc_828CC2D4;
loc_828CC29C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC2B0;
	sub_828FF8D0(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828165a8
	ctx.lr = 0x828CC2BC;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CC2D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,1196
	ctx.r3.s64 = ctx.r1.s64 + 1196;
	// bl 0x828ff7b8
	ctx.lr = 0x828CC2E8;
	sub_828FF7B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cc1e8
	if (!ctx.cr0.eq) goto loc_828CC1E8;
loc_828CC2F0:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CC2F8"))) PPC_WEAK_FUNC(sub_828CC2F8);
PPC_FUNC_IMPL(__imp__sub_828CC2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CC300;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x828CC308;
	__savefpr_27(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r4.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// addi r4,r11,-13780
	ctx.r4.s64 = ctx.r11.s64 + -13780;
	// bl 0x82831f38
	ctx.lr = 0x828CC324;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// beq 0x828cc3a0
	if (ctx.cr0.eq) goto loc_828CC3A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC340;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828cc37c
	if (!ctx.cr0.eq) goto loc_828CC37C;
loc_828CC374:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x828cc394
	goto loc_828CC394;
loc_828CC37C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x828cc398
	if (!ctx.cr6.eq) goto loc_828CC398;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828CC394:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
loc_828CC398:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cc770
	goto loc_828CC770;
loc_828CC3A0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13764
	ctx.r4.s64 = ctx.r11.s64 + -13764;
	// bl 0x82831f38
	ctx.lr = 0x828CC3AC;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// beq 0x828cc400
	if (ctx.cr0.eq) goto loc_828CC400;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC3C8;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828cc398
	if (!ctx.cr0.eq) goto loc_828CC398;
	// b 0x828cc374
	goto loc_828CC374;
loc_828CC400:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13752
	ctx.r4.s64 = ctx.r11.s64 + -13752;
	// bl 0x82831f38
	ctx.lr = 0x828CC40C;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// beq 0x828cc468
	if (ctx.cr0.eq) goto loc_828CC468;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC428;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828cc398
	if (!ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// xori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 ^ 128;
	// b 0x828cc394
	goto loc_828CC394;
loc_828CC468:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13736
	ctx.r4.s64 = ctx.r11.s64 + -13736;
	// bl 0x82831f38
	ctx.lr = 0x828CC474;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// beq 0x828cc62c
	if (ctx.cr0.eq) goto loc_828CC62C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC490;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x828cc398
	if (!ctx.cr6.eq) goto loc_828CC398;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r29,732(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r31,r11,-13724
	ctx.r31.s64 = ctx.r11.s64 + -13724;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f29,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// bl 0x82816a90
	ctx.lr = 0x828CC500;
	sub_82816A90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828cc520
	if (ctx.cr0.eq) goto loc_828CC520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828CC510;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4cb98
	ctx.lr = 0x828CC51C;
	sub_82A4CB98(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
loc_828CC520:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-13708
	ctx.r4.s64 = ctx.r11.s64 + -13708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828ff768
	ctx.lr = 0x828CC534;
	sub_828FF768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-13692
	ctx.r31.s64 = ctx.r11.s64 + -13692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82816a90
	ctx.lr = 0x828CC548;
	sub_82816A90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828cc568
	if (ctx.cr0.eq) goto loc_828CC568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828CC558;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4cb98
	ctx.lr = 0x828CC564;
	sub_82A4CB98(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
loc_828CC568:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-13672
	ctx.r31.s64 = ctx.r11.s64 + -13672;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82816a90
	ctx.lr = 0x828CC57C;
	sub_82816A90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828cc59c
	if (ctx.cr0.eq) goto loc_828CC59C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x828CC58C;
	sub_82A4CBE0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4cb98
	ctx.lr = 0x828CC598;
	sub_82A4CB98(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
loc_828CC59C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x828cc5ec
	if (!ctx.cr6.gt) goto loc_828CC5EC;
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bge cr6,0x828cc5ec
	if (!ctx.cr6.lt) goto loc_828CC5EC;
	// lfs f0,60(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f30
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x828cc5d0
	if (!ctx.cr6.gt) goto loc_828CC5D0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f12,f31,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x828cc5e8
	goto loc_828CC5E8;
loc_828CC5D0:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f12,f31,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_828CC5E8:
	// stfs f0,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 60, temp.u32);
loc_828CC5EC:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x828cc600
	if (ctx.cr6.eq) goto loc_828CC600;
	// lfs f0,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_828CC600:
	// lwa r11,80(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lfs f0,60(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f13.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x828cc398
	goto loc_828CC398;
loc_828CC62C:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13644
	ctx.r4.s64 = ctx.r11.s64 + -13644;
	// bl 0x82831f38
	ctx.lr = 0x828CC638;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// beq 0x828cc688
	if (ctx.cr0.eq) goto loc_828CC688;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC654;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x828cc394
	goto loc_828CC394;
loc_828CC688:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13632
	ctx.r4.s64 = ctx.r11.s64 + -13632;
	// bl 0x82831f38
	ctx.lr = 0x828CC694;
	sub_82831F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc700
	if (ctx.cr0.eq) goto loc_828CC700;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC6B0;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc700
	if (ctx.cr0.eq) goto loc_828CC700;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828165a8
	ctx.lr = 0x828CC6C0;
	sub_828165A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc398
	if (ctx.cr0.eq) goto loc_828CC398;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828cc398
	if (!ctx.cr6.gt) goto loc_828CC398;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
loc_828CC6DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828cc398
	if (ctx.cr6.eq) goto loc_828CC398;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828cc6dc
	if (ctx.cr6.lt) goto loc_828CC6DC;
	// b 0x828cc398
	goto loc_828CC398;
loc_828CC700:
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r11,18012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 18012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828cc76c
	if (!ctx.cr6.eq) goto loc_828CC76C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,732
	ctx.r3.s64 = ctx.r1.s64 + 732;
	// bl 0x828ff8d0
	ctx.lr = 0x828CC724;
	sub_828FF8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cc76c
	if (ctx.cr0.eq) goto loc_828CC76C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828165a8
	ctx.lr = 0x828CC734;
	sub_828165A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cc76c
	if (ctx.cr0.eq) goto loc_828CC76C;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x828cc76c
	if (ctx.cr0.lt) goto loc_828CC76C;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mulli r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 * 40;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_828CC754:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828cc780
	if (ctx.cr6.eq) goto loc_828CC780;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-40
	ctx.r9.s64 = ctx.r9.s64 + -40;
	// bge 0x828cc754
	if (!ctx.cr0.lt) goto loc_828CC754;
loc_828CC76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CC770:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x828CC77C;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_828CC780:
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,18012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18012, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828cc7a4
	if (ctx.cr6.eq) goto loc_828CC7A4;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828cc7ac
	goto loc_828CC7AC;
loc_828CC7A4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828CC7AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828cc1b0
	ctx.lr = 0x828CC7B4;
	sub_828CC1B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,18012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 18012, ctx.r11.u32);
	// b 0x828cc770
	goto loc_828CC770;
}

__attribute__((alias("__imp__sub_828CC7C8"))) PPC_WEAK_FUNC(sub_828CC7C8);
PPC_FUNC_IMPL(__imp__sub_828CC7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CC7D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x828cc808
	if (ctx.cr6.lt) goto loc_828CC808;
	// bne cr6,0x828cc88c
	if (!ctx.cr6.eq) goto loc_828CC88C;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824b99b0
	ctx.lr = 0x828CC7FC;
	sub_824B99B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cc88c
	if (!ctx.cr0.eq) goto loc_828CC88C;
	// b 0x828cc848
	goto loc_828CC848;
loc_828CC808:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc83c
	if (!ctx.cr6.gt) goto loc_828CC83C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_828CC820:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828cc840
	if (ctx.cr6.eq) goto loc_828CC840;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc820
	if (ctx.cr6.lt) goto loc_828CC820;
loc_828CC83C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_828CC840:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828cc854
	if (ctx.cr6.eq) goto loc_828CC854;
loc_828CC848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CC84C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_828CC854:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828cc884
	if (!ctx.cr6.gt) goto loc_828CC884;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_828CC868:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828cc88c
	if (ctx.cr6.eq) goto loc_828CC88C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cc868
	if (ctx.cr6.lt) goto loc_828CC868;
loc_828CC884:
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82410060
	ctx.lr = 0x828CC88C;
	sub_82410060(ctx, base);
loc_828CC88C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x828cbf40
	ctx.lr = 0x828CC8B0;
	sub_828CBF40(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x828cc8c4
	if (!ctx.cr6.eq) goto loc_828CC8C4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828CC8C4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cc900
	if (ctx.cr6.eq) goto loc_828CC900;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828cc8dc
	if (ctx.cr6.eq) goto loc_828CC8DC;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828cc8e4
	goto loc_828CC8E4;
loc_828CC8DC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828CC8E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc1b0
	ctx.lr = 0x828CC8EC;
	sub_828CC1B0(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
loc_828CC8F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828CC8F8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828cc84c
	goto loc_828CC84C;
loc_828CC900:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x828cc8f0
	goto loc_828CC8F0;
}

__attribute__((alias("__imp__sub_828CC908"))) PPC_WEAK_FUNC(sub_828CC908);
PPC_FUNC_IMPL(__imp__sub_828CC908) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,1
	ctx.r30.s64 = 1;
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// stfs f2,64(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x828cbf40
	ctx.lr = 0x828CC940;
	sub_828CBF40(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x828cc954
	if (!ctx.cr6.eq) goto loc_828CC954;
	// li r11,0
	ctx.r11.s64 = 0;
loc_828CC954:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828cc980
	if (ctx.cr6.eq) goto loc_828CC980;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828cc96c
	if (ctx.cr6.eq) goto loc_828CC96C;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x828cc974
	goto loc_828CC974;
loc_828CC96C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_828CC974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc1b0
	ctx.lr = 0x828CC97C;
	sub_828CC1B0(ctx, base);
	// b 0x828cc984
	goto loc_828CC984;
loc_828CC980:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828CC984:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828CC98C;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_828CC9A8"))) PPC_WEAK_FUNC(sub_828CC9A8);
PPC_FUNC_IMPL(__imp__sub_828CC9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CC9B0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x828cca30
	if (ctx.cr6.eq) goto loc_828CCA30;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828cca8c
	if (!ctx.cr6.gt) goto loc_828CCA8C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_828CC9F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828cc9f0
	if (ctx.cr6.lt) goto loc_828CC9F0;
	// b 0x828cca8c
	goto loc_828CCA8C;
loc_828CCA30:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828cca50
	if (!ctx.cr6.eq) goto loc_828CCA50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCA50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CCA50:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828cca8c
	if (!ctx.cr6.gt) goto loc_828CCA8C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_828CCA6C:
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828cca6c
	if (ctx.cr6.lt) goto loc_828CCA6C;
loc_828CCA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCAA0"))) PPC_WEAK_FUNC(sub_828CCAA0);
PPC_FUNC_IMPL(__imp__sub_828CCAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828ccadc
	if (ctx.cr6.eq) goto loc_828CCADC;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x828CCADC;
	sub_82332C38(ctx, base);
loc_828CCADC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCB04;
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

__attribute__((alias("__imp__sub_828CCB18"))) PPC_WEAK_FUNC(sub_828CCB18);
PPC_FUNC_IMPL(__imp__sub_828CCB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CCB20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bc368
	ctx.lr = 0x828CCB2C;
	sub_829BC368(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r9,r11,-27324
	ctx.r9.s64 = ctx.r11.s64 + -27324;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,-27324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27324);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-12792
	ctx.r11.s64 = ctx.r10.s64 + -12792;
	// addi r10,r8,-12516
	ctx.r10.s64 = ctx.r8.s64 + -12516;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// lfs f0,17956(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17956);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// lfs f13,18412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 18412);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f13,472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// std r11,460(r31)
	PPC_STORE_U64(ctx.r31.u32 + 460, ctx.r11.u64);
	// bl 0x82333900
	ctx.lr = 0x828CCBCC;
	sub_82333900(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x828ccbec
	if (ctx.cr0.eq) goto loc_828CCBEC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x828CCBE8;
	sub_8312E7DC(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828CCBEC:
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCC00"))) PPC_WEAK_FUNC(sub_828CCC00);
PPC_FUNC_IMPL(__imp__sub_828CCC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-12792
	ctx.r11.s64 = ctx.r11.s64 + -12792;
	// addi r10,r10,-12516
	ctx.r10.s64 = ctx.r10.s64 + -12516;
	// lwz r3,504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x828ccc4c
	if (ctx.cr6.eq) goto loc_828CCC4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCC4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CCC4C:
	// addi r3,r31,520
	ctx.r3.s64 = ctx.r31.s64 + 520;
	// bl 0x82400f38
	ctx.lr = 0x828CCC54;
	sub_82400F38(ctx, base);
	// addi r3,r31,476
	ctx.r3.s64 = ctx.r31.s64 + 476;
	// bl 0x8239d768
	ctx.lr = 0x828CCC5C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bcf90
	ctx.lr = 0x828CCC64;
	sub_829BCF90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CCC78"))) PPC_WEAK_FUNC(sub_828CCC78);
PPC_FUNC_IMPL(__imp__sub_828CCC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CCC80;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lfs f0,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// lwz r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r8,412(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// lwz r7,416(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// lwz r6,420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// lwz r5,424(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r4,428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// lwz r30,432(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r10,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r10.u32);
	// stw r9,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r9.u32);
	// stw r8,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r8.u32);
	// stw r7,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r7.u32);
	// stw r6,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r6.u32);
	// stw r5,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r5.u32);
	// stw r4,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r4.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x828CCCE0;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x828ccd50
	if (ctx.cr0.eq) goto loc_828CCD50;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a4ea80
	ctx.lr = 0x828CCD08;
	sub_82A4EA80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82833180
	ctx.lr = 0x828CCD10;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// addi r11,r11,-13240
	ctx.r11.s64 = ctx.r11.s64 + -13240;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828CCD48;
	sub_82A4EA80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x828ccd54
	goto loc_828CCD54;
loc_828CCD50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CCD54:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828CCD60;
	sub_82833A30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCD68"))) PPC_WEAK_FUNC(sub_828CCD68);
PPC_FUNC_IMPL(__imp__sub_828CCD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828CCD70;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1208
	ctx.r3.s64 = 1208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82833108
	ctx.lr = 0x828CCD88;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828ccd9c
	if (ctx.cr0.eq) goto loc_828CCD9C;
	// bl 0x82951e28
	ctx.lr = 0x828CCD94;
	sub_82951E28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828ccda0
	goto loc_828CCDA0;
loc_828CCD9C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CCDA0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r4,13060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13060, ctx.r4.u32);
	// bl 0x828cd348
	ctx.lr = 0x828CCDB4;
	sub_828CD348(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828ccde8
	if (!ctx.cr6.eq) goto loc_828CCDE8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13544
	ctx.r4.s64 = ctx.r11.s64 + -13544;
loc_828CCDC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82414568
	ctx.lr = 0x828CCDCC;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x828CCDD8;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828CCDE0;
	sub_82333960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828cceac
	goto loc_828CCEAC;
loc_828CCDE8:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828CCDF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cce18
	if (ctx.cr0.eq) goto loc_828CCE18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828CCE00;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,29680
	ctx.r11.s64 = ctx.r11.s64 + 29680;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828cce1c
	goto loc_828CCE1C;
loc_828CCE18:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828CCE1C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828cd348
	ctx.lr = 0x828CCE28;
	sub_828CD348(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x828cce3c
	if (!ctx.cr6.eq) goto loc_828CCE3C;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r11,-13432
	ctx.r4.s64 = ctx.r11.s64 + -13432;
	// b 0x828ccdc4
	goto loc_828CCDC4;
loc_828CCE3C:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r29,548(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// bl 0x82833108
	ctx.lr = 0x828CCE50;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828cce70
	if (ctx.cr0.eq) goto loc_828CCE70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82833180
	ctx.lr = 0x828CCE60;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r11,r11,9592
	ctx.r11.s64 = ctx.r11.s64 + 9592;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x828cce74
	goto loc_828CCE74;
loc_828CCE70:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828CCE74:
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r31,13024(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82332d50
	ctx.lr = 0x828CCE94;
	sub_82332D50(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828ccea8
	if (ctx.cr0.eq) goto loc_828CCEA8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_828CCEA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828CCEAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CCEB8"))) PPC_WEAK_FUNC(sub_828CCEB8);
PPC_FUNC_IMPL(__imp__sub_828CCEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828CCEC0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,-17772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17772);
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828ccf14
	if (!ctx.cr0.eq) goto loc_828CCF14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-17772(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17772, ctx.r11.u32);
	// addi r3,r9,-14980
	ctx.r3.s64 = ctx.r9.s64 + -14980;
	// bl 0x828165a8
	ctx.lr = 0x828CCF0C;
	sub_828165A8(ctx, base);
	// stw r3,-17776(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17776, ctx.r3.u32);
	// b 0x828ccf18
	goto loc_828CCF18;
loc_828CCF14:
	// lwz r3,-17776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17776);
loc_828CCF18:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// subf r11,r27,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r27.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCF44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cd004
	if (ctx.cr0.eq) goto loc_828CD004;
	// lwz r10,13024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,928(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828ccf74
	if (!ctx.cr6.eq) goto loc_828CCF74;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,924(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828ccf78
	if (!ctx.cr6.gt) goto loc_828CCF78;
loc_828CCF74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828CCF78:
	// lwz r10,492(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828cd004
	if (!ctx.cr6.gt) goto loc_828CD004;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_828CCF98:
	// lwz r11,488(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 488);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828ccff0
	if (ctx.cr6.eq) goto loc_828CCFF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bne cr6,0x828ccfe0
	if (!ctx.cr6.eq) goto loc_828CCFE0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCFD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828ccff0
	if (ctx.cr0.eq) goto loc_828CCFF0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x828ccff0
	goto loc_828CCFF0;
loc_828CCFE0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CCFF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CCFF0:
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828ccf98
	if (ctx.cr6.lt) goto loc_828CCF98;
loc_828CD004:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD018"))) PPC_WEAK_FUNC(sub_828CD018);
PPC_FUNC_IMPL(__imp__sub_828CD018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828CD020;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cd11c
	if (ctx.cr0.eq) goto loc_828CD11C;
	// lwz r10,13024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,928(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 928);
	// lfs f30,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x828cd098
	if (!ctx.cr6.eq) goto loc_828CD098;
	// lfs f0,924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 924);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x828cd09c
	if (!ctx.cr6.gt) goto loc_828CD09C;
loc_828CD098:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828CD09C:
	// lwz r10,492(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828cd11c
	if (!ctx.cr6.gt) goto loc_828CD11C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828CD0B4:
	// lwz r11,488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 488);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828cd108
	if (ctx.cr6.eq) goto loc_828CD108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bne cr6,0x828cd0fc
	if (!ctx.cr6.eq) goto loc_828CD0FC;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cd108
	if (ctx.cr0.eq) goto loc_828CD108;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x828cd108
	goto loc_828CD108;
loc_828CD0FC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CD108:
	// lwz r11,492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828cd0b4
	if (ctx.cr6.lt) goto loc_828CD0B4;
loc_828CD11C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_828CD138"))) PPC_WEAK_FUNC(sub_828CD138);
PPC_FUNC_IMPL(__imp__sub_828CD138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CD140;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82817208
	ctx.lr = 0x828CD178;
	sub_82817208(ctx, base);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828cd1dc
	if (!ctx.cr6.gt) goto loc_828CD1DC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_828CD18C:
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828cd1c0
	if (ctx.cr6.eq) goto loc_828CD1C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828cd1d8
	if (!ctx.cr0.eq) goto loc_828CD1D8;
loc_828CD1C0:
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828cd18c
	if (ctx.cr6.lt) goto loc_828CD18C;
	// b 0x828cd1dc
	goto loc_828CD1DC;
loc_828CD1D8:
	// li r31,1
	ctx.r31.s64 = 1;
loc_828CD1DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828CD1E4;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD1F0"))) PPC_WEAK_FUNC(sub_828CD1F0);
PPC_FUNC_IMPL(__imp__sub_828CD1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CD1F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x828cd26c
	if (ctx.cr6.eq) goto loc_828CD26C;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828cd26c
	if (!ctx.cr6.gt) goto loc_828CD26C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828CD228:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x827d9bf0
	ctx.lr = 0x828CD234;
	sub_827D9BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cd254
	if (ctx.cr0.eq) goto loc_828CD254;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x828cd254
	if (!ctx.cr6.eq) goto loc_828CD254;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x828cd278
	if (ctx.cr6.eq) goto loc_828CD278;
loc_828CD254:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828cd228
	if (ctx.cr6.lt) goto loc_828CD228;
loc_828CD26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CD270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_828CD278:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828CD288;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x828CD28C;
	sub_82411B98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cd26c
	if (ctx.cr0.eq) goto loc_828CD26C;
	// lwz r3,1676(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1676);
	// b 0x828cd270
	goto loc_828CD270;
}

__attribute__((alias("__imp__sub_828CD2A0"))) PPC_WEAK_FUNC(sub_828CD2A0);
PPC_FUNC_IMPL(__imp__sub_828CD2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828CD2A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// lwz r9,452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r10,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// ble cr6,0x828cd32c
	if (!ctx.cr6.gt) goto loc_828CD32C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828CD2DC:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwzx r30,r11,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD2F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828cd314
	if (ctx.cr0.eq) goto loc_828CD314;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x828cd338
	if (ctx.cr6.eq) goto loc_828CD338;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828cd338
	if (!ctx.cr6.eq) goto loc_828CD338;
loc_828CD314:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828cd2dc
	if (ctx.cr6.lt) goto loc_828CD2DC;
loc_828CD32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CD330:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_828CD338:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828cd330
	goto loc_828CD330;
}

__attribute__((alias("__imp__sub_828CD340"))) PPC_WEAK_FUNC(sub_828CD340);
PPC_FUNC_IMPL(__imp__sub_828CD340) {
	PPC_FUNC_PROLOGUE();
	// stw r4,500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 500, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD348"))) PPC_WEAK_FUNC(sub_828CD348);
PPC_FUNC_IMPL(__imp__sub_828CD348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CD350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828cd3c4
	if (ctx.cr6.eq) goto loc_828CD3C4;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x828cd374
	if (!ctx.cr6.eq) goto loc_828CD374;
	// lwz r5,492(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
loc_828CD374:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x828cd3c4
	if (ctx.cr6.lt) goto loc_828CD3C4;
	// lwz r31,492(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x828cd38c
	if (!ctx.cr6.lt) goto loc_828CD38C;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_828CD38C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,476
	ctx.r3.s64 = ctx.r30.s64 + 476;
	// bl 0x823327e0
	ctx.lr = 0x828CD3A4;
	sub_823327E0(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828CD3C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD3D0"))) PPC_WEAK_FUNC(sub_828CD3D0);
PPC_FUNC_IMPL(__imp__sub_828CD3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828CD3D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x828cd464
	if (!ctx.cr6.gt) goto loc_828CD464;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828CD3F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x828cd450
	if (!ctx.cr6.eq) goto loc_828CD450;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x828cd450
	if (!ctx.cr6.eq) goto loc_828CD450;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x828cd450
	if (!ctx.cr6.eq) goto loc_828CD450;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828CD448;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
loc_828CD450:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828cd3f8
	if (ctx.cr6.lt) goto loc_828CD3F8;
loc_828CD464:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD478"))) PPC_WEAK_FUNC(sub_828CD478);
PPC_FUNC_IMPL(__imp__sub_828CD478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cd4c8
	ctx.lr = 0x828CD498;
	sub_828CD4C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828cd4ac
	if (ctx.cr6.eq) goto loc_828CD4AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828CD4AC;
	sub_82333B08(ctx, base);
loc_828CD4AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD4C8"))) PPC_WEAK_FUNC(sub_828CD4C8);
PPC_FUNC_IMPL(__imp__sub_828CD4C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18024
	ctx.r31.s64 = ctx.r11.s64 + 18024;
	// lwz r11,18028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cd510
	if (!ctx.cr0.eq) goto loc_828CD510;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-13160
	ctx.r9.s64 = ctx.r9.s64 + -13160;
	// stw r11,18028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18028, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14408
	ctx.r3.s64 = ctx.r11.s64 + -14408;
	// bl 0x82a4c758
	ctx.lr = 0x828CD510;
	sub_82A4C758(ctx, base);
loc_828CD510:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD528"))) PPC_WEAK_FUNC(sub_828CD528);
PPC_FUNC_IMPL(__imp__sub_828CD528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26576);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cd568
	if (!ctx.cr0.eq) goto loc_828CD568;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26576, ctx.r11.u32);
	// addi r3,r9,-13320
	ctx.r3.s64 = ctx.r9.s64 + -13320;
	// bl 0x82816528
	ctx.lr = 0x828CD560;
	sub_82816528(ctx, base);
	// stw r3,-26580(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26580, ctx.r3.u32);
	// b 0x828cd56c
	goto loc_828CD56C;
loc_828CD568:
	// lwz r3,-26580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26580);
loc_828CD56C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD580"))) PPC_WEAK_FUNC(sub_828CD580);
PPC_FUNC_IMPL(__imp__sub_828CD580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cd4c8
	ctx.lr = 0x828CD5A0;
	sub_828CD4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD5B4;
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

__attribute__((alias("__imp__sub_828CD5D0"))) PPC_WEAK_FUNC(sub_828CD5D0);
PPC_FUNC_IMPL(__imp__sub_828CD5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828cd608
	if (ctx.cr6.eq) goto loc_828CD608;
	// bl 0x828cd4c8
	ctx.lr = 0x828CD5F8;
	sub_828CD4C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828cd608
	if (!ctx.cr6.eq) goto loc_828CD608;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cd614
	goto loc_828CD614;
loc_828CD608:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828CD614;
	sub_82333C70(ctx, base);
loc_828CD614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD630"))) PPC_WEAK_FUNC(sub_828CD630);
PPC_FUNC_IMPL(__imp__sub_828CD630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cd4c8
	sub_828CD4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD638"))) PPC_WEAK_FUNC(sub_828CD638);
PPC_FUNC_IMPL(__imp__sub_828CD638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x828CD658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cd6c4
	if (ctx.cr0.eq) goto loc_828CD6C4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,14296
	ctx.r10.s64 = ctx.r10.s64 + 14296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-13240
	ctx.r11.s64 = ctx.r11.s64 + -13240;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828CD6BC;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828cd6c8
	goto loc_828CD6C8;
loc_828CD6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CD6C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD6E0"))) PPC_WEAK_FUNC(sub_828CD6E0);
PPC_FUNC_IMPL(__imp__sub_828CD6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-13320
	ctx.r3.s64 = ctx.r11.s64 + -13320;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD6F0"))) PPC_WEAK_FUNC(sub_828CD6F0);
PPC_FUNC_IMPL(__imp__sub_828CD6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828CD6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x828CD708;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82333900
	ctx.lr = 0x828CD718;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cd754
	if (ctx.cr0.eq) goto loc_828CD754;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
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
	// b 0x828cd758
	goto loc_828CD758;
loc_828CD754:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828CD758:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x828CD76C;
	sub_82A4EA80(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x828CD780;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD788"))) PPC_WEAK_FUNC(sub_828CD788);
PPC_FUNC_IMPL(__imp__sub_828CD788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828cd790
	sub_828CD790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD790"))) PPC_WEAK_FUNC(sub_828CD790);
PPC_FUNC_IMPL(__imp__sub_828CD790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828ccc00
	ctx.lr = 0x828CD7B0;
	sub_828CCC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828cd7c0
	if (ctx.cr0.eq) goto loc_828CD7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828CD7C0;
	sub_82332DB8(ctx, base);
loc_828CD7C0:
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

__attribute__((alias("__imp__sub_828CD7E0"))) PPC_WEAK_FUNC(sub_828CD7E0);
PPC_FUNC_IMPL(__imp__sub_828CD7E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828cd7e8
	sub_828CD7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CD7E8"))) PPC_WEAK_FUNC(sub_828CD7E8);
PPC_FUNC_IMPL(__imp__sub_828CD7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cd848
	ctx.lr = 0x828CD808;
	sub_828CD848(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828cd818
	if (!ctx.cr6.eq) goto loc_828CD818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828cd830
	goto loc_828CD830;
loc_828CD818:
	// bl 0x828cd9e0
	ctx.lr = 0x828CD81C;
	sub_828CD9E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828cd830
	if (ctx.cr6.eq) goto loc_828CD830;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x828CD830;
	sub_82338858(ctx, base);
loc_828CD830:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD848"))) PPC_WEAK_FUNC(sub_828CD848);
PPC_FUNC_IMPL(__imp__sub_828CD848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18016
	ctx.r31.s64 = ctx.r11.s64 + 18016;
	// lwz r11,18032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cd890
	if (!ctx.cr0.eq) goto loc_828CD890;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-12464
	ctx.r9.s64 = ctx.r9.s64 + -12464;
	// stw r11,18032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18032, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// bl 0x82a4c758
	ctx.lr = 0x828CD890;
	sub_82A4C758(ctx, base);
loc_828CD890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD8A8"))) PPC_WEAK_FUNC(sub_828CD8A8);
PPC_FUNC_IMPL(__imp__sub_828CD8A8) {
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
	// li r3,584
	ctx.r3.s64 = 584;
	// bl 0x82833108
	ctx.lr = 0x828CD8BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828cd8cc
	if (ctx.cr0.eq) goto loc_828CD8CC;
	// bl 0x828ccb18
	ctx.lr = 0x828CD8C8;
	sub_828CCB18(ctx, base);
	// b 0x828cd8d0
	goto loc_828CD8D0;
loc_828CD8CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CD8D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD8E0"))) PPC_WEAK_FUNC(sub_828CD8E0);
PPC_FUNC_IMPL(__imp__sub_828CD8E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,584
	ctx.r3.s64 = 584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD8E8"))) PPC_WEAK_FUNC(sub_828CD8E8);
PPC_FUNC_IMPL(__imp__sub_828CD8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26584);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cd928
	if (!ctx.cr0.eq) goto loc_828CD928;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26584, ctx.r11.u32);
	// addi r3,r9,-13260
	ctx.r3.s64 = ctx.r9.s64 + -13260;
	// bl 0x82816528
	ctx.lr = 0x828CD920;
	sub_82816528(ctx, base);
	// stw r3,-26588(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26588, ctx.r3.u32);
	// b 0x828cd92c
	goto loc_828CD92C;
loc_828CD928:
	// lwz r3,-26588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26588);
loc_828CD92C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD940"))) PPC_WEAK_FUNC(sub_828CD940);
PPC_FUNC_IMPL(__imp__sub_828CD940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cd848
	ctx.lr = 0x828CD960;
	sub_828CD848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CD974;
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

__attribute__((alias("__imp__sub_828CD990"))) PPC_WEAK_FUNC(sub_828CD990);
PPC_FUNC_IMPL(__imp__sub_828CD990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cd9e0
	ctx.lr = 0x828CD9B0;
	sub_828CD9E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828cd9c4
	if (ctx.cr6.eq) goto loc_828CD9C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x828CD9C4;
	sub_82338858(ctx, base);
loc_828CD9C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CD9E0"))) PPC_WEAK_FUNC(sub_828CD9E0);
PPC_FUNC_IMPL(__imp__sub_828CD9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,18036
	ctx.r31.s64 = ctx.r11.s64 + 18036;
	// lwz r11,18020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cda28
	if (!ctx.cr0.eq) goto loc_828CDA28;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-12812
	ctx.r9.s64 = ctx.r9.s64 + -12812;
	// stw r11,18020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18020, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14360
	ctx.r3.s64 = ctx.r11.s64 + -14360;
	// bl 0x82a4c758
	ctx.lr = 0x828CDA28;
	sub_82A4C758(ctx, base);
loc_828CDA28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDA40"))) PPC_WEAK_FUNC(sub_828CDA40);
PPC_FUNC_IMPL(__imp__sub_828CDA40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,396
	ctx.r3.s64 = 396;
	// bl 0x82833108
	ctx.lr = 0x828CDA58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828cda88
	if (ctx.cr0.eq) goto loc_828CDA88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc368
	ctx.lr = 0x828CDA68;
	sub_829BC368(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-13136
	ctx.r11.s64 = ctx.r11.s64 + -13136;
	// addi r10,r10,-12864
	ctx.r10.s64 = ctx.r10.s64 + -12864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x828cda8c
	goto loc_828CDA8C;
loc_828CDA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828CDA8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDAA0"))) PPC_WEAK_FUNC(sub_828CDAA0);
PPC_FUNC_IMPL(__imp__sub_828CDAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828cdae0
	if (!ctx.cr0.eq) goto loc_828CDAE0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26592(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26592, ctx.r11.u32);
	// addi r3,r9,-13276
	ctx.r3.s64 = ctx.r9.s64 + -13276;
	// bl 0x82816528
	ctx.lr = 0x828CDAD8;
	sub_82816528(ctx, base);
	// stw r3,-26596(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26596, ctx.r3.u32);
	// b 0x828cdae4
	goto loc_828CDAE4;
loc_828CDAE0:
	// lwz r3,-26596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26596);
loc_828CDAE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDAF8"))) PPC_WEAK_FUNC(sub_828CDAF8);
PPC_FUNC_IMPL(__imp__sub_828CDAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x828cd9e0
	ctx.lr = 0x828CDB18;
	sub_828CD9E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CDB2C;
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

__attribute__((alias("__imp__sub_828CDB48"))) PPC_WEAK_FUNC(sub_828CDB48);
PPC_FUNC_IMPL(__imp__sub_828CDB48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828cdb80
	if (ctx.cr6.eq) goto loc_828CDB80;
	// bl 0x828cd848
	ctx.lr = 0x828CDB70;
	sub_828CD848(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828cdb80
	if (!ctx.cr6.eq) goto loc_828CDB80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cdb8c
	goto loc_828CDB8C;
loc_828CDB80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cdba8
	ctx.lr = 0x828CDB8C;
	sub_828CDBA8(ctx, base);
loc_828CDB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDBA8"))) PPC_WEAK_FUNC(sub_828CDBA8);
PPC_FUNC_IMPL(__imp__sub_828CDBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828cdbe0
	if (ctx.cr6.eq) goto loc_828CDBE0;
	// bl 0x828cd9e0
	ctx.lr = 0x828CDBD0;
	sub_828CD9E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828cdbe0
	if (!ctx.cr6.eq) goto loc_828CDBE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828cdbec
	goto loc_828CDBEC;
loc_828CDBE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x828CDBEC;
	sub_82338A88(ctx, base);
loc_828CDBEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828CDC08"))) PPC_WEAK_FUNC(sub_828CDC08);
PPC_FUNC_IMPL(__imp__sub_828CDC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cd848
	sub_828CD848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828CDC10"))) PPC_WEAK_FUNC(sub_828CDC10);
PPC_FUNC_IMPL(__imp__sub_828CDC10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828cd9e0
	sub_828CD9E0(ctx, base);
	return;
}

