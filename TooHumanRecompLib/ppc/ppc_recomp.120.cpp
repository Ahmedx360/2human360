#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827D0C38"))) PPC_WEAK_FUNC(sub_827D0C38);
PPC_FUNC_IMPL(__imp__sub_827D0C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lbz r9,7(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x827d0c68
	if (!ctx.cr6.lt) goto loc_827D0C68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D0C68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d0c84
	if (ctx.cr6.eq) goto loc_827D0C84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x827d0c84
	if (!ctx.cr6.eq) goto loc_827D0C84;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d0c88
	goto loc_827D0C88;
loc_827D0C84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D0C88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// bl 0x827d09e0
	ctx.lr = 0x827D0C9C;
	sub_827D09E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x827d0ce4
	if (!ctx.cr0.lt) goto loc_827D0CE4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827D0CB0;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d0cdc
	if (ctx.cr0.eq) goto loc_827D0CDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8720
	ctx.lr = 0x827D0CC4;
	sub_827C8720(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827D0CD0;
	sub_828019B8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802508
	ctx.lr = 0x827D0CDC;
	sub_82802508(ctx, base);
loc_827D0CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82803a18
	ctx.lr = 0x827D0CE4;
	sub_82803A18(ctx, base);
loc_827D0CE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0CF8"))) PPC_WEAK_FUNC(sub_827D0CF8);
PPC_FUNC_IMPL(__imp__sub_827D0CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D0D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d0d20
	if (ctx.cr6.lt) goto loc_827D0D20;
	// bl 0x82809030
	ctx.lr = 0x827D0D20;
	sub_82809030(ctx, base);
loc_827D0D20:
	// li r6,88
	ctx.r6.s64 = 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82809938
	ctx.lr = 0x827D0D34;
	sub_82809938(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r28,8
	ctx.r28.s64 = 8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r28,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r28.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stb r9,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r9.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// sth r11,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r11.u16);
	// sth r11,46(r31)
	PPC_STORE_U16(ctx.r31.u32 + 46, ctx.r11.u16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x82802720
	ctx.lr = 0x827D0DB4;
	sub_82802720(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827d0e78
	if (!ctx.cr6.lt) goto loc_827D0E78;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d0e78
	if (ctx.cr6.eq) goto loc_827D0E78;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827d0e78
	if (!ctx.cr6.eq) goto loc_827D0E78;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827d0e28
	if (!ctx.cr6.lt) goto loc_827D0E28;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d0e28
	if (ctx.cr6.eq) goto loc_827D0E28;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827d0e28
	if (!ctx.cr6.eq) goto loc_827D0E28;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,6(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x827d0e78
	if (!ctx.cr0.eq) goto loc_827D0E78;
loc_827D0E28:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827D0E78:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1680
	ctx.r5.s64 = ctx.r11.s64 + -1680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827D0E8C;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827D0E90"))) PPC_WEAK_FUNC(sub_827D0E90);
PPC_FUNC_IMPL(__imp__sub_827D0E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827d0cf8
	ctx.lr = 0x827D0EA8;
	sub_827D0CF8(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,3128
	ctx.r4.s64 = ctx.r11.s64 + 3128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827D0EBC;
	sub_82801E40(ctx, base);
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

__attribute__((alias("__imp__sub_827D0ED8"))) PPC_WEAK_FUNC(sub_827D0ED8);
PPC_FUNC_IMPL(__imp__sub_827D0ED8) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,46(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 46);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// beq 0x827d0f10
	if (ctx.cr0.eq) goto loc_827D0F10;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,18196
	ctx.r4.s64 = ctx.r11.s64 + 18196;
	// bl 0x82803b40
	ctx.lr = 0x827D0F10;
	sub_82803B40(ctx, base);
loc_827D0F10:
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827d0f94
	if (ctx.cr0.eq) goto loc_827D0F94;
	// lwz r8,-16(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16);
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827d0f34
	if (ctx.cr0.eq) goto loc_827D0F34;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,18248
	ctx.r4.s64 = ctx.r11.s64 + 18248;
	// bl 0x82803b40
	ctx.lr = 0x827D0F34;
	sub_82803B40(ctx, base);
loc_827D0F34:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827d0f94
	if (!ctx.cr6.gt) goto loc_827D0F94;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d0f88
	if (!ctx.cr6.gt) goto loc_827D0F88;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_827D0F58:
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// bne 0x827d0f58
	if (!ctx.cr0.eq) goto loc_827D0F58;
loc_827D0F88:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_827D0F94:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0FB8"))) PPC_WEAK_FUNC(sub_827D0FB8);
PPC_FUNC_IMPL(__imp__sub_827D0FB8) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d0ff0
	if (!ctx.cr6.lt) goto loc_827D0FF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d0ff0
	if (ctx.cr6.eq) goto loc_827D0FF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x827d0ff0
	if (!ctx.cr6.eq) goto loc_827D0FF0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d0ff4
	goto loc_827D0FF4;
loc_827D0FF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D0FF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d100c
	if (!ctx.cr6.eq) goto loc_827D100C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1700
	ctx.r5.s64 = ctx.r11.s64 + -1700;
	// bl 0x827c85b8
	ctx.lr = 0x827D100C;
	sub_827C85B8(ctx, base);
loc_827D100C:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d1024
	if (!ctx.cr6.eq) goto loc_827D1024;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-1656
	ctx.r4.s64 = ctx.r11.s64 + -1656;
	// b 0x827d1064
	goto loc_827D1064;
loc_827D1024:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827d1058
	if (!ctx.cr6.eq) goto loc_827D1058;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827d1058
	if (!ctx.cr0.eq) goto loc_827D1058;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-1648
	ctx.r4.s64 = ctx.r11.s64 + -1648;
	// b 0x827d1064
	goto loc_827D1064;
loc_827D1058:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-1640
	ctx.r4.s64 = ctx.r11.s64 + -1640;
loc_827D1064:
	// bl 0x82801d10
	ctx.lr = 0x827D1068;
	sub_82801D10(ctx, base);
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

__attribute__((alias("__imp__sub_827D1080"))) PPC_WEAK_FUNC(sub_827D1080);
PPC_FUNC_IMPL(__imp__sub_827D1080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-1628
	ctx.r4.s64 = ctx.r11.s64 + -1628;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801d10
	ctx.lr = 0x827D10A4;
	sub_82801D10(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11336
	ctx.r5.s64 = ctx.r11.s64 + -11336;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827c8bf8
	ctx.lr = 0x827D10DC;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82801d10
	ctx.lr = 0x827D10F0;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1612
	ctx.r4.s64 = ctx.r11.s64 + -1612;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82801d10
	ctx.lr = 0x827D1104;
	sub_82801D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827D1110;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1600
	ctx.r4.s64 = ctx.r11.s64 + -1600;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82801d10
	ctx.lr = 0x827D1124;
	sub_82801D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827D112C;
	sub_82802018(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802238
	ctx.lr = 0x827D1158;
	sub_82802238(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7064
	ctx.r4.s64 = ctx.r11.s64 + -7064;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82801d10
	ctx.lr = 0x827D116C;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6992
	ctx.r4.s64 = ctx.r11.s64 + -6992;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82801d10
	ctx.lr = 0x827D1180;
	sub_82801D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827D118C;
	sub_82802168(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,952
	ctx.r4.s64 = ctx.r11.s64 + 952;
	// bl 0x82801e40
	ctx.lr = 0x827D11A0;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827D11AC;
	sub_82802168(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827D11B8;
	sub_82802168(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D11D0"))) PPC_WEAK_FUNC(sub_827D11D0);
PPC_FUNC_IMPL(__imp__sub_827D11D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827d1080
	ctx.lr = 0x827D11E8;
	sub_827D1080(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-11128
	ctx.r5.s64 = ctx.r11.s64 + -11128;
	// addi r4,r10,-1588
	ctx.r4.s64 = ctx.r10.s64 + -1588;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x827c8bf8
	ctx.lr = 0x827D1204;
	sub_827C8BF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827D120C;
	sub_82802018(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1888
	ctx.r4.s64 = ctx.r11.s64 + -1888;
	// bl 0x82801d78
	ctx.lr = 0x827D121C;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x828019b8
	ctx.lr = 0x827D1228;
	sub_828019B8(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827D1234;
	sub_82802118(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D1250"))) PPC_WEAK_FUNC(sub_827D1250);
PPC_FUNC_IMPL(__imp__sub_827D1250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D1258;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1284
	if (!ctx.cr6.lt) goto loc_827D1284;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1284
	if (ctx.cr6.eq) goto loc_827D1284;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d1294
	if (ctx.cr6.eq) goto loc_827D1294;
loc_827D1284:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1294;
	sub_827C8690(ctx, base);
loc_827D1294:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D12A0;
	sub_827C8F90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d12cc
	if (!ctx.cr6.lt) goto loc_827D12CC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d12cc
	if (ctx.cr6.eq) goto loc_827D12CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827d12dc
	if (ctx.cr6.eq) goto loc_827D12DC;
loc_827D12CC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D12DC;
	sub_827C8690(ctx, base);
loc_827D12DC:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x827d1384
	if (ctx.cr6.lt) goto loc_827D1384;
loc_827D12E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801fc8
	ctx.lr = 0x827D1348;
	sub_82801FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827D135C;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d1390
	if (ctx.cr0.eq) goto loc_827D1390;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827d1390
	if (!ctx.cr6.eq) goto loc_827D1390;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x827d12e8
	if (!ctx.cr6.gt) goto loc_827D12E8;
loc_827D1384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D1388:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_827D1390:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d1388
	goto loc_827D1388;
}

__attribute__((alias("__imp__sub_827D1398"))) PPC_WEAK_FUNC(sub_827D1398);
PPC_FUNC_IMPL(__imp__sub_827D1398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d13d0
	if (!ctx.cr6.lt) goto loc_827D13D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d13d0
	if (ctx.cr6.eq) goto loc_827D13D0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x827d13e0
	if (ctx.cr6.eq) goto loc_827D13E0;
loc_827D13D0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D13E0;
	sub_827C8690(ctx, base);
loc_827D13E0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1400
	if (!ctx.cr6.lt) goto loc_827D1400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1400
	if (ctx.cr6.eq) goto loc_827D1400;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827d1410
	if (ctx.cr6.eq) goto loc_827D1410;
loc_827D1400:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1410;
	sub_827C8690(ctx, base);
loc_827D1410:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x827d14ac
	goto loc_827D14AC;
loc_827D1424:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827D1490;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827d14c8
	if (ctx.cr0.eq) goto loc_827D14C8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827d14c8
	if (!ctx.cr6.eq) goto loc_827D14C8;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_827D14AC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828024a8
	ctx.lr = 0x827D14BC;
	sub_828024A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d1424
	if (!ctx.cr0.eq) goto loc_827D1424;
	// b 0x827d14cc
	goto loc_827D14CC;
loc_827D14C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827D14CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D14E0"))) PPC_WEAK_FUNC(sub_827D14E0);
PPC_FUNC_IMPL(__imp__sub_827D14E0) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1518
	if (!ctx.cr6.lt) goto loc_827D1518;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1518
	if (ctx.cr6.eq) goto loc_827D1518;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d1528
	if (ctx.cr6.eq) goto loc_827D1528;
loc_827D1518:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1528;
	sub_827C8690(ctx, base);
loc_827D1528:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D1534;
	sub_827C8F90(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827D1580"))) PPC_WEAK_FUNC(sub_827D1580);
PPC_FUNC_IMPL(__imp__sub_827D1580) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d15b8
	if (!ctx.cr6.lt) goto loc_827D15B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d15b8
	if (ctx.cr6.eq) goto loc_827D15B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d15c8
	if (ctx.cr6.eq) goto loc_827D15C8;
loc_827D15B8:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D15C8;
	sub_827C8690(ctx, base);
loc_827D15C8:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827D15D4;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827c8e18
	ctx.lr = 0x827D15EC;
	sub_827C8E18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_827D1608"))) PPC_WEAK_FUNC(sub_827D1608);
PPC_FUNC_IMPL(__imp__sub_827D1608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D1610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r28,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 3;
	// bge cr6,0x827d1644
	if (!ctx.cr6.lt) goto loc_827D1644;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1644
	if (ctx.cr6.eq) goto loc_827D1644;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d1654
	if (ctx.cr6.eq) goto loc_827D1654;
loc_827D1644:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1654;
	sub_827C8690(ctx, base);
loc_827D1654:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D1660;
	sub_827C8F90(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x827d1674
	if (!ctx.cr6.eq) goto loc_827D1674;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x827d169c
	goto loc_827D169C;
loc_827D1674:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827D1680;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x827d1698
	if (!ctx.cr6.gt) goto loc_827D1698;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827D1698:
	// li r28,3
	ctx.r28.s64 = 3;
loc_827D169C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8e18
	ctx.lr = 0x827D16AC;
	sub_827C8E18(ctx, base);
	// b 0x827d16cc
	goto loc_827D16CC;
loc_827D16B0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801fc8
	ctx.lr = 0x827D16BC;
	sub_82801FC8(ctx, base);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D16CC;
	sub_828021D0(ctx, base);
loc_827D16CC:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x827d16b0
	if (!ctx.cr6.lt) goto loc_827D16B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82801738
	ctx.lr = 0x827D16E4;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828021d0
	ctx.lr = 0x827D1718;
	sub_828021D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1728"))) PPC_WEAK_FUNC(sub_827D1728);
PPC_FUNC_IMPL(__imp__sub_827D1728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D1730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d175c
	if (!ctx.cr6.lt) goto loc_827D175C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d175c
	if (ctx.cr6.eq) goto loc_827D175C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d176c
	if (ctx.cr6.eq) goto loc_827D176C;
loc_827D175C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D176C;
	sub_827C8690(ctx, base);
loc_827D176C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D1778;
	sub_827C8F90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d17a4
	if (!ctx.cr6.lt) goto loc_827D17A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d17a4
	if (ctx.cr6.eq) goto loc_827D17A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d17bc
	if (ctx.cr6.gt) goto loc_827D17BC;
loc_827D17A4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x827d17c8
	goto loc_827D17C8;
loc_827D17BC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827D17C8;
	sub_827C8B08(ctx, base);
loc_827D17C8:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x827d17e4
	if (ctx.cr6.gt) goto loc_827D17E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827d1868
	goto loc_827D1868;
loc_827D17E4:
	// addi r5,r29,-1
	ctx.r5.s64 = ctx.r29.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8e18
	ctx.lr = 0x827D17F4;
	sub_827C8E18(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1804;
	sub_82801FC8(ctx, base);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x827d183c
	if (!ctx.cr6.lt) goto loc_827D183C;
loc_827D180C:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1820;
	sub_82801FC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1830;
	sub_828021D0(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x827d180c
	if (ctx.cr6.lt) goto loc_827D180C;
loc_827D183C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828021d0
	ctx.lr = 0x827D1864;
	sub_828021D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827D1868:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1870"))) PPC_WEAK_FUNC(sub_827D1870);
PPC_FUNC_IMPL(__imp__sub_827D1870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D1878;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,15834
	ctx.r5.s64 = ctx.r11.s64 + 15834;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827D1894;
	sub_827C8A78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d18c0
	if (!ctx.cr6.lt) goto loc_827D18C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d18c0
	if (ctx.cr6.eq) goto loc_827D18C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d18cc
	if (ctx.cr6.gt) goto loc_827D18CC;
loc_827D18C0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827d18d8
	goto loc_827D18D8;
loc_827D18CC:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827D18D8;
	sub_827C8B08(ctx, base);
loc_827D18D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d190c
	if (!ctx.cr6.lt) goto loc_827D190C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d190c
	if (ctx.cr6.eq) goto loc_827D190C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d1918
	if (ctx.cr6.gt) goto loc_827D1918;
loc_827D190C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827d1924
	goto loc_827D1924;
loc_827D1918:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827D1924;
	sub_827C8B08(ctx, base);
loc_827D1924:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1954
	if (!ctx.cr6.lt) goto loc_827D1954;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1954
	if (ctx.cr6.eq) goto loc_827D1954;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d1964
	if (ctx.cr6.eq) goto loc_827D1964;
loc_827D1954:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1964;
	sub_827C8690(ctx, base);
loc_827D1964:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827d197c
	if (!ctx.cr6.eq) goto loc_827D197C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D1978;
	sub_827C8F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827D197C:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x827d19dc
	goto loc_827D19DC;
loc_827D1994:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D19A4;
	sub_82801FC8(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827D19B0;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d1a04
	if (ctx.cr0.eq) goto loc_827D1A04;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9288
	ctx.lr = 0x827D19C0;
	sub_827C9288(ctx, base);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x827d19d8
	if (ctx.cr6.eq) goto loc_827D19D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9210
	ctx.lr = 0x827D19D8;
	sub_827C9210(ctx, base);
loc_827D19D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_827D19DC:
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x827d1994
	if (!ctx.cr6.gt) goto loc_827D1994;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827D19EC;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827D19F8;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827D1A04:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1516
	ctx.r5.s64 = ctx.r11.s64 + -1516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827D1A18;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827D1A18"))) PPC_WEAK_FUNC(sub_827D1A18);
PPC_FUNC_IMPL(__imp__sub_827D1A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827d1a54
	if (!ctx.cr6.lt) goto loc_827D1A54;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d1a54
	if (ctx.cr6.eq) goto loc_827D1A54;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827d1af4
	if (ctx.cr6.eq) goto loc_827D1AF4;
loc_827D1A54:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82801738
	ctx.lr = 0x827D1A7C;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r5,-2
	ctx.r4.s64 = ctx.r5.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82801738
	ctx.lr = 0x827D1AA8;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827D1AD8;
	sub_82804670(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827D1AE4;
	sub_82801B58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827d1b34
	goto loc_827D1B34;
loc_827D1AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828017c0
	ctx.lr = 0x827D1AFC;
	sub_828017C0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828017c0
	ctx.lr = 0x827D1B0C;
	sub_828017C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d1b30
	if (ctx.cr6.eq) goto loc_827D1B30;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d1b30
	if (ctx.cr6.eq) goto loc_827D1B30;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82805620
	ctx.lr = 0x827D1B2C;
	sub_82805620(ctx, base);
	// b 0x827d1b34
	goto loc_827D1B34;
loc_827D1B30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D1B34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D1B48"))) PPC_WEAK_FUNC(sub_827D1B48);
PPC_FUNC_IMPL(__imp__sub_827D1B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827D1B50;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x827d1e30
	goto loc_827D1E30;
loc_827D1B64:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1B74;
	sub_82801FC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1B84;
	sub_82801FC8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1a18
	ctx.lr = 0x827D1B94;
	sub_827D1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d1bc0
	if (ctx.cr0.eq) goto loc_827D1BC0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1BAC;
	sub_828021D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1BBC;
	sub_828021D0(ctx, base);
	// b 0x827d1bcc
	goto loc_827D1BCC;
loc_827D1BC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D1BCC:
	// subf r28,r27,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x827d1e38
	if (ctx.cr6.eq) goto loc_827D1E38;
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1BF4;
	sub_82801FC8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1C04;
	sub_82801FC8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1a18
	ctx.lr = 0x827D1C14;
	sub_827D1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827d1c34
	if (ctx.cr0.eq) goto loc_827D1C34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1C2C;
	sub_828021D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x827d1c74
	goto loc_827D1C74;
loc_827D1C34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801fc8
	ctx.lr = 0x827D1C48;
	sub_82801FC8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1a18
	ctx.lr = 0x827D1C58;
	sub_827D1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d1c84
	if (ctx.cr0.eq) goto loc_827D1C84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1C70;
	sub_828021D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_827D1C74:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1C80;
	sub_828021D0(ctx, base);
	// b 0x827d1c90
	goto loc_827D1C90;
loc_827D1C84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D1C90:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x827d1e38
	if (ctx.cr6.eq) goto loc_827D1E38;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1CA8;
	sub_82801FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801fc8
	ctx.lr = 0x827D1CDC;
	sub_82801FC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1CEC;
	sub_828021D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1CFC;
	sub_828021D0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// b 0x827d1d1c
	goto loc_827D1D1C;
loc_827D1D08:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x827d1e40
	if (ctx.cr6.gt) goto loc_827D1E40;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D1D1C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1D30;
	sub_82801FC8(ctx, base);
	// li r5,-2
	ctx.r5.s64 = -2;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1a18
	ctx.lr = 0x827D1D40;
	sub_827D1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d1d08
	if (!ctx.cr0.eq) goto loc_827D1D08;
	// b 0x827d1d60
	goto loc_827D1D60;
loc_827D1D4C:
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x827d1e50
	if (ctx.cr6.lt) goto loc_827D1E50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D1D60:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1D74;
	sub_82801FC8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1a18
	ctx.lr = 0x827D1D84;
	sub_827D1A18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d1d4c
	if (!ctx.cr0.eq) goto loc_827D1D4C;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x827d1db8
	if (ctx.cr6.lt) goto loc_827D1DB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1DA4;
	sub_828021D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1DB4;
	sub_828021D0(ctx, base);
	// b 0x827d1d1c
	goto loc_827D1D1C;
loc_827D1DB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801fc8
	ctx.lr = 0x827D1DCC;
	sub_82801FC8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827D1DDC;
	sub_82801FC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1DEC;
	sub_828021D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021d0
	ctx.lr = 0x827D1DFC;
	sub_828021D0(ctx, base);
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// subf r10,r27,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827d1e1c
	if (!ctx.cr6.lt) goto loc_827D1E1C;
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r27,r5,2
	ctx.r27.s64 = ctx.r5.s64 + 2;
	// b 0x827d1e28
	goto loc_827D1E28;
loc_827D1E1C:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r29,r4,-2
	ctx.r29.s64 = ctx.r4.s64 + -2;
loc_827D1E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d1b48
	ctx.lr = 0x827D1E30;
	sub_827D1B48(ctx, base);
loc_827D1E30:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x827d1b64
	if (ctx.cr6.lt) goto loc_827D1B64;
loc_827D1E38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_827D1E40:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1488
	ctx.r4.s64 = ctx.r11.s64 + -1488;
	// bl 0x827c87a8
	ctx.lr = 0x827D1E50;
	sub_827C87A8(ctx, base);
loc_827D1E50:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1488
	ctx.r4.s64 = ctx.r11.s64 + -1488;
	// bl 0x827c87a8
	ctx.lr = 0x827D1E60;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827D1E60"))) PPC_WEAK_FUNC(sub_827D1E60);
PPC_FUNC_IMPL(__imp__sub_827D1E60) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1e9c
	if (!ctx.cr6.lt) goto loc_827D1E9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1e9c
	if (ctx.cr6.eq) goto loc_827D1E9C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d1eac
	if (ctx.cr6.eq) goto loc_827D1EAC;
loc_827D1E9C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1EAC;
	sub_827C8690(ctx, base);
loc_827D1EAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827D1EB8;
	sub_827C8F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801850
	ctx.lr = 0x827D1EC8;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d1ee8
	if (!ctx.cr0.eq) goto loc_827D1EE8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,15834
	ctx.r5.s64 = ctx.r11.s64 + 15834;
	// addi r4,r10,-4600
	ctx.r4.s64 = ctx.r10.s64 + -4600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827D1EE8;
	sub_827C87A8(ctx, base);
loc_827D1EE8:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1f3c
	if (!ctx.cr6.lt) goto loc_827D1F3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1f3c
	if (ctx.cr6.eq) goto loc_827D1F3C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827d1f3c
	if (!ctx.cr6.gt) goto loc_827D1F3C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d1f2c
	if (!ctx.cr6.lt) goto loc_827D1F2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1f2c
	if (ctx.cr6.eq) goto loc_827D1F2C;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827d1f3c
	if (ctx.cr6.eq) goto loc_827D1F3C;
loc_827D1F2C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D1F3C;
	sub_827C8690(ctx, base);
loc_827D1F3C:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// b 0x827d1f68
	goto loc_827D1F68;
loc_827D1F44:
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
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_827D1F68:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d1f44
	if (ctx.cr6.lt) goto loc_827D1F44;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827d1b48
	ctx.lr = 0x827D1F8C;
	sub_827D1B48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_827D1FA8"))) PPC_WEAK_FUNC(sub_827D1FA8);
PPC_FUNC_IMPL(__imp__sub_827D1FA8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-11408
	ctx.r5.s64 = ctx.r11.s64 + -11408;
	// addi r4,r10,-7352
	ctx.r4.s64 = ctx.r10.s64 + -7352;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x827c8bf8
	ctx.lr = 0x827D1FCC;
	sub_827C8BF8(ctx, base);
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

__attribute__((alias("__imp__sub_827D1FE0"))) PPC_WEAK_FUNC(sub_827D1FE0);
PPC_FUNC_IMPL(__imp__sub_827D1FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827d2018
	if (!ctx.cr6.gt) goto loc_827D2018;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827D1FF8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827d2020
	if (ctx.cr6.eq) goto loc_827D2020;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827d1ff8
	if (ctx.cr6.lt) goto loc_827D1FF8;
loc_827D2018:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827D2020:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2030"))) PPC_WEAK_FUNC(sub_827D2030);
PPC_FUNC_IMPL(__imp__sub_827D2030) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x827d2040
	sub_827D2040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2040"))) PPC_WEAK_FUNC(sub_827D2040);
PPC_FUNC_IMPL(__imp__sub_827D2040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827D2048;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x828165a8
	ctx.lr = 0x827D2064;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82846e98
	ctx.lr = 0x827D2078;
	sub_82846E98(ctx, base);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r24,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r24.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827d20ac
	if (ctx.cr6.eq) goto loc_827D20AC;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x827D20AC;
	sub_82332C38(ctx, base);
loc_827D20AC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x827d21a0
	if (!ctx.cr6.eq) goto loc_827D21A0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d2254
	if (!ctx.cr6.gt) goto loc_827D2254;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_827D20CC:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82411dc0
	ctx.lr = 0x827D20E8;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d2160
	if (ctx.cr0.eq) goto loc_827D2160;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d2130
	if (ctx.cr6.eq) goto loc_827D2130;
	// bl 0x827d2260
	ctx.lr = 0x827D2100;
	sub_827D2260(ctx, base);
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
	ctx.lr = 0x827D2118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x827d2128
	if (!ctx.cr0.eq) goto loc_827D2128;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_827D2128:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x827d2134
	goto loc_827D2134;
loc_827D2130:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827D2134:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827D2148;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2188
	if (ctx.cr0.eq) goto loc_827D2188;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x827d2188
	goto loc_827D2188;
loc_827D2160:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827D2174;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2188
	if (ctx.cr0.eq) goto loc_827D2188;
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
loc_827D2188:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d20cc
	if (ctx.cr6.lt) goto loc_827D20CC;
	// b 0x827d2254
	goto loc_827D2254;
loc_827D21A0:
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d2254
	if (!ctx.cr6.gt) goto loc_827D2254;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_827D21B0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// bl 0x82846fb0
	ctx.lr = 0x827D21C0;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d21e0
	if (ctx.cr6.eq) goto loc_827D21E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D21D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827d21e4
	goto loc_827D21E4;
loc_827D21E0:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827D21E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d2218
	if (ctx.cr6.eq) goto loc_827D2218;
	// bl 0x827d2260
	ctx.lr = 0x827D21F0;
	sub_827D2260(ctx, base);
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
	ctx.lr = 0x827D2208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d2214
	if (!ctx.cr0.eq) goto loc_827D2214;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_827D2214:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_827D2218:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x827D222C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2240
	if (ctx.cr0.eq) goto loc_827D2240;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827D2240:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d21b0
	if (ctx.cr6.lt) goto loc_827D21B0;
loc_827D2254:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2260"))) PPC_WEAK_FUNC(sub_827D2260);
PPC_FUNC_IMPL(__imp__sub_827D2260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14096
	ctx.r31.s64 = ctx.r11.s64 + 14096;
	// lwz r11,14100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d22a8
	if (!ctx.cr0.eq) goto loc_827D22A8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1360
	ctx.r9.s64 = ctx.r9.s64 + -1360;
	// stw r11,14100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14100, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// bl 0x82a4c758
	ctx.lr = 0x827D22A8;
	sub_82A4C758(ctx, base);
loc_827D22A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D22C0"))) PPC_WEAK_FUNC(sub_827D22C0);
PPC_FUNC_IMPL(__imp__sub_827D22C0) {
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
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x82833108
	ctx.lr = 0x827D22D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d22e4
	if (ctx.cr0.eq) goto loc_827D22E4;
	// bl 0x827f0760
	ctx.lr = 0x827D22E0;
	sub_827F0760(ctx, base);
	// b 0x827d22e8
	goto loc_827D22E8;
loc_827D22E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D22E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D22F8"))) PPC_WEAK_FUNC(sub_827D22F8);
PPC_FUNC_IMPL(__imp__sub_827D22F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21044);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d2338
	if (!ctx.cr0.eq) goto loc_827D2338;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21044, ctx.r11.u32);
	// addi r3,r9,-1452
	ctx.r3.s64 = ctx.r9.s64 + -1452;
	// bl 0x82816528
	ctx.lr = 0x827D2330;
	sub_82816528(ctx, base);
	// stw r3,21040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21040, ctx.r3.u32);
	// b 0x827d233c
	goto loc_827D233C;
loc_827D2338:
	// lwz r3,21040(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21040);
loc_827D233C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2350"))) PPC_WEAK_FUNC(sub_827D2350);
PPC_FUNC_IMPL(__imp__sub_827D2350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d2260
	ctx.lr = 0x827D2370;
	sub_827D2260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2384;
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

__attribute__((alias("__imp__sub_827D23A0"))) PPC_WEAK_FUNC(sub_827D23A0);
PPC_FUNC_IMPL(__imp__sub_827D23A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D23A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827D23D0;
	sub_82332CA8(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d23e0
	if (ctx.cr6.eq) goto loc_827D23E0;
	// bl 0x82332db8
	ctx.lr = 0x827D23E0;
	sub_82332DB8(ctx, base);
loc_827D23E0:
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
	// bl 0x82833238
	ctx.lr = 0x827D23F8;
	sub_82833238(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2408
	if (ctx.cr0.eq) goto loc_827D2408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x827D2408;
	sub_82332DB8(ctx, base);
loc_827D2408:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2418"))) PPC_WEAK_FUNC(sub_827D2418);
PPC_FUNC_IMPL(__imp__sub_827D2418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r11,10780
	ctx.r3.s64 = ctx.r11.s64 + 10780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2428"))) PPC_WEAK_FUNC(sub_827D2428);
PPC_FUNC_IMPL(__imp__sub_827D2428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824852c0
	ctx.lr = 0x827D2448;
	sub_824852C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d2458
	if (!ctx.cr6.eq) goto loc_827D2458;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827d246c
	goto loc_827D246C;
loc_827D2458:
	// bl 0x82333d20
	ctx.lr = 0x827D245C;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d246c
	if (ctx.cr6.eq) goto loc_827D246C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D246C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2488"))) PPC_WEAK_FUNC(sub_827D2488);
PPC_FUNC_IMPL(__imp__sub_827D2488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x827d24c8
	if (ctx.cr6.eq) goto loc_827D24C8;
	// bl 0x824852c0
	ctx.lr = 0x827D24A8;
	sub_824852C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d24b8
	if (!ctx.cr6.eq) goto loc_827D24B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d24cc
	goto loc_827D24CC;
loc_827D24B8:
	// bl 0x82333d20
	ctx.lr = 0x827D24BC;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x827d24cc
	if (ctx.cr6.eq) goto loc_827D24CC;
loc_827D24C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D24CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D24E0"))) PPC_WEAK_FUNC(sub_827D24E0);
PPC_FUNC_IMPL(__imp__sub_827D24E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824852c0
	sub_824852C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D24E8"))) PPC_WEAK_FUNC(sub_827D24E8);
PPC_FUNC_IMPL(__imp__sub_827D24E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D2504;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d2518
	if (ctx.cr0.eq) goto loc_827D2518;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d2530
	ctx.lr = 0x827D2514;
	sub_827D2530(ctx, base);
	// b 0x827d251c
	goto loc_827D251C;
loc_827D2518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D251C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2530"))) PPC_WEAK_FUNC(sub_827D2530);
PPC_FUNC_IMPL(__imp__sub_827D2530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D2538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-1432
	ctx.r10.s64 = ctx.r10.s64 + -1432;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r29,r4,8
	ctx.r29.s64 = ctx.r4.s64 + 8;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827d25d8
	if (ctx.cr6.eq) goto loc_827D25D8;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827d25d8
	if (!ctx.cr6.gt) goto loc_827D25D8;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827d25bc
	if (ctx.cr0.eq) goto loc_827D25BC;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827D25BC;
	sub_82332C38(ctx, base);
loc_827D25BC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x827D25D0;
	sub_82A45878(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827D25D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D25E8"))) PPC_WEAK_FUNC(sub_827D25E8);
PPC_FUNC_IMPL(__imp__sub_827D25E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x827D2600;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d2624
	if (ctx.cr0.eq) goto loc_827D2624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f6548
	ctx.lr = 0x827D2610;
	sub_827F6548(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,9872
	ctx.r11.s64 = ctx.r11.s64 + 9872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827d2628
	goto loc_827D2628;
loc_827D2624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2640"))) PPC_WEAK_FUNC(sub_827D2640);
PPC_FUNC_IMPL(__imp__sub_827D2640) {
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
	// bl 0x827d73c0
	ctx.lr = 0x827D2658;
	sub_827D73C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// addi r7,r7,19608
	ctx.r7.s64 = ctx.r7.s64 + 19608;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r7.u32);
	// addi r6,r6,20720
	ctx.r6.s64 = ctx.r6.s64 + 20720;
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r5,8616
	ctx.r5.s64 = ctx.r5.s64 + 8616;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r5,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r5.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lwz r7,1452(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r5,1644(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// rlwimi r7,r8,24,0,0
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// clrlwi r6,r5,5
	ctx.r6.u64 = ctx.r5.u32 & 0x7FFFFFF;
	// rlwimi r7,r8,24,7,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0x1000000) | (ctx.r7.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r10.u32);
	// rlwinm r6,r6,0,8,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r9.u32);
	// rlwimi r7,r8,24,4,4
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0x8000000) | (ctx.r7.u64 & 0xFFFFFFFFF7FFFFFF);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r6,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r6.u32);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r10,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r10.u32);
	// stw r8,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_827D2730"))) PPC_WEAK_FUNC(sub_827D2730);
PPC_FUNC_IMPL(__imp__sub_827D2730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D2738;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d28ec
	if (ctx.cr0.eq) goto loc_827D28EC;
	// lwz r3,1628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d28ec
	if (ctx.cr6.eq) goto loc_827D28EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d2790
	if (ctx.cr0.eq) goto loc_827D2790;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82965960
	ctx.lr = 0x827D278C;
	sub_82965960(ctx, base);
	// b 0x827d2794
	goto loc_827D2794;
loc_827D2790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2794:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827d28ec
	if (ctx.cr6.eq) goto loc_827D28EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f0b88
	ctx.lr = 0x827D27AC;
	sub_827F0B88(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82817280
	ctx.lr = 0x827D27D4;
	sub_82817280(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827D2810;
	sub_82817BB8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// beq cr6,0x827d2860
	if (ctx.cr6.eq) goto loc_827D2860;
	// lfs f11,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// b 0x827d2868
	goto loc_827D2868;
loc_827D2860:
	// fsubs f13,f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
loc_827D2868:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,-32516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827d2890
	if (!ctx.cr6.lt) goto loc_827D2890;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_827D2890:
	// fsubs f9,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r10,r11,-27804
	ctx.r10.s64 = ctx.r11.s64 + -27804;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f11,-27804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,-1488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,23968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23968);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsel f0,f11,f13,f9
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x827d293c
	goto loc_827D293C;
loc_827D28EC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1708);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,1720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,1716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_827D293C:
	// stfs f10,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2950"))) PPC_WEAK_FUNC(sub_827D2950);
PPC_FUNC_IMPL(__imp__sub_827D2950) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2a68
	if (ctx.cr6.eq) goto loc_827D2A68;
	// lwa r10,28(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 28));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x827d2a68
	if (!ctx.cr6.gt) goto loc_827D2A68;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,1640(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bge cr6,0x827d2a68
	if (!ctx.cr6.lt) goto loc_827D2A68;
	// lfs f0,1636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x827d2a68
	if (!ctx.cr6.gt) goto loc_827D2A68;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
loc_827D29D4:
	// lfs f0,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827d2a58
	if (ctx.cr6.lt) goto loc_827D2A58;
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// rlwinm. r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827d2a4c
	if (ctx.cr0.eq) goto loc_827D2A4C;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82833108
	ctx.lr = 0x827D2A14;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d2a38
	if (ctx.cr0.eq) goto loc_827D2A38;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827d3798
	ctx.lr = 0x827D2A30;
	sub_827D3798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d2a3c
	goto loc_827D2A3C;
loc_827D2A38:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D2A3C:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827D2A48;
	sub_82833A30(ctx, base);
	// b 0x827d2a5c
	goto loc_827D2A5C;
loc_827D2A4C:
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2a5c
	if (ctx.cr0.eq) goto loc_827D2A5C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D2A58:
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
loc_827D2A5C:
	// lfs f0,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x827d29d4
	if (ctx.cr6.gt) goto loc_827D29D4;
loc_827D2A68:
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

__attribute__((alias("__imp__sub_827D2A88"))) PPC_WEAK_FUNC(sub_827D2A88);
PPC_FUNC_IMPL(__imp__sub_827D2A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D2A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lfs f0,1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f0,1444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2bac
	if (ctx.cr6.eq) goto loc_827D2BAC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d2bac
	if (ctx.cr6.eq) goto loc_827D2BAC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x827d2c68
	ctx.lr = 0x827D2B24;
	sub_827D2C68(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f1,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,1640(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,1632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x827f0f80
	ctx.lr = 0x827D2B44;
	sub_827F0F80(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d2b7c
	if (ctx.cr6.eq) goto loc_827D2B7C;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r10.u32);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// rlwinm. r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r10.u32);
	// bne 0x827d2b7c
	if (!ctx.cr0.eq) goto loc_827D2B7C;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
loc_827D2B7C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d2bac
	if (!ctx.cr6.eq) goto loc_827D2BAC;
	// lbz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1644);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d2bac
	if (ctx.cr0.eq) goto loc_827D2BAC;
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,1680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_827D2BAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2BB8"))) PPC_WEAK_FUNC(sub_827D2BB8);
PPC_FUNC_IMPL(__imp__sub_827D2BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D2BC0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r29,-32215
	ctx.r29.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ld r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// ld r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f31,904(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// std r26,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r26.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x827d2cf8
	ctx.lr = 0x827D2C38;
	sub_827D2CF8(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f0f80
	ctx.lr = 0x827D2C58;
	sub_827F0F80(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2C68"))) PPC_WEAK_FUNC(sub_827D2C68);
PPC_FUNC_IMPL(__imp__sub_827D2C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D2C70;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// lwz r10,1664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lwz r9,1648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// lwz r8,1652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r28,1644(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r27,1668(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r26,1656(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// bl 0x82416348
	ctx.lr = 0x827D2CB4;
	sub_82416348(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// ld r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r7,r28,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0x1;
	// rlwinm r6,r28,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x1;
	// lwz r9,1624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// rlwinm r5,r28,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// lwz r8,1628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x827d2cf8
	ctx.lr = 0x827D2CF0;
	sub_827D2CF8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2CF8"))) PPC_WEAK_FUNC(sub_827D2CF8);
PPC_FUNC_IMPL(__imp__sub_827D2CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827D2D00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827d2d34
	if (ctx.cr6.eq) goto loc_827D2D34;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x827d2d68
	if (!ctx.cr6.eq) goto loc_827D2D68;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x827d2d68
	if (!ctx.cr6.eq) goto loc_827D2D68;
loc_827D2D34:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d2d68
	if (ctx.cr6.eq) goto loc_827D2D68;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d2d68
	if (ctx.cr0.eq) goto loc_827D2D68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965960
	ctx.lr = 0x827D2D68;
	sub_82965960(ctx, base);
loc_827D2D68:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827d2d88
	if (ctx.cr6.eq) goto loc_827D2D88;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_827D2D88:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827d2db4
	if (ctx.cr6.eq) goto loc_827D2DB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827d2dd4
	if (ctx.cr6.eq) goto loc_827D2DD4;
	// lwz r11,656(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 656);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,660(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 660);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 664);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827d2dd4
	goto loc_827D2DD4;
loc_827D2DB4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x827d2dd4
	if (ctx.cr6.eq) goto loc_827D2DD4;
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_827D2DD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2DE0"))) PPC_WEAK_FUNC(sub_827D2DE0);
PPC_FUNC_IMPL(__imp__sub_827D2DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,1628(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1628);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d2e30
	if (ctx.cr6.eq) goto loc_827D2E30;
	// lwz r10,1644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1644);
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827d2e30
	if (ctx.cr0.eq) goto loc_827D2E30;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827d2e48
	if (ctx.cr0.eq) goto loc_827D2E48;
	// lwz r10,1648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,1652(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1652);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D2E30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2E34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827D2E48:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1624(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// lwz r11,304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d2e30
	if (ctx.cr0.eq) goto loc_827D2E30;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82965960
	ctx.lr = 0x827D2E70;
	sub_82965960(ctx, base);
	// b 0x827d2e34
	goto loc_827D2E34;
}

__attribute__((alias("__imp__sub_827D2E78"))) PPC_WEAK_FUNC(sub_827D2E78);
PPC_FUNC_IMPL(__imp__sub_827D2E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1644);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,1644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1644, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2E88"))) PPC_WEAK_FUNC(sub_827D2E88);
PPC_FUNC_IMPL(__imp__sub_827D2E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826a8068
	ctx.lr = 0x827D2EA0;
	sub_826A8068(ctx, base);
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
	ctx.lr = 0x827D2EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d2ec4
	if (!ctx.cr0.eq) goto loc_827D2EC4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D2EC4:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x827eea48
	ctx.lr = 0x827D2ECC;
	sub_827EEA48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2EE0"))) PPC_WEAK_FUNC(sub_827D2EE0);
PPC_FUNC_IMPL(__imp__sub_827D2EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D2EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D2EF8;
	sub_827D4348(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,1448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1448, ctx.r10.u32);
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ble cr6,0x827d2f50
	if (!ctx.cr6.gt) goto loc_827D2F50;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D2F20:
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d2f3c
	if (ctx.cr6.eq) goto loc_827D2F3C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x827dd958
	ctx.lr = 0x827D2F3C;
	sub_827DD958(ctx, base);
loc_827D2F3C:
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d2f20
	if (ctx.cr6.lt) goto loc_827D2F20;
loc_827D2F50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2F58"))) PPC_WEAK_FUNC(sub_827D2F58);
PPC_FUNC_IMPL(__imp__sub_827D2F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D2F78;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D2F90;
	sub_829B9720(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d2fb4
	if (ctx.cr0.eq) goto loc_827D2FB4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D2FD0"))) PPC_WEAK_FUNC(sub_827D2FD0);
PPC_FUNC_IMPL(__imp__sub_827D2FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D2FF0;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3008;
	sub_829B9720(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d302c
	if (ctx.cr0.eq) goto loc_827D302C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D302C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D302C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3048"))) PPC_WEAK_FUNC(sub_827D3048);
PPC_FUNC_IMPL(__imp__sub_827D3048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3050;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3060;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3078;
	sub_829B9720(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827d30dc
	if (ctx.cr0.eq) goto loc_827D30DC;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// bl 0x825d6ef8
	ctx.lr = 0x827D30A8;
	sub_825D6EF8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827da2a8
	ctx.lr = 0x827D30B8;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d30dc
	if (ctx.cr0.eq) goto loc_827D30DC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,1716(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// lwz r3,1616(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D30DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D30DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D30E8"))) PPC_WEAK_FUNC(sub_827D30E8);
PPC_FUNC_IMPL(__imp__sub_827D30E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D30F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82333a80
	ctx.lr = 0x827D310C;
	sub_82333A80(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 + 60;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r28,r3,2
	ctx.r28.u64 = ctx.r3.u32 & 0x3FFFFFFF;
	// clrlwi r5,r5,2
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r6,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r6.u32);
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r4,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r4.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3218"))) PPC_WEAK_FUNC(sub_827D3218);
PPC_FUNC_IMPL(__imp__sub_827D3218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3220;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3230;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3248;
	sub_829B9720(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x827d3288
	if (ctx.cr0.eq) goto loc_827D3288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ld r29,68(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 68);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// ld r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x827da728
	ctx.lr = 0x827D3288;
	sub_827DA728(ctx, base);
loc_827D3288:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3290"))) PPC_WEAK_FUNC(sub_827D3290);
PPC_FUNC_IMPL(__imp__sub_827D3290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827D3298;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82333a80
	ctx.lr = 0x827D32B8;
	sub_82333A80(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r27,r3,2
	ctx.r27.u64 = ctx.r3.u32 & 0x3FFFFFFF;
	// clrlwi r5,r5,2
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r4,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r4.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D33C8"))) PPC_WEAK_FUNC(sub_827D33C8);
PPC_FUNC_IMPL(__imp__sub_827D33C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D33E8;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3400;
	sub_829B9720(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x827d3428
	if (ctx.cr0.eq) goto loc_827D3428;
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r31,64
	ctx.r8.s64 = ctx.r31.s64 + 64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da800
	ctx.lr = 0x827D3428;
	sub_827DA800(ctx, base);
loc_827D3428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3440"))) PPC_WEAK_FUNC(sub_827D3440);
PPC_FUNC_IMPL(__imp__sub_827D3440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827D3448;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,284(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82333a80
	ctx.lr = 0x827D3478;
	sub_82333A80(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,268(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r10,r10,344
	ctx.r10.s64 = ctx.r10.s64 + 344;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r5,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r5.u32);
	// stw r6,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r4,r24,31,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x80000000;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwimi r7,r8,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r26,r26,7
	ctx.r26.u64 = ctx.r26.u32 & 0x1FFFFFF;
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r24,r11,1
	ctx.r24.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r4,r7,29,1,2
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 29) & 0x60000000) | (ctx.r4.u64 & 0xFFFFFFFF9FFFFFFF);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// clrlwi r7,r6,2
	ctx.r7.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// rlwinm r6,r4,0,7,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFE1FFFFFF;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// clrlwi r5,r5,2
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r25,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r25.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D35B8"))) PPC_WEAK_FUNC(sub_827D35B8);
PPC_FUNC_IMPL(__imp__sub_827D35B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D35C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D35D0;
	sub_827D4348(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r27,r31,88
	ctx.r27.s64 = ctx.r31.s64 + 88;
	// rlwinm r30,r10,7,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r31,52
	ctx.r26.s64 = ctx.r31.s64 + 52;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r29,r10,4,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r28,r10,5,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// stb r30,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r30.u8);
	// rlwinm r25,r10,3,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// rlwinm r30,r10,2,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// stb r11,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r11.u8);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x827da8d8
	ctx.lr = 0x827D3640;
	sub_827DA8D8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3648"))) PPC_WEAK_FUNC(sub_827D3648);
PPC_FUNC_IMPL(__imp__sub_827D3648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827D3650;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82333a80
	ctx.lr = 0x827D367C;
	sub_82333A80(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// clrlwi r8,r11,2
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r24,r3,2
	ctx.r24.u64 = ctx.r3.u32 & 0x3FFFFFFF;
	// clrlwi r5,r5,2
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// stw r24,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r24.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3798"))) PPC_WEAK_FUNC(sub_827D3798);
PPC_FUNC_IMPL(__imp__sub_827D3798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D37A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82333a80
	ctx.lr = 0x827D37B8;
	sub_82333A80(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// clrlwi r29,r3,2
	ctx.r29.u64 = ctx.r3.u32 & 0x3FFFFFFF;
	// clrlwi r5,r5,2
	ctx.r5.u64 = ctx.r5.u32 & 0x3FFFFFFF;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// clrlwi r6,r6,1
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// stw r8,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r8.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stw r4,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r4.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D38C0"))) PPC_WEAK_FUNC(sub_827D38C0);
PPC_FUNC_IMPL(__imp__sub_827D38C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D38C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D38D8;
	sub_827D4348(ctx, base);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// li r5,28
	ctx.r5.s64 = 28;
	// beq cr6,0x827d3980
	if (ctx.cr6.eq) goto loc_827D3980;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r29,1616(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// lwz r28,96(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D3910;
	sub_82A4EA80(ctx, base);
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r31,80(r31)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d39bc
	if (!ctx.cr6.gt) goto loc_827D39BC;
	// li r25,0
	ctx.r25.s64 = 0;
loc_827D3928:
	// lwz r11,1444(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1444);
	// lwzx r3,r11,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3968
	if (ctx.cr6.eq) goto loc_827D3968;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x827dcd88
	ctx.lr = 0x827D3968;
	sub_827DCD88(ctx, base);
loc_827D3968:
	// lwz r11,1448(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1448);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d3928
	if (ctx.cr6.lt) goto loc_827D3928;
	// b 0x827d39bc
	goto loc_827D39BC;
loc_827D3980:
	// ld r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D3998;
	sub_82A4EA80(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 80);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x827daca8
	ctx.lr = 0x827D39BC;
	sub_827DACA8(ctx, base);
loc_827D39BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D39C8"))) PPC_WEAK_FUNC(sub_827D39C8);
PPC_FUNC_IMPL(__imp__sub_827D39C8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D39E8;
	sub_827D4348(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x827D3A00;
	sub_82A4EA80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// ld r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// bl 0x827dadf8
	ctx.lr = 0x827D3A24;
	sub_827DADF8(ctx, base);
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

__attribute__((alias("__imp__sub_827D3A40"))) PPC_WEAK_FUNC(sub_827D3A40);
PPC_FUNC_IMPL(__imp__sub_827D3A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3A58;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3A70;
	sub_829B9720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d42e8
	ctx.lr = 0x827D3A78;
	sub_827D42E8(ctx, base);
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
	ctx.lr = 0x827D3A90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d3a9c
	if (!ctx.cr0.eq) goto loc_827D3A9C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D3A9C:
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d3ac4
	if (ctx.cr6.eq) goto loc_827D3AC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d3acc
	goto loc_827D3ACC;
loc_827D3AC4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
loc_827D3ACC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,1620
	ctx.r3.s64 = ctx.r11.s64 + 1620;
	// bl 0x825d6ef8
	ctx.lr = 0x827D3AD8;
	sub_825D6EF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3b28
	if (ctx.cr6.eq) goto loc_827D3B28;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d3b28
	if (ctx.cr6.eq) goto loc_827D3B28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827da2a8
	ctx.lr = 0x827D3AF8;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d3b28
	if (ctx.cr0.eq) goto loc_827D3B28;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d3b28
	if (!ctx.cr6.eq) goto loc_827D3B28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827e2620
	ctx.lr = 0x827D3B28;
	sub_827E2620(ctx, base);
loc_827D3B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3B30"))) PPC_WEAK_FUNC(sub_827D3B30);
PPC_FUNC_IMPL(__imp__sub_827D3B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3B48;
	sub_827D4348(ctx, base);
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r29,12(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3b78
	if (ctx.cr6.eq) goto loc_827D3B78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d3b80
	goto loc_827D3B80;
loc_827D3B78:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
loc_827D3B80:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,1668
	ctx.r3.s64 = ctx.r11.s64 + 1668;
	// bl 0x825d6ef8
	ctx.lr = 0x827D3B8C;
	sub_825D6EF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3bd4
	if (ctx.cr6.eq) goto loc_827D3BD4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827da2a8
	ctx.lr = 0x827D3BA4;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d3bd4
	if (ctx.cr0.eq) goto loc_827D3BD4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d3bd4
	if (!ctx.cr6.eq) goto loc_827D3BD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827e26b8
	ctx.lr = 0x827D3BD4;
	sub_827E26B8(ctx, base);
loc_827D3BD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3BE0"))) PPC_WEAK_FUNC(sub_827D3BE0);
PPC_FUNC_IMPL(__imp__sub_827D3BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3BF8;
	sub_827D4348(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3C10;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d3ce0
	if (ctx.cr0.eq) goto loc_827D3CE0;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3C28;
	sub_829B9720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d4020
	ctx.lr = 0x827D3C30;
	sub_827D4020(ctx, base);
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
	ctx.lr = 0x827D3C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d3c54
	if (!ctx.cr0.eq) goto loc_827D3C54;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D3C54:
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d3c7c
	if (ctx.cr6.eq) goto loc_827D3C7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d3c84
	goto loc_827D3C84;
loc_827D3C7C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
loc_827D3C84:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,1712
	ctx.r3.s64 = ctx.r11.s64 + 1712;
	// bl 0x825d6ef8
	ctx.lr = 0x827D3C90;
	sub_825D6EF8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3ce0
	if (ctx.cr6.eq) goto loc_827D3CE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d3ce0
	if (ctx.cr6.eq) goto loc_827D3CE0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827da2a8
	ctx.lr = 0x827D3CB0;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d3ce0
	if (ctx.cr0.eq) goto loc_827D3CE0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d3ce0
	if (!ctx.cr6.eq) goto loc_827D3CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827e2960
	ctx.lr = 0x827D3CE0;
	sub_827E2960(ctx, base);
loc_827D3CE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3CE8"))) PPC_WEAK_FUNC(sub_827D3CE8);
PPC_FUNC_IMPL(__imp__sub_827D3CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3CF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3D00;
	sub_827D4348(ctx, base);
	// lwz r31,24(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3d30
	if (ctx.cr6.eq) goto loc_827D3D30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d3d38
	goto loc_827D3D38;
loc_827D3D30:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
loc_827D3D38:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,1772
	ctx.r3.s64 = ctx.r11.s64 + 1772;
	// bl 0x825d6ef8
	ctx.lr = 0x827D3D44;
	sub_825D6EF8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827d3d94
	if (ctx.cr6.eq) goto loc_827D3D94;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3d94
	if (ctx.cr6.eq) goto loc_827D3D94;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827da2a8
	ctx.lr = 0x827D3D64;
	sub_827DA2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d3d94
	if (ctx.cr0.eq) goto loc_827D3D94;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d3d94
	if (!ctx.cr6.eq) goto loc_827D3D94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827e2a30
	ctx.lr = 0x827D3D94;
	sub_827E2A30(ctx, base);
loc_827D3D94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3DA0"))) PPC_WEAK_FUNC(sub_827D3DA0);
PPC_FUNC_IMPL(__imp__sub_827D3DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D3DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827d4348
	ctx.lr = 0x827D3DB8;
	sub_827D4348(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D3DD0;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d3e1c
	if (ctx.cr0.eq) goto loc_827D3E1C;
	// bl 0x827d41a8
	ctx.lr = 0x827D3DDC;
	sub_827D41A8(ctx, base);
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
	ctx.lr = 0x827D3DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne 0x827d3e04
	if (!ctx.cr0.eq) goto loc_827D3E04;
	// li r5,0
	ctx.r5.s64 = 0;
loc_827D3E04:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3E28"))) PPC_WEAK_FUNC(sub_827D3E28);
PPC_FUNC_IMPL(__imp__sub_827D3E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827d4348
	ctx.lr = 0x827D3E44;
	sub_827D4348(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3E5C;
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

__attribute__((alias("__imp__sub_827D3E70"))) PPC_WEAK_FUNC(sub_827D3E70);
PPC_FUNC_IMPL(__imp__sub_827D3E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826a8068
	ctx.lr = 0x827D3E88;
	sub_826A8068(ctx, base);
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
	ctx.lr = 0x827D3EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827d3eb0
	if (!ctx.cr0.eq) goto loc_827D3EB0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D3EB0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D3EC0;
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

__attribute__((alias("__imp__sub_827D3ED8"))) PPC_WEAK_FUNC(sub_827D3ED8);
PPC_FUNC_IMPL(__imp__sub_827D3ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x827D3EF8;
	sub_826A8068(ctx, base);
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
	ctx.lr = 0x827D3F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827d3f20
	if (!ctx.cr0.eq) goto loc_827D3F20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D3F20:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x827dd808
	ctx.lr = 0x827D3F28;
	sub_827DD808(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3F40"))) PPC_WEAK_FUNC(sub_827D3F40);
PPC_FUNC_IMPL(__imp__sub_827D3F40) {
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
	// li r3,1792
	ctx.r3.s64 = 1792;
	// bl 0x82833108
	ctx.lr = 0x827D3F54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d3f64
	if (ctx.cr0.eq) goto loc_827D3F64;
	// bl 0x827f60e0
	ctx.lr = 0x827D3F60;
	sub_827F60E0(ctx, base);
	// b 0x827d3f68
	goto loc_827D3F68;
loc_827D3F64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D3F68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3F78"))) PPC_WEAK_FUNC(sub_827D3F78);
PPC_FUNC_IMPL(__imp__sub_827D3F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d3fb8
	if (!ctx.cr0.eq) goto loc_827D3FB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21036, ctx.r11.u32);
	// addi r3,r9,-1340
	ctx.r3.s64 = ctx.r9.s64 + -1340;
	// bl 0x82816528
	ctx.lr = 0x827D3FB0;
	sub_82816528(ctx, base);
	// stw r3,21032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21032, ctx.r3.u32);
	// b 0x827d3fbc
	goto loc_827D3FBC;
loc_827D3FB8:
	// lwz r3,21032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21032);
loc_827D3FBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3FD0"))) PPC_WEAK_FUNC(sub_827D3FD0);
PPC_FUNC_IMPL(__imp__sub_827D3FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4020
	ctx.lr = 0x827D3FF0;
	sub_827D4020(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4004;
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

__attribute__((alias("__imp__sub_827D4020"))) PPC_WEAK_FUNC(sub_827D4020);
PPC_FUNC_IMPL(__imp__sub_827D4020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14268
	ctx.r31.s64 = ctx.r11.s64 + 14268;
	// lwz r11,14264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14264);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4068
	if (!ctx.cr0.eq) goto loc_827D4068;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1252
	ctx.r9.s64 = ctx.r9.s64 + -1252;
	// stw r11,14264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14264, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27272
	ctx.r3.s64 = ctx.r11.s64 + -27272;
	// bl 0x82a4c758
	ctx.lr = 0x827D4068;
	sub_82A4C758(ctx, base);
loc_827D4068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4080"))) PPC_WEAK_FUNC(sub_827D4080);
PPC_FUNC_IMPL(__imp__sub_827D4080) {
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
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x827D4098;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d40e8
	if (ctx.cr0.eq) goto loc_827D40E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5a60
	ctx.lr = 0x827D40A8;
	sub_828B5A60(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r11,r11,10088
	ctx.r11.s64 = ctx.r11.s64 + 10088;
	// addi r10,r10,11144
	ctx.r10.s64 = ctx.r10.s64 + 11144;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stfs f0,1712(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1712, temp.u32);
	// stfs f0,1716(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1716, temp.u32);
	// stfs f0,1720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1720, temp.u32);
	// b 0x827d40ec
	goto loc_827D40EC;
loc_827D40E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D40EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4100"))) PPC_WEAK_FUNC(sub_827D4100);
PPC_FUNC_IMPL(__imp__sub_827D4100) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21028);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4140
	if (!ctx.cr0.eq) goto loc_827D4140;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21028, ctx.r11.u32);
	// addi r3,r9,-1308
	ctx.r3.s64 = ctx.r9.s64 + -1308;
	// bl 0x82816528
	ctx.lr = 0x827D4138;
	sub_82816528(ctx, base);
	// stw r3,21024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21024, ctx.r3.u32);
	// b 0x827d4144
	goto loc_827D4144;
loc_827D4140:
	// lwz r3,21024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21024);
loc_827D4144:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4158"))) PPC_WEAK_FUNC(sub_827D4158);
PPC_FUNC_IMPL(__imp__sub_827D4158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d41a8
	ctx.lr = 0x827D4178;
	sub_827D41A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D418C;
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

__attribute__((alias("__imp__sub_827D41A8"))) PPC_WEAK_FUNC(sub_827D41A8);
PPC_FUNC_IMPL(__imp__sub_827D41A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14276
	ctx.r31.s64 = ctx.r11.s64 + 14276;
	// lwz r11,14272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14272);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d41f0
	if (!ctx.cr0.eq) goto loc_827D41F0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1232
	ctx.r9.s64 = ctx.r9.s64 + -1232;
	// stw r11,14272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14272, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27296
	ctx.r3.s64 = ctx.r11.s64 + -27296;
	// bl 0x82a4c758
	ctx.lr = 0x827D41F0;
	sub_82A4C758(ctx, base);
loc_827D41F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4208"))) PPC_WEAK_FUNC(sub_827D4208);
PPC_FUNC_IMPL(__imp__sub_827D4208) {
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
	ctx.lr = 0x827D421C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d422c
	if (ctx.cr0.eq) goto loc_827D422C;
	// bl 0x827f5a40
	ctx.lr = 0x827D4228;
	sub_827F5A40(ctx, base);
	// b 0x827d4230
	goto loc_827D4230;
loc_827D422C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4230:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4240"))) PPC_WEAK_FUNC(sub_827D4240);
PPC_FUNC_IMPL(__imp__sub_827D4240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4280
	if (!ctx.cr0.eq) goto loc_827D4280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21020, ctx.r11.u32);
	// addi r3,r9,-1276
	ctx.r3.s64 = ctx.r9.s64 + -1276;
	// bl 0x82816528
	ctx.lr = 0x827D4278;
	sub_82816528(ctx, base);
	// stw r3,21016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21016, ctx.r3.u32);
	// b 0x827d4284
	goto loc_827D4284;
loc_827D4280:
	// lwz r3,21016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21016);
loc_827D4284:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4298"))) PPC_WEAK_FUNC(sub_827D4298);
PPC_FUNC_IMPL(__imp__sub_827D4298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d42e8
	ctx.lr = 0x827D42B8;
	sub_827D42E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D42CC;
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

__attribute__((alias("__imp__sub_827D42E8"))) PPC_WEAK_FUNC(sub_827D42E8);
PPC_FUNC_IMPL(__imp__sub_827D42E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14260
	ctx.r31.s64 = ctx.r11.s64 + 14260;
	// lwz r11,14256(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14256);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4330
	if (!ctx.cr0.eq) goto loc_827D4330;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-1212
	ctx.r9.s64 = ctx.r9.s64 + -1212;
	// stw r11,14256(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14256, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27320
	ctx.r3.s64 = ctx.r11.s64 + -27320;
	// bl 0x82a4c758
	ctx.lr = 0x827D4330;
	sub_82A4C758(ctx, base);
loc_827D4330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4348"))) PPC_WEAK_FUNC(sub_827D4348);
PPC_FUNC_IMPL(__imp__sub_827D4348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x826993d0
	ctx.lr = 0x827D4360;
	sub_826993D0(ctx, base);
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
	ctx.lr = 0x827D4378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827d4388
	if (!ctx.cr0.eq) goto loc_827D4388;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D43A0"))) PPC_WEAK_FUNC(sub_827D43A0);
PPC_FUNC_IMPL(__imp__sub_827D43A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-520
	ctx.r3.s64 = ctx.r11.s64 + -520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D43B0"))) PPC_WEAK_FUNC(sub_827D43B0);
PPC_FUNC_IMPL(__imp__sub_827D43B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4400
	ctx.lr = 0x827D43D0;
	sub_827D4400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d43e4
	if (ctx.cr6.eq) goto loc_827D43E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D43E4;
	sub_82333B08(ctx, base);
loc_827D43E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4400"))) PPC_WEAK_FUNC(sub_827D4400);
PPC_FUNC_IMPL(__imp__sub_827D4400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14200
	ctx.r31.s64 = ctx.r11.s64 + 14200;
	// lwz r11,14204(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14204);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4448
	if (!ctx.cr0.eq) goto loc_827D4448;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1464
	ctx.r9.s64 = ctx.r9.s64 + 1464;
	// stw r11,14204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14204, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27248
	ctx.r3.s64 = ctx.r11.s64 + -27248;
	// bl 0x82a4c758
	ctx.lr = 0x827D4448;
	sub_82A4C758(ctx, base);
loc_827D4448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4460"))) PPC_WEAK_FUNC(sub_827D4460);
PPC_FUNC_IMPL(__imp__sub_827D4460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21012(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21012);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d44a0
	if (!ctx.cr0.eq) goto loc_827D44A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21012, ctx.r11.u32);
	// addi r3,r9,-520
	ctx.r3.s64 = ctx.r9.s64 + -520;
	// bl 0x82816528
	ctx.lr = 0x827D4498;
	sub_82816528(ctx, base);
	// stw r3,21008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21008, ctx.r3.u32);
	// b 0x827d44a4
	goto loc_827D44A4;
loc_827D44A0:
	// lwz r3,21008(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21008);
loc_827D44A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D44B8"))) PPC_WEAK_FUNC(sub_827D44B8);
PPC_FUNC_IMPL(__imp__sub_827D44B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4400
	ctx.lr = 0x827D44D8;
	sub_827D4400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D44EC;
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

__attribute__((alias("__imp__sub_827D4508"))) PPC_WEAK_FUNC(sub_827D4508);
PPC_FUNC_IMPL(__imp__sub_827D4508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d4540
	if (ctx.cr6.eq) goto loc_827D4540;
	// bl 0x827d4400
	ctx.lr = 0x827D4530;
	sub_827D4400(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d4540
	if (!ctx.cr6.eq) goto loc_827D4540;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d454c
	goto loc_827D454C;
loc_827D4540:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D454C;
	sub_82333C70(ctx, base);
loc_827D454C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4568"))) PPC_WEAK_FUNC(sub_827D4568);
PPC_FUNC_IMPL(__imp__sub_827D4568) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d4400
	sub_827D4400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4570"))) PPC_WEAK_FUNC(sub_827D4570);
PPC_FUNC_IMPL(__imp__sub_827D4570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D458C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d45ec
	if (ctx.cr0.eq) goto loc_827D45EC;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1384
	ctx.r9.s64 = ctx.r9.s64 + 1384;
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
	// b 0x827d45f0
	goto loc_827D45F0;
loc_827D45EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D45F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4608"))) PPC_WEAK_FUNC(sub_827D4608);
PPC_FUNC_IMPL(__imp__sub_827D4608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-552
	ctx.r3.s64 = ctx.r11.s64 + -552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4618"))) PPC_WEAK_FUNC(sub_827D4618);
PPC_FUNC_IMPL(__imp__sub_827D4618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4668
	ctx.lr = 0x827D4638;
	sub_827D4668(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d464c
	if (ctx.cr6.eq) goto loc_827D464C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D464C;
	sub_82333B08(ctx, base);
loc_827D464C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4668"))) PPC_WEAK_FUNC(sub_827D4668);
PPC_FUNC_IMPL(__imp__sub_827D4668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14156
	ctx.r31.s64 = ctx.r11.s64 + 14156;
	// lwz r11,14140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14140);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d46b0
	if (!ctx.cr0.eq) goto loc_827D46B0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1360
	ctx.r9.s64 = ctx.r9.s64 + 1360;
	// stw r11,14140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14140, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27224
	ctx.r3.s64 = ctx.r11.s64 + -27224;
	// bl 0x82a4c758
	ctx.lr = 0x827D46B0;
	sub_82A4C758(ctx, base);
loc_827D46B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D46C8"))) PPC_WEAK_FUNC(sub_827D46C8);
PPC_FUNC_IMPL(__imp__sub_827D46C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,21004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21004);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4708
	if (!ctx.cr0.eq) goto loc_827D4708;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,21004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21004, ctx.r11.u32);
	// addi r3,r9,-552
	ctx.r3.s64 = ctx.r9.s64 + -552;
	// bl 0x82816528
	ctx.lr = 0x827D4700;
	sub_82816528(ctx, base);
	// stw r3,21000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21000, ctx.r3.u32);
	// b 0x827d470c
	goto loc_827D470C;
loc_827D4708:
	// lwz r3,21000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21000);
loc_827D470C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4720"))) PPC_WEAK_FUNC(sub_827D4720);
PPC_FUNC_IMPL(__imp__sub_827D4720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4668
	ctx.lr = 0x827D4740;
	sub_827D4668(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4754;
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

__attribute__((alias("__imp__sub_827D4770"))) PPC_WEAK_FUNC(sub_827D4770);
PPC_FUNC_IMPL(__imp__sub_827D4770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d47a8
	if (ctx.cr6.eq) goto loc_827D47A8;
	// bl 0x827d4668
	ctx.lr = 0x827D4798;
	sub_827D4668(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d47a8
	if (!ctx.cr6.eq) goto loc_827D47A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d47b4
	goto loc_827D47B4;
loc_827D47A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D47B4;
	sub_82333C70(ctx, base);
loc_827D47B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D47D0"))) PPC_WEAK_FUNC(sub_827D47D0);
PPC_FUNC_IMPL(__imp__sub_827D47D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d4668
	sub_827D4668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D47D8"))) PPC_WEAK_FUNC(sub_827D47D8);
PPC_FUNC_IMPL(__imp__sub_827D47D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D47F4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d484c
	if (ctx.cr0.eq) goto loc_827D484C;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1280
	ctx.r9.s64 = ctx.r9.s64 + 1280;
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
	// b 0x827d4850
	goto loc_827D4850;
loc_827D484C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4850:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4868"))) PPC_WEAK_FUNC(sub_827D4868);
PPC_FUNC_IMPL(__imp__sub_827D4868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-600
	ctx.r3.s64 = ctx.r11.s64 + -600;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4878"))) PPC_WEAK_FUNC(sub_827D4878);
PPC_FUNC_IMPL(__imp__sub_827D4878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d48c8
	ctx.lr = 0x827D4898;
	sub_827D48C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d48ac
	if (ctx.cr6.eq) goto loc_827D48AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D48AC;
	sub_82333B08(ctx, base);
loc_827D48AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D48C8"))) PPC_WEAK_FUNC(sub_827D48C8);
PPC_FUNC_IMPL(__imp__sub_827D48C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14128
	ctx.r31.s64 = ctx.r11.s64 + 14128;
	// lwz r11,14244(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14244);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4910
	if (!ctx.cr0.eq) goto loc_827D4910;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1256
	ctx.r9.s64 = ctx.r9.s64 + 1256;
	// stw r11,14244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14244, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27200
	ctx.r3.s64 = ctx.r11.s64 + -27200;
	// bl 0x82a4c758
	ctx.lr = 0x827D4910;
	sub_82A4C758(ctx, base);
loc_827D4910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4928"))) PPC_WEAK_FUNC(sub_827D4928);
PPC_FUNC_IMPL(__imp__sub_827D4928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20996(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20996);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4968
	if (!ctx.cr0.eq) goto loc_827D4968;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20996(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20996, ctx.r11.u32);
	// addi r3,r9,-600
	ctx.r3.s64 = ctx.r9.s64 + -600;
	// bl 0x82816528
	ctx.lr = 0x827D4960;
	sub_82816528(ctx, base);
	// stw r3,20992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20992, ctx.r3.u32);
	// b 0x827d496c
	goto loc_827D496C;
loc_827D4968:
	// lwz r3,20992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20992);
loc_827D496C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4980"))) PPC_WEAK_FUNC(sub_827D4980);
PPC_FUNC_IMPL(__imp__sub_827D4980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d48c8
	ctx.lr = 0x827D49A0;
	sub_827D48C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D49B4;
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

__attribute__((alias("__imp__sub_827D49D0"))) PPC_WEAK_FUNC(sub_827D49D0);
PPC_FUNC_IMPL(__imp__sub_827D49D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d4a08
	if (ctx.cr6.eq) goto loc_827D4A08;
	// bl 0x827d48c8
	ctx.lr = 0x827D49F8;
	sub_827D48C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d4a08
	if (!ctx.cr6.eq) goto loc_827D4A08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d4a14
	goto loc_827D4A14;
loc_827D4A08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D4A14;
	sub_82333C70(ctx, base);
loc_827D4A14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4A30"))) PPC_WEAK_FUNC(sub_827D4A30);
PPC_FUNC_IMPL(__imp__sub_827D4A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d48c8
	sub_827D48C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4A38"))) PPC_WEAK_FUNC(sub_827D4A38);
PPC_FUNC_IMPL(__imp__sub_827D4A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D4A54;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d4ab4
	if (ctx.cr0.eq) goto loc_827D4AB4;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1176
	ctx.r9.s64 = ctx.r9.s64 + 1176;
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
	// b 0x827d4ab8
	goto loc_827D4AB8;
loc_827D4AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4AD0"))) PPC_WEAK_FUNC(sub_827D4AD0);
PPC_FUNC_IMPL(__imp__sub_827D4AD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-648
	ctx.r3.s64 = ctx.r11.s64 + -648;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4AE0"))) PPC_WEAK_FUNC(sub_827D4AE0);
PPC_FUNC_IMPL(__imp__sub_827D4AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4b30
	ctx.lr = 0x827D4B00;
	sub_827D4B30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d4b14
	if (ctx.cr6.eq) goto loc_827D4B14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D4B14;
	sub_82333B08(ctx, base);
loc_827D4B14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4B30"))) PPC_WEAK_FUNC(sub_827D4B30);
PPC_FUNC_IMPL(__imp__sub_827D4B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14236
	ctx.r31.s64 = ctx.r11.s64 + 14236;
	// lwz r11,14120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14120);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4b78
	if (!ctx.cr0.eq) goto loc_827D4B78;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1152
	ctx.r9.s64 = ctx.r9.s64 + 1152;
	// stw r11,14120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14120, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27176
	ctx.r3.s64 = ctx.r11.s64 + -27176;
	// bl 0x82a4c758
	ctx.lr = 0x827D4B78;
	sub_82A4C758(ctx, base);
loc_827D4B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4B90"))) PPC_WEAK_FUNC(sub_827D4B90);
PPC_FUNC_IMPL(__imp__sub_827D4B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20988(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20988);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4bd0
	if (!ctx.cr0.eq) goto loc_827D4BD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20988(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20988, ctx.r11.u32);
	// addi r3,r9,-648
	ctx.r3.s64 = ctx.r9.s64 + -648;
	// bl 0x82816528
	ctx.lr = 0x827D4BC8;
	sub_82816528(ctx, base);
	// stw r3,20984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20984, ctx.r3.u32);
	// b 0x827d4bd4
	goto loc_827D4BD4;
loc_827D4BD0:
	// lwz r3,20984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20984);
loc_827D4BD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4BE8"))) PPC_WEAK_FUNC(sub_827D4BE8);
PPC_FUNC_IMPL(__imp__sub_827D4BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4b30
	ctx.lr = 0x827D4C08;
	sub_827D4B30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4C1C;
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

__attribute__((alias("__imp__sub_827D4C38"))) PPC_WEAK_FUNC(sub_827D4C38);
PPC_FUNC_IMPL(__imp__sub_827D4C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d4c70
	if (ctx.cr6.eq) goto loc_827D4C70;
	// bl 0x827d4b30
	ctx.lr = 0x827D4C60;
	sub_827D4B30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d4c70
	if (!ctx.cr6.eq) goto loc_827D4C70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d4c7c
	goto loc_827D4C7C;
loc_827D4C70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D4C7C;
	sub_82333C70(ctx, base);
loc_827D4C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4C98"))) PPC_WEAK_FUNC(sub_827D4C98);
PPC_FUNC_IMPL(__imp__sub_827D4C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d4b30
	sub_827D4B30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4CA0"))) PPC_WEAK_FUNC(sub_827D4CA0);
PPC_FUNC_IMPL(__imp__sub_827D4CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D4CBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d4d1c
	if (ctx.cr0.eq) goto loc_827D4D1C;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,1072
	ctx.r9.s64 = ctx.r9.s64 + 1072;
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
	// b 0x827d4d20
	goto loc_827D4D20;
loc_827D4D1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4D20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4D38"))) PPC_WEAK_FUNC(sub_827D4D38);
PPC_FUNC_IMPL(__imp__sub_827D4D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-696
	ctx.r3.s64 = ctx.r11.s64 + -696;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4D48"))) PPC_WEAK_FUNC(sub_827D4D48);
PPC_FUNC_IMPL(__imp__sub_827D4D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4d98
	ctx.lr = 0x827D4D68;
	sub_827D4D98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d4d7c
	if (ctx.cr6.eq) goto loc_827D4D7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D4D7C;
	sub_82333B08(ctx, base);
loc_827D4D7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4D98"))) PPC_WEAK_FUNC(sub_827D4D98);
PPC_FUNC_IMPL(__imp__sub_827D4D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14148
	ctx.r31.s64 = ctx.r11.s64 + 14148;
	// lwz r11,14188(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4de0
	if (!ctx.cr0.eq) goto loc_827D4DE0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,1048
	ctx.r9.s64 = ctx.r9.s64 + 1048;
	// stw r11,14188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14188, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27152
	ctx.r3.s64 = ctx.r11.s64 + -27152;
	// bl 0x82a4c758
	ctx.lr = 0x827D4DE0;
	sub_82A4C758(ctx, base);
loc_827D4DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4DF8"))) PPC_WEAK_FUNC(sub_827D4DF8);
PPC_FUNC_IMPL(__imp__sub_827D4DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20980(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20980);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d4e38
	if (!ctx.cr0.eq) goto loc_827D4E38;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20980(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20980, ctx.r11.u32);
	// addi r3,r9,-696
	ctx.r3.s64 = ctx.r9.s64 + -696;
	// bl 0x82816528
	ctx.lr = 0x827D4E30;
	sub_82816528(ctx, base);
	// stw r3,20976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20976, ctx.r3.u32);
	// b 0x827d4e3c
	goto loc_827D4E3C;
loc_827D4E38:
	// lwz r3,20976(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20976);
loc_827D4E3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4E50"))) PPC_WEAK_FUNC(sub_827D4E50);
PPC_FUNC_IMPL(__imp__sub_827D4E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d4d98
	ctx.lr = 0x827D4E70;
	sub_827D4D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4E84;
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

__attribute__((alias("__imp__sub_827D4EA0"))) PPC_WEAK_FUNC(sub_827D4EA0);
PPC_FUNC_IMPL(__imp__sub_827D4EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d4ed8
	if (ctx.cr6.eq) goto loc_827D4ED8;
	// bl 0x827d4d98
	ctx.lr = 0x827D4EC8;
	sub_827D4D98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d4ed8
	if (!ctx.cr6.eq) goto loc_827D4ED8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d4ee4
	goto loc_827D4EE4;
loc_827D4ED8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D4EE4;
	sub_82333C70(ctx, base);
loc_827D4EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4F00"))) PPC_WEAK_FUNC(sub_827D4F00);
PPC_FUNC_IMPL(__imp__sub_827D4F00) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d4d98
	sub_827D4D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4F08"))) PPC_WEAK_FUNC(sub_827D4F08);
PPC_FUNC_IMPL(__imp__sub_827D4F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D4F24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d4f84
	if (ctx.cr0.eq) goto loc_827D4F84;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,968
	ctx.r9.s64 = ctx.r9.s64 + 968;
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
	// b 0x827d4f88
	goto loc_827D4F88;
loc_827D4F84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4F88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4FA0"))) PPC_WEAK_FUNC(sub_827D4FA0);
PPC_FUNC_IMPL(__imp__sub_827D4FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-744
	ctx.r3.s64 = ctx.r11.s64 + -744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4FB0"))) PPC_WEAK_FUNC(sub_827D4FB0);
PPC_FUNC_IMPL(__imp__sub_827D4FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5000
	ctx.lr = 0x827D4FD0;
	sub_827D5000(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d4fe4
	if (ctx.cr6.eq) goto loc_827D4FE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D4FE4;
	sub_82333B08(ctx, base);
loc_827D4FE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5000"))) PPC_WEAK_FUNC(sub_827D5000);
PPC_FUNC_IMPL(__imp__sub_827D5000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14208
	ctx.r31.s64 = ctx.r11.s64 + 14208;
	// lwz r11,14228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14228);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5048
	if (!ctx.cr0.eq) goto loc_827D5048;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,944
	ctx.r9.s64 = ctx.r9.s64 + 944;
	// stw r11,14228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14228, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27128
	ctx.r3.s64 = ctx.r11.s64 + -27128;
	// bl 0x82a4c758
	ctx.lr = 0x827D5048;
	sub_82A4C758(ctx, base);
loc_827D5048:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5060"))) PPC_WEAK_FUNC(sub_827D5060);
PPC_FUNC_IMPL(__imp__sub_827D5060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20972(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20972);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d50a0
	if (!ctx.cr0.eq) goto loc_827D50A0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20972, ctx.r11.u32);
	// addi r3,r9,-744
	ctx.r3.s64 = ctx.r9.s64 + -744;
	// bl 0x82816528
	ctx.lr = 0x827D5098;
	sub_82816528(ctx, base);
	// stw r3,20968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20968, ctx.r3.u32);
	// b 0x827d50a4
	goto loc_827D50A4;
loc_827D50A0:
	// lwz r3,20968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20968);
loc_827D50A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D50B8"))) PPC_WEAK_FUNC(sub_827D50B8);
PPC_FUNC_IMPL(__imp__sub_827D50B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5000
	ctx.lr = 0x827D50D8;
	sub_827D5000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D50EC;
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

__attribute__((alias("__imp__sub_827D5108"))) PPC_WEAK_FUNC(sub_827D5108);
PPC_FUNC_IMPL(__imp__sub_827D5108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d5140
	if (ctx.cr6.eq) goto loc_827D5140;
	// bl 0x827d5000
	ctx.lr = 0x827D5130;
	sub_827D5000(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d5140
	if (!ctx.cr6.eq) goto loc_827D5140;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d514c
	goto loc_827D514C;
loc_827D5140:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D514C;
	sub_82333C70(ctx, base);
loc_827D514C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5168"))) PPC_WEAK_FUNC(sub_827D5168);
PPC_FUNC_IMPL(__imp__sub_827D5168) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d5000
	sub_827D5000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5170"))) PPC_WEAK_FUNC(sub_827D5170);
PPC_FUNC_IMPL(__imp__sub_827D5170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D518C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d51ec
	if (ctx.cr0.eq) goto loc_827D51EC;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,864
	ctx.r9.s64 = ctx.r9.s64 + 864;
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
	// b 0x827d51f0
	goto loc_827D51F0;
loc_827D51EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D51F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5208"))) PPC_WEAK_FUNC(sub_827D5208);
PPC_FUNC_IMPL(__imp__sub_827D5208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-788
	ctx.r3.s64 = ctx.r11.s64 + -788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5218"))) PPC_WEAK_FUNC(sub_827D5218);
PPC_FUNC_IMPL(__imp__sub_827D5218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5268
	ctx.lr = 0x827D5238;
	sub_827D5268(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d524c
	if (ctx.cr6.eq) goto loc_827D524C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D524C;
	sub_82333B08(ctx, base);
loc_827D524C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5268"))) PPC_WEAK_FUNC(sub_827D5268);
PPC_FUNC_IMPL(__imp__sub_827D5268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14184
	ctx.r31.s64 = ctx.r11.s64 + 14184;
	// lwz r11,14132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14132);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d52b0
	if (!ctx.cr0.eq) goto loc_827D52B0;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,840
	ctx.r9.s64 = ctx.r9.s64 + 840;
	// stw r11,14132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14132, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27104
	ctx.r3.s64 = ctx.r11.s64 + -27104;
	// bl 0x82a4c758
	ctx.lr = 0x827D52B0;
	sub_82A4C758(ctx, base);
loc_827D52B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D52C8"))) PPC_WEAK_FUNC(sub_827D52C8);
PPC_FUNC_IMPL(__imp__sub_827D52C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20964);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5308
	if (!ctx.cr0.eq) goto loc_827D5308;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20964, ctx.r11.u32);
	// addi r3,r9,-788
	ctx.r3.s64 = ctx.r9.s64 + -788;
	// bl 0x82816528
	ctx.lr = 0x827D5300;
	sub_82816528(ctx, base);
	// stw r3,20960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20960, ctx.r3.u32);
	// b 0x827d530c
	goto loc_827D530C;
loc_827D5308:
	// lwz r3,20960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20960);
loc_827D530C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5320"))) PPC_WEAK_FUNC(sub_827D5320);
PPC_FUNC_IMPL(__imp__sub_827D5320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5268
	ctx.lr = 0x827D5340;
	sub_827D5268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D5354;
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

__attribute__((alias("__imp__sub_827D5370"))) PPC_WEAK_FUNC(sub_827D5370);
PPC_FUNC_IMPL(__imp__sub_827D5370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d53a8
	if (ctx.cr6.eq) goto loc_827D53A8;
	// bl 0x827d5268
	ctx.lr = 0x827D5398;
	sub_827D5268(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d53a8
	if (!ctx.cr6.eq) goto loc_827D53A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d53b4
	goto loc_827D53B4;
loc_827D53A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D53B4;
	sub_82333C70(ctx, base);
loc_827D53B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D53D0"))) PPC_WEAK_FUNC(sub_827D53D0);
PPC_FUNC_IMPL(__imp__sub_827D53D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d5268
	sub_827D5268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D53D8"))) PPC_WEAK_FUNC(sub_827D53D8);
PPC_FUNC_IMPL(__imp__sub_827D53D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D53F4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d5454
	if (ctx.cr0.eq) goto loc_827D5454;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,760
	ctx.r9.s64 = ctx.r9.s64 + 760;
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
	// b 0x827d5458
	goto loc_827D5458;
loc_827D5454:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D5458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5470"))) PPC_WEAK_FUNC(sub_827D5470);
PPC_FUNC_IMPL(__imp__sub_827D5470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-832
	ctx.r3.s64 = ctx.r11.s64 + -832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5480"))) PPC_WEAK_FUNC(sub_827D5480);
PPC_FUNC_IMPL(__imp__sub_827D5480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d54d0
	ctx.lr = 0x827D54A0;
	sub_827D54D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d54b4
	if (ctx.cr6.eq) goto loc_827D54B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D54B4;
	sub_82333B08(ctx, base);
loc_827D54B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D54D0"))) PPC_WEAK_FUNC(sub_827D54D0);
PPC_FUNC_IMPL(__imp__sub_827D54D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14240
	ctx.r31.s64 = ctx.r11.s64 + 14240;
	// lwz r11,14104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5518
	if (!ctx.cr0.eq) goto loc_827D5518;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,736
	ctx.r9.s64 = ctx.r9.s64 + 736;
	// stw r11,14104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14104, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27080
	ctx.r3.s64 = ctx.r11.s64 + -27080;
	// bl 0x82a4c758
	ctx.lr = 0x827D5518;
	sub_82A4C758(ctx, base);
loc_827D5518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5530"))) PPC_WEAK_FUNC(sub_827D5530);
PPC_FUNC_IMPL(__imp__sub_827D5530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20956);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5570
	if (!ctx.cr0.eq) goto loc_827D5570;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20956(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20956, ctx.r11.u32);
	// addi r3,r9,-832
	ctx.r3.s64 = ctx.r9.s64 + -832;
	// bl 0x82816528
	ctx.lr = 0x827D5568;
	sub_82816528(ctx, base);
	// stw r3,20952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20952, ctx.r3.u32);
	// b 0x827d5574
	goto loc_827D5574;
loc_827D5570:
	// lwz r3,20952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20952);
loc_827D5574:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5588"))) PPC_WEAK_FUNC(sub_827D5588);
PPC_FUNC_IMPL(__imp__sub_827D5588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d54d0
	ctx.lr = 0x827D55A8;
	sub_827D54D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D55BC;
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

__attribute__((alias("__imp__sub_827D55D8"))) PPC_WEAK_FUNC(sub_827D55D8);
PPC_FUNC_IMPL(__imp__sub_827D55D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d5610
	if (ctx.cr6.eq) goto loc_827D5610;
	// bl 0x827d54d0
	ctx.lr = 0x827D5600;
	sub_827D54D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d5610
	if (!ctx.cr6.eq) goto loc_827D5610;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d561c
	goto loc_827D561C;
loc_827D5610:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D561C;
	sub_82333C70(ctx, base);
loc_827D561C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5638"))) PPC_WEAK_FUNC(sub_827D5638);
PPC_FUNC_IMPL(__imp__sub_827D5638) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d54d0
	sub_827D54D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5640"))) PPC_WEAK_FUNC(sub_827D5640);
PPC_FUNC_IMPL(__imp__sub_827D5640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D565C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d56bc
	if (ctx.cr0.eq) goto loc_827D56BC;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,656
	ctx.r9.s64 = ctx.r9.s64 + 656;
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
	// b 0x827d56c0
	goto loc_827D56C0;
loc_827D56BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D56C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D56D8"))) PPC_WEAK_FUNC(sub_827D56D8);
PPC_FUNC_IMPL(__imp__sub_827D56D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-860
	ctx.r3.s64 = ctx.r11.s64 + -860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D56E8"))) PPC_WEAK_FUNC(sub_827D56E8);
PPC_FUNC_IMPL(__imp__sub_827D56E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5738
	ctx.lr = 0x827D5708;
	sub_827D5738(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d571c
	if (ctx.cr6.eq) goto loc_827D571C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D571C;
	sub_82333B08(ctx, base);
loc_827D571C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5738"))) PPC_WEAK_FUNC(sub_827D5738);
PPC_FUNC_IMPL(__imp__sub_827D5738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14116
	ctx.r31.s64 = ctx.r11.s64 + 14116;
	// lwz r11,14124(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14124);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5780
	if (!ctx.cr0.eq) goto loc_827D5780;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,632
	ctx.r9.s64 = ctx.r9.s64 + 632;
	// stw r11,14124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14124, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27056
	ctx.r3.s64 = ctx.r11.s64 + -27056;
	// bl 0x82a4c758
	ctx.lr = 0x827D5780;
	sub_82A4C758(ctx, base);
loc_827D5780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5798"))) PPC_WEAK_FUNC(sub_827D5798);
PPC_FUNC_IMPL(__imp__sub_827D5798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20948);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d57d8
	if (!ctx.cr0.eq) goto loc_827D57D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20948(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20948, ctx.r11.u32);
	// addi r3,r9,-860
	ctx.r3.s64 = ctx.r9.s64 + -860;
	// bl 0x82816528
	ctx.lr = 0x827D57D0;
	sub_82816528(ctx, base);
	// stw r3,20944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20944, ctx.r3.u32);
	// b 0x827d57dc
	goto loc_827D57DC;
loc_827D57D8:
	// lwz r3,20944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20944);
loc_827D57DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D57F0"))) PPC_WEAK_FUNC(sub_827D57F0);
PPC_FUNC_IMPL(__imp__sub_827D57F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5738
	ctx.lr = 0x827D5810;
	sub_827D5738(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D5824;
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

__attribute__((alias("__imp__sub_827D5840"))) PPC_WEAK_FUNC(sub_827D5840);
PPC_FUNC_IMPL(__imp__sub_827D5840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d5878
	if (ctx.cr6.eq) goto loc_827D5878;
	// bl 0x827d5738
	ctx.lr = 0x827D5868;
	sub_827D5738(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d5878
	if (!ctx.cr6.eq) goto loc_827D5878;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d5884
	goto loc_827D5884;
loc_827D5878:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D5884;
	sub_82333C70(ctx, base);
loc_827D5884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D58A0"))) PPC_WEAK_FUNC(sub_827D58A0);
PPC_FUNC_IMPL(__imp__sub_827D58A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d5738
	sub_827D5738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D58A8"))) PPC_WEAK_FUNC(sub_827D58A8);
PPC_FUNC_IMPL(__imp__sub_827D58A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x827D58C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d5934
	if (ctx.cr0.eq) goto loc_827D5934;
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 + 552;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,88
	ctx.r5.s64 = 88;
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
	ctx.lr = 0x827D592C;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827d5938
	goto loc_827D5938;
loc_827D5934:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D5938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5950"))) PPC_WEAK_FUNC(sub_827D5950);
PPC_FUNC_IMPL(__imp__sub_827D5950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-896
	ctx.r3.s64 = ctx.r11.s64 + -896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5960"))) PPC_WEAK_FUNC(sub_827D5960);
PPC_FUNC_IMPL(__imp__sub_827D5960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d59b0
	ctx.lr = 0x827D5980;
	sub_827D59B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d5994
	if (ctx.cr6.eq) goto loc_827D5994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D5994;
	sub_82333B08(ctx, base);
loc_827D5994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D59B0"))) PPC_WEAK_FUNC(sub_827D59B0);
PPC_FUNC_IMPL(__imp__sub_827D59B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14216
	ctx.r31.s64 = ctx.r11.s64 + 14216;
	// lwz r11,14172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d59f8
	if (!ctx.cr0.eq) goto loc_827D59F8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,528
	ctx.r9.s64 = ctx.r9.s64 + 528;
	// stw r11,14172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14172, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27032
	ctx.r3.s64 = ctx.r11.s64 + -27032;
	// bl 0x82a4c758
	ctx.lr = 0x827D59F8;
	sub_82A4C758(ctx, base);
loc_827D59F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5A10"))) PPC_WEAK_FUNC(sub_827D5A10);
PPC_FUNC_IMPL(__imp__sub_827D5A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5a50
	if (!ctx.cr0.eq) goto loc_827D5A50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20940(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20940, ctx.r11.u32);
	// addi r3,r9,-896
	ctx.r3.s64 = ctx.r9.s64 + -896;
	// bl 0x82816528
	ctx.lr = 0x827D5A48;
	sub_82816528(ctx, base);
	// stw r3,20936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20936, ctx.r3.u32);
	// b 0x827d5a54
	goto loc_827D5A54;
loc_827D5A50:
	// lwz r3,20936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20936);
loc_827D5A54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5A68"))) PPC_WEAK_FUNC(sub_827D5A68);
PPC_FUNC_IMPL(__imp__sub_827D5A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d59b0
	ctx.lr = 0x827D5A88;
	sub_827D59B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D5A9C;
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

__attribute__((alias("__imp__sub_827D5AB8"))) PPC_WEAK_FUNC(sub_827D5AB8);
PPC_FUNC_IMPL(__imp__sub_827D5AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d5af0
	if (ctx.cr6.eq) goto loc_827D5AF0;
	// bl 0x827d59b0
	ctx.lr = 0x827D5AE0;
	sub_827D59B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d5af0
	if (!ctx.cr6.eq) goto loc_827D5AF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d5afc
	goto loc_827D5AFC;
loc_827D5AF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D5AFC;
	sub_82333C70(ctx, base);
loc_827D5AFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5B18"))) PPC_WEAK_FUNC(sub_827D5B18);
PPC_FUNC_IMPL(__imp__sub_827D5B18) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d59b0
	sub_827D59B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5B20"))) PPC_WEAK_FUNC(sub_827D5B20);
PPC_FUNC_IMPL(__imp__sub_827D5B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82833108
	ctx.lr = 0x827D5B3C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d5b50
	if (ctx.cr0.eq) goto loc_827D5B50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d5b68
	ctx.lr = 0x827D5B4C;
	sub_827D5B68(ctx, base);
	// b 0x827d5b54
	goto loc_827D5B54;
loc_827D5B50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D5B54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5B68"))) PPC_WEAK_FUNC(sub_827D5B68);
PPC_FUNC_IMPL(__imp__sub_827D5B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,14296
	ctx.r10.s64 = ctx.r10.s64 + 14296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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
	// bl 0x82a4ea80
	ctx.lr = 0x827D5C18;
	sub_82A4EA80(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5C60"))) PPC_WEAK_FUNC(sub_827D5C60);
PPC_FUNC_IMPL(__imp__sub_827D5C60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-928
	ctx.r3.s64 = ctx.r11.s64 + -928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5C70"))) PPC_WEAK_FUNC(sub_827D5C70);
PPC_FUNC_IMPL(__imp__sub_827D5C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5cc0
	ctx.lr = 0x827D5C90;
	sub_827D5CC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d5ca4
	if (ctx.cr6.eq) goto loc_827D5CA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D5CA4;
	sub_82333B08(ctx, base);
loc_827D5CA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5CC0"))) PPC_WEAK_FUNC(sub_827D5CC0);
PPC_FUNC_IMPL(__imp__sub_827D5CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14196
	ctx.r31.s64 = ctx.r11.s64 + 14196;
	// lwz r11,14112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14112);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5d08
	if (!ctx.cr0.eq) goto loc_827D5D08;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,424
	ctx.r9.s64 = ctx.r9.s64 + 424;
	// stw r11,14112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14112, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27008
	ctx.r3.s64 = ctx.r11.s64 + -27008;
	// bl 0x82a4c758
	ctx.lr = 0x827D5D08;
	sub_82A4C758(ctx, base);
loc_827D5D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5D20"))) PPC_WEAK_FUNC(sub_827D5D20);
PPC_FUNC_IMPL(__imp__sub_827D5D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20932);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d5d60
	if (!ctx.cr0.eq) goto loc_827D5D60;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20932(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20932, ctx.r11.u32);
	// addi r3,r9,-928
	ctx.r3.s64 = ctx.r9.s64 + -928;
	// bl 0x82816528
	ctx.lr = 0x827D5D58;
	sub_82816528(ctx, base);
	// stw r3,20928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20928, ctx.r3.u32);
	// b 0x827d5d64
	goto loc_827D5D64;
loc_827D5D60:
	// lwz r3,20928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20928);
loc_827D5D64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5D78"))) PPC_WEAK_FUNC(sub_827D5D78);
PPC_FUNC_IMPL(__imp__sub_827D5D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d5cc0
	ctx.lr = 0x827D5D98;
	sub_827D5CC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D5DAC;
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

__attribute__((alias("__imp__sub_827D5DC8"))) PPC_WEAK_FUNC(sub_827D5DC8);
PPC_FUNC_IMPL(__imp__sub_827D5DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d5e00
	if (ctx.cr6.eq) goto loc_827D5E00;
	// bl 0x827d5cc0
	ctx.lr = 0x827D5DF0;
	sub_827D5CC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d5e00
	if (!ctx.cr6.eq) goto loc_827D5E00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d5e0c
	goto loc_827D5E0C;
loc_827D5E00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D5E0C;
	sub_82333C70(ctx, base);
loc_827D5E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5E28"))) PPC_WEAK_FUNC(sub_827D5E28);
PPC_FUNC_IMPL(__imp__sub_827D5E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d5cc0
	sub_827D5CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5E30"))) PPC_WEAK_FUNC(sub_827D5E30);
PPC_FUNC_IMPL(__imp__sub_827D5E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82833108
	ctx.lr = 0x827D5E4C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d5e60
	if (ctx.cr0.eq) goto loc_827D5E60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d5e78
	ctx.lr = 0x827D5E5C;
	sub_827D5E78(ctx, base);
	// b 0x827d5e64
	goto loc_827D5E64;
loc_827D5E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D5E64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5E78"))) PPC_WEAK_FUNC(sub_827D5E78);
PPC_FUNC_IMPL(__imp__sub_827D5E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,14296
	ctx.r9.s64 = ctx.r9.s64 + 14296;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,344
	ctx.r11.s64 = ctx.r11.s64 + 344;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r10,r11,0,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r10,r11,0,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r10,r11,0,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D5F90;
	sub_82A4EA80(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5FD8"))) PPC_WEAK_FUNC(sub_827D5FD8);
PPC_FUNC_IMPL(__imp__sub_827D5FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-956
	ctx.r3.s64 = ctx.r11.s64 + -956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5FE8"))) PPC_WEAK_FUNC(sub_827D5FE8);
PPC_FUNC_IMPL(__imp__sub_827D5FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6038
	ctx.lr = 0x827D6008;
	sub_827D6038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d601c
	if (ctx.cr6.eq) goto loc_827D601C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D601C;
	sub_82333B08(ctx, base);
loc_827D601C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6038"))) PPC_WEAK_FUNC(sub_827D6038);
PPC_FUNC_IMPL(__imp__sub_827D6038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14220
	ctx.r31.s64 = ctx.r11.s64 + 14220;
	// lwz r11,14180(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14180);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6080
	if (!ctx.cr0.eq) goto loc_827D6080;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,320
	ctx.r9.s64 = ctx.r9.s64 + 320;
	// stw r11,14180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14180, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26984
	ctx.r3.s64 = ctx.r11.s64 + -26984;
	// bl 0x82a4c758
	ctx.lr = 0x827D6080;
	sub_82A4C758(ctx, base);
loc_827D6080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6098"))) PPC_WEAK_FUNC(sub_827D6098);
PPC_FUNC_IMPL(__imp__sub_827D6098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20924);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d60d8
	if (!ctx.cr0.eq) goto loc_827D60D8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20924(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20924, ctx.r11.u32);
	// addi r3,r9,-956
	ctx.r3.s64 = ctx.r9.s64 + -956;
	// bl 0x82816528
	ctx.lr = 0x827D60D0;
	sub_82816528(ctx, base);
	// stw r3,20920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20920, ctx.r3.u32);
	// b 0x827d60dc
	goto loc_827D60DC;
loc_827D60D8:
	// lwz r3,20920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20920);
loc_827D60DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D60F0"))) PPC_WEAK_FUNC(sub_827D60F0);
PPC_FUNC_IMPL(__imp__sub_827D60F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6038
	ctx.lr = 0x827D6110;
	sub_827D6038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D6124;
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

__attribute__((alias("__imp__sub_827D6140"))) PPC_WEAK_FUNC(sub_827D6140);
PPC_FUNC_IMPL(__imp__sub_827D6140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d6178
	if (ctx.cr6.eq) goto loc_827D6178;
	// bl 0x827d6038
	ctx.lr = 0x827D6168;
	sub_827D6038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d6178
	if (!ctx.cr6.eq) goto loc_827D6178;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6184
	goto loc_827D6184;
loc_827D6178:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D6184;
	sub_82333C70(ctx, base);
loc_827D6184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D61A0"))) PPC_WEAK_FUNC(sub_827D61A0);
PPC_FUNC_IMPL(__imp__sub_827D61A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6038
	sub_827D6038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D61A8"))) PPC_WEAK_FUNC(sub_827D61A8);
PPC_FUNC_IMPL(__imp__sub_827D61A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x827D61C8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d6274
	if (ctx.cr0.eq) goto loc_827D6274;
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,240
	ctx.r11.s64 = ctx.r11.s64 + 240;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D6244;
	sub_82A4EA80(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// b 0x827d6278
	goto loc_827D6278;
loc_827D6274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D6278:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6290"))) PPC_WEAK_FUNC(sub_827D6290);
PPC_FUNC_IMPL(__imp__sub_827D6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-984
	ctx.r3.s64 = ctx.r11.s64 + -984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D62A0"))) PPC_WEAK_FUNC(sub_827D62A0);
PPC_FUNC_IMPL(__imp__sub_827D62A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d62f0
	ctx.lr = 0x827D62C0;
	sub_827D62F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d62d4
	if (ctx.cr6.eq) goto loc_827D62D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D62D4;
	sub_82333B08(ctx, base);
loc_827D62D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D62F0"))) PPC_WEAK_FUNC(sub_827D62F0);
PPC_FUNC_IMPL(__imp__sub_827D62F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14168
	ctx.r31.s64 = ctx.r11.s64 + 14168;
	// lwz r11,14192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6338
	if (!ctx.cr0.eq) goto loc_827D6338;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,216
	ctx.r9.s64 = ctx.r9.s64 + 216;
	// stw r11,14192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14192, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26960
	ctx.r3.s64 = ctx.r11.s64 + -26960;
	// bl 0x82a4c758
	ctx.lr = 0x827D6338;
	sub_82A4C758(ctx, base);
loc_827D6338:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6350"))) PPC_WEAK_FUNC(sub_827D6350);
PPC_FUNC_IMPL(__imp__sub_827D6350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20916(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20916);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6390
	if (!ctx.cr0.eq) goto loc_827D6390;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20916, ctx.r11.u32);
	// addi r3,r9,-984
	ctx.r3.s64 = ctx.r9.s64 + -984;
	// bl 0x82816528
	ctx.lr = 0x827D6388;
	sub_82816528(ctx, base);
	// stw r3,20912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20912, ctx.r3.u32);
	// b 0x827d6394
	goto loc_827D6394;
loc_827D6390:
	// lwz r3,20912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20912);
loc_827D6394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D63A8"))) PPC_WEAK_FUNC(sub_827D63A8);
PPC_FUNC_IMPL(__imp__sub_827D63A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d62f0
	ctx.lr = 0x827D63C8;
	sub_827D62F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D63DC;
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

__attribute__((alias("__imp__sub_827D63F8"))) PPC_WEAK_FUNC(sub_827D63F8);
PPC_FUNC_IMPL(__imp__sub_827D63F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d6430
	if (ctx.cr6.eq) goto loc_827D6430;
	// bl 0x827d62f0
	ctx.lr = 0x827D6420;
	sub_827D62F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d6430
	if (!ctx.cr6.eq) goto loc_827D6430;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d643c
	goto loc_827D643C;
loc_827D6430:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D643C;
	sub_82333C70(ctx, base);
loc_827D643C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6458"))) PPC_WEAK_FUNC(sub_827D6458);
PPC_FUNC_IMPL(__imp__sub_827D6458) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d62f0
	sub_827D62F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6460"))) PPC_WEAK_FUNC(sub_827D6460);
PPC_FUNC_IMPL(__imp__sub_827D6460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x827D6480;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d6524
	if (ctx.cr0.eq) goto loc_827D6524;
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D64F4;
	sub_82A4EA80(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
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
	// b 0x827d6528
	goto loc_827D6528;
loc_827D6524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D6528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6540"))) PPC_WEAK_FUNC(sub_827D6540);
PPC_FUNC_IMPL(__imp__sub_827D6540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1016
	ctx.r3.s64 = ctx.r11.s64 + -1016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6550"))) PPC_WEAK_FUNC(sub_827D6550);
PPC_FUNC_IMPL(__imp__sub_827D6550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d65a0
	ctx.lr = 0x827D6570;
	sub_827D65A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d6584
	if (ctx.cr6.eq) goto loc_827D6584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D6584;
	sub_82333B08(ctx, base);
loc_827D6584:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D65A0"))) PPC_WEAK_FUNC(sub_827D65A0);
PPC_FUNC_IMPL(__imp__sub_827D65A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14248
	ctx.r31.s64 = ctx.r11.s64 + 14248;
	// lwz r11,14152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d65e8
	if (!ctx.cr0.eq) goto loc_827D65E8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,112
	ctx.r9.s64 = ctx.r9.s64 + 112;
	// stw r11,14152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14152, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26936
	ctx.r3.s64 = ctx.r11.s64 + -26936;
	// bl 0x82a4c758
	ctx.lr = 0x827D65E8;
	sub_82A4C758(ctx, base);
loc_827D65E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6600"))) PPC_WEAK_FUNC(sub_827D6600);
PPC_FUNC_IMPL(__imp__sub_827D6600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20908(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20908);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6640
	if (!ctx.cr0.eq) goto loc_827D6640;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20908(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20908, ctx.r11.u32);
	// addi r3,r9,-1016
	ctx.r3.s64 = ctx.r9.s64 + -1016;
	// bl 0x82816528
	ctx.lr = 0x827D6638;
	sub_82816528(ctx, base);
	// stw r3,20904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20904, ctx.r3.u32);
	// b 0x827d6644
	goto loc_827D6644;
loc_827D6640:
	// lwz r3,20904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20904);
loc_827D6644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6658"))) PPC_WEAK_FUNC(sub_827D6658);
PPC_FUNC_IMPL(__imp__sub_827D6658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d65a0
	ctx.lr = 0x827D6678;
	sub_827D65A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D668C;
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

__attribute__((alias("__imp__sub_827D66A8"))) PPC_WEAK_FUNC(sub_827D66A8);
PPC_FUNC_IMPL(__imp__sub_827D66A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d66e0
	if (ctx.cr6.eq) goto loc_827D66E0;
	// bl 0x827d65a0
	ctx.lr = 0x827D66D0;
	sub_827D65A0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d66e0
	if (!ctx.cr6.eq) goto loc_827D66E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d66ec
	goto loc_827D66EC;
loc_827D66E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D66EC;
	sub_82333C70(ctx, base);
loc_827D66EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6708"))) PPC_WEAK_FUNC(sub_827D6708);
PPC_FUNC_IMPL(__imp__sub_827D6708) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d65a0
	sub_827D65A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6710"))) PPC_WEAK_FUNC(sub_827D6710);
PPC_FUNC_IMPL(__imp__sub_827D6710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D672C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d678c
	if (ctx.cr0.eq) goto loc_827D678C;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
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
	// b 0x827d6790
	goto loc_827D6790;
loc_827D678C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D6790:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D67A8"))) PPC_WEAK_FUNC(sub_827D67A8);
PPC_FUNC_IMPL(__imp__sub_827D67A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1048
	ctx.r3.s64 = ctx.r11.s64 + -1048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D67B8"))) PPC_WEAK_FUNC(sub_827D67B8);
PPC_FUNC_IMPL(__imp__sub_827D67B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6808
	ctx.lr = 0x827D67D8;
	sub_827D6808(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d67ec
	if (ctx.cr6.eq) goto loc_827D67EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D67EC;
	sub_82333B08(ctx, base);
loc_827D67EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6808"))) PPC_WEAK_FUNC(sub_827D6808);
PPC_FUNC_IMPL(__imp__sub_827D6808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14136
	ctx.r31.s64 = ctx.r11.s64 + 14136;
	// lwz r11,14144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6850
	if (!ctx.cr0.eq) goto loc_827D6850;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r11,14144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14144, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26912
	ctx.r3.s64 = ctx.r11.s64 + -26912;
	// bl 0x82a4c758
	ctx.lr = 0x827D6850;
	sub_82A4C758(ctx, base);
loc_827D6850:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6868"))) PPC_WEAK_FUNC(sub_827D6868);
PPC_FUNC_IMPL(__imp__sub_827D6868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20900);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d68a8
	if (!ctx.cr0.eq) goto loc_827D68A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20900, ctx.r11.u32);
	// addi r3,r9,-1048
	ctx.r3.s64 = ctx.r9.s64 + -1048;
	// bl 0x82816528
	ctx.lr = 0x827D68A0;
	sub_82816528(ctx, base);
	// stw r3,20896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20896, ctx.r3.u32);
	// b 0x827d68ac
	goto loc_827D68AC;
loc_827D68A8:
	// lwz r3,20896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20896);
loc_827D68AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D68C0"))) PPC_WEAK_FUNC(sub_827D68C0);
PPC_FUNC_IMPL(__imp__sub_827D68C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6808
	ctx.lr = 0x827D68E0;
	sub_827D6808(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D68F4;
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

__attribute__((alias("__imp__sub_827D6910"))) PPC_WEAK_FUNC(sub_827D6910);
PPC_FUNC_IMPL(__imp__sub_827D6910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d6948
	if (ctx.cr6.eq) goto loc_827D6948;
	// bl 0x827d6808
	ctx.lr = 0x827D6938;
	sub_827D6808(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d6948
	if (!ctx.cr6.eq) goto loc_827D6948;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6954
	goto loc_827D6954;
loc_827D6948:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D6954;
	sub_82333C70(ctx, base);
loc_827D6954:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6970"))) PPC_WEAK_FUNC(sub_827D6970);
PPC_FUNC_IMPL(__imp__sub_827D6970) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6808
	sub_827D6808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6978"))) PPC_WEAK_FUNC(sub_827D6978);
PPC_FUNC_IMPL(__imp__sub_827D6978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D6994;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d69f4
	if (ctx.cr0.eq) goto loc_827D69F4;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-72
	ctx.r9.s64 = ctx.r9.s64 + -72;
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
	// b 0x827d69f8
	goto loc_827D69F8;
loc_827D69F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D69F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6A10"))) PPC_WEAK_FUNC(sub_827D6A10);
PPC_FUNC_IMPL(__imp__sub_827D6A10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1088
	ctx.r3.s64 = ctx.r11.s64 + -1088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6A20"))) PPC_WEAK_FUNC(sub_827D6A20);
PPC_FUNC_IMPL(__imp__sub_827D6A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6a70
	ctx.lr = 0x827D6A40;
	sub_827D6A70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d6a54
	if (ctx.cr6.eq) goto loc_827D6A54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D6A54;
	sub_82333B08(ctx, base);
loc_827D6A54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6A70"))) PPC_WEAK_FUNC(sub_827D6A70);
PPC_FUNC_IMPL(__imp__sub_827D6A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14224
	ctx.r31.s64 = ctx.r11.s64 + 14224;
	// lwz r11,14252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14252);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6ab8
	if (!ctx.cr0.eq) goto loc_827D6AB8;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-96
	ctx.r9.s64 = ctx.r9.s64 + -96;
	// stw r11,14252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14252, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x82a4c758
	ctx.lr = 0x827D6AB8;
	sub_82A4C758(ctx, base);
loc_827D6AB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6AD0"))) PPC_WEAK_FUNC(sub_827D6AD0);
PPC_FUNC_IMPL(__imp__sub_827D6AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20892);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6b10
	if (!ctx.cr0.eq) goto loc_827D6B10;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20892, ctx.r11.u32);
	// addi r3,r9,-1088
	ctx.r3.s64 = ctx.r9.s64 + -1088;
	// bl 0x82816528
	ctx.lr = 0x827D6B08;
	sub_82816528(ctx, base);
	// stw r3,20888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20888, ctx.r3.u32);
	// b 0x827d6b14
	goto loc_827D6B14;
loc_827D6B10:
	// lwz r3,20888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20888);
loc_827D6B14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6B28"))) PPC_WEAK_FUNC(sub_827D6B28);
PPC_FUNC_IMPL(__imp__sub_827D6B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6a70
	ctx.lr = 0x827D6B48;
	sub_827D6A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D6B5C;
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

__attribute__((alias("__imp__sub_827D6B78"))) PPC_WEAK_FUNC(sub_827D6B78);
PPC_FUNC_IMPL(__imp__sub_827D6B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d6bb0
	if (ctx.cr6.eq) goto loc_827D6BB0;
	// bl 0x827d6a70
	ctx.lr = 0x827D6BA0;
	sub_827D6A70(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d6bb0
	if (!ctx.cr6.eq) goto loc_827D6BB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6bbc
	goto loc_827D6BBC;
loc_827D6BB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D6BBC;
	sub_82333C70(ctx, base);
loc_827D6BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6BD8"))) PPC_WEAK_FUNC(sub_827D6BD8);
PPC_FUNC_IMPL(__imp__sub_827D6BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6a70
	sub_827D6A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6BE0"))) PPC_WEAK_FUNC(sub_827D6BE0);
PPC_FUNC_IMPL(__imp__sub_827D6BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D6BFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d6c64
	if (ctx.cr0.eq) goto loc_827D6C64;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-176
	ctx.r9.s64 = ctx.r9.s64 + -176;
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
	// b 0x827d6c68
	goto loc_827D6C68;
loc_827D6C64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D6C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6C80"))) PPC_WEAK_FUNC(sub_827D6C80);
PPC_FUNC_IMPL(__imp__sub_827D6C80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1128
	ctx.r3.s64 = ctx.r11.s64 + -1128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6C90"))) PPC_WEAK_FUNC(sub_827D6C90);
PPC_FUNC_IMPL(__imp__sub_827D6C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6ce0
	ctx.lr = 0x827D6CB0;
	sub_827D6CE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d6cc4
	if (ctx.cr6.eq) goto loc_827D6CC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D6CC4;
	sub_82333B08(ctx, base);
loc_827D6CC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6CE0"))) PPC_WEAK_FUNC(sub_827D6CE0);
PPC_FUNC_IMPL(__imp__sub_827D6CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14160
	ctx.r31.s64 = ctx.r11.s64 + 14160;
	// lwz r11,14164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6d28
	if (!ctx.cr0.eq) goto loc_827D6D28;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-200
	ctx.r9.s64 = ctx.r9.s64 + -200;
	// stw r11,14164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14164, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26864
	ctx.r3.s64 = ctx.r11.s64 + -26864;
	// bl 0x82a4c758
	ctx.lr = 0x827D6D28;
	sub_82A4C758(ctx, base);
loc_827D6D28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6D40"))) PPC_WEAK_FUNC(sub_827D6D40);
PPC_FUNC_IMPL(__imp__sub_827D6D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20884(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20884);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6d80
	if (!ctx.cr0.eq) goto loc_827D6D80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20884(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20884, ctx.r11.u32);
	// addi r3,r9,-1128
	ctx.r3.s64 = ctx.r9.s64 + -1128;
	// bl 0x82816528
	ctx.lr = 0x827D6D78;
	sub_82816528(ctx, base);
	// stw r3,20880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20880, ctx.r3.u32);
	// b 0x827d6d84
	goto loc_827D6D84;
loc_827D6D80:
	// lwz r3,20880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20880);
loc_827D6D84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6D98"))) PPC_WEAK_FUNC(sub_827D6D98);
PPC_FUNC_IMPL(__imp__sub_827D6D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6ce0
	ctx.lr = 0x827D6DB8;
	sub_827D6CE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D6DCC;
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

__attribute__((alias("__imp__sub_827D6DE8"))) PPC_WEAK_FUNC(sub_827D6DE8);
PPC_FUNC_IMPL(__imp__sub_827D6DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d6e20
	if (ctx.cr6.eq) goto loc_827D6E20;
	// bl 0x827d6ce0
	ctx.lr = 0x827D6E10;
	sub_827D6CE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d6e20
	if (!ctx.cr6.eq) goto loc_827D6E20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6e2c
	goto loc_827D6E2C;
loc_827D6E20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D6E2C;
	sub_82333C70(ctx, base);
loc_827D6E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6E48"))) PPC_WEAK_FUNC(sub_827D6E48);
PPC_FUNC_IMPL(__imp__sub_827D6E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6ce0
	sub_827D6CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6E50"))) PPC_WEAK_FUNC(sub_827D6E50);
PPC_FUNC_IMPL(__imp__sub_827D6E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D6E6C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d6ed4
	if (ctx.cr0.eq) goto loc_827D6ED4;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-280
	ctx.r9.s64 = ctx.r9.s64 + -280;
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
	// b 0x827d6ed8
	goto loc_827D6ED8;
loc_827D6ED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D6ED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6EF0"))) PPC_WEAK_FUNC(sub_827D6EF0);
PPC_FUNC_IMPL(__imp__sub_827D6EF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1164
	ctx.r3.s64 = ctx.r11.s64 + -1164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6F00"))) PPC_WEAK_FUNC(sub_827D6F00);
PPC_FUNC_IMPL(__imp__sub_827D6F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6f50
	ctx.lr = 0x827D6F20;
	sub_827D6F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d6f34
	if (ctx.cr6.eq) goto loc_827D6F34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D6F34;
	sub_82333B08(ctx, base);
loc_827D6F34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6F50"))) PPC_WEAK_FUNC(sub_827D6F50);
PPC_FUNC_IMPL(__imp__sub_827D6F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14176
	ctx.r31.s64 = ctx.r11.s64 + 14176;
	// lwz r11,14108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6f98
	if (!ctx.cr0.eq) goto loc_827D6F98;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-304
	ctx.r9.s64 = ctx.r9.s64 + -304;
	// stw r11,14108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14108, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26840
	ctx.r3.s64 = ctx.r11.s64 + -26840;
	// bl 0x82a4c758
	ctx.lr = 0x827D6F98;
	sub_82A4C758(ctx, base);
loc_827D6F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6FB0"))) PPC_WEAK_FUNC(sub_827D6FB0);
PPC_FUNC_IMPL(__imp__sub_827D6FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20876(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20876);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d6ff0
	if (!ctx.cr0.eq) goto loc_827D6FF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20876, ctx.r11.u32);
	// addi r3,r9,-1164
	ctx.r3.s64 = ctx.r9.s64 + -1164;
	// bl 0x82816528
	ctx.lr = 0x827D6FE8;
	sub_82816528(ctx, base);
	// stw r3,20872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20872, ctx.r3.u32);
	// b 0x827d6ff4
	goto loc_827D6FF4;
loc_827D6FF0:
	// lwz r3,20872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20872);
loc_827D6FF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7008"))) PPC_WEAK_FUNC(sub_827D7008);
PPC_FUNC_IMPL(__imp__sub_827D7008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d6f50
	ctx.lr = 0x827D7028;
	sub_827D6F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D703C;
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

__attribute__((alias("__imp__sub_827D7058"))) PPC_WEAK_FUNC(sub_827D7058);
PPC_FUNC_IMPL(__imp__sub_827D7058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d7090
	if (ctx.cr6.eq) goto loc_827D7090;
	// bl 0x827d6f50
	ctx.lr = 0x827D7080;
	sub_827D6F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d7090
	if (!ctx.cr6.eq) goto loc_827D7090;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d709c
	goto loc_827D709C;
loc_827D7090:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D709C;
	sub_82333C70(ctx, base);
loc_827D709C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D70B8"))) PPC_WEAK_FUNC(sub_827D70B8);
PPC_FUNC_IMPL(__imp__sub_827D70B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d6f50
	sub_827D6F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D70C0"))) PPC_WEAK_FUNC(sub_827D70C0);
PPC_FUNC_IMPL(__imp__sub_827D70C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D70DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d7144
	if (ctx.cr0.eq) goto loc_827D7144;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-384
	ctx.r9.s64 = ctx.r9.s64 + -384;
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
	// b 0x827d7148
	goto loc_827D7148;
loc_827D7144:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D7148:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7160"))) PPC_WEAK_FUNC(sub_827D7160);
PPC_FUNC_IMPL(__imp__sub_827D7160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-1192
	ctx.r3.s64 = ctx.r11.s64 + -1192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7170"))) PPC_WEAK_FUNC(sub_827D7170);
PPC_FUNC_IMPL(__imp__sub_827D7170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d71c0
	ctx.lr = 0x827D7190;
	sub_827D71C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827d71a4
	if (ctx.cr6.eq) goto loc_827D71A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827D71A4;
	sub_82333B08(ctx, base);
loc_827D71A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D71C0"))) PPC_WEAK_FUNC(sub_827D71C0);
PPC_FUNC_IMPL(__imp__sub_827D71C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,14232
	ctx.r31.s64 = ctx.r11.s64 + 14232;
	// lwz r11,14212(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14212);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d7208
	if (!ctx.cr0.eq) goto loc_827D7208;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-408
	ctx.r9.s64 = ctx.r9.s64 + -408;
	// stw r11,14212(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14212, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-26816
	ctx.r3.s64 = ctx.r11.s64 + -26816;
	// bl 0x82a4c758
	ctx.lr = 0x827D7208;
	sub_82A4C758(ctx, base);
loc_827D7208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7220"))) PPC_WEAK_FUNC(sub_827D7220);
PPC_FUNC_IMPL(__imp__sub_827D7220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,20868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827d7260
	if (!ctx.cr0.eq) goto loc_827D7260;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r11,20868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20868, ctx.r11.u32);
	// addi r3,r9,-1192
	ctx.r3.s64 = ctx.r9.s64 + -1192;
	// bl 0x82816528
	ctx.lr = 0x827D7258;
	sub_82816528(ctx, base);
	// stw r3,20864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20864, ctx.r3.u32);
	// b 0x827d7264
	goto loc_827D7264;
loc_827D7260:
	// lwz r3,20864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20864);
loc_827D7264:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7278"))) PPC_WEAK_FUNC(sub_827D7278);
PPC_FUNC_IMPL(__imp__sub_827D7278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827d71c0
	ctx.lr = 0x827D7298;
	sub_827D71C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D72AC;
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

__attribute__((alias("__imp__sub_827D72C8"))) PPC_WEAK_FUNC(sub_827D72C8);
PPC_FUNC_IMPL(__imp__sub_827D72C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827d7300
	if (ctx.cr6.eq) goto loc_827D7300;
	// bl 0x827d71c0
	ctx.lr = 0x827D72F0;
	sub_827D71C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827d7300
	if (!ctx.cr6.eq) goto loc_827D7300;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d730c
	goto loc_827D730C;
loc_827D7300:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827D730C;
	sub_82333C70(ctx, base);
loc_827D730C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7328"))) PPC_WEAK_FUNC(sub_827D7328);
PPC_FUNC_IMPL(__imp__sub_827D7328) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d71c0
	sub_827D71C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7330"))) PPC_WEAK_FUNC(sub_827D7330);
PPC_FUNC_IMPL(__imp__sub_827D7330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x827D734C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d73a4
	if (ctx.cr0.eq) goto loc_827D73A4;
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
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-488
	ctx.r9.s64 = ctx.r9.s64 + -488;
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
	// b 0x827d73a8
	goto loc_827D73A8;
loc_827D73A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D73A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D73C0"))) PPC_WEAK_FUNC(sub_827D73C0);
PPC_FUNC_IMPL(__imp__sub_827D73C0) {
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
	ctx.lr = 0x827D73D8;
	sub_829BC540(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,-27300
	ctx.r9.s64 = ctx.r11.s64 + -27300;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f9,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,-32516
	ctx.r6.s64 = ctx.r8.s64 + -32516;
	// addi r5,r11,5296
	ctx.r5.s64 = ctx.r11.s64 + 5296;
	// lfs f0,-28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,1432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1432, temp.u32);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stfs f0,1436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1436, temp.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// lfs f10,-32516(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32516);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -244);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,4184
	ctx.r7.s64 = ctx.r7.s64 + 4184;
	// addi r10,r10,8616
	ctx.r10.s64 = ctx.r10.s64 + 8616;
	// stfs f13,1440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lfs f8,23968(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23968);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// lfs f6,-504(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -504);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// lwz r5,1452(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// oris r5,r5,34816
	ctx.r5.u64 = ctx.r5.u64 | 2281701376;
	// stw r5,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r5.u32);
	// lis r4,-31963
	ctx.r4.s64 = -2094727168;
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// li r7,40
	ctx.r7.s64 = 40;
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lfs f11,912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lfs f13,30996(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r7,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r7.u32);
	// lfs f12,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,16800(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16800);
	ctx.f7.f64 = double(temp.f32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f13,1580(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1580, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f13,1596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f8,1576(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f7,1584(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// stfs f6,1588(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f12,1592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stfs f11,1600(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// stfs f10,1604(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f12,1608(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lfs f13,20012(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20012);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stfs f10,1480(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// stw r10,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r10.u32);
	// stfs f11,1484(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// stw r7,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r7.u32);
	// stfs f9,1488(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stfs f13,1496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// rlwimi r11,r9,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// rlwimi r11,r9,23,5,6
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x6000000) | (ctx.r11.u64 & 0xFFFFFFFFF9FFFFFF);
	// stfs f9,1528(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// stfs f0,1444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1444, temp.u32);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7520"))) PPC_WEAK_FUNC(sub_827D7520);
PPC_FUNC_IMPL(__imp__sub_827D7520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827D7528;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x827D753C;
	sub_829BCD88(ctx, base);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r10,r10,31,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFF;
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF;
	// rlwimi r10,r9,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,29,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0xFF;
	// rlwimi r10,r9,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,28,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFF;
	// rlwimi r10,r9,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,26,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFF;
	// rlwimi r10,r9,27,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r9,26,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,23,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFF;
	// rlwimi r10,r9,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,22,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFF;
	// rlwimi r10,r9,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,21,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0xFF;
	// rlwimi r10,r9,23,8,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 23) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,20,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFF;
	// rlwimi r10,r9,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r9,r9,19,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFF;
	// rlwimi r10,r9,21,10,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x200000) | (ctx.r10.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// lfs f0,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1440, temp.u32);
	// lwz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// stw r8,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r8.u32);
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// lwz r9,164(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r8,168(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r10,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r10.u32);
	// stw r9,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r9.u32);
	// stw r8,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r8.u32);
	// lfs f0,172(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lfs f0,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// lfs f0,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// lfs f0,184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stfs f0,1492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1492, temp.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f0,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stfs f0,1496(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1496, temp.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// lwz r9,192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r9,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r9.u32);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// stw r8,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r8.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r10,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r10.u32);
	// stw r9,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r9.u32);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lfs f0,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1524(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1524, temp.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lfs f0,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1528(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1528, temp.u32);
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1532, temp.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	// lwz r9,248(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// stw r10,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r10.u32);
	// stw r9,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r9.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x827D7710;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82846e98
	ctx.lr = 0x827D7724;
	sub_82846E98(ctx, base);
	// lwz r10,260(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d7758
	if (ctx.cr6.eq) goto loc_827D7758;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332c38
	ctx.lr = 0x827D7754;
	sub_82332C38(ctx, base);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827D7758:
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d77b0
	if (!ctx.cr6.gt) goto loc_827D77B0;
loc_827D7768:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332d50
	ctx.lr = 0x827D777C;
	sub_82332D50(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d7798
	if (ctx.cr0.eq) goto loc_827D7798;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827D7798;
	sub_82A4EA80(ctx, base);
loc_827D7798:
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d7768
	if (ctx.cr6.lt) goto loc_827D7768;
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_827D77B0:
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82332d50
	ctx.lr = 0x827D77C4;
	sub_82332D50(ctx, base);
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// mulli r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 * 40;
	// mulli r5,r24,40
	ctx.r5.s64 = ctx.r24.s64 * 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x827D77DC;
	sub_82A455D0(ctx, base);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d7854
	if (!ctx.cr6.gt) goto loc_827D7854;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
loc_827D77F4:
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// add r28,r11,r27
	ctx.r28.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826a9ef8
	ctx.lr = 0x827D780C;
	sub_826A9EF8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// bl 0x827d9b50
	ctx.lr = 0x827D783C;
	sub_827D9B50(ctx, base);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d77f4
	if (ctx.cr6.lt) goto loc_827D77F4;
loc_827D7854:
	// lfs f0,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// lfs f13,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// li r5,36
	ctx.r5.s64 = 36;
	// lfs f11,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D78AC;
	sub_82A4EA80(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,32
	ctx.r6.s64 = 32;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x827D78C4;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d78d4
	if (ctx.cr6.eq) goto loc_827D78D4;
	// bl 0x82332db8
	ctx.lr = 0x827D78D4;
	sub_82332DB8(ctx, base);
loc_827D78D4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D78E0"))) PPC_WEAK_FUNC(sub_827D78E0);
PPC_FUNC_IMPL(__imp__sub_827D78E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x829bdc10
	sub_829BDC10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D78E8"))) PPC_WEAK_FUNC(sub_827D78E8);
PPC_FUNC_IMPL(__imp__sub_827D78E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1524(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D78F0"))) PPC_WEAK_FUNC(sub_827D78F0);
PPC_FUNC_IMPL(__imp__sub_827D78F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D78F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d796c
	if (ctx.cr6.eq) goto loc_827D796C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x827D7920;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827d7958
	if (ctx.cr0.eq) goto loc_827D7958;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x82333a80
	ctx.lr = 0x827D793C;
	sub_82333A80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r11,r11,-384
	ctx.r11.s64 = ctx.r11.s64 + -384;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827d795c
	goto loc_827D795C;
loc_827D7958:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D795C:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827D7968;
	sub_82833A30(ctx, base);
	// b 0x827d7970
	goto loc_827D7970;
loc_827D796C:
	// stw r28,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r28.u32);
loc_827D7970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7978"))) PPC_WEAK_FUNC(sub_827D7978);
PPC_FUNC_IMPL(__imp__sub_827D7978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D7980;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827d7a18
	if (!ctx.cr6.gt) goto loc_827D7A18;
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D79B0:
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x827d9bf0
	ctx.lr = 0x827D79BC;
	sub_827D9BF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d7a00
	if (ctx.cr0.eq) goto loc_827D7A00;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D79D4;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x827D79D8;
	sub_82411B98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827d7a00
	if (ctx.cr0.eq) goto loc_827D7A00;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D7A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D7A00:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827d79b0
	if (ctx.cr6.lt) goto loc_827D79B0;
loc_827D7A18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7A20"))) PPC_WEAK_FUNC(sub_827D7A20);
PPC_FUNC_IMPL(__imp__sub_827D7A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827D7A28;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827d7adc
	if (!ctx.cr6.gt) goto loc_827D7ADC;
	// li r24,0
	ctx.r24.s64 = 0;
loc_827D7A68:
	// lwz r10,448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d7ac8
	if (ctx.cr6.eq) goto loc_827D7AC8;
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827D7A84;
	sub_829B9720(ctx, base);
	// bl 0x82411b98
	ctx.lr = 0x827D7A88;
	sub_82411B98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827d7ac4
	if (ctx.cr0.eq) goto loc_827D7AC4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// clrlwi r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D7AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D7AC4:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_827D7AC8:
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 452);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827d7a68
	if (ctx.cr6.lt) goto loc_827D7A68;
loc_827D7ADC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7AE8"))) PPC_WEAK_FUNC(sub_827D7AE8);
PPC_FUNC_IMPL(__imp__sub_827D7AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x827D7AF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r27,2
	ctx.r10.u64 = ctx.r27.u32 & 0x3FFFFFFF;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,17640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r8,r26,2
	ctx.r8.u64 = ctx.r26.u32 & 0x3FFFFFFF;
	// lfs f12,-27300(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -27300);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r29,r29,2
	ctx.r29.u64 = ctx.r29.u32 & 0x3FFFFFFF;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r23,r1,128
	ctx.r23.s64 = ctx.r1.s64 + 128;
	// lwz r28,1032(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1032);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x827D7BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7BB0"))) PPC_WEAK_FUNC(sub_827D7BB0);
PPC_FUNC_IMPL(__imp__sub_827D7BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827D7BB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7c78
	if (ctx.cr6.eq) goto loc_827D7C78;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7c78
	if (ctx.cr6.eq) goto loc_827D7C78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d7c78
	if (ctx.cr6.eq) goto loc_827D7C78;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x827D7C00;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827d7c2c
	if (ctx.cr0.eq) goto loc_827D7C2C;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x827d3290
	ctx.lr = 0x827D7C24;
	sub_827D3290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827d7c30
	goto loc_827D7C30;
loc_827D7C2C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D7C30:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827D7C68;
	sub_82A4EA80(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827D7C78;
	sub_82833A30(ctx, base);
loc_827D7C78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7C80"))) PPC_WEAK_FUNC(sub_827D7C80);
PPC_FUNC_IMPL(__imp__sub_827D7C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x827d7d18
	if (ctx.cr6.eq) goto loc_827D7D18;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d7d18
	if (ctx.cr6.eq) goto loc_827D7D18;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d7ce8
	if (ctx.cr6.eq) goto loc_827D7CE8;
	// lwz r10,1452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	// rlwinm. r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827d7ce8
	if (ctx.cr0.eq) goto loc_827D7CE8;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,12(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// b 0x827d7cf4
	goto loc_827D7CF4;
loc_827D7CE8:
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r8,628(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
loc_827D7CF4:
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_827D7D18:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D7D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7D48"))) PPC_WEAK_FUNC(sub_827D7D48);
PPC_FUNC_IMPL(__imp__sub_827D7D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x827D7D50;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a6172c
	ctx.lr = 0x827D7D58;
	__savefpr_21(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwa r11,32(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 32));
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r11,r7,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r9,r9,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// li r11,12
	ctx.r11.s64 = 12;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// lwz r25,4(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r24,8(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,100(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x827d7ee0
	if (ctx.cr6.eq) goto loc_827D7EE0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bge cr6,0x827d7ed4
	if (!ctx.cr6.lt) goto loc_827D7ED4;
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
loc_827D7ED4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827d7ee0
	if (!ctx.cr6.eq) goto loc_827D7EE0;
	// neg r21,r21
	ctx.r21.s64 = -ctx.r21.s64;
loc_827D7EE0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824cac78
	ctx.lr = 0x827D7EEC;
	sub_824CAC78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824cac78
	ctx.lr = 0x827D7EF8;
	sub_824CAC78(ctx, base);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x827d7f48
	if (ctx.cr0.lt) goto loc_827D7F48;
	// mulli r27,r30,12
	ctx.r27.s64 = ctx.r30.s64 * 12;
loc_827D7F08:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x824cac78
	ctx.lr = 0x827D7F18;
	sub_824CAC78(ctx, base);
	// add r26,r26,r19
	ctx.r26.u64 = ctx.r26.u64 + ctx.r19.u64;
	// add r25,r25,r21
	ctx.r25.u64 = ctx.r25.u64 + ctx.r21.u64;
	// add r24,r24,r18
	ctx.r24.u64 = ctx.r24.u64 + ctx.r18.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824cac78
	ctx.lr = 0x827D7F3C;
	sub_824CAC78(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r27,r27,-12
	ctx.r27.s64 = ctx.r27.s64 + -12;
	// bge 0x827d7f08
	if (!ctx.cr0.lt) goto loc_827D7F08;
loc_827D7F48:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824cac78
	ctx.lr = 0x827D7F54;
	sub_824CAC78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824cac78
	ctx.lr = 0x827D7F60;
	sub_824CAC78(ctx, base);
	// lwz r11,1452(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 1452);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// beq 0x827d80c8
	if (ctx.cr0.eq) goto loc_827D80C8;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x827d7fe0
	if (!ctx.cr6.gt) goto loc_827D7FE0;
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
loc_827D7F88:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fadds f25,f0,f25
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// bl 0x824fc978
	ctx.lr = 0x827D7FD0;
	sub_824FC978(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x827d7f88
	if (!ctx.cr0.eq) goto loc_827D7F88;
	// lwz r20,252(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_827D7FE0:
	// fmuls f0,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// lfs f13,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d800c
	if (!ctx.cr6.lt) goto loc_827D800C;
loc_827D7FF0:
	// fadds f31,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x827d7ff0
	if (ctx.cr6.lt) goto loc_827D7FF0;
loc_827D800C:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// mulli r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 * 12;
	// lwz r30,172(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfsx f10,r10,r20
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// stw r9,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r9.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D8094;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x827D80A0;
	sub_82817F30(ctx, base);
	// mulli r11,r27,12
	ctx.r11.s64 = ctx.r27.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x824f97d8
	ctx.lr = 0x827D80B4;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D80C0;
	sub_82817F30(ctx, base);
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// b 0x827d83a4
	goto loc_827D83A4;
loc_827D80C8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823327e0
	ctx.lr = 0x827D80E8;
	sub_823327E0(ctx, base);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x827d8448
	ctx.lr = 0x827D80FC;
	sub_827D8448(ctx, base);
	// lwz r28,220(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x827d8284
	if (!ctx.cr6.gt) goto loc_827D8284;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r30,r28,44
	ctx.r30.s64 = ctx.r28.s64 + 44;
	// lfs f27,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,16364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16364);
	ctx.f26.f64 = double(temp.f32);
loc_827D811C:
	// lfs f12,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// lfs f11,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f29,f11,f31
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// lfs f6,-32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f31
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f7,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,-44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,-24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -36);
	ctx.f1.f64 = double(temp.f32);
	// fadds f30,f9,f30
	ctx.f30.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// fadds f29,f8,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// fadds f28,f7,f2
	ctx.f28.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f2,-40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f30,f30,f31
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f28,f28,f31
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fadds f30,f6,f30
	ctx.f30.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// fadds f29,f5,f29
	ctx.f29.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// fadds f28,f4,f28
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// fmuls f30,f30,f31
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f29,f29,f31
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f28,f28,f31
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fadds f30,f3,f30
	ctx.f30.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f30,f2,f29
	ctx.f30.f64 = double(float(ctx.f2.f64 + ctx.f29.f64));
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f28,f1,f28
	ctx.f28.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_827D81C0:
	// fmuls f30,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f23,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f22,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f21,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f21.f64 = double(temp.f32);
	// fadds f30,f7,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f30.f64));
	// fadds f29,f9,f29
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f28,f8,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fadds f30,f4,f30
	ctx.f30.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// fadds f29,f6,f29
	ctx.f29.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fadds f28,f5,f28
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f28.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// fadds f30,f1,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f29,f3,f29
	ctx.f29.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f28,f2,f28
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f28.f64));
	// stfs f28,116(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fsubs f30,f30,f23
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f23.f64));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// fsubs f29,f29,f22
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f22.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fsubs f28,f28,f21
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f21.f64));
	// fmuls f30,f30,f30
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f30,f29,f29,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmadds f30,f28,f28,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f30.f64));
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// blt cr6,0x827d81c0
	if (ctx.cr6.lt) goto loc_827D81C0;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fadds f25,f13,f25
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// bl 0x824fc978
	ctx.lr = 0x827D8274;
	sub_824FC978(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// bne 0x827d811c
	if (!ctx.cr0.eq) goto loc_827D811C;
	// lwz r20,252(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_827D8284:
	// fmuls f0,f25,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f24.f64));
	// lfs f13,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d82b0
	if (!ctx.cr6.lt) goto loc_827D82B0;
loc_827D8294:
	// fadds f31,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r20
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x827d8294
	if (ctx.cr6.lt) goto loc_827D8294;
loc_827D82B0:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 * 48;
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lfsx f13,r9,r20
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// mulli r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 * 12;
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f12,f7,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f5
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// stw r9,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r9.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D837C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x827D8388;
	sub_82817F30(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x824f97d8
	ctx.lr = 0x827D8394;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D83A0;
	sub_82817F30(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_827D83A4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8269cbe0
	ctx.lr = 0x827D83B4;
	sub_8269CBE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817b48
	ctx.lr = 0x827D83C0;
	sub_82817B48(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x827D83E0;
	sub_8239D768(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82332ca8
	ctx.lr = 0x827D83F8;
	sub_82332CA8(ctx, base);
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d8408
	if (ctx.cr6.eq) goto loc_827D8408;
	// bl 0x82332db8
	ctx.lr = 0x827D8408;
	sub_82332DB8(ctx, base);
loc_827D8408:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82332ca8
	ctx.lr = 0x827D8420;
	sub_82332CA8(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d8430
	if (ctx.cr6.eq) goto loc_827D8430;
	// bl 0x82332db8
	ctx.lr = 0x827D8430;
	sub_82332DB8(ctx, base);
loc_827D8430:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400f38
	ctx.lr = 0x827D8438;
	sub_82400F38(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a61778
	ctx.lr = 0x827D8444;
	__restfpr_21(ctx, base);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8448"))) PPC_WEAK_FUNC(sub_827D8448);
PPC_FUNC_IMPL(__imp__sub_827D8448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D8450;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-11456
	ctx.r11.s64 = ctx.r11.s64 + -11456;
	// lfs f12,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// ble cr6,0x827d84ac
	if (!ctx.cr6.gt) goto loc_827D84AC;
	// lfs f0,-13624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13624);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-220
	ctx.r10.s64 = ctx.r1.s64 + -220;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_827D8490:
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x827d8490
	if (!ctx.cr0.eq) goto loc_827D8490;
loc_827D84AC:
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15844);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f8,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfsx f12,r9,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfs f11,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f8,-232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f10,-240(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r9,-236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r11,-232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r11,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// stw r9,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// ble cr6,0x827d85e8
	if (!ctx.cr6.gt) goto loc_827D85E8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r7,r1,-220
	ctx.r7.s64 = ctx.r1.s64 + -220;
	// addi r10,r1,-184
	ctx.r10.s64 = ctx.r1.s64 + -184;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_827D8554:
	// lfs f10,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f9,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f11,-240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// lwz r3,-240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// fmuls f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// lwz r31,-236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f11,-232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r30,-232(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// stw r30,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r30.u32);
	// bne 0x827d8554
	if (!ctx.cr0.eq) goto loc_827D8554;
loc_827D85E8:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f10,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// addic. r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f9,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f9,f8,f6
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,-240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stfs f11,-236(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// lwz r10,-236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,-232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,-232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// blt 0x827d8728
	if (ctx.cr0.lt) goto loc_827D8728;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_827D86A0:
	// addi r7,r1,-108
	ctx.r7.s64 = ctx.r1.s64 + -108;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,-116
	ctx.r4.s64 = ctx.r1.s64 + -116;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// addi r3,r1,-184
	ctx.r3.s64 = ctx.r1.s64 + -184;
	// addi r30,r1,-188
	ctx.r30.s64 = ctx.r1.s64 + -188;
	// lfsx f11,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,-128
	ctx.r4.s64 = ctx.r1.s64 + -128;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f8,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f9,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsx f7,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f11,-240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fsubs f11,f9,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f11,-232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fsubs f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f12,-236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// lwz r3,-232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r31,-236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r7,-240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// bge 0x827d86a0
	if (!ctx.cr0.lt) goto loc_827D86A0;
loc_827D8728:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827d88b4
	if (!ctx.cr6.gt) goto loc_827D88B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827D8738:
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r4,r1,-120
	ctx.r4.s64 = ctx.r1.s64 + -120;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfsx f12,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r30,r10,r4
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r29,-8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lfs f9,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r28,-4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stwx r4,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r4.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f30,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fsubs f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f7,-236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// lwz r4,-236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// fsubs f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f11,-232(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lwz r11,-232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// stw r11,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// fsubs f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfs f11,-240(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// lwz r3,-240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r3,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r3.u32);
	// stw r4,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r4.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fmuls f7,f2,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmuls f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,-220(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f11,-224(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// lwz r3,-224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stfs f12,-216(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lwz r4,-220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,-216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// bne 0x827d8738
	if (!ctx.cr0.eq) goto loc_827D8738;
loc_827D88B4:
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

__attribute__((alias("__imp__sub_827D88C8"))) PPC_WEAK_FUNC(sub_827D88C8);
PPC_FUNC_IMPL(__imp__sub_827D88C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x827d8960
	ctx.lr = 0x827D8924;
	sub_827D8960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d893c
	if (ctx.cr0.eq) goto loc_827D893C;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d893c
	if (!ctx.cr6.gt) goto loc_827D893C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_827D893C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400f38
	ctx.lr = 0x827D8944;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8960"))) PPC_WEAK_FUNC(sub_827D8960);
PPC_FUNC_IMPL(__imp__sub_827D8960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827D8968;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827d8a00
	if (ctx.cr6.eq) goto loc_827D8A00;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827d8a00
	if (!ctx.cr6.gt) goto loc_827D8A00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827D8998:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d8a00
	if (!ctx.cr6.eq) goto loc_827D8A00;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x827d89ec
	if (!ctx.cr6.eq) goto loc_827D89EC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r10,r9,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// bl 0x82642770
	ctx.lr = 0x827D89E8;
	sub_82642770(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827D89EC:
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d8998
	if (ctx.cr6.lt) goto loc_827D8998;
loc_827D8A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8A08"))) PPC_WEAK_FUNC(sub_827D8A08);
PPC_FUNC_IMPL(__imp__sub_827D8A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D8A10;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d8ad4
	if (ctx.cr6.eq) goto loc_827D8AD4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x827d8ad4
	if (!ctx.cr0.eq) goto loc_827D8AD4;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,1452(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1452);
	// rlwinm. r9,r9,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827d8ad4
	if (ctx.cr0.eq) goto loc_827D8AD4;
	// lwz r9,1452(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1452);
	// rlwinm. r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827d8a74
	if (ctx.cr0.eq) goto loc_827D8A74;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,1492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827d8ad4
	if (ctx.cr6.gt) goto loc_827D8AD4;
loc_827D8A74:
	// lfs f0,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x827d8ad4
	if (ctx.cr6.gt) goto loc_827D8AD4;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827D8AD0;
	sub_82A4EA80(ctx, base);
	// b 0x827d8b10
	goto loc_827D8B10;
loc_827D8AD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f63f8
	ctx.lr = 0x827D8AE0;
	sub_827F63F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827d8de0
	ctx.lr = 0x827D8AEC;
	sub_827D8DE0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D8B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D8B10:
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827D8B24;
	sub_82A4EA80(ctx, base);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// rlwinm. r11,r30,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// beq 0x827d8b4c
	if (ctx.cr0.eq) goto loc_827D8B4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827D8B40;
	sub_82A4EA80(ctx, base);
	// rlwinm r11,r30,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x827d8b54
	goto loc_827D8B54;
loc_827D8B4C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827D8B54;
	sub_82A4EA80(ctx, base);
loc_827D8B54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8B60"))) PPC_WEAK_FUNC(sub_827D8B60);
PPC_FUNC_IMPL(__imp__sub_827D8B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x827d8960
	ctx.lr = 0x827D8BBC;
	sub_827D8960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d8bd8
	if (ctx.cr0.eq) goto loc_827D8BD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d8bd8
	if (ctx.cr0.eq) goto loc_827D8BD8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_827D8BD8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400f38
	ctx.lr = 0x827D8BE0;
	sub_82400F38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8BF8"))) PPC_WEAK_FUNC(sub_827D8BF8);
PPC_FUNC_IMPL(__imp__sub_827D8BF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r4,31,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x80000000;
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r3,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r3.u32);
	// clrlwi r9,r9,2
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8C28"))) PPC_WEAK_FUNC(sub_827D8C28);
PPC_FUNC_IMPL(__imp__sub_827D8C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827D8C30;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d8dd0
	if (ctx.cr6.eq) goto loc_827D8DD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d8dd0
	if (ctx.cr6.eq) goto loc_827D8DD0;
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,660(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// beq 0x827d8c84
	if (ctx.cr0.eq) goto loc_827D8C84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x827d8d5c
	goto loc_827D8D5C;
loc_827D8C84:
	// addi r29,r30,1468
	ctx.r29.s64 = ctx.r30.s64 + 1468;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82817bb8
	ctx.lr = 0x827D8C90;
	sub_82817BB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x827D8CA0;
	sub_82817BB8(ctx, base);
	// lfs f11,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f1,1496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f31,f10,f12,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x827D8CCC;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x827d8d4c
	if (!ctx.cr6.lt) goto loc_827D8D4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x827D8CEC;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,1520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// b 0x827d8db4
	goto loc_827D8DB4;
loc_827D8D4C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x827d8db8
	if (!ctx.cr6.gt) goto loc_827D8DB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_827D8D5C:
	// lfs f31,1480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x827D8D64;
	sub_82817BB8(ctx, base);
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
loc_827D8DB4:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_827D8DB8:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_827D8DD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8DE0"))) PPC_WEAK_FUNC(sub_827D8DE0);
PPC_FUNC_IMPL(__imp__sub_827D8DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827D8DE8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x827D8DF0;
	__savefpr_27(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d9644
	if (ctx.cr0.eq) goto loc_827D9644;
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d9644
	if (ctx.cr0.eq) goto loc_827D9644;
	// lfs f1,1496(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a4e118
	ctx.lr = 0x827D8E20;
	sub_82A4E118(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,1488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// frsp f28,f1
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// lfs f27,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f27.f64 = double(temp.f32);
	// fdivs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// beq 0x827d9044
	if (ctx.cr0.eq) goto loc_827D9044;
	// lwz r8,656(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r7,660(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,664(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827D8E98;
	sub_82817BB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x827D8EA8;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,656(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,660(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,664(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// lfs f11,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lfs f8,1480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f9,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f29,f13,f8,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f0.f64));
	// bl 0x82817bb8
	ctx.lr = 0x827D8F0C;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f30,124(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r28,r30,1500
	ctx.r28.s64 = ctx.r30.s64 + 1500;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r27.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r7,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r7.u32);
	// lfs f0,1480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D8F9C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D8FA8;
	sub_82817F30(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D8FDC;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D8FE8;
	sub_82817F30(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x827d93a4
	goto loc_827D93A4;
loc_827D9044:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r28,r30,1468
	ctx.r28.s64 = ctx.r30.s64 + 1468;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bl 0x82817bb8
	ctx.lr = 0x827D906C;
	sub_82817BB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x827D907C;
	sub_82817BB8(ctx, base);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f28
	ctx.f13.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f29,-27300(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x827d91d8
	if (!ctx.cr6.lt) goto loc_827D91D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f28,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x827D90C4;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,1512
	ctx.r4.s64 = ctx.r30.s64 + 1512;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D911C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D9128;
	sub_82817F30(ctx, base);
	// addi r4,r30,1500
	ctx.r4.s64 = ctx.r30.s64 + 1500;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x824f97d8
	ctx.lr = 0x827D9134;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x827D9140;
	sub_82817F30(ctx, base);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x827d9310
	goto loc_827D9310;
loc_827D91D8:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x827d92ec
	if (!ctx.cr6.gt) goto loc_827D92EC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f28,1480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x827D91F0;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r30,1512
	ctx.r4.s64 = ctx.r30.s64 + 1512;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D923C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D9248;
	sub_82817F30(ctx, base);
	// addi r4,r30,1500
	ctx.r4.s64 = ctx.r30.s64 + 1500;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x824f97d8
	ctx.lr = 0x827D9254;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817f30
	ctx.lr = 0x827D9260;
	sub_82817F30(ctx, base);
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x827d9310
	goto loc_827D9310;
loc_827D92EC:
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
loc_827D9310:
	// lfs f13,1480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,1500
	ctx.r4.s64 = ctx.r30.s64 + 1500;
	// lfs f0,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x824f97d8
	ctx.lr = 0x827D9330;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D933C;
	sub_82817F30(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r4,r30,1512
	ctx.r4.s64 = ctx.r30.s64 + 1512;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D9370;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817f30
	ctx.lr = 0x827D937C;
	sub_82817F30(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_827D93A4:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-10428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10428);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d9424
	if (!ctx.cr6.lt) goto loc_827D9424;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d9424
	if (!ctx.cr6.lt) goto loc_827D9424;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d9424
	if (!ctx.cr6.lt) goto loc_827D9424;
	// lfs f0,1492(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f13,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f0,1492(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_827D9424:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f10,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// fsel f0,f9,f0,f29
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f9,f30,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// bne cr6,0x827d94a8
	if (!ctx.cr6.eq) goto loc_827D94A8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// b 0x827d94d8
	goto loc_827D94D8;
loc_827D94A8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f9,16668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x827d94c4
	if (!ctx.cr6.lt) goto loc_827D94C4;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// b 0x827d94d8
	goto loc_827D94D8;
loc_827D94C4:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f9,f27,f13
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f13.f64));
	// fmuls f13,f9,f10
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f30,f11,f9
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
loc_827D94D8:
	// fmuls f12,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x827D952C;
	sub_824F97D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817f30
	ctx.lr = 0x827D9538;
	sub_82817F30(ctx, base);
	// lfs f12,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f3,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// fsel f30,f7,f12,f13
	ctx.f30.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f13,f7,f13,f12
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f12,f6,f10,f11
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fsel f11,f6,f11,f10
	ctx.f11.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fsel f7,f5,f9,f0
	ctx.f7.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// fsel f10,f5,f0,f9
	ctx.f10.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f29,f4,f8,f0
	ctx.f29.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsel f0,f4,f0,f8
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// fadds f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// lfs f5,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// fsubs f4,f30,f9
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fsubs f3,f12,f8
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsubs f1,f29,f5
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// fsel f9,f4,f30,f9
	ctx.f9.f64 = ctx.f4.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fsel f12,f3,f12,f8
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// fsel f8,f2,f7,f6
	ctx.f8.f64 = ctx.f2.f64 >= 0.0 ? ctx.f7.f64 : ctx.f6.f64;
	// fsel f7,f1,f29,f5
	ctx.f7.f64 = ctx.f1.f64 >= 0.0 ? ctx.f29.f64 : ctx.f5.f64;
	// fsubs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f3,f0,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsel f13,f6,f9,f13
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsel f13,f5,f12,f11
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsel f13,f4,f8,f10
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsel f0,f3,f7,f0
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82817b48
	ctx.lr = 0x827D9610;
	sub_82817B48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r10,624(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_827D9644:
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x827D9650;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D9658"))) PPC_WEAK_FUNC(sub_827D9658);
PPC_FUNC_IMPL(__imp__sub_827D9658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1452(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1452);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d968c
	if (ctx.cr0.eq) goto loc_827D968C;
	// lfs f0,1576(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1580(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1580);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1584(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1588(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1588);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1592(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1592);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1596(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1596);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1600);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1604);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	ctx.f6.f64 = double(temp.f32);
	// b 0x827d96bc
	goto loc_827D96BC;
loc_827D968C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lfs f0,1700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1708(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1708);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1712);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1728);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1732);
	ctx.f6.f64 = double(temp.f32);
loc_827D96BC:
	// stfs f6,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D96E8"))) PPC_WEAK_FUNC(sub_827D96E8);
PPC_FUNC_IMPL(__imp__sub_827D96E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d9708
	if (ctx.cr6.eq) goto loc_827D9708;
	// lwz r10,660(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 660);
	// lwz r9,664(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 664);
	// lwz r11,656(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 656);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x827d9714
	goto loc_827D9714;
loc_827D9708:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_827D9714:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D9720"))) PPC_WEAK_FUNC(sub_827D9720);
PPC_FUNC_IMPL(__imp__sub_827D9720) {
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
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f10,f11,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f0.f64));
	// lfs f3,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
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
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82332e18
	ctx.lr = 0x827D97D8;
	sub_82332E18(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// fabs f2,f31
	ctx.f2.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// bl 0x82a4e678
	ctx.lr = 0x827D97E8;
	sub_82A4E678(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fabs f2,f31
	ctx.f2.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f0,17636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x82a4e678
	ctx.lr = 0x827D9810;
	sub_82A4E678(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17632(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17632);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfs f12,17628(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17628);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bge cr6,0x827d9858
	if (!ctx.cr6.lt) goto loc_827D9858;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16852);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_827D9858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_827D9878"))) PPC_WEAK_FUNC(sub_827D9878);
PPC_FUNC_IMPL(__imp__sub_827D9878) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d9720
	ctx.lr = 0x827D9894;
	sub_827D9720(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x827d98b0
	if (!ctx.cr6.gt) goto loc_827D98B0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_827D98B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D98C0"))) PPC_WEAK_FUNC(sub_827D98C0);
PPC_FUNC_IMPL(__imp__sub_827D98C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f11,f6,f9,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f11.f64));
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmadds f7,f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f10,f5,f9,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f31,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// lfs f12,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f2,f4,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fmadds f0,f3,f4,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f8,f8,f4,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f10,f6,f4,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f11,-44(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fadds f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fadds f0,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// fadds f11,f10,f31
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// stfs f11,-40(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stw r8,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blt cr6,0x827d99e0
	if (ctx.cr6.lt) goto loc_827D99E0;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f12,-20(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x827d99e0
	if (ctx.cr6.lt) goto loc_827D99E0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x827d99e0
	if (ctx.cr6.gt) goto loc_827D99E0;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x827d99e0
	if (ctx.cr6.lt) goto loc_827D99E0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble cr6,0x827d99e4
	if (!ctx.cr6.gt) goto loc_827D99E4;
loc_827D99E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827D99E4:
	// lfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

