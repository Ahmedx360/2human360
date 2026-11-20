#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8258B788"))) PPC_WEAK_FUNC(sub_8258B788);
PPC_FUNC_IMPL(__imp__sub_8258B788) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258aa70
	sub_8258AA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B798"))) PPC_WEAK_FUNC(sub_8258B798);
PPC_FUNC_IMPL(__imp__sub_8258B798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ac18
	sub_8258AC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7A8"))) PPC_WEAK_FUNC(sub_8258B7A8);
PPC_FUNC_IMPL(__imp__sub_8258B7A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258ac30
	sub_8258AC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7B8"))) PPC_WEAK_FUNC(sub_8258B7B8);
PPC_FUNC_IMPL(__imp__sub_8258B7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258aa60
	sub_8258AA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7C8"))) PPC_WEAK_FUNC(sub_8258B7C8);
PPC_FUNC_IMPL(__imp__sub_8258B7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258aad8
	sub_8258AAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7D8"))) PPC_WEAK_FUNC(sub_8258B7D8);
PPC_FUNC_IMPL(__imp__sub_8258B7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258aa78
	sub_8258AA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7E8"))) PPC_WEAK_FUNC(sub_8258B7E8);
PPC_FUNC_IMPL(__imp__sub_8258B7E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258b650
	sub_8258B650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B7F8"))) PPC_WEAK_FUNC(sub_8258B7F8);
PPC_FUNC_IMPL(__imp__sub_8258B7F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258abf8
	sub_8258ABF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B808"))) PPC_WEAK_FUNC(sub_8258B808);
PPC_FUNC_IMPL(__imp__sub_8258B808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258abe8
	sub_8258ABE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B818"))) PPC_WEAK_FUNC(sub_8258B818);
PPC_FUNC_IMPL(__imp__sub_8258B818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8258b030
	sub_8258B030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B828"))) PPC_WEAK_FUNC(sub_8258B828);
PPC_FUNC_IMPL(__imp__sub_8258B828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B838"))) PPC_WEAK_FUNC(sub_8258B838);
PPC_FUNC_IMPL(__imp__sub_8258B838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258b870
	if (ctx.cr6.eq) goto loc_8258B870;
	// bl 0x823bc990
	ctx.lr = 0x8258B860;
	sub_823BC990(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258b870
	if (!ctx.cr6.eq) goto loc_8258B870;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258b87c
	goto loc_8258B87C;
loc_8258B870:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8258B87C;
	sub_82338A28(ctx, base);
loc_8258B87C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B898"))) PPC_WEAK_FUNC(sub_8258B898);
PPC_FUNC_IMPL(__imp__sub_8258B898) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc990
	sub_823BC990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258B8A0"))) PPC_WEAK_FUNC(sub_8258B8A0);
PPC_FUNC_IMPL(__imp__sub_8258B8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258B8BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258b8d0
	if (ctx.cr0.eq) goto loc_8258B8D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258b948
	ctx.lr = 0x8258B8CC;
	sub_8258B948(ctx, base);
	// b 0x8258b8d4
	goto loc_8258B8D4;
loc_8258B8D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258B8D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B8E8"))) PPC_WEAK_FUNC(sub_8258B8E8);
PPC_FUNC_IMPL(__imp__sub_8258B8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bc990
	ctx.lr = 0x8258B908;
	sub_823BC990(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258b918
	if (!ctx.cr6.eq) goto loc_8258B918;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8258b930
	goto loc_8258B930;
loc_8258B918:
	// bl 0x82338750
	ctx.lr = 0x8258B91C;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258b930
	if (ctx.cr6.eq) goto loc_8258B930;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8258B930;
	sub_82338858(ctx, base);
loc_8258B930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258B948"))) PPC_WEAK_FUNC(sub_8258B948);
PPC_FUNC_IMPL(__imp__sub_8258B948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8258B950;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82338b88
	ctx.lr = 0x8258B960;
	sub_82338B88(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-7504
	ctx.r11.s64 = ctx.r11.s64 + -7504;
	// addi r10,r10,-6496
	ctx.r10.s64 = ctx.r10.s64 + -6496;
	// addi r9,r9,-6444
	ctx.r9.s64 = ctx.r9.s64 + -6444;
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
	ctx.lr = 0x8258B9A4;
	sub_82A4EA80(ctx, base);
	// lwz r10,1440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,1488
	ctx.r29.s64 = ctx.r31.s64 + 1488;
	// addi r27,r30,1488
	ctx.r27.s64 = ctx.r30.s64 + 1488;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r10,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r10.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,1444(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// lbz r10,1448(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1448);
	// stb r10,1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1448, ctx.r10.u8);
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// lwz r10,1456(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// lwz r10,1460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// lwz r10,1464(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// lwz r10,1468(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r10,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r10.u32);
	// lwz r10,1472(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// lwz r10,1476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// lwz r10,1480(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r10,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r10.u32);
	// lwz r10,1484(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r28,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r28.u32);
	// stw r28,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r28.u32);
	// stw r28,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r28.u32);
	// stw r28,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r28.u32);
	// stw r28,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r28.u32);
	// beq cr6,0x8258babc
	if (ctx.cr6.eq) goto loc_8258BABC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258babc
	if (!ctx.cr6.gt) goto loc_8258BABC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ba60
	if (ctx.cr0.eq) goto loc_8258BA60;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8258BA60;
	sub_82332C38(ctx, base);
loc_8258BA60:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258babc
	if (!ctx.cr6.gt) goto loc_8258BABC;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_8258BA74:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8258BA88;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258baa8
	if (ctx.cr0.eq) goto loc_8258BAA8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8258BAA8;
	sub_82A4EA80(ctx, base);
loc_8258BAA8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258ba74
	if (ctx.cr6.lt) goto loc_8258BA74;
loc_8258BABC:
	// lfs f0,1512(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,1552
	ctx.r3.s64 = ctx.r31.s64 + 1552;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// addi r4,r30,1552
	ctx.r4.s64 = ctx.r30.s64 + 1552;
	// lfs f0,1516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	ctx.f0.f64 = double(temp.f32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stfs f0,1516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// lwz r11,1520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// lfs f0,1544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lfs f0,1548(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8258BB1C;
	sub_82A4EA80(ctx, base);
	// addi r29,r31,1600
	ctx.r29.s64 = ctx.r31.s64 + 1600;
	// addi r27,r30,1600
	ctx.r27.s64 = ctx.r30.s64 + 1600;
	// stw r28,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r28.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r28,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r28.u32);
	// stw r28,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r28,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r28.u32);
	// stw r28,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r28.u32);
	// beq cr6,0x8258bbcc
	if (ctx.cr6.eq) goto loc_8258BBCC;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258bbcc
	if (!ctx.cr6.gt) goto loc_8258BBCC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258bb74
	if (ctx.cr0.eq) goto loc_8258BB74;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8258BB74;
	sub_82332C38(ctx, base);
loc_8258BB74:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258bbcc
	if (!ctx.cr6.gt) goto loc_8258BBCC;
loc_8258BB84:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8258BB98;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258bbb8
	if (ctx.cr0.eq) goto loc_8258BBB8;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,44
	ctx.r5.s64 = 44;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8258BBB8;
	sub_82A4EA80(ctx, base);
loc_8258BBB8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258bb84
	if (ctx.cr6.lt) goto loc_8258BB84;
loc_8258BBCC:
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lwz r11,1636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// lwz r11,1660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// lwz r11,1664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,1668(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// lwz r11,1672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// lwz r11,1676(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1676);
	// stw r11,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258BC48"))) PPC_WEAK_FUNC(sub_8258BC48);
PPC_FUNC_IMPL(__imp__sub_8258BC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8258BC50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r28,1600
	ctx.r30.s64 = ctx.r28.s64 + 1600;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,44
	ctx.r6.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,1616(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1616);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8258BC78;
	sub_82332CA8(ctx, base);
	// lwz r3,1612(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258bc88
	if (ctx.cr6.eq) goto loc_8258BC88;
	// bl 0x82332db8
	ctx.lr = 0x8258BC88;
	sub_82332DB8(ctx, base);
loc_8258BC88:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r28,1488
	ctx.r31.s64 = ctx.r28.s64 + 1488;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1504(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// bl 0x82332ca8
	ctx.lr = 0x8258BCB4;
	sub_82332CA8(ctx, base);
	// lwz r3,1500(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258bcc4
	if (ctx.cr6.eq) goto loc_8258BCC4;
	// bl 0x82332db8
	ctx.lr = 0x8258BCC4;
	sub_82332DB8(ctx, base);
loc_8258BCC4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r11,1408(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1408, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x8258BCE4;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258bcf4
	if (ctx.cr0.eq) goto loc_8258BCF4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332db8
	ctx.lr = 0x8258BCF4;
	sub_82332DB8(ctx, base);
loc_8258BCF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258BD00"))) PPC_WEAK_FUNC(sub_8258BD00);
PPC_FUNC_IMPL(__imp__sub_8258BD00) {
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
	ctx.lr = 0x8258BD18;
	sub_829BC540(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-7504
	ctx.r11.s64 = ctx.r11.s64 + -7504;
	// addi r10,r10,-6496
	ctx.r10.s64 = ctx.r10.s64 + -6496;
	// addi r9,r9,-6444
	ctx.r9.s64 = ctx.r9.s64 + -6444;
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
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x8258BD54;
	sub_8312E7DC(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r5,r7,-32616
	ctx.r5.s64 = ctx.r7.s64 + -32616;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// lfs f12,-32616(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -32616);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// li r9,100
	ctx.r9.s64 = 100;
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lfs f0,156(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r4.u32);
	// lfs f13,128(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lfs f11,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stw r3,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r3.u32);
	// stfs f13,1516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// stfs f12,1544(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stfs f11,1548(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1548, temp.u32);
	// stw r8,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r8.u32);
	// stw r8,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r9.u32);
	// stw r9,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r9.u32);
	// stw r10,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r10.u32);
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258BE10"))) PPC_WEAK_FUNC(sub_8258BE10);
PPC_FUNC_IMPL(__imp__sub_8258BE10) {
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
	// bl 0x82a61738
	ctx.lr = 0x8258BE28;
	__savefpr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// bl 0x8258d438
	ctx.lr = 0x8258BE40;
	sub_8258D438(ctx, base);
	// lwa r11,1464(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1464));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lwa r10,1468(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1468));
	// lfs f8,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lwa r8,1472(r31)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1472));
	// lfs f7,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,1460(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfs f6,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f13,f9
	ctx.f13.f64 = double(float(ctx.f9.f64));
	// lfs f0,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f5,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f4.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f3,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f3.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f30.f64 = double(temp.f32);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// lfs f29,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfs f28,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ble cr6,0x8258c030
	if (!ctx.cr6.gt) goto loc_8258C030;
loc_8258BF08:
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258c020
	if (!ctx.cr6.gt) goto loc_8258C020;
loc_8258BF18:
	// lwz r9,1468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// lwz r7,1472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// mullw r6,r9,r11
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,1464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r8,1612(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfs f11,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// lfd f26,160(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f27,80(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// fcfid f27,f27
	ctx.f27.f64 = double(ctx.f27.s64);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// frsp f26,f26
	ctx.f26.f64 = double(float(ctx.f26.f64));
	// frsp f27,f27
	ctx.f27.f64 = double(float(ctx.f27.f64));
	// lfd f25,152(r1)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f24,144(r1)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f25,f25
	ctx.f25.f64 = double(ctx.f25.s64);
	// fcfid f24,f24
	ctx.f24.f64 = double(ctx.f24.s64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// fmadds f27,f26,f0,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f27.f64));
	// frsp f26,f25
	ctx.f26.f64 = double(float(ctx.f25.f64));
	// frsp f25,f24
	ctx.f25.f64 = double(float(ctx.f24.f64));
	// fsubs f27,f27,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// fmadds f26,f25,f0,f26
	ctx.f26.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmuls f25,f1,f27
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// fmuls f24,f2,f27
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// fmuls f27,f31,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fsubs f26,f26,f12
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmadds f25,f4,f11,f25
	ctx.f25.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f25.f64));
	// fmadds f24,f5,f11,f24
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f24.f64));
	// fmadds f11,f3,f11,f27
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f27.f64));
	// fmadds f27,f29,f26,f25
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmadds f25,f30,f26,f24
	ctx.f25.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f24.f64));
	// fmadds f11,f28,f26,f11
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 + ctx.f11.f64));
	// fadds f27,f27,f7
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f7.f64));
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f27,f25,f8
	ctx.f27.f64 = double(float(ctx.f25.f64 + ctx.f8.f64));
	// stfs f27,104(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// lwz r9,1464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8258bf18
	if (ctx.cr6.lt) goto loc_8258BF18;
loc_8258C020:
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258bf08
	if (ctx.cr6.lt) goto loc_8258BF08;
loc_8258C030:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f9,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stfs f10,1556(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// addi r11,r31,1552
	ctx.r11.s64 = ctx.r31.s64 + 1552;
	// stfs f12,1564(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f10,1568(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1568, temp.u32);
	// stfs f12,1576(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1576, temp.u32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stfs f0,1572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1572, temp.u32);
	// stfs f13,1580(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1580, temp.u32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// stfs f9,1588(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f13,1592(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stfs f0,1596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
loc_8258C070:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f12,f3,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f0,f12,f4,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f13,f30,f10,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f10,f28,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f11.f64));
	// fmadds f0,f29,f10,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x8258c070
	if (!ctx.cr0.eq) goto loc_8258C070;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61784
	ctx.lr = 0x8258C0E8;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258C100"))) PPC_WEAK_FUNC(sub_8258C100);
PPC_FUNC_IMPL(__imp__sub_8258C100) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,1476
	ctx.r4.s64 = ctx.r31.s64 + 1476;
	// bl 0x82817bb8
	ctx.lr = 0x8258C12C;
	sub_82817BB8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r9,1616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r8,1408(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r9.u32);
	// lfs f30,17808(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17808);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258c318
	if (!ctx.cr6.gt) goto loc_8258C318;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f8,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,32716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f5.f64 = double(temp.f32);
	// lfs f2,16668(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
loc_8258C1A0:
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8258c1d8
	if (ctx.cr6.eq) goto loc_8258C1D8;
	// lwz r6,2112(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2112);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8258c1d8
	if (!ctx.cr6.gt) goto loc_8258C1D8;
	// lwz r9,84(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258c1d8
	if (!ctx.cr0.eq) goto loc_8258C1D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8258c1e0
	goto loc_8258C1E0;
loc_8258C1D8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
loc_8258C1E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c304
	if (ctx.cr6.eq) goto loc_8258C304;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bne cr6,0x8258c254
	if (!ctx.cr6.eq) goto loc_8258C254;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8258c280
	goto loc_8258C280;
loc_8258C254:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8258c26c
	if (!ctx.cr6.lt) goto loc_8258C26C;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// b 0x8258c280
	goto loc_8258C280;
loc_8258C26C:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fmuls f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
loc_8258C280:
	// fmuls f13,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f13,f8,f12,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f0,f6,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// ble cr6,0x8258c304
	if (!ctx.cr6.gt) goto loc_8258C304;
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f12,f8,f8
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f0,f8,f10,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f12,f7,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f0,f6,f11,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f12,f6,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8258c2e0
	if (ctx.cr6.gt) goto loc_8258C2E0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8258c304
	if (!ctx.cr6.eq) goto loc_8258C304;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x8258c304
	if (!ctx.cr6.gt) goto loc_8258C304;
loc_8258C2E0:
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
	// stw r7,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r7.u32);
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// stw r9,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
	// lfs f12,1660(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// stfs f12,1660(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1660, temp.u32);
loc_8258C304:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,44
	ctx.r8.s64 = ctx.r8.s64 + 44;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258c1a0
	if (ctx.cr6.lt) goto loc_8258C1A0;
loc_8258C318:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C32C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8258C350"))) PPC_WEAK_FUNC(sub_8258C350);
PPC_FUNC_IMPL(__imp__sub_8258C350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8258C358;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258c400
	if (!ctx.cr6.gt) goto loc_8258C400;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8258C390:
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c3bc
	if (ctx.cr6.eq) goto loc_8258C3BC;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258c3bc
	if (!ctx.cr6.gt) goto loc_8258C3BC;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c3e4
	if (ctx.cr0.eq) goto loc_8258C3E4;
loc_8258C3BC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258c3e4
	if (ctx.cr6.eq) goto loc_8258C3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258c3fc
	if (!ctx.cr0.eq) goto loc_8258C3FC;
loc_8258C3E4:
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258c390
	if (ctx.cr6.lt) goto loc_8258C390;
	// b 0x8258c400
	goto loc_8258C400;
loc_8258C3FC:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8258C400:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C410"))) PPC_WEAK_FUNC(sub_8258C410);
PPC_FUNC_IMPL(__imp__sub_8258C410) {
	PPC_FUNC_PROLOGUE();
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,1616(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,1612(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8258C43C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8258c45c
	if (ctx.cr6.eq) goto loc_8258C45C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8258c43c
	if (ctx.cr6.lt) goto loc_8258C43C;
	// blr 
	return;
loc_8258C45C:
	// lwz r10,1464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1464);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r7,r11,r8
	ctx.r7.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// divw r4,r11,r8
	ctx.r4.s32 = ctx.r11.s32 / ctx.r8.s32;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// twllei r8,0
	// twllei r8,0
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// twlgei r9,-1
	// twlgei r10,-1
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258C4B8"))) PPC_WEAK_FUNC(sub_8258C4B8);
PPC_FUNC_IMPL(__imp__sub_8258C4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8258C4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258c6ac
	if (ctx.cr6.eq) goto loc_8258C6AC;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258c6ac
	if (!ctx.cr6.gt) goto loc_8258C6AC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c6ac
	if (!ctx.cr0.eq) goto loc_8258C6AC;
	// lwz r11,1408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// addi r28,r29,1408
	ctx.r28.s64 = ctx.r29.s64 + 1408;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258c350
	ctx.lr = 0x8258C514;
	sub_8258C350(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8258c698
	if (ctx.cr0.eq) goto loc_8258C698;
	// stw r31,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,4276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4276, ctx.r29.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258c690
	if (!ctx.cr6.eq) goto loc_8258C690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,1672(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1672);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r29,1668
	ctx.r11.s64 = ctx.r29.s64 + 1668;
	// lfs f10,1668(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1668);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1676(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1676);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f8,f0,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f10,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8258c5bc
	if (!ctx.cr6.gt) goto loc_8258C5BC;
	// stw r27,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r27.u32);
loc_8258C5BC:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lwz r11,464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,1476(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1476);
	// addi r11,r29,1476
	ctx.r11.s64 = ctx.r29.s64 + 1476;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// lwz r10,1484(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1484);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,1480(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1480);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r11,316(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,1476(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1476);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1480(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1480);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r9,1484(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1484);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// bl 0x82891118
	ctx.lr = 0x8258C688;
	sub_82891118(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
loc_8258C690:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x8258c6d4
	goto loc_8258C6D4;
loc_8258C698:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258C6AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829c62f0
	ctx.lr = 0x8258C6B8;
	sub_829C62F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x8258C6C4;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8258C6CC;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x8258C6D4;
	sub_82333960(ctx, base);
loc_8258C6D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258C6E0"))) PPC_WEAK_FUNC(sub_8258C6E0);
PPC_FUNC_IMPL(__imp__sub_8258C6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// beq cr6,0x8258c770
	if (ctx.cr6.eq) goto loc_8258C770;
	// lwz r9,1616(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1616);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258c770
	if (!ctx.cr6.gt) goto loc_8258C770;
	// lwz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
loc_8258C714:
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8258c734
	if (ctx.cr6.eq) goto loc_8258C734;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8258c714
	if (ctx.cr6.lt) goto loc_8258C714;
	// b 0x8258c770
	goto loc_8258C770;
loc_8258C734:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c770
	if (ctx.cr6.eq) goto loc_8258C770;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r10,4276(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4276);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258c754
	if (!ctx.cr6.eq) goto loc_8258C754;
	// stw r8,4276(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4276, ctx.r8.u32);
loc_8258C754:
	// lwz r10,1648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// lwz r9,1612(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258c770
	if (!ctx.cr6.eq) goto loc_8258C770;
	// bl 0x8258c100
	ctx.lr = 0x8258C770;
	sub_8258C100(ctx, base);
loc_8258C770:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258C788"))) PPC_WEAK_FUNC(sub_8258C788);
PPC_FUNC_IMPL(__imp__sub_8258C788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258C790;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258c878
	if (!ctx.cr6.gt) goto loc_8258C878;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f29,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f29.f64 = double(temp.f32);
loc_8258C7C0:
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8258c864
	if (ctx.cr0.eq) goto loc_8258C864;
	// lwz r9,2112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258c864
	if (!ctx.cr6.gt) goto loc_8258C864;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258c864
	if (!ctx.cr0.eq) goto loc_8258C864;
	// lwz r3,1492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// lwz r6,4080(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x8258c84c
	if (ctx.cr6.eq) goto loc_8258C84C;
	// lfs f0,620(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r6,620
	ctx.r5.s64 = ctx.r6.s64 + 620;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,624(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258c880
	if (ctx.cr0.eq) goto loc_8258C880;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bgt cr6,0x8258c880
	if (ctx.cr6.gt) goto loc_8258C880;
	// b 0x8258c864
	goto loc_8258C864;
loc_8258C84C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258C85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258c880
	if (ctx.cr0.eq) goto loc_8258C880;
loc_8258C864:
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258c7c0
	if (ctx.cr6.lt) goto loc_8258C7C0;
loc_8258C878:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
loc_8258C880:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8258C898"))) PPC_WEAK_FUNC(sub_8258C898);
PPC_FUNC_IMPL(__imp__sub_8258C898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8258C8A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1664(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258c8d0
	if (!ctx.cr6.eq) goto loc_8258C8D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829c62f0
	ctx.lr = 0x8258C8C4;
	sub_829C62F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8258C8CC;
	sub_82333960(ctx, base);
	// b 0x8258ca68
	goto loc_8258CA68;
loc_8258C8D0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258c8e8
	if (!ctx.cr6.eq) goto loc_8258C8E8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8258ca68
	if (!ctx.cr6.eq) goto loc_8258CA68;
loc_8258C8E8:
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r8,304(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8258c998
	if (!ctx.cr6.gt) goto loc_8258C998;
	// lwz r7,300(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
loc_8258C90C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c988
	if (ctx.cr6.eq) goto loc_8258C988;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258c988
	if (!ctx.cr6.gt) goto loc_8258C988;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258c988
	if (!ctx.cr0.eq) goto loc_8258C988;
	// lwz r10,1692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r5,1456(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8258c988
	if (ctx.cr6.eq) goto loc_8258C988;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8258c988
	if (ctx.cr6.eq) goto loc_8258C988;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8258c9f4
	if (ctx.cr6.lt) goto loc_8258C9F4;
loc_8258C988:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8258c90c
	if (ctx.cr6.lt) goto loc_8258C90C;
loc_8258C998:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8258ca68
	if (ctx.cr6.eq) goto loc_8258CA68;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8258C9A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258ca58
	if (ctx.cr0.eq) goto loc_8258CA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,80(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r28,1664(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1664);
	// bl 0x82833180
	ctx.lr = 0x8258C9C0;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,-6376
	ctx.r11.s64 = ctx.r11.s64 + -6376;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// b 0x8258ca5c
	goto loc_8258CA5C;
loc_8258C9F4:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// bne cr6,0x8258ca68
	if (!ctx.cr6.eq) goto loc_8258CA68;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8258CA0C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258ca58
	if (ctx.cr0.eq) goto loc_8258CA58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,80(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r28,1664(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1664);
	// bl 0x82833180
	ctx.lr = 0x8258CA24;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// addi r11,r11,-6376
	ctx.r11.s64 = ctx.r11.s64 + -6376;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// b 0x8258ca5c
	goto loc_8258CA5C;
loc_8258CA58:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8258CA5C:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8258CA68;
	sub_82833A30(ctx, base);
loc_8258CA68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258CA70"))) PPC_WEAK_FUNC(sub_8258CA70);
PPC_FUNC_IMPL(__imp__sub_8258CA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258CA78;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258cb08
	if (!ctx.cr6.gt) goto loc_8258CB08;
loc_8258CA94:
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258caf8
	if (!ctx.cr6.gt) goto loc_8258CAF8;
loc_8258CAA4:
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258cae0
	if (ctx.cr6.eq) goto loc_8258CAE0;
	// lwz r7,2112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8258cae0
	if (!ctx.cr6.gt) goto loc_8258CAE0;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cae8
	if (ctx.cr0.eq) goto loc_8258CAE8;
loc_8258CAE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_8258CAE8:
	// lwz r11,1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258caa4
	if (ctx.cr6.lt) goto loc_8258CAA4;
loc_8258CAF8:
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258ca94
	if (ctx.cr6.lt) goto loc_8258CA94;
loc_8258CB08:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258cb40
	if (!ctx.cr6.gt) goto loc_8258CB40;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8258CB1C:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8258c898
	ctx.lr = 0x8258CB2C;
	sub_8258C898(ctx, base);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258cb1c
	if (ctx.cr6.lt) goto loc_8258CB1C;
loc_8258CB40:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x8258cc24
	if (ctx.cr6.lt) goto loc_8258CC24;
	// beq cr6,0x8258cbc4
	if (ctx.cr6.eq) goto loc_8258CBC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8258cb70
	if (ctx.cr6.lt) goto loc_8258CB70;
	// bne cr6,0x8258cc8c
	if (!ctx.cr6.eq) goto loc_8258CC8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258c788
	ctx.lr = 0x8258CB6C;
	sub_8258C788(ctx, base);
	// b 0x8258cc8c
	goto loc_8258CC8C;
loc_8258CB70:
	// lwz r10,1648(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cc8c
	if (ctx.cr0.eq) goto loc_8258CC8C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258cc8c
	if (ctx.cr6.eq) goto loc_8258CC8C;
	// lwz r3,1492(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r6,4080(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4080);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,620
	ctx.r4.s64 = ctx.r10.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258cc8c
	if (ctx.cr0.eq) goto loc_8258CC8C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8258cc88
	goto loc_8258CC88;
loc_8258CBC4:
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,1520
	ctx.r4.s64 = ctx.r31.s64 + 1520;
	// lfs f13,1520(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1520);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,1524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1528(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bne cr6,0x8258cc04
	if (!ctx.cr6.eq) goto loc_8258CC04;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8258cc04
	if (!ctx.cr6.eq) goto loc_8258CC04;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8258cc8c
	if (ctx.cr6.eq) goto loc_8258CC8C;
loc_8258CC04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258CC20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258cc8c
	goto loc_8258CC8C;
loc_8258CC24:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258cc84
	if (!ctx.cr6.gt) goto loc_8258CC84;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r9,1616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
loc_8258CC3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258cc70
	if (ctx.cr6.eq) goto loc_8258CC70;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258cc6c
	if (ctx.cr6.eq) goto loc_8258CC6C;
	// lwz r7,2112(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8258cc6c
	if (!ctx.cr6.gt) goto loc_8258CC6C;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258cc70
	if (ctx.cr0.eq) goto loc_8258CC70;
loc_8258CC6C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8258CC70:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// bne 0x8258cc3c
	if (!ctx.cr0.eq) goto loc_8258CC3C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8258cc8c
	if (!ctx.cr6.eq) goto loc_8258CC8C;
loc_8258CC84:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8258CC88:
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
loc_8258CC8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258be10
	ctx.lr = 0x8258CC94;
	sub_8258BE10(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258cd4c
	if (!ctx.cr6.gt) goto loc_8258CD4C;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_8258CCC8:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8258ccf0
	if (ctx.cr6.eq) goto loc_8258CCF0;
	// lfs f12,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
loc_8258CCF0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 + 44;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// bne 0x8258ccc8
	if (!ctx.cr0.eq) goto loc_8258CCC8;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8258cd4c
	if (ctx.cr6.eq) goto loc_8258CD4C;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
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
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8258CD4C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,1540(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// beq cr6,0x8258cdb4
	if (ctx.cr6.eq) goto loc_8258CDB4;
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258cdb4
	if (!ctx.cr6.gt) goto loc_8258CDB4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8258CD84:
	// lwz r11,1500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258cda0
	if (ctx.cr6.eq) goto loc_8258CDA0;
	// bl 0x82a4cd78
	ctx.lr = 0x8258CD9C;
	sub_82A4CD78(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x8258CDA0;
	sub_82A4CD78(ctx, base);
loc_8258CDA0:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258cd84
	if (ctx.cr6.lt) goto loc_8258CD84;
loc_8258CDB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258CDC0"))) PPC_WEAK_FUNC(sub_8258CDC0);
PPC_FUNC_IMPL(__imp__sub_8258CDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r8,628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,1452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1452, ctx.r10.u32);
	// stw r11,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r11.u32);
	// stw r9,1524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1524, ctx.r9.u32);
	// stw r8,1528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1528, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258CDE8"))) PPC_WEAK_FUNC(sub_8258CDE8);
PPC_FUNC_IMPL(__imp__sub_8258CDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8258CDF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82816528
	ctx.lr = 0x8258CE0C;
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
	ctx.lr = 0x8258CE20;
	sub_82846E98(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r24,r11,-15060
	ctx.r24.s64 = ctx.r11.s64 + -15060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823928a0
	ctx.lr = 0x8258CE40;
	sub_823928A0(ctx, base);
	// stw r3,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r3.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823928a0
	ctx.lr = 0x8258CE58;
	sub_823928A0(ctx, base);
	// stw r3,1444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1444, ctx.r3.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r11,1448(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1448, ctx.r11.u8);
	// addi r28,r30,1488
	ctx.r28.s64 = ctx.r30.s64 + 1488;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r11.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r11,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r11.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r11,1464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1464, ctx.r11.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r11,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r11.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r11,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,1476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1476, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,1480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1480, ctx.r11.u32);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// stw r11,1484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1484, ctx.r11.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r11.u32);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// stw r11,1672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1672, ctx.r11.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r11,1676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1676, ctx.r11.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r26.u32);
	// beq cr6,0x8258cef0
	if (ctx.cr6.eq) goto loc_8258CEF0;
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8258CEF0;
	sub_82332C38(ctx, base);
loc_8258CEF0:
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258cf90
	if (!ctx.cr6.gt) goto loc_8258CF90;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
loc_8258CF0C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lfs f0,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r22,20(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r21,24(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// bl 0x82332d50
	ctx.lr = 0x8258CF60;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258cf7c
	if (ctx.cr0.eq) goto loc_8258CF7C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x8258CF7C;
	sub_82A4EA80(ctx, base);
loc_8258CF7C:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258cf0c
	if (ctx.cr6.lt) goto loc_8258CF0C;
loc_8258CF90:
	// lfs f0,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r30,1552
	ctx.r10.s64 = ctx.r30.s64 + 1552;
	// stfs f0,1512(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1512, temp.u32);
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,1516(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1516, temp.u32);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r8,1520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1520, ctx.r8.u32);
	// lwz r8,216(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r8,1524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1524, ctx.r8.u32);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r8,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r8.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// stw r8,1532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1532, ctx.r8.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// stw r8,1536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1536, ctx.r8.u32);
	// lwz r8,236(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r8,1540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1540, ctx.r8.u32);
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1544, temp.u32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1548(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1548, temp.u32);
loc_8258CFEC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x8258cfec
	if (!ctx.cr0.eq) goto loc_8258CFEC;
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// addi r28,r30,1600
	ctx.r28.s64 = ctx.r30.s64 + 1600;
	// stw r26,1616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1616, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258d03c
	if (ctx.cr6.eq) goto loc_8258D03C;
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x8258D03C;
	sub_82332C38(ctx, base);
loc_8258D03C:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258d0f8
	if (!ctx.cr6.gt) goto loc_8258D0F8;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
loc_8258D058:
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x8258D06C;
	sub_823928A0(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,44
	ctx.r5.s64 = 44;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r25,16(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r22,20(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// bl 0x82332d50
	ctx.lr = 0x8258D0C8;
	sub_82332D50(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258d0e4
	if (ctx.cr0.eq) goto loc_8258D0E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82a4ea80
	ctx.lr = 0x8258D0E4;
	sub_82A4EA80(ctx, base);
loc_8258D0E4:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258d058
	if (ctx.cr6.lt) goto loc_8258D058;
loc_8258D0F8:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,1624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1624, ctx.r11.u32);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// stw r11,1628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1628, ctx.r11.u32);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r11,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r11.u32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r11.u32);
	// lwz r11,320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// stw r11,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r11.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// stw r11,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r11.u32);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// stw r11,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r11.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r11,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r11.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// stw r11,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r11.u32);
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// stw r11,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r11.u32);
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// bl 0x82846fb0
	ctx.lr = 0x8258D154;
	sub_82846FB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824a09f0
	ctx.lr = 0x8258D168;
	sub_824A09F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8258d178
	if (ctx.cr0.eq) goto loc_8258D178;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x8258d17c
	goto loc_8258D17C;
loc_8258D178:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8258D17C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r11.u32);
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8258D1A4;
	sub_829BCD88(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D1B0"))) PPC_WEAK_FUNC(sub_8258D1B0);
PPC_FUNC_IMPL(__imp__sub_8258D1B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8258bc48
	sub_8258BC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D1B8"))) PPC_WEAK_FUNC(sub_8258D1B8);
PPC_FUNC_IMPL(__imp__sub_8258D1B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258bc48
	sub_8258BC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D1C0"))) PPC_WEAK_FUNC(sub_8258D1C0);
PPC_FUNC_IMPL(__imp__sub_8258D1C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258b8e8
	sub_8258B8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D1C8"))) PPC_WEAK_FUNC(sub_8258D1C8);
PPC_FUNC_IMPL(__imp__sub_8258D1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-6420
	ctx.r3.s64 = ctx.r11.s64 + -6420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D1D8"))) PPC_WEAK_FUNC(sub_8258D1D8);
PPC_FUNC_IMPL(__imp__sub_8258D1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8258d228
	ctx.lr = 0x8258D1F8;
	sub_8258D228(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258d20c
	if (ctx.cr6.eq) goto loc_8258D20C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8258D20C;
	sub_82333B08(ctx, base);
loc_8258D20C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D228"))) PPC_WEAK_FUNC(sub_8258D228);
PPC_FUNC_IMPL(__imp__sub_8258D228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,25576
	ctx.r31.s64 = ctx.r11.s64 + 25576;
	// lwz r11,-19336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19336);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258d270
	if (!ctx.cr0.eq) goto loc_8258D270;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-6296
	ctx.r9.s64 = ctx.r9.s64 + -6296;
	// stw r11,-19336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19336, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// bl 0x82a4c758
	ctx.lr = 0x8258D270;
	sub_82A4C758(ctx, base);
loc_8258D270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D288"))) PPC_WEAK_FUNC(sub_8258D288);
PPC_FUNC_IMPL(__imp__sub_8258D288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258d2c8
	if (!ctx.cr0.eq) goto loc_8258D2C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25572, ctx.r11.u32);
	// addi r3,r9,-6420
	ctx.r3.s64 = ctx.r9.s64 + -6420;
	// bl 0x82816528
	ctx.lr = 0x8258D2C0;
	sub_82816528(ctx, base);
	// stw r3,25568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25568, ctx.r3.u32);
	// b 0x8258d2cc
	goto loc_8258D2CC;
loc_8258D2C8:
	// lwz r3,25568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
loc_8258D2CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D2E0"))) PPC_WEAK_FUNC(sub_8258D2E0);
PPC_FUNC_IMPL(__imp__sub_8258D2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8258d228
	ctx.lr = 0x8258D300;
	sub_8258D228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258D314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D330"))) PPC_WEAK_FUNC(sub_8258D330);
PPC_FUNC_IMPL(__imp__sub_8258D330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258d368
	if (ctx.cr6.eq) goto loc_8258D368;
	// bl 0x8258d228
	ctx.lr = 0x8258D358;
	sub_8258D228(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258d368
	if (!ctx.cr6.eq) goto loc_8258D368;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258d374
	goto loc_8258D374;
loc_8258D368:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8258D374;
	sub_82333C70(ctx, base);
loc_8258D374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D390"))) PPC_WEAK_FUNC(sub_8258D390);
PPC_FUNC_IMPL(__imp__sub_8258D390) {
	PPC_FUNC_PROLOGUE();
	// b 0x8258d228
	sub_8258D228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D398"))) PPC_WEAK_FUNC(sub_8258D398);
PPC_FUNC_IMPL(__imp__sub_8258D398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258D3B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258d41c
	if (ctx.cr0.eq) goto loc_8258D41C;
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
	// addi r9,r9,-6376
	ctx.r9.s64 = ctx.r9.s64 + -6376;
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
	// b 0x8258d420
	goto loc_8258D420;
loc_8258D41C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258D420:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D438"))) PPC_WEAK_FUNC(sub_8258D438);
PPC_FUNC_IMPL(__imp__sub_8258D438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// srawi r6,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// srawi r4,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 2;
	// srawi r31,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r9.s32 >> 2;
	// lfs f0,904(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r8,r8,-3960
	ctx.r8.s64 = ctx.r8.s64 + -3960;
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// rlwinm r7,r31,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC;
	// addi r9,r9,16384
	ctx.r9.s64 = ctx.r9.s64 + 16384;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lfsx f12,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r11,r6,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// rlwinm r10,r10,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lfsx f13,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r4,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// rlwinm r9,r9,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFC;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfsx f10,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f7,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfsx f9,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfsx f5,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f13,f5,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f4
	ctx.f13.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f13,f6,f10,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmsubs f13,f2,f10,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 - ctx.f11.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fmsubs f13,f5,f10,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f1.f64));
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fnmadds f13,f3,f9,f8
	ctx.f13.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 + ctx.f8.f64)));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D548"))) PPC_WEAK_FUNC(sub_8258D548);
PPC_FUNC_IMPL(__imp__sub_8258D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258d594
	if (ctx.cr6.eq) goto loc_8258D594;
	// bl 0x823bc990
	ctx.lr = 0x8258D570;
	sub_823BC990(ctx, base);
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
	ctx.lr = 0x8258D588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8258d598
	if (!ctx.cr0.eq) goto loc_8258D598;
loc_8258D594:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258D598:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d5a8
	if (ctx.cr6.eq) goto loc_8258D5A8;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1452, ctx.r10.u32);
loc_8258D5A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D5C0"))) PPC_WEAK_FUNC(sub_8258D5C0);
PPC_FUNC_IMPL(__imp__sub_8258D5C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258d60c
	if (ctx.cr6.eq) goto loc_8258D60C;
	// bl 0x823bc990
	ctx.lr = 0x8258D5E8;
	sub_823BC990(ctx, base);
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
	ctx.lr = 0x8258D600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x8258d610
	if (!ctx.cr0.eq) goto loc_8258D610;
loc_8258D60C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258D610:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258d630
	if (ctx.cr6.eq) goto loc_8258D630;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r10.u32);
	// stw r9,1524(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1524, ctx.r9.u32);
	// stw r8,1528(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1528, ctx.r8.u32);
loc_8258D630:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D648"))) PPC_WEAK_FUNC(sub_8258D648);
PPC_FUNC_IMPL(__imp__sub_8258D648) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-6276
	ctx.r3.s64 = ctx.r11.s64 + -6276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D658"))) PPC_WEAK_FUNC(sub_8258D658);
PPC_FUNC_IMPL(__imp__sub_8258D658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258d690
	if (ctx.cr6.eq) goto loc_8258D690;
	// bl 0x8258e4b0
	ctx.lr = 0x8258D680;
	sub_8258E4B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258d690
	if (!ctx.cr6.eq) goto loc_8258D690;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258d69c
	goto loc_8258D69C;
loc_8258D690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a28
	ctx.lr = 0x8258D69C;
	sub_82338A28(ctx, base);
loc_8258D69C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D6B8"))) PPC_WEAK_FUNC(sub_8258D6B8);
PPC_FUNC_IMPL(__imp__sub_8258D6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258D6D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258d6e8
	if (ctx.cr0.eq) goto loc_8258D6E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258d760
	ctx.lr = 0x8258D6E4;
	sub_8258D760(ctx, base);
	// b 0x8258d6ec
	goto loc_8258D6EC;
loc_8258D6E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258D6EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D700"))) PPC_WEAK_FUNC(sub_8258D700);
PPC_FUNC_IMPL(__imp__sub_8258D700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8258e4b0
	ctx.lr = 0x8258D720;
	sub_8258E4B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258d730
	if (!ctx.cr6.eq) goto loc_8258D730;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8258d748
	goto loc_8258D748;
loc_8258D730:
	// bl 0x82338750
	ctx.lr = 0x8258D734;
	sub_82338750(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258d748
	if (ctx.cr6.eq) goto loc_8258D748;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8258D748;
	sub_82338858(ctx, base);
loc_8258D748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D760"))) PPC_WEAK_FUNC(sub_8258D760);
PPC_FUNC_IMPL(__imp__sub_8258D760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8258D780;
	sub_82338B88(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-5192
	ctx.r11.s64 = ctx.r11.s64 + -5192;
	// addi r10,r10,-4180
	ctx.r10.s64 = ctx.r10.s64 + -4180;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1420
	ctx.r4.s64 = ctx.r30.s64 + 1420;
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
	// bl 0x82873b58
	ctx.lr = 0x8258D7C8;
	sub_82873B58(ctx, base);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D800"))) PPC_WEAK_FUNC(sub_8258D800);
PPC_FUNC_IMPL(__imp__sub_8258D800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9048
	ctx.r3.s64 = ctx.r11.s64 + -9048;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D810"))) PPC_WEAK_FUNC(sub_8258D810);
PPC_FUNC_IMPL(__imp__sub_8258D810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258d848
	if (ctx.cr6.eq) goto loc_8258D848;
	// bl 0x823bcb18
	ctx.lr = 0x8258D838;
	sub_823BCB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258d848
	if (!ctx.cr6.eq) goto loc_8258D848;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258d854
	goto loc_8258D854;
loc_8258D848:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258d658
	ctx.lr = 0x8258D854;
	sub_8258D658(ctx, base);
loc_8258D854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D870"))) PPC_WEAK_FUNC(sub_8258D870);
PPC_FUNC_IMPL(__imp__sub_8258D870) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bcb18
	sub_823BCB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D878"))) PPC_WEAK_FUNC(sub_8258D878);
PPC_FUNC_IMPL(__imp__sub_8258D878) {
	PPC_FUNC_PROLOGUE();
	// b 0x8258e4b0
	sub_8258E4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258D880"))) PPC_WEAK_FUNC(sub_8258D880);
PPC_FUNC_IMPL(__imp__sub_8258D880) {
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
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x8258D8A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258d928
	if (ctx.cr0.eq) goto loc_8258D928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258d760
	ctx.lr = 0x8258D8B4;
	sub_8258D760(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-6256
	ctx.r11.s64 = ctx.r11.s64 + -6256;
	// addi r10,r10,-5244
	ctx.r10.s64 = ctx.r10.s64 + -5244;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lfs f0,1480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// lwz r11,1484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// b 0x8258d92c
	goto loc_8258D92C;
loc_8258D928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258D92C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D948"))) PPC_WEAK_FUNC(sub_8258D948);
PPC_FUNC_IMPL(__imp__sub_8258D948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bcb18
	ctx.lr = 0x8258D968;
	sub_823BCB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258d97c
	if (ctx.cr6.eq) goto loc_8258D97C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258d700
	ctx.lr = 0x8258D97C;
	sub_8258D700(ctx, base);
loc_8258D97C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258D998"))) PPC_WEAK_FUNC(sub_8258D998);
PPC_FUNC_IMPL(__imp__sub_8258D998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1420
	ctx.r3.s64 = ctx.r31.s64 + 1420;
	// bl 0x8239d768
	ctx.lr = 0x8258D9BC;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bc9e8
	ctx.lr = 0x8258D9C4;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258d9d4
	if (ctx.cr0.eq) goto loc_8258D9D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8258D9D4;
	sub_82332DB8(ctx, base);
loc_8258D9D4:
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

__attribute__((alias("__imp__sub_8258D9F0"))) PPC_WEAK_FUNC(sub_8258D9F0);
PPC_FUNC_IMPL(__imp__sub_8258D9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9020
	ctx.r3.s64 = ctx.r11.s64 + -9020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DA00"))) PPC_WEAK_FUNC(sub_8258DA00);
PPC_FUNC_IMPL(__imp__sub_8258DA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258da38
	if (ctx.cr6.eq) goto loc_8258DA38;
	// bl 0x823bcca0
	ctx.lr = 0x8258DA28;
	sub_823BCCA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258da38
	if (!ctx.cr6.eq) goto loc_8258DA38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258da44
	goto loc_8258DA44;
loc_8258DA38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258d658
	ctx.lr = 0x8258DA44;
	sub_8258D658(ctx, base);
loc_8258DA44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DA60"))) PPC_WEAK_FUNC(sub_8258DA60);
PPC_FUNC_IMPL(__imp__sub_8258DA60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bcca0
	sub_823BCCA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DA68"))) PPC_WEAK_FUNC(sub_8258DA68);
PPC_FUNC_IMPL(__imp__sub_8258DA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258DA84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258da98
	if (ctx.cr0.eq) goto loc_8258DA98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258db00
	ctx.lr = 0x8258DA94;
	sub_8258DB00(ctx, base);
	// b 0x8258da9c
	goto loc_8258DA9C;
loc_8258DA98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258DA9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DAB0"))) PPC_WEAK_FUNC(sub_8258DAB0);
PPC_FUNC_IMPL(__imp__sub_8258DAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bcca0
	ctx.lr = 0x8258DAD0;
	sub_823BCCA0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258dae4
	if (ctx.cr6.eq) goto loc_8258DAE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258d700
	ctx.lr = 0x8258DAE4;
	sub_8258D700(ctx, base);
loc_8258DAE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DB00"))) PPC_WEAK_FUNC(sub_8258DB00);
PPC_FUNC_IMPL(__imp__sub_8258DB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8258d760
	ctx.lr = 0x8258DB20;
	sub_8258D760(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-4104
	ctx.r11.s64 = ctx.r11.s64 + -4104;
	// addi r10,r10,-3092
	ctx.r10.s64 = ctx.r10.s64 + -3092;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r11,1480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// lwz r11,1484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DBB0"))) PPC_WEAK_FUNC(sub_8258DBB0);
PPC_FUNC_IMPL(__imp__sub_8258DBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8992
	ctx.r3.s64 = ctx.r11.s64 + -8992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DBC0"))) PPC_WEAK_FUNC(sub_8258DBC0);
PPC_FUNC_IMPL(__imp__sub_8258DBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8258dbf8
	if (ctx.cr6.eq) goto loc_8258DBF8;
	// bl 0x823bce28
	ctx.lr = 0x8258DBE8;
	sub_823BCE28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8258dbf8
	if (!ctx.cr6.eq) goto loc_8258DBF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258dc04
	goto loc_8258DC04;
loc_8258DBF8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258d658
	ctx.lr = 0x8258DC04;
	sub_8258D658(ctx, base);
loc_8258DC04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DC20"))) PPC_WEAK_FUNC(sub_8258DC20);
PPC_FUNC_IMPL(__imp__sub_8258DC20) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bce28
	sub_823BCE28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DC28"))) PPC_WEAK_FUNC(sub_8258DC28);
PPC_FUNC_IMPL(__imp__sub_8258DC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1472
	ctx.r3.s64 = 1472;
	// bl 0x82833108
	ctx.lr = 0x8258DC48;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258dc90
	if (ctx.cr0.eq) goto loc_8258DC90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258d760
	ctx.lr = 0x8258DC5C;
	sub_8258D760(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-3040
	ctx.r11.s64 = ctx.r11.s64 + -3040;
	// addi r10,r10,-2028
	ctx.r10.s64 = ctx.r10.s64 + -2028;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8258dc94
	goto loc_8258DC94;
loc_8258DC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258DC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DCB0"))) PPC_WEAK_FUNC(sub_8258DCB0);
PPC_FUNC_IMPL(__imp__sub_8258DCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823bce28
	ctx.lr = 0x8258DCD0;
	sub_823BCE28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8258dce4
	if (ctx.cr6.eq) goto loc_8258DCE4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8258d700
	ctx.lr = 0x8258DCE4;
	sub_8258D700(ctx, base);
loc_8258DCE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DD00"))) PPC_WEAK_FUNC(sub_8258DD00);
PPC_FUNC_IMPL(__imp__sub_8258DD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258DD08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x829bcd88
	ctx.lr = 0x8258DD1C;
	sub_829BCD88(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8258DD28;
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
	ctx.lr = 0x8258DD3C;
	sub_82846E98(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8258dd80
	if (!ctx.cr6.gt) goto loc_8258DD80;
	// addi r28,r28,1420
	ctx.r28.s64 = ctx.r28.s64 + 1420;
loc_8258DD58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8258DD6C;
	sub_82410060(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8258dd58
	if (ctx.cr6.lt) goto loc_8258DD58;
loc_8258DD80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DD88"))) PPC_WEAK_FUNC(sub_8258DD88);
PPC_FUNC_IMPL(__imp__sub_8258DD88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82825748
	ctx.lr = 0x8258DDC8;
	sub_82825748(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258dddc
	if (ctx.cr0.eq) goto loc_8258DDDC;
	// lfs f0,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
loc_8258DDDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_8258DDF8"))) PPC_WEAK_FUNC(sub_8258DDF8);
PPC_FUNC_IMPL(__imp__sub_8258DDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1470
	ctx.lr = 0x8258DE10;
	sub_829C1470(ctx, base);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// stw r9,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DE40"))) PPC_WEAK_FUNC(sub_8258DE40);
PPC_FUNC_IMPL(__imp__sub_8258DE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8258DE58;
	sub_829BC540(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-5192
	ctx.r11.s64 = ctx.r11.s64 + -5192;
	// addi r10,r10,-4180
	ctx.r10.s64 = ctx.r10.s64 + -4180;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r10,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r10.u32);
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
	// stw r11,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r11.u32);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DEB8"))) PPC_WEAK_FUNC(sub_8258DEB8);
PPC_FUNC_IMPL(__imp__sub_8258DEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829bcbf0
	ctx.lr = 0x8258DED8;
	sub_829BCBF0(ctx, base);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258DEF8"))) PPC_WEAK_FUNC(sub_8258DEF8);
PPC_FUNC_IMPL(__imp__sub_8258DEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258DF00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8258dd00
	ctx.lr = 0x8258DF14;
	sub_8258DD00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,148(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// bl 0x82846fb0
	ctx.lr = 0x8258DF20;
	sub_82846FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258df4c
	if (ctx.cr6.eq) goto loc_8258DF4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258DF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824395b8
	ctx.lr = 0x8258DF3C;
	sub_824395B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258df4c
	if (ctx.cr0.eq) goto loc_8258DF4C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8258df50
	goto loc_8258DF50;
loc_8258DF4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258DF50:
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DFA0"))) PPC_WEAK_FUNC(sub_8258DFA0);
PPC_FUNC_IMPL(__imp__sub_8258DFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8258dfa8
	sub_8258DFA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258DFA8"))) PPC_WEAK_FUNC(sub_8258DFA8);
PPC_FUNC_IMPL(__imp__sub_8258DFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8258DFB0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61740
	ctx.lr = 0x8258DFB8;
	__savefpr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r4,1456(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1456);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8258DFD4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8258DFD8;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,1460(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1460);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8258DFEC;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8258DFF0;
	sub_82333A20(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258e3c0
	if (ctx.cr6.eq) goto loc_8258E3C0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8258e3c0
	if (ctx.cr6.eq) goto loc_8258E3C0;
	// lwz r24,4280(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4280);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8258e3c0
	if (ctx.cr6.eq) goto loc_8258E3C0;
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// lbz r10,193(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 193);
	// lbz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8258e054
	if (!ctx.cr6.eq) goto loc_8258E054;
	// lfs f0,620(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8258e3c0
	if (!ctx.cr6.eq) goto loc_8258E3C0;
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8258e3c0
	if (!ctx.cr6.eq) goto loc_8258E3C0;
	// lfs f0,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8258e3c0
	if (!ctx.cr6.eq) goto loc_8258E3C0;
loc_8258E054:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// lfs f30,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r6,660(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r9,624(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r8,628(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lwz r7,620(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r11,664(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// bl 0x824f97d8
	ctx.lr = 0x8258E0F0;
	sub_824F97D8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,232(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f26,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f26.f64 = double(temp.f32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lfs f0,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// bl 0x82332e18
	ctx.lr = 0x8258E164;
	sub_82332E18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82332e18
	ctx.lr = 0x8258E170;
	sub_82332E18(ctx, base);
	// lwz r11,1464(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1464);
	// lwz r10,4276(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4276);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f12,f13
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// beq cr6,0x8258e1b8
	if (ctx.cr6.eq) goto loc_8258E1B8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8258e268
	goto loc_8258E268;
loc_8258E1B8:
	// lwz r3,1488(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8258E1C0;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8258E1C4;
	sub_824A0990(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8258e22c
	if (ctx.cr0.eq) goto loc_8258E22C;
	// lwz r27,1436(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1436);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258e218
	if (!ctx.cr6.gt) goto loc_8258E218;
	// lwz r10,1432(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
loc_8258E1F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8258e214
	if (ctx.cr6.eq) goto loc_8258E214;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258e1f4
	if (ctx.cr6.lt) goto loc_8258E1F4;
	// b 0x8258e218
	goto loc_8258E218;
loc_8258E214:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8258E218:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258E22C:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258e240
	if (!ctx.cr0.eq) goto loc_8258E240;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8258e244
	goto loc_8258E244;
loc_8258E240:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_8258E244:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x8258e25c
	if (ctx.cr6.eq) goto loc_8258E25C;
	// lwz r11,1456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1456);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8258e268
	if (!ctx.cr6.eq) goto loc_8258E268;
loc_8258E25C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8258E268:
	// lwa r11,1468(r28)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r28.u32 + 1468));
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// lfs f6,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f6.f64 = double(temp.f32);
	// lwz r10,1472(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1472);
	// lfs f5,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r28,620
	ctx.r11.s64 = ctx.r28.s64 + 620;
	// lfs f4,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fsubs f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x8258e384
	if (ctx.cr6.eq) goto loc_8258E384;
	// lfs f11,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x8258e338
	if (!ctx.cr6.eq) goto loc_8258E338;
	// lfs f11,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x8258e338
	if (!ctx.cr6.eq) goto loc_8258E338;
	// lfs f11,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x8258e384
	if (ctx.cr6.eq) goto loc_8258E384;
loc_8258E338:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f30,1480(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1480);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8258e384
	if (!ctx.cr6.gt) goto loc_8258E384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82332e18
	ctx.lr = 0x8258E360;
	sub_82332E18(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8258E384:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r3,13024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r28,656
	ctx.r6.s64 = ctx.r28.s64 + 656;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x828264e0
	ctx.lr = 0x8258E3A0;
	sub_828264E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E3C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258E3C0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a6178c
	ctx.lr = 0x8258E3CC;
	__restfpr_26(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E3D0"))) PPC_WEAK_FUNC(sub_8258E3D0);
PPC_FUNC_IMPL(__imp__sub_8258E3D0) {
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
	// li r3,1456
	ctx.r3.s64 = 1456;
	// bl 0x82833108
	ctx.lr = 0x8258E3E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258e3f4
	if (ctx.cr0.eq) goto loc_8258E3F4;
	// bl 0x8258de40
	ctx.lr = 0x8258E3F0;
	sub_8258DE40(ctx, base);
	// b 0x8258e3f8
	goto loc_8258E3F8;
loc_8258E3F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258E3F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E408"))) PPC_WEAK_FUNC(sub_8258E408);
PPC_FUNC_IMPL(__imp__sub_8258E408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25564);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258e448
	if (!ctx.cr0.eq) goto loc_8258E448;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25564, ctx.r11.u32);
	// addi r3,r9,-6276
	ctx.r3.s64 = ctx.r9.s64 + -6276;
	// bl 0x82816528
	ctx.lr = 0x8258E440;
	sub_82816528(ctx, base);
	// stw r3,25560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25560, ctx.r3.u32);
	// b 0x8258e44c
	goto loc_8258E44C;
loc_8258E448:
	// lwz r3,25560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25560);
loc_8258E44C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E460"))) PPC_WEAK_FUNC(sub_8258E460);
PPC_FUNC_IMPL(__imp__sub_8258E460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x8258e4b0
	ctx.lr = 0x8258E480;
	sub_8258E4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258E494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E4B0"))) PPC_WEAK_FUNC(sub_8258E4B0);
PPC_FUNC_IMPL(__imp__sub_8258E4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12324
	ctx.r31.s64 = ctx.r11.s64 + 12324;
	// lwz r11,12320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258e4f8
	if (!ctx.cr0.eq) goto loc_8258E4F8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-4128
	ctx.r9.s64 = ctx.r9.s64 + -4128;
	// stw r11,12320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12320, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21856
	ctx.r3.s64 = ctx.r11.s64 + 21856;
	// bl 0x82a4c758
	ctx.lr = 0x8258E4F8;
	sub_82A4C758(ctx, base);
loc_8258E4F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E510"))) PPC_WEAK_FUNC(sub_8258E510);
PPC_FUNC_IMPL(__imp__sub_8258E510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258dab0
	sub_8258DAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E518"))) PPC_WEAK_FUNC(sub_8258E518);
PPC_FUNC_IMPL(__imp__sub_8258E518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258dcb0
	sub_8258DCB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E520"))) PPC_WEAK_FUNC(sub_8258E520);
PPC_FUNC_IMPL(__imp__sub_8258E520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258d998
	sub_8258D998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E528"))) PPC_WEAK_FUNC(sub_8258E528);
PPC_FUNC_IMPL(__imp__sub_8258E528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258d700
	sub_8258D700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E530"))) PPC_WEAK_FUNC(sub_8258E530);
PPC_FUNC_IMPL(__imp__sub_8258E530) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8258d998
	sub_8258D998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E538"))) PPC_WEAK_FUNC(sub_8258E538);
PPC_FUNC_IMPL(__imp__sub_8258E538) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8258d948
	sub_8258D948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E540"))) PPC_WEAK_FUNC(sub_8258E540);
PPC_FUNC_IMPL(__imp__sub_8258E540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258E548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258e5a4
	if (ctx.cr6.eq) goto loc_8258E5A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,2216
	ctx.r11.s64 = ctx.r11.s64 + 2216;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r10.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r9,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r9.u32);
	// addi r29,r31,2080
	ctx.r29.s64 = ctx.r31.s64 + 2080;
	// bl 0x824cbb48
	ctx.lr = 0x8258E58C;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba650
	ctx.lr = 0x8258E598;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2096
	ctx.r3.s64 = ctx.r31.s64 + 2096;
	// bl 0x825b8a40
	ctx.lr = 0x8258E5A4;
	sub_825B8A40(ctx, base);
loc_8258E5A4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r9,r9,568
	ctx.r9.s64 = ctx.r9.s64 + 568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,2140
	ctx.r10.s64 = ctx.r8.s64 + 2140;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,2192
	ctx.r9.s64 = ctx.r9.s64 + 2192;
	// addi r8,r8,7928
	ctx.r8.s64 = ctx.r8.s64 + 7928;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,19648(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19648);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,-108
	ctx.r10.s64 = ctx.r11.s64 + -108;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258E648"))) PPC_WEAK_FUNC(sub_8258E648);
PPC_FUNC_IMPL(__imp__sub_8258E648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x825ba700
	ctx.lr = 0x8258E674;
	sub_825BA700(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x825b8b00
	ctx.lr = 0x8258E688;
	sub_825B8B00(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,192
	ctx.xer.ca = ctx.r11.u32 > 4294967103;
	ctx.r11.s64 = ctx.r11.s64 + 192;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258e6b4
	if (ctx.cr0.eq) goto loc_8258E6B4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258e6b4
	if (ctx.cr6.eq) goto loc_8258E6B4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258e6b8
	goto loc_8258E6B8;
loc_8258E6B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258E6B8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27644
	ctx.r3.s64 = ctx.r11.s64 + -27644;
	// bl 0x82816528
	ctx.lr = 0x8258E6C4;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// bl 0x82816528
	ctx.lr = 0x8258E6D4;
	sub_82816528(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E6E8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27604
	ctx.r3.s64 = ctx.r11.s64 + -27604;
	// bl 0x82816528
	ctx.lr = 0x8258E6F4;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// bl 0x82816528
	ctx.lr = 0x8258E704;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E714;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// bl 0x82816528
	ctx.lr = 0x8258E720;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x8258E730;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E740;
	sub_828D0CB0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1940
	ctx.r3.s64 = ctx.r11.s64 + -1940;
	// bl 0x82816528
	ctx.lr = 0x8258E74C;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-1896
	ctx.r3.s64 = ctx.r11.s64 + -1896;
	// bl 0x82816528
	ctx.lr = 0x8258E75C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E76C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27524
	ctx.r3.s64 = ctx.r11.s64 + -27524;
	// bl 0x82816528
	ctx.lr = 0x8258E778;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-1880
	ctx.r3.s64 = ctx.r11.s64 + -1880;
	// bl 0x82816528
	ctx.lr = 0x8258E788;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E798;
	sub_828D0CB0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1856
	ctx.r3.s64 = ctx.r11.s64 + -1856;
	// bl 0x82816528
	ctx.lr = 0x8258E7A4;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-1804
	ctx.r3.s64 = ctx.r11.s64 + -1804;
	// bl 0x82816528
	ctx.lr = 0x8258E7B4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E7C4;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// bl 0x82816528
	ctx.lr = 0x8258E7D0;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-1780
	ctx.r3.s64 = ctx.r11.s64 + -1780;
	// bl 0x82816528
	ctx.lr = 0x8258E7E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8258E7F0;
	sub_828D0CB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E808"))) PPC_WEAK_FUNC(sub_8258E808);
PPC_FUNC_IMPL(__imp__sub_8258E808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,-108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r9,r9,568
	ctx.r9.s64 = ctx.r9.s64 + 568;
	// stw r11,-112(r3)
	PPC_STORE_U32(ctx.r3.u32 + -112, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r9.u32);
	// addi r10,r8,2140
	ctx.r10.s64 = ctx.r8.s64 + 2140;
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,2192
	ctx.r9.s64 = ctx.r9.s64 + 2192;
	// addi r8,r8,7928
	ctx.r8.s64 = ctx.r8.s64 + 7928;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -100, ctx.r10.u32);
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 288, ctx.r9.u32);
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r8.u32);
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-108
	ctx.r11.s64 = ctx.r11.s64 + -108;
	// stw r11,-112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -112, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258E890"))) PPC_WEAK_FUNC(sub_8258E890);
PPC_FUNC_IMPL(__imp__sub_8258E890) {
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
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x825ba7d0
	ctx.lr = 0x8258E8B8;
	sub_825BA7D0(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-76
	ctx.r3.s64 = ctx.r11.s64 + -76;
	// bl 0x825b8c00
	ctx.lr = 0x8258E8CC;
	sub_825B8C00(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1768
	ctx.r3.s64 = ctx.r11.s64 + -1768;
	// bl 0x828165a8
	ctx.lr = 0x8258E8D8;
	sub_828165A8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258e91c
	if (!ctx.cr6.gt) goto loc_8258E91C;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8258E900:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258e928
	if (ctx.cr6.eq) goto loc_8258E928;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258e900
	if (ctx.cr6.lt) goto loc_8258E900;
loc_8258E91C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82410060
	ctx.lr = 0x8258E928;
	sub_82410060(ctx, base);
loc_8258E928:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-19544
	ctx.r3.s64 = ctx.r11.s64 + -19544;
	// bl 0x828165a8
	ctx.lr = 0x8258E934;
	sub_828165A8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258e978
	if (!ctx.cr6.gt) goto loc_8258E978;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8258E95C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258e984
	if (ctx.cr6.eq) goto loc_8258E984;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258e95c
	if (ctx.cr6.lt) goto loc_8258E95C;
loc_8258E978:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82410060
	ctx.lr = 0x8258E984;
	sub_82410060(ctx, base);
loc_8258E984:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1748
	ctx.r3.s64 = ctx.r11.s64 + -1748;
	// bl 0x828165a8
	ctx.lr = 0x8258E990;
	sub_828165A8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258e9d4
	if (!ctx.cr6.gt) goto loc_8258E9D4;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8258E9B8:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258e9e0
	if (ctx.cr6.eq) goto loc_8258E9E0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258e9b8
	if (ctx.cr6.lt) goto loc_8258E9B8;
loc_8258E9D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82410060
	ctx.lr = 0x8258E9E0;
	sub_82410060(ctx, base);
loc_8258E9E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1704
	ctx.r3.s64 = ctx.r11.s64 + -1704;
	// bl 0x828165a8
	ctx.lr = 0x8258E9EC;
	sub_828165A8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258ea30
	if (!ctx.cr6.gt) goto loc_8258EA30;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8258EA14:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258ea3c
	if (ctx.cr6.eq) goto loc_8258EA3C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258ea14
	if (ctx.cr6.lt) goto loc_8258EA14;
loc_8258EA30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82410060
	ctx.lr = 0x8258EA3C;
	sub_82410060(ctx, base);
loc_8258EA3C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1656
	ctx.r3.s64 = ctx.r11.s64 + -1656;
	// bl 0x828165a8
	ctx.lr = 0x8258EA48;
	sub_828165A8(ctx, base);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1824
	ctx.r10.s64 = ctx.r11.s64 + 1824;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8258ea8c
	if (!ctx.cr6.gt) goto loc_8258EA8C;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_8258EA70:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258ea98
	if (ctx.cr6.eq) goto loc_8258EA98;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8258ea70
	if (ctx.cr6.lt) goto loc_8258EA70;
loc_8258EA8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82410060
	ctx.lr = 0x8258EA98;
	sub_82410060(ctx, base);
loc_8258EA98:
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

__attribute__((alias("__imp__sub_8258EAB0"))) PPC_WEAK_FUNC(sub_8258EAB0);
PPC_FUNC_IMPL(__imp__sub_8258EAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258EAB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// bl 0x8258f310
	ctx.lr = 0x8258EAD0;
	sub_8258F310(ctx, base);
	// stw r3,-104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -104, ctx.r3.u32);
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// bl 0x824ce338
	ctx.lr = 0x8258EAF0;
	sub_824CE338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EAF8"))) PPC_WEAK_FUNC(sub_8258EAF8);
PPC_FUNC_IMPL(__imp__sub_8258EAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8258EB00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r11,r31,-112
	ctx.xer.ca = ctx.r31.u32 > 111;
	ctx.r11.s64 = ctx.r31.s64 + -112;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258eb24
	if (!ctx.cr0.eq) goto loc_8258EB24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8258eb34
	goto loc_8258EB34;
loc_8258EB24:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-108
	ctx.r11.s64 = ctx.r11.s64 + -108;
loc_8258EB34:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8258eb50
	if (!ctx.cr6.eq) goto loc_8258EB50;
	// lwz r11,-112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -112);
	// addi r3,r31,-112
	ctx.r3.s64 = ctx.r31.s64 + -112;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258EB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258EB50:
	// lwz r11,-108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// bl 0x824cd5c0
	ctx.lr = 0x8258EB70;
	sub_824CD5C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258EB78"))) PPC_WEAK_FUNC(sub_8258EB78);
PPC_FUNC_IMPL(__imp__sub_8258EB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258eb98
	if (ctx.cr6.eq) goto loc_8258EB98;
	// lwz r9,1516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1516);
loc_8258EB98:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258EBB8"))) PPC_WEAK_FUNC(sub_8258EBB8);
PPC_FUNC_IMPL(__imp__sub_8258EBB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258EBC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ec40
	if (ctx.cr6.eq) goto loc_8258EC40;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8258EBE0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258ec30
	if (ctx.cr0.eq) goto loc_8258EC30;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258ebfc
	if (ctx.cr6.eq) goto loc_8258EBFC;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8258ec00
	goto loc_8258EC00;
loc_8258EBFC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8258EC00:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ec1c
	if (ctx.cr0.eq) goto loc_8258EC1C;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8258ec20
	goto loc_8258EC20;
loc_8258EC1C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8258EC20:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f7c50
	ctx.lr = 0x8258EC28;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8258ec34
	goto loc_8258EC34;
loc_8258EC30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8258EC34:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8258EC40;
	sub_82833A30(ctx, base);
loc_8258EC40:
	// lwz r31,88(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258ec70
	if (ctx.cr6.eq) goto loc_8258EC70;
	// bl 0x823bcb18
	ctx.lr = 0x8258EC50;
	sub_823BCB18(ctx, base);
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
	ctx.lr = 0x8258EC68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8258ec74
	if (!ctx.cr0.eq) goto loc_8258EC74;
loc_8258EC70:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258EC74:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258ece4
	if (ctx.cr6.eq) goto loc_8258ECE4;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8258EC84;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258ecd4
	if (ctx.cr0.eq) goto loc_8258ECD4;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258eca0
	if (ctx.cr6.eq) goto loc_8258ECA0;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8258eca4
	goto loc_8258ECA4;
loc_8258ECA0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8258ECA4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ecc0
	if (ctx.cr0.eq) goto loc_8258ECC0;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8258ecc4
	goto loc_8258ECC4;
loc_8258ECC0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8258ECC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f7c50
	ctx.lr = 0x8258ECCC;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8258ecd8
	goto loc_8258ECD8;
loc_8258ECD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8258ECD8:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8258ECE4;
	sub_82833A30(ctx, base);
loc_8258ECE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258ECF0"))) PPC_WEAK_FUNC(sub_8258ECF0);
PPC_FUNC_IMPL(__imp__sub_8258ECF0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258edf4
	if (ctx.cr6.eq) goto loc_8258EDF4;
	// lwz r11,6100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258edf4
	if (ctx.cr6.eq) goto loc_8258EDF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,1716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1716);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258edf4
	if (ctx.cr6.eq) goto loc_8258EDF4;
	// addic. r11,r11,304
	ctx.xer.ca = ctx.r11.u32 > 4294966991;
	ctx.r11.s64 = ctx.r11.s64 + 304;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ed60
	if (ctx.cr0.eq) goto loc_8258ED60;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258ed60
	if (ctx.cr6.eq) goto loc_8258ED60;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258ed64
	goto loc_8258ED64;
loc_8258ED60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258ED64:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258edf4
	if (ctx.cr6.eq) goto loc_8258EDF4;
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
	// beq cr6,0x8258edac
	if (ctx.cr6.eq) goto loc_8258EDAC;
	// bl 0x8239a938
	ctx.lr = 0x8258ED90;
	sub_8239A938(ctx, base);
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
	ctx.lr = 0x8258EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258edb0
	goto loc_8258EDB0;
loc_8258EDAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258EDB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258edf4
	if (ctx.cr6.eq) goto loc_8258EDF4;
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f13,6112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8258edf4
	if (ctx.cr6.lt) goto loc_8258EDF4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,1716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1716, ctx.r9.u32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
loc_8258EDF4:
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

__attribute__((alias("__imp__sub_8258EE10"))) PPC_WEAK_FUNC(sub_8258EE10);
PPC_FUNC_IMPL(__imp__sub_8258EE10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r31,r30,-112
	ctx.r31.s64 = ctx.r30.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ecf0
	ctx.lr = 0x8258EE3C;
	sub_8258ECF0(ctx, base);
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1720(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258eec4
	if (ctx.cr6.eq) goto loc_8258EEC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,1724
	ctx.r10.s64 = ctx.r11.s64 + 1724;
	// lfs f0,1724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1724(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1724, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258eec4
	if (ctx.cr6.eq) goto loc_8258EEC4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,6116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,1724(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8258eec4
	if (ctx.cr6.lt) goto loc_8258EEC4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1724(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1724, temp.u32);
loc_8258EEC4:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// bl 0x824cf588
	ctx.lr = 0x8258EEDC;
	sub_824CF588(ctx, base);
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

__attribute__((alias("__imp__sub_8258EEF8"))) PPC_WEAK_FUNC(sub_8258EEF8);
PPC_FUNC_IMPL(__imp__sub_8258EEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r10,304
	ctx.xer.ca = ctx.r10.u32 > 4294966991;
	ctx.r11.s64 = ctx.r10.s64 + 304;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258ef3c
	if (ctx.cr0.eq) goto loc_8258EF3C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8258ef3c
	if (ctx.cr6.eq) goto loc_8258EF3C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258ef40
	goto loc_8258EF40;
loc_8258EF3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258EF40:
	// lwz r10,1716(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8258f020
	if (!ctx.cr6.eq) goto loc_8258F020;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258f020
	if (ctx.cr6.eq) goto loc_8258F020;
	// lwz r9,2112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8258f020
	if (!ctx.cr6.gt) goto loc_8258F020;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258f020
	if (!ctx.cr0.eq) goto loc_8258F020;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258efc4
	if (ctx.cr6.eq) goto loc_8258EFC4;
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
	// beq cr6,0x8258efb8
	if (ctx.cr6.eq) goto loc_8258EFB8;
	// bl 0x8239a938
	ctx.lr = 0x8258EF9C;
	sub_8239A938(ctx, base);
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
	ctx.lr = 0x8258EFB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258efbc
	goto loc_8258EFBC;
loc_8258EFB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258EFBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8258f020
	if (!ctx.cr6.eq) goto loc_8258F020;
loc_8258EFC4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// bl 0x82816528
	ctx.lr = 0x8258EFD0;
	sub_82816528(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r11,304
	ctx.xer.ca = ctx.r11.u32 > 4294966991;
	ctx.r11.s64 = ctx.r11.s64 + 304;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258f000
	if (ctx.cr0.eq) goto loc_8258F000;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258f000
	if (ctx.cr6.eq) goto loc_8258F000;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258f004
	goto loc_8258F004;
loc_8258F000:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258F004:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,-6056(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// bl 0x829e4160
	ctx.lr = 0x8258F020;
	sub_829E4160(ctx, base);
loc_8258F020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F038"))) PPC_WEAK_FUNC(sub_8258F038);
PPC_FUNC_IMPL(__imp__sub_8258F038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8258F040;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258f11c
	if (ctx.cr6.eq) goto loc_8258F11C;
	// lwz r10,1492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r10,144(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258f11c
	if (ctx.cr6.eq) goto loc_8258F11C;
	// lwz r30,1780(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258f11c
	if (ctx.cr6.eq) goto loc_8258F11C;
	// lwz r11,1884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258f11c
	if (ctx.cr6.eq) goto loc_8258F11C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F0A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258f11c
	if (ctx.cr0.eq) goto loc_8258F11C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82660670
	ctx.lr = 0x8258F0B4;
	sub_82660670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258f0d8
	if (!ctx.cr6.eq) goto loc_8258F0D8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8258F0D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r3,1932(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1932);
	// bl 0x824d77f8
	ctx.lr = 0x8258F0F4;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f11c
	if (ctx.cr0.eq) goto loc_8258F11C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r3,620
	ctx.r5.s64 = ctx.r3.s64 + 620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825b91a8
	ctx.lr = 0x8258F118;
	sub_825B91A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8258F11C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F128"))) PPC_WEAK_FUNC(sub_8258F128);
PPC_FUNC_IMPL(__imp__sub_8258F128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x829c1f08
	ctx.lr = 0x8258F154;
	sub_829C1F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8258f17c
	if (ctx.cr0.eq) goto loc_8258F17C;
	// bl 0x8239a680
	ctx.lr = 0x8258F160;
	sub_8239A680(ctx, base);
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
	ctx.lr = 0x8258F178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258f180
	goto loc_8258F180;
loc_8258F17C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F180:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258f194
	if (ctx.cr6.eq) goto loc_8258F194;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258f1a0
	goto loc_8258F1A0;
loc_8258F194:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
loc_8258F1A0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F1C0"))) PPC_WEAK_FUNC(sub_8258F1C0);
PPC_FUNC_IMPL(__imp__sub_8258F1C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F1D8"))) PPC_WEAK_FUNC(sub_8258F1D8);
PPC_FUNC_IMPL(__imp__sub_8258F1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F1F0"))) PPC_WEAK_FUNC(sub_8258F1F0);
PPC_FUNC_IMPL(__imp__sub_8258F1F0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8258f2f0
	if (ctx.cr6.eq) goto loc_8258F2F0;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258f2f0
	if (ctx.cr6.eq) goto loc_8258F2F0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258f2e8
	if (ctx.cr6.eq) goto loc_8258F2E8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r3,1608(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8258F248;
	sub_82414510(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,304
	ctx.xer.ca = ctx.r11.u32 > 4294966991;
	ctx.r11.s64 = ctx.r11.s64 + 304;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258f274
	if (ctx.cr0.eq) goto loc_8258F274;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8258f274
	if (ctx.cr6.eq) goto loc_8258F274;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258f278
	goto loc_8258F278;
loc_8258F274:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8258F278:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258f2cc
	if (ctx.cr6.eq) goto loc_8258F2CC;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258f2c0
	if (ctx.cr6.eq) goto loc_8258F2C0;
	// bl 0x8239ad48
	ctx.lr = 0x8258F2A4;
	sub_8239AD48(ctx, base);
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
	ctx.lr = 0x8258F2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258f2c4
	goto loc_8258F2C4;
loc_8258F2C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F2C4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8258f2e8
	if (!ctx.cr6.eq) goto loc_8258F2E8;
loc_8258F2CC:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x8258f370
	ctx.lr = 0x8258F2E8;
	sub_8258F370(ctx, base);
loc_8258F2E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8258f2f4
	goto loc_8258F2F4;
loc_8258F2F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F2F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F310"))) PPC_WEAK_FUNC(sub_8258F310);
PPC_FUNC_IMPL(__imp__sub_8258F310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x8258f354
	if (ctx.cr6.eq) goto loc_8258F354;
	// bl 0x82479080
	ctx.lr = 0x8258F330;
	sub_82479080(ctx, base);
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
	ctx.lr = 0x8258F348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8258f358
	if (!ctx.cr0.eq) goto loc_8258F358;
loc_8258F354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F358:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F370"))) PPC_WEAK_FUNC(sub_8258F370);
PPC_FUNC_IMPL(__imp__sub_8258F370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8258F378;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,148
	ctx.r3.s64 = 148;
	// lwz r28,-6056(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82833108
	ctx.lr = 0x8258F390;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f3a8
	if (ctx.cr0.eq) goto loc_8258F3A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d48e8
	ctx.lr = 0x8258F3A0;
	sub_823D48E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8258f3ac
	goto loc_8258F3AC;
loc_8258F3A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8258F3AC:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258f4d0
	if (ctx.cr6.eq) goto loc_8258F4D0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 + 68;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258f4d0
	if (ctx.cr6.eq) goto loc_8258F4D0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,-4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F40C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258f4d0
	if (ctx.cr6.eq) goto loc_8258F4D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F44C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x8258F450;
	sub_82816528(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x829e3ce0
	ctx.lr = 0x8258F4CC;
	sub_829E3CE0(ctx, base);
	// b 0x8258f500
	goto loc_8258F500;
loc_8258F4D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258f4fc
	if (ctx.cr6.eq) goto loc_8258F4FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F4FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258F4FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F500:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8258F508"))) PPC_WEAK_FUNC(sub_8258F508);
PPC_FUNC_IMPL(__imp__sub_8258F508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x8258F534;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x825b9368
	ctx.lr = 0x8258F548;
	sub_825B9368(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8258f570
	if (ctx.cr6.eq) goto loc_8258F570;
	// bl 0x8239a520
	ctx.lr = 0x8258F554;
	sub_8239A520(ctx, base);
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
	ctx.lr = 0x8258F56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258f574
	goto loc_8258F574;
loc_8258F570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8258F574:
	// stw r3,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F590"))) PPC_WEAK_FUNC(sub_8258F590);
PPC_FUNC_IMPL(__imp__sub_8258F590) {
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
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8258f65c
	if (!ctx.cr6.eq) goto loc_8258F65C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// stw r9,-88(r10)
	PPC_STORE_U32(ctx.r10.u32 + -88, ctx.r9.u32);
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lwz r9,-96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,-30232
	ctx.r10.s64 = ctx.r10.s64 + -30232;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f1,908(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r3,r10,-88
	ctx.r3.s64 = ctx.r10.s64 + -88;
	// bl 0x825186a0
	ctx.lr = 0x8258F600;
	sub_825186A0(ctx, base);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x825b9a48
	ctx.lr = 0x8258F614;
	sub_825B9A48(ctx, base);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258f65c
	if (ctx.cr6.eq) goto loc_8258F65C;
	// lwz r11,2864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258f65c
	if (ctx.cr6.eq) goto loc_8258F65C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,1632(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// lwz r11,1372(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258F65C:
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

__attribute__((alias("__imp__sub_8258F670"))) PPC_WEAK_FUNC(sub_8258F670);
PPC_FUNC_IMPL(__imp__sub_8258F670) {
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
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r8.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,1724(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1724, temp.u32);
	// stw r9,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r9.u32);
	// lwz r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1716, ctx.r9.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,1132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1664);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x8258f9d8
	ctx.lr = 0x8258F758;
	sub_8258F9D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F770"))) PPC_WEAK_FUNC(sub_8258F770);
PPC_FUNC_IMPL(__imp__sub_8258F770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,620
	ctx.r8.s64 = ctx.r10.s64 + 620;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F808"))) PPC_WEAK_FUNC(sub_8258F808);
PPC_FUNC_IMPL(__imp__sub_8258F808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r9.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82903e48
	ctx.lr = 0x8258F864;
	sub_82903E48(ctx, base);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8258F88C;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x8258F890;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f8a4
	if (ctx.cr0.eq) goto loc_8258F8A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8258f8b0
	goto loc_8258F8B0;
loc_8258F8A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_8258F8B0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F8B8;
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

__attribute__((alias("__imp__sub_8258F8D0"))) PPC_WEAK_FUNC(sub_8258F8D0);
PPC_FUNC_IMPL(__imp__sub_8258F8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x8258F8F8;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258f908
	if (!ctx.cr6.eq) goto loc_8258F908;
	// addi r3,r31,-100
	ctx.r3.s64 = ctx.r31.s64 + -100;
	// bl 0x8258f920
	ctx.lr = 0x8258F908;
	sub_8258F920(ctx, base);
loc_8258F908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F920"))) PPC_WEAK_FUNC(sub_8258F920);
PPC_FUNC_IMPL(__imp__sub_8258F920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8258F980;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x8258F984;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258f998
	if (ctx.cr0.eq) goto loc_8258F998;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8258f9a4
	goto loc_8258F9A4;
loc_8258F998:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_8258F9A4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258F9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x829e3da8
	ctx.lr = 0x8258F9C0;
	sub_829E3DA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258F9D8"))) PPC_WEAK_FUNC(sub_8258F9D8);
PPC_FUNC_IMPL(__imp__sub_8258F9D8) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,6108(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6108);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x824cf088
	ctx.lr = 0x8258FA50;
	sub_824CF088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258fa94
	if (ctx.cr6.eq) goto loc_8258FA94;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r9.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
loc_8258FA94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8258fb24
	if (ctx.cr6.eq) goto loc_8258FB24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rldicr r5,r9,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,4080(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4080);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258FB24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8258fbd0
	if (ctx.cr0.eq) goto loc_8258FBD0;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8258fbd0
	if (!ctx.cr6.gt) goto loc_8258FBD0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258fbd0
	if (!ctx.cr0.eq) goto loc_8258FBD0;
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8258FB94;
	sub_82817280(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8258FBD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8258FC20"))) PPC_WEAK_FUNC(sub_8258FC20);
PPC_FUNC_IMPL(__imp__sub_8258FC20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1604, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FC48"))) PPC_WEAK_FUNC(sub_8258FC48);
PPC_FUNC_IMPL(__imp__sub_8258FC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1604, ctx.r9.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x8258FCA4;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x8258FCA8;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8258fcbc
	if (ctx.cr0.eq) goto loc_8258FCBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8258fcc8
	goto loc_8258FCC8;
loc_8258FCBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1452);
loc_8258FCC8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FCEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FD78"))) PPC_WEAK_FUNC(sub_8258FD78);
PPC_FUNC_IMPL(__imp__sub_8258FD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -136);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FDBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -144);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258fdfc
	if (ctx.cr0.eq) goto loc_8258FDFC;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -136);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FDF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8258fe0c
	goto loc_8258FE0C;
loc_8258FDFC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -108);
	// bl 0x829e3da8
	ctx.lr = 0x8258FE0C;
	sub_829E3DA8(ctx, base);
loc_8258FE0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FE20"))) PPC_WEAK_FUNC(sub_8258FE20);
PPC_FUNC_IMPL(__imp__sub_8258FE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r9.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82903e48
	ctx.lr = 0x8258FE74;
	sub_82903E48(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x8258ebb8
	ctx.lr = 0x8258FE84;
	sub_8258EBB8(ctx, base);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r11,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r11.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r10,620
	ctx.r8.s64 = ctx.r10.s64 + 620;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,1400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FEE4;
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

__attribute__((alias("__imp__sub_8258FEF8"))) PPC_WEAK_FUNC(sub_8258FEF8);
PPC_FUNC_IMPL(__imp__sub_8258FEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8258ff18
	if (ctx.cr6.eq) goto loc_8258FF18;
	// stw r4,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r4.u32);
loc_8258FF18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258FF20"))) PPC_WEAK_FUNC(sub_8258FF20);
PPC_FUNC_IMPL(__imp__sub_8258FF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8258FF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825900a0
	if (ctx.cr0.eq) goto loc_825900A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258ffb4
	if (ctx.cr6.eq) goto loc_8258FFB4;
	// bl 0x823bcb18
	ctx.lr = 0x8258FF90;
	sub_823BCB18(ctx, base);
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
	ctx.lr = 0x8258FFA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8258ffb8
	if (!ctx.cr0.eq) goto loc_8258FFB8;
loc_8258FFB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258FFB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82590038
	if (ctx.cr6.eq) goto loc_82590038;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8258FFC8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82590024
	if (ctx.cr0.eq) goto loc_82590024;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8258ffe0
	if (ctx.cr6.eq) goto loc_8258FFE0;
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x8258ffe4
	goto loc_8258FFE4;
loc_8258FFE0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8258FFE4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82590010
	if (ctx.cr0.eq) goto loc_82590010;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82590014
	goto loc_82590014;
loc_82590010:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82590014:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f7c50
	ctx.lr = 0x8259001C;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82590028
	goto loc_82590028;
loc_82590024:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82590028:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82590038;
	sub_82833A30(ctx, base);
loc_82590038:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82590058
	if (!ctx.cr6.eq) goto loc_82590058;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82590078
	goto loc_82590078;
loc_82590058:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_82590078:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824d77f8
	ctx.lr = 0x8259008C;
	sub_824D77F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r3.u32);
loc_825900A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82903da0
	ctx.lr = 0x825900C8;
	sub_82903DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825900E0"))) PPC_WEAK_FUNC(sub_825900E0);
PPC_FUNC_IMPL(__imp__sub_825900E0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825902e8
	if (ctx.cr6.eq) goto loc_825902E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,1136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1136, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82903e48
	ctx.lr = 0x8259015C;
	sub_82903E48(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8258ebb8
	ctx.lr = 0x82590170;
	sub_8258EBB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,3988(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3988);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x824cf088
	ctx.lr = 0x825901A0;
	sub_824CF088(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825901DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258ff20
	ctx.lr = 0x825901E4;
	sub_8258FF20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,88(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,60(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// beq cr6,0x82590224
	if (ctx.cr6.eq) goto loc_82590224;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82590228
	goto loc_82590228;
loc_82590224:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82590228:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// lwz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// beq cr6,0x82590260
	if (ctx.cr6.eq) goto loc_82590260;
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x82590264
	goto loc_82590264;
loc_82590260:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82590264:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1412(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// bl 0x82903390
	ctx.lr = 0x82590294;
	sub_82903390(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x825902BC;
	sub_829C1F08(ctx, base);
	// bl 0x824d3cd0
	ctx.lr = 0x825902C0;
	sub_824D3CD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825902d4
	if (ctx.cr0.eq) goto loc_825902D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x825902e0
	goto loc_825902E0;
loc_825902D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
loc_825902E0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825902E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825902E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x829e3da8
	ctx.lr = 0x825902FC;
	sub_829E3DA8(ctx, base);
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

__attribute__((alias("__imp__sub_82590318"))) PPC_WEAK_FUNC(sub_82590318);
PPC_FUNC_IMPL(__imp__sub_82590318) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590328"))) PPC_WEAK_FUNC(sub_82590328);
PPC_FUNC_IMPL(__imp__sub_82590328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82590360
	if (ctx.cr6.eq) goto loc_82590360;
	// bl 0x82479080
	ctx.lr = 0x82590350;
	sub_82479080(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82590360
	if (!ctx.cr6.eq) goto loc_82590360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8259036c
	goto loc_8259036C;
loc_82590360:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x8259036C;
	sub_824040A0(ctx, base);
loc_8259036C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590388"))) PPC_WEAK_FUNC(sub_82590388);
PPC_FUNC_IMPL(__imp__sub_82590388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6192
	ctx.r3.s64 = 6192;
	// bl 0x82833108
	ctx.lr = 0x825903A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825903b8
	if (ctx.cr0.eq) goto loc_825903B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82590420
	ctx.lr = 0x825903B4;
	sub_82590420(ctx, base);
	// b 0x825903bc
	goto loc_825903BC;
loc_825903B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825903BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825903D0"))) PPC_WEAK_FUNC(sub_825903D0);
PPC_FUNC_IMPL(__imp__sub_825903D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82479080
	ctx.lr = 0x825903F0;
	sub_82479080(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82590404
	if (ctx.cr6.eq) goto loc_82590404;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x82590404;
	sub_82404040(ctx, base);
loc_82590404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590420"))) PPC_WEAK_FUNC(sub_82590420);
PPC_FUNC_IMPL(__imp__sub_82590420) {
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
	// bl 0x82400f98
	ctx.lr = 0x82590440;
	sub_82400F98(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-1064
	ctx.r11.s64 = ctx.r11.s64 + -1064;
	// addi r10,r10,1304
	ctx.r10.s64 = ctx.r10.s64 + 1304;
	// addi r9,r9,1356
	ctx.r9.s64 = ctx.r9.s64 + 1356;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,6132
	ctx.r3.s64 = ctx.r31.s64 + 6132;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,6132
	ctx.r4.s64 = ctx.r30.s64 + 6132;
	// lwz r11,6096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6096);
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// lwz r11,6100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6100);
	// stw r11,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r11.u32);
	// lwz r11,6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6104);
	// stw r11,6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6104, ctx.r11.u32);
	// lfs f0,6108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// lfs f0,6112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6112, temp.u32);
	// lfs f0,6116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6116, temp.u32);
	// lwz r11,6120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6120);
	// stw r11,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r11.u32);
	// lwz r11,6124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6124);
	// stw r11,6124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6124, ctx.r11.u32);
	// lwz r11,6128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6128);
	// stw r11,6128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6128, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x825904B8;
	sub_823339B8(ctx, base);
	// addi r3,r31,6156
	ctx.r3.s64 = ctx.r31.s64 + 6156;
	// addi r4,r30,6156
	ctx.r4.s64 = ctx.r30.s64 + 6156;
	// bl 0x823339b8
	ctx.lr = 0x825904C4;
	sub_823339B8(ctx, base);
	// lwz r11,6180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r11.u32);
	// lwz r11,6184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6184);
	// stw r11,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r11.u32);
	// lwz r11,6188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6188);
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825904F8"))) PPC_WEAK_FUNC(sub_825904F8);
PPC_FUNC_IMPL(__imp__sub_825904F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82590500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824db158
	ctx.lr = 0x8259050C;
	sub_824DB158(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-1064
	ctx.r11.s64 = ctx.r11.s64 + -1064;
	// addi r10,r10,1304
	ctx.r10.s64 = ctx.r10.s64 + 1304;
	// addi r9,r9,1356
	ctx.r9.s64 = ctx.r9.s64 + 1356;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,6140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6140, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,6136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6136, ctx.r29.u32);
	// stw r30,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r30.u32);
	// addi r3,r11,-27704
	ctx.r3.s64 = ctx.r11.s64 + -27704;
	// stw r30,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r30.u32);
	// stw r30,6152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6152, ctx.r30.u32);
	// stw r30,6132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6132, ctx.r30.u32);
	// stw r29,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r29.u32);
	// stw r30,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r30.u32);
	// stw r30,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r30.u32);
	// stw r30,6172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6172, ctx.r30.u32);
	// stw r30,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r30.u32);
	// stw r30,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x82590574;
	sub_82816528(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825905b8
	if (!ctx.cr6.eq) goto loc_825905B8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825905b8
	if (!ctx.cr6.eq) goto loc_825905B8;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825905b8
	if (!ctx.cr6.eq) goto loc_825905B8;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r11.u32);
loc_825905B8:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lfs f0,24008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lfs f13,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f13,1700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f13,1704(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// lfs f0,20356(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20356);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,152(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 152, temp.u32);
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,17540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17540);
	ctx.f0.f64 = double(temp.f32);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// lwz r7,1492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,19632(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 52, temp.u32);
	// lwz r7,1492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,16800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 56, temp.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f0,20192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 64, temp.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r11.u32);
	// lfs f0,17816(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17816);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f13,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,144(r9)
	PPC_STORE_U32(ctx.r9.u32 + 144, ctx.r11.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r11,108(r9)
	PPC_STORE_U32(ctx.r9.u32 + 108, ctx.r11.u32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,72(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 72, temp.u32);
	// lwz r9,960(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// lfs f0,1820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// stw r10,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r10.u32);
	// stfs f13,3988(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stw r10,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r10.u32);
	// stw r10,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x825906a0
	if (ctx.cr6.eq) goto loc_825906A0;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
loc_825906A0:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r11,5448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5448, ctx.r11.u32);
	// addi r7,r9,-11456
	ctx.r7.s64 = ctx.r9.s64 + -11456;
	// stw r30,4004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4004, ctx.r30.u32);
	// lis r6,26549
	ctx.r6.s64 = 1739915264;
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lis r5,-20875
	ctx.r5.s64 = -1368064000;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lfs f12,-11456(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f12.f64 = double(temp.f32);
	// ori r9,r6,52330
	ctx.r9.u64 = ctx.r6.u64 | 52330;
	// lfs f13,32716(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32716);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20
	ctx.r10.s64 = 20;
	// lfs f0,-16348(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16348);
	ctx.f0.f64 = double(temp.f32);
	// li r8,50
	ctx.r8.s64 = 50;
	// li r7,110
	ctx.r7.s64 = 110;
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// li r6,8192
	ctx.r6.s64 = 8192;
	// stfs f13,6112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6112, temp.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// stfs f12,6116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6116, temp.u32);
	// ori r5,r5,9375
	ctx.r5.u64 = ctx.r5.u64 | 9375;
	// stw r9,5476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5476, ctx.r9.u32);
	// stw r29,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r10.u32);
	// stw r10,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r10.u32);
	// stw r8,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r8.u32);
	// stw r7,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r7.u32);
	// stw r30,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r30.u32);
	// stw r11,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r11.u32);
	// stw r11,3064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3064, ctx.r11.u32);
	// stw r11,6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6104, ctx.r11.u32);
	// stw r6,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r6.u32);
	// stw r4,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r4.u32);
	// stw r11,3176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3176, ctx.r11.u32);
	// stw r5,2592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2592, ctx.r5.u32);
	// stw r11,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r11.u32);
	// stw r30,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590750"))) PPC_WEAK_FUNC(sub_82590750);
PPC_FUNC_IMPL(__imp__sub_82590750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82590758;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a4cd78
	ctx.lr = 0x82590768;
	sub_82A4CD78(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// clrlwi r30,r3,30
	ctx.r30.u64 = ctx.r3.u32 & 0x3;
	// addi r4,r11,-1636
	ctx.r4.s64 = ctx.r11.s64 + -1636;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x8259077C;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,6132
	ctx.r3.s64 = ctx.r31.s64 + 6132;
	// bl 0x82400b48
	ctx.lr = 0x82590788;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82590790;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82590824
	if (ctx.cr6.lt) goto loc_82590824;
	// beq cr6,0x825907f8
	if (ctx.cr6.eq) goto loc_825907F8;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// addi r30,r31,6120
	ctx.r30.s64 = ctx.r31.s64 + 6120;
	// blt cr6,0x825907d0
	if (ctx.cr6.lt) goto loc_825907D0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1304
	ctx.r3.s64 = ctx.r11.s64 + -1304;
	// bl 0x82816528
	ctx.lr = 0x825907B4;
	sub_82816528(ctx, base);
	// stw r3,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1272
	ctx.r3.s64 = ctx.r11.s64 + -1272;
	// bl 0x82816528
	ctx.lr = 0x825907C4;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-1232
	ctx.r4.s64 = ctx.r11.s64 + -1232;
	// b 0x8259084c
	goto loc_8259084C;
loc_825907D0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1412
	ctx.r3.s64 = ctx.r11.s64 + -1412;
	// bl 0x82816528
	ctx.lr = 0x825907DC;
	sub_82816528(ctx, base);
	// stw r3,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1380
	ctx.r3.s64 = ctx.r11.s64 + -1380;
	// bl 0x82816528
	ctx.lr = 0x825907EC;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-1340
	ctx.r4.s64 = ctx.r11.s64 + -1340;
	// b 0x8259084c
	goto loc_8259084C;
loc_825907F8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r31,6120
	ctx.r30.s64 = ctx.r31.s64 + 6120;
	// addi r3,r11,-1520
	ctx.r3.s64 = ctx.r11.s64 + -1520;
	// bl 0x82816528
	ctx.lr = 0x82590808;
	sub_82816528(ctx, base);
	// stw r3,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1488
	ctx.r3.s64 = ctx.r11.s64 + -1488;
	// bl 0x82816528
	ctx.lr = 0x82590818;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-1448
	ctx.r4.s64 = ctx.r11.s64 + -1448;
	// b 0x8259084c
	goto loc_8259084C;
loc_82590824:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r31,6120
	ctx.r30.s64 = ctx.r31.s64 + 6120;
	// addi r3,r11,-1628
	ctx.r3.s64 = ctx.r11.s64 + -1628;
	// bl 0x82816528
	ctx.lr = 0x82590834;
	sub_82816528(ctx, base);
	// stw r3,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,-1596
	ctx.r3.s64 = ctx.r11.s64 + -1596;
	// bl 0x82816528
	ctx.lr = 0x82590844;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,-1556
	ctx.r4.s64 = ctx.r11.s64 + -1556;
loc_8259084C:
	// stw r3,6124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6124, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82590858;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,6156
	ctx.r3.s64 = ctx.r31.s64 + 6156;
	// bl 0x82400b48
	ctx.lr = 0x82590864;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8259086C;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82590878;
	sub_82410060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590880"))) PPC_WEAK_FUNC(sub_82590880);
PPC_FUNC_IMPL(__imp__sub_82590880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82590888;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825908AC:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825908e4
	if (!ctx.cr6.lt) goto loc_825908E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x825908C4;
	sub_824112D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825908d8
	if (ctx.cr0.eq) goto loc_825908D8;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x825908e0
	if (ctx.cr6.eq) goto loc_825908E0;
loc_825908D8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x825908ac
	goto loc_825908AC;
loc_825908E0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_825908E4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8259095c
	if (ctx.cr6.eq) goto loc_8259095C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x82590918;
	sub_824091A0(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8259095c
	if (ctx.cr6.eq) goto loc_8259095C;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82590958
	if (!ctx.cr6.lt) goto loc_82590958;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mulli r30,r29,808
	ctx.r30.s64 = ctx.r29.s64 * 808;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8297b368
	ctx.lr = 0x82590940;
	sub_8297B368(ctx, base);
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// mulli r9,r29,132
	ctx.r9.s64 = ctx.r29.s64 * 132;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8297b5e8
	ctx.lr = 0x82590958;
	sub_8297B5E8(ctx, base);
loc_82590958:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8259095C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590968"))) PPC_WEAK_FUNC(sub_82590968);
PPC_FUNC_IMPL(__imp__sub_82590968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// beq cr6,0x82590994
	if (ctx.cr6.eq) goto loc_82590994;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x82590998
	goto loc_82590998;
loc_82590994:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82590998:
	// lwz r10,3764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3764);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825909b8
	if (!ctx.cr6.eq) goto loc_825909B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825909B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825909B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f4ff8
	ctx.lr = 0x825909C4;
	sub_824F4FF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825909E0"))) PPC_WEAK_FUNC(sub_825909E0);
PPC_FUNC_IMPL(__imp__sub_825909E0) {
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
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,3632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3632, ctx.r11.u32);
	// bl 0x824e1bb0
	ctx.lr = 0x82590A04;
	sub_824E1BB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590A18"))) PPC_WEAK_FUNC(sub_82590A18);
PPC_FUNC_IMPL(__imp__sub_82590A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82590A20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a4cd78
	ctx.lr = 0x82590A34;
	sub_82A4CD78(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mulli r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 * 13;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82590b0c
	if (ctx.cr6.gt) goto loc_82590B0C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-31080
	ctx.r12.s64 = ctx.r12.s64 + -31080;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32167
	ctx.r12.s64 = -2108096512;
	// addi r12,r12,2676
	ctx.r12.s64 = ctx.r12.s64 + 2676;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82590A74;
	case 1:
		goto loc_82590A80;
	case 2:
		goto loc_82590A8C;
	case 3:
		goto loc_82590A98;
	case 4:
		goto loc_82590AA4;
	case 5:
		goto loc_82590AB0;
	case 6:
		goto loc_82590ABC;
	case 7:
		goto loc_82590AC8;
	case 8:
		goto loc_82590AD4;
	case 9:
		goto loc_82590AE0;
	case 10:
		goto loc_82590AEC;
	case 11:
		goto loc_82590AF8;
	case 12:
		goto loc_82590B04;
	default:
		__builtin_unreachable();
	}
loc_82590A74:
	// lis r31,15692
	ctx.r31.s64 = 1028390912;
	// ori r31,r31,45942
	ctx.r31.u64 = ctx.r31.u64 | 45942;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590A80:
	// lis r31,-21312
	ctx.r31.s64 = -1396703232;
	// ori r31,r31,63294
	ctx.r31.u64 = ctx.r31.u64 | 63294;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590A8C:
	// lis r31,9749
	ctx.r31.s64 = 638910464;
	// ori r31,r31,60357
	ctx.r31.u64 = ctx.r31.u64 | 60357;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590A98:
	// lis r31,-24362
	ctx.r31.s64 = -1596588032;
	// ori r31,r31,28360
	ctx.r31.u64 = ctx.r31.u64 | 28360;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AA4:
	// lis r31,-25302
	ctx.r31.s64 = -1658191872;
	// ori r31,r31,6538
	ctx.r31.u64 = ctx.r31.u64 | 6538;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AB0:
	// lis r31,-5049
	ctx.r31.s64 = -330891264;
	// ori r31,r31,30950
	ctx.r31.u64 = ctx.r31.u64 | 30950;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590ABC:
	// lis r31,-12659
	ctx.r31.s64 = -829620224;
	// ori r31,r31,57796
	ctx.r31.u64 = ctx.r31.u64 | 57796;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AC8:
	// lis r31,9120
	ctx.r31.s64 = 597688320;
	// ori r31,r31,48093
	ctx.r31.u64 = ctx.r31.u64 | 48093;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AD4:
	// lis r31,2258
	ctx.r31.s64 = 147980288;
	// ori r31,r31,61202
	ctx.r31.u64 = ctx.r31.u64 | 61202;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AE0:
	// lis r31,3365
	ctx.r31.s64 = 220528640;
	// ori r31,r31,47733
	ctx.r31.u64 = ctx.r31.u64 | 47733;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AEC:
	// lis r31,16394
	ctx.r31.s64 = 1074397184;
	// ori r31,r31,51622
	ctx.r31.u64 = ctx.r31.u64 | 51622;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590AF8:
	// lis r31,18148
	ctx.r31.s64 = 1189347328;
	// ori r31,r31,22605
	ctx.r31.u64 = ctx.r31.u64 | 22605;
	// b 0x82590b0c
	goto loc_82590B0C;
loc_82590B04:
	// lis r31,6820
	ctx.r31.s64 = 446955520;
	// ori r31,r31,53895
	ctx.r31.u64 = ctx.r31.u64 | 53895;
loc_82590B0C:
	// lwz r29,6120(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6120);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
loc_82590B18:
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82590b6c
	if (!ctx.cr6.lt) goto loc_82590B6C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x82590B30;
	sub_824112D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82590b44
	if (ctx.cr0.eq) goto loc_82590B44;
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82590b4c
	if (ctx.cr6.eq) goto loc_82590B4C;
loc_82590B44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82590b18
	goto loc_82590B18;
loc_82590B4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82590b6c
	if (ctx.cr6.eq) goto loc_82590B6C;
	// lis r4,9809
	ctx.r4.s64 = 642842624;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,35007
	ctx.r4.u64 = ctx.r4.u64 | 35007;
	// bl 0x82965800
	ctx.lr = 0x82590B68;
	sub_82965800(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82590B6C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590B78"))) PPC_WEAK_FUNC(sub_82590B78);
PPC_FUNC_IMPL(__imp__sub_82590B78) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,6180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r3,6132
	ctx.r5.s64 = ctx.r3.s64 + 6132;
	// addi r4,r3,6156
	ctx.r4.s64 = ctx.r3.s64 + 6156;
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82590BA4"))) PPC_WEAK_FUNC(sub_82590BA4);
PPC_FUNC_IMPL(__imp__sub_82590BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590BA8"))) PPC_WEAK_FUNC(sub_82590BA8);
PPC_FUNC_IMPL(__imp__sub_82590BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824dd8b8
	ctx.lr = 0x82590BC0;
	sub_824DD8B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82590a18
	ctx.lr = 0x82590BC8;
	sub_82590A18(ctx, base);
	// lwz r11,6180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82590bf0
	if (ctx.cr6.eq) goto loc_82590BF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,6132
	ctx.r5.s64 = ctx.r31.s64 + 6132;
	// addi r4,r31,6156
	ctx.r4.s64 = ctx.r31.s64 + 6156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 824);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82590BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82590BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590C08"))) PPC_WEAK_FUNC(sub_82590C08);
PPC_FUNC_IMPL(__imp__sub_82590C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r10.u32);
	// lwz r11,828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 828);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82590C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dd1f8
	ctx.lr = 0x82590C3C;
	sub_824DD1F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82590C50"))) PPC_WEAK_FUNC(sub_82590C50);
PPC_FUNC_IMPL(__imp__sub_82590C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82590C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,5652
	ctx.r3.s64 = ctx.r31.s64 + 5652;
	// lwz r29,5668(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823327e0
	ctx.lr = 0x82590C7C;
	sub_823327E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,-1952
	ctx.r3.s64 = ctx.r11.s64 + -1952;
	// lwz r28,5664(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// bl 0x82816528
	ctx.lr = 0x82590C90;
	sub_82816528(ctx, base);
	// stwx r3,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r3.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r10,-1196
	ctx.r3.s64 = ctx.r10.s64 + -1196;
	// bl 0x82816528
	ctx.lr = 0x82590CA8;
	sub_82816528(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r10,9237
	ctx.r10.s64 = 605356032;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r10,r10,53137
	ctx.r10.u64 = ctx.r10.u64 | 53137;
	// addi r3,r9,-1160
	ctx.r3.s64 = ctx.r9.s64 + -1160;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// bl 0x82816528
	ctx.lr = 0x82590CD8;
	sub_82816528(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// lwz r29,5664(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// addi r3,r11,-1124
	ctx.r3.s64 = ctx.r11.s64 + -1124;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82816528
	ctx.lr = 0x82590CF4;
	sub_82816528(ctx, base);
	// stwx r3,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r10,-1108
	ctx.r3.s64 = ctx.r10.s64 + -1108;
	// bl 0x82816528
	ctx.lr = 0x82590D0C;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82590D18"))) PPC_WEAK_FUNC(sub_82590D18);
PPC_FUNC_IMPL(__imp__sub_82590D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82590D20;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61744
	ctx.lr = 0x82590D28;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x82590D34;
	sub_824DF418(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,19552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lfs f13,17120(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17120);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f0,17116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-6866
	ctx.r10.s64 = -449970176;
	// lfs f12,19548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f27,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f27.f64 = double(temp.f32);
	// lis r4,-16601
	ctx.r4.s64 = -1087963136;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r10,r10,31988
	ctx.r10.u64 = ctx.r10.u64 | 31988;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r4,r4,62193
	ctx.r4.u64 = ctx.r4.u64 | 62193;
	// lwz r11,5352(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r28,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x824e5590
	ctx.lr = 0x82590DE4;
	sub_824E5590(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r8,1740(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lis r10,-23022
	ctx.r10.s64 = -1508769792;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f30,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f30.f64 = double(temp.f32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f29,18368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18368);
	ctx.f29.f64 = double(temp.f32);
	// stw r3,5356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5356, ctx.r3.u32);
	// stw r8,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r8.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f28,17060(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17060);
	ctx.f28.f64 = double(temp.f32);
	// lwz r29,5352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ori r10,r10,52136
	ctx.r10.u64 = ctx.r10.u64 | 52136;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// rldicr r7,r4,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lis r4,-3736
	ctx.r4.s64 = -244842496;
	// ori r4,r4,3838
	ctx.r4.u64 = ctx.r4.u64 | 3838;
	// bl 0x824e5590
	ctx.lr = 0x82590E7C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r3,5360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5360, ctx.r3.u32);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r28,r29,32716
	ctx.r28.s64 = ctx.r29.s64 + 32716;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r9,22763
	ctx.r9.s64 = 1491795968;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16432
	ctx.r3.s64 = ctx.r10.s64 + -16432;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ori r26,r9,37495
	ctx.r26.u64 = ctx.r9.u64 | 37495;
	// lfs f27,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f27.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82590ED0;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82590F14;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-19521
	ctx.r11.s64 = -1279328256;
	// addi r3,r10,-16424
	ctx.r3.s64 = ctx.r10.s64 + -16424;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r26,r11,23324
	ctx.r26.u64 = ctx.r11.u64 | 23324;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82590F58;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x82590F9C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16416
	ctx.r3.s64 = ctx.r10.s64 + -16416;
	// lis r11,16364
	ctx.r11.s64 = 1072431104;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r26,r11,28383
	ctx.r26.u64 = ctx.r11.u64 | 28383;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82590FE0;
	sub_82816528(ctx, base);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r26,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x82591024;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16408
	ctx.r3.s64 = ctx.r11.s64 + -16408;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r26,r10,14532
	ctx.r26.u64 = ctx.r10.u64 | 14532;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82591068;
	sub_82816528(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x825910AC;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-16400
	ctx.r3.s64 = ctx.r11.s64 + -16400;
	// lfs f27,204(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	ctx.f27.f64 = double(temp.f32);
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r27,r10,42004
	ctx.r27.u64 = ctx.r10.u64 | 42004;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825910F4;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x82591138;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r9,-13035
	ctx.r9.s64 = -854261760;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r28,r9,53749
	ctx.r28.u64 = ctx.r9.u64 | 53749;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16388
	ctx.r3.s64 = ctx.r10.s64 + -16388;
	// lwz r27,5352(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8259117C;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,168(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e5590
	ctx.lr = 0x825911C0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lis r11,-11265
	ctx.r11.s64 = -738263040;
	// addi r3,r10,-16376
	ctx.r3.s64 = ctx.r10.s64 + -16376;
	// lfs f30,32716(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32716);
	ctx.f30.f64 = double(temp.f32);
	// lwz r29,5352(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r28,r11,44068
	ctx.r28.u64 = ctx.r11.u64 | 44068;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82591208;
	sub_82816528(ctx, base);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x824e5590
	ctx.lr = 0x8259124C;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,24284
	ctx.r9.s64 = 1591476224;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r29,r9,32798
	ctx.r29.u64 = ctx.r9.u64 | 32798;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// addi r3,r10,-16364
	ctx.r3.s64 = ctx.r10.s64 + -16364;
	// lwz r28,5352(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5352);
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82591290;
	sub_82816528(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x824e5590
	ctx.lr = 0x825912D4;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,5356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lwz r11,2088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825912F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8259132c
	if (!ctx.cr6.gt) goto loc_8259132C;
loc_82591304:
	// lwz r10,3548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// ori r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 512;
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// lwz r10,3552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82591304
	if (ctx.cr6.lt) goto loc_82591304;
loc_8259132C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61790
	ctx.lr = 0x82591338;
	__restfpr_27(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591340"))) PPC_WEAK_FUNC(sub_82591340);
PPC_FUNC_IMPL(__imp__sub_82591340) {
	PPC_FUNC_PROLOGUE();
	// stw r4,6096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6096, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591348"))) PPC_WEAK_FUNC(sub_82591348);
PPC_FUNC_IMPL(__imp__sub_82591348) {
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
	// bl 0x824dd3f8
	ctx.lr = 0x82591368;
	sub_824DD3F8(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r11.u32);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r11,6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6104, ctx.r11.u32);
	// lfs f0,484(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6108, temp.u32);
	// lfs f0,488(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6112, temp.u32);
	// lfs f0,492(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6116, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825913A8"))) PPC_WEAK_FUNC(sub_825913A8);
PPC_FUNC_IMPL(__imp__sub_825913A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2240, temp.u32);
	// stfs f0,2244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2244, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825913C0"))) PPC_WEAK_FUNC(sub_825913C0);
PPC_FUNC_IMPL(__imp__sub_825913C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825913C8;
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
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// stw r26,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r26.u32);
	// lwz r10,2348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825914cc
	if (!ctx.cr6.gt) goto loc_825914CC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lfs f29,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
loc_82591408:
	// lwz r10,2344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// lwzx r30,r10,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825914b8
	if (ctx.cr6.eq) goto loc_825914B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x82591428;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82591434
	if (ctx.cr0.eq) goto loc_82591434;
	// lfs f30,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f30.f64 = double(temp.f32);
loc_82591434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bed50
	ctx.lr = 0x8259143C;
	sub_829BED50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82591448
	if (ctx.cr0.eq) goto loc_82591448;
	// lfs f31,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f31.f64 = double(temp.f32);
loc_82591448:
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,6176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6176);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x825914b8
	if (ctx.cr6.gt) goto loc_825914B8;
	// lwz r10,2344(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r9,6180(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6180);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825914b8
	if (ctx.cr6.eq) goto loc_825914B8;
	// lwz r10,6168(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6168);
	// lwz r9,6184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6184);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r10.u32);
loc_825914B8:
	// lwz r10,2348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82591408
	if (ctx.cr6.lt) goto loc_82591408;
loc_825914CC:
	// lwz r11,6184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6184);
	// lwz r10,6188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6188);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82591534
	if (ctx.cr6.eq) goto loc_82591534;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259150c
	if (ctx.cr0.eq) goto loc_8259150C;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259150c
	if (ctx.cr0.eq) goto loc_8259150C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82591504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r26.u32);
	// b 0x8259152c
	goto loc_8259152C;
loc_8259150C:
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259152c
	if (ctx.cr0.eq) goto loc_8259152C;
	// lwz r3,5768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r11.u32);
	// beq cr6,0x8259152c
	if (ctx.cr6.eq) goto loc_8259152C;
	// bl 0x82978ed0
	ctx.lr = 0x8259152C;
	sub_82978ED0(ctx, base);
loc_8259152C:
	// lwz r11,6184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6184);
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
loc_82591534:
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

__attribute__((alias("__imp__sub_82591548"))) PPC_WEAK_FUNC(sub_82591548);
PPC_FUNC_IMPL(__imp__sub_82591548) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825ad728
	sub_825AD728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591550"))) PPC_WEAK_FUNC(sub_82591550);
PPC_FUNC_IMPL(__imp__sub_82591550) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825903d0
	sub_825903D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591558"))) PPC_WEAK_FUNC(sub_82591558);
PPC_FUNC_IMPL(__imp__sub_82591558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82591560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825915bc
	if (ctx.cr6.eq) goto loc_825915BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,6240
	ctx.r11.s64 = ctx.r11.s64 + 6240;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,2096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2096, ctx.r10.u32);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// stw r9,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r9.u32);
	// addi r29,r31,2096
	ctx.r29.s64 = ctx.r31.s64 + 2096;
	// bl 0x824cbb48
	ctx.lr = 0x825915A4;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba650
	ctx.lr = 0x825915B0;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2112
	ctx.r3.s64 = ctx.r31.s64 + 2112;
	// bl 0x825b8a40
	ctx.lr = 0x825915BC;
	sub_825B8A40(ctx, base);
loc_825915BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8258e540
	ctx.lr = 0x825915C8;
	sub_8258E540(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r8,r10,15808
	ctx.r8.s64 = ctx.r10.s64 + 15808;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r7,r7,6164
	ctx.r7.s64 = ctx.r7.s64 + 6164;
	// addi r6,r11,4592
	ctx.r6.s64 = ctx.r11.s64 + 4592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r4,r11,6216
	ctx.r4.s64 = ctx.r11.s64 + 6216;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r5,r5,7928
	ctx.r5.s64 = ctx.r5.s64 + 7928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,19648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19648);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r11,-124
	ctx.r7.s64 = ctx.r11.s64 + -124;
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r30.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r10.u32);
	// stw r9,936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 936, ctx.r9.u32);
	// stw r8,940(r11)
	PPC_STORE_U32(ctx.r11.u32 + 940, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591698"))) PPC_WEAK_FUNC(sub_82591698);
PPC_FUNC_IMPL(__imp__sub_82591698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825916A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825916e0
	if (ctx.cr6.eq) goto loc_825916E0;
	// bl 0x8239b148
	ctx.lr = 0x825916BC;
	sub_8239B148(ctx, base);
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
	ctx.lr = 0x825916D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x825916e4
	if (!ctx.cr0.eq) goto loc_825916E4;
loc_825916E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825916E4:
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r31,-16
	ctx.r29.s64 = ctx.r31.s64 + -16;
	// bl 0x8258f310
	ctx.lr = 0x825916F4;
	sub_8258F310(ctx, base);
	// stw r3,-120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -120, ctx.r3.u32);
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-108
	ctx.r3.s64 = ctx.r11.s64 + -108;
	// bl 0x824ce338
	ctx.lr = 0x82591714;
	sub_824CE338(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// rldicr r7,r11,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,5984
	ctx.r11.s64 = ctx.r11.s64 + 5984;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// bl 0x82591ba8
	ctx.lr = 0x82591758;
	sub_82591BA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591760"))) PPC_WEAK_FUNC(sub_82591760);
PPC_FUNC_IMPL(__imp__sub_82591760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82591768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82591950
	if (ctx.cr0.eq) goto loc_82591950;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82591950
	if (!ctx.cr6.gt) goto loc_82591950;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82591950
	if (!ctx.cr0.eq) goto loc_82591950;
	// lwz r10,4272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4272);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x825918ec
	if (!ctx.cr6.lt) goto loc_825918EC;
	// lwz r10,5448(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5448);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x825918ec
	if (!ctx.cr6.eq) goto loc_825918EC;
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lbz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825918ec
	if (!ctx.cr0.eq) goto loc_825918EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addic. r11,r11,304
	ctx.xer.ca = ctx.r11.u32 > 4294966991;
	ctx.r11.s64 = ctx.r11.s64 + 304;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825917ec
	if (ctx.cr0.eq) goto loc_825917EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825917ec
	if (ctx.cr6.eq) goto loc_825917EC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825917f0
	goto loc_825917F0;
loc_825917EC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_825917F0:
	// lis r4,18987
	ctx.r4.s64 = 1244332032;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,28266
	ctx.r4.u64 = ctx.r4.u64 | 28266;
	// bl 0x829e3f50
	ctx.lr = 0x82591800;
	sub_829E3F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x82591814;
	sub_823928A0(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82591958
	if (ctx.cr6.eq) goto loc_82591958;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8259184C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8259186c
	if (ctx.cr0.eq) goto loc_8259186C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82591870
	goto loc_82591870;
loc_8259186C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82591870:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82591958
	if (ctx.cr6.eq) goto loc_82591958;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r31,1780(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825918ec
	if (ctx.cr6.eq) goto loc_825918EC;
	// bl 0x823ba418
	ctx.lr = 0x8259188C;
	sub_823BA418(ctx, base);
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
	ctx.lr = 0x825918A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825918b4
	if (!ctx.cr0.eq) goto loc_825918B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_825918B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825918C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825918ec
	if (ctx.cr0.eq) goto loc_825918EC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825918EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825918EC:
	// bl 0x82a4cd78
	ctx.lr = 0x825918F0;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,18360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27328(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27328);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82591924:
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r9,5984
	ctx.r9.s64 = ctx.r9.s64 + 5984;
	// li r8,1
	ctx.r8.s64 = 1;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// bl 0x82591ba8
	ctx.lr = 0x82591950;
	sub_82591BA8(ctx, base);
loc_82591950:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82591958:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r11,-27328
	ctx.r7.s64 = ctx.r11.s64 + -27328;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f1,-17792(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17792);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82591924
	goto loc_82591924;
}

__attribute__((alias("__imp__sub_82591970"))) PPC_WEAK_FUNC(sub_82591970);
PPC_FUNC_IMPL(__imp__sub_82591970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82591978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq cr6,0x825919b8
	if (ctx.cr6.eq) goto loc_825919B8;
	// bl 0x8239b2d8
	ctx.lr = 0x82591994;
	sub_8239B2D8(ctx, base);
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
	ctx.lr = 0x825919AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x825919bc
	if (!ctx.cr0.eq) goto loc_825919BC;
loc_825919B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825919BC:
	// stw r11,-32(r30)
	PPC_STORE_U32(ctx.r30.u32 + -32, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,-16
	ctx.r3.s64 = ctx.r30.s64 + -16;
	// bl 0x82591698
	ctx.lr = 0x825919D0;
	sub_82591698(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825919D8"))) PPC_WEAK_FUNC(sub_825919D8);
PPC_FUNC_IMPL(__imp__sub_825919D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,6192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6192);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825919F8"))) PPC_WEAK_FUNC(sub_825919F8);
PPC_FUNC_IMPL(__imp__sub_825919F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,6192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6192);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1488, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591A18"))) PPC_WEAK_FUNC(sub_82591A18);
PPC_FUNC_IMPL(__imp__sub_82591A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x82591a60
	if (!ctx.cr6.lt) goto loc_82591A60;
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// lwz r11,-124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82591A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82591A60:
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82591a98
	if (ctx.cr0.eq) goto loc_82591A98;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82591a98
	if (!ctx.cr6.gt) goto loc_82591A98;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82591a98
	if (!ctx.cr0.eq) goto loc_82591A98;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// ble cr6,0x82591a94
	if (!ctx.cr6.gt) goto loc_82591A94;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82591A94:
	// bl 0x82592e48
	ctx.lr = 0x82591A98;
	sub_82592E48(ctx, base);
loc_82591A98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591AB0"))) PPC_WEAK_FUNC(sub_82591AB0);
PPC_FUNC_IMPL(__imp__sub_82591AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82591AB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addic. r11,r31,-128
	ctx.xer.ca = ctx.r31.u32 > 127;
	ctx.r11.s64 = ctx.r31.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82591adc
	if (!ctx.cr0.eq) goto loc_82591ADC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82591aec
	goto loc_82591AEC;
loc_82591ADC:
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-124
	ctx.r11.s64 = ctx.r11.s64 + -124;
loc_82591AEC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82591b1c
	if (!ctx.cr6.eq) goto loc_82591B1C;
	// lwz r10,-124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r4,r11,5984
	ctx.r4.s64 = ctx.r11.s64 + 5984;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// lwz r11,-116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -116);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82591B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82591B1C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x8258eaf8
	ctx.lr = 0x82591B30;
	sub_8258EAF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591B38"))) PPC_WEAK_FUNC(sub_82591B38);
PPC_FUNC_IMPL(__imp__sub_82591B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,-128
	ctx.r3.s64 = ctx.r31.s64 + -128;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lwz r11,-128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -128);
	// bne cr6,0x82591b6c
	if (!ctx.cr6.eq) goto loc_82591B6C;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82591b70
	goto loc_82591B70;
loc_82591B6C:
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_82591B70:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82591B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -124);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-124
	ctx.r3.s64 = ctx.r11.s64 + -124;
	// bl 0x824cd4b8
	ctx.lr = 0x82591B90;
	sub_824CD4B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591BA8"))) PPC_WEAK_FUNC(sub_82591BA8);
PPC_FUNC_IMPL(__imp__sub_82591BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82591BB0;
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
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// bl 0x829c80b8
	ctx.lr = 0x82591BD8;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82591c80
	if (!ctx.cr0.eq) goto loc_82591C80;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82591bf8
	if (!ctx.cr6.eq) goto loc_82591BF8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82591BF8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8239aea8
	ctx.lr = 0x82591C00;
	sub_8239AEA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82591C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82591C20;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82591c6c
	if (ctx.cr0.eq) goto loc_82591C6C;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r8,200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r9,r9,-17680
	ctx.r9.s64 = ctx.r9.s64 + -17680;
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// b 0x82591c70
	goto loc_82591C70;
loc_82591C6C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82591C70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82591C7C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82591C80:
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
	ctx.lr = 0x82591C9C;
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

__attribute__((alias("__imp__sub_82591CB0"))) PPC_WEAK_FUNC(sub_82591CB0);
PPC_FUNC_IMPL(__imp__sub_82591CB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591CC8"))) PPC_WEAK_FUNC(sub_82591CC8);
PPC_FUNC_IMPL(__imp__sub_82591CC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591CD8"))) PPC_WEAK_FUNC(sub_82591CD8);
PPC_FUNC_IMPL(__imp__sub_82591CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82591d10
	if (ctx.cr6.eq) goto loc_82591D10;
	// bl 0x8239b148
	ctx.lr = 0x82591D00;
	sub_8239B148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82591d10
	if (!ctx.cr6.eq) goto loc_82591D10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82591d1c
	goto loc_82591D1C;
loc_82591D10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82590328
	ctx.lr = 0x82591D1C;
	sub_82590328(ctx, base);
loc_82591D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591D38"))) PPC_WEAK_FUNC(sub_82591D38);
PPC_FUNC_IMPL(__imp__sub_82591D38) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b148
	sub_8239B148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591D40"))) PPC_WEAK_FUNC(sub_82591D40);
PPC_FUNC_IMPL(__imp__sub_82591D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,6208
	ctx.r3.s64 = 6208;
	// bl 0x82833108
	ctx.lr = 0x82591D5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82591d70
	if (ctx.cr0.eq) goto loc_82591D70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82591df8
	ctx.lr = 0x82591D6C;
	sub_82591DF8(ctx, base);
	// b 0x82591d74
	goto loc_82591D74;
loc_82591D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82591D74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591D88"))) PPC_WEAK_FUNC(sub_82591D88);
PPC_FUNC_IMPL(__imp__sub_82591D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239b148
	ctx.lr = 0x82591DA8;
	sub_8239B148(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82591db8
	if (!ctx.cr6.eq) goto loc_82591DB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82591dd0
	goto loc_82591DD0;
loc_82591DB8:
	// bl 0x82479080
	ctx.lr = 0x82591DBC;
	sub_82479080(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82591dd0
	if (ctx.cr6.eq) goto loc_82591DD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x82591DD0;
	sub_82404040(ctx, base);
loc_82591DD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591DE8"))) PPC_WEAK_FUNC(sub_82591DE8);
PPC_FUNC_IMPL(__imp__sub_82591DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1380
	ctx.r3.s64 = ctx.r11.s64 + 1380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591DF8"))) PPC_WEAK_FUNC(sub_82591DF8);
PPC_FUNC_IMPL(__imp__sub_82591DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82590420
	ctx.lr = 0x82591E18;
	sub_82590420(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,1896
	ctx.r11.s64 = ctx.r11.s64 + 1896;
	// addi r10,r10,4268
	ctx.r10.s64 = ctx.r10.s64 + 4268;
	// addi r9,r9,4320
	ctx.r9.s64 = ctx.r9.s64 + 4320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// stw r11,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r11.u32);
	// lwz r11,6196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// stw r11,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r11.u32);
	// lwz r11,6200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6200);
	// stw r11,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r11.u32);
	// lwz r11,6204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6204);
	// stw r11,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591E78"))) PPC_WEAK_FUNC(sub_82591E78);
PPC_FUNC_IMPL(__imp__sub_82591E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27356
	ctx.r3.s64 = ctx.r11.s64 + -27356;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591E88"))) PPC_WEAK_FUNC(sub_82591E88);
PPC_FUNC_IMPL(__imp__sub_82591E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82591ec0
	if (ctx.cr6.eq) goto loc_82591EC0;
	// bl 0x8239b2d8
	ctx.lr = 0x82591EB0;
	sub_8239B2D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82591ec0
	if (!ctx.cr6.eq) goto loc_82591EC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82591ecc
	goto loc_82591ECC;
loc_82591EC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82591cd8
	ctx.lr = 0x82591ECC;
	sub_82591CD8(ctx, base);
loc_82591ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591EE8"))) PPC_WEAK_FUNC(sub_82591EE8);
PPC_FUNC_IMPL(__imp__sub_82591EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b2d8
	sub_8239B2D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82591EF0"))) PPC_WEAK_FUNC(sub_82591EF0);
PPC_FUNC_IMPL(__imp__sub_82591EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6208
	ctx.r3.s64 = 6208;
	// bl 0x82833108
	ctx.lr = 0x82591F10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82591f50
	if (ctx.cr0.eq) goto loc_82591F50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82591df8
	ctx.lr = 0x82591F24;
	sub_82591DF8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,4344
	ctx.r11.s64 = ctx.r11.s64 + 4344;
	// addi r10,r10,6716
	ctx.r10.s64 = ctx.r10.s64 + 6716;
	// addi r9,r9,4320
	ctx.r9.s64 = ctx.r9.s64 + 4320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82591f54
	goto loc_82591F54;
loc_82591F50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82591F54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591F70"))) PPC_WEAK_FUNC(sub_82591F70);
PPC_FUNC_IMPL(__imp__sub_82591F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239b2d8
	ctx.lr = 0x82591F90;
	sub_8239B2D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82591fa4
	if (ctx.cr6.eq) goto loc_82591FA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82591d88
	ctx.lr = 0x82591FA4;
	sub_82591D88(ctx, base);
loc_82591FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82591FC0"))) PPC_WEAK_FUNC(sub_82591FC0);
PPC_FUNC_IMPL(__imp__sub_82591FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82592598
	ctx.lr = 0x82591FE0;
	sub_82592598(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82591ff0
	if (ctx.cr0.eq) goto loc_82591FF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82591FF0;
	sub_82332DB8(ctx, base);
loc_82591FF0:
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

__attribute__((alias("__imp__sub_82592010"))) PPC_WEAK_FUNC(sub_82592010);
PPC_FUNC_IMPL(__imp__sub_82592010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1436
	ctx.r3.s64 = ctx.r11.s64 + 1436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592020"))) PPC_WEAK_FUNC(sub_82592020);
PPC_FUNC_IMPL(__imp__sub_82592020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82592058
	if (ctx.cr6.eq) goto loc_82592058;
	// bl 0x82593758
	ctx.lr = 0x82592048;
	sub_82593758(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82592058
	if (!ctx.cr6.eq) goto loc_82592058;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82592064
	goto loc_82592064;
loc_82592058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82592064;
	sub_82333C70(ctx, base);
loc_82592064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592080"))) PPC_WEAK_FUNC(sub_82592080);
PPC_FUNC_IMPL(__imp__sub_82592080) {
	PPC_FUNC_PROLOGUE();
	// b 0x82593758
	sub_82593758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592088"))) PPC_WEAK_FUNC(sub_82592088);
PPC_FUNC_IMPL(__imp__sub_82592088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x825920A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82592114
	if (ctx.cr0.eq) goto loc_82592114;
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
	// addi r9,r9,6768
	ctx.r9.s64 = ctx.r9.s64 + 6768;
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
	// b 0x82592118
	goto loc_82592118;
loc_82592114:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82592118:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592130"))) PPC_WEAK_FUNC(sub_82592130);
PPC_FUNC_IMPL(__imp__sub_82592130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82593758
	ctx.lr = 0x82592150;
	sub_82593758(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82592164
	if (ctx.cr6.eq) goto loc_82592164;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82592164;
	sub_82333B08(ctx, base);
loc_82592164:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592180"))) PPC_WEAK_FUNC(sub_82592180);
PPC_FUNC_IMPL(__imp__sub_82592180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82592188;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825904f8
	ctx.lr = 0x82592194;
	sub_825904F8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,1896
	ctx.r11.s64 = ctx.r11.s64 + 1896;
	// addi r10,r10,4268
	ctx.r10.s64 = ctx.r10.s64 + 4268;
	// addi r9,r9,4320
	ctx.r9.s64 = ctx.r9.s64 + 4320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// bl 0x82816528
	ctx.lr = 0x825921C4;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1484
	ctx.r3.s64 = ctx.r11.s64 + 1484;
	// bl 0x82816528
	ctx.lr = 0x825921D4;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r8,2852(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r28,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r28.u32);
	// addi r30,r9,25548
	ctx.r30.s64 = ctx.r9.s64 + 25548;
	// lwz r11,25556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25556);
	// stw r27,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r27.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82592228
	if (!ctx.cr0.eq) goto loc_82592228;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29240
	ctx.r9.s64 = ctx.r9.s64 + 29240;
	// stw r11,25556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25556, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// bl 0x82a4c758
	ctx.lr = 0x82592228;
	sub_82A4C758(ctx, base);
loc_82592228:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,2852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,25544
	ctx.r29.s64 = ctx.r11.s64 + 25544;
	// lwz r11,25552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25552);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82592268
	if (!ctx.cr0.eq) goto loc_82592268;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6868
	ctx.r9.s64 = ctx.r9.s64 + 6868;
	// stw r11,25552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25552, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21880
	ctx.r3.s64 = ctx.r11.s64 + 21880;
	// bl 0x82a4c758
	ctx.lr = 0x82592268;
	sub_82A4C758(ctx, base);
loc_82592268:
	// lwz r11,2852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2852);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,7069
	ctx.r9.s64 = 463273984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r9,r9,63664
	ctx.r9.u64 = ctx.r9.u64 | 63664;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lfs f0,32748(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3116, temp.u32);
	// stw r28,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r28.u32);
	// stw r28,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r28.u32);
	// stw r28,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r28.u32);
	// stw r27,5500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5500, ctx.r27.u32);
	// stw r9,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825922A8"))) PPC_WEAK_FUNC(sub_825922A8);
PPC_FUNC_IMPL(__imp__sub_825922A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825922B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x824de388
	ctx.lr = 0x825922C4;
	sub_824DE388(ctx, base);
	// lwz r11,5728(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825922d8
	if (ctx.cr6.eq) goto loc_825922D8;
	// lwz r4,5724(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5724);
	// b 0x825922e0
	goto loc_825922E0;
loc_825922D8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_825922E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82409058
	ctx.lr = 0x825922E8;
	sub_82409058(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8259230c
	if (ctx.cr6.eq) goto loc_8259230C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259230c
	if (ctx.cr6.eq) goto loc_8259230C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8259230C;
	sub_82332DB8(ctx, base);
loc_8259230C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8259258c
	if (ctx.cr6.eq) goto loc_8259258C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259258c
	if (ctx.cr6.eq) goto loc_8259258C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82592340;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82592538
	if (ctx.cr6.eq) goto loc_82592538;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x8259235C;
	sub_82333900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82592384
	if (ctx.cr0.eq) goto loc_82592384;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1512
	ctx.r3.s64 = ctx.r11.s64 + 1512;
	// bl 0x82816528
	ctx.lr = 0x82592370;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8250d2d0
	ctx.lr = 0x8259237C;
	sub_8250D2D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82592388
	goto loc_82592388;
loc_82592384:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82592388:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825923A0;
	sub_829E6978(ctx, base);
	// li r27,8
	ctx.r27.s64 = 8;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15316
	ctx.r4.s64 = ctx.r11.s64 + 15316;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x825923C4;
	sub_829E6978(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15332
	ctx.r4.s64 = ctx.r11.s64 + 15332;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825923E0;
	sub_829E6978(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825923FC;
	sub_829E6978(ctx, base);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592418;
	sub_829E6978(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592434;
	sub_829E6978(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,15416
	ctx.r4.s64 = ctx.r10.s64 + 15416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82592458;
	sub_829E6978(ctx, base);
	// stfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592474;
	sub_829E6978(ctx, base);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592490;
	sub_829E6978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r31,60
	ctx.r28.s64 = ctx.r31.s64 + 60;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82610248
	ctx.lr = 0x825924B4;
	sub_82610248(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x825924C8;
	sub_82610248(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x825924DC;
	sub_82610248(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x825924F0;
	sub_82610248(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82592504;
	sub_82610248(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82592518;
	sub_82610248(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82610248
	ctx.lr = 0x82592528;
	sub_82610248(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,3484
	ctx.r3.s64 = ctx.r26.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x82592538;
	sub_82410060(ctx, base);
loc_82592538:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15472
	ctx.r4.s64 = ctx.r11.s64 + 15472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592550;
	sub_829E6978(ctx, base);
	// stfs f1,4032(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4032, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,15492
	ctx.r4.s64 = ctx.r11.s64 + 15492;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8259256C;
	sub_829E6978(ctx, base);
	// stfs f1,4028(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4028, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-18944
	ctx.r4.s64 = ctx.r11.s64 + -18944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82592588;
	sub_829E6978(ctx, base);
	// stfs f1,3116(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 3116, temp.u32);
loc_8259258C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592598"))) PPC_WEAK_FUNC(sub_82592598);
PPC_FUNC_IMPL(__imp__sub_82592598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,1896
	ctx.r11.s64 = ctx.r11.s64 + 1896;
	// addi r10,r10,4268
	ctx.r10.s64 = ctx.r10.s64 + 4268;
	// addi r9,r9,4320
	ctx.r9.s64 = ctx.r9.s64 + 4320;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,6156
	ctx.r3.s64 = ctx.r31.s64 + 6156;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82333960
	ctx.lr = 0x825925D8;
	sub_82333960(ctx, base);
	// addi r3,r31,6132
	ctx.r3.s64 = ctx.r31.s64 + 6132;
	// bl 0x82333960
	ctx.lr = 0x825925E0;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dbe08
	ctx.lr = 0x825925E8;
	sub_824DBE08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592600"))) PPC_WEAK_FUNC(sub_82592600);
PPC_FUNC_IMPL(__imp__sub_82592600) {
	PPC_FUNC_PROLOGUE();
	// b 0x82591348
	sub_82591348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592608"))) PPC_WEAK_FUNC(sub_82592608);
PPC_FUNC_IMPL(__imp__sub_82592608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1524
	ctx.r3.s64 = ctx.r11.s64 + 1524;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592618"))) PPC_WEAK_FUNC(sub_82592618);
PPC_FUNC_IMPL(__imp__sub_82592618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592628"))) PPC_WEAK_FUNC(sub_82592628);
PPC_FUNC_IMPL(__imp__sub_82592628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82592630;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82590ba8
	ctx.lr = 0x8259263C;
	sub_82590BA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r3,r10,-27336
	ctx.r3.s64 = ctx.r10.s64 + -27336;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82592674;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
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
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825926B0;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825926dc
	if (ctx.cr0.eq) goto loc_825926DC;
	// bl 0x8239b418
	ctx.lr = 0x825926BC;
	sub_8239B418(ctx, base);
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
	ctx.lr = 0x825926D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825926e0
	if (!ctx.cr0.eq) goto loc_825926E0;
loc_825926DC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_825926E0:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x825926F4;
	sub_829BD3A8(ctx, base);
	// lwz r11,5448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5448);
	// stw r30,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82592708
	if (!ctx.cr6.eq) goto loc_82592708;
	// stw r28,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r28.u32);
loc_82592708:
	// lwz r11,6196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82592720
	if (!ctx.cr6.eq) goto loc_82592720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82592d18
	ctx.lr = 0x8259271C;
	sub_82592D18(ctx, base);
	// stw r3,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r3.u32);
loc_82592720:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// bl 0x82816528
	ctx.lr = 0x82592730;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1048);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82592744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82593960
	ctx.lr = 0x8259274C;
	sub_82593960(ctx, base);
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
	ctx.lr = 0x82592764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82592770
	if (!ctx.cr0.eq) goto loc_82592770;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82592770:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x82a4ea80
	ctx.lr = 0x82592784;
	sub_82A4EA80(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x825938e8
	ctx.lr = 0x8259278C;
	sub_825938E8(ctx, base);
	// lwz r11,5448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5448);
	// stw r3,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825927a8
	if (ctx.cr6.eq) goto loc_825927A8;
	// lis r4,7557
	ctx.r4.s64 = 495255552;
	// ori r4,r4,27748
	ctx.r4.u64 = ctx.r4.u64 | 27748;
	// b 0x825927b0
	goto loc_825927B0;
loc_825927A8:
	// lis r4,25150
	ctx.r4.s64 = 1648230400;
	// ori r4,r4,2216
	ctx.r4.u64 = ctx.r4.u64 | 2216;
loc_825927B0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8282d4b0
	ctx.lr = 0x825927C0;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6204);
	// bl 0x82412b58
	ctx.lr = 0x825927CC;
	sub_82412B58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825927D8"))) PPC_WEAK_FUNC(sub_825927D8);
PPC_FUNC_IMPL(__imp__sub_825927D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825927E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82590c50
	ctx.lr = 0x825927EC;
	sub_82590C50(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r31,5652
	ctx.r3.s64 = ctx.r31.s64 + 5652;
	// lwz r30,5668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x82592808;
	sub_823327E0(ctx, base);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r9,1604
	ctx.r3.s64 = ctx.r9.s64 + 1604;
	// lis r10,9169
	ctx.r10.s64 = 600899584;
	// ori r10,r10,35410
	ctx.r10.u64 = ctx.r10.u64 | 35410;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82816528
	ctx.lr = 0x82592830;
	sub_82816528(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,-6776
	ctx.r10.s64 = -444071936;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,6672
	ctx.r10.u64 = ctx.r10.u64 | 6672;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,1644
	ctx.r3.s64 = ctx.r9.s64 + 1644;
	// bl 0x82816528
	ctx.lr = 0x82592860;
	sub_82816528(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lis r10,28030
	ctx.r10.s64 = 1836974080;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,1909
	ctx.r10.u64 = ctx.r10.u64 | 1909;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,1684
	ctx.r3.s64 = ctx.r9.s64 + 1684;
	// bl 0x82816528
	ctx.lr = 0x82592890;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825928A0"))) PPC_WEAK_FUNC(sub_825928A0);
PPC_FUNC_IMPL(__imp__sub_825928A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,5448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5448);
	// lwz r9,5668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825929dc
	if (!ctx.cr6.eq) goto loc_825929DC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82592904
	if (!ctx.cr6.gt) goto loc_82592904;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_825928D8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r7,9169
	ctx.r7.s64 = 600899584;
	// ori r7,r7,35410
	ctx.r7.u64 = ctx.r7.u64 | 35410;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82592908
	if (ctx.cr6.eq) goto loc_82592908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825928d8
	if (ctx.cr6.lt) goto loc_825928D8;
loc_82592904:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82592908:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// addi r3,r9,1728
	ctx.r3.s64 = ctx.r9.s64 + 1728;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82816528
	ctx.lr = 0x82592920;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,5668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82592964
	if (!ctx.cr6.gt) goto loc_82592964;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_82592938:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r7,-6776
	ctx.r7.s64 = -444071936;
	// ori r7,r7,6672
	ctx.r7.u64 = ctx.r7.u64 | 6672;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825929d4
	if (ctx.cr6.eq) goto loc_825929D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82592938
	if (ctx.cr6.lt) goto loc_82592938;
loc_82592964:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82592968:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r11,5664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r9,1768
	ctx.r3.s64 = ctx.r9.s64 + 1768;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82816528
	ctx.lr = 0x82592980;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,5668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825929c4
	if (!ctx.cr6.gt) goto loc_825929C4;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_82592998:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r7,28030
	ctx.r7.s64 = 1836974080;
	// ori r7,r7,1909
	ctx.r7.u64 = ctx.r7.u64 | 1909;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825929c8
	if (ctx.cr6.eq) goto loc_825929C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82592998
	if (ctx.cr6.lt) goto loc_82592998;
loc_825929C4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825929C8:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r9,1808
	ctx.r3.s64 = ctx.r9.s64 + 1808;
	// b 0x82592ae0
	goto loc_82592AE0;
loc_825929D4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82592968
	goto loc_82592968;
loc_825929DC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82592a14
	if (!ctx.cr6.gt) goto loc_82592A14;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_825929E8:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lis r7,9169
	ctx.r7.s64 = 600899584;
	// ori r7,r7,35410
	ctx.r7.u64 = ctx.r7.u64 | 35410;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82592a18
	if (ctx.cr6.eq) goto loc_82592A18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825929e8
	if (ctx.cr6.lt) goto loc_825929E8;
loc_82592A14:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82592A18:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r9,1604
	ctx.r3.s64 = ctx.r9.s64 + 1604;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82816528
	ctx.lr = 0x82592A30;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,5668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82592a74
	if (!ctx.cr6.gt) goto loc_82592A74;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_82592A48:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r7,-6776
	ctx.r7.s64 = -444071936;
	// ori r7,r7,6672
	ctx.r7.u64 = ctx.r7.u64 | 6672;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82592a78
	if (ctx.cr6.eq) goto loc_82592A78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82592a48
	if (ctx.cr6.lt) goto loc_82592A48;
loc_82592A74:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82592A78:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r9,1644
	ctx.r3.s64 = ctx.r9.s64 + 1644;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82816528
	ctx.lr = 0x82592A90;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,5668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82592ad4
	if (!ctx.cr6.gt) goto loc_82592AD4;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
loc_82592AA8:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lis r7,28030
	ctx.r7.s64 = 1836974080;
	// ori r7,r7,1909
	ctx.r7.u64 = ctx.r7.u64 | 1909;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82592ad8
	if (ctx.cr6.eq) goto loc_82592AD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82592aa8
	if (ctx.cr6.lt) goto loc_82592AA8;
loc_82592AD4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82592AD8:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r3,r9,1684
	ctx.r3.s64 = ctx.r9.s64 + 1684;
loc_82592AE0:
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82816528
	ctx.lr = 0x82592AF0;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592B10"))) PPC_WEAK_FUNC(sub_82592B10);
PPC_FUNC_IMPL(__imp__sub_82592B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,5448(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 5448);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f12,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bne cr6,0x82592b3c
	if (!ctx.cr6.eq) goto loc_82592B3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,17096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17096);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17092(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17092);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82592b4c
	goto loc_82592B4C;
loc_82592B3C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,17088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17088);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17084);
	ctx.f13.f64 = double(temp.f32);
loc_82592B4C:
	// stfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592B58"))) PPC_WEAK_FUNC(sub_82592B58);
PPC_FUNC_IMPL(__imp__sub_82592B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82592B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825928a0
	ctx.lr = 0x82592B78;
	sub_825928A0(ctx, base);
	// lwz r11,5448(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5448);
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bne cr6,0x82592bbc
	if (!ctx.cr6.eq) goto loc_82592BBC;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmsubs f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// b 0x82592bdc
	goto loc_82592BDC;
loc_82592BBC:
	// lfs f13,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmsubs f0,f11,f0,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
loc_82592BDC:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592BE8"))) PPC_WEAK_FUNC(sub_82592BE8);
PPC_FUNC_IMPL(__imp__sub_82592BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82592BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x824116b0
	ctx.lr = 0x82592C0C;
	sub_824116B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82592c24
	if (ctx.cr0.eq) goto loc_82592C24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_82592C24:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824e5d00
	ctx.lr = 0x82592C38;
	sub_824E5D00(ctx, base);
	// lwz r11,460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82592c4c
	if (ctx.cr0.eq) goto loc_82592C4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_82592C4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592C58"))) PPC_WEAK_FUNC(sub_82592C58);
PPC_FUNC_IMPL(__imp__sub_82592C58) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x82892478
	ctx.lr = 0x82592C90;
	sub_82892478(ctx, base);
	// lwz r11,6196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82592cc0
	if (ctx.cr6.eq) goto loc_82592CC0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82592CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82592CC0:
	// lwz r11,6192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82592cf0
	if (ctx.cr6.eq) goto loc_82592CF0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82592CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82592CF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82592D18"))) PPC_WEAK_FUNC(sub_82592D18);
PPC_FUNC_IMPL(__imp__sub_82592D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82592D20;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r10,-27312
	ctx.r3.s64 = ctx.r10.s64 + -27312;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82592D64;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82592DA0;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82592dcc
	if (ctx.cr0.eq) goto loc_82592DCC;
	// bl 0x8239b5c8
	ctx.lr = 0x82592DAC;
	sub_8239B5C8(ctx, base);
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
	ctx.lr = 0x82592DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82592dd0
	if (!ctx.cr0.eq) goto loc_82592DD0;
loc_82592DCC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82592DD0:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r10,1848
	ctx.r3.s64 = ctx.r10.s64 + 1848;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82592DFC;
	sub_82816528(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,280(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82592E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x829bd3a8
	ctx.lr = 0x82592E34;
	sub_829BD3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592E48"))) PPC_WEAK_FUNC(sub_82592E48);
PPC_FUNC_IMPL(__imp__sub_82592E48) {
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
	// lwz r31,6196(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6196);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82592ecc
	if (ctx.cr6.eq) goto loc_82592ECC;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82592ea4
	if (!ctx.cr6.eq) goto loc_82592EA4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82592ecc
	if (!ctx.cr6.eq) goto loc_82592ECC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594570
	ctx.lr = 0x82592E98;
	sub_82594570(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// b 0x82592ecc
	goto loc_82592ECC;
loc_82592EA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82592ecc
	if (!ctx.cr6.eq) goto loc_82592ECC;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r4,1500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594570
	ctx.lr = 0x82592EC8;
	sub_82594570(ctx, base);
	// stw r30,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r30.u32);
loc_82592ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82592EE8"))) PPC_WEAK_FUNC(sub_82592EE8);
PPC_FUNC_IMPL(__imp__sub_82592EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82592EF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82592F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82592fc8
	if (ctx.cr0.gt) goto loc_82592FC8;
	// lwz r11,6200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82592fc8
	if (!ctx.cr6.eq) goto loc_82592FC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,6200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6200, ctx.r11.u32);
	// bl 0x82592fd8
	ctx.lr = 0x82592F30;
	sub_82592FD8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82592fc8
	if (ctx.cr0.eq) goto loc_82592FC8;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r29,3752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3752, ctx.r29.u32);
	// bl 0x82833108
	ctx.lr = 0x82592F48;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82592fb4
	if (ctx.cr0.eq) goto loc_82592FB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,80(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82891f38
	ctx.lr = 0x82592F64;
	sub_82891F38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x82592F7C;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// b 0x82592fb8
	goto loc_82592FB8;
loc_82592FB4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82592FB8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82592FC8;
	sub_82833A30(ctx, base);
loc_82592FC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e35c0
	ctx.lr = 0x82592FD0;
	sub_824E35C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82592FD8"))) PPC_WEAK_FUNC(sub_82592FD8);
PPC_FUNC_IMPL(__imp__sub_82592FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82592FE0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lwz r10,2348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825930f4
	if (!ctx.cr6.gt) goto loc_825930F4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_82593018:
	// lwz r11,2344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2344);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x824f6790
	ctx.lr = 0x82593024;
	sub_824F6790(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825930dc
	if (ctx.cr0.eq) goto loc_825930DC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f30,6176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6176);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x82593038;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f29,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x82593048;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bl 0x82891f38
	ctx.lr = 0x82593064;
	sub_82891F38(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x825930a0
	if (!ctx.cr6.eq) goto loc_825930A0;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x825930a0
	if (!ctx.cr6.eq) goto loc_825930A0;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x825930a0
	if (!ctx.cr6.eq) goto loc_825930A0;
	// lwz r11,620(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	// lwz r10,624(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// lwz r9,628(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
loc_825930A0:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
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
	// ble cr6,0x8259310c
	if (!ctx.cr6.gt) goto loc_8259310C;
loc_825930DC:
	// lwz r11,10548(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,2348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2348);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82593018
	if (ctx.cr6.lt) goto loc_82593018;
loc_825930F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825930F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_8259310C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825930f8
	goto loc_825930F8;
}

__attribute__((alias("__imp__sub_82593118"))) PPC_WEAK_FUNC(sub_82593118);
PPC_FUNC_IMPL(__imp__sub_82593118) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82593154
	if (!ctx.cr6.gt) goto loc_82593154;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82593154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82593154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x824df648
	ctx.lr = 0x82593160;
	sub_824DF648(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82593178"))) PPC_WEAK_FUNC(sub_82593178);
PPC_FUNC_IMPL(__imp__sub_82593178) {
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
	// lwz r31,6196(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6196);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825931c4
	if (ctx.cr6.eq) goto loc_825931C4;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825931c4
	if (!ctx.cr6.eq) goto loc_825931C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594570
	ctx.lr = 0x825931BC;
	sub_82594570(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
loc_825931C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825931D8"))) PPC_WEAK_FUNC(sub_825931D8);
PPC_FUNC_IMPL(__imp__sub_825931D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824e1420
	ctx.lr = 0x825931F8;
	sub_824E1420(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8259320c
	if (ctx.cr6.eq) goto loc_8259320C;
	// lis r4,7557
	ctx.r4.s64 = 495255552;
	// ori r4,r4,27748
	ctx.r4.u64 = ctx.r4.u64 | 27748;
	// b 0x82593214
	goto loc_82593214;
loc_8259320C:
	// lis r4,25150
	ctx.r4.s64 = 1648230400;
	// ori r4,r4,2216
	ctx.r4.u64 = ctx.r4.u64 | 2216;
loc_82593214:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8282d4b0
	ctx.lr = 0x82593224;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6204);
	// bl 0x82412b58
	ctx.lr = 0x82593230;
	sub_82412B58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593248"))) PPC_WEAK_FUNC(sub_82593248);
PPC_FUNC_IMPL(__imp__sub_82593248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82593250;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r31,6196(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825932a0
	if (ctx.cr6.eq) goto loc_825932A0;
	// lwz r11,1488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825932a0
	if (!ctx.cr6.eq) goto loc_825932A0;
	// stw r26,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r26.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1500);
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594570
	ctx.lr = 0x8259329C;
	sub_82594570(ctx, base);
	// stw r26,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r26.u32);
loc_825932A0:
	// stw r26,3632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3632, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e1bb0
	ctx.lr = 0x825932C0;
	sub_824E1BB0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,10612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82593340
	if (ctx.cr6.eq) goto loc_82593340;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x825932DC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x82593330
	if (ctx.cr0.eq) goto loc_82593330;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8259330c
	if (ctx.cr6.eq) goto loc_8259330C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82593300;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82593304;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82593310
	goto loc_82593310;
loc_8259330C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82593310:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f1c68
	ctx.lr = 0x8259331C;
	sub_827F1C68(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-23752
	ctx.r11.s64 = ctx.r11.s64 + -23752;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82593334
	goto loc_82593334;
loc_82593330:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82593334:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82593340;
	sub_82833A30(ctx, base);
loc_82593340:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82593350;
	sub_8233A258(ctx, base);
	// lis r4,5348
	ctx.r4.s64 = 350486528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,56521
	ctx.r4.u64 = ctx.r4.u64 | 56521;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x82593364;
	sub_829C3740(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593370"))) PPC_WEAK_FUNC(sub_82593370);
PPC_FUNC_IMPL(__imp__sub_82593370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82593378;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82593398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82593618
	if (ctx.cr0.gt) goto loc_82593618;
	// lwz r11,6200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82593618
	if (!ctx.cr6.eq) goto loc_82593618;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,6200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6200, ctx.r24.u32);
	// bl 0x82592fd8
	ctx.lr = 0x825933BC;
	sub_82592FD8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8259357c
	if (ctx.cr0.eq) goto loc_8259357C;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r5,-6866
	ctx.r5.s64 = -449970176;
	// stw r26,3752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3752, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,31988
	ctx.r5.u64 = ctx.r5.u64 | 31988;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289e830
	ctx.lr = 0x825933E0;
	sub_8289E830(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c2520
	ctx.lr = 0x825933E8;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82593450
	if (ctx.cr0.eq) goto loc_82593450;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-6866
	ctx.r4.s64 = -449970176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,31988
	ctx.r4.u64 = ctx.r4.u64 | 31988;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259340C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828aee00
	ctx.lr = 0x8259341C;
	sub_828AEE00(ctx, base);
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// b 0x8259345c
	goto loc_8259345C;
loc_82593450:
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8259345C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82593494
	if (!ctx.cr6.eq) goto loc_82593494;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82593494
	if (!ctx.cr6.eq) goto loc_82593494;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82593494
	if (!ctx.cr6.eq) goto loc_82593494;
	// lwz r29,620(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r28,624(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r27,628(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
loc_82593494:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8259349C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825934ec
	if (ctx.cr0.eq) goto loc_825934EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,80(r25)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// lwz r23,80(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x825934B4;
	sub_82833180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// addi r11,r11,6768
	ctx.r11.s64 = ctx.r11.s64 + 6768;
	// stw r25,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// b 0x825934f0
	goto loc_825934F0;
loc_825934EC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_825934F0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82593500;
	sub_82833A30(ctx, base);
	// lwz r11,6192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593520
	if (ctx.cr6.eq) goto loc_82593520;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593520
	if (ctx.cr6.eq) goto loc_82593520;
	// stw r24,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r24.u32);
	// stw r24,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r24.u32);
loc_82593520:
	// lwz r11,6196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593540
	if (ctx.cr6.eq) goto loc_82593540;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593540
	if (ctx.cr6.eq) goto loc_82593540;
	// stw r24,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r24.u32);
	// stw r24,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r24.u32);
loc_82593540:
	// lwz r11,1780(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593560
	if (ctx.cr6.eq) goto loc_82593560;
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593560
	if (ctx.cr6.eq) goto loc_82593560;
	// stw r24,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r24.u32);
	// stw r24,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r24.u32);
loc_82593560:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82593578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82593618
	goto loc_82593618;
loc_8259357C:
	// lwz r11,2360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82593590
	if (ctx.cr6.gt) goto loc_82593590;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f4228
	ctx.lr = 0x82593590;
	sub_824F4228(ctx, base);
loc_82593590:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r31,6196(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6196);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r29,r11,-12052
	ctx.r29.s64 = ctx.r11.s64 + -12052;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x825935dc
	if (ctx.cr6.eq) goto loc_825935DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,2592(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2592);
	// bl 0x82816528
	ctx.lr = 0x825935B8;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1504
	ctx.r4.s64 = ctx.r31.s64 + 1504;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8284f7c0
	ctx.lr = 0x825935D0;
	sub_8284F7C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284d0e0
	ctx.lr = 0x825935DC;
	sub_8284D0E0(ctx, base);
loc_825935DC:
	// lwz r31,6192(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82593618
	if (ctx.cr6.eq) goto loc_82593618;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,2592(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2592);
	// bl 0x82816528
	ctx.lr = 0x825935F4;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1544
	ctx.r4.s64 = ctx.r31.s64 + 1544;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284f7c0
	ctx.lr = 0x8259360C;
	sub_8284F7C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284d0e0
	ctx.lr = 0x82593618;
	sub_8284D0E0(ctx, base);
loc_82593618:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593628"))) PPC_WEAK_FUNC(sub_82593628);
PPC_FUNC_IMPL(__imp__sub_82593628) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,6196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6196);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8259363c
	if (!ctx.cr6.eq) goto loc_8259363C;
	// stw r11,6196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6196, ctx.r11.u32);
loc_8259363C:
	// lwz r10,6192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6192);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8259364c
	if (!ctx.cr6.eq) goto loc_8259364C;
	// stw r11,6192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6192, ctx.r11.u32);
loc_8259364C:
	// b 0x82590968
	sub_82590968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593650"))) PPC_WEAK_FUNC(sub_82593650);
PPC_FUNC_IMPL(__imp__sub_82593650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x82593678;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82593688;
	sub_82410060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82590750
	ctx.lr = 0x82593694;
	sub_82590750(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825936B0"))) PPC_WEAK_FUNC(sub_825936B0);
PPC_FUNC_IMPL(__imp__sub_825936B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25540);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825936f0
	if (!ctx.cr0.eq) goto loc_825936F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25540(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25540, ctx.r11.u32);
	// addi r3,r9,1436
	ctx.r3.s64 = ctx.r9.s64 + 1436;
	// bl 0x82816528
	ctx.lr = 0x825936E8;
	sub_82816528(ctx, base);
	// stw r3,25536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25536, ctx.r3.u32);
	// b 0x825936f4
	goto loc_825936F4;
loc_825936F0:
	// lwz r3,25536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25536);
loc_825936F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593708"))) PPC_WEAK_FUNC(sub_82593708);
PPC_FUNC_IMPL(__imp__sub_82593708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82593758
	ctx.lr = 0x82593728;
	sub_82593758(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259373C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593758"))) PPC_WEAK_FUNC(sub_82593758);
PPC_FUNC_IMPL(__imp__sub_82593758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12332
	ctx.r31.s64 = ctx.r11.s64 + 12332;
	// lwz r11,12328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825937a0
	if (!ctx.cr0.eq) goto loc_825937A0;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6848
	ctx.r9.s64 = ctx.r9.s64 + 6848;
	// stw r11,12328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12328, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21928
	ctx.r3.s64 = ctx.r11.s64 + 21928;
	// bl 0x82a4c758
	ctx.lr = 0x825937A0;
	sub_82A4C758(ctx, base);
loc_825937A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825937B8"))) PPC_WEAK_FUNC(sub_825937B8);
PPC_FUNC_IMPL(__imp__sub_825937B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823ba418
	ctx.lr = 0x825937D8;
	sub_823BA418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825937EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593808"))) PPC_WEAK_FUNC(sub_82593808);
PPC_FUNC_IMPL(__imp__sub_82593808) {
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x8259381C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259382c
	if (ctx.cr0.eq) goto loc_8259382C;
	// bl 0x8267e098
	ctx.lr = 0x82593828;
	sub_8267E098(ctx, base);
	// b 0x82593830
	goto loc_82593830;
loc_8259382C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82593830:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593840"))) PPC_WEAK_FUNC(sub_82593840);
PPC_FUNC_IMPL(__imp__sub_82593840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-32732(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32732);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82593880
	if (!ctx.cr0.eq) goto loc_82593880;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,-32732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32732, ctx.r11.u32);
	// addi r3,r9,-5684
	ctx.r3.s64 = ctx.r9.s64 + -5684;
	// bl 0x82816528
	ctx.lr = 0x82593878;
	sub_82816528(ctx, base);
	// stw r3,-32736(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32736, ctx.r3.u32);
	// b 0x82593884
	goto loc_82593884;
loc_82593880:
	// lwz r3,-32736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32736);
loc_82593884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593898"))) PPC_WEAK_FUNC(sub_82593898);
PPC_FUNC_IMPL(__imp__sub_82593898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823c5520
	ctx.lr = 0x825938B8;
	sub_823C5520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825938CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825938E8"))) PPC_WEAK_FUNC(sub_825938E8);
PPC_FUNC_IMPL(__imp__sub_825938E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82412588
	ctx.lr = 0x82593900;
	sub_82412588(ctx, base);
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
	ctx.lr = 0x82593918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82593928
	if (!ctx.cr0.eq) goto loc_82593928;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82593928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593940"))) PPC_WEAK_FUNC(sub_82593940);
PPC_FUNC_IMPL(__imp__sub_82593940) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82591d88
	sub_82591D88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593948"))) PPC_WEAK_FUNC(sub_82593948);
PPC_FUNC_IMPL(__imp__sub_82593948) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82591fc0
	sub_82591FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593950"))) PPC_WEAK_FUNC(sub_82593950);
PPC_FUNC_IMPL(__imp__sub_82593950) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82591f70
	sub_82591F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593958"))) PPC_WEAK_FUNC(sub_82593958);
PPC_FUNC_IMPL(__imp__sub_82593958) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82591fc0
	sub_82591FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593960"))) PPC_WEAK_FUNC(sub_82593960);
PPC_FUNC_IMPL(__imp__sub_82593960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,12336
	ctx.r31.s64 = ctx.r11.s64 + 12336;
	// lwz r11,12340(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12340);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825939a8
	if (!ctx.cr0.eq) goto loc_825939A8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,6908
	ctx.r9.s64 = ctx.r9.s64 + 6908;
	// stw r11,12340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12340, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// bl 0x82a4c758
	ctx.lr = 0x825939A8;
	sub_82A4C758(ctx, base);
loc_825939A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825939C0"))) PPC_WEAK_FUNC(sub_825939C0);
PPC_FUNC_IMPL(__imp__sub_825939C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,25532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25532);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82593a00
	if (!ctx.cr0.eq) goto loc_82593A00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,25532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25532, ctx.r11.u32);
	// addi r3,r9,6888
	ctx.r3.s64 = ctx.r9.s64 + 6888;
	// bl 0x82816528
	ctx.lr = 0x825939F8;
	sub_82816528(ctx, base);
	// stw r3,25528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25528, ctx.r3.u32);
	// b 0x82593a04
	goto loc_82593A04;
loc_82593A00:
	// lwz r3,25528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25528);
loc_82593A04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593A18"))) PPC_WEAK_FUNC(sub_82593A18);
PPC_FUNC_IMPL(__imp__sub_82593A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82593960
	ctx.lr = 0x82593A38;
	sub_82593960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82593A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593A68"))) PPC_WEAK_FUNC(sub_82593A68);
PPC_FUNC_IMPL(__imp__sub_82593A68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27336
	ctx.r3.s64 = ctx.r11.s64 + -27336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593A78"))) PPC_WEAK_FUNC(sub_82593A78);
PPC_FUNC_IMPL(__imp__sub_82593A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82593ab0
	if (ctx.cr6.eq) goto loc_82593AB0;
	// bl 0x8239b418
	ctx.lr = 0x82593AA0;
	sub_8239B418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82593ab0
	if (!ctx.cr6.eq) goto loc_82593AB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82593abc
	goto loc_82593ABC;
loc_82593AB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824003f0
	ctx.lr = 0x82593ABC;
	sub_824003F0(ctx, base);
loc_82593ABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593AD8"))) PPC_WEAK_FUNC(sub_82593AD8);
PPC_FUNC_IMPL(__imp__sub_82593AD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b418
	sub_8239B418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593AE0"))) PPC_WEAK_FUNC(sub_82593AE0);
PPC_FUNC_IMPL(__imp__sub_82593AE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x82593AFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82593b10
	if (ctx.cr0.eq) goto loc_82593B10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82593b78
	ctx.lr = 0x82593B0C;
	sub_82593B78(ctx, base);
	// b 0x82593b14
	goto loc_82593B14;
loc_82593B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82593B14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593B28"))) PPC_WEAK_FUNC(sub_82593B28);
PPC_FUNC_IMPL(__imp__sub_82593B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239b418
	ctx.lr = 0x82593B48;
	sub_8239B418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82593b5c
	if (ctx.cr6.eq) goto loc_82593B5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x82593B5C;
	sub_82400390(ctx, base);
loc_82593B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593B78"))) PPC_WEAK_FUNC(sub_82593B78);
PPC_FUNC_IMPL(__imp__sub_82593B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82400248
	ctx.lr = 0x82593B98;
	sub_82400248(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,7152
	ctx.r11.s64 = ctx.r11.s64 + 7152;
	// addi r10,r10,8244
	ctx.r10.s64 = ctx.r10.s64 + 8244;
	// addi r9,r9,8296
	ctx.r9.s64 = ctx.r9.s64 + 8296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// lwz r11,1520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1520);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// lwz r11,1532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// lwz r11,1544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593C50"))) PPC_WEAK_FUNC(sub_82593C50);
PPC_FUNC_IMPL(__imp__sub_82593C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8284c6d0
	ctx.lr = 0x82593C70;
	sub_8284C6D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82593c80
	if (ctx.cr0.eq) goto loc_82593C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82593C80;
	sub_82332DB8(ctx, base);
loc_82593C80:
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

__attribute__((alias("__imp__sub_82593CA0"))) PPC_WEAK_FUNC(sub_82593CA0);
PPC_FUNC_IMPL(__imp__sub_82593CA0) {
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
	// bl 0x8284c630
	ctx.lr = 0x82593CBC;
	sub_8284C630(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r7,7152
	ctx.r7.s64 = ctx.r7.s64 + 7152;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,-32616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32616);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r8,r8,8296
	ctx.r8.s64 = ctx.r8.s64 + 8296;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// addi r6,r6,8244
	ctx.r6.s64 = ctx.r6.s64 + 8244;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// addi r3,r8,6928
	ctx.r3.s64 = ctx.r8.s64 + 6928;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r7,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r7.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r4,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r4.u32);
	// stw r5,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r5.u32);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// stw r10,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r10.u32);
	// stw r9,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82593D58;
	sub_82816528(ctx, base);
	// stw r3,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,6956
	ctx.r3.s64 = ctx.r11.s64 + 6956;
	// bl 0x82816528
	ctx.lr = 0x82593D68;
	sub_82816528(ctx, base);
	// stw r3,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,6984
	ctx.r3.s64 = ctx.r11.s64 + 6984;
	// bl 0x82816528
	ctx.lr = 0x82593D78;
	sub_82816528(ctx, base);
	// stw r3,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,6996
	ctx.r3.s64 = ctx.r11.s64 + 6996;
	// bl 0x82816528
	ctx.lr = 0x82593D88;
	sub_82816528(ctx, base);
	// stw r3,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r3.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,7008
	ctx.r3.s64 = ctx.r11.s64 + 7008;
	// bl 0x82816528
	ctx.lr = 0x82593D98;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82593DB8"))) PPC_WEAK_FUNC(sub_82593DB8);
PPC_FUNC_IMPL(__imp__sub_82593DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1470
	ctx.lr = 0x82593DD0;
	sub_829C1470(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593de4
	if (ctx.cr6.eq) goto loc_82593DE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_82593DE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82594230
	ctx.lr = 0x82593DEC;
	sub_82594230(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82593E00;
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

__attribute__((alias("__imp__sub_82593E18"))) PPC_WEAK_FUNC(sub_82593E18);
PPC_FUNC_IMPL(__imp__sub_82593E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,7048
	ctx.r3.s64 = ctx.r11.s64 + 7048;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593E28"))) PPC_WEAK_FUNC(sub_82593E28);
PPC_FUNC_IMPL(__imp__sub_82593E28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,7080
	ctx.r3.s64 = ctx.r11.s64 + 7080;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593E38"))) PPC_WEAK_FUNC(sub_82593E38);
PPC_FUNC_IMPL(__imp__sub_82593E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593E50"))) PPC_WEAK_FUNC(sub_82593E50);
PPC_FUNC_IMPL(__imp__sub_82593E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82593E58;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x824113a0
	ctx.lr = 0x82593E78;
	sub_824113A0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,7112
	ctx.r3.s64 = ctx.r11.s64 + 7112;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82816528
	ctx.lr = 0x82593E8C;
	sub_82816528(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,7128
	ctx.r3.s64 = ctx.r11.s64 + 7128;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r27,r11,1535
	ctx.r27.u64 = ctx.r11.u64 | 1535;
	// bl 0x82816528
	ctx.lr = 0x82593EA4;
	sub_82816528(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// bl 0x829c87d0
	ctx.lr = 0x82593ED8;
	sub_829C87D0(ctx, base);
	// stw r3,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82593f5c
	if (ctx.cr0.eq) goto loc_82593F5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r7,r11,32716
	ctx.r7.s64 = ctx.r11.s64 + 32716;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f11,17060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17060);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r6.u32);
	// lfs f10,19196(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,204(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19192);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f12,18516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18516);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r7,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r7.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
	// stw r8,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
loc_82593F5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593F68"))) PPC_WEAK_FUNC(sub_82593F68);
PPC_FUNC_IMPL(__imp__sub_82593F68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82593f8c
	if (ctx.cr6.eq) goto loc_82593F8C;
	// lwz r10,1520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82593f84
	if (!ctx.cr6.eq) goto loc_82593F84;
	// b 0x82594170
	sub_82594170(ctx, base);
	return;
loc_82593F84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82593F8C:
	// lwz r11,1520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1520);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82594230
	sub_82594230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82593F9C"))) PPC_WEAK_FUNC(sub_82593F9C);
PPC_FUNC_IMPL(__imp__sub_82593F9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82593FA0"))) PPC_WEAK_FUNC(sub_82593FA0);
PPC_FUNC_IMPL(__imp__sub_82593FA0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1428);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593fcc
	if (ctx.cr6.eq) goto loc_82593FCC;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82593fcc
	if (!ctx.cr6.eq) goto loc_82593FCC;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
loc_82593FCC:
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82593fe0
	if (ctx.cr6.eq) goto loc_82593FE0;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82593FE0:
	// lwz r7,1524(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1524);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8259400c
	if (!ctx.cr6.eq) goto loc_8259400C;
	// lwz r3,1540(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,1492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1492, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1520, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
loc_8259400C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259401c
	if (ctx.cr6.eq) goto loc_8259401C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8259401C:
	// lwz r11,1528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1528);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,1540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1540);
	// stw r8,1492(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1492, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,1520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1520, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594050"))) PPC_WEAK_FUNC(sub_82594050);
PPC_FUNC_IMPL(__imp__sub_82594050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82594058;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829c2520
	ctx.lr = 0x8259406C;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82594164
	if (ctx.cr0.eq) goto loc_82594164;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,7136
	ctx.r3.s64 = ctx.r11.s64 + 7136;
	// bl 0x82816528
	ctx.lr = 0x82594080;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825940a8
	if (ctx.cr6.eq) goto loc_825940A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825940A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825940ac
	goto loc_825940AC;
loc_825940A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825940AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82594164
	if (ctx.cr6.eq) goto loc_82594164;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825940C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x825940DC;
	sub_8282D4B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82594164
	if (ctx.cr0.eq) goto loc_82594164;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825940f8
	if (ctx.cr6.eq) goto loc_825940F8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825940F8:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8259410c
	if (!ctx.cr6.eq) goto loc_8259410C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82594164
	if (!ctx.cr0.eq) goto loc_82594164;
loc_8259410C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f13,60(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82412b58
	ctx.lr = 0x82594124;
	sub_82412B58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259413C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82594164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82594164:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594170"))) PPC_WEAK_FUNC(sub_82594170);
PPC_FUNC_IMPL(__imp__sub_82594170) {
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
	// lwz r30,800(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82594214
	if (ctx.cr6.eq) goto loc_82594214;
	// bl 0x82479080
	ctx.lr = 0x82594198;
	sub_82479080(ctx, base);
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
	ctx.lr = 0x825941B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x825941c0
	if (!ctx.cr0.eq) goto loc_825941C0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825941C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// lwz r7,1504(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r4,1532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,1508(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1508);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,1496(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1496);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825941F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,1524(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594050
	ctx.lr = 0x8259420C;
	sub_82594050(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
loc_82594214:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594230"))) PPC_WEAK_FUNC(sub_82594230);
PPC_FUNC_IMPL(__imp__sub_82594230) {
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
	// lwz r30,800(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825942d4
	if (ctx.cr6.eq) goto loc_825942D4;
	// bl 0x82479080
	ctx.lr = 0x82594258;
	sub_82479080(ctx, base);
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
	ctx.lr = 0x82594270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne 0x82594280
	if (!ctx.cr0.eq) goto loc_82594280;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82594280:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,1516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// lwz r7,1504(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r4,1536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,1508(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1508);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,1496(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1496);
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825942B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,1528(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594050
	ctx.lr = 0x825942CC;
	sub_82594050(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
loc_825942D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825942F0"))) PPC_WEAK_FUNC(sub_825942F0);
PPC_FUNC_IMPL(__imp__sub_825942F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82593b28
	sub_82593B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825942F8"))) PPC_WEAK_FUNC(sub_825942F8);
PPC_FUNC_IMPL(__imp__sub_825942F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82593c50
	sub_82593C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594300"))) PPC_WEAK_FUNC(sub_82594300);
PPC_FUNC_IMPL(__imp__sub_82594300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27312
	ctx.r3.s64 = ctx.r11.s64 + -27312;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594310"))) PPC_WEAK_FUNC(sub_82594310);
PPC_FUNC_IMPL(__imp__sub_82594310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82594348
	if (ctx.cr6.eq) goto loc_82594348;
	// bl 0x8239b5c8
	ctx.lr = 0x82594338;
	sub_8239B5C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82594348
	if (!ctx.cr6.eq) goto loc_82594348;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82594354
	goto loc_82594354;
loc_82594348:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824003f0
	ctx.lr = 0x82594354;
	sub_824003F0(ctx, base);
loc_82594354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594370"))) PPC_WEAK_FUNC(sub_82594370);
PPC_FUNC_IMPL(__imp__sub_82594370) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b5c8
	sub_8239B5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594378"))) PPC_WEAK_FUNC(sub_82594378);
PPC_FUNC_IMPL(__imp__sub_82594378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82594398;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82594400
	if (ctx.cr0.eq) goto loc_82594400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400248
	ctx.lr = 0x825943AC;
	sub_82400248(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,8440
	ctx.r11.s64 = ctx.r11.s64 + 8440;
	// addi r10,r10,9528
	ctx.r10.s64 = ctx.r10.s64 + 9528;
	// addi r9,r9,8296
	ctx.r9.s64 = ctx.r9.s64 + 8296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r11,1500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// b 0x82594404
	goto loc_82594404;
loc_82594400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82594404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594420"))) PPC_WEAK_FUNC(sub_82594420);
PPC_FUNC_IMPL(__imp__sub_82594420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239b5c8
	ctx.lr = 0x82594440;
	sub_8239B5C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82594454
	if (ctx.cr6.eq) goto loc_82594454;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400390
	ctx.lr = 0x82594454;
	sub_82400390(ctx, base);
loc_82594454:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594470"))) PPC_WEAK_FUNC(sub_82594470);
PPC_FUNC_IMPL(__imp__sub_82594470) {
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
	// bl 0x829c1470
	ctx.lr = 0x82594488;
	sub_829C1470(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,1496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82594570
	ctx.lr = 0x825944A4;
	sub_82594570(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8239b148
	ctx.lr = 0x825944B4;
	sub_8239B148(ctx, base);
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
	ctx.lr = 0x825944CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825944dc
	if (!ctx.cr0.eq) goto loc_825944DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825944DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2368);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825944EC;
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

__attribute__((alias("__imp__sub_82594500"))) PPC_WEAK_FUNC(sub_82594500);
PPC_FUNC_IMPL(__imp__sub_82594500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,8360
	ctx.r3.s64 = ctx.r11.s64 + 8360;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594510"))) PPC_WEAK_FUNC(sub_82594510);
PPC_FUNC_IMPL(__imp__sub_82594510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,8400
	ctx.r3.s64 = ctx.r11.s64 + 8400;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594520"))) PPC_WEAK_FUNC(sub_82594520);
PPC_FUNC_IMPL(__imp__sub_82594520) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82594540
	if (ctx.cr6.eq) goto loc_82594540;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82594540:
	// lwz r8,1496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82594568
	if (ctx.cr6.eq) goto loc_82594568;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259455c
	if (ctx.cr6.eq) goto loc_8259455C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8259455C:
	// lwz r11,1500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1500);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82594568:
	// stw r9,1492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1492, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594570"))) PPC_WEAK_FUNC(sub_82594570);
PPC_FUNC_IMPL(__imp__sub_82594570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82594578;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x829c2520
	ctx.lr = 0x8259458C;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82594680
	if (ctx.cr0.eq) goto loc_82594680;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r11,1848
	ctx.r3.s64 = ctx.r11.s64 + 1848;
	// bl 0x82816528
	ctx.lr = 0x825945A0;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825945c8
	if (ctx.cr6.eq) goto loc_825945C8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825945C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825945cc
	goto loc_825945CC;
loc_825945C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825945CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82594680
	if (ctx.cr6.eq) goto loc_82594680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825945E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82594680
	if (ctx.cr0.eq) goto loc_82594680;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x82594600;
	sub_8282D4B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82594680
	if (ctx.cr0.eq) goto loc_82594680;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259461c
	if (ctx.cr6.eq) goto loc_8259461C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8259461C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82594630
	if (!ctx.cr6.eq) goto loc_82594630;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82594680
	if (!ctx.cr0.eq) goto loc_82594680;
loc_82594630:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f31,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x82594640;
	sub_82412B58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82594658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82594680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82594680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594690"))) PPC_WEAK_FUNC(sub_82594690);
PPC_FUNC_IMPL(__imp__sub_82594690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82594420
	sub_82594420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594698"))) PPC_WEAK_FUNC(sub_82594698);
PPC_FUNC_IMPL(__imp__sub_82594698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27288
	ctx.r3.s64 = ctx.r11.s64 + -27288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825946A8"))) PPC_WEAK_FUNC(sub_825946A8);
PPC_FUNC_IMPL(__imp__sub_825946A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239b720
	sub_8239B720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825946B0"))) PPC_WEAK_FUNC(sub_825946B0);
PPC_FUNC_IMPL(__imp__sub_825946B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823998d8
	sub_823998D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825946B8"))) PPC_WEAK_FUNC(sub_825946B8);
PPC_FUNC_IMPL(__imp__sub_825946B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,2032
	ctx.r3.s64 = 2032;
	// bl 0x82833108
	ctx.lr = 0x825946D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825946ec
	if (ctx.cr0.eq) goto loc_825946EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82594818
	ctx.lr = 0x825946E8;
	sub_82594818(ctx, base);
	// b 0x825946f0
	goto loc_825946F0;
loc_825946EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825946F0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82594704
	if (ctx.cr6.eq) goto loc_82594704;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82594704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594718"))) PPC_WEAK_FUNC(sub_82594718);
PPC_FUNC_IMPL(__imp__sub_82594718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// beq cr6,0x82594748
	if (ctx.cr6.eq) goto loc_82594748;
	// bl 0x8239b720
	ctx.lr = 0x82594740;
	sub_8239B720(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82594784
	if (ctx.cr6.eq) goto loc_82594784;
loc_82594748:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x8259475C;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82594784
	if (!ctx.cr0.eq) goto loc_82594784;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82347ab0
	ctx.lr = 0x82594778;
	sub_82347AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82594788
	if (ctx.cr0.eq) goto loc_82594788;
loc_82594784:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82594788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825947A0"))) PPC_WEAK_FUNC(sub_825947A0);
PPC_FUNC_IMPL(__imp__sub_825947A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239b720
	ctx.lr = 0x825947C0;
	sub_8239B720(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825947d0
	if (!ctx.cr6.eq) goto loc_825947D0;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82594800
	goto loc_82594800;
loc_825947D0:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x825947E4;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82594800
	if (!ctx.cr0.eq) goto loc_82594800;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82347b88
	ctx.lr = 0x82594800;
	sub_82347B88(ctx, base);
loc_82594800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594818"))) PPC_WEAK_FUNC(sub_82594818);
PPC_FUNC_IMPL(__imp__sub_82594818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82594820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r29,r31,2000
	ctx.r29.s64 = ctx.r31.s64 + 2000;
	// stw r9,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82594868
	if (!ctx.cr6.eq) goto loc_82594868;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82594874
	goto loc_82594874;
loc_82594868:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82594874:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x8259487C;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8259488c
	if (!ctx.cr6.eq) goto loc_8259488C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82594898
	goto loc_82594898;
loc_8259488C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82594898:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82346f30
	ctx.lr = 0x825948A4;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825948b4
	if (!ctx.cr6.eq) goto loc_825948B4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825948c0
	goto loc_825948C0;
loc_825948B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825948C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2016
	ctx.r3.s64 = ctx.r31.s64 + 2016;
	// bl 0x82347be8
	ctx.lr = 0x825948CC;
	sub_82347BE8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,9584
	ctx.r11.s64 = ctx.r11.s64 + 9584;
	// addi r10,r10,11156
	ctx.r10.s64 = ctx.r10.s64 + 11156;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,11208
	ctx.r9.s64 = ctx.r9.s64 + 11208;
	// addi r8,r8,7928
	ctx.r8.s64 = ctx.r8.s64 + 7928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594948"))) PPC_WEAK_FUNC(sub_82594948);
PPC_FUNC_IMPL(__imp__sub_82594948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82594ad0
	ctx.lr = 0x8259496C;
	sub_82594AD0(ctx, base);
	// bl 0x823ff098
	ctx.lr = 0x82594970;
	sub_823FF098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82594980
	if (ctx.cr0.eq) goto loc_82594980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82594980;
	sub_82332DB8(ctx, base);
loc_82594980:
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

__attribute__((alias("__imp__sub_825949A0"))) PPC_WEAK_FUNC(sub_825949A0);
PPC_FUNC_IMPL(__imp__sub_825949A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,15864
	ctx.r9.s64 = ctx.r9.s64 + 15864;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r9.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// bl 0x824cbb48
	ctx.lr = 0x825949E8;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ba650
	ctx.lr = 0x825949F4;
	sub_825BA650(ctx, base);
	// addi r3,r31,2016
	ctx.r3.s64 = ctx.r31.s64 + 2016;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825b8a40
	ctx.lr = 0x82594A00;
	sub_825B8A40(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,9584
	ctx.r11.s64 = ctx.r11.s64 + 9584;
	// addi r10,r10,11156
	ctx.r10.s64 = ctx.r10.s64 + 11156;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,11208
	ctx.r9.s64 = ctx.r9.s64 + 11208;
	// addi r8,r8,7928
	ctx.r8.s64 = ctx.r8.s64 + 7928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594A88"))) PPC_WEAK_FUNC(sub_82594A88);
PPC_FUNC_IMPL(__imp__sub_82594A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x82594AAC;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825b8b00
	ctx.lr = 0x82594ABC;
	sub_825B8B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594AD0"))) PPC_WEAK_FUNC(sub_82594AD0);
PPC_FUNC_IMPL(__imp__sub_82594AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,9584
	ctx.r10.s64 = ctx.r10.s64 + 9584;
	// addi r9,r9,11156
	ctx.r9.s64 = ctx.r9.s64 + 11156;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,11208
	ctx.r8.s64 = ctx.r8.s64 + 11208;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r7,r7,7928
	ctx.r7.s64 = ctx.r7.s64 + 7928;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r7,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r7.u32);
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594B48"))) PPC_WEAK_FUNC(sub_82594B48);
PPC_FUNC_IMPL(__imp__sub_82594B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82594B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// beq cr6,0x82594b90
	if (ctx.cr6.eq) goto loc_82594B90;
	// bl 0x8239b860
	ctx.lr = 0x82594B6C;
	sub_8239B860(ctx, base);
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
	ctx.lr = 0x82594B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82594b94
	if (!ctx.cr0.eq) goto loc_82594B94;
loc_82594B90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82594B94:
	// stw r11,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x82594BB4;
	sub_824CE338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594BC0"))) PPC_WEAK_FUNC(sub_82594BC0);
PPC_FUNC_IMPL(__imp__sub_82594BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba7d0
	ctx.lr = 0x82594BE4;
	sub_825BA7D0(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825b8c00
	ctx.lr = 0x82594BF4;
	sub_825B8C00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594C08"))) PPC_WEAK_FUNC(sub_82594C08);
PPC_FUNC_IMPL(__imp__sub_82594C08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// stw r4,5452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5452, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82594C28"))) PPC_WEAK_FUNC(sub_82594C28);
PPC_FUNC_IMPL(__imp__sub_82594C28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82594b48
	sub_82594B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82594C38"))) PPC_WEAK_FUNC(sub_82594C38);
PPC_FUNC_IMPL(__imp__sub_82594C38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82594a88
	sub_82594A88(ctx, base);
	return;
}

