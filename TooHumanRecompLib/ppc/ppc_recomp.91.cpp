#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82670168"))) PPC_WEAK_FUNC(sub_82670168);
PPC_FUNC_IMPL(__imp__sub_82670168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826708b8
	ctx.lr = 0x82670188;
	sub_826708B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82670198
	if (!ctx.cr6.eq) goto loc_82670198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826701b0
	goto loc_826701B0;
loc_82670198:
	// bl 0x82664048
	ctx.lr = 0x8267019C;
	sub_82664048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826701b0
	if (ctx.cr6.eq) goto loc_826701B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x826701B0;
	sub_82339D80(ctx, base);
loc_826701B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826701C8"))) PPC_WEAK_FUNC(sub_826701C8);
PPC_FUNC_IMPL(__imp__sub_826701C8) {
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
	// addi r11,r11,-21112
	ctx.r11.s64 = ctx.r11.s64 + -21112;
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
	// ble cr6,0x82670234
	if (!ctx.cr6.gt) goto loc_82670234;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82670204:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82670224
	if (ctx.cr6.eq) goto loc_82670224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82670204
	if (ctx.cr6.lt) goto loc_82670204;
	// b 0x82670234
	goto loc_82670234;
loc_82670224:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82670234:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267025c
	if (ctx.cr6.eq) goto loc_8267025C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82670254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82670260
	goto loc_82670260;
loc_8267025C:
	// bl 0x8265c670
	ctx.lr = 0x82670260;
	sub_8265C670(ctx, base);
loc_82670260:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670270"))) PPC_WEAK_FUNC(sub_82670270);
PPC_FUNC_IMPL(__imp__sub_82670270) {
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
	// addi r11,r11,-21112
	ctx.r11.s64 = ctx.r11.s64 + -21112;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826702d0
	if (!ctx.cr6.gt) goto loc_826702D0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8267029C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x826702bc
	if (ctx.cr6.eq) goto loc_826702BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8267029c
	if (ctx.cr6.lt) goto loc_8267029C;
	// b 0x826702d0
	goto loc_826702D0;
loc_826702BC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826702d8
	if (!ctx.cr6.eq) goto loc_826702D8;
loc_826702D0:
	// bl 0x8265c718
	ctx.lr = 0x826702D4;
	sub_8265C718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_826702D8:
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

__attribute__((alias("__imp__sub_826702F0"))) PPC_WEAK_FUNC(sub_826702F0);
PPC_FUNC_IMPL(__imp__sub_826702F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21112
	ctx.r11.s64 = ctx.r11.s64 + -21112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82670370
	if (!ctx.cr6.gt) goto loc_82670370;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8267032C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8267034c
	if (ctx.cr6.eq) goto loc_8267034C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8267032c
	if (ctx.cr6.lt) goto loc_8267032C;
	// b 0x82670370
	goto loc_82670370;
loc_8267034C:
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
	ctx.lr = 0x82670368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267037c
	if (!ctx.cr0.eq) goto loc_8267037C;
loc_82670370:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265c798
	ctx.lr = 0x8267037C;
	sub_8265C798(ctx, base);
loc_8267037C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670398"))) PPC_WEAK_FUNC(sub_82670398);
PPC_FUNC_IMPL(__imp__sub_82670398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826703A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8265dc48
	ctx.lr = 0x826703B4;
	sub_8265DC48(ctx, base);
	// mulli r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 * 24;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,560
	ctx.r4.s64 = ctx.r10.s64 + 560;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x826703E8;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816cf8
	ctx.lr = 0x82670408;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x82670414;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8267041C;
	sub_82333960(ctx, base);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r24,172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82670438
	if (!ctx.cr6.eq) goto loc_82670438;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82670440
	if (ctx.cr6.eq) goto loc_82670440;
loc_82670438:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82670444
	goto loc_82670444;
loc_82670440:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82670444:
	// addi r11,r31,21
	ctx.r11.s64 = ctx.r31.s64 + 21;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r6,r25,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// bl 0x82816c30
	ctx.lr = 0x82670464;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82670470;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82670478;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267048c
	if (!ctx.cr6.eq) goto loc_8267048C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8267048C:
	// bl 0x828165a8
	ctx.lr = 0x82670490;
	sub_828165A8(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r4,r26,3160
	ctx.r4.s64 = ctx.r26.s64 + 3160;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826704B4;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x826704c8
	if (!ctx.cr6.eq) goto loc_826704C8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x826704d0
	if (ctx.cr6.eq) goto loc_826704D0;
loc_826704C8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x826704d4
	goto loc_826704D4;
loc_826704D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_826704D4:
	// lwzx r6,r25,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x82816c30
	ctx.lr = 0x826704EC;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826704F8;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82670500;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670514
	if (!ctx.cr6.eq) goto loc_82670514;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82670514:
	// bl 0x828165a8
	ctx.lr = 0x82670518;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r26,3164
	ctx.r4.s64 = ctx.r26.s64 + 3164;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82670534;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82670548
	if (!ctx.cr6.eq) goto loc_82670548;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82670550
	if (ctx.cr6.eq) goto loc_82670550;
loc_82670548:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82670554
	goto loc_82670554;
loc_82670550:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82670554:
	// lwzx r6,r25,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// bl 0x82816c30
	ctx.lr = 0x8267056C;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82670578;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82670580;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82670594
	if (!ctx.cr6.eq) goto loc_82670594;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82670594:
	// bl 0x828165a8
	ctx.lr = 0x82670598;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r26,3168
	ctx.r4.s64 = ctx.r26.s64 + 3168;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826705B4;
	sub_823CF190(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826705BC;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826705C4;
	sub_82333960(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826705D0"))) PPC_WEAK_FUNC(sub_826705D0);
PPC_FUNC_IMPL(__imp__sub_826705D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826705D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82670614
	if (ctx.cr6.eq) goto loc_82670614;
	// bl 0x826708b8
	ctx.lr = 0x826705F0;
	sub_826708B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82670608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne 0x82670618
	if (!ctx.cr0.eq) goto loc_82670618;
loc_82670614:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82670618:
	// lwz r3,800(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82670620;
	sub_824090E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,6156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267065c
	if (ctx.cr6.eq) goto loc_8267065C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82670644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,11236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11236, ctx.r11.u32);
	// stw r10,11240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11240, ctx.r10.u32);
	// stw r9,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r9.u32);
loc_8267065C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82660e70
	ctx.lr = 0x82670668;
	sub_82660E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670670"))) PPC_WEAK_FUNC(sub_82670670);
PPC_FUNC_IMPL(__imp__sub_82670670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82670678;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826706a0
	if (!ctx.cr6.eq) goto loc_826706A0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82670790
	if (ctx.cr6.lt) goto loc_82670790;
loc_826706A0:
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82670790
	if (!ctx.cr6.eq) goto loc_82670790;
	// lbz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82670790
	if (!ctx.cr6.eq) goto loc_82670790;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826706C0;
	sub_824090E0(ctx, base);
	// lbz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,7280
	ctx.r10.s64 = ctx.r10.s64 + 7280;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// lwz r11,6156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82670700
	if (ctx.cr6.eq) goto loc_82670700;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82670700:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x82670710;
	sub_82873B58(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82670784
	if (!ctx.cr6.gt) goto loc_82670784;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,28360
	ctx.r29.s64 = ctx.r11.s64 + 28360;
loc_8267072C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82670778
	if (ctx.cr6.eq) goto loc_82670778;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82670778
	if (ctx.cr6.eq) goto loc_82670778;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82670758;
	sub_82816528(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c710
	ctx.lr = 0x82670778;
	sub_8282C710(ctx, base);
loc_82670778:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8267072c
	if (!ctx.cr0.eq) goto loc_8267072C;
loc_82670784:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x8267078C;
	sub_8239D768(ctx, base);
	// b 0x826707a8
	goto loc_826707A8;
loc_82670790:
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826707a8
	if (ctx.cr6.eq) goto loc_826707A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,1632(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// bl 0x82893210
	ctx.lr = 0x826707A8;
	sub_82893210(ctx, base);
loc_826707A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826707B0"))) PPC_WEAK_FUNC(sub_826707B0);
PPC_FUNC_IMPL(__imp__sub_826707B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826707D8;
	sub_8243C740(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826707F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82670810"))) PPC_WEAK_FUNC(sub_82670810);
PPC_FUNC_IMPL(__imp__sub_82670810) {
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
	// bl 0x82333900
	ctx.lr = 0x82670824;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670844
	if (ctx.cr0.eq) goto loc_82670844;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,7280
	ctx.r11.s64 = ctx.r10.s64 + 7280;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82670848
	goto loc_82670848;
loc_82670844:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82670848:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670858"))) PPC_WEAK_FUNC(sub_82670858);
PPC_FUNC_IMPL(__imp__sub_82670858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826708a0
	if (!ctx.cr6.eq) goto loc_826708A0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26568
	ctx.r3.s64 = ctx.r10.s64 + -26568;
	// bl 0x82a4c7d8
	ctx.lr = 0x8267088C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82670894;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8267089C;
	sub_82816528(ctx, base);
	// stw r3,13448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13448, ctx.r3.u32);
loc_826708A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826708B8"))) PPC_WEAK_FUNC(sub_826708B8);
PPC_FUNC_IMPL(__imp__sub_826708B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13444
	ctx.r31.s64 = ctx.r11.s64 + 13444;
	// lwz r11,13440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13440);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82670900
	if (!ctx.cr0.eq) goto loc_82670900;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,7312
	ctx.r9.s64 = ctx.r9.s64 + 7312;
	// stw r11,13440(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13440, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26944
	ctx.r3.s64 = ctx.r11.s64 + 26944;
	// bl 0x82a4c758
	ctx.lr = 0x82670900;
	sub_82A4C758(ctx, base);
loc_82670900:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670918"))) PPC_WEAK_FUNC(sub_82670918);
PPC_FUNC_IMPL(__imp__sub_82670918) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,7332
	ctx.r3.s64 = ctx.r11.s64 + 7332;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670928"))) PPC_WEAK_FUNC(sub_82670928);
PPC_FUNC_IMPL(__imp__sub_82670928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82670960
	if (ctx.cr6.eq) goto loc_82670960;
	// bl 0x82671ee8
	ctx.lr = 0x82670950;
	sub_82671EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82670960
	if (!ctx.cr6.eq) goto loc_82670960;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267096c
	goto loc_8267096C;
loc_82670960:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267096C;
	sub_8234E2D8(ctx, base);
loc_8267096C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670988"))) PPC_WEAK_FUNC(sub_82670988);
PPC_FUNC_IMPL(__imp__sub_82670988) {
	PPC_FUNC_PROLOGUE();
	// b 0x82671ee8
	sub_82671EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670990"))) PPC_WEAK_FUNC(sub_82670990);
PPC_FUNC_IMPL(__imp__sub_82670990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x826709B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826709f0
	if (ctx.cr0.eq) goto loc_826709F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x826709C4;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,7480
	ctx.r11.s64 = ctx.r11.s64 + 7480;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826709f4
	goto loc_826709F4;
loc_826709F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826709F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670A10"))) PPC_WEAK_FUNC(sub_82670A10);
PPC_FUNC_IMPL(__imp__sub_82670A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82671ee8
	ctx.lr = 0x82670A30;
	sub_82671EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82670a40
	if (!ctx.cr6.eq) goto loc_82670A40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82670a58
	goto loc_82670A58;
loc_82670A40:
	// bl 0x823323b8
	ctx.lr = 0x82670A44;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82670a58
	if (ctx.cr6.eq) goto loc_82670A58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82670A58;
	sub_8234D0A0(ctx, base);
loc_82670A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670A70"))) PPC_WEAK_FUNC(sub_82670A70);
PPC_FUNC_IMPL(__imp__sub_82670A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6580
	ctx.r3.s64 = ctx.r11.s64 + -6580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670A80"))) PPC_WEAK_FUNC(sub_82670A80);
PPC_FUNC_IMPL(__imp__sub_82670A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82670ab8
	if (ctx.cr6.eq) goto loc_82670AB8;
	// bl 0x823c3188
	ctx.lr = 0x82670AA8;
	sub_823C3188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82670ab8
	if (!ctx.cr6.eq) goto loc_82670AB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82670ac4
	goto loc_82670AC4;
loc_82670AB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82670928
	ctx.lr = 0x82670AC4;
	sub_82670928(ctx, base);
loc_82670AC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670AE0"))) PPC_WEAK_FUNC(sub_82670AE0);
PPC_FUNC_IMPL(__imp__sub_82670AE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3188
	sub_823C3188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670AE8"))) PPC_WEAK_FUNC(sub_82670AE8);
PPC_FUNC_IMPL(__imp__sub_82670AE8) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82670B08;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82670b68
	if (ctx.cr0.eq) goto loc_82670B68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82670B1C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,9224
	ctx.r11.s64 = ctx.r11.s64 + 9224;
	// addi r10,r10,10892
	ctx.r10.s64 = ctx.r10.s64 + 10892;
	// addi r9,r9,10944
	ctx.r9.s64 = ctx.r9.s64 + 10944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,3280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// lwz r11,3292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// b 0x82670b6c
	goto loc_82670B6C;
loc_82670B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82670B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670B88"))) PPC_WEAK_FUNC(sub_82670B88);
PPC_FUNC_IMPL(__imp__sub_82670B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3188
	ctx.lr = 0x82670BA8;
	sub_823C3188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82670bbc
	if (ctx.cr6.eq) goto loc_82670BBC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670a10
	ctx.lr = 0x82670BBC;
	sub_82670A10(ctx, base);
loc_82670BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82670BD8"))) PPC_WEAK_FUNC(sub_82670BD8);
PPC_FUNC_IMPL(__imp__sub_82670BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82670BE0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82670BF4;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,9224
	ctx.r11.s64 = ctx.r11.s64 + 9224;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,10892
	ctx.r10.s64 = ctx.r10.s64 + 10892;
	// addi r9,r9,10944
	ctx.r9.s64 = ctx.r9.s64 + 10944;
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// stw r23,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r23.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r24,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r24.u32);
	// addi r21,r10,32296
	ctx.r21.s64 = ctx.r10.s64 + 32296;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x828165a8
	ctx.lr = 0x82670C40;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r30,r31,1684
	ctx.r30.s64 = ctx.r31.s64 + 1684;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82670C54;
	sub_82410060(ctx, base);
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r29,r31,1660
	ctx.r29.s64 = ctx.r31.s64 + 1660;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643410
	ctx.lr = 0x82670C6C;
	sub_82643410(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r28,r31,1756
	ctx.r28.s64 = ctx.r31.s64 + 1756;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82670C88;
	sub_824FC978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r27,r31,1732
	ctx.r27.s64 = ctx.r31.s64 + 1732;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,30356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82670CA4;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r31,2144
	ctx.r26.s64 = ctx.r31.s64 + 2144;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82670CC0;
	sub_824FC978(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r25,r31,1708
	ctx.r25.s64 = ctx.r31.s64 + 1708;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x82670CD4;
	sub_82410060(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x828165a8
	ctx.lr = 0x82670CDC;
	sub_828165A8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82670CEC;
	sub_82410060(ctx, base);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82643410
	ctx.lr = 0x82670CFC;
	sub_82643410(ctx, base);
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824fc978
	ctx.lr = 0x82670D0C;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,17156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82670D24;
	sub_824FC978(ctx, base);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fc978
	ctx.lr = 0x82670D34;
	sub_824FC978(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x82670D44;
	sub_82410060(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r29,r11,7348
	ctx.r29.s64 = ctx.r11.s64 + 7348;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82670d80
	if (ctx.cr6.eq) goto loc_82670D80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82670D80;
	sub_828C58B0(ctx, base);
loc_82670D80:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x82670D98;
	sub_823327E0(ctx, base);
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r23,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r23.u32);
	// stw r23,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r23.u32);
	// stw r23,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r23.u32);
	// stw r10,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r10.u32);
	// stw r10,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82670dec
	if (ctx.cr6.eq) goto loc_82670DEC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x82670DEC;
	sub_828C5740(ctx, base);
loc_82670DEC:
	// li r11,16400
	ctx.r11.s64 = 16400;
	// stfs f31,3280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// stw r23,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r23.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r22,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r22.u32);
	// addi r4,r10,-23640
	ctx.r4.s64 = ctx.r10.s64 + -23640;
	// stw r22,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r22.u32);
	// bl 0x8233a258
	ctx.lr = 0x82670E14;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x82670E20;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82670E28;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// bl 0x82816528
	ctx.lr = 0x82670E34;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,11473
	ctx.r10.s64 = 751894528;
	// lwz r9,1204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// lis r8,2983
	ctx.r8.s64 = 195493888;
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// ori r10,r10,34840
	ctx.r10.u64 = ctx.r10.u64 | 34840;
	// ori r8,r8,10748
	ctx.r8.u64 = ctx.r8.u64 | 10748;
	// lfs f0,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r10.u32);
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r8.u32);
	// bne cr6,0x82670e70
	if (!ctx.cr6.eq) goto loc_82670E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x82670E70;
	sub_829C3628(ctx, base);
loc_82670E70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82670E88"))) PPC_WEAK_FUNC(sub_82670E88);
PPC_FUNC_IMPL(__imp__sub_82670E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265cda8
	ctx.lr = 0x82670EA4;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82670ec4
	if (ctx.cr0.eq) goto loc_82670EC4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82670ec4
	if (ctx.cr6.eq) goto loc_82670EC4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82670ec8
	goto loc_82670EC8;
loc_82670EC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82670EC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6556
	ctx.r3.s64 = ctx.r11.s64 + -6556;
	// bl 0x82816528
	ctx.lr = 0x82670ED4;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82670EE4;
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
	ctx.lr = 0x82670EF8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6472
	ctx.r3.s64 = ctx.r11.s64 + -6472;
	// bl 0x82816528
	ctx.lr = 0x82670F04;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x82670F14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82670F24;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6516
	ctx.r3.s64 = ctx.r11.s64 + -6516;
	// bl 0x82816528
	ctx.lr = 0x82670F30;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,28548
	ctx.r3.s64 = ctx.r11.s64 + 28548;
	// bl 0x82816528
	ctx.lr = 0x82670F40;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82670F50;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6436
	ctx.r3.s64 = ctx.r11.s64 + -6436;
	// bl 0x82816528
	ctx.lr = 0x82670F5C;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-23268
	ctx.r3.s64 = ctx.r11.s64 + -23268;
	// bl 0x82816528
	ctx.lr = 0x82670F6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82670F7C;
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

__attribute__((alias("__imp__sub_82670F98"))) PPC_WEAK_FUNC(sub_82670F98);
PPC_FUNC_IMPL(__imp__sub_82670F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82670FA0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265e4f0
	ctx.lr = 0x82670FB4;
	sub_8265E4F0(ctx, base);
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x82670FBC;
	sub_82833108(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82670fd0
	if (ctx.cr0.eq) goto loc_82670FD0;
	// bl 0x826be270
	ctx.lr = 0x82670FCC;
	sub_826BE270(ctx, base);
	// b 0x82670fd4
	goto loc_82670FD4;
loc_82670FD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82670FD4:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r3,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r3.u32);
	// lis r8,541
	ctx.r8.s64 = 35454976;
	// lis r7,496
	ctx.r7.s64 = 32505856;
	// lis r6,7740
	ctx.r6.s64 = 507248640;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r25,r8,44274
	ctx.r25.u64 = ctx.r8.u64 | 44274;
	// ori r22,r7,27261
	ctx.r22.u64 = ctx.r7.u64 | 27261;
	// ori r23,r6,50688
	ctx.r23.u64 = ctx.r6.u64 | 50688;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,-32516
	ctx.r24.s64 = ctx.r11.s64 + -32516;
	// addi r27,r10,-5704
	ctx.r27.s64 = ctx.r10.s64 + -5704;
	// addi r26,r9,10564
	ctx.r26.s64 = ctx.r9.s64 + 10564;
	// beq cr6,0x826711b4
	if (ctx.cr6.eq) goto loc_826711B4;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r30,800(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
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
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82671078;
	sub_82816528(ctx, base);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r31,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r31.u32);
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x826710a4
	if (!ctx.cr6.eq) goto loc_826710A4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826710A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826710A4:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lfs f0,60(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// lwz r30,3284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x826710e4
	if (ctx.cr6.eq) goto loc_826710E4;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826710e4
	if (ctx.cr6.eq) goto loc_826710E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826710DC;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x826710E4;
	sub_82978ED0(ctx, base);
loc_826710E4:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82671118
	if (ctx.cr6.eq) goto loc_82671118;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671118
	if (ctx.cr6.eq) goto loc_82671118;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82671110;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82671118;
	sub_82978ED0(ctx, base);
loc_82671118:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lis r10,12918
	ctx.r10.s64 = 846594048;
	// ori r10,r10,1470
	ctx.r10.u64 = ctx.r10.u64 | 1470;
	// stw r25,1560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1560, ctx.r25.u32);
	// stw r25,1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1552, ctx.r25.u32);
	// stw r22,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r22.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r10,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r10.u32);
	// stw r23,1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1568, ctx.r23.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r28,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r28.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r28,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r28.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82671154;
	sub_824090E0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826711b4
	if (ctx.cr0.eq) goto loc_826711B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f4bc8
	ctx.lr = 0x82671164;
	sub_825F4BC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// mulli r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 * 10;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// stw r11,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, ctx.r11.u32);
	// stfs f30,1616(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
	// stw r29,1640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1640, ctx.r29.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1620, temp.u32);
loc_826711B4:
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x826711BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826711cc
	if (ctx.cr0.eq) goto loc_826711CC;
	// bl 0x826be270
	ctx.lr = 0x826711C8;
	sub_826BE270(ctx, base);
	// b 0x826711d0
	goto loc_826711D0;
loc_826711CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826711D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r3.u32);
	// beq cr6,0x826713ac
	if (ctx.cr6.eq) goto loc_826713AC;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82671238;
	sub_82816528(ctx, base);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r31,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r31.u32);
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82671264
	if (!ctx.cr6.eq) goto loc_82671264;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671264:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// stfs f31,1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826712e8
	if (ctx.cr6.eq) goto loc_826712E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826712e8
	if (ctx.cr0.eq) goto loc_826712E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825f4bc8
	ctx.lr = 0x82671298;
	sub_825F4BC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826712B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// mulli r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 * 10;
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// stw r11,1424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1424, ctx.r11.u32);
	// stfs f30,1616(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1616, temp.u32);
	// stw r29,1640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1640, ctx.r29.u32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1620, temp.u32);
loc_826712E8:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,200
	ctx.r10.s64 = 200;
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// stfs f31,1616(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// stw r29,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r29.u32);
	// stfs f0,1620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// stw r10,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r10.u32);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// stw r28,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r28.u32);
	// lwz r5,3164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// lwz r30,3288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82671344
	if (ctx.cr6.eq) goto loc_82671344;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671344
	if (ctx.cr6.eq) goto loc_82671344;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x8267133C;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82671344;
	sub_82978ED0(ctx, base);
loc_82671344:
	// lwz r5,3168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	// lwz r30,3288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82671378
	if (ctx.cr6.eq) goto loc_82671378;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671378
	if (ctx.cr6.eq) goto loc_82671378;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82671370;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82671378;
	sub_82978ED0(ctx, base);
loc_82671378:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// lis r10,8342
	ctx.r10.s64 = 546701312;
	// lis r9,15284
	ctx.r9.s64 = 1001652224;
	// ori r10,r10,11121
	ctx.r10.u64 = ctx.r10.u64 | 11121;
	// ori r9,r9,11650
	ctx.r9.u64 = ctx.r9.u64 | 11650;
	// stw r25,1552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1552, ctx.r25.u32);
	// stw r22,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r22.u32);
	// stw r25,1560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1560, ctx.r25.u32);
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// stw r10,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r10.u32);
	// stw r23,1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1568, ctx.r23.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r9,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r9.u32);
loc_826713AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826713C0"))) PPC_WEAK_FUNC(sub_826713C0);
PPC_FUNC_IMPL(__imp__sub_826713C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826713C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82670398
	ctx.lr = 0x826713D4;
	sub_82670398(ctx, base);
	// lis r11,15284
	ctx.r11.s64 = 1001652224;
	// ori r29,r11,11650
	ctx.r29.u64 = ctx.r11.u64 | 11650;
	// lwz r30,3284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82671468
	if (ctx.cr6.eq) goto loc_82671468;
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82671418
	if (ctx.cr6.eq) goto loc_82671418;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671418
	if (ctx.cr6.eq) goto loc_82671418;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82671410;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82671418;
	sub_82978ED0(ctx, base);
loc_82671418:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x8267144c
	if (ctx.cr6.eq) goto loc_8267144C;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267144c
	if (ctx.cr6.eq) goto loc_8267144C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82671444;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x8267144C;
	sub_82978ED0(ctx, base);
loc_8267144C:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r29,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r29.u32);
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671468:
	// lwz r30,3288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826714f4
	if (ctx.cr6.eq) goto loc_826714F4;
	// lwz r5,3164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x826714a4
	if (ctx.cr6.eq) goto loc_826714A4;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826714a4
	if (ctx.cr6.eq) goto loc_826714A4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x8267149C;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x826714A4;
	sub_82978ED0(ctx, base);
loc_826714A4:
	// lwz r5,3168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	// lwz r30,3288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x826714d8
	if (ctx.cr6.eq) goto loc_826714D8;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826714d8
	if (ctx.cr6.eq) goto loc_826714D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826714D0;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x826714D8;
	sub_82978ED0(ctx, base);
loc_826714D8:
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// stw r29,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r29.u32);
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826714F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826714F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671500"))) PPC_WEAK_FUNC(sub_82671500);
PPC_FUNC_IMPL(__imp__sub_82671500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265d250
	ctx.lr = 0x82671520;
	sub_8265D250(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82671540
	if (ctx.cr6.eq) goto loc_82671540;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267153C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671544
	goto loc_82671544;
loc_82671540:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82671544:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826715a4
	if (ctx.cr6.eq) goto loc_826715A4;
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826715a4
	if (!ctx.cr6.eq) goto loc_826715A4;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// bl 0x82816528
	ctx.lr = 0x82671564;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826715e4
	if (!ctx.cr6.eq) goto loc_826715E4;
	// lwz r11,2452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2452);
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82671598
	if (ctx.cr6.eq) goto loc_82671598;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82671594
	if (ctx.cr6.eq) goto loc_82671594;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82671594:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
loc_82671598:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826715a4
	if (ctx.cr6.eq) goto loc_826715A4;
	// bl 0x82715610
	ctx.lr = 0x826715A4;
	sub_82715610(ctx, base);
loc_826715A4:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// bl 0x82816528
	ctx.lr = 0x826715B0;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826715cc
	if (!ctx.cr6.eq) goto loc_826715CC;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826715cc
	if (ctx.cr6.eq) goto loc_826715CC;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x826715CC;
	sub_829C24C0(ctx, base);
loc_826715CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826715E4:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,7404
	ctx.r3.s64 = ctx.r11.s64 + 7404;
	// bl 0x82816528
	ctx.lr = 0x826715F0;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826715a4
	if (!ctx.cr6.eq) goto loc_826715A4;
	// lwz r11,3292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82671594
	if (ctx.cr6.eq) goto loc_82671594;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82671614
	if (ctx.cr6.eq) goto loc_82671614;
	// bl 0x82715610
	ctx.lr = 0x82671614;
	sub_82715610(ctx, base);
loc_82671614:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826715a4
	if (ctx.cr6.eq) goto loc_826715A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826715a4
	goto loc_826715A4;
}

__attribute__((alias("__imp__sub_82671638"))) PPC_WEAK_FUNC(sub_82671638);
PPC_FUNC_IMPL(__imp__sub_82671638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265cb60
	ctx.lr = 0x82671650;
	sub_8265CB60(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r31,2896
	ctx.r4.s64 = ctx.r31.s64 + 2896;
	// addi r5,r11,7428
	ctx.r5.s64 = ctx.r11.s64 + 7428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x8267166C;
	sub_82416240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671680"))) PPC_WEAK_FUNC(sub_82671680);
PPC_FUNC_IMPL(__imp__sub_82671680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265ce48
	ctx.lr = 0x8267169C;
	sub_8265CE48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826716d8
	if (!ctx.cr6.eq) goto loc_826716D8;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826716d8
	if (!ctx.cr6.eq) goto loc_826716D8;
	// addi r11,r31,3292
	ctx.r11.s64 = ctx.r31.s64 + 3292;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x826716CC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_826716D8:
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

__attribute__((alias("__imp__sub_826716F8"))) PPC_WEAK_FUNC(sub_826716F8);
PPC_FUNC_IMPL(__imp__sub_826716F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82671700;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8265cfa8
	ctx.lr = 0x82671710;
	sub_8265CFA8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826717a0
	if (!ctx.cr6.eq) goto loc_826717A0;
	// lwz r11,956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826717a0
	if (!ctx.cr6.eq) goto loc_826717A0;
	// addi r30,r31,3292
	ctx.r30.s64 = ctx.r31.s64 + 3292;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82671744;
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
	ctx.lr = 0x82671768;
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
	ctx.lr = 0x8267177C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826717a0
	if (!ctx.cr0.eq) goto loc_826717A0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82671794;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_826717A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826717B0"))) PPC_WEAK_FUNC(sub_826717B0);
PPC_FUNC_IMPL(__imp__sub_826717B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,3284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82671800
	if (ctx.cr6.eq) goto loc_82671800;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82671800
	if (!ctx.cr6.eq) goto loc_82671800;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82671850
	ctx.lr = 0x826717EC;
	sub_82671850(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82715f60
	ctx.lr = 0x82671800;
	sub_82715F60(ctx, base);
loc_82671800:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671818"))) PPC_WEAK_FUNC(sub_82671818);
PPC_FUNC_IMPL(__imp__sub_82671818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r8,40(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// stw r10,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r9.u32);
	// stw r8,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671850"))) PPC_WEAK_FUNC(sub_82671850);
PPC_FUNC_IMPL(__imp__sub_82671850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82671858;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82671968
	if (ctx.cr6.eq) goto loc_82671968;
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82671884;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82671968
	if (ctx.cr0.eq) goto loc_82671968;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826718A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x825f4bc8
	ctx.lr = 0x826718AC;
	sub_825F4BC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lfs f30,11260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11260);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,10564
	ctx.r4.s64 = ctx.r10.s64 + 10564;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826718D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r3,10
	ctx.r11.s64 = ctx.r3.s64 * 10;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82671930
	if (!ctx.cr6.eq) goto loc_82671930;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r9,2156(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2156);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,12012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12012);
	ctx.f11.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,12016(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12016);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmuls f30,f11,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lfs f31,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,24000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24000);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82671930:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,1616(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1616, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfs f29,1412(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1412, temp.u32);
	// stfs f30,1644(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1644, temp.u32);
	// stw r11,1424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1424, ctx.r11.u32);
	// stw r9,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r9.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1620, temp.u32);
loc_82671968:
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

__attribute__((alias("__imp__sub_82671980"))) PPC_WEAK_FUNC(sub_82671980);
PPC_FUNC_IMPL(__imp__sub_82671980) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82661510
	ctx.lr = 0x826719A8;
	sub_82661510(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826719D0;
	sub_8233A258(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r4,11473
	ctx.r4.s64 = 751894528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,34840
	ctx.r4.u64 = ctx.r4.u64 | 34840;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x829c3740
	ctx.lr = 0x826719F0;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82671A08"))) PPC_WEAK_FUNC(sub_82671A08);
PPC_FUNC_IMPL(__imp__sub_82671A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82671A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82671ae8
	if (ctx.cr6.eq) goto loc_82671AE8;
	// bl 0x823c3188
	ctx.lr = 0x82671A3C;
	sub_823C3188(ctx, base);
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
	ctx.lr = 0x82671A54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671a60
	if (!ctx.cr0.eq) goto loc_82671A60;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82671A60:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671ab4
	if (!ctx.cr0.eq) goto loc_82671AB4;
	// lwz r4,3284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82671ae8
	if (ctx.cr6.eq) goto loc_82671AE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82671850
	ctx.lr = 0x82671A94;
	sub_82671850(ctx, base);
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// b 0x82671ae8
	goto loc_82671AE8;
loc_82671AB4:
	// lwz r4,3288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82671ae8
	if (ctx.cr6.eq) goto loc_82671AE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82671850
	ctx.lr = 0x82671ACC;
	sub_82671850(ctx, base);
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
loc_82671AE8:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828a3f38
	ctx.lr = 0x82671AFC;
	sub_828A3F38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671B08"))) PPC_WEAK_FUNC(sub_82671B08);
PPC_FUNC_IMPL(__imp__sub_82671B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a3f90
	ctx.lr = 0x82671B30;
	sub_828A3F90(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823c3188
	ctx.lr = 0x82671B44;
	sub_823C3188(ctx, base);
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
	ctx.lr = 0x82671B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671b6c
	if (!ctx.cr0.eq) goto loc_82671B6C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82671B6C:
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82671b7c
	if (ctx.cr6.eq) goto loc_82671B7C;
	// bl 0x82715610
	ctx.lr = 0x82671B7C;
	sub_82715610(ctx, base);
loc_82671B7C:
	// lwz r3,3288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82671b8c
	if (ctx.cr6.eq) goto loc_82671B8C;
	// bl 0x82715610
	ctx.lr = 0x82671B8C;
	sub_82715610(ctx, base);
loc_82671B8C:
	// stw r30,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r30.u32);
	// stw r30,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671BB0"))) PPC_WEAK_FUNC(sub_82671BB0);
PPC_FUNC_IMPL(__imp__sub_82671BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82671BB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,-80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// bl 0x823c3188
	ctx.lr = 0x82671BDC;
	sub_823C3188(ctx, base);
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
	ctx.lr = 0x82671BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82671c00
	if (!ctx.cr0.eq) goto loc_82671C00;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82671C00:
	// lwz r11,-88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r10,2044(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2044);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82671c84
	if (ctx.cr6.eq) goto loc_82671C84;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82671c50
	if (ctx.cr6.eq) goto loc_82671C50;
	// lbz r11,1632(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82671c38
	if (!ctx.cr0.eq) goto loc_82671C38;
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// b 0x82671c3c
	goto loc_82671C3C;
loc_82671C38:
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
loc_82671C3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82671c84
	goto loc_82671C84;
loc_82671C50:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82671C60;
	sub_8233A258(ctx, base);
	// lis r4,11473
	ctx.r4.s64 = 751894528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,34840
	ctx.r4.u64 = ctx.r4.u64 | 34840;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x82671C74;
	sub_829C3740(ctx, base);
	// lwz r3,3284(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// bl 0x82715610
	ctx.lr = 0x82671C7C;
	sub_82715610(ctx, base);
	// lwz r3,3288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// bl 0x82715610
	ctx.lr = 0x82671C84;
	sub_82715610(ctx, base);
loc_82671C84:
	// lwz r11,-88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671CAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671CB8"))) PPC_WEAK_FUNC(sub_82671CB8);
PPC_FUNC_IMPL(__imp__sub_82671CB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// lwz r10,1872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1872);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82671cf8
	if (ctx.cr6.eq) goto loc_82671CF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-6056(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// lwz r3,-36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// b 0x8266b960
	sub_8266B960(ctx, base);
	return;
loc_82671CF8:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x828a42d8
	sub_828A42D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671D08"))) PPC_WEAK_FUNC(sub_82671D08);
PPC_FUNC_IMPL(__imp__sub_82671D08) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x82671D38;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x82671d54
	if (ctx.cr6.eq) goto loc_82671D54;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82671d58
	goto loc_82671D58;
loc_82671D54:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82671D58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,1209
	ctx.r5.s64 = 79233024;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,4666
	ctx.r5.u64 = ctx.r5.u64 | 4666;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82671D88;
	sub_8233A258(ctx, base);
	// lis r4,3886
	ctx.r4.s64 = 254672896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,55231
	ctx.r4.u64 = ctx.r4.u64 | 55231;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82671D9C;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82671DB0"))) PPC_WEAK_FUNC(sub_82671DB0);
PPC_FUNC_IMPL(__imp__sub_82671DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// stfs f0,1636(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1636, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671DD0"))) PPC_WEAK_FUNC(sub_82671DD0);
PPC_FUNC_IMPL(__imp__sub_82671DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82671DE8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82671e24
	if (ctx.cr0.eq) goto loc_82671E24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265c840
	ctx.lr = 0x82671DF8;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,7480
	ctx.r11.s64 = ctx.r11.s64 + 7480;
	// addi r10,r10,9148
	ctx.r10.s64 = ctx.r10.s64 + 9148;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82671e28
	goto loc_82671E28;
loc_82671E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82671E28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671E40"))) PPC_WEAK_FUNC(sub_82671E40);
PPC_FUNC_IMPL(__imp__sub_82671E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24648(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82671e80
	if (!ctx.cr0.eq) goto loc_82671E80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,24648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24648, ctx.r11.u32);
	// addi r3,r9,7332
	ctx.r3.s64 = ctx.r9.s64 + 7332;
	// bl 0x82816528
	ctx.lr = 0x82671E78;
	sub_82816528(ctx, base);
	// stw r3,24644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24644, ctx.r3.u32);
	// b 0x82671e84
	goto loc_82671E84;
loc_82671E80:
	// lwz r3,24644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24644);
loc_82671E84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671E98"))) PPC_WEAK_FUNC(sub_82671E98);
PPC_FUNC_IMPL(__imp__sub_82671E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82671ee8
	ctx.lr = 0x82671EB8;
	sub_82671EE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671EE8"))) PPC_WEAK_FUNC(sub_82671EE8);
PPC_FUNC_IMPL(__imp__sub_82671EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,13456
	ctx.r31.s64 = ctx.r11.s64 + 13456;
	// lwz r11,13452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13452);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82671f30
	if (!ctx.cr0.eq) goto loc_82671F30;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,9200
	ctx.r9.s64 = ctx.r9.s64 + 9200;
	// stw r11,13452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13452, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26968
	ctx.r3.s64 = ctx.r11.s64 + 26968;
	// bl 0x82a4c758
	ctx.lr = 0x82671F30;
	sub_82A4C758(ctx, base);
loc_82671F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671F48"))) PPC_WEAK_FUNC(sub_82671F48);
PPC_FUNC_IMPL(__imp__sub_82671F48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82670a10
	sub_82670A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671F50"))) PPC_WEAK_FUNC(sub_82671F50);
PPC_FUNC_IMPL(__imp__sub_82671F50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82670b88
	sub_82670B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671F58"))) PPC_WEAK_FUNC(sub_82671F58);
PPC_FUNC_IMPL(__imp__sub_82671F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6644
	ctx.r3.s64 = ctx.r11.s64 + -6644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671F68"))) PPC_WEAK_FUNC(sub_82671F68);
PPC_FUNC_IMPL(__imp__sub_82671F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82671fa0
	if (ctx.cr6.eq) goto loc_82671FA0;
	// bl 0x823c2ee8
	ctx.lr = 0x82671F90;
	sub_823C2EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82671fa0
	if (!ctx.cr6.eq) goto loc_82671FA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82671fac
	goto loc_82671FAC;
loc_82671FA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82670928
	ctx.lr = 0x82671FAC;
	sub_82670928(ctx, base);
loc_82671FAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82671FC8"))) PPC_WEAK_FUNC(sub_82671FC8);
PPC_FUNC_IMPL(__imp__sub_82671FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c2ee8
	sub_823C2EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82671FD0"))) PPC_WEAK_FUNC(sub_82671FD0);
PPC_FUNC_IMPL(__imp__sub_82671FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82671FF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82672040
	if (ctx.cr0.eq) goto loc_82672040;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82672004;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,11160
	ctx.r11.s64 = ctx.r11.s64 + 11160;
	// addi r10,r10,12828
	ctx.r10.s64 = ctx.r10.s64 + 12828;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// b 0x82672044
	goto loc_82672044;
loc_82672040:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672044:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672060"))) PPC_WEAK_FUNC(sub_82672060);
PPC_FUNC_IMPL(__imp__sub_82672060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c2ee8
	ctx.lr = 0x82672080;
	sub_823C2EE8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82672094
	if (ctx.cr6.eq) goto loc_82672094;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670a10
	ctx.lr = 0x82672094;
	sub_82670A10(ctx, base);
loc_82672094:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826720B0"))) PPC_WEAK_FUNC(sub_826720B0);
PPC_FUNC_IMPL(__imp__sub_826720B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826720B8;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x826720D0;
	sub_8265C840(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,11160
	ctx.r11.s64 = ctx.r10.s64 + 11160;
	// addi r10,r9,12828
	ctx.r10.s64 = ctx.r9.s64 + 12828;
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r8,-30936
	ctx.r9.s64 = ctx.r8.s64 + -30936;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r27,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r27.u32);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r27,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r27.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82672134;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x82672144;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x8267215C;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x8267216C;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x82510b28
	ctx.lr = 0x8267217C;
	sub_82510B28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x82510b28
	ctx.lr = 0x8267218C;
	sub_82510B28(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x826721A4;
	sub_823327E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x826721B4;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// bl 0x82510b28
	ctx.lr = 0x826721C4;
	sub_82510B28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,30360
	ctx.r29.s64 = ctx.r11.s64 + 30360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,1696(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x826721D8;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// addi r28,r9,24632
	ctx.r28.s64 = ctx.r9.s64 + 24632;
	// lwz r11,24640(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24640);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82672214
	if (!ctx.cr0.eq) goto loc_82672214;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23160
	ctx.r9.s64 = ctx.r9.s64 + -23160;
	// stw r11,24640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24640, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27016
	ctx.r3.s64 = ctx.r11.s64 + 27016;
	// bl 0x82a4c758
	ctx.lr = 0x82672214;
	sub_82A4C758(ctx, base);
loc_82672214:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f31,30996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lfs f29,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f29,0(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x82672268;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,24628
	ctx.r29.s64 = ctx.r11.s64 + 24628;
	// lwz r11,24636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24636);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826722a4
	if (!ctx.cr0.eq) goto loc_826722A4;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12880
	ctx.r9.s64 = ctx.r9.s64 + 12880;
	// stw r11,24636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24636, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26992
	ctx.r3.s64 = ctx.r11.s64 + 26992;
	// bl 0x82a4c758
	ctx.lr = 0x826722A4;
	sub_82A4C758(ctx, base);
loc_826722A4:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r30.u8);
	// lwz r10,2156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f29,4(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267230c
	if (ctx.cr6.eq) goto loc_8267230C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,11732
	ctx.r4.s64 = ctx.r10.s64 + 11732;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82672308;
	sub_828C5680(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_8267230C:
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r10,10968
	ctx.r29.s64 = ctx.r10.s64 + 10968;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267234c
	if (ctx.cr6.eq) goto loc_8267234C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8267234C;
	sub_828C58B0(ctx, base);
loc_8267234C:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// li r10,16640
	ctx.r10.s64 = 16640;
	// stw r27,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r27.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// stw r9,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r9.u32);
	// addi r3,r11,32344
	ctx.r3.s64 = ctx.r11.s64 + 32344;
	// bl 0x82816528
	ctx.lr = 0x8267237C;
	sub_82816528(ctx, base);
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23668
	ctx.r4.s64 = ctx.r11.s64 + -23668;
	// bl 0x8233a258
	ctx.lr = 0x82672398;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x826723A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826723AC;
	sub_82333960(ctx, base);
	// lis r10,6717
	ctx.r10.s64 = 440205312;
	// lis r9,1889
	ctx.r9.s64 = 123797504;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// ori r10,r10,24624
	ctx.r10.u64 = ctx.r10.u64 | 24624;
	// lis r8,5478
	ctx.r8.s64 = 359006208;
	// stw r10,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r10.u32);
	// lis r10,1705
	ctx.r10.s64 = 111738880;
	// ori r9,r9,55097
	ctx.r9.u64 = ctx.r9.u64 | 55097;
	// ori r10,r10,23620
	ctx.r10.u64 = ctx.r10.u64 | 23620;
	// ori r8,r8,23187
	ctx.r8.u64 = ctx.r8.u64 | 23187;
	// stw r9,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r9.u32);
	// stw r10,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r10.u32);
	// stw r8,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267240c
	if (ctx.cr6.eq) goto loc_8267240C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8267240C;
	sub_828C5740(ctx, base);
loc_8267240C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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
}

__attribute__((alias("__imp__sub_82672428"))) PPC_WEAK_FUNC(sub_82672428);
PPC_FUNC_IMPL(__imp__sub_82672428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265cda8
	ctx.lr = 0x82672444;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672464
	if (ctx.cr0.eq) goto loc_82672464;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82672464
	if (ctx.cr6.eq) goto loc_82672464;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82672468
	goto loc_82672468;
loc_82672464:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82672468:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6620
	ctx.r3.s64 = ctx.r11.s64 + -6620;
	// bl 0x82816528
	ctx.lr = 0x82672474;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82672484;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82672494;
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

__attribute__((alias("__imp__sub_826724B0"))) PPC_WEAK_FUNC(sub_826724B0);
PPC_FUNC_IMPL(__imp__sub_826724B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x826724B8;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82670398
	ctx.lr = 0x826724D0;
	sub_82670398(ctx, base);
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x823339b8
	ctx.lr = 0x826724E4;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82816cf8
	ctx.lr = 0x82672504;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82400b48
	ctx.lr = 0x82672510;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82672518;
	sub_82333960(ctx, base);
	// lwz r22,224(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r21,220(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bne cr6,0x82672534
	if (!ctx.cr6.eq) goto loc_82672534;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x8267253c
	if (ctx.cr6.eq) goto loc_8267253C;
loc_82672534:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x82672540
	goto loc_82672540;
loc_8267253C:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82672540:
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-28912
	ctx.r4.s64 = ctx.r10.s64 + -28912;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r6,r23,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r25.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// bl 0x82816c30
	ctx.lr = 0x82672560;
	sub_82816C30(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82672574
	if (!ctx.cr6.eq) goto loc_82672574;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82672574:
	// bl 0x828165a8
	ctx.lr = 0x82672578;
	sub_828165A8(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r29,r31,3156
	ctx.r29.s64 = ctx.r31.s64 + 3156;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826725A0;
	sub_823CF190(ctx, base);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x826725A8;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826725c0
	if (ctx.cr0.eq) goto loc_826725C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x826725BC;
	sub_828ADC70(ctx, base);
	// b 0x826725c4
	goto loc_826725C4;
loc_826725C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_826725C4:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,-5704
	ctx.r26.s64 = ctx.r11.s64 + -5704;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82672684
	if (ctx.cr6.eq) goto loc_82672684;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82672684
	if (ctx.cr6.eq) goto loc_82672684;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x828ae6e8
	ctx.lr = 0x826725FC;
	sub_828AE6E8(ctx, base);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x82672608;
	sub_82978ED0(ctx, base);
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82672644;
	sub_82816528(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,3280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82672670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,3280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82672684;
	sub_829B8EE8(ctx, base);
loc_82672684:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// bne cr6,0x82672698
	if (!ctx.cr6.eq) goto loc_82672698;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// beq cr6,0x826726a0
	if (ctx.cr6.eq) goto loc_826726A0;
loc_82672698:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// b 0x826726a4
	goto loc_826726A4;
loc_826726A0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_826726A4:
	// lwzx r6,r23,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r25.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,11032
	ctx.r4.s64 = ctx.r11.s64 + 11032;
	// bl 0x82816c30
	ctx.lr = 0x826726BC;
	sub_82816C30(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82400b48
	ctx.lr = 0x826726C8;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826726D0;
	sub_82333960(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826726e4
	if (!ctx.cr6.eq) goto loc_826726E4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_826726E4:
	// bl 0x828165a8
	ctx.lr = 0x826726E8;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r29,r31,3172
	ctx.r29.s64 = ctx.r31.s64 + 3172;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82672708;
	sub_823CF190(ctx, base);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x82672710;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672724
	if (ctx.cr0.eq) goto loc_82672724;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x82672720;
	sub_828ADC70(ctx, base);
	// b 0x82672728
	goto loc_82672728;
loc_82672724:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82672728:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r3.u32);
	// beq cr6,0x826727d8
	if (ctx.cr6.eq) goto loc_826727D8;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826727d8
	if (ctx.cr6.eq) goto loc_826727D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x828ae6e8
	ctx.lr = 0x82672750;
	sub_828AE6E8(ctx, base);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x8267275C;
	sub_82978ED0(ctx, base);
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82672798;
	sub_82816528(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,3284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826727C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,3284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3284);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x826727D8;
	sub_829B8EE8(ctx, base);
loc_826727D8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x826727E0;
	sub_82333960(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x826727E8;
	sub_82333960(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826727F8"))) PPC_WEAK_FUNC(sub_826727F8);
PPC_FUNC_IMPL(__imp__sub_826727F8) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x82672828;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x82672844
	if (ctx.cr6.eq) goto loc_82672844;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82672848
	goto loc_82672848;
loc_82672844:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82672848:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,12183
	ctx.r5.s64 = 798425088;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,7736
	ctx.r5.u64 = ctx.r5.u64 | 7736;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82672878;
	sub_8233A258(ctx, base);
	// lis r4,3886
	ctx.r4.s64 = 254672896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,55231
	ctx.r4.u64 = ctx.r4.u64 | 55231;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8267288C;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_826728A0"))) PPC_WEAK_FUNC(sub_826728A0);
PPC_FUNC_IMPL(__imp__sub_826728A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826728A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82661448
	ctx.lr = 0x826728B4;
	sub_82661448(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r27,-31944
	ctx.r27.s64 = -2093481984;
	// addi r28,r11,29568
	ctx.r28.s64 = ctx.r11.s64 + 29568;
	// lbz r11,1632(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1632);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8267293c
	if (!ctx.cr6.eq) goto loc_8267293C;
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826728e4
	if (ctx.cr6.eq) goto loc_826728E4;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826728e8
	goto loc_826728E8;
loc_826728E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826728E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267293c
	if (!ctx.cr6.eq) goto loc_8267293C;
	// addic. r11,r29,300
	ctx.xer.ca = ctx.r29.u32 > 4294966995;
	ctx.r11.s64 = ctx.r29.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672910
	if (ctx.cr0.eq) goto loc_82672910;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82672910
	if (ctx.cr6.eq) goto loc_82672910;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82672914
	goto loc_82672914;
loc_82672910:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82672914:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,-6056(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x82672920;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x8267293C;
	sub_829E3FD0(ctx, base);
loc_8267293C:
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826729bc
	if (ctx.cr6.eq) goto loc_826729BC;
	// lwz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826729bc
	if (!ctx.cr6.gt) goto loc_826729BC;
	// lbz r10,1632(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1632);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826729bc
	if (!ctx.cr0.eq) goto loc_826729BC;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826729bc
	if (!ctx.cr6.eq) goto loc_826729BC;
	// addic. r11,r29,300
	ctx.xer.ca = ctx.r29.u32 > 4294966995;
	ctx.r11.s64 = ctx.r29.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82672990
	if (ctx.cr0.eq) goto loc_82672990;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82672990
	if (ctx.cr6.eq) goto loc_82672990;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82672994
	goto loc_82672994;
loc_82672990:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82672994:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,-6056(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x826729A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x826729BC;
	sub_829E3FD0(ctx, base);
loc_826729BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826729C8"))) PPC_WEAK_FUNC(sub_826729C8);
PPC_FUNC_IMPL(__imp__sub_826729C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a3f38
	ctx.lr = 0x826729EC;
	sub_828A3F38(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826141f8
	ctx.lr = 0x82672A00;
	sub_826141F8(ctx, base);
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82672a18
	if (ctx.cr6.eq) goto loc_82672A18;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x82672A18;
	sub_82978D98(ctx, base);
loc_82672A18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672A30"))) PPC_WEAK_FUNC(sub_82672A30);
PPC_FUNC_IMPL(__imp__sub_82672A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82672A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r11,-72
	ctx.r10.s64 = ctx.r11.s64 + -72;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,-64(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r29,1632(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1632);
	// lwz r11,1292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x82672adc
	if (!ctx.cr0.eq) goto loc_82672ADC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82672adc
	if (!ctx.cr6.eq) goto loc_82672ADC;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a30d8
	ctx.lr = 0x82672AA4;
	sub_828A30D8(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a3140
	ctx.lr = 0x82672AB8;
	sub_828A3140(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,-64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r4,1632(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1632);
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a2608
	ctx.lr = 0x82672ADC;
	sub_828A2608(ctx, base);
loc_82672ADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672AE8"))) PPC_WEAK_FUNC(sub_82672AE8);
PPC_FUNC_IMPL(__imp__sub_82672AE8) {
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
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826141f8
	ctx.lr = 0x82672B08;
	sub_826141F8(ctx, base);
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82672b1c
	if (ctx.cr6.eq) goto loc_82672B1C;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x82672B1C;
	sub_82978ED0(ctx, base);
loc_82672B1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672B30"))) PPC_WEAK_FUNC(sub_82672B30);
PPC_FUNC_IMPL(__imp__sub_82672B30) {
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
	ctx.lr = 0x82672B44;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82672b54
	if (ctx.cr0.eq) goto loc_82672B54;
	// bl 0x826be350
	ctx.lr = 0x82672B50;
	sub_826BE350(ctx, base);
	// b 0x82672b58
	goto loc_82672B58;
loc_82672B54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672B58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672B68"))) PPC_WEAK_FUNC(sub_82672B68);
PPC_FUNC_IMPL(__imp__sub_82672B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823952c8
	ctx.lr = 0x82672B88;
	sub_823952C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672BB8"))) PPC_WEAK_FUNC(sub_82672BB8);
PPC_FUNC_IMPL(__imp__sub_82672BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x823953b8
	ctx.lr = 0x82672BD8;
	sub_823953B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82672BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C08"))) PPC_WEAK_FUNC(sub_82672C08);
PPC_FUNC_IMPL(__imp__sub_82672C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82672060
	sub_82672060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672C10"))) PPC_WEAK_FUNC(sub_82672C10);
PPC_FUNC_IMPL(__imp__sub_82672C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6392
	ctx.r3.s64 = ctx.r11.s64 + -6392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C20"))) PPC_WEAK_FUNC(sub_82672C20);
PPC_FUNC_IMPL(__imp__sub_82672C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82672c58
	if (ctx.cr6.eq) goto loc_82672C58;
	// bl 0x823c3830
	ctx.lr = 0x82672C48;
	sub_823C3830(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82672c58
	if (!ctx.cr6.eq) goto loc_82672C58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82672c64
	goto loc_82672C64;
loc_82672C58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82670928
	ctx.lr = 0x82672C64;
	sub_82670928(ctx, base);
loc_82672C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672C80"))) PPC_WEAK_FUNC(sub_82672C80);
PPC_FUNC_IMPL(__imp__sub_82672C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c3830
	sub_823C3830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82672C88"))) PPC_WEAK_FUNC(sub_82672C88);
PPC_FUNC_IMPL(__imp__sub_82672C88) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82672CA8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82672d00
	if (ctx.cr0.eq) goto loc_82672D00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82672CBC;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,13016
	ctx.r11.s64 = ctx.r11.s64 + 13016;
	// addi r10,r10,14684
	ctx.r10.s64 = ctx.r10.s64 + 14684;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,3280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// lfs f0,3284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// lfs f0,3288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3288(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// b 0x82672d04
	goto loc_82672D04;
loc_82672D00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82672D04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672D20"))) PPC_WEAK_FUNC(sub_82672D20);
PPC_FUNC_IMPL(__imp__sub_82672D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c3830
	ctx.lr = 0x82672D40;
	sub_823C3830(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82672d54
	if (ctx.cr6.eq) goto loc_82672D54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82670a10
	ctx.lr = 0x82672D54;
	sub_82670A10(ctx, base);
loc_82672D54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82672D70"))) PPC_WEAK_FUNC(sub_82672D70);
PPC_FUNC_IMPL(__imp__sub_82672D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82672D78;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82672D90;
	sub_8265C840(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f0,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,13016
	ctx.r11.s64 = ctx.r10.s64 + 13016;
	// addi r10,r9,14684
	ctx.r10.s64 = ctx.r9.s64 + 14684;
	// stfs f0,1852(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1852, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r8,-30936
	ctx.r9.s64 = ctx.r8.s64 + -30936;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// li r10,16512
	ctx.r10.s64 = 16512;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r11.u32);
	// stw r22,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r22.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// stw r22,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r22.u32);
	// addi r29,r11,32296
	ctx.r29.s64 = ctx.r11.s64 + 32296;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828165a8
	ctx.lr = 0x82672DF4;
	sub_828165A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r28,r31,1684
	ctx.r28.s64 = ctx.r31.s64 + 1684;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82672E08;
	sub_82410060(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r27,r31,1660
	ctx.r27.s64 = ctx.r31.s64 + 1660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82643410
	ctx.lr = 0x82672E1C;
	sub_82643410(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r26,r31,1756
	ctx.r26.s64 = ctx.r31.s64 + 1756;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82672E38;
	sub_824FC978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r25,r31,1732
	ctx.r25.s64 = ctx.r31.s64 + 1732;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f30,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82672E54;
	sub_824FC978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r24,r31,2144
	ctx.r24.s64 = ctx.r31.s64 + 2144;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f29,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x824fc978
	ctx.lr = 0x82672E70;
	sub_824FC978(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r23,r11,24616
	ctx.r23.s64 = ctx.r11.s64 + 24616;
	// lwz r11,24624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82672ea8
	if (!ctx.cr0.eq) goto loc_82672EA8;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14736
	ctx.r9.s64 = ctx.r9.s64 + 14736;
	// stw r11,24624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24624, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27064
	ctx.r3.s64 = ctx.r11.s64 + 27064;
	// bl 0x82a4c758
	ctx.lr = 0x82672EA8;
	sub_82A4C758(ctx, base);
loc_82672EA8:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r23,r31,1708
	ctx.r23.s64 = ctx.r31.s64 + 1708;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82410060
	ctx.lr = 0x82672EBC;
	sub_82410060(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828165a8
	ctx.lr = 0x82672EC4;
	sub_828165A8(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x82672ED4;
	sub_82410060(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82643410
	ctx.lr = 0x82672EE4;
	sub_82643410(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824fc978
	ctx.lr = 0x82672EF4;
	sub_824FC978(ctx, base);
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x824fc978
	ctx.lr = 0x82672F04;
	sub_824FC978(ctx, base);
	// stfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x824fc978
	ctx.lr = 0x82672F14;
	sub_824FC978(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r29,r11,24612
	ctx.r29.s64 = ctx.r11.s64 + 24612;
	// lwz r11,24620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24620);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82672f4c
	if (!ctx.cr0.eq) goto loc_82672F4C;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,14756
	ctx.r9.s64 = ctx.r9.s64 + 14756;
	// stw r11,24620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24620, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27040
	ctx.r3.s64 = ctx.r11.s64 + 27040;
	// bl 0x82a4c758
	ctx.lr = 0x82672F4C;
	sub_82A4C758(ctx, base);
loc_82672F4C:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82410060
	ctx.lr = 0x82672F5C;
	sub_82410060(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r28,r11,12900
	ctx.r28.s64 = ctx.r11.s64 + 12900;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82672f9c
	if (ctx.cr6.eq) goto loc_82672F9C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82672F98;
	sub_828C58B0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82672F9C:
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r10,100
	ctx.r10.s64 = 100;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// stw r30,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r30.u32);
	// stw r8,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r8.u32);
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// stw r30,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r30.u32);
	// stw r10,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r10.u32);
	// stw r10,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r10.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82672ffc
	if (ctx.cr6.eq) goto loc_82672FFC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,12956
	ctx.r4.s64 = ctx.r10.s64 + 12956;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82672FFC;
	sub_828C5680(ctx, base);
loc_82672FFC:
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r10,32344
	ctx.r3.s64 = ctx.r10.s64 + 32344;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82673014;
	sub_82816528(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lfs f0,-29292(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// stfs f0,3284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// stfs f13,3288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3288, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82673064
	if (ctx.cr6.eq) goto loc_82673064;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x82673064;
	sub_828C5740(ctx, base);
loc_82673064:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23652
	ctx.r4.s64 = ctx.r11.s64 + -23652;
	// bl 0x8233a258
	ctx.lr = 0x82673074;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x82673080;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82673088;
	sub_82333960(ctx, base);
	// lis r11,4852
	ctx.r11.s64 = 317980672;
	// lis r10,4851
	ctx.r10.s64 = 317915136;
	// ori r11,r11,58175
	ctx.r11.u64 = ctx.r11.u64 | 58175;
	// lis r9,14988
	ctx.r9.s64 = 982253568;
	// lis r8,8758
	ctx.r8.s64 = 573964288;
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// ori r10,r10,55406
	ctx.r10.u64 = ctx.r10.u64 | 55406;
	// ori r9,r9,59530
	ctx.r9.u64 = ctx.r9.u64 | 59530;
	// ori r11,r8,56781
	ctx.r11.u64 = ctx.r8.u64 | 56781;
	// stw r10,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r10.u32);
	// stw r9,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826730D0"))) PPC_WEAK_FUNC(sub_826730D0);
PPC_FUNC_IMPL(__imp__sub_826730D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265cda8
	ctx.lr = 0x826730EC;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267310c
	if (ctx.cr0.eq) goto loc_8267310C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267310c
	if (ctx.cr6.eq) goto loc_8267310C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82673110
	goto loc_82673110;
loc_8267310C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82673110:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6372
	ctx.r3.s64 = ctx.r11.s64 + -6372;
	// bl 0x82816528
	ctx.lr = 0x8267311C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x8267312C;
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
	ctx.lr = 0x82673140;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6336
	ctx.r3.s64 = ctx.r11.s64 + -6336;
	// bl 0x82816528
	ctx.lr = 0x8267314C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x8267315C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8267316C;
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

__attribute__((alias("__imp__sub_82673188"))) PPC_WEAK_FUNC(sub_82673188);
PPC_FUNC_IMPL(__imp__sub_82673188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,-6056(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6056);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// b 0x826733e8
	sub_826733E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826731B0"))) PPC_WEAK_FUNC(sub_826731B0);
PPC_FUNC_IMPL(__imp__sub_826731B0) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x826731E0;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x826731fc
	if (ctx.cr6.eq) goto loc_826731FC;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82673200
	goto loc_82673200;
loc_826731FC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82673200:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,2722
	ctx.r5.s64 = 178388992;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,49107
	ctx.r5.u64 = ctx.r5.u64 | 49107;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82673230;
	sub_8233A258(ctx, base);
	// lis r4,3886
	ctx.r4.s64 = 254672896;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,55231
	ctx.r4.u64 = ctx.r4.u64 | 55231;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82673244;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82673258"))) PPC_WEAK_FUNC(sub_82673258);
PPC_FUNC_IMPL(__imp__sub_82673258) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x82673270;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826732cc
	if (ctx.cr0.eq) goto loc_826732CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b8e58
	ctx.lr = 0x82673280;
	sub_826B8E58(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r10,r10,-8072
	ctx.r10.s64 = ctx.r10.s64 + -8072;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,-6896
	ctx.r11.s64 = ctx.r9.s64 + -6896;
	// lis r7,9993
	ctx.r7.s64 = 654901248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r9,r8,29100
	ctx.r9.s64 = ctx.r8.s64 + 29100;
	// li r10,16512
	ctx.r10.s64 = 16512;
	// stfs f0,1512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// ori r11,r7,3593
	ctx.r11.u64 = ctx.r7.u64 | 3593;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// b 0x826732d0
	goto loc_826732D0;
loc_826732CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826732D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826732E8"))) PPC_WEAK_FUNC(sub_826732E8);
PPC_FUNC_IMPL(__imp__sub_826732E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-28268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28268);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82673328
	if (!ctx.cr0.eq) goto loc_82673328;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-28268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28268, ctx.r11.u32);
	// addi r3,r9,19628
	ctx.r3.s64 = ctx.r9.s64 + 19628;
	// bl 0x82816528
	ctx.lr = 0x82673320;
	sub_82816528(ctx, base);
	// stw r3,-28272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28272, ctx.r3.u32);
	// b 0x8267332c
	goto loc_8267332C;
loc_82673328:
	// lwz r3,-28272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28272);
loc_8267332C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673340"))) PPC_WEAK_FUNC(sub_82673340);
PPC_FUNC_IMPL(__imp__sub_82673340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82395418
	ctx.lr = 0x82673360;
	sub_82395418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673390"))) PPC_WEAK_FUNC(sub_82673390);
PPC_FUNC_IMPL(__imp__sub_82673390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-28396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28396);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826733d0
	if (!ctx.cr0.eq) goto loc_826733D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-28396(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28396, ctx.r11.u32);
	// addi r3,r9,20128
	ctx.r3.s64 = ctx.r9.s64 + 20128;
	// bl 0x82816528
	ctx.lr = 0x826733C8;
	sub_82816528(ctx, base);
	// stw r3,-28400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28400, ctx.r3.u32);
	// b 0x826733d4
	goto loc_826733D4;
loc_826733D0:
	// lwz r3,-28400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28400);
loc_826733D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826733E8"))) PPC_WEAK_FUNC(sub_826733E8);
PPC_FUNC_IMPL(__imp__sub_826733E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826733F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x82673404;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267341c
	if (ctx.cr0.eq) goto loc_8267341C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d57f0
	ctx.lr = 0x82673414;
	sub_823D57F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82673420
	goto loc_82673420;
loc_8267341C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82673420:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826734f0
	if (ctx.cr6.eq) goto loc_826734F0;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826734f0
	if (ctx.cr6.eq) goto loc_826734F0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r27,-4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826734f0
	if (!ctx.cr6.eq) goto loc_826734F0;
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
	ctx.lr = 0x826734C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826734e4
	if (ctx.cr6.eq) goto loc_826734E4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_826734E4:
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82673590
	goto loc_82673590;
loc_826734F0:
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
	ctx.lr = 0x82673510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x82673514;
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
	ctx.lr = 0x8267354C;
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
	ctx.lr = 0x82673570;
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
	// bl 0x829e3c18
	ctx.lr = 0x82673590;
	sub_829E3C18(ctx, base);
loc_82673590:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673598"))) PPC_WEAK_FUNC(sub_82673598);
PPC_FUNC_IMPL(__imp__sub_82673598) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82672d20
	sub_82672D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826735A0"))) PPC_WEAK_FUNC(sub_826735A0);
PPC_FUNC_IMPL(__imp__sub_826735A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826735B0"))) PPC_WEAK_FUNC(sub_826735B0);
PPC_FUNC_IMPL(__imp__sub_826735B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826735e8
	if (ctx.cr6.eq) goto loc_826735E8;
	// bl 0x823b8450
	ctx.lr = 0x826735D8;
	sub_823B8450(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826735e8
	if (!ctx.cr6.eq) goto loc_826735E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826735f4
	goto loc_826735F4;
loc_826735E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x826735F4;
	sub_8234E2D8(ctx, base);
loc_826735F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673610"))) PPC_WEAK_FUNC(sub_82673610);
PPC_FUNC_IMPL(__imp__sub_82673610) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b8450
	sub_823B8450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673618"))) PPC_WEAK_FUNC(sub_82673618);
PPC_FUNC_IMPL(__imp__sub_82673618) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82673638;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82673690
	if (ctx.cr0.eq) goto loc_82673690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8267364C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,14808
	ctx.r11.s64 = ctx.r11.s64 + 14808;
	// addi r10,r10,16476
	ctx.r10.s64 = ctx.r10.s64 + 16476;
	// addi r9,r9,16528
	ctx.r9.s64 = ctx.r9.s64 + 16528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lfs f0,3284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3284, temp.u32);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// b 0x82673694
	goto loc_82673694;
loc_82673690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82673694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826736B0"))) PPC_WEAK_FUNC(sub_826736B0);
PPC_FUNC_IMPL(__imp__sub_826736B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b8450
	ctx.lr = 0x826736D0;
	sub_823B8450(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826736e0
	if (!ctx.cr6.eq) goto loc_826736E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826736f8
	goto loc_826736F8;
loc_826736E0:
	// bl 0x823323b8
	ctx.lr = 0x826736E4;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826736f8
	if (ctx.cr6.eq) goto loc_826736F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x826736F8;
	sub_8234D0A0(ctx, base);
loc_826736F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673710"))) PPC_WEAK_FUNC(sub_82673710);
PPC_FUNC_IMPL(__imp__sub_82673710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,14808
	ctx.r11.s64 = ctx.r11.s64 + 14808;
	// addi r10,r10,16476
	ctx.r10.s64 = ctx.r10.s64 + 16476;
	// addi r9,r9,16528
	ctx.r9.s64 = ctx.r9.s64 + 16528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8265cc00
	ctx.lr = 0x82673754;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673764
	if (ctx.cr0.eq) goto loc_82673764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82673764;
	sub_82332DB8(ctx, base);
loc_82673764:
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

__attribute__((alias("__imp__sub_82673780"))) PPC_WEAK_FUNC(sub_82673780);
PPC_FUNC_IMPL(__imp__sub_82673780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82673788;
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
	// bl 0x8265c840
	ctx.lr = 0x8267379C;
	sub_8265C840(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f0,24088(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,16476
	ctx.r10.s64 = ctx.r8.s64 + 16476;
	// addi r8,r7,16528
	ctx.r8.s64 = ctx.r7.s64 + 16528;
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// addi r9,r9,14808
	ctx.r9.s64 = ctx.r9.s64 + 14808;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x826737F8;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82a455d0
	ctx.lr = 0x82673808;
	sub_82A455D0(ctx, base);
	// lwz r10,2032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,2032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x823327e0
	ctx.lr = 0x82673838;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x82673848;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82673860;
	sub_823327E0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x82673870;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x82510b28
	ctx.lr = 0x82673880;
	sub_82510B28(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x82510b28
	ctx.lr = 0x82673890;
	sub_82510B28(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x826738A8;
	sub_823327E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x826738B8;
	sub_82A455D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// bl 0x82510b28
	ctx.lr = 0x826738C8;
	sub_82510B28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,30360
	ctx.r29.s64 = ctx.r11.s64 + 30360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r28,1696(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x826738DC;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r28,r11,24600
	ctx.r28.s64 = ctx.r11.s64 + 24600;
	// lwz r11,24608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82673918
	if (!ctx.cr0.eq) goto loc_82673918;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,3024
	ctx.r9.s64 = ctx.r9.s64 + 3024;
	// stw r11,24608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24608, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27112
	ctx.r3.s64 = ctx.r11.s64 + 27112;
	// bl 0x82a4c758
	ctx.lr = 0x82673918;
	sub_82A4C758(ctx, base);
loc_82673918:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lfs f31,32716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lfs f30,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x82673964;
	sub_82816528(ctx, base);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r28,r11,24596
	ctx.r28.s64 = ctx.r11.s64 + 24596;
	// lwz r11,24604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24604);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826739a0
	if (!ctx.cr0.eq) goto loc_826739A0;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,16552
	ctx.r9.s64 = ctx.r9.s64 + 16552;
	// stw r11,24604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24604, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27088
	ctx.r3.s64 = ctx.r11.s64 + 27088;
	// bl 0x82a4c758
	ctx.lr = 0x826739A0;
	sub_82A4C758(ctx, base);
loc_826739A0:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,1032
	ctx.r5.s64 = 67633152;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lfs f0,24724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r5,8616
	ctx.r5.u64 = ctx.r5.u64 | 8616;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x823cf190
	ctx.lr = 0x826739F8;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r28,r31,2188
	ctx.r28.s64 = ctx.r31.s64 + 2188;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x82673A18;
	sub_82510B80(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-3428
	ctx.r5.s64 = -224657408;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,28442
	ctx.r5.u64 = ctx.r5.u64 | 28442;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82673A38;
	sub_823CF190(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x82673A54;
	sub_82510B80(ctx, base);
	// lis r11,5150
	ctx.r11.s64 = 337510400;
	// lis r10,380
	ctx.r10.s64 = 24903680;
	// ori r11,r11,63030
	ctx.r11.u64 = ctx.r11.u64 | 63030;
	// ori r10,r10,6548
	ctx.r10.u64 = ctx.r10.u64 | 6548;
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82673A80"))) PPC_WEAK_FUNC(sub_82673A80);
PPC_FUNC_IMPL(__imp__sub_82673A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265cda8
	ctx.lr = 0x82673A9C;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82673abc
	if (ctx.cr0.eq) goto loc_82673ABC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82673abc
	if (ctx.cr6.eq) goto loc_82673ABC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82673ac0
	goto loc_82673AC0;
loc_82673ABC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82673AC0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10564
	ctx.r3.s64 = ctx.r11.s64 + -10564;
	// bl 0x82816528
	ctx.lr = 0x82673ACC;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82673ADC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82673AEC;
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

__attribute__((alias("__imp__sub_82673B08"))) PPC_WEAK_FUNC(sub_82673B08);
PPC_FUNC_IMPL(__imp__sub_82673B08) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-10814
	ctx.r3.s64 = -708706304;
	// ori r3,r3,5866
	ctx.r3.u64 = ctx.r3.u64 | 5866;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B18"))) PPC_WEAK_FUNC(sub_82673B18);
PPC_FUNC_IMPL(__imp__sub_82673B18) {
	PPC_FUNC_PROLOGUE();
	// lis r3,26138
	ctx.r3.s64 = 1712979968;
	// ori r3,r3,56778
	ctx.r3.u64 = ctx.r3.u64 | 56778;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B28"))) PPC_WEAK_FUNC(sub_82673B28);
PPC_FUNC_IMPL(__imp__sub_82673B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673b48
	if (ctx.cr6.eq) goto loc_82673B48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82673B48:
	// lwz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82673b78
	if (ctx.cr6.gt) goto loc_82673B78;
	// lwz r11,2032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82673b70
	if (!ctx.cr6.eq) goto loc_82673B70;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82673b78
	if (ctx.cr6.eq) goto loc_82673B78;
loc_82673B70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82673B78:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673B80"))) PPC_WEAK_FUNC(sub_82673B80);
PPC_FUNC_IMPL(__imp__sub_82673B80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673ba0
	if (ctx.cr6.eq) goto loc_82673BA0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82673BA0:
	// b 0x82661fb0
	sub_82661FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673BA8"))) PPC_WEAK_FUNC(sub_82673BA8);
PPC_FUNC_IMPL(__imp__sub_82673BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82673BB0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r31,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r31.u64);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// lwz r4,3280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// std r27,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r27.u64);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// beq cr6,0x82673c78
	if (ctx.cr6.eq) goto loc_82673C78;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82673BF4;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82673c78
	if (ctx.cr0.eq) goto loc_82673C78;
	// bl 0x824a0a48
	ctx.lr = 0x82673C00;
	sub_824A0A48(ctx, base);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82332e18
	ctx.lr = 0x82673C5C;
	sub_82332E18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// ld r27,208(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82673c7c
	goto loc_82673C7C;
loc_82673C78:
	// lwz r29,216(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
loc_82673C7C:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rldicr r7,r29,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826609a8
	ctx.lr = 0x82673C9C;
	sub_826609A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82673d40
	if (ctx.cr0.eq) goto loc_82673D40;
	// lwa r11,2088(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 2088));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x82673cfc
	if (ctx.cr6.eq) goto loc_82673CFC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82673cfc
	if (!ctx.cr6.eq) goto loc_82673CFC;
	// bl 0x8254a5a8
	ctx.lr = 0x82673CD4;
	sub_8254A5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82673cf8
	if (!ctx.cr0.eq) goto loc_82673CF8;
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673cfc
	if (ctx.cr6.eq) goto loc_82673CFC;
	// lwz r3,800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// bl 0x8254a5a8
	ctx.lr = 0x82673CF0;
	sub_8254A5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82673cfc
	if (ctx.cr0.eq) goto loc_82673CFC;
loc_82673CF8:
	// lfs f31,6984(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6984);
	ctx.f31.f64 = double(temp.f32);
loc_82673CFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,3284(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stfs f0,1504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// rldicr r5,r29,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// lfs f0,3284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82673D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673D50"))) PPC_WEAK_FUNC(sub_82673D50);
PPC_FUNC_IMPL(__imp__sub_82673D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265cb60
	ctx.lr = 0x82673D68;
	sub_8265CB60(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r31,2892
	ctx.r4.s64 = ctx.r31.s64 + 2892;
	// addi r5,r11,14776
	ctx.r5.s64 = ctx.r11.s64 + 14776;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9968
	ctx.lr = 0x82673D84;
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

__attribute__((alias("__imp__sub_82673D98"))) PPC_WEAK_FUNC(sub_82673D98);
PPC_FUNC_IMPL(__imp__sub_82673D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265ce48
	ctx.lr = 0x82673DB4;
	sub_8265CE48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82673de4
	if (!ctx.cr6.eq) goto loc_82673DE4;
	// addi r11,r31,3288
	ctx.r11.s64 = ctx.r31.s64 + 3288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x82673DD8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82673DE4:
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

__attribute__((alias("__imp__sub_82673E00"))) PPC_WEAK_FUNC(sub_82673E00);
PPC_FUNC_IMPL(__imp__sub_82673E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82673E08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8265cfa8
	ctx.lr = 0x82673E18;
	sub_8265CFA8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82673e9c
	if (!ctx.cr6.eq) goto loc_82673E9C;
	// addi r30,r31,3288
	ctx.r30.s64 = ctx.r31.s64 + 3288;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82673E40;
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
	ctx.lr = 0x82673E64;
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
	ctx.lr = 0x82673E78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82673e9c
	if (!ctx.cr0.eq) goto loc_82673E9C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82673E90;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82673E9C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673EA8"))) PPC_WEAK_FUNC(sub_82673EA8);
PPC_FUNC_IMPL(__imp__sub_82673EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265d250
	ctx.lr = 0x82673EC8;
	sub_8265D250(ctx, base);
	// lis r11,32713
	ctx.r11.s64 = 2143879168;
	// ori r11,r11,32874
	ctx.r11.u64 = ctx.r11.u64 | 32874;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82673ef4
	if (!ctx.cr6.eq) goto loc_82673EF4;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82673eec
	if (ctx.cr6.eq) goto loc_82673EEC;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82673ef0
	goto loc_82673EF0;
loc_82673EEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82673EF0:
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
loc_82673EF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82673F10"))) PPC_WEAK_FUNC(sub_82673F10);
PPC_FUNC_IMPL(__imp__sub_82673F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826604f8
	ctx.lr = 0x82673F40;
	sub_826604F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8254a710
	ctx.lr = 0x82673F48;
	sub_8254A710(ctx, base);
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

__attribute__((alias("__imp__sub_82673F68"))) PPC_WEAK_FUNC(sub_82673F68);
PPC_FUNC_IMPL(__imp__sub_82673F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-72
	ctx.r10.s64 = ctx.r11.s64 + -72;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// lwz r11,-72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673FC0;
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

__attribute__((alias("__imp__sub_82673FD8"))) PPC_WEAK_FUNC(sub_82673FD8);
PPC_FUNC_IMPL(__imp__sub_82673FD8) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,3288
	ctx.r4.s64 = ctx.r3.s64 + 3288;
	// b 0x829c7c38
	sub_829C7C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82673FE0"))) PPC_WEAK_FUNC(sub_82673FE0);
PPC_FUNC_IMPL(__imp__sub_82673FE0) {
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
	ctx.lr = 0x82673FF4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82674004
	if (ctx.cr0.eq) goto loc_82674004;
	// bl 0x826c3360
	ctx.lr = 0x82674000;
	sub_826C3360(ctx, base);
	// b 0x82674008
	goto loc_82674008;
loc_82674004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674008:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674018"))) PPC_WEAK_FUNC(sub_82674018);
PPC_FUNC_IMPL(__imp__sub_82674018) {
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
	ctx.lr = 0x8267402C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8267403c
	if (ctx.cr0.eq) goto loc_8267403C;
	// bl 0x826c3478
	ctx.lr = 0x82674038;
	sub_826C3478(ctx, base);
	// b 0x82674040
	goto loc_82674040;
loc_8267403C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674040:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674050"))) PPC_WEAK_FUNC(sub_82674050);
PPC_FUNC_IMPL(__imp__sub_82674050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82673710
	sub_82673710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674058"))) PPC_WEAK_FUNC(sub_82674058);
PPC_FUNC_IMPL(__imp__sub_82674058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82673710
	sub_82673710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674060"))) PPC_WEAK_FUNC(sub_82674060);
PPC_FUNC_IMPL(__imp__sub_82674060) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826736b0
	sub_826736B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674068"))) PPC_WEAK_FUNC(sub_82674068);
PPC_FUNC_IMPL(__imp__sub_82674068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-14008
	ctx.r3.s64 = ctx.r11.s64 + -14008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674078"))) PPC_WEAK_FUNC(sub_82674078);
PPC_FUNC_IMPL(__imp__sub_82674078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826740b0
	if (ctx.cr6.eq) goto loc_826740B0;
	// bl 0x82550f48
	ctx.lr = 0x826740A0;
	sub_82550F48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826740b0
	if (!ctx.cr6.eq) goto loc_826740B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826740bc
	goto loc_826740BC;
loc_826740B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x826740BC;
	sub_8234E2D8(ctx, base);
loc_826740BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826740D8"))) PPC_WEAK_FUNC(sub_826740D8);
PPC_FUNC_IMPL(__imp__sub_826740D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82550f48
	sub_82550F48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826740E0"))) PPC_WEAK_FUNC(sub_826740E0);
PPC_FUNC_IMPL(__imp__sub_826740E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82674100;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674140
	if (ctx.cr0.eq) goto loc_82674140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82674114;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,16576
	ctx.r11.s64 = ctx.r11.s64 + 16576;
	// addi r10,r10,18244
	ctx.r10.s64 = ctx.r10.s64 + 18244;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674144
	goto loc_82674144;
loc_82674140:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674160"))) PPC_WEAK_FUNC(sub_82674160);
PPC_FUNC_IMPL(__imp__sub_82674160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82550f48
	ctx.lr = 0x82674180;
	sub_82550F48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674190
	if (!ctx.cr6.eq) goto loc_82674190;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x826741a8
	goto loc_826741A8;
loc_82674190:
	// bl 0x823323b8
	ctx.lr = 0x82674194;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826741a8
	if (ctx.cr6.eq) goto loc_826741A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x826741A8;
	sub_8234D0A0(ctx, base);
loc_826741A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826741C0"))) PPC_WEAK_FUNC(sub_826741C0);
PPC_FUNC_IMPL(__imp__sub_826741C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674160
	sub_82674160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826741C8"))) PPC_WEAK_FUNC(sub_826741C8);
PPC_FUNC_IMPL(__imp__sub_826741C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-13984
	ctx.r3.s64 = ctx.r11.s64 + -13984;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826741D8"))) PPC_WEAK_FUNC(sub_826741D8);
PPC_FUNC_IMPL(__imp__sub_826741D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674210
	if (ctx.cr6.eq) goto loc_82674210;
	// bl 0x82551080
	ctx.lr = 0x82674200;
	sub_82551080(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674210
	if (!ctx.cr6.eq) goto loc_82674210;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267421c
	goto loc_8267421C;
loc_82674210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267421C;
	sub_8234E2D8(ctx, base);
loc_8267421C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674238"))) PPC_WEAK_FUNC(sub_82674238);
PPC_FUNC_IMPL(__imp__sub_82674238) {
	PPC_FUNC_PROLOGUE();
	// b 0x82551080
	sub_82551080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674240"))) PPC_WEAK_FUNC(sub_82674240);
PPC_FUNC_IMPL(__imp__sub_82674240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82674260;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826742a0
	if (ctx.cr0.eq) goto loc_826742A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82674274;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,18416
	ctx.r11.s64 = ctx.r11.s64 + 18416;
	// addi r10,r10,20084
	ctx.r10.s64 = ctx.r10.s64 + 20084;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826742a4
	goto loc_826742A4;
loc_826742A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826742A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826742C0"))) PPC_WEAK_FUNC(sub_826742C0);
PPC_FUNC_IMPL(__imp__sub_826742C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82551080
	ctx.lr = 0x826742E0;
	sub_82551080(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826742f0
	if (!ctx.cr6.eq) goto loc_826742F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82674308
	goto loc_82674308;
loc_826742F0:
	// bl 0x823323b8
	ctx.lr = 0x826742F4;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674308
	if (ctx.cr6.eq) goto loc_82674308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82674308;
	sub_8234D0A0(ctx, base);
loc_82674308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674320"))) PPC_WEAK_FUNC(sub_82674320);
PPC_FUNC_IMPL(__imp__sub_82674320) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826742c0
	sub_826742C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674328"))) PPC_WEAK_FUNC(sub_82674328);
PPC_FUNC_IMPL(__imp__sub_82674328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674338"))) PPC_WEAK_FUNC(sub_82674338);
PPC_FUNC_IMPL(__imp__sub_82674338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674370
	if (ctx.cr6.eq) goto loc_82674370;
	// bl 0x823c24b0
	ctx.lr = 0x82674360;
	sub_823C24B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674370
	if (!ctx.cr6.eq) goto loc_82674370;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267437c
	goto loc_8267437C;
loc_82674370:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x8267437C;
	sub_8234E2D8(ctx, base);
loc_8267437C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674398"))) PPC_WEAK_FUNC(sub_82674398);
PPC_FUNC_IMPL(__imp__sub_82674398) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c24b0
	sub_823C24B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826743A0"))) PPC_WEAK_FUNC(sub_826743A0);
PPC_FUNC_IMPL(__imp__sub_826743A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x826743C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674400
	if (ctx.cr0.eq) goto loc_82674400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x826743D4;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,20184
	ctx.r11.s64 = ctx.r11.s64 + 20184;
	// addi r10,r10,21852
	ctx.r10.s64 = ctx.r10.s64 + 21852;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674404
	goto loc_82674404;
loc_82674400:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674404:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674420"))) PPC_WEAK_FUNC(sub_82674420);
PPC_FUNC_IMPL(__imp__sub_82674420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c24b0
	ctx.lr = 0x82674440;
	sub_823C24B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674450
	if (!ctx.cr6.eq) goto loc_82674450;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82674468
	goto loc_82674468;
loc_82674450:
	// bl 0x823323b8
	ctx.lr = 0x82674454;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674468
	if (ctx.cr6.eq) goto loc_82674468;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82674468;
	sub_8234D0A0(ctx, base);
loc_82674468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674480"))) PPC_WEAK_FUNC(sub_82674480);
PPC_FUNC_IMPL(__imp__sub_82674480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82674488;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82674494;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,20184
	ctx.r11.s64 = ctx.r11.s64 + 20184;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r10,r10,21852
	ctx.r10.s64 = ctx.r10.s64 + 21852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// addi r3,r11,-3712
	ctx.r3.s64 = ctx.r11.s64 + -3712;
	// bl 0x828165a8
	ctx.lr = 0x826744D0;
	sub_828165A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r3,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// addi r3,r11,20136
	ctx.r3.s64 = ctx.r11.s64 + 20136;
	// bl 0x82816528
	ctx.lr = 0x826744FC;
	sub_82816528(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-1864
	ctx.r3.s64 = ctx.r11.s64 + -1864;
	// bl 0x82816528
	ctx.lr = 0x8267450C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f0,19552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19552);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,4243
	ctx.r11.s64 = 278069248;
	// lfs f13,19556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19556);
	ctx.f13.f64 = double(temp.f32);
	// ori r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 | 1;
	// lfs f11,20432(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20432);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r11,62582
	ctx.r11.u64 = ctx.r11.u64 | 62582;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f12,20428(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20428);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,24881
	ctx.r10.s64 = 1630601216;
	// stw r9,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r9.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// ori r10,r10,65451
	ctx.r10.u64 = ctx.r10.u64 | 65451;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r27,27
	ctx.r27.s64 = 27;
	// stw r11,2248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2248, ctx.r11.u32);
	// stw r8,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r8.u32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r9,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,2252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2252, ctx.r10.u32);
	// addi r4,r11,20164
	ctx.r4.s64 = ctx.r11.s64 + 20164;
	// stw r27,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r27.u32);
	// stw r7,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r7.u32);
	// stw r28,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r28.u32);
	// stw r29,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r29.u32);
	// stw r6,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r6.u32);
	// stw r5,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r5.u32);
	// stw r30,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// bl 0x8233a258
	ctx.lr = 0x826745C4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x826745D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826745D8;
	sub_82333960(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,5903
	ctx.r10.s64 = 386859008;
	// ori r10,r10,36082
	ctx.r10.u64 = ctx.r10.u64 | 36082;
	// stw r10,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8267461c
	if (ctx.cr6.eq) goto loc_8267461C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r4,r10,3660
	ctx.r4.s64 = ctx.r10.s64 + 3660;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x8267461C;
	sub_828C58B0(ctx, base);
loc_8267461C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674628"))) PPC_WEAK_FUNC(sub_82674628);
PPC_FUNC_IMPL(__imp__sub_82674628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674420
	sub_82674420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674630"))) PPC_WEAK_FUNC(sub_82674630);
PPC_FUNC_IMPL(__imp__sub_82674630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5476
	ctx.r3.s64 = ctx.r11.s64 + -5476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674640"))) PPC_WEAK_FUNC(sub_82674640);
PPC_FUNC_IMPL(__imp__sub_82674640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674678
	if (ctx.cr6.eq) goto loc_82674678;
	// bl 0x823c5e60
	ctx.lr = 0x82674668;
	sub_823C5E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674678
	if (!ctx.cr6.eq) goto loc_82674678;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82674684
	goto loc_82674684;
loc_82674678:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x82674684;
	sub_8234E2D8(ctx, base);
loc_82674684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826746A0"))) PPC_WEAK_FUNC(sub_826746A0);
PPC_FUNC_IMPL(__imp__sub_826746A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x826746BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826746d0
	if (ctx.cr0.eq) goto loc_826746D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x826746CC;
	sub_82674748(ctx, base);
	// b 0x826746d4
	goto loc_826746D4;
loc_826746D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826746D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826746E8"))) PPC_WEAK_FUNC(sub_826746E8);
PPC_FUNC_IMPL(__imp__sub_826746E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5e60
	ctx.lr = 0x82674708;
	sub_823C5E60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674718
	if (!ctx.cr6.eq) goto loc_82674718;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82674730
	goto loc_82674730;
loc_82674718:
	// bl 0x823323b8
	ctx.lr = 0x8267471C;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674730
	if (ctx.cr6.eq) goto loc_82674730;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82674730;
	sub_8234D0A0(ctx, base);
loc_82674730:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674748"))) PPC_WEAK_FUNC(sub_82674748);
PPC_FUNC_IMPL(__imp__sub_82674748) {
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
	// bl 0x8234e3e0
	ctx.lr = 0x82674768;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,22480
	ctx.r11.s64 = ctx.r11.s64 + 22480;
	// addi r10,r10,24164
	ctx.r10.s64 = ctx.r10.s64 + 24164;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// lwz r11,3292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3292);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// lfs f0,3296(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// lwz r11,3300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// lwz r11,3304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3304);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// lwz r11,3308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3308);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
	// lfs f0,3316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// lfs f0,3320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3320);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3320(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// lfs f0,3324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// lfs f0,3328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3328);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// lfs f0,3332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
	// lwz r11,3336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3336);
	// stw r11,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r11.u32);
	// lwz r11,3340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// lwz r11,3344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3344);
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// lfs f0,3348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3348);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3348, temp.u32);
	// lfs f0,3352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3352, temp.u32);
	// lwz r11,3356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3356);
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674848"))) PPC_WEAK_FUNC(sub_82674848);
PPC_FUNC_IMPL(__imp__sub_82674848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5460
	ctx.r3.s64 = ctx.r11.s64 + -5460;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674858"))) PPC_WEAK_FUNC(sub_82674858);
PPC_FUNC_IMPL(__imp__sub_82674858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674890
	if (ctx.cr6.eq) goto loc_82674890;
	// bl 0x823c5ff0
	ctx.lr = 0x82674880;
	sub_823C5FF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674890
	if (!ctx.cr6.eq) goto loc_82674890;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267489c
	goto loc_8267489C;
loc_82674890:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x8267489C;
	sub_82674640(ctx, base);
loc_8267489C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826748B8"))) PPC_WEAK_FUNC(sub_826748B8);
PPC_FUNC_IMPL(__imp__sub_826748B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5ff0
	sub_823C5FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826748C0"))) PPC_WEAK_FUNC(sub_826748C0);
PPC_FUNC_IMPL(__imp__sub_826748C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x826748E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674920
	if (ctx.cr0.eq) goto loc_82674920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x826748F4;
	sub_82674748(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,24216
	ctx.r11.s64 = ctx.r11.s64 + 24216;
	// addi r10,r10,25900
	ctx.r10.s64 = ctx.r10.s64 + 25900;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674924
	goto loc_82674924;
loc_82674920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674940"))) PPC_WEAK_FUNC(sub_82674940);
PPC_FUNC_IMPL(__imp__sub_82674940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c5ff0
	ctx.lr = 0x82674960;
	sub_823C5FF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674974
	if (ctx.cr6.eq) goto loc_82674974;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82674974;
	sub_826746E8(ctx, base);
loc_82674974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674990"))) PPC_WEAK_FUNC(sub_82674990);
PPC_FUNC_IMPL(__imp__sub_82674990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5436
	ctx.r3.s64 = ctx.r11.s64 + -5436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826749A0"))) PPC_WEAK_FUNC(sub_826749A0);
PPC_FUNC_IMPL(__imp__sub_826749A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826749d8
	if (ctx.cr6.eq) goto loc_826749D8;
	// bl 0x823c6170
	ctx.lr = 0x826749C8;
	sub_823C6170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826749d8
	if (!ctx.cr6.eq) goto loc_826749D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826749e4
	goto loc_826749E4;
loc_826749D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x826749E4;
	sub_82674640(ctx, base);
loc_826749E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674A00"))) PPC_WEAK_FUNC(sub_82674A00);
PPC_FUNC_IMPL(__imp__sub_82674A00) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6170
	sub_823C6170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674A08"))) PPC_WEAK_FUNC(sub_82674A08);
PPC_FUNC_IMPL(__imp__sub_82674A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x82674A28;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674a68
	if (ctx.cr0.eq) goto loc_82674A68;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x82674A3C;
	sub_82674748(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,25952
	ctx.r11.s64 = ctx.r11.s64 + 25952;
	// addi r10,r10,27636
	ctx.r10.s64 = ctx.r10.s64 + 27636;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674a6c
	goto loc_82674A6C;
loc_82674A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674A6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674A88"))) PPC_WEAK_FUNC(sub_82674A88);
PPC_FUNC_IMPL(__imp__sub_82674A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6170
	ctx.lr = 0x82674AA8;
	sub_823C6170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674abc
	if (ctx.cr6.eq) goto loc_82674ABC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82674ABC;
	sub_826746E8(ctx, base);
loc_82674ABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674AD8"))) PPC_WEAK_FUNC(sub_82674AD8);
PPC_FUNC_IMPL(__imp__sub_82674AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5412
	ctx.r3.s64 = ctx.r11.s64 + -5412;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674AE8"))) PPC_WEAK_FUNC(sub_82674AE8);
PPC_FUNC_IMPL(__imp__sub_82674AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674b20
	if (ctx.cr6.eq) goto loc_82674B20;
	// bl 0x823c62b0
	ctx.lr = 0x82674B10;
	sub_823C62B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674b20
	if (!ctx.cr6.eq) goto loc_82674B20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82674b2c
	goto loc_82674B2C;
loc_82674B20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x82674B2C;
	sub_82674640(ctx, base);
loc_82674B2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674B48"))) PPC_WEAK_FUNC(sub_82674B48);
PPC_FUNC_IMPL(__imp__sub_82674B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c62b0
	sub_823C62B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674B50"))) PPC_WEAK_FUNC(sub_82674B50);
PPC_FUNC_IMPL(__imp__sub_82674B50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5e60
	sub_823C5E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674B58"))) PPC_WEAK_FUNC(sub_82674B58);
PPC_FUNC_IMPL(__imp__sub_82674B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x82674B78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674bb8
	if (ctx.cr0.eq) goto loc_82674BB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x82674B8C;
	sub_82674748(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// addi r10,r10,29372
	ctx.r10.s64 = ctx.r10.s64 + 29372;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674bbc
	goto loc_82674BBC;
loc_82674BB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674BBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674BD8"))) PPC_WEAK_FUNC(sub_82674BD8);
PPC_FUNC_IMPL(__imp__sub_82674BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c62b0
	ctx.lr = 0x82674BF8;
	sub_823C62B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674c0c
	if (ctx.cr6.eq) goto loc_82674C0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82674C0C;
	sub_826746E8(ctx, base);
loc_82674C0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674C28"))) PPC_WEAK_FUNC(sub_82674C28);
PPC_FUNC_IMPL(__imp__sub_82674C28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5392
	ctx.r3.s64 = ctx.r11.s64 + -5392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674C38"))) PPC_WEAK_FUNC(sub_82674C38);
PPC_FUNC_IMPL(__imp__sub_82674C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674c70
	if (ctx.cr6.eq) goto loc_82674C70;
	// bl 0x823c63f8
	ctx.lr = 0x82674C60;
	sub_823C63F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674c70
	if (!ctx.cr6.eq) goto loc_82674C70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82674c7c
	goto loc_82674C7C;
loc_82674C70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x82674C7C;
	sub_82674640(ctx, base);
loc_82674C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674C98"))) PPC_WEAK_FUNC(sub_82674C98);
PPC_FUNC_IMPL(__imp__sub_82674C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c63f8
	sub_823C63F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674CA0"))) PPC_WEAK_FUNC(sub_82674CA0);
PPC_FUNC_IMPL(__imp__sub_82674CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,3424
	ctx.r3.s64 = 3424;
	// bl 0x82833108
	ctx.lr = 0x82674CBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82674cd0
	if (ctx.cr0.eq) goto loc_82674CD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82674d38
	ctx.lr = 0x82674CCC;
	sub_82674D38(ctx, base);
	// b 0x82674cd4
	goto loc_82674CD4;
loc_82674CD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674CD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674CE8"))) PPC_WEAK_FUNC(sub_82674CE8);
PPC_FUNC_IMPL(__imp__sub_82674CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c63f8
	ctx.lr = 0x82674D08;
	sub_823C63F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674d1c
	if (ctx.cr6.eq) goto loc_82674D1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82674D1C;
	sub_826746E8(ctx, base);
loc_82674D1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674D38"))) PPC_WEAK_FUNC(sub_82674D38);
PPC_FUNC_IMPL(__imp__sub_82674D38) {
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
	// bl 0x82674748
	ctx.lr = 0x82674D58;
	sub_82674748(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,29424
	ctx.r11.s64 = ctx.r11.s64 + 29424;
	// addi r10,r10,31108
	ctx.r10.s64 = ctx.r10.s64 + 31108;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// lwz r11,3364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	// stw r11,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r11.u32);
	// lwz r11,3368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3368);
	// stw r11,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r11.u32);
	// lwz r11,3372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3372);
	// stw r11,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r11.u32);
	// lwz r11,3376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// lwz r11,3380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3380);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// lwz r11,3384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3384);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
	// lwz r11,3388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3388);
	// stw r11,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r11.u32);
	// lwz r11,3392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// lwz r11,3396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3396);
	// stw r11,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// lwz r11,3400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3400);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// lwz r11,3404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3404);
	// stw r11,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r11.u32);
	// lwz r11,3408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3408);
	// stw r11,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r11.u32);
	// lwz r11,3412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3412);
	// stw r11,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r11.u32);
	// lfs f0,3416(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3416, temp.u32);
	// lfs f0,3420(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3420, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674E18"))) PPC_WEAK_FUNC(sub_82674E18);
PPC_FUNC_IMPL(__imp__sub_82674E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5368
	ctx.r3.s64 = ctx.r11.s64 + -5368;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674E28"))) PPC_WEAK_FUNC(sub_82674E28);
PPC_FUNC_IMPL(__imp__sub_82674E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674e60
	if (ctx.cr6.eq) goto loc_82674E60;
	// bl 0x823c6580
	ctx.lr = 0x82674E50;
	sub_823C6580(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674e60
	if (!ctx.cr6.eq) goto loc_82674E60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82674e6c
	goto loc_82674E6C;
loc_82674E60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x82674E6C;
	sub_82674640(ctx, base);
loc_82674E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674E88"))) PPC_WEAK_FUNC(sub_82674E88);
PPC_FUNC_IMPL(__imp__sub_82674E88) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6580
	sub_823C6580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674E90"))) PPC_WEAK_FUNC(sub_82674E90);
PPC_FUNC_IMPL(__imp__sub_82674E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x82674EB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82674ef0
	if (ctx.cr0.eq) goto loc_82674EF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x82674EC4;
	sub_82674748(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,31160
	ctx.r11.s64 = ctx.r11.s64 + 31160;
	// addi r10,r10,-32692
	ctx.r10.s64 = ctx.r10.s64 + -32692;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82674ef4
	goto loc_82674EF4;
loc_82674EF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82674EF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674F10"))) PPC_WEAK_FUNC(sub_82674F10);
PPC_FUNC_IMPL(__imp__sub_82674F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6580
	ctx.lr = 0x82674F30;
	sub_823C6580(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82674f44
	if (ctx.cr6.eq) goto loc_82674F44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82674F44;
	sub_826746E8(ctx, base);
loc_82674F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674F60"))) PPC_WEAK_FUNC(sub_82674F60);
PPC_FUNC_IMPL(__imp__sub_82674F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5344
	ctx.r3.s64 = ctx.r11.s64 + -5344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674F70"))) PPC_WEAK_FUNC(sub_82674F70);
PPC_FUNC_IMPL(__imp__sub_82674F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82674fa8
	if (ctx.cr6.eq) goto loc_82674FA8;
	// bl 0x823c6730
	ctx.lr = 0x82674F98;
	sub_823C6730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82674fa8
	if (!ctx.cr6.eq) goto loc_82674FA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82674fb4
	goto loc_82674FB4;
loc_82674FA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x82674FB4;
	sub_82674640(ctx, base);
loc_82674FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82674FD0"))) PPC_WEAK_FUNC(sub_82674FD0);
PPC_FUNC_IMPL(__imp__sub_82674FD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6730
	sub_823C6730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82674FD8"))) PPC_WEAK_FUNC(sub_82674FD8);
PPC_FUNC_IMPL(__imp__sub_82674FD8) {
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
	// li r3,3376
	ctx.r3.s64 = 3376;
	// bl 0x82833108
	ctx.lr = 0x82674FF8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82675048
	if (ctx.cr0.eq) goto loc_82675048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x8267500C;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-32640
	ctx.r11.s64 = ctx.r11.s64 + -32640;
	// addi r10,r10,-30956
	ctx.r10.s64 = ctx.r10.s64 + -30956;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	// stw r11,3360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3360, ctx.r11.u32);
	// lfs f0,3364(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3364, temp.u32);
	// b 0x8267504c
	goto loc_8267504C;
loc_82675048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267504C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675068"))) PPC_WEAK_FUNC(sub_82675068);
PPC_FUNC_IMPL(__imp__sub_82675068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6730
	ctx.lr = 0x82675088;
	sub_823C6730(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267509c
	if (ctx.cr6.eq) goto loc_8267509C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x8267509C;
	sub_826746E8(ctx, base);
loc_8267509C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826750B8"))) PPC_WEAK_FUNC(sub_826750B8);
PPC_FUNC_IMPL(__imp__sub_826750B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5316
	ctx.r3.s64 = ctx.r11.s64 + -5316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826750C8"))) PPC_WEAK_FUNC(sub_826750C8);
PPC_FUNC_IMPL(__imp__sub_826750C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82675100
	if (ctx.cr6.eq) goto loc_82675100;
	// bl 0x823c6870
	ctx.lr = 0x826750F0;
	sub_823C6870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82675100
	if (!ctx.cr6.eq) goto loc_82675100;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267510c
	goto loc_8267510C;
loc_82675100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x8267510C;
	sub_82674640(ctx, base);
loc_8267510C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675128"))) PPC_WEAK_FUNC(sub_82675128);
PPC_FUNC_IMPL(__imp__sub_82675128) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6870
	sub_823C6870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675130"))) PPC_WEAK_FUNC(sub_82675130);
PPC_FUNC_IMPL(__imp__sub_82675130) {
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
	// li r3,3376
	ctx.r3.s64 = 3376;
	// bl 0x82833108
	ctx.lr = 0x82675150;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82675198
	if (ctx.cr0.eq) goto loc_82675198;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x82675164;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-30904
	ctx.r11.s64 = ctx.r11.s64 + -30904;
	// addi r10,r10,-29220
	ctx.r10.s64 = ctx.r10.s64 + -29220;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,3360(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3360, temp.u32);
	// b 0x8267519c
	goto loc_8267519C;
loc_82675198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267519C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826751B8"))) PPC_WEAK_FUNC(sub_826751B8);
PPC_FUNC_IMPL(__imp__sub_826751B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6870
	ctx.lr = 0x826751D8;
	sub_823C6870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826751ec
	if (ctx.cr6.eq) goto loc_826751EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x826751EC;
	sub_826746E8(ctx, base);
loc_826751EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675208"))) PPC_WEAK_FUNC(sub_82675208);
PPC_FUNC_IMPL(__imp__sub_82675208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5280
	ctx.r3.s64 = ctx.r11.s64 + -5280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675218"))) PPC_WEAK_FUNC(sub_82675218);
PPC_FUNC_IMPL(__imp__sub_82675218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82675250
	if (ctx.cr6.eq) goto loc_82675250;
	// bl 0x823c69b0
	ctx.lr = 0x82675240;
	sub_823C69B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82675250
	if (!ctx.cr6.eq) goto loc_82675250;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267525c
	goto loc_8267525C;
loc_82675250:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x8267525C;
	sub_82674640(ctx, base);
loc_8267525C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675278"))) PPC_WEAK_FUNC(sub_82675278);
PPC_FUNC_IMPL(__imp__sub_82675278) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c69b0
	sub_823C69B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675280"))) PPC_WEAK_FUNC(sub_82675280);
PPC_FUNC_IMPL(__imp__sub_82675280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x826752A0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826752e0
	if (ctx.cr0.eq) goto loc_826752E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x826752B4;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-29168
	ctx.r11.s64 = ctx.r11.s64 + -29168;
	// addi r10,r10,-27484
	ctx.r10.s64 = ctx.r10.s64 + -27484;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826752e4
	goto loc_826752E4;
loc_826752E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826752E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675300"))) PPC_WEAK_FUNC(sub_82675300);
PPC_FUNC_IMPL(__imp__sub_82675300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c69b0
	ctx.lr = 0x82675320;
	sub_823C69B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82675334
	if (ctx.cr6.eq) goto loc_82675334;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x82675334;
	sub_826746E8(ctx, base);
loc_82675334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675350"))) PPC_WEAK_FUNC(sub_82675350);
PPC_FUNC_IMPL(__imp__sub_82675350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5248
	ctx.r3.s64 = ctx.r11.s64 + -5248;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675360"))) PPC_WEAK_FUNC(sub_82675360);
PPC_FUNC_IMPL(__imp__sub_82675360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82675398
	if (ctx.cr6.eq) goto loc_82675398;
	// bl 0x823c6b38
	ctx.lr = 0x82675388;
	sub_823C6B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82675398
	if (!ctx.cr6.eq) goto loc_82675398;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826753a4
	goto loc_826753A4;
loc_82675398:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x826753A4;
	sub_82674640(ctx, base);
loc_826753A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826753C0"))) PPC_WEAK_FUNC(sub_826753C0);
PPC_FUNC_IMPL(__imp__sub_826753C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6b38
	sub_823C6B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826753C8"))) PPC_WEAK_FUNC(sub_826753C8);
PPC_FUNC_IMPL(__imp__sub_826753C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x826753E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82675428
	if (ctx.cr0.eq) goto loc_82675428;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x826753FC;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-27432
	ctx.r11.s64 = ctx.r11.s64 + -27432;
	// addi r10,r10,-25748
	ctx.r10.s64 = ctx.r10.s64 + -25748;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8267542c
	goto loc_8267542C;
loc_82675428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8267542C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675448"))) PPC_WEAK_FUNC(sub_82675448);
PPC_FUNC_IMPL(__imp__sub_82675448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6b38
	ctx.lr = 0x82675468;
	sub_823C6B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267547c
	if (ctx.cr6.eq) goto loc_8267547C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x8267547C;
	sub_826746E8(ctx, base);
loc_8267547C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675498"))) PPC_WEAK_FUNC(sub_82675498);
PPC_FUNC_IMPL(__imp__sub_82675498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5228
	ctx.r3.s64 = ctx.r11.s64 + -5228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826754A8"))) PPC_WEAK_FUNC(sub_826754A8);
PPC_FUNC_IMPL(__imp__sub_826754A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826754e0
	if (ctx.cr6.eq) goto loc_826754E0;
	// bl 0x823c6cd8
	ctx.lr = 0x826754D0;
	sub_823C6CD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826754e0
	if (!ctx.cr6.eq) goto loc_826754E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826754ec
	goto loc_826754EC;
loc_826754E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x826754EC;
	sub_82674640(ctx, base);
loc_826754EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675508"))) PPC_WEAK_FUNC(sub_82675508);
PPC_FUNC_IMPL(__imp__sub_82675508) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6cd8
	sub_823C6CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675510"))) PPC_WEAK_FUNC(sub_82675510);
PPC_FUNC_IMPL(__imp__sub_82675510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x82675530;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82675570
	if (ctx.cr0.eq) goto loc_82675570;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x82675544;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-25696
	ctx.r11.s64 = ctx.r11.s64 + -25696;
	// addi r10,r10,-24012
	ctx.r10.s64 = ctx.r10.s64 + -24012;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82675574
	goto loc_82675574;
loc_82675570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82675574:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675590"))) PPC_WEAK_FUNC(sub_82675590);
PPC_FUNC_IMPL(__imp__sub_82675590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6cd8
	ctx.lr = 0x826755B0;
	sub_823C6CD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826755c4
	if (ctx.cr6.eq) goto loc_826755C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x826755C4;
	sub_826746E8(ctx, base);
loc_826755C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826755E0"))) PPC_WEAK_FUNC(sub_826755E0);
PPC_FUNC_IMPL(__imp__sub_826755E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5204
	ctx.r3.s64 = ctx.r11.s64 + -5204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826755F0"))) PPC_WEAK_FUNC(sub_826755F0);
PPC_FUNC_IMPL(__imp__sub_826755F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82675628
	if (ctx.cr6.eq) goto loc_82675628;
	// bl 0x823c6e68
	ctx.lr = 0x82675618;
	sub_823C6E68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82675628
	if (!ctx.cr6.eq) goto loc_82675628;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82675634
	goto loc_82675634;
loc_82675628:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82674640
	ctx.lr = 0x82675634;
	sub_82674640(ctx, base);
loc_82675634:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675650"))) PPC_WEAK_FUNC(sub_82675650);
PPC_FUNC_IMPL(__imp__sub_82675650) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c6e68
	sub_823C6E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675658"))) PPC_WEAK_FUNC(sub_82675658);
PPC_FUNC_IMPL(__imp__sub_82675658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3360
	ctx.r3.s64 = 3360;
	// bl 0x82833108
	ctx.lr = 0x82675678;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826756b8
	if (ctx.cr0.eq) goto loc_826756B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82674748
	ctx.lr = 0x8267568C;
	sub_82674748(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-23960
	ctx.r11.s64 = ctx.r11.s64 + -23960;
	// addi r10,r10,-22276
	ctx.r10.s64 = ctx.r10.s64 + -22276;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x826756bc
	goto loc_826756BC;
loc_826756B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826756BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826756D8"))) PPC_WEAK_FUNC(sub_826756D8);
PPC_FUNC_IMPL(__imp__sub_826756D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823c6e68
	ctx.lr = 0x826756F8;
	sub_823C6E68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8267570c
	if (ctx.cr6.eq) goto loc_8267570C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826746e8
	ctx.lr = 0x8267570C;
	sub_826746E8(ctx, base);
loc_8267570C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675728"))) PPC_WEAK_FUNC(sub_82675728);
PPC_FUNC_IMPL(__imp__sub_82675728) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82675744;
	sub_8265C840(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// lis r7,-32224
	ctx.r7.s64 = -2111832064;
	// lis r6,-32224
	ctx.r6.s64 = -2111832064;
	// lfs f31,912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
	// addi r9,r8,22480
	ctx.r9.s64 = ctx.r8.s64 + 22480;
	// lfs f0,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r7,24164
	ctx.r8.s64 = ctx.r7.s64 + 24164;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 972, temp.u32);
	// addi r7,r6,-30936
	ctx.r7.s64 = ctx.r6.s64 + -30936;
	// stfs f31,3320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3320, temp.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// addi r3,r9,-17464
	ctx.r3.s64 = ctx.r9.s64 + -17464;
	// stw r10,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r10.u32);
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
	// stw r10,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r10.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r11.u32);
	// stw r10,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r10.u32);
	// stw r10,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r10.u32);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x826757C0;
	sub_82816528(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,4165
	ctx.r8.s64 = 272957440;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r8,r8,43298
	ctx.r8.u64 = ctx.r8.u64 | 43298;
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r7.u32);
	// stfs f0,3296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// stw r8,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r8.u32);
	// stfs f0,3316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
	// stw r10,3336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3336, ctx.r10.u32);
	// stfs f0,3348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3348, temp.u32);
	// stfs f0,3328(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3328, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82675828"))) PPC_WEAK_FUNC(sub_82675828);
PPC_FUNC_IMPL(__imp__sub_82675828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24592);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82675868
	if (!ctx.cr0.eq) goto loc_82675868;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r11,24592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24592, ctx.r11.u32);
	// addi r3,r9,-5668
	ctx.r3.s64 = ctx.r9.s64 + -5668;
	// bl 0x82816528
	ctx.lr = 0x82675860;
	sub_82816528(ctx, base);
	// stw r3,24588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24588, ctx.r3.u32);
	// b 0x8267586c
	goto loc_8267586C;
loc_82675868:
	// lwz r3,24588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24588);
loc_8267586C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675880"))) PPC_WEAK_FUNC(sub_82675880);
PPC_FUNC_IMPL(__imp__sub_82675880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r11,-27328
	ctx.r10.s64 = ctx.r11.s64 + -27328;
	// lfs f13,-27328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2688);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826758A0"))) PPC_WEAK_FUNC(sub_826758A0);
PPC_FUNC_IMPL(__imp__sub_826758A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826758A8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8265f1d0
	ctx.lr = 0x826758BC;
	sub_8265F1D0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,32760
	ctx.r9.s64 = ctx.r11.s64 + 32760;
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r8,21904
	ctx.r3.s64 = ctx.r8.s64 + 21904;
	// lfs f13,32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lfs f0,260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8267590C;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8265f390
	ctx.lr = 0x8267594C;
	sub_8265F390(ctx, base);
	// stw r3,3280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3280, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82333a20
	ctx.lr = 0x8267596C;
	sub_82333A20(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82331120
	ctx.lr = 0x826759B4;
	sub_82331120(ctx, base);
	// lwz r10,3280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826759D0"))) PPC_WEAK_FUNC(sub_826759D0);
PPC_FUNC_IMPL(__imp__sub_826759D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826759D8;
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
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82675a20
	if (!ctx.cr6.eq) goto loc_82675A20;
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82675a20
	if (!ctx.cr6.eq) goto loc_82675A20;
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675a20
	if (!ctx.cr6.eq) goto loc_82675A20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1668);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675A20:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265f5e0
	ctx.lr = 0x82675A34;
	sub_8265F5E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675A40"))) PPC_WEAK_FUNC(sub_82675A40);
PPC_FUNC_IMPL(__imp__sub_82675A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3280);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r8,8
	ctx.r10.u64 = ctx.r8.u64 | 8;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f13,3296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,3288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3288, ctx.r9.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82675A7C"))) PPC_WEAK_FUNC(sub_82675A7C);
PPC_FUNC_IMPL(__imp__sub_82675A7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675A80"))) PPC_WEAK_FUNC(sub_82675A80);
PPC_FUNC_IMPL(__imp__sub_82675A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82675A88;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82675c54
	if (ctx.cr6.eq) goto loc_82675C54;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x828250b0
	ctx.lr = 0x82675AE8;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82675b14
	if (ctx.cr0.eq) goto loc_82675B14;
	// bl 0x823f61b8
	ctx.lr = 0x82675AF4;
	sub_823F61B8(ctx, base);
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
	ctx.lr = 0x82675B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82675b18
	if (!ctx.cr0.eq) goto loc_82675B18;
loc_82675B14:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82675B18:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82675B28;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x829c3740
	ctx.lr = 0x82675B38;
	sub_829C3740(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82675c54
	if (ctx.cr6.eq) goto loc_82675C54;
	// stw r29,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r29.u32);
	// lfs f12,3324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,3344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3344);
	// lfs f11,3352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,3340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,3336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r4,r9,25356
	ctx.r4.s64 = ctx.r9.s64 + 25356;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r10.u32);
	// stw r9,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r9.u32);
	// lfs f13,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,3348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3348);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f0,3316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82816c30
	ctx.lr = 0x82675C34;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823339b8
	ctx.lr = 0x82675C40;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x82675C44;
	sub_82333960(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x82675C54;
	sub_82333960(ctx, base);
loc_82675C54:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
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
	ctx.lr = 0x82675C78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82675c94
	if (!ctx.cr6.gt) goto loc_82675C94;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82675d64
	goto loc_82675D64;
loc_82675C94:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675d30
	if (!ctx.cr6.eq) goto loc_82675D30;
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
	ctx.lr = 0x82675CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82675d10
	if (!ctx.cr6.gt) goto loc_82675D10;
loc_82675CCC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82675cfc
	if (!ctx.cr6.eq) goto loc_82675CFC;
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
	ctx.lr = 0x82675CF4;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82675CFC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82675ccc
	if (ctx.cr6.lt) goto loc_82675CCC;
loc_82675D10:
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
	ctx.lr = 0x82675D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675D30:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82675d64
	if (!ctx.cr0.eq) goto loc_82675D64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675D50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82675d64
	if (ctx.cr0.eq) goto loc_82675D64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82675D64;
	sub_82410060(ctx, base);
loc_82675D64:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675D78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82675D80"))) PPC_WEAK_FUNC(sub_82675D80);
PPC_FUNC_IMPL(__imp__sub_82675D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82675D90"))) PPC_WEAK_FUNC(sub_82675D90);
PPC_FUNC_IMPL(__imp__sub_82675D90) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82661448
	ctx.lr = 0x82675DB0;
	sub_82661448(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,620
	ctx.r11.s64 = ctx.r31.s64 + 620;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,624(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// beq cr6,0x82675e00
	if (ctx.cr6.eq) goto loc_82675E00;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lwz r11,3308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x82675e20
	if (!ctx.cr6.gt) goto loc_82675E20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82675e1c
	goto loc_82675E1C;
loc_82675E00:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lwz r11,3308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3308);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,3308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3308, ctx.r11.u32);
	// bge 0x82675e20
	if (!ctx.cr0.lt) goto loc_82675E20;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82675E1C:
	// stw r11,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r11.u32);
loc_82675E20:
	// lwz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82675e68
	if (ctx.cr6.eq) goto loc_82675E68;
	// lwz r11,3292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675e68
	if (!ctx.cr6.eq) goto loc_82675E68;
	// lfs f0,3296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,3296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82675e68
	if (ctx.cr6.gt) goto loc_82675E68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675E68:
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

__attribute__((alias("__imp__sub_82675E80"))) PPC_WEAK_FUNC(sub_82675E80);
PPC_FUNC_IMPL(__imp__sub_82675E80) {
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
	// bl 0x8265e4f0
	ctx.lr = 0x82675E98;
	sub_8265E4F0(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82675eb8
	if (ctx.cr6.eq) goto loc_82675EB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82675EB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x82675ED8;
	sub_829C2520(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82675eec
	if (ctx.cr0.eq) goto loc_82675EEC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,23968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
loc_82675EEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82675F00"))) PPC_WEAK_FUNC(sub_82675F00);
PPC_FUNC_IMPL(__imp__sub_82675F00) {
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
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82675F24;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82675fa4
	if (ctx.cr0.eq) goto loc_82675FA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,344
	ctx.r4.s64 = 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675F44;
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
	ctx.lr = 0x82675F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82675F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82675FA4:
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

__attribute__((alias("__imp__sub_82675FC0"))) PPC_WEAK_FUNC(sub_82675FC0);
PPC_FUNC_IMPL(__imp__sub_82675FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265d250
	ctx.lr = 0x82675FE0;
	sub_8265D250(ctx, base);
	// lis r11,11857
	ctx.r11.s64 = 777060352;
	// ori r11,r11,20963
	ctx.r11.u64 = ctx.r11.u64 | 20963;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82676010
	if (!ctx.cr6.eq) goto loc_82676010;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82676010
	if (ctx.cr6.eq) goto loc_82676010;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1680);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82676010:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676028"))) PPC_WEAK_FUNC(sub_82676028);
PPC_FUNC_IMPL(__imp__sub_82676028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82676030;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82676040;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82676048;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82676180
	if (ctx.cr0.eq) goto loc_82676180;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x82676068;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,21916
	ctx.r4.s64 = ctx.r10.s64 + 21916;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82676088;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826760a8
	if (ctx.cr6.eq) goto loc_826760A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826760a8
	if (ctx.cr6.eq) goto loc_826760A8;
	// bl 0x82332db8
	ctx.lr = 0x826760A8;
	sub_82332DB8(ctx, base);
loc_826760A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x826760B4;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,21936
	ctx.r4.s64 = ctx.r11.s64 + 21936;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826760CC;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826760ec
	if (ctx.cr6.eq) goto loc_826760EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826760ec
	if (ctx.cr6.eq) goto loc_826760EC;
	// bl 0x82332db8
	ctx.lr = 0x826760EC;
	sub_82332DB8(ctx, base);
loc_826760EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,338
	ctx.r4.s64 = 338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676104;
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
	ctx.lr = 0x82676120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,338
	ctx.r4.s64 = 338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267615C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82676180:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676190"))) PPC_WEAK_FUNC(sub_82676190);
PPC_FUNC_IMPL(__imp__sub_82676190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82676198;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61748
	ctx.lr = 0x826761A0;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r10,-27804
	ctx.r8.s64 = ctx.r10.s64 + -27804;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f28,-27804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27804);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r29,620
	ctx.r30.s64 = ctx.r29.s64 + 620;
	// lfs f31,16380(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16380);
	ctx.f31.f64 = double(temp.f32);
	// li r28,4
	ctx.r28.s64 = 4;
	// lfs f30,24008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24008);
	ctx.f30.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// addi r27,r11,-17324
	ctx.r27.s64 = ctx.r11.s64 + -17324;
loc_826761E0:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r25,r1,144
	ctx.r25.s64 = ctx.r1.s64 + 144;
	// addi r24,r1,160
	ctx.r24.s64 = ctx.r1.s64 + 160;
	// bl 0x82816528
	ctx.lr = 0x82676218;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
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
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82676254;
	sub_828250B0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f13,3348(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3348);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f0,1512(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3316(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3316);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x824da988
	ctx.lr = 0x82676288;
	sub_824DA988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,800(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,200(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1132);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x826761e0
	if (!ctx.cr0.eq) goto loc_826761E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82675a80
	ctx.lr = 0x82676350;
	sub_82675A80(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82a61794
	ctx.lr = 0x8267635C;
	__restfpr_28(ctx, base);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676360"))) PPC_WEAK_FUNC(sub_82676360);
PPC_FUNC_IMPL(__imp__sub_82676360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82676368;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// addi r28,r30,620
	ctx.r28.s64 = ctx.r30.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x82676394;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x826763D0;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826763f4
	if (ctx.cr0.eq) goto loc_826763F4;
	// bl 0x823ae1c8
	ctx.lr = 0x826763DC;
	sub_823AE1C8(ctx, base);
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
	ctx.lr = 0x826763F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826763F4:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82676404;
	sub_8233A258(ctx, base);
	// lis r4,13368
	ctx.r4.s64 = 876085248;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,39156
	ctx.r4.u64 = ctx.r4.u64 | 39156;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x82676418;
	sub_829C3740(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82675a80
	ctx.lr = 0x82676420;
	sub_82675A80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676428"))) PPC_WEAK_FUNC(sub_82676428);
PPC_FUNC_IMPL(__imp__sub_82676428) {
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
	// bl 0x82675728
	ctx.lr = 0x82676440;
	sub_82675728(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r8,15828
	ctx.r8.s64 = 1037303808;
	// addi r11,r11,27688
	ctx.r11.s64 = ctx.r11.s64 + 27688;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,29372
	ctx.r10.s64 = ctx.r10.s64 + 29372;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// ori r11,r8,47463
	ctx.r11.u64 = ctx.r8.u64 | 47463;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r11.u32);
	// addi r3,r10,21960
	ctx.r3.s64 = ctx.r10.s64 + 21960;
	// bl 0x82816528
	ctx.lr = 0x8267647C;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826764c4
	if (ctx.cr6.eq) goto loc_826764C4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,21984
	ctx.r5.s64 = ctx.r11.s64 + 21984;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826764C4;
	sub_828C5740(ctx, base);
loc_826764C4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
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

__attribute__((alias("__imp__sub_826764E8"))) PPC_WEAK_FUNC(sub_826764E8);
PPC_FUNC_IMPL(__imp__sub_826764E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826764F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82676500;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82676508;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8267665c
	if (ctx.cr0.eq) goto loc_8267665C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x82676528;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,22036
	ctx.r4.s64 = ctx.r10.s64 + 22036;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82676548;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82676568
	if (ctx.cr6.eq) goto loc_82676568;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676568
	if (ctx.cr6.eq) goto loc_82676568;
	// bl 0x82332db8
	ctx.lr = 0x82676568;
	sub_82332DB8(ctx, base);
loc_82676568:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x82676574;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22048
	ctx.r4.s64 = ctx.r11.s64 + 22048;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8267658C;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826765ac
	if (ctx.cr6.eq) goto loc_826765AC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826765ac
	if (ctx.cr6.eq) goto loc_826765AC;
	// bl 0x82332db8
	ctx.lr = 0x826765AC;
	sub_82332DB8(ctx, base);
loc_826765AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,322
	ctx.r4.s64 = 322;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826765C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,3328(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3328, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,322
	ctx.r4.s64 = 322;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826765E0;
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
	ctx.lr = 0x826765FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267661C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,322
	ctx.r4.s64 = 322;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676638;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_8267665C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676668"))) PPC_WEAK_FUNC(sub_82676668);
PPC_FUNC_IMPL(__imp__sub_82676668) {
	PPC_FUNC_PROLOGUE();
	// b 0x826759d0
	sub_826759D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676670"))) PPC_WEAK_FUNC(sub_82676670);
PPC_FUNC_IMPL(__imp__sub_82676670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82676678;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826767f0
	if (ctx.cr6.eq) goto loc_826767F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x828250b0
	ctx.lr = 0x826766D8;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82676704
	if (ctx.cr0.eq) goto loc_82676704;
	// bl 0x823adec0
	ctx.lr = 0x826766E4;
	sub_823ADEC0(ctx, base);
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
	ctx.lr = 0x826766FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82676708
	if (!ctx.cr0.eq) goto loc_82676708;
loc_82676704:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82676708:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82676718;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x829c3740
	ctx.lr = 0x82676728;
	sub_829C3740(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826767f0
	if (ctx.cr6.eq) goto loc_826767F0;
	// stw r30,1428(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1428, ctx.r30.u32);
	// lfs f11,3324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,3344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3344);
	// lfs f10,3352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,3340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,3336(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lfs f12,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r30,1468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1468, ctx.r30.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// fmuls f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f11,f7,f9
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r10.u32);
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,1452(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1452, ctx.r9.u32);
	// stw r10,1460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1460, ctx.r10.u32);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// stw r30,1448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1448, ctx.r30.u32);
	// lfs f0,3332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826767F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826767F0:
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
	ctx.lr = 0x82676814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82676830
	if (!ctx.cr6.gt) goto loc_82676830;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82676900
	goto loc_82676900;
loc_82676830:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826768cc
	if (!ctx.cr6.eq) goto loc_826768CC;
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
	ctx.lr = 0x82676854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826768ac
	if (!ctx.cr6.gt) goto loc_826768AC;
loc_82676868:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82676898
	if (!ctx.cr6.eq) goto loc_82676898;
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
	ctx.lr = 0x82676890;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82676898:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82676868
	if (ctx.cr6.lt) goto loc_82676868;
loc_826768AC:
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
	ctx.lr = 0x826768CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826768CC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82676900
	if (!ctx.cr0.eq) goto loc_82676900;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826768EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82676900
	if (ctx.cr0.eq) goto loc_82676900;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82676900;
	sub_82410060(ctx, base);
loc_82676900:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676920"))) PPC_WEAK_FUNC(sub_82676920);
PPC_FUNC_IMPL(__imp__sub_82676920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82676928;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82675728
	ctx.lr = 0x82676934;
	sub_82675728(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f13,16648(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16648);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,16816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,20572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20572);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,20184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20184);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32224
	ctx.r8.s64 = -2111832064;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r22,96(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,17112(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17112);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,29424
	ctx.r10.s64 = ctx.r10.s64 + 29424;
	// addi r9,r9,31108
	ctx.r9.s64 = ctx.r9.s64 + 31108;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r8,-30936
	ctx.r8.s64 = ctx.r8.s64 + -30936;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,19904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,3416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3416, temp.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f13,3296(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r7.u32);
	// stw r22,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r22.u32);
	// stw r28,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r28.u32);
	// stw r27,3368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3368, ctx.r27.u32);
	// stw r26,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r26.u32);
	// stw r6,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r6.u32);
	// stw r5,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r5.u32);
	// stw r4,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r4.u32);
	// stw r30,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r30.u32);
	// stw r29,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r29.u32);
	// stw r25,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r25.u32);
	// stw r24,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r24.u32);
	// stw r23,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r23.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676A38"))) PPC_WEAK_FUNC(sub_82676A38);
PPC_FUNC_IMPL(__imp__sub_82676A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82676A40;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826758a0
	ctx.lr = 0x82676A54;
	sub_826758A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,3364(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,3368(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3368);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r10,22064
	ctx.r3.s64 = ctx.r10.s64 + 22064;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,3376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	// lwz r10,3380(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3380);
	// lwz r29,3384(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3384);
	// lwz r28,3372(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3372);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x82676AA0;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r8,r28,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r10,r29,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x8265f390
	ctx.lr = 0x82676AD8;
	sub_8265F390(ctx, base);
	// stw r3,3360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3360, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82333a20
	ctx.lr = 0x82676AF8;
	sub_82333A20(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3360);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82331120
	ctx.lr = 0x82676B40;
	sub_82331120(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676B50"))) PPC_WEAK_FUNC(sub_82676B50);
PPC_FUNC_IMPL(__imp__sub_82676B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82676B58;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,3280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 8;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f13,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r29.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82676b9c
	if (ctx.cr6.gt) goto loc_82676B9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82676B9C:
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r27,r1,136
	ctx.r27.s64 = ctx.r1.s64 + 136;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// addi r3,r7,-17264
	ctx.r3.s64 = ctx.r7.s64 + -17264;
	// lfs f0,32748(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// addi r26,r1,120
	ctx.r26.s64 = ctx.r1.s64 + 120;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x82816528
	ctx.lr = 0x82676BEC;
	sub_82816528(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82676C24;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82676c54
	if (ctx.cr0.eq) goto loc_82676C54;
	// bl 0x823ae308
	ctx.lr = 0x82676C30;
	sub_823AE308(ctx, base);
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
	ctx.lr = 0x82676C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82676c58
	if (!ctx.cr0.eq) goto loc_82676C58;
loc_82676C54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82676C58:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,16936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16936);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676C70;
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
	ctx.lr = 0x82676C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82676cb0
	if (!ctx.cr6.gt) goto loc_82676CB0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82676d80
	goto loc_82676D80;
loc_82676CB0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82676d4c
	if (!ctx.cr6.eq) goto loc_82676D4C;
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
	ctx.lr = 0x82676CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82676d2c
	if (!ctx.cr6.gt) goto loc_82676D2C;
loc_82676CE8:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82676d18
	if (!ctx.cr6.eq) goto loc_82676D18;
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
	ctx.lr = 0x82676D10;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82676D18:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82676ce8
	if (ctx.cr6.lt) goto loc_82676CE8;
loc_82676D2C:
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
	ctx.lr = 0x82676D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82676D4C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82676d80
	if (!ctx.cr0.eq) goto loc_82676D80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82676d80
	if (ctx.cr0.eq) goto loc_82676D80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82676D80;
	sub_82410060(ctx, base);
loc_82676D80:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82676DA0"))) PPC_WEAK_FUNC(sub_82676DA0);
PPC_FUNC_IMPL(__imp__sub_82676DA0) {
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
	// bl 0x82675f00
	ctx.lr = 0x82676DC0;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82676DC8;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82676e64
	if (ctx.cr0.eq) goto loc_82676E64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676DE8;
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
	ctx.lr = 0x82676E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,340
	ctx.r4.s64 = 340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82676E64:
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

__attribute__((alias("__imp__sub_82676E80"))) PPC_WEAK_FUNC(sub_82676E80);
PPC_FUNC_IMPL(__imp__sub_82676E80) {
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
	// bl 0x82675f00
	ctx.lr = 0x82676E98;
	sub_82675F00(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82676EA0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82676ec0
	if (ctx.cr0.eq) goto loc_82676EC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,336
	ctx.r4.s64 = 336;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,3316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3316, temp.u32);
loc_82676EC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82676ED8"))) PPC_WEAK_FUNC(sub_82676ED8);
PPC_FUNC_IMPL(__imp__sub_82676ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82676EE0;
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
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x82676EF4;
	sub_82333A20(ctx, base);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82676f10
	if (ctx.cr6.eq) goto loc_82676F10;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82676F10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,3360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3360, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82676F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82677010
	if (ctx.cr6.eq) goto loc_82677010;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
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
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r4,3748(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3748);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r28,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82676F88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82676F90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82676fd8
	if (ctx.cr0.eq) goto loc_82676FD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,80(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82676FA8;
	sub_82833180(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// addi r11,r11,-22176
	ctx.r11.s64 = ctx.r11.s64 + -22176;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// b 0x82676fdc
	goto loc_82676FDC;
loc_82676FD8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82676FDC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82676FEC;
	sub_82833A30(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82676FFC;
	sub_8233A258(ctx, base);
	// lis r4,12194
	ctx.r4.s64 = 799145984;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,61572
	ctx.r4.u64 = ctx.r4.u64 | 61572;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c3740
	ctx.lr = 0x82677010;
	sub_829C3740(ctx, base);
loc_82677010:
	// lfs f1,3364(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3364);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82677040
	if (!ctx.cr6.gt) goto loc_82677040;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-17640
	ctx.r11.s64 = ctx.r11.s64 + -17640;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82678600
	ctx.lr = 0x82677040;
	sub_82678600(ctx, base);
loc_82677040:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677050"))) PPC_WEAK_FUNC(sub_82677050);
PPC_FUNC_IMPL(__imp__sub_82677050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82677058;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x82677068;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826770fc
	if (ctx.cr0.eq) goto loc_826770FC;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82677078;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826770c4
	if (ctx.cr0.eq) goto loc_826770C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r27,80(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82677090;
	sub_82833180(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// addi r10,r10,-22176
	ctx.r10.s64 = ctx.r10.s64 + -22176;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x826770c8
	goto loc_826770C8;
loc_826770C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_826770C8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826770D8;
	sub_82833A30(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826770E8;
	sub_8233A258(ctx, base);
	// lis r4,6348
	ctx.r4.s64 = 416022528;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,24754
	ctx.r4.u64 = ctx.r4.u64 | 24754;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x826770FC;
	sub_829C3740(ctx, base);
loc_826770FC:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267711C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677140
	if (ctx.cr0.eq) goto loc_82677140;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17640
	ctx.r4.s64 = ctx.r11.s64 + -17640;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82677140:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1672);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677160"))) PPC_WEAK_FUNC(sub_82677160);
PPC_FUNC_IMPL(__imp__sub_82677160) {
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
	// bl 0x82675728
	ctx.lr = 0x82677178;
	sub_82675728(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-30904
	ctx.r11.s64 = ctx.r11.s64 + -30904;
	// addi r10,r10,-29220
	ctx.r10.s64 = ctx.r10.s64 + -29220;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-23980
	ctx.r3.s64 = ctx.r11.s64 + -23980;
	// bl 0x82816528
	ctx.lr = 0x826771A8;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// lis r9,2850
	ctx.r9.s64 = 186777600;
	// ori r9,r9,21749
	ctx.r9.u64 = ctx.r9.u64 | 21749;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r9.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826771fc
	if (ctx.cr6.eq) goto loc_826771FC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,22080
	ctx.r5.s64 = ctx.r11.s64 + 22080;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x826771FC;
	sub_828C5740(ctx, base);
loc_826771FC:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
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

__attribute__((alias("__imp__sub_82677220"))) PPC_WEAK_FUNC(sub_82677220);
PPC_FUNC_IMPL(__imp__sub_82677220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82677228;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82677238;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82677240;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82677414
	if (ctx.cr0.eq) goto loc_82677414;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x82677260;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,22136
	ctx.r4.s64 = ctx.r10.s64 + 22136;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82677280;
	sub_829E6978(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826772a0
	if (ctx.cr6.eq) goto loc_826772A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826772a0
	if (ctx.cr6.eq) goto loc_826772A0;
	// bl 0x82332db8
	ctx.lr = 0x826772A0;
	sub_82332DB8(ctx, base);
loc_826772A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82409058
	ctx.lr = 0x826772AC;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22152
	ctx.r4.s64 = ctx.r11.s64 + 22152;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826772C4;
	sub_829E6978(ctx, base);
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826772e4
	if (ctx.cr6.eq) goto loc_826772E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826772e4
	if (ctx.cr6.eq) goto loc_826772E4;
	// bl 0x82332db8
	ctx.lr = 0x826772E4;
	sub_82332DB8(ctx, base);
loc_826772E4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82677320
	if (ctx.cr6.eq) goto loc_82677320;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,22172
	ctx.r5.s64 = ctx.r11.s64 + 22172;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x82677320;
	sub_828C5740(ctx, base);
loc_82677320:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677338;
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
	ctx.lr = 0x82677354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,3360(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3360, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267737C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,3328(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3328, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677398;
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
	ctx.lr = 0x826773B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826773D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826773F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267740C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82677414:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677420"))) PPC_WEAK_FUNC(sub_82677420);
PPC_FUNC_IMPL(__imp__sub_82677420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82677428;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r26,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677630
	if (ctx.cr6.eq) goto loc_82677630;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82677454;
	sub_824090E0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82677754
	if (ctx.cr0.eq) goto loc_82677754;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x828250b0
	ctx.lr = 0x8267749C;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826774c8
	if (ctx.cr0.eq) goto loc_826774C8;
	// bl 0x823abb08
	ctx.lr = 0x826774A8;
	sub_823ABB08(ctx, base);
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
	ctx.lr = 0x826774C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826774cc
	if (!ctx.cr0.eq) goto loc_826774CC;
loc_826774C8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_826774CC:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826774DC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x829c3740
	ctx.lr = 0x826774EC;
	sub_829C3740(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82677630
	if (ctx.cr6.eq) goto loc_82677630;
	// stw r27,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r27.u32);
	// lfs f12,3324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,3344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3344);
	// lfs f11,3352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,3340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,3336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r4,r9,25356
	ctx.r4.s64 = ctx.r9.s64 + 25356;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r10.u32);
	// stw r9,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r9.u32);
	// lfs f13,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,3348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3348);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// lfs f0,3316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82816c30
	ctx.lr = 0x826775E8;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823339b8
	ctx.lr = 0x826775F4;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x826775F8;
	sub_82333960(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// lfs f13,3332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f12.f64 = double(temp.f32);
	// stw r26,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,1588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// lfs f0,3360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1584, temp.u32);
	// bl 0x82333960
	ctx.lr = 0x82677630;
	sub_82333960(ctx, base);
loc_82677630:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
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
	ctx.lr = 0x82677654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82677670
	if (!ctx.cr6.gt) goto loc_82677670;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82677740
	goto loc_82677740;
loc_82677670:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267770c
	if (!ctx.cr6.eq) goto loc_8267770C;
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826776ec
	if (!ctx.cr6.gt) goto loc_826776EC;
loc_826776A8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826776d8
	if (!ctx.cr6.eq) goto loc_826776D8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x826776D0;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
loc_826776D8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826776a8
	if (ctx.cr6.lt) goto loc_826776A8;
loc_826776EC:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267770C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267770C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82677740
	if (!ctx.cr0.eq) goto loc_82677740;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267772C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677740
	if (ctx.cr0.eq) goto loc_82677740;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82677740;
	sub_82410060(ctx, base);
loc_82677740:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82677754:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677760"))) PPC_WEAK_FUNC(sub_82677760);
PPC_FUNC_IMPL(__imp__sub_82677760) {
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
	// bl 0x82675728
	ctx.lr = 0x82677778;
	sub_82675728(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-29168
	ctx.r11.s64 = ctx.r11.s64 + -29168;
	// addi r10,r10,-27484
	ctx.r10.s64 = ctx.r10.s64 + -27484;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-23132
	ctx.r3.s64 = ctx.r11.s64 + -23132;
	// bl 0x82816528
	ctx.lr = 0x826777A8;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// lis r9,2614
	ctx.r9.s64 = 171311104;
	// lis r8,283
	ctx.r8.s64 = 18546688;
	// ori r9,r9,32064
	ctx.r9.u64 = ctx.r9.u64 | 32064;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// ori r8,r8,56867
	ctx.r8.u64 = ctx.r8.u64 | 56867;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,3356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3356, ctx.r9.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,3088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3088, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82677808
	if (ctx.cr6.eq) goto loc_82677808;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,22228
	ctx.r5.s64 = ctx.r11.s64 + 22228;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x82677808;
	sub_828C5740(ctx, base);
loc_82677808:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,3332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3332, temp.u32);
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

__attribute__((alias("__imp__sub_82677828"))) PPC_WEAK_FUNC(sub_82677828);
PPC_FUNC_IMPL(__imp__sub_82677828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82677830;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82677840;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82677848;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82677980
	if (ctx.cr0.eq) goto loc_82677980;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x82677868;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,22284
	ctx.r4.s64 = ctx.r10.s64 + 22284;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82677888;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826778a8
	if (ctx.cr6.eq) goto loc_826778A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826778a8
	if (ctx.cr6.eq) goto loc_826778A8;
	// bl 0x82332db8
	ctx.lr = 0x826778A8;
	sub_82332DB8(ctx, base);
loc_826778A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x826778B4;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22304
	ctx.r4.s64 = ctx.r11.s64 + 22304;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826778CC;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826778ec
	if (ctx.cr6.eq) goto loc_826778EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826778ec
	if (ctx.cr6.eq) goto loc_826778EC;
	// bl 0x82332db8
	ctx.lr = 0x826778EC;
	sub_82332DB8(ctx, base);
loc_826778EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,330
	ctx.r4.s64 = 330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,3328(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3328, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,330
	ctx.r4.s64 = 330;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677920;
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
	ctx.lr = 0x8267793C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267795C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82677980:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677990"))) PPC_WEAK_FUNC(sub_82677990);
PPC_FUNC_IMPL(__imp__sub_82677990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82677998;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r11,3292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3292, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82677b90
	if (ctx.cr6.eq) goto loc_82677B90;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x828250b0
	ctx.lr = 0x826779F8;
	sub_828250B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82677a24
	if (ctx.cr0.eq) goto loc_82677A24;
	// bl 0x823ab6c8
	ctx.lr = 0x82677A04;
	sub_823AB6C8(ctx, base);
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
	ctx.lr = 0x82677A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82677a28
	if (!ctx.cr0.eq) goto loc_82677A28;
loc_82677A24:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82677A28:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82677A38;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3356(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3356);
	// bl 0x829c3740
	ctx.lr = 0x82677A48;
	sub_829C3740(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82677b90
	if (ctx.cr6.eq) goto loc_82677B90;
	// stw r29,1428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1428, ctx.r29.u32);
	// lfs f12,3324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,3344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3344);
	// lfs f11,3352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3352);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,3340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,3336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3336);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r4,r9,25356
	ctx.r4.s64 = ctx.r9.s64 + 25356;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stw r10,1456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1456, ctx.r10.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,1460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1460, ctx.r10.u32);
	// stw r9,1452(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1452, ctx.r9.u32);
	// lfs f13,3320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3320);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,3348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3348);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f0,3316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82816c30
	ctx.lr = 0x82677B44;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823339b8
	ctx.lr = 0x82677B50;
	sub_823339B8(ctx, base);
	// bl 0x82333960
	ctx.lr = 0x82677B54;
	sub_82333960(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// lfs f13,3332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3328);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82677B90;
	sub_82333960(ctx, base);
loc_82677B90:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
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
	ctx.lr = 0x82677BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82677bd0
	if (!ctx.cr6.gt) goto loc_82677BD0;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82677ca0
	goto loc_82677CA0;
loc_82677BD0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82677c6c
	if (!ctx.cr6.eq) goto loc_82677C6C;
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
	ctx.lr = 0x82677BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82677c4c
	if (!ctx.cr6.gt) goto loc_82677C4C;
loc_82677C08:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82677c38
	if (!ctx.cr6.eq) goto loc_82677C38;
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
	ctx.lr = 0x82677C30;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82677C38:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82677c08
	if (ctx.cr6.lt) goto loc_82677C08;
loc_82677C4C:
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
	ctx.lr = 0x82677C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82677C6C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82677ca0
	if (!ctx.cr0.eq) goto loc_82677CA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82677ca0
	if (ctx.cr0.eq) goto loc_82677CA0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82677CA0;
	sub_82410060(ctx, base);
loc_82677CA0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677CC0"))) PPC_WEAK_FUNC(sub_82677CC0);
PPC_FUNC_IMPL(__imp__sub_82677CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82677CC8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82677CD8;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82677CE0;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82677e18
	if (ctx.cr0.eq) goto loc_82677E18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x82677D00;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,22324
	ctx.r4.s64 = ctx.r10.s64 + 22324;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82677D20;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82677d40
	if (ctx.cr6.eq) goto loc_82677D40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82677d40
	if (ctx.cr6.eq) goto loc_82677D40;
	// bl 0x82332db8
	ctx.lr = 0x82677D40;
	sub_82332DB8(ctx, base);
loc_82677D40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x82677D4C;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22340
	ctx.r4.s64 = ctx.r11.s64 + 22340;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82677D64;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82677d84
	if (ctx.cr6.eq) goto loc_82677D84;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82677d84
	if (ctx.cr6.eq) goto loc_82677D84;
	// bl 0x82332db8
	ctx.lr = 0x82677D84;
	sub_82332DB8(ctx, base);
loc_82677D84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,326
	ctx.r4.s64 = 326;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677D9C;
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
	ctx.lr = 0x82677DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,326
	ctx.r4.s64 = 326;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82677E18:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677E28"))) PPC_WEAK_FUNC(sub_82677E28);
PPC_FUNC_IMPL(__imp__sub_82677E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82677E30;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x82677E40;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82677E48;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82677f18
	if (ctx.cr0.eq) goto loc_82677F18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r29,2184(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19592
	ctx.r4.s64 = ctx.r11.s64 + 19592;
	// bl 0x82409058
	ctx.lr = 0x82677E64;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,22360
	ctx.r4.s64 = ctx.r10.s64 + 22360;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829e6978
	ctx.lr = 0x82677E80;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82677ea0
	if (ctx.cr6.eq) goto loc_82677EA0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82677ea0
	if (ctx.cr6.eq) goto loc_82677EA0;
	// bl 0x82332db8
	ctx.lr = 0x82677EA0;
	sub_82332DB8(ctx, base);
loc_82677EA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,360
	ctx.r4.s64 = 360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82677F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82677F18:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82677F28"))) PPC_WEAK_FUNC(sub_82677F28);
PPC_FUNC_IMPL(__imp__sub_82677F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82677F30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
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
	ctx.lr = 0x82677F60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82677f7c
	if (!ctx.cr6.gt) goto loc_82677F7C;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x82678050
	goto loc_82678050;
loc_82677F7C:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8267801c
	if (!ctx.cr6.eq) goto loc_8267801C;
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
	ctx.lr = 0x82677FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82677ffc
	if (!ctx.cr6.gt) goto loc_82677FFC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82677FB8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82677fe8
	if (!ctx.cr6.eq) goto loc_82677FE8;
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
	ctx.lr = 0x82677FE0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82677FE8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82677fb8
	if (ctx.cr6.lt) goto loc_82677FB8;
loc_82677FFC:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267801C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8267801C:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82678050
	if (!ctx.cr0.eq) goto loc_82678050;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267803C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82678050
	if (ctx.cr0.eq) goto loc_82678050;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82678050;
	sub_82410060(ctx, base);
loc_82678050:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678070"))) PPC_WEAK_FUNC(sub_82678070);
PPC_FUNC_IMPL(__imp__sub_82678070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82678078;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r11,3292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82678480
	if (!ctx.cr6.eq) goto loc_82678480;
	// stw r26,3292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3292, ctx.r26.u32);
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// bl 0x82333a20
	ctx.lr = 0x826780AC;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826780b8
	if (ctx.cr0.eq) goto loc_826780B8;
	// lwz r27,2184(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2184);
loc_826780B8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r30,r11,19592
	ctx.r30.s64 = ctx.r11.s64 + 19592;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82409058
	ctx.lr = 0x826780CC;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r10,22392
	ctx.r4.s64 = ctx.r10.s64 + 22392;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826780EC;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r31,148(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// beq cr6,0x82678120
	if (ctx.cr6.eq) goto loc_82678120;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678120
	if (ctx.cr6.eq) goto loc_82678120;
	// bl 0x82332db8
	ctx.lr = 0x82678120;
	sub_82332DB8(ctx, base);
loc_82678120:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lfs f0,3316(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3316);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824090e0
	ctx.lr = 0x82678154;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82678198
	if (ctx.cr0.eq) goto loc_82678198;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,168
	ctx.r4.s64 = 168;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82678198:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826781A8;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,3356(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3356);
	// bl 0x829c3740
	ctx.lr = 0x826781B8;
	sub_829C3740(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82409058
	ctx.lr = 0x826781C4;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22408
	ctx.r4.s64 = ctx.r11.s64 + 22408;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826781DC;
	sub_829E6978(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826781fc
	if (ctx.cr6.eq) goto loc_826781FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826781fc
	if (ctx.cr6.eq) goto loc_826781FC;
	// bl 0x82332db8
	ctx.lr = 0x826781FC;
	sub_82332DB8(ctx, base);
loc_826781FC:
	// lfs f0,3336(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3336);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfs f13,3340(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3340);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,3344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3344);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f11,3336(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,3340(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3340);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lfs f9,3344(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3344);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r11,21904
	ctx.r3.s64 = ctx.r11.s64 + 21904;
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r30,r29,3336
	ctx.r30.s64 = ctx.r29.s64 + 3336;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r27,r10,16
	ctx.r27.u64 = ctx.r10.u64 | 16;
	// bl 0x82816528
	ctx.lr = 0x82678278;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8265f390
	ctx.lr = 0x826782B8;
	sub_8265F390(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,800(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r27,r11,-11456
	ctx.r27.s64 = ctx.r11.s64 + -11456;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-13624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -13624);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82333a20
	ctx.lr = 0x826782E8;
	sub_82333A20(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x82331120
	ctx.lr = 0x82678330;
	sub_82331120(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// addi r3,r10,-17408
	ctx.r3.s64 = ctx.r10.s64 + -17408;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r28,r1,200
	ctx.r28.s64 = ctx.r1.s64 + 200;
	// addi r25,r29,620
	ctx.r25.s64 = ctx.r29.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x82678358;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82678390;
	sub_828250B0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x826783c0
	if (ctx.cr0.eq) goto loc_826783C0;
	// bl 0x823f61b8
	ctx.lr = 0x8267839C;
	sub_823F61B8(ctx, base);
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
	ctx.lr = 0x826783B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x826783c4
	if (!ctx.cr0.eq) goto loc_826783C4;
loc_826783C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826783C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678458
	if (ctx.cr6.eq) goto loc_82678458;
	// stw r31,1428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1428, ctx.r31.u32);
	// stw r31,1468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1468, ctx.r31.u32);
	// lfs f12,3324(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3324);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f11,3352(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3352);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stw r31,1448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1448, ctx.r31.u32);
	// fmuls f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r10.u32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r10,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r10.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,1452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1452, ctx.r10.u32);
loc_82678458:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,32552
	ctx.r11.s64 = ctx.r11.s64 + 32552;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x826786f0
	ctx.lr = 0x82678480;
	sub_826786F0(ctx, base);
loc_82678480:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
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

__attribute__((alias("__imp__sub_82678498"))) PPC_WEAK_FUNC(sub_82678498);
PPC_FUNC_IMPL(__imp__sub_82678498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826784A0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82675f00
	ctx.lr = 0x826784B0;
	sub_82675F00(ctx, base);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826784B8;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826785f0
	if (ctx.cr0.eq) goto loc_826785F0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r28,2184(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,19592
	ctx.r29.s64 = ctx.r11.s64 + 19592;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82409058
	ctx.lr = 0x826784D8;
	sub_82409058(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,22436
	ctx.r4.s64 = ctx.r10.s64 + 22436;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826784F8;
	sub_829E6978(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f1,3348(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3348, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82678518
	if (ctx.cr6.eq) goto loc_82678518;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82678518
	if (ctx.cr6.eq) goto loc_82678518;
	// bl 0x82332db8
	ctx.lr = 0x82678518;
	sub_82332DB8(ctx, base);
loc_82678518:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x82678524;
	sub_82409058(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r4,r11,22456
	ctx.r4.s64 = ctx.r11.s64 + 22456;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8267853C;
	sub_829E6978(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stfs f1,3352(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3352, temp.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267855c
	if (ctx.cr6.eq) goto loc_8267855C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267855c
	if (ctx.cr6.eq) goto loc_8267855C;
	// bl 0x82332db8
	ctx.lr = 0x8267855C;
	sub_82332DB8(ctx, base);
loc_8267855C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,344
	ctx.r4.s64 = 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678574;
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
	ctx.lr = 0x82678590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// stfs f0,3316(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3316, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,344
	ctx.r4.s64 = 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826785B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,334
	ctx.r4.s64 = 334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826785CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fadds f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f1.f64));
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826785E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_826785F0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678600"))) PPC_WEAK_FUNC(sub_82678600);
PPC_FUNC_IMPL(__imp__sub_82678600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82678608;
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
	ctx.lr = 0x8267862C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826786c4
	if (!ctx.cr0.eq) goto loc_826786C4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8267864c
	if (!ctx.cr6.eq) goto loc_8267864C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8267864C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823c6730
	ctx.lr = 0x82678654;
	sub_823C6730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82678674;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826786b0
	if (ctx.cr0.eq) goto loc_826786B0;
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
	// b 0x826786b4
	goto loc_826786B4;
loc_826786B0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826786B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826786C0;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826786C4:
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
	ctx.lr = 0x826786E0;
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

__attribute__((alias("__imp__sub_826786F0"))) PPC_WEAK_FUNC(sub_826786F0);
PPC_FUNC_IMPL(__imp__sub_826786F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826786F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x82678710;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82678798
	if (!ctx.cr0.eq) goto loc_82678798;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823c6cd8
	ctx.lr = 0x82678720;
	sub_823C6CD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82678740;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82678784
	if (ctx.cr0.eq) goto loc_82678784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// b 0x82678788
	goto loc_82678788;
loc_82678784:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82678788:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82678794;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82678798:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826787B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787C0"))) PPC_WEAK_FUNC(sub_826787C0);
PPC_FUNC_IMPL(__imp__sub_826787C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826756d8
	sub_826756D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787C8"))) PPC_WEAK_FUNC(sub_826787C8);
PPC_FUNC_IMPL(__imp__sub_826787C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82675448
	sub_82675448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787D0"))) PPC_WEAK_FUNC(sub_826787D0);
PPC_FUNC_IMPL(__imp__sub_826787D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674ce8
	sub_82674CE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787D8"))) PPC_WEAK_FUNC(sub_826787D8);
PPC_FUNC_IMPL(__imp__sub_826787D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674bd8
	sub_82674BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787E0"))) PPC_WEAK_FUNC(sub_826787E0);
PPC_FUNC_IMPL(__imp__sub_826787E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674a88
	sub_82674A88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787E8"))) PPC_WEAK_FUNC(sub_826787E8);
PPC_FUNC_IMPL(__imp__sub_826787E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674940
	sub_82674940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787F0"))) PPC_WEAK_FUNC(sub_826787F0);
PPC_FUNC_IMPL(__imp__sub_826787F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82675068
	sub_82675068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826787F8"))) PPC_WEAK_FUNC(sub_826787F8);
PPC_FUNC_IMPL(__imp__sub_826787F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826751b8
	sub_826751B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678800"))) PPC_WEAK_FUNC(sub_82678800);
PPC_FUNC_IMPL(__imp__sub_82678800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82675300
	sub_82675300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678808"))) PPC_WEAK_FUNC(sub_82678808);
PPC_FUNC_IMPL(__imp__sub_82678808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82674f10
	sub_82674F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678810"))) PPC_WEAK_FUNC(sub_82678810);
PPC_FUNC_IMPL(__imp__sub_82678810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82675590
	sub_82675590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678818"))) PPC_WEAK_FUNC(sub_82678818);
PPC_FUNC_IMPL(__imp__sub_82678818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826746e8
	sub_826746E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678820"))) PPC_WEAK_FUNC(sub_82678820);
PPC_FUNC_IMPL(__imp__sub_82678820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678870
	ctx.lr = 0x82678840;
	sub_82678870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82678854
	if (ctx.cr6.eq) goto loc_82678854;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82678854;
	sub_82333B08(ctx, base);
loc_82678854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678870"))) PPC_WEAK_FUNC(sub_82678870);
PPC_FUNC_IMPL(__imp__sub_82678870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,24584
	ctx.r31.s64 = ctx.r11.s64 + 24584;
	// lwz r11,-19408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19408);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826788b8
	if (!ctx.cr0.eq) goto loc_826788B8;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-22096
	ctx.r9.s64 = ctx.r9.s64 + -22096;
	// stw r11,-19408(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19408, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// bl 0x82a4c758
	ctx.lr = 0x826788B8;
	sub_82A4C758(ctx, base);
loc_826788B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826788D0"))) PPC_WEAK_FUNC(sub_826788D0);
PPC_FUNC_IMPL(__imp__sub_826788D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82678910
	if (!ctx.cr0.eq) goto loc_82678910;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r11,24580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24580, ctx.r11.u32);
	// addi r3,r9,-22224
	ctx.r3.s64 = ctx.r9.s64 + -22224;
	// bl 0x82816528
	ctx.lr = 0x82678908;
	sub_82816528(ctx, base);
	// stw r3,24576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24576, ctx.r3.u32);
	// b 0x82678914
	goto loc_82678914;
loc_82678910:
	// lwz r3,24576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24576);
loc_82678914:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678928"))) PPC_WEAK_FUNC(sub_82678928);
PPC_FUNC_IMPL(__imp__sub_82678928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82678870
	ctx.lr = 0x82678948;
	sub_82678870(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8267895C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678978"))) PPC_WEAK_FUNC(sub_82678978);
PPC_FUNC_IMPL(__imp__sub_82678978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x826789b0
	if (ctx.cr6.eq) goto loc_826789B0;
	// bl 0x82678870
	ctx.lr = 0x826789A0;
	sub_82678870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826789b0
	if (!ctx.cr6.eq) goto loc_826789B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826789bc
	goto loc_826789BC;
loc_826789B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x826789BC;
	sub_82333C70(ctx, base);
loc_826789BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826789D8"))) PPC_WEAK_FUNC(sub_826789D8);
PPC_FUNC_IMPL(__imp__sub_826789D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82678870
	sub_82678870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826789E0"))) PPC_WEAK_FUNC(sub_826789E0);
PPC_FUNC_IMPL(__imp__sub_826789E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x826789FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82678a5c
	if (ctx.cr0.eq) goto loc_82678A5C;
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
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-22176
	ctx.r9.s64 = ctx.r9.s64 + -22176;
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
	// b 0x82678a60
	goto loc_82678A60;
loc_82678A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678A60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678A78"))) PPC_WEAK_FUNC(sub_82678A78);
PPC_FUNC_IMPL(__imp__sub_82678A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-22224
	ctx.r3.s64 = ctx.r11.s64 + -22224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678A88"))) PPC_WEAK_FUNC(sub_82678A88);
PPC_FUNC_IMPL(__imp__sub_82678A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,-22076
	ctx.r3.s64 = ctx.r11.s64 + -22076;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678A98"))) PPC_WEAK_FUNC(sub_82678A98);
PPC_FUNC_IMPL(__imp__sub_82678A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82678ad0
	if (ctx.cr6.eq) goto loc_82678AD0;
	// bl 0x82678f28
	ctx.lr = 0x82678AC0;
	sub_82678F28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82678ad0
	if (!ctx.cr6.eq) goto loc_82678AD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82678adc
	goto loc_82678ADC;
loc_82678AD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x82678ADC;
	sub_8234E2D8(ctx, base);
loc_82678ADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678AF8"))) PPC_WEAK_FUNC(sub_82678AF8);
PPC_FUNC_IMPL(__imp__sub_82678AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3280
	ctx.r3.s64 = 3280;
	// bl 0x82833108
	ctx.lr = 0x82678B18;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82678b58
	if (ctx.cr0.eq) goto loc_82678B58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82678B2C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// addi r10,r10,-20388
	ctx.r10.s64 = ctx.r10.s64 + -20388;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82678b5c
	goto loc_82678B5C;
loc_82678B58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678B78"))) PPC_WEAK_FUNC(sub_82678B78);
PPC_FUNC_IMPL(__imp__sub_82678B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82678f28
	ctx.lr = 0x82678B98;
	sub_82678F28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82678ba8
	if (!ctx.cr6.eq) goto loc_82678BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82678bc0
	goto loc_82678BC0;
loc_82678BA8:
	// bl 0x823323b8
	ctx.lr = 0x82678BAC;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82678bc0
	if (ctx.cr6.eq) goto loc_82678BC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82678BC0;
	sub_8234D0A0(ctx, base);
loc_82678BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678BD8"))) PPC_WEAK_FUNC(sub_82678BD8);
PPC_FUNC_IMPL(__imp__sub_82678BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8265c840
	ctx.lr = 0x82678BF0;
	sub_8265C840(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,15873
	ctx.r11.s64 = 1040252928;
	// addi r10,r10,-20388
	ctx.r10.s64 = ctx.r10.s64 + -20388;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// ori r11,r11,46579
	ctx.r11.u64 = ctx.r11.u64 | 46579;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678C38"))) PPC_WEAK_FUNC(sub_82678C38);
PPC_FUNC_IMPL(__imp__sub_82678C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8265cda8
	ctx.lr = 0x82678C54;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82678c74
	if (ctx.cr0.eq) goto loc_82678C74;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82678c74
	if (ctx.cr6.eq) goto loc_82678C74;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82678c78
	goto loc_82678C78;
loc_82678C74:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82678C78:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// bl 0x82816528
	ctx.lr = 0x82678C84;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x82678C94;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82678CA4;
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

__attribute__((alias("__imp__sub_82678CC0"))) PPC_WEAK_FUNC(sub_82678CC0);
PPC_FUNC_IMPL(__imp__sub_82678CC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82660ca8
	sub_82660CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82678CC8"))) PPC_WEAK_FUNC(sub_82678CC8);
PPC_FUNC_IMPL(__imp__sub_82678CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678d00
	if (ctx.cr6.eq) goto loc_82678D00;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82678d04
	goto loc_82678D04;
loc_82678D00:
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82678D04:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82678d50
	if (ctx.cr6.eq) goto loc_82678D50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678D20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82678d50
	if (ctx.cr0.eq) goto loc_82678D50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82678d54
	goto loc_82678D54;
loc_82678D50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678D54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678D68"))) PPC_WEAK_FUNC(sub_82678D68);
PPC_FUNC_IMPL(__imp__sub_82678D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82661370
	ctx.lr = 0x82678D80;
	sub_82661370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82678dbc
	if (ctx.cr0.eq) goto loc_82678DBC;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678da0
	if (ctx.cr6.eq) goto loc_82678DA0;
	// lwz r3,3284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3284);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82678da8
	if (!ctx.cr6.eq) goto loc_82678DA8;
loc_82678DA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82678dc0
	goto loc_82678DC0;
loc_82678DA8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82678dc0
	goto loc_82678DC0;
loc_82678DBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678DC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678DD8"))) PPC_WEAK_FUNC(sub_82678DD8);
PPC_FUNC_IMPL(__imp__sub_82678DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x82678E04;
	sub_82816528(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// bl 0x829e3fd0
	ctx.lr = 0x82678E2C;
	sub_829E3FD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678E48"))) PPC_WEAK_FUNC(sub_82678E48);
PPC_FUNC_IMPL(__imp__sub_82678E48) {
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
	ctx.lr = 0x82678E5C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82678e6c
	if (ctx.cr0.eq) goto loc_82678E6C;
	// bl 0x82678bd8
	ctx.lr = 0x82678E68;
	sub_82678BD8(ctx, base);
	// b 0x82678e70
	goto loc_82678E70;
loc_82678E6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82678E70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678E80"))) PPC_WEAK_FUNC(sub_82678E80);
PPC_FUNC_IMPL(__imp__sub_82678E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,24572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82678ec0
	if (!ctx.cr0.eq) goto loc_82678EC0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// stw r11,24572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24572, ctx.r11.u32);
	// addi r3,r9,-22076
	ctx.r3.s64 = ctx.r9.s64 + -22076;
	// bl 0x82816528
	ctx.lr = 0x82678EB8;
	sub_82816528(ctx, base);
	// stw r3,24568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24568, ctx.r3.u32);
	// b 0x82678ec4
	goto loc_82678EC4;
loc_82678EC0:
	// lwz r3,24568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24568);
loc_82678EC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82678ED8"))) PPC_WEAK_FUNC(sub_82678ED8);
PPC_FUNC_IMPL(__imp__sub_82678ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// bl 0x82678f28
	ctx.lr = 0x82678EF8;
	sub_82678F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82678F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

