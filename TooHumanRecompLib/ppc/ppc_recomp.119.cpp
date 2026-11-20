#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827C2BC0"))) PPC_WEAK_FUNC(sub_827C2BC0);
PPC_FUNC_IMPL(__imp__sub_827C2BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// srawi r10,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 31;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// xor r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 ^ ctx.r10.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827c2c08
	if (!ctx.cr6.lt) goto loc_827C2C08;
loc_827C2C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827c2c44
	goto loc_827C2C44;
loc_827C2C08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801ab8
	ctx.lr = 0x827C2C14;
	sub_82801AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c2c2c
	if (!ctx.cr0.eq) goto loc_827C2C2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c2728
	ctx.lr = 0x827C2C24;
	sub_827C2728(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c2c00
	if (ctx.cr0.eq) goto loc_827C2C00;
loc_827C2C2C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827C2C38;
	sub_82801CB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c2c00
	if (ctx.cr0.eq) goto loc_827C2C00;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_827C2C44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C2C60"))) PPC_WEAK_FUNC(sub_827C2C60);
PPC_FUNC_IMPL(__imp__sub_827C2C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C2C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// bne cr6,0x827c2c9c
	if (!ctx.cr6.eq) goto loc_827C2C9C;
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
	// b 0x827c2eb8
	goto loc_827C2EB8;
loc_827C2C9C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C2CA8;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2CB4;
	sub_82801F80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-7076
	ctx.r29.s64 = ctx.r11.s64 + -7076;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C2CC8;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2CD4;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c2d08
	if (ctx.cr0.eq) goto loc_827C2D08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c2d08
	if (!ctx.cr6.eq) goto loc_827C2D08;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C2CFC;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2D08;
	sub_82801F80(ctx, base);
loc_827C2D08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C2D30;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c2de8
	if (ctx.cr0.eq) goto loc_827C2DE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c2de8
	if (!ctx.cr6.eq) goto loc_827C2DE8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828025c0
	ctx.lr = 0x827C2D6C;
	sub_828025C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
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
	// bl 0x828019b8
	ctx.lr = 0x827C2DA4;
	sub_828019B8(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C2DB0;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802238
	ctx.lr = 0x827C2DE4;
	sub_82802238(ctx, base);
	// b 0x827c2eac
	goto loc_827C2EAC;
loc_827C2DE8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C2DF4;
	sub_828019B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r10,-7388
	ctx.r4.s64 = ctx.r10.s64 + -7388;
	// bl 0x82801d78
	ctx.lr = 0x827C2E10;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2E1C;
	sub_82801F80(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C2E28;
	sub_82802090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2E30;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c2e74
	if (ctx.cr0.eq) goto loc_827C2E74;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c2e74
	if (!ctx.cr6.eq) goto loc_827C2E74;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C2E54;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C2E60;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827C2E6C;
	sub_82801B58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827c2ea0
	if (ctx.cr6.eq) goto loc_827C2EA0;
loc_827C2E74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-5
	ctx.r4.s64 = -5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802238
	ctx.lr = 0x827C2EA0;
	sub_82802238(ctx, base);
loc_827C2EA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C2EAC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C2EB8;
	sub_82801960(ctx, base);
loc_827C2EB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C2EC0"))) PPC_WEAK_FUNC(sub_827C2EC0);
PPC_FUNC_IMPL(__imp__sub_827C2EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c2f00
	if (ctx.cr0.eq) goto loc_827C2F00;
	// lwa r11,16(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 16));
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_827C2F00:
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x827c2f50
	if (ctx.cr6.eq) goto loc_827C2F50;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,24
	ctx.r12.s64 = 24;
	// stfiwx f0,r3,r12
	PPC_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f0.u32);
loc_827C2F50:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// bge cr6,0x827c2f6c
	if (!ctx.cr6.lt) goto loc_827C2F6C;
	// stb r9,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r9.u8);
	// b 0x827c3068
	goto loc_827C3068;
loc_827C2F6C:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827c2f84
	if (ctx.cr6.eq) goto loc_827C2F84;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827c2f88
	if (!ctx.cr6.eq) goto loc_827C2F88;
loc_827C2F84:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827C2F88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// beq 0x827c2fac
	if (ctx.cr0.eq) goto loc_827C2FAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r8,r11
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827c2fac
	if (!ctx.cr6.gt) goto loc_827C2FAC;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r9,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r9.u8);
loc_827C2FAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x827c2fdc
	if (!ctx.cr0.eq) goto loc_827C2FDC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827c2fdc
	if (ctx.cr6.eq) goto loc_827C2FDC;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x827c303c
	if (ctx.cr6.eq) goto loc_827C303C;
loc_827C2FDC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827c3044
	if (ctx.cr6.eq) goto loc_827C3044;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// twllei r11,0
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// twlgei r9,-1
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x827c3044
	if (ctx.cr6.lt) goto loc_827C3044;
	// divw r8,r10,r11
	ctx.r8.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twllei r11,0
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// twlgei r9,-1
loc_827C303C:
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_827C3044:
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// twllei r11,0
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// twlgei r11,-1
loc_827C3068:
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3070"))) PPC_WEAK_FUNC(sub_827C3070);
PPC_FUNC_IMPL(__imp__sub_827C3070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C3078;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-7388
	ctx.r4.s64 = ctx.r11.s64 + -7388;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3094;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C30A0;
	sub_82801F80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C30AC;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C30B8;
	sub_82801F80(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C30C4;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c312c
	if (ctx.cr0.eq) goto loc_827C312C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c312c
	if (!ctx.cr6.eq) goto loc_827C312C;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C30E8;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C30F4;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3100;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C312C;
	sub_82802168(ctx, base);
loc_827C312C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3138;
	sub_82801D78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3160;
	sub_82802168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C316C;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3178;
	sub_82801F80(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3184;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c3200
	if (ctx.cr0.eq) goto loc_827C3200;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x827c3200
	if (!ctx.cr6.eq) goto loc_827C3200;
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
	// b 0x827c31ec
	goto loc_827C31EC;
loc_827C31B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828019b8
	ctx.lr = 0x827C31E0;
	sub_828019B8(ctx, base);
	// li r4,-5
	ctx.r4.s64 = -5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C31EC;
	sub_82802168(ctx, base);
loc_827C31EC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828024a8
	ctx.lr = 0x827C31F8;
	sub_828024A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c31b4
	if (!ctx.cr0.eq) goto loc_827C31B4;
loc_827C3200:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3218"))) PPC_WEAK_FUNC(sub_827C3218);
PPC_FUNC_IMPL(__imp__sub_827C3218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r11,-7076
	ctx.r30.s64 = ctx.r11.s64 + -7076;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c3250
	if (ctx.cr0.eq) goto loc_827C3250;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827c326c
	if (ctx.cr6.eq) goto loc_827C326C;
loc_827C3250:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C325C;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3268;
	sub_82801F80(ctx, base);
	// b 0x827c3280
	goto loc_827C3280;
loc_827C326C:
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
loc_827C3280:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c3298
	if (ctx.cr0.eq) goto loc_827C3298;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827c32b4
	if (ctx.cr6.eq) goto loc_827C32B4;
loc_827C3298:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C32A4;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C32B0;
	sub_828019B8(ctx, base);
	// b 0x827c3314
	goto loc_827C3314;
loc_827C32B4:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C32C4;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C32CC;
	sub_82802018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C32D4;
	sub_82802018(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-7064
	ctx.r4.s64 = ctx.r11.s64 + -7064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C32E8;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-7056
	ctx.r4.s64 = ctx.r11.s64 + -7056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C32FC;
	sub_82801D10(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3308;
	sub_82802168(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827C3314;
	sub_82802238(ctx, base);
loc_827C3314:
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3320;
	sub_82802168(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3338"))) PPC_WEAK_FUNC(sub_827C3338);
PPC_FUNC_IMPL(__imp__sub_827C3338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82801d78
	ctx.lr = 0x827C3358;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3364;
	sub_82801F80(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c3380
	if (ctx.cr6.eq) goto loc_827C3380;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c3380
	if (ctx.cr6.eq) goto loc_827C3380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x827c33a8
	goto loc_827C33A8;
loc_827C3380:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C338C;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c33a0
	if (ctx.cr0.eq) goto loc_827C33A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x827c33d8
	goto loc_827C33D8;
loc_827C33A0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-7052
	ctx.r4.s64 = ctx.r11.s64 + -7052;
loc_827C33A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C33B0;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C33BC;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3218
	ctx.lr = 0x827C33C4;
	sub_827C3218(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827C33D0;
	sub_82802238(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
loc_827C33D8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C33F8"))) PPC_WEAK_FUNC(sub_827C33F8);
PPC_FUNC_IMPL(__imp__sub_827C33F8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// bl 0x827c23d0
	ctx.lr = 0x827C3418;
	sub_827C23D0(ctx, base);
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

__attribute__((alias("__imp__sub_827C3430"))) PPC_WEAK_FUNC(sub_827C3430);
PPC_FUNC_IMPL(__imp__sub_827C3430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C3438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82801ab8
	ctx.lr = 0x827C344C;
	sub_82801AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c3514
	if (ctx.cr0.eq) goto loc_827C3514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827C345C;
	sub_82801CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-7032
	ctx.r4.s64 = ctx.r10.s64 + -7032;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801d78
	ctx.lr = 0x827C3474;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3480;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C34A8;
	sub_82801F80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C34B4;
	sub_82802090(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r3,r9,-8
	ctx.xer.ca = ctx.r9.u32 > 7;
	ctx.r3.s64 = ctx.r9.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r4,r9,-16
	ctx.r4.s64 = ctx.r9.s64 + -16;
	// beq 0x827c34d4
	if (ctx.cr0.eq) goto loc_827C34D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c34d4
	if (ctx.cr6.eq) goto loc_827C34D4;
	// bl 0x82807b30
	ctx.lr = 0x827C34D0;
	sub_82807B30(ctx, base);
	// b 0x827c34d8
	goto loc_827C34D8;
loc_827C34D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827C34D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827c3514
	if (ctx.cr6.eq) goto loc_827C3514;
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// li r4,-5
	ctx.r4.s64 = -5;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3510;
	sub_82802168(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_827C3514:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3548"))) PPC_WEAK_FUNC(sub_827C3548);
PPC_FUNC_IMPL(__imp__sub_827C3548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82802090
	ctx.lr = 0x827C3568;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c3580
	if (ctx.cr0.eq) goto loc_827C3580;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c2bc0
	ctx.lr = 0x827C357C;
	sub_827C2BC0(ctx, base);
	// b 0x827c35ac
	goto loc_827C35AC;
loc_827C3580:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x827c35a0
	if (!ctx.cr6.lt) goto loc_827C35A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827c35b0
	goto loc_827C35B0;
loc_827C35A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827C35AC;
	sub_82801CB8(ctx, base);
loc_827C35AC:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827C35B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x827c35d0
	if (!ctx.cr6.lt) goto loc_827C35D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827c35e0
	goto loc_827C35E0;
loc_827C35D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C35DC;
	sub_82801BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_827C35E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c3600
	if (ctx.cr6.eq) goto loc_827C3600;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c3600
	if (ctx.cr6.eq) goto loc_827C3600;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c2c60
	ctx.lr = 0x827C35FC;
	sub_827C2C60(ctx, base);
	// b 0x827c3618
	goto loc_827C3618;
loc_827C3600:
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
loc_827C3618:
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

__attribute__((alias("__imp__sub_827C3638"))) PPC_WEAK_FUNC(sub_827C3638);
PPC_FUNC_IMPL(__imp__sub_827C3638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-7116
	ctx.r4.s64 = ctx.r11.s64 + -7116;
	// bl 0x82801d78
	ctx.lr = 0x827C3658;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3684;
	sub_82802168(ctx, base);
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

__attribute__((alias("__imp__sub_827C36A0"))) PPC_WEAK_FUNC(sub_827C36A0);
PPC_FUNC_IMPL(__imp__sub_827C36A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C36A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r11,-7020
	ctx.r30.s64 = ctx.r11.s64 + -7020;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x82801d78
	ctx.lr = 0x827C36D0;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C36DC;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c36f4
	if (ctx.cr0.eq) goto loc_827C36F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827c3924
	if (ctx.cr6.eq) goto loc_827C3924;
loc_827C36F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3700;
	sub_82801D78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3728;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7004
	ctx.r4.s64 = ctx.r11.s64 + -7004;
	// bl 0x82801d78
	ctx.lr = 0x827C3738;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3740;
	sub_82802018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3748;
	sub_82802018(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r30,r11,-7064
	ctx.r30.s64 = ctx.r11.s64 + -7064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C3760;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-6992
	ctx.r4.s64 = ctx.r11.s64 + -6992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C3774;
	sub_82801D10(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3780;
	sub_82802168(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827C378C;
	sub_82802238(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3798;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7076
	ctx.r4.s64 = ctx.r11.s64 + -7076;
	// bl 0x82801d78
	ctx.lr = 0x827C37A8;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C37B0;
	sub_82802018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C37B8;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C37C8;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-7056
	ctx.r4.s64 = ctx.r11.s64 + -7056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C37DC;
	sub_82801D10(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C37E8;
	sub_82802168(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827C37F4;
	sub_82802238(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3800;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7388
	ctx.r4.s64 = ctx.r11.s64 + -7388;
	// bl 0x82801d78
	ctx.lr = 0x827C3810;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3818;
	sub_82802018(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3824;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7032
	ctx.r4.s64 = ctx.r11.s64 + -7032;
	// bl 0x82801d78
	ctx.lr = 0x827C3834;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C383C;
	sub_82802018(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3848;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-7052
	ctx.r4.s64 = ctx.r11.s64 + -7052;
	// bl 0x827c8830
	ctx.lr = 0x827C3858;
	sub_827C8830(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c3868
	if (ctx.cr0.eq) goto loc_827C3868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8350
	ctx.lr = 0x827C3868;
	sub_827C8350(ctx, base);
loc_827C3868:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r30,r10,-6988
	ctx.r30.s64 = ctx.r10.s64 + -6988;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
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
	// bl 0x827c3b60
	ctx.lr = 0x827C38C4;
	sub_827C3B60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3af8
	ctx.lr = 0x827C38D0;
	sub_827C3AF8(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r5,r11,13304
	ctx.r5.s64 = ctx.r11.s64 + 13304;
	// addi r4,r10,26488
	ctx.r4.s64 = ctx.r10.s64 + 26488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3db8
	ctx.lr = 0x827C38E8;
	sub_827C3DB8(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,13640
	ctx.r5.s64 = ctx.r11.s64 + 13640;
	// addi r4,r10,-6980
	ctx.r4.s64 = ctx.r10.s64 + -6980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3db8
	ctx.lr = 0x827C3900;
	sub_827C3DB8(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,13880
	ctx.r5.s64 = ctx.r11.s64 + 13880;
	// addi r4,r10,-6972
	ctx.r4.s64 = ctx.r10.s64 + -6972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3db8
	ctx.lr = 0x827C3918;
	sub_827C3DB8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C3924:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C3930;
	sub_82801900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3938"))) PPC_WEAK_FUNC(sub_827C3938);
PPC_FUNC_IMPL(__imp__sub_827C3938) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c2bc0
	ctx.lr = 0x827C3950;
	sub_827C2BC0(ctx, base);
	// bl 0x82a4fc60
	ctx.lr = 0x827C3954;
	sub_82A4FC60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3968"))) PPC_WEAK_FUNC(sub_827C3968);
PPC_FUNC_IMPL(__imp__sub_827C3968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C3970;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x82801cb8
	ctx.lr = 0x827C3984;
	sub_82801CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-7032
	ctx.r4.s64 = ctx.r10.s64 + -7032;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801d78
	ctx.lr = 0x827C399C;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827C39A8;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C39D0;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c39e8
	if (ctx.cr0.eq) goto loc_827C39E8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827c39f0
	if (ctx.cr6.eq) goto loc_827C39F0;
loc_827C39E8:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x827c3a1c
	goto loc_827C3A1C;
loc_827C39F0:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802090
	ctx.lr = 0x827C3A10;
	sub_82802090(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3A1C;
	sub_82802168(ctx, base);
loc_827C3A1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3A38"))) PPC_WEAK_FUNC(sub_827C3A38);
PPC_FUNC_IMPL(__imp__sub_827C3A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C3A40;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7124
	ctx.r4.s64 = ctx.r11.s64 + -7124;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82a4ea80
	ctx.lr = 0x827C3A60;
	sub_82A4EA80(ctx, base);
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,87
	ctx.r3.s64 = ctx.r1.s64 + 87;
	// bl 0x82a4efb0
	ctx.lr = 0x827C3A70;
	sub_82A4EFB0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4e980
	ctx.lr = 0x827C3A80;
	sub_82A4E980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8830
	ctx.lr = 0x827C3A8C;
	sub_827C8830(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827c3a9c
	if (ctx.cr0.eq) goto loc_827C3A9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8350
	ctx.lr = 0x827C3A9C;
	sub_827C8350(ctx, base);
loc_827C3A9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827c3af0
	if (ctx.cr6.eq) goto loc_827C3AF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8830
	ctx.lr = 0x827C3ABC;
	sub_827C8830(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827c3acc
	if (ctx.cr0.eq) goto loc_827C3ACC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8350
	ctx.lr = 0x827C3ACC;
	sub_827C8350(ctx, base);
loc_827C3ACC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827c3af0
	if (ctx.cr6.eq) goto loc_827C3AF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3070
	ctx.lr = 0x827C3AF0;
	sub_827C3070(ctx, base);
loc_827C3AF0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3AF8"))) PPC_WEAK_FUNC(sub_827C3AF8);
PPC_FUNC_IMPL(__imp__sub_827C3AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c3b28
	if (ctx.cr6.eq) goto loc_827C3B28;
	// bl 0x82801d78
	ctx.lr = 0x827C3B18;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3B24;
	sub_82801F80(ctx, base);
	// b 0x827c3b48
	goto loc_827C3B48;
loc_827C3B28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
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
loc_827C3B48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3B60"))) PPC_WEAK_FUNC(sub_827C3B60);
PPC_FUNC_IMPL(__imp__sub_827C3B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// beq cr6,0x827c3bf4
	if (ctx.cr6.eq) goto loc_827C3BF4;
	// bl 0x82801d78
	ctx.lr = 0x827C3B88;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3B94;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c3bac
	if (ctx.cr0.eq) goto loc_827C3BAC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827c3c14
	if (ctx.cr6.eq) goto loc_827C3C14;
loc_827C3BAC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3BB8;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3BC4;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3BF0;
	sub_82802168(ctx, base);
	// b 0x827c3c14
	goto loc_827C3C14;
loc_827C3BF4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C3C14:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3C38"))) PPC_WEAK_FUNC(sub_827C3C38);
PPC_FUNC_IMPL(__imp__sub_827C3C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827C3C40;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,-7124
	ctx.r26.s64 = ctx.r11.s64 + -7124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827C3C70;
	sub_82A4EA80(ctx, base);
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,87
	ctx.r3.s64 = ctx.r1.s64 + 87;
	// bl 0x82a4efb0
	ctx.lr = 0x827C3C80;
	sub_82A4EFB0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82a4ea80
	ctx.lr = 0x827C3C90;
	sub_82A4EA80(ctx, base);
	// li r5,121
	ctx.r5.s64 = 121;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,215
	ctx.r3.s64 = ctx.r1.s64 + 215;
	// bl 0x82a4efb0
	ctx.lr = 0x827C3CA0;
	sub_82A4EFB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4e980
	ctx.lr = 0x827C3CB0;
	sub_82A4E980(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a4e980
	ctx.lr = 0x827C3CC0;
	sub_82A4E980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c3338
	ctx.lr = 0x827C3CD0;
	sub_827C3338(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827c3338
	ctx.lr = 0x827C3CE0;
	sub_827C3338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827c3070
	ctx.lr = 0x827C3CF0;
	sub_827C3070(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x827c3070
	ctx.lr = 0x827C3D00;
	sub_827C3070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3D0C;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3D18;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827C3D24;
	sub_82801F80(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-6964
	ctx.r30.s64 = ctx.r11.s64 + -6964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3D38;
	sub_82801D78(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82801e40
	ctx.lr = 0x827C3D48;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C3D54;
	sub_82802168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C3D60;
	sub_82802168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82801d78
	ctx.lr = 0x827C3D6C;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827C3D78;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3D84;
	sub_82801D78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C3D94;
	sub_82801E40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3DA0;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3DB8"))) PPC_WEAK_FUNC(sub_827C3DB8);
PPC_FUNC_IMPL(__imp__sub_827C3DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82801d78
	ctx.lr = 0x827C3DD8;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C3DE8;
	sub_82801E40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3DF4;
	sub_82802168(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3E10"))) PPC_WEAK_FUNC(sub_827C3E10);
PPC_FUNC_IMPL(__imp__sub_827C3E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C3E18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r11,-6952
	ctx.r30.s64 = ctx.r11.s64 + -6952;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3E3C;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3E48;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c3e60
	if (ctx.cr0.eq) goto loc_827C3E60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827c3ea4
	if (ctx.cr6.eq) goto loc_827C3EA4;
loc_827C3E60:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3E6C;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3E78;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3EA4;
	sub_82802168(ctx, base);
loc_827C3EA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3EB0;
	sub_82801D78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C3EC0;
	sub_82801E40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3ECC;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827c3f90
	if (ctx.cr6.eq) goto loc_827C3F90;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-6944
	ctx.r30.s64 = ctx.r11.s64 + -6944;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3EF4;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C3F00;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c3f18
	if (ctx.cr0.eq) goto loc_827C3F18;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827c3f5c
	if (ctx.cr6.eq) goto loc_827C3F5C;
loc_827C3F18:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C3F24;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3F30;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C3F5C;
	sub_82802168(ctx, base);
loc_827C3F5C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C3F68;
	sub_82801D78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C3F78;
	sub_82801E40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C3F84;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C3F90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C3F98"))) PPC_WEAK_FUNC(sub_827C3F98);
PPC_FUNC_IMPL(__imp__sub_827C3F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-20560
	ctx.r3.s64 = ctx.r11.s64 + -20560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C3FA8"))) PPC_WEAK_FUNC(sub_827C3FA8);
PPC_FUNC_IMPL(__imp__sub_827C3FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8277f180
	ctx.lr = 0x827C3FC0;
	sub_8277F180(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r8,r11,10980
	ctx.r8.s64 = ctx.r11.s64 + 10980;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-6512
	ctx.r10.s64 = ctx.r10.s64 + -6512;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// addi r9,r9,-6504
	ctx.r9.s64 = ctx.r9.s64 + -6504;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C4020"))) PPC_WEAK_FUNC(sub_827C4020);
PPC_FUNC_IMPL(__imp__sub_827C4020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,-6512
	ctx.r11.s64 = ctx.r11.s64 + -6512;
	// addi r10,r10,-6504
	ctx.r10.s64 = ctx.r10.s64 + -6504;
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x827c4068
	if (ctx.cr6.eq) goto loc_827C4068;
	// bl 0x82784f18
	ctx.lr = 0x827C405C;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C4068;
	sub_82784A40(ctx, base);
loc_827C4068:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c4084
	if (ctx.cr6.eq) goto loc_827C4084;
	// bl 0x82784f18
	ctx.lr = 0x827C4078;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C4084;
	sub_82784A40(ctx, base);
loc_827C4084:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c40a0
	if (ctx.cr6.eq) goto loc_827C40A0;
	// bl 0x82784f18
	ctx.lr = 0x827C4094;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C40A0;
	sub_82784A40(ctx, base);
loc_827C40A0:
	// lwz r30,68(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c40bc
	if (ctx.cr6.eq) goto loc_827C40BC;
	// bl 0x82784f18
	ctx.lr = 0x827C40B0;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C40BC;
	sub_82784A40(ctx, base);
loc_827C40BC:
	// lwz r30,72(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c40d8
	if (ctx.cr6.eq) goto loc_827C40D8;
	// bl 0x82784f18
	ctx.lr = 0x827C40CC;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C40D8;
	sub_82784A40(ctx, base);
loc_827C40D8:
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c40f4
	if (ctx.cr6.eq) goto loc_827C40F4;
	// bl 0x82784f18
	ctx.lr = 0x827C40E8;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82784a40
	ctx.lr = 0x827C40F4;
	sub_82784A40(ctx, base);
loc_827C40F4:
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c4110
	if (ctx.cr6.eq) goto loc_827C4110;
	// bl 0x82784f18
	ctx.lr = 0x827C4104;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82784a40
	ctx.lr = 0x827C4110;
	sub_82784A40(ctx, base);
loc_827C4110:
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c412c
	if (ctx.cr6.eq) goto loc_827C412C;
	// bl 0x82784f18
	ctx.lr = 0x827C4120;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82784a40
	ctx.lr = 0x827C412C;
	sub_82784A40(ctx, base);
loc_827C412C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8277f1f0
	ctx.lr = 0x827C4140;
	sub_8277F1F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4148"))) PPC_WEAK_FUNC(sub_827C4148);
PPC_FUNC_IMPL(__imp__sub_827C4148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C4150;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4168;
	sub_82781648(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4170;
	sub_8277DB50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827c0e48
	ctx.lr = 0x827C417C;
	sub_827C0E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781648
	ctx.lr = 0x827C4184;
	sub_82781648(ctx, base);
	// bl 0x8277e5c8
	ctx.lr = 0x827C4188;
	sub_8277E5C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279e340
	ctx.lr = 0x827C419C;
	sub_8279E340(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c41f0
	if (ctx.cr0.eq) goto loc_827C41F0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a45878
	ctx.lr = 0x827C41C0;
	sub_82A45878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c1240
	ctx.lr = 0x827C41CC;
	sub_827C1240(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a45878
	ctx.lr = 0x827C41E4;
	sub_82A45878(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c1240
	ctx.lr = 0x827C41F0;
	sub_827C1240(ctx, base);
loc_827C41F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C41F8"))) PPC_WEAK_FUNC(sub_827C41F8);
PPC_FUNC_IMPL(__imp__sub_827C41F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C4200;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4218;
	sub_82781648(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4220;
	sub_8277DB50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827c0e48
	ctx.lr = 0x827C422C;
	sub_827C0E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781648
	ctx.lr = 0x827C4234;
	sub_82781648(ctx, base);
	// bl 0x8277e5c8
	ctx.lr = 0x827C4238;
	sub_8277E5C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279e340
	ctx.lr = 0x827C424C;
	sub_8279E340(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c42a0
	if (ctx.cr0.eq) goto loc_827C42A0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a45878
	ctx.lr = 0x827C4270;
	sub_82A45878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c1240
	ctx.lr = 0x827C427C;
	sub_827C1240(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a45878
	ctx.lr = 0x827C4294;
	sub_82A45878(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c1240
	ctx.lr = 0x827C42A0;
	sub_827C1240(ctx, base);
loc_827C42A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C42A8"))) PPC_WEAK_FUNC(sub_827C42A8);
PPC_FUNC_IMPL(__imp__sub_827C42A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C42B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c43e8
	if (!ctx.cr6.eq) goto loc_827C43E8;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C42CC;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C42D4;
	sub_8277DB50(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C42E0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c431c
	if (!ctx.cr6.eq) goto loc_827C431C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C431C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C4328;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4344
	if (ctx.cr0.eq) goto loc_827C4344;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c4348
	goto loc_827C4348;
loc_827C4344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4348:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c43e8
	if (ctx.cr0.eq) goto loc_827C43E8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6916
	ctx.r7.s64 = ctx.r11.s64 + -6916;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20524
	ctx.r5.s64 = ctx.r9.s64 + -20524;
	// li r8,298
	ctx.r8.s64 = 298;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C4378;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c43e0
	if (ctx.cr0.eq) goto loc_827C43E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,17
	ctx.r6.s64 = 17;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c43e4
	goto loc_827C43E4;
loc_827C43E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C43E4:
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_827C43E8:
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c4400
	if (ctx.cr6.eq) goto loc_827C4400;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C4400;
	sub_827C4B58(ctx, base);
loc_827C4400:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4410"))) PPC_WEAK_FUNC(sub_827C4410);
PPC_FUNC_IMPL(__imp__sub_827C4410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4418;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c4550
	if (!ctx.cr6.eq) goto loc_827C4550;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4434;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C443C;
	sub_8277DB50(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C4448;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c4484
	if (!ctx.cr6.eq) goto loc_827C4484;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4484:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C4490;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c44ac
	if (ctx.cr0.eq) goto loc_827C44AC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c44b0
	goto loc_827C44B0;
loc_827C44AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C44B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4550
	if (ctx.cr0.eq) goto loc_827C4550;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6768
	ctx.r7.s64 = ctx.r11.s64 + -6768;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20544
	ctx.r5.s64 = ctx.r9.s64 + -20544;
	// li r8,312
	ctx.r8.s64 = 312;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C44E0;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c4548
	if (ctx.cr0.eq) goto loc_827C4548;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,11
	ctx.r6.s64 = 11;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c454c
	goto loc_827C454C;
loc_827C4548:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C454C:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_827C4550:
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c4568
	if (ctx.cr6.eq) goto loc_827C4568;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C4568;
	sub_827C4B58(ctx, base);
loc_827C4568:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4578"))) PPC_WEAK_FUNC(sub_827C4578);
PPC_FUNC_IMPL(__imp__sub_827C4578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4580;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c46b8
	if (!ctx.cr6.eq) goto loc_827C46B8;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C459C;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C45A4;
	sub_8277DB50(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C45B0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c45ec
	if (!ctx.cr6.eq) goto loc_827C45EC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C45EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C45EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C45F8;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4614
	if (ctx.cr0.eq) goto loc_827C4614;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c4618
	goto loc_827C4618;
loc_827C4614:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4618:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c46b8
	if (ctx.cr0.eq) goto loc_827C46B8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6736
	ctx.r7.s64 = ctx.r11.s64 + -6736;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20524
	ctx.r5.s64 = ctx.r9.s64 + -20524;
	// li r8,326
	ctx.r8.s64 = 326;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C4648;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c46b0
	if (ctx.cr0.eq) goto loc_827C46B0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,13
	ctx.r6.s64 = 13;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c46b4
	goto loc_827C46B4;
loc_827C46B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C46B4:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_827C46B8:
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c46d0
	if (ctx.cr6.eq) goto loc_827C46D0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C46D0;
	sub_827C4B58(ctx, base);
loc_827C46D0:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C46E0"))) PPC_WEAK_FUNC(sub_827C46E0);
PPC_FUNC_IMPL(__imp__sub_827C46E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C46E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c4820
	if (!ctx.cr6.eq) goto loc_827C4820;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4704;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C470C;
	sub_8277DB50(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C4718;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c4754
	if (!ctx.cr6.eq) goto loc_827C4754;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4754:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C4760;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c477c
	if (ctx.cr0.eq) goto loc_827C477C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c4780
	goto loc_827C4780;
loc_827C477C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4780:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4820
	if (ctx.cr0.eq) goto loc_827C4820;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6704
	ctx.r7.s64 = ctx.r11.s64 + -6704;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20524
	ctx.r5.s64 = ctx.r9.s64 + -20524;
	// li r8,340
	ctx.r8.s64 = 340;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C47B0;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c4818
	if (ctx.cr0.eq) goto loc_827C4818;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,9
	ctx.r6.s64 = 9;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c481c
	goto loc_827C481C;
loc_827C4818:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C481C:
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_827C4820:
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c4838
	if (ctx.cr6.eq) goto loc_827C4838;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C4838;
	sub_827C4B58(ctx, base);
loc_827C4838:
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4848"))) PPC_WEAK_FUNC(sub_827C4848);
PPC_FUNC_IMPL(__imp__sub_827C4848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4850;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c4988
	if (!ctx.cr6.eq) goto loc_827C4988;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C486C;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4874;
	sub_8277DB50(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C4880;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c48bc
	if (!ctx.cr6.eq) goto loc_827C48BC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C48BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C48BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C48C8;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c48e4
	if (ctx.cr0.eq) goto loc_827C48E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c48e8
	goto loc_827C48E8;
loc_827C48E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C48E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4988
	if (ctx.cr0.eq) goto loc_827C4988;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6672
	ctx.r7.s64 = ctx.r11.s64 + -6672;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20524
	ctx.r5.s64 = ctx.r9.s64 + -20524;
	// li r8,354
	ctx.r8.s64 = 354;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C4918;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c4980
	if (ctx.cr0.eq) goto loc_827C4980;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c4984
	goto loc_827C4984;
loc_827C4980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4984:
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
loc_827C4988:
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c49a0
	if (ctx.cr6.eq) goto loc_827C49A0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C49A0;
	sub_827C4B58(ctx, base);
loc_827C49A0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C49B0"))) PPC_WEAK_FUNC(sub_827C49B0);
PPC_FUNC_IMPL(__imp__sub_827C49B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C49B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c4af0
	if (!ctx.cr6.eq) goto loc_827C4AF0;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C49D4;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C49DC;
	sub_8277DB50(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C49E8;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c4a24
	if (!ctx.cr6.eq) goto loc_827C4A24;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4A24:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C4A30;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4a4c
	if (ctx.cr0.eq) goto loc_827C4A4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,17180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17180, ctx.r10.u32);
	// b 0x827c4a50
	goto loc_827C4A50;
loc_827C4A4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4A50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4af0
	if (ctx.cr0.eq) goto loc_827C4AF0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6632
	ctx.r7.s64 = ctx.r11.s64 + -6632;
	// addi r6,r10,-6880
	ctx.r6.s64 = ctx.r10.s64 + -6880;
	// addi r5,r9,-20544
	ctx.r5.s64 = ctx.r9.s64 + -20544;
	// li r8,368
	ctx.r8.s64 = 368;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C4A80;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c4ae8
	if (ctx.cr0.eq) goto loc_827C4AE8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx128 v11,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827c4aec
	goto loc_827C4AEC;
loc_827C4AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C4AEC:
	// stw r11,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
loc_827C4AF0:
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827c4b08
	if (ctx.cr6.eq) goto loc_827C4B08;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c4b58
	ctx.lr = 0x827C4B08;
	sub_827C4B58(ctx, base);
loc_827C4B08:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4B18"))) PPC_WEAK_FUNC(sub_827C4B18);
PPC_FUNC_IMPL(__imp__sub_827C4B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4B38;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4B40;
	sub_8277DB50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277cba0
	ctx.lr = 0x827C4B4C;
	sub_8277CBA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4B58"))) PPC_WEAK_FUNC(sub_827C4B58);
PPC_FUNC_IMPL(__imp__sub_827C4B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C4B60;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C4B74;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4B7C;
	sub_8277DB50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C4B88;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c4bc4
	if (!ctx.cr6.eq) goto loc_827C4BC4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24776
	ctx.r6.s64 = ctx.r10.s64 + 24776;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,335
	ctx.r5.s64 = 335;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4BC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786058
	ctx.lr = 0x827C4BD0;
	sub_82786058(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x827c4c14
	if (!ctx.cr6.eq) goto loc_827C4C14;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8277cc30
	ctx.lr = 0x827C4BF4;
	sub_8277CC30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4c14
	if (ctx.cr0.eq) goto loc_827C4C14;
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
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_827C4C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4C20"))) PPC_WEAK_FUNC(sub_827C4C20);
PPC_FUNC_IMPL(__imp__sub_827C4C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-19732
	ctx.r3.s64 = ctx.r11.s64 + -19732;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C4C30"))) PPC_WEAK_FUNC(sub_827C4C30);
PPC_FUNC_IMPL(__imp__sub_827C4C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C4C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,27780
	ctx.r11.s64 = ctx.r11.s64 + 27780;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C4C5C;
	sub_8279FE40(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// bl 0x8249d108
	ctx.lr = 0x827C4C8C;
	sub_8249D108(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r9,-7560
	ctx.r4.s64 = ctx.r9.s64 + -7560;
	// addi r11,r11,-6496
	ctx.r11.s64 = ctx.r11.s64 + -6496;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8277dce0
	ctx.lr = 0x827C4CCC;
	sub_8277DCE0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82781648
	ctx.lr = 0x827C4CD8;
	sub_82781648(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4CE0;
	sub_8277DB50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827c4d18
	if (ctx.cr6.eq) goto loc_827C4D18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d188
	ctx.lr = 0x827C4CF8;
	sub_8249D188(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8277cf90
	ctx.lr = 0x827C4D08;
	sub_8277CF90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8249d108
	ctx.lr = 0x827C4D18;
	sub_8249D108(ctx, base);
loc_827C4D18:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8277c140
	ctx.lr = 0x827C4D2C;
	sub_8277C140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4D38"))) PPC_WEAK_FUNC(sub_827C4D38);
PPC_FUNC_IMPL(__imp__sub_827C4D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827c4d88
	ctx.lr = 0x827C4D58;
	sub_827C4D88(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c4d68
	if (ctx.cr0.eq) goto loc_827C4D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C4D68;
	sub_82332DB8(ctx, base);
loc_827C4D68:
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

__attribute__((alias("__imp__sub_827C4D88"))) PPC_WEAK_FUNC(sub_827C4D88);
PPC_FUNC_IMPL(__imp__sub_827C4D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r11,r11,-6496
	ctx.r11.s64 = ctx.r11.s64 + -6496;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c4de4
	if (!ctx.cr6.eq) goto loc_827C4DE4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,25496
	ctx.r6.s64 = ctx.r10.s64 + 25496;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,25296
	ctx.r4.s64 = ctx.r9.s64 + 25296;
	// addi r3,r8,25472
	ctx.r3.s64 = ctx.r8.s64 + 25472;
	// li r5,356
	ctx.r5.s64 = 356;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4DE4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8278eec0
	ctx.lr = 0x827C4E0C;
	sub_8278EEC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x827c4e9c
	if (ctx.cr0.eq) goto loc_827C4E9C;
	// lbz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c4e9c
	if (ctx.cr0.eq) goto loc_827C4E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82781648
	ctx.lr = 0x827C4E48;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C4E50;
	sub_8277DB50(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r10,17180
	ctx.r7.s64 = ctx.r10.s64 + 17180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8277c1d0
	ctx.lr = 0x827C4E70;
	sub_8277C1D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x827c4e80
	if (ctx.cr0.eq) goto loc_827C4E80;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_827C4E80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827c4e9c
	if (!ctx.cr0.eq) goto loc_827C4E9C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8278f4d0
	ctx.lr = 0x827C4E9C;
	sub_8278F4D0(ctx, base);
loc_827C4E9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277f1f0
	ctx.lr = 0x827C4EA4;
	sub_8277F1F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C4EB0"))) PPC_WEAK_FUNC(sub_827C4EB0);
PPC_FUNC_IMPL(__imp__sub_827C4EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x827c4ee0
	if (ctx.cr6.gt) goto loc_827C4EE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x827c4eec
	goto loc_827C4EEC;
loc_827C4EE0:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x827c4eec
	if (ctx.cr6.lt) goto loc_827C4EEC;
	// li r4,255
	ctx.r4.s64 = 255;
loc_827C4EEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r4,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r4.u8);
	// bgt cr6,0x827c4f00
	if (ctx.cr6.gt) goto loc_827C4F00;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x827c4f0c
	goto loc_827C4F0C;
loc_827C4F00:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x827c4f0c
	if (ctx.cr6.lt) goto loc_827C4F0C;
	// li r9,255
	ctx.r9.s64 = 255;
loc_827C4F0C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// bgt cr6,0x827c4f20
	if (ctx.cr6.gt) goto loc_827C4F20;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827c4f2c
	goto loc_827C4F2C;
loc_827C4F20:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// blt cr6,0x827c4f2c
	if (ctx.cr6.lt) goto loc_827C4F2C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827C4F2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// bgt cr6,0x827c4f40
	if (ctx.cr6.gt) goto loc_827C4F40;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827c4f4c
	goto loc_827C4F4C;
loc_827C4F40:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x827c4f4c
	if (ctx.cr6.lt) goto loc_827C4F4C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_827C4F4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827c4f74
	if (ctx.cr6.eq) goto loc_827C4F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C4F90"))) PPC_WEAK_FUNC(sub_827C4F90);
PPC_FUNC_IMPL(__imp__sub_827C4F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827c4fd0
	if (ctx.cr6.eq) goto loc_827C4FD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C4FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C4FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C4FE8"))) PPC_WEAK_FUNC(sub_827C4FE8);
PPC_FUNC_IMPL(__imp__sub_827C4FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C4FF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C4FFC;
	sub_8279FE40(ctx, base);
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c5038
	if (!ctx.cr6.eq) goto loc_827C5038;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r10,-29264
	ctx.r6.s64 = ctx.r10.s64 + -29264;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,-30088
	ctx.r4.s64 = ctx.r9.s64 + -30088;
	// addi r3,r8,-29656
	ctx.r3.s64 = ctx.r8.s64 + -29656;
	// li r5,981
	ctx.r5.s64 = 981;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C5038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C5038:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8277e5c8
	ctx.lr = 0x827C5040;
	sub_8277E5C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x827C5050;
	sub_8277B880(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827C5074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8278f210
	ctx.lr = 0x827C5084;
	sub_8278F210(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82794b98
	ctx.lr = 0x827C509C;
	sub_82794B98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C50A8"))) PPC_WEAK_FUNC(sub_827C50A8);
PPC_FUNC_IMPL(__imp__sub_827C50A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827C50B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
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
	// bl 0x8279fe40
	ctx.lr = 0x827C50D4;
	sub_8279FE40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// beq cr6,0x827c50f8
	if (ctx.cr6.eq) goto loc_827C50F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C50EC;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C50F8;
	sub_82796590(ctx, base);
loc_827C50F8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827c5118
	if (ctx.cr6.eq) goto loc_827C5118;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C510C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5118;
	sub_82796590(ctx, base);
loc_827C5118:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827c5138
	if (ctx.cr6.eq) goto loc_827C5138;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C512C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5138;
	sub_82796590(ctx, base);
loc_827C5138:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x827c5158
	if (ctx.cr6.eq) goto loc_827C5158;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C514C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5158;
	sub_82796590(ctx, base);
loc_827C5158:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x827c5178
	if (ctx.cr6.eq) goto loc_827C5178;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C516C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5178;
	sub_82796590(ctx, base);
loc_827C5178:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x827c5198
	if (ctx.cr6.eq) goto loc_827C5198;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C518C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5198;
	sub_82796590(ctx, base);
loc_827C5198:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x827c51b8
	if (ctx.cr6.eq) goto loc_827C51B8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C51AC;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C51B8;
	sub_82796590(ctx, base);
loc_827C51B8:
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827c51d8
	if (ctx.cr6.eq) goto loc_827C51D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C51CC;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C51D8;
	sub_82796590(ctx, base);
loc_827C51D8:
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827c51f8
	if (ctx.cr6.eq) goto loc_827C51F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C51EC;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C51F8;
	sub_82796590(ctx, base);
loc_827C51F8:
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827c5218
	if (ctx.cr6.eq) goto loc_827C5218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279f6e8
	ctx.lr = 0x827C520C;
	sub_8279F6E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82796590
	ctx.lr = 0x827C5218;
	sub_82796590(ctx, base);
loc_827C5218:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5220"))) PPC_WEAK_FUNC(sub_827C5220);
PPC_FUNC_IMPL(__imp__sub_827C5220) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C5240;
	sub_8279FE40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,-6112
	ctx.r6.s64 = ctx.r11.s64 + -6112;
	// addi r5,r10,-6488
	ctx.r5.s64 = ctx.r10.s64 + -6488;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50ca8
	ctx.lr = 0x827C5260;
	sub_82A50CA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82796590
	ctx.lr = 0x827C526C;
	sub_82796590(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-6096
	ctx.r7.s64 = ctx.r11.s64 + -6096;
	// addi r6,r10,-6296
	ctx.r6.s64 = ctx.r10.s64 + -6296;
	// addi r5,r9,-20524
	ctx.r5.s64 = ctx.r9.s64 + -20524;
	// li r8,363
	ctx.r8.s64 = 363;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82784ff0
	ctx.lr = 0x827C5294;
	sub_82784FF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827c52c0
	if (ctx.cr0.eq) goto loc_827C52C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a45878
	ctx.lr = 0x827C52B8;
	sub_82A45878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827c52c4
	goto loc_827C52C4;
loc_827C52C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C52C4:
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

__attribute__((alias("__imp__sub_827C52E0"))) PPC_WEAK_FUNC(sub_827C52E0);
PPC_FUNC_IMPL(__imp__sub_827C52E0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C5300;
	sub_8279FE40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,-6004
	ctx.r6.s64 = ctx.r11.s64 + -6004;
	// addi r5,r10,-6488
	ctx.r5.s64 = ctx.r10.s64 + -6488;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50ca8
	ctx.lr = 0x827C5320;
	sub_82A50CA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82796590
	ctx.lr = 0x827C532C;
	sub_82796590(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5988
	ctx.r7.s64 = ctx.r11.s64 + -5988;
	// addi r6,r10,-6296
	ctx.r6.s64 = ctx.r10.s64 + -6296;
	// addi r5,r9,-19408
	ctx.r5.s64 = ctx.r9.s64 + -19408;
	// li r8,406
	ctx.r8.s64 = 406;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827C5354;
	sub_82784FF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827c537c
	if (ctx.cr0.eq) goto loc_827C537C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827c4f90
	ctx.lr = 0x827C5374;
	sub_827C4F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827c5380
	goto loc_827C5380;
loc_827C537C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C5380:
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

__attribute__((alias("__imp__sub_827C5398"))) PPC_WEAK_FUNC(sub_827C5398);
PPC_FUNC_IMPL(__imp__sub_827C5398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C53A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x827C53B8;
	sub_8249D108(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278e280
	ctx.lr = 0x827C53C0;
	sub_8278E280(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,-7396
	ctx.r28.s64 = ctx.r11.s64 + -7396;
loc_827C53CC:
	// li r30,4
	ctx.r30.s64 = 4;
loc_827C53D0:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a50ca8
	ctx.lr = 0x827C53EC;
	sub_82A50CA8(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827C53F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827c53f4
	if (!ctx.cr6.eq) goto loc_827C53F4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82783348
	ctx.lr = 0x827C541C;
	sub_82783348(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x827c53d0
	if (!ctx.cr0.eq) goto loc_827C53D0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x827c53cc
	if (!ctx.cr0.eq) goto loc_827C53CC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x827c5444
	if (!ctx.cr6.lt) goto loc_827C5444;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
loc_827C5444:
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r31,r11,-17488
	ctx.r31.s64 = ctx.r11.s64 + -17488;
	// addi r5,r10,-5956
	ctx.r5.s64 = ctx.r10.s64 + -5956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x82a50ca8
	ctx.lr = 0x827C5460;
	sub_82A50CA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x827C5470;
	sub_8249D108(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5480"))) PPC_WEAK_FUNC(sub_827C5480);
PPC_FUNC_IMPL(__imp__sub_827C5480) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C54A0;
	sub_8279FE40(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r31,36(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r6,r11,-5944
	ctx.r6.s64 = ctx.r11.s64 + -5944;
	// addi r5,r10,-6488
	ctx.r5.s64 = ctx.r10.s64 + -6488;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a50ca8
	ctx.lr = 0x827C54C0;
	sub_82A50CA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82796590
	ctx.lr = 0x827C54CC;
	sub_82796590(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5928
	ctx.r7.s64 = ctx.r11.s64 + -5928;
	// addi r6,r10,-6296
	ctx.r6.s64 = ctx.r10.s64 + -6296;
	// addi r5,r9,-20532
	ctx.r5.s64 = ctx.r9.s64 + -20532;
	// li r8,505
	ctx.r8.s64 = 505;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82784ff0
	ctx.lr = 0x827C54F4;
	sub_82784FF0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827c5514
	if (ctx.cr0.eq) goto loc_827C5514;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a45878
	ctx.lr = 0x827C550C;
	sub_82A45878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827c5518
	goto loc_827C5518;
loc_827C5514:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C5518:
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

__attribute__((alias("__imp__sub_827C5530"))) PPC_WEAK_FUNC(sub_827C5530);
PPC_FUNC_IMPL(__imp__sub_827C5530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C5538;
	__savegprlr_29(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lvlx v13,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v0,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvx128 v12,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-76
	ctx.r7.s64 = ctx.r1.s64 + -76;
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v11,4,3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v0,3,2
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 78), 3));
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-76
	ctx.r8.s64 = ctx.r1.s64 + -76;
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// addi r10,r1,-76
	ctx.r10.s64 = ctx.r1.s64 + -76;
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// addi r31,r1,-76
	ctx.r31.s64 = ctx.r1.s64 + -76;
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-68
	ctx.r6.s64 = ctx.r1.s64 + -68;
	// lfs f13,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,-68
	ctx.r4.s64 = ctx.r1.s64 + -68;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-72
	ctx.r8.s64 = ctx.r1.s64 + -72;
	// lfs f12,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-68
	ctx.r9.s64 = ctx.r1.s64 + -68;
	// lfs f0,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r1,-68
	ctx.r30.s64 = ctx.r1.s64 + -68;
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// addi r29,r1,-76
	ctx.r29.s64 = ctx.r1.s64 + -76;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,-80
	ctx.r5.s64 = ctx.r1.s64 + -80;
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// lvlx v10,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v10,v11,4,3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v11.f32), 57), 4));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx v4,0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f12,-68(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f12,-68(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// lvlx v6,0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// vrlimi128 v6,v7,4,3
	simde_mm_store_ps(ctx.v6.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v7.f32), 57), 4));
	// lvlx v5,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v4,v5,4,3
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v5.f32), 57), 4));
	// vrlimi128 v4,v13,3,2
	simde_mm_store_ps(ctx.v4.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// stfs f13,-68(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// stfs f13,-76(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvlx v0,0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v0,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// vmulfp128 v0,v12,v4
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vrlimi128 v11,v10,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v10.f32), 78), 3));
	// stfs f12,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvlx v8,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v8,v9,4,3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 57), 4));
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v8,v6,3,2
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v6.f32), 78), 3));
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5668"))) PPC_WEAK_FUNC(sub_827C5668);
PPC_FUNC_IMPL(__imp__sub_827C5668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-11876
	ctx.r3.s64 = ctx.r11.s64 + -11876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C5678"))) PPC_WEAK_FUNC(sub_827C5678);
PPC_FUNC_IMPL(__imp__sub_827C5678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-5896
	ctx.r11.s64 = ctx.r11.s64 + -5896;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8277f1f0
	ctx.lr = 0x827C56A4;
	sub_8277F1F0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c56b4
	if (ctx.cr0.eq) goto loc_827C56B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C56B4;
	sub_82332DB8(ctx, base);
loc_827C56B4:
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

__attribute__((alias("__imp__sub_827C56D0"))) PPC_WEAK_FUNC(sub_827C56D0);
PPC_FUNC_IMPL(__imp__sub_827C56D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-7580
	ctx.r3.s64 = ctx.r11.s64 + -7580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C56E0"))) PPC_WEAK_FUNC(sub_827C56E0);
PPC_FUNC_IMPL(__imp__sub_827C56E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827c4020
	ctx.lr = 0x827C5700;
	sub_827C4020(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5710
	if (ctx.cr0.eq) goto loc_827C5710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C5710;
	sub_82332DB8(ctx, base);
loc_827C5710:
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

__attribute__((alias("__imp__sub_827C5730"))) PPC_WEAK_FUNC(sub_827C5730);
PPC_FUNC_IMPL(__imp__sub_827C5730) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x827c56e0
	sub_827C56E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5738"))) PPC_WEAK_FUNC(sub_827C5738);
PPC_FUNC_IMPL(__imp__sub_827C5738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5740;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a455d0
	ctx.lr = 0x827C5764;
	sub_82A455D0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f5e8
	ctx.lr = 0x827C5778;
	sub_8279F5E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8279f330
	ctx.lr = 0x827C5784;
	sub_8279F330(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801f28
	ctx.lr = 0x827C5794;
	sub_82801F28(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r10,r10,-8
	ctx.xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c57c4
	if (ctx.cr0.eq) goto loc_827C57C4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c57c4
	if (!ctx.cr6.eq) goto loc_827C57C4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x827c57d4
	goto loc_827C57D4;
loc_827C57C4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8279f458
	ctx.lr = 0x827C57D0;
	sub_8279F458(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_827C57D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8279f648
	ctx.lr = 0x827C57DC;
	sub_8279F648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C57E8"))) PPC_WEAK_FUNC(sub_827C57E8);
PPC_FUNC_IMPL(__imp__sub_827C57E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,-5880
	ctx.r11.s64 = ctx.r11.s64 + -5880;
	// addi r10,r10,-5872
	ctx.r10.s64 = ctx.r10.s64 + -5872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// bl 0x827c4020
	ctx.lr = 0x827C5820;
	sub_827C4020(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5830
	if (ctx.cr0.eq) goto loc_827C5830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C5830;
	sub_82332DB8(ctx, base);
loc_827C5830:
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

__attribute__((alias("__imp__sub_827C5850"))) PPC_WEAK_FUNC(sub_827C5850);
PPC_FUNC_IMPL(__imp__sub_827C5850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x827c57e8
	sub_827C57E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5858"))) PPC_WEAK_FUNC(sub_827C5858);
PPC_FUNC_IMPL(__imp__sub_827C5858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-12404
	ctx.r3.s64 = ctx.r11.s64 + -12404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C5868"))) PPC_WEAK_FUNC(sub_827C5868);
PPC_FUNC_IMPL(__imp__sub_827C5868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r11,r11,-5712
	ctx.r11.s64 = ctx.r11.s64 + -5712;
	// lwz r29,92(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r10,-5704
	ctx.r10.s64 = ctx.r10.s64 + -5704;
	// addi r9,r9,-5696
	ctx.r9.s64 = ctx.r9.s64 + -5696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827c58c0
	if (ctx.cr6.eq) goto loc_827C58C0;
	// bl 0x82784f18
	ctx.lr = 0x827C58B4;
	sub_82784F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x827C58C0;
	sub_82784A40(ctx, base);
loc_827C58C0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x827c4020
	ctx.lr = 0x827C58D4;
	sub_827C4020(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c58e4
	if (ctx.cr0.eq) goto loc_827C58E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C58E4;
	sub_82332DB8(ctx, base);
loc_827C58E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C58F0"))) PPC_WEAK_FUNC(sub_827C58F0);
PPC_FUNC_IMPL(__imp__sub_827C58F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C58F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r28,r11,17180
	ctx.r28.s64 = ctx.r11.s64 + 17180;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827c59f4
	if (!ctx.cr6.eq) goto loc_827C59F4;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C591C;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5924;
	sub_8277DB50(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C5930;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c596c
	if (!ctx.cr6.eq) goto loc_827C596C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C596C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C596C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C5978;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5990
	if (ctx.cr0.eq) goto loc_827C5990;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x827c5994
	goto loc_827C5994;
loc_827C5990:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827C5994:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c59f4
	if (ctx.cr0.eq) goto loc_827C59F4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5864
	ctx.r7.s64 = ctx.r11.s64 + -5864;
	// addi r6,r10,-5824
	ctx.r6.s64 = ctx.r10.s64 + -5824;
	// addi r5,r9,-19408
	ctx.r5.s64 = ctx.r9.s64 + -19408;
	// li r8,70
	ctx.r8.s64 = 70;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827C59C4;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c59ec
	if (ctx.cr0.eq) goto loc_827C59EC;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x827c59f0
	goto loc_827C59F0;
loc_827C59EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C59F0:
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
loc_827C59F4:
	// lwz r31,92(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827c5a38
	if (ctx.cr6.eq) goto loc_827C5A38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5A0C;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5A14;
	sub_8277DB50(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x8277cd78
	ctx.lr = 0x827C5A28;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5a38
	if (ctx.cr0.eq) goto loc_827C5A38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827C5A38:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5A48"))) PPC_WEAK_FUNC(sub_827C5A48);
PPC_FUNC_IMPL(__imp__sub_827C5A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C5A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5A68;
	sub_82781648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5A70;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277cd78
	ctx.lr = 0x827C5A8C;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5aac
	if (ctx.cr0.eq) goto loc_827C5AAC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8277cce8
	ctx.lr = 0x827C5AAC;
	sub_8277CCE8(ctx, base);
loc_827C5AAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5AB8"))) PPC_WEAK_FUNC(sub_827C5AB8);
PPC_FUNC_IMPL(__imp__sub_827C5AB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x827c5868
	sub_827C5868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5AC0"))) PPC_WEAK_FUNC(sub_827C5AC0);
PPC_FUNC_IMPL(__imp__sub_827C5AC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
	// b 0x827c5868
	sub_827C5868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5AC8"))) PPC_WEAK_FUNC(sub_827C5AC8);
PPC_FUNC_IMPL(__imp__sub_827C5AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r11,-16748
	ctx.r3.s64 = ctx.r11.s64 + -16748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C5AD8"))) PPC_WEAK_FUNC(sub_827C5AD8);
PPC_FUNC_IMPL(__imp__sub_827C5AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5AE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,-5460
	ctx.r11.s64 = ctx.r11.s64 + -5460;
	// addi r10,r10,-5452
	ctx.r10.s64 = ctx.r10.s64 + -5452;
	// lwz r30,56(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x827c5b24
	if (ctx.cr6.eq) goto loc_827C5B24;
	// bl 0x82784f18
	ctx.lr = 0x827C5B18;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x827C5B24;
	sub_82784A40(ctx, base);
loc_827C5B24:
	// lwz r30,60(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c5b40
	if (ctx.cr6.eq) goto loc_827C5B40;
	// bl 0x82784f18
	ctx.lr = 0x827C5B34;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x827C5B40;
	sub_82784A40(ctx, base);
loc_827C5B40:
	// lwz r30,64(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c5b5c
	if (ctx.cr6.eq) goto loc_827C5B5C;
	// bl 0x82784f18
	ctx.lr = 0x827C5B50;
	sub_82784F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82784a40
	ctx.lr = 0x827C5B5C;
	sub_82784A40(ctx, base);
loc_827C5B5C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x8277f1f0
	ctx.lr = 0x827C5B70;
	sub_8277F1F0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5b80
	if (ctx.cr0.eq) goto loc_827C5B80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827C5B80;
	sub_82332DB8(ctx, base);
loc_827C5B80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5B90"))) PPC_WEAK_FUNC(sub_827C5B90);
PPC_FUNC_IMPL(__imp__sub_827C5B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5B98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r28,r11,17180
	ctx.r28.s64 = ctx.r11.s64 + 17180;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827c5c94
	if (!ctx.cr6.eq) goto loc_827C5C94;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5BBC;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5BC4;
	sub_8277DB50(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C5BD0;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c5c0c
	if (!ctx.cr6.eq) goto loc_827C5C0C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C5C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C5C0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C5C18;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5c30
	if (ctx.cr0.eq) goto loc_827C5C30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x827c5c34
	goto loc_827C5C34;
loc_827C5C30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827C5C34:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5c94
	if (ctx.cr0.eq) goto loc_827C5C94;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5688
	ctx.r7.s64 = ctx.r11.s64 + -5688;
	// addi r6,r10,-5648
	ctx.r6.s64 = ctx.r10.s64 + -5648;
	// addi r5,r9,-19408
	ctx.r5.s64 = ctx.r9.s64 + -19408;
	// li r8,74
	ctx.r8.s64 = 74;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827C5C64;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c5c8c
	if (ctx.cr0.eq) goto loc_827C5C8C;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x827c5c90
	goto loc_827C5C90;
loc_827C5C8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C5C90:
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_827C5C94:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827c5cd8
	if (ctx.cr6.eq) goto loc_827C5CD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5CAC;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5CB4;
	sub_8277DB50(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8277cd78
	ctx.lr = 0x827C5CC8;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5cd8
	if (ctx.cr0.eq) goto loc_827C5CD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827C5CD8:
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5CE8"))) PPC_WEAK_FUNC(sub_827C5CE8);
PPC_FUNC_IMPL(__imp__sub_827C5CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r28,r11,17180
	ctx.r28.s64 = ctx.r11.s64 + 17180;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827c5dec
	if (!ctx.cr6.eq) goto loc_827C5DEC;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5D14;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5D1C;
	sub_8277DB50(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C5D28;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c5d64
	if (!ctx.cr6.eq) goto loc_827C5D64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C5D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C5D64:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C5D70;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5d88
	if (ctx.cr0.eq) goto loc_827C5D88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x827c5d8c
	goto loc_827C5D8C;
loc_827C5D88:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827C5D8C:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5dec
	if (ctx.cr0.eq) goto loc_827C5DEC;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5532
	ctx.r7.s64 = ctx.r11.s64 + -5532;
	// addi r6,r10,-5648
	ctx.r6.s64 = ctx.r10.s64 + -5648;
	// addi r5,r9,-19408
	ctx.r5.s64 = ctx.r9.s64 + -19408;
	// li r8,88
	ctx.r8.s64 = 88;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827C5DBC;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c5de4
	if (ctx.cr0.eq) goto loc_827C5DE4;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// li r10,19
	ctx.r10.s64 = 19;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x827c5de8
	goto loc_827C5DE8;
loc_827C5DE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C5DE8:
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_827C5DEC:
	// lwz r31,60(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827c5e30
	if (ctx.cr6.eq) goto loc_827C5E30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5E04;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5E0C;
	sub_8277DB50(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x8277cd78
	ctx.lr = 0x827C5E20;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5e30
	if (ctx.cr0.eq) goto loc_827C5E30;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827C5E30:
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5E40"))) PPC_WEAK_FUNC(sub_827C5E40);
PPC_FUNC_IMPL(__imp__sub_827C5E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C5E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r28,r11,17180
	ctx.r28.s64 = ctx.r11.s64 + 17180;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827c5f44
	if (!ctx.cr6.eq) goto loc_827C5F44;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5E6C;
	sub_82781648(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5E74;
	sub_8277DB50(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8277beb8
	ctx.lr = 0x827C5E80;
	sub_8277BEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c5ebc
	if (!ctx.cr6.eq) goto loc_827C5EBC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// addi r6,r10,24804
	ctx.r6.s64 = ctx.r10.s64 + 24804;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,24608
	ctx.r4.s64 = ctx.r9.s64 + 24608;
	// addi r3,r8,24760
	ctx.r3.s64 = ctx.r8.s64 + 24760;
	// li r5,406
	ctx.r5.s64 = 406;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C5EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C5EBC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82786170
	ctx.lr = 0x827C5EC8;
	sub_82786170(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5ee0
	if (ctx.cr0.eq) goto loc_827C5EE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x827c5ee4
	goto loc_827C5EE4;
loc_827C5EE0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827C5EE4:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5f44
	if (ctx.cr0.eq) goto loc_827C5F44;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r7,r11,-5496
	ctx.r7.s64 = ctx.r11.s64 + -5496;
	// addi r6,r10,-5648
	ctx.r6.s64 = ctx.r10.s64 + -5648;
	// addi r5,r9,-19408
	ctx.r5.s64 = ctx.r9.s64 + -19408;
	// li r8,102
	ctx.r8.s64 = 102;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82784ff0
	ctx.lr = 0x827C5F14;
	sub_82784FF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c5f3c
	if (ctx.cr0.eq) goto loc_827C5F3C;
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x827c5f40
	goto loc_827C5F40;
loc_827C5F3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C5F40:
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_827C5F44:
	// lwz r31,64(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827c5f88
	if (ctx.cr6.eq) goto loc_827C5F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5F5C;
	sub_82781648(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5F64;
	sub_8277DB50(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8277cd78
	ctx.lr = 0x827C5F78;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5f88
	if (ctx.cr0.eq) goto loc_827C5F88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827C5F88:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C5F98"))) PPC_WEAK_FUNC(sub_827C5F98);
PPC_FUNC_IMPL(__imp__sub_827C5F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C5FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// bl 0x82781648
	ctx.lr = 0x827C5FB8;
	sub_82781648(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8277db50
	ctx.lr = 0x827C5FC0;
	sub_8277DB50(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r7,r11,17180
	ctx.r7.s64 = ctx.r11.s64 + 17180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8277cd78
	ctx.lr = 0x827C5FDC;
	sub_8277CD78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c5ffc
	if (ctx.cr0.eq) goto loc_827C5FFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8277cce8
	ctx.lr = 0x827C5FFC;
	sub_8277CCE8(ctx, base);
loc_827C5FFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6008"))) PPC_WEAK_FUNC(sub_827C6008);
PPC_FUNC_IMPL(__imp__sub_827C6008) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-52
	ctx.r3.s64 = ctx.r3.s64 + -52;
	// b 0x827c5ad8
	sub_827C5AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6010"))) PPC_WEAK_FUNC(sub_827C6010);
PPC_FUNC_IMPL(__imp__sub_827C6010) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x827a7730
	ctx.lr = 0x827C6024;
	sub_827A7730(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C6038"))) PPC_WEAK_FUNC(sub_827C6038);
PPC_FUNC_IMPL(__imp__sub_827C6038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C6040;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827C605C;
	sub_82A4EA80(ctx, base);
	// stw r29,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x827c6084
	goto loc_827C6084;
loc_827C607C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_827C6084:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c607c
	if (!ctx.cr6.eq) goto loc_827C607C;
	// stw r10,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r8,r8,r9
	ctx.r8.s32 = ctx.r8.s32 / ctx.r9.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	// stw r8,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r8.u32);
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// twlgei r9,-1
	// b 0x827c60d0
	goto loc_827C60D0;
loc_827C60C8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_827C60D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c60c8
	if (!ctx.cr6.eq) goto loc_827C60C8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// twllei r8,0
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// twlgei r10,-1
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6118"))) PPC_WEAK_FUNC(sub_827C6118);
PPC_FUNC_IMPL(__imp__sub_827C6118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827C6120;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82784de8
	ctx.lr = 0x827C6130;
	sub_82784DE8(ctx, base);
	// lwz r11,2020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2020);
	// addi r29,r27,68
	ctx.r29.s64 = ctx.r27.s64 + 68;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r11.u32);
loc_827C6144:
	// bl 0x827a7730
	ctx.lr = 0x827C6148;
	sub_827A7730(ctx, base);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// bge 0x827c6144
	if (!ctx.cr0.lt) goto loc_827C6144;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_827C615C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82784d68
	ctx.lr = 0x827C6168;
	sub_82784D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,44(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x82784ce8
	ctx.lr = 0x827C617C;
	sub_82784CE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c6038
	ctx.lr = 0x827C618C;
	sub_827C6038(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827C619C;
	sub_82A4EA80(ctx, base);
	// lwz r11,10920(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10920);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// stw r11,10920(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10920, ctx.r11.u32);
	// blt cr6,0x827c615c
	if (ctx.cr6.lt) goto loc_827C615C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C61C8"))) PPC_WEAK_FUNC(sub_827C61C8);
PPC_FUNC_IMPL(__imp__sub_827C61C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10920);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,10920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10920, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C61E0"))) PPC_WEAK_FUNC(sub_827C61E0);
PPC_FUNC_IMPL(__imp__sub_827C61E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x827C61E8;
	__savegprlr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5248(r1)
	ea = -5248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,30728
	ctx.r4.s64 = ctx.r11.s64 + 30728;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827C6214;
	sub_82A4EA80(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x827a7730
	ctx.lr = 0x827C621C;
	sub_827A7730(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r6,r11,24592
	ctx.r6.s64 = ctx.r11.s64 + 24592;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82333e70
	ctx.lr = 0x827C6234;
	sub_82333E70(ctx, base);
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// addi r28,r1,256
	ctx.r28.s64 = ctx.r1.s64 + 256;
	// addi r31,r11,-5204
	ctx.r31.s64 = ctx.r11.s64 + -5204;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_827C6248:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c6290
	if (ctx.cr6.eq) goto loc_827C6290;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x827c6118
	ctx.lr = 0x827C625C;
	sub_827C6118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,860
	ctx.r5.s64 = 860;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827C626C;
	sub_82A4EA80(ctx, base);
	// lwz r11,10920(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10920);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r28,r28,860
	ctx.r28.s64 = ctx.r28.s64 + 860;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// stw r11,10920(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10920, ctx.r11.u32);
	// blt cr6,0x827c6248
	if (ctx.cr6.lt) goto loc_827C6248;
loc_827C6290:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1984
	ctx.r3.s64 = ctx.r1.s64 + 1984;
	// bl 0x827a70b8
	ctx.lr = 0x827C62A0;
	sub_827A70B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x827a7458
	ctx.lr = 0x827C62A8;
	sub_827A7458(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C62B4;
	sub_8279FE40(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827b4690
	ctx.lr = 0x827C62CC;
	sub_827B4690(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827c6650
	ctx.lr = 0x827C62D8;
	sub_827C6650(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C62E0;
	sub_8279FE40(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827b4690
	ctx.lr = 0x827C62F4;
	sub_827B4690(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r1,256
	ctx.r26.s64 = ctx.r1.s64 + 256;
loc_827C6300:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c63cc
	if (ctx.cr6.eq) goto loc_827C63CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C6314;
	sub_8279FE40(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82802018
	ctx.lr = 0x827C6320;
	sub_82802018(ctx, base);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b4690
	ctx.lr = 0x827C6334;
	sub_827B4690(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x82801900
	ctx.lr = 0x827C6340;
	sub_82801900(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c6b50
	ctx.lr = 0x827C634C;
	sub_827C6B50(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x827b4708
	ctx.lr = 0x827C6374;
	sub_827B4708(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// bl 0x8279c958
	ctx.lr = 0x827C6394;
	sub_8279C958(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801960
	ctx.lr = 0x827C63A4;
	sub_82801960(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x827b4578
	ctx.lr = 0x827C63B4;
	sub_827B4578(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,860
	ctx.r26.s64 = ctx.r26.s64 + 860;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827c6300
	if (ctx.cr6.lt) goto loc_827C6300;
loc_827C63CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C63D4;
	sub_8279FE40(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b4690
	ctx.lr = 0x827C63E8;
	sub_827B4690(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,1984
	ctx.r5.s64 = ctx.r1.s64 + 1984;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c6c90
	ctx.lr = 0x827C63FC;
	sub_827C6C90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827b4578
	ctx.lr = 0x827C6404;
	sub_827B4578(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827b4578
	ctx.lr = 0x827C640C;
	sub_827B4578(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827b4578
	ctx.lr = 0x827C6414;
	sub_827B4578(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r6,r11,25032
	ctx.r6.s64 = ctx.r11.s64 + 25032;
	// li r4,88
	ctx.r4.s64 = 88;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x823338b8
	ctx.lr = 0x827C642C;
	sub_823338B8(ctx, base);
	// lwz r11,10920(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10920);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,10920(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10920, ctx.r11.u32);
	// addi r1,r1,5248
	ctx.r1.s64 = ctx.r1.s64 + 5248;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6448"))) PPC_WEAK_FUNC(sub_827C6448);
PPC_FUNC_IMPL(__imp__sub_827C6448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C6450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r28,r11,-5204
	ctx.r28.s64 = ctx.r11.s64 + -5204;
loc_827C6468:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827c64c4
	if (ctx.cr6.lt) goto loc_827C64C4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x827c64c4
	if (!ctx.cr6.lt) goto loc_827C64C4;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827c64c4
	if (ctx.cr6.eq) goto loc_827C64C4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827c64c4
	if (ctx.cr6.lt) goto loc_827C64C4;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// bge cr6,0x827c64c4
	if (!ctx.cr6.lt) goto loc_827C64C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82784ce8
	ctx.lr = 0x827C64A0;
	sub_82784CE8(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r31.u32);
loc_827C64C4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x827c6468
	if (ctx.cr6.lt) goto loc_827C6468;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C64D8"))) PPC_WEAK_FUNC(sub_827C64D8);
PPC_FUNC_IMPL(__imp__sub_827C64D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x827c656c
	if (ctx.cr6.lt) goto loc_827C656C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x827c656c
	if (!ctx.cr6.lt) goto loc_827C656C;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5204
	ctx.r11.s64 = ctx.r11.s64 + -5204;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c656c
	if (ctx.cr6.eq) goto loc_827C656C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c6118
	ctx.lr = 0x827C6524;
	sub_827C6118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C652C;
	sub_8279FE40(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b4690
	ctx.lr = 0x827C6544;
	sub_827B4690(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c6b50
	ctx.lr = 0x827C6550;
	sub_827C6B50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b4578
	ctx.lr = 0x827C6558;
	sub_827B4578(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10920);
	// addi r11,r11,-576
	ctx.r11.s64 = ctx.r11.s64 + -576;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,10920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10920, ctx.r11.u32);
loc_827C656C:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C6588"))) PPC_WEAK_FUNC(sub_827C6588);
PPC_FUNC_IMPL(__imp__sub_827C6588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C6590;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x827c6648
	if (ctx.cr6.lt) goto loc_827C6648;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x827c6648
	if (!ctx.cr6.lt) goto loc_827C6648;
	// lis r11,-31947
	ctx.r11.s64 = -2093678592;
	// rlwinm r29,r5,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-5204
	ctx.r30.s64 = ctx.r11.s64 + -5204;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827c6648
	if (ctx.cr6.eq) goto loc_827C6648;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x827c6648
	if (ctx.cr6.lt) goto loc_827C6648;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bge cr6,0x827c6648
	if (!ctx.cr6.lt) goto loc_827C6648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82784ce8
	ctx.lr = 0x827C65E0;
	sub_82784CE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82784d68
	ctx.lr = 0x827C65F0;
	sub_82784D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x827c6038
	ctx.lr = 0x827C6604;
	sub_827C6038(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C660C;
	sub_8279FE40(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b4690
	ctx.lr = 0x827C6624;
	sub_827B4690(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c69f8
	ctx.lr = 0x827C6630;
	sub_827C69F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827b4578
	ctx.lr = 0x827C6638;
	sub_827B4578(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10920(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10920);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,10920(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10920, ctx.r11.u32);
loc_827C6648:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6650"))) PPC_WEAK_FUNC(sub_827C6650);
PPC_FUNC_IMPL(__imp__sub_827C6650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-5444
	ctx.r4.s64 = ctx.r11.s64 + -5444;
	// bl 0x8249d188
	ctx.lr = 0x827C667C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x827c6988
	ctx.lr = 0x827C668C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8249d108
	ctx.lr = 0x827C669C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5432
	ctx.r4.s64 = ctx.r11.s64 + -5432;
	// bl 0x8249d188
	ctx.lr = 0x827C66AC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827c6988
	ctx.lr = 0x827C66BC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249d108
	ctx.lr = 0x827C66CC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-5420
	ctx.r4.s64 = ctx.r11.s64 + -5420;
	// bl 0x8249d188
	ctx.lr = 0x827C66DC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x827c6988
	ctx.lr = 0x827C66EC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8249d108
	ctx.lr = 0x827C66FC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-5408
	ctx.r4.s64 = ctx.r11.s64 + -5408;
	// bl 0x8249d188
	ctx.lr = 0x827C670C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x827c6988
	ctx.lr = 0x827C671C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8249d108
	ctx.lr = 0x827C672C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// bl 0x8249d188
	ctx.lr = 0x827C673C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x827c6988
	ctx.lr = 0x827C674C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8249d108
	ctx.lr = 0x827C675C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-5380
	ctx.r4.s64 = ctx.r11.s64 + -5380;
	// bl 0x8249d188
	ctx.lr = 0x827C676C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x827c6988
	ctx.lr = 0x827C677C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8249d108
	ctx.lr = 0x827C678C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-5368
	ctx.r4.s64 = ctx.r11.s64 + -5368;
	// bl 0x8249d188
	ctx.lr = 0x827C679C;
	sub_8249D188(ctx, base);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c6988
	ctx.lr = 0x827C67AC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x8249d108
	ctx.lr = 0x827C67BC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5356
	ctx.r4.s64 = ctx.r11.s64 + -5356;
	// bl 0x8249d188
	ctx.lr = 0x827C67CC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x827c6988
	ctx.lr = 0x827C67DC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x827C67EC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-5340
	ctx.r4.s64 = ctx.r11.s64 + -5340;
	// bl 0x8249d188
	ctx.lr = 0x827C67FC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x827c6988
	ctx.lr = 0x827C680C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x827C681C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-5320
	ctx.r4.s64 = ctx.r11.s64 + -5320;
	// bl 0x8249d188
	ctx.lr = 0x827C682C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x827c6988
	ctx.lr = 0x827C683C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249d108
	ctx.lr = 0x827C684C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-5304
	ctx.r4.s64 = ctx.r11.s64 + -5304;
	// bl 0x8249d188
	ctx.lr = 0x827C685C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x827c6988
	ctx.lr = 0x827C686C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8249d108
	ctx.lr = 0x827C687C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-5288
	ctx.r4.s64 = ctx.r11.s64 + -5288;
	// bl 0x8249d188
	ctx.lr = 0x827C688C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x827c6988
	ctx.lr = 0x827C689C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8249d108
	ctx.lr = 0x827C68AC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-5268
	ctx.r4.s64 = ctx.r11.s64 + -5268;
	// bl 0x8249d188
	ctx.lr = 0x827C68BC;
	sub_8249D188(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x827c6988
	ctx.lr = 0x827C68CC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8249d108
	ctx.lr = 0x827C68DC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-5248
	ctx.r4.s64 = ctx.r11.s64 + -5248;
	// bl 0x8249d188
	ctx.lr = 0x827C68EC;
	sub_8249D188(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c6988
	ctx.lr = 0x827C68FC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x8249d108
	ctx.lr = 0x827C690C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-5232
	ctx.r4.s64 = ctx.r11.s64 + -5232;
	// bl 0x8249d188
	ctx.lr = 0x827C691C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x827c6988
	ctx.lr = 0x827C692C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8249d108
	ctx.lr = 0x827C693C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-5216
	ctx.r4.s64 = ctx.r11.s64 + -5216;
	// bl 0x8249d188
	ctx.lr = 0x827C694C;
	sub_8249D188(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x827c6988
	ctx.lr = 0x827C695C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x8249d108
	ctx.lr = 0x827C696C;
	sub_8249D108(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C6988"))) PPC_WEAK_FUNC(sub_827C6988);
PPC_FUNC_IMPL(__imp__sub_827C6988) {
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
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x827c69b0
	if (ctx.cr6.lt) goto loc_827C69B0;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x827c69b4
	goto loc_827C69B4;
loc_827C69B0:
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_827C69B4:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8279c958
	ctx.lr = 0x827C69E4;
	sub_8279C958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C69F8"))) PPC_WEAK_FUNC(sub_827C69F8);
PPC_FUNC_IMPL(__imp__sub_827C69F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x827c6650
	ctx.lr = 0x827C6A18;
	sub_827C6650(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-5196
	ctx.r4.s64 = ctx.r11.s64 + -5196;
	// bl 0x8249d188
	ctx.lr = 0x827C6A28;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x827c6988
	ctx.lr = 0x827C6A38;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8249d108
	ctx.lr = 0x827C6A48;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5180
	ctx.r4.s64 = ctx.r11.s64 + -5180;
	// bl 0x8249d188
	ctx.lr = 0x827C6A58;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,68(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x827c6988
	ctx.lr = 0x827C6A68;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249d108
	ctx.lr = 0x827C6A78;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-5168
	ctx.r4.s64 = ctx.r11.s64 + -5168;
	// bl 0x8249d188
	ctx.lr = 0x827C6A88;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x827c6988
	ctx.lr = 0x827C6A98;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249d108
	ctx.lr = 0x827C6AA8;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-5156
	ctx.r4.s64 = ctx.r11.s64 + -5156;
	// bl 0x8249d188
	ctx.lr = 0x827C6AB8;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x827c6988
	ctx.lr = 0x827C6AC8;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x827C6AD8;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-5144
	ctx.r4.s64 = ctx.r11.s64 + -5144;
	// bl 0x8249d188
	ctx.lr = 0x827C6AE8;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x827c6988
	ctx.lr = 0x827C6AF8;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249d108
	ctx.lr = 0x827C6B08;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-5132
	ctx.r4.s64 = ctx.r11.s64 + -5132;
	// bl 0x8249d188
	ctx.lr = 0x827C6B18;
	sub_8249D188(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x827c6988
	ctx.lr = 0x827C6B28;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8249d108
	ctx.lr = 0x827C6B38;
	sub_8249D108(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C6B50"))) PPC_WEAK_FUNC(sub_827C6B50);
PPC_FUNC_IMPL(__imp__sub_827C6B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C6B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x827c6650
	ctx.lr = 0x827C6B68;
	sub_827C6650(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5120
	ctx.r4.s64 = ctx.r11.s64 + -5120;
	// bl 0x8249d188
	ctx.lr = 0x827C6B78;
	sub_8249D188(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,64(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// bl 0x827c6988
	ctx.lr = 0x827C6B88;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249d108
	ctx.lr = 0x827C6B98;
	sub_8249D108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r29,68
	ctx.r29.s64 = ctx.r29.s64 + 68;
loc_827C6BA0:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82802018
	ctx.lr = 0x827C6BAC;
	sub_82802018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827b4690
	ctx.lr = 0x827C6BC4;
	sub_827B4690(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82801900
	ctx.lr = 0x827C6BD0;
	sub_82801900(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827c69f8
	ctx.lr = 0x827C6BDC;
	sub_827C69F8(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x827b4708
	ctx.lr = 0x827C6C04;
	sub_827B4708(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x8279c958
	ctx.lr = 0x827C6C24;
	sub_8279C958(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801960
	ctx.lr = 0x827C6C34;
	sub_82801960(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x827b4578
	ctx.lr = 0x827C6C44;
	sub_827B4578(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x827c6ba0
	if (ctx.cr6.lt) goto loc_827C6BA0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f5e8
	ctx.lr = 0x827C6C68;
	sub_8279F5E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x827c8e18
	ctx.lr = 0x827C6C7C;
	sub_827C8E18(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8279f648
	ctx.lr = 0x827C6C84;
	sub_8279F648(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6C90"))) PPC_WEAK_FUNC(sub_827C6C90);
PPC_FUNC_IMPL(__imp__sub_827C6C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C6C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-5104
	ctx.r4.s64 = ctx.r11.s64 + -5104;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8249d188
	ctx.lr = 0x827C6CBC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// bl 0x827c6988
	ctx.lr = 0x827C6CCC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8249d108
	ctx.lr = 0x827C6CDC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x8249d188
	ctx.lr = 0x827C6CEC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,36(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x827c6988
	ctx.lr = 0x827C6CFC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8249d108
	ctx.lr = 0x827C6D0C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-5072
	ctx.r4.s64 = ctx.r11.s64 + -5072;
	// bl 0x8249d188
	ctx.lr = 0x827C6D1C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r5,84(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// bl 0x827c6988
	ctx.lr = 0x827C6D2C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8249d108
	ctx.lr = 0x827C6D3C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-5056
	ctx.r4.s64 = ctx.r11.s64 + -5056;
	// bl 0x8249d188
	ctx.lr = 0x827C6D4C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,88(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// bl 0x827c6988
	ctx.lr = 0x827C6D5C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8249d108
	ctx.lr = 0x827C6D6C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-5040
	ctx.r4.s64 = ctx.r11.s64 + -5040;
	// bl 0x8249d188
	ctx.lr = 0x827C6D7C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// bl 0x827c6988
	ctx.lr = 0x827C6D8C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8249d108
	ctx.lr = 0x827C6D9C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-5028
	ctx.r4.s64 = ctx.r11.s64 + -5028;
	// bl 0x8249d188
	ctx.lr = 0x827C6DAC;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,136(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// bl 0x827c6988
	ctx.lr = 0x827C6DBC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8249d108
	ctx.lr = 0x827C6DCC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x8249d188
	ctx.lr = 0x827C6DDC;
	sub_8249D188(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,140(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// bl 0x827c6988
	ctx.lr = 0x827C6DEC;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8249d108
	ctx.lr = 0x827C6DFC;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-5004
	ctx.r4.s64 = ctx.r11.s64 + -5004;
	// bl 0x8249d188
	ctx.lr = 0x827C6E0C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r5,144(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// bl 0x827c6988
	ctx.lr = 0x827C6E1C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8249d108
	ctx.lr = 0x827C6E2C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-4992
	ctx.r4.s64 = ctx.r11.s64 + -4992;
	// bl 0x8249d188
	ctx.lr = 0x827C6E3C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r5,148(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// bl 0x827c6988
	ctx.lr = 0x827C6E4C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8249d108
	ctx.lr = 0x827C6E5C;
	sub_8249D108(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-4976
	ctx.r4.s64 = ctx.r11.s64 + -4976;
	// bl 0x8249d188
	ctx.lr = 0x827C6E6C;
	sub_8249D188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r5,152(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x827c6988
	ctx.lr = 0x827C6E7C;
	sub_827C6988(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8249d108
	ctx.lr = 0x827C6E8C;
	sub_8249D108(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r10,r10,-4964
	ctx.r10.s64 = ctx.r10.s64 + -4964;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8279c958
	ctx.lr = 0x827C6EB8;
	sub_8279C958(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6EC0"))) PPC_WEAK_FUNC(sub_827C6EC0);
PPC_FUNC_IMPL(__imp__sub_827C6EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C6EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8279fe40
	ctx.lr = 0x827C6EDC;
	sub_8279FE40(ctx, base);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827c6ef0
	if (ctx.cr6.eq) goto loc_827C6EF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x827c6ef4
	goto loc_827C6EF4;
loc_827C6EF0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827C6EF4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c6f44
	if (!ctx.cr6.eq) goto loc_827C6F44;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// addi r6,r10,-29032
	ctx.r6.s64 = ctx.r10.s64 + -29032;
	// lwz r11,17176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17176);
	// addi r4,r9,-30088
	ctx.r4.s64 = ctx.r9.s64 + -30088;
	// addi r3,r8,-29656
	ctx.r3.s64 = ctx.r8.s64 + -29656;
	// li r5,1389
	ctx.r5.s64 = 1389;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C6F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C6F44:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827c6f7c
	if (ctx.cr6.eq) goto loc_827C6F7C;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8277db50
	ctx.lr = 0x827C6F5C;
	sub_8277DB50(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c6fa0
	if (ctx.cr6.eq) goto loc_827C6FA0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827c6fa0
	if (!ctx.cr6.eq) goto loc_827C6FA0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827C6F7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// beq 0x827c6fac
	if (ctx.cr0.eq) goto loc_827C6FAC;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// bl 0x827a6c70
	ctx.lr = 0x827C6F9C;
	sub_827A6C70(ctx, base);
	// b 0x827c6fc4
	goto loc_827C6FC4;
loc_827C6FA0:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82794c30
	ctx.lr = 0x827C6FAC;
	sub_82794C30(ctx, base);
loc_827C6FAC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827C6FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827C6FC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C6FD0"))) PPC_WEAK_FUNC(sub_827C6FD0);
PPC_FUNC_IMPL(__imp__sub_827C6FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-7004
	ctx.r4.s64 = ctx.r11.s64 + -7004;
	// bl 0x82801d78
	ctx.lr = 0x827C6FF0;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827C6FFC;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801738
	ctx.lr = 0x827C7008;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x82801f80
	ctx.lr = 0x827C7038;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7050
	if (ctx.cr0.eq) goto loc_827C7050;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827c70a8
	if (ctx.cr6.eq) goto loc_827C70A8;
loc_827C7050:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C705C;
	sub_82802018(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-4
	ctx.r4.s64 = -4;
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
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C70A8;
	sub_82802168(ctx, base);
loc_827C70A8:
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C70B4;
	sub_828019B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-3
	ctx.r4.s64 = -3;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C70CC;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C70F0"))) PPC_WEAK_FUNC(sub_827C70F0);
PPC_FUNC_IMPL(__imp__sub_827C70F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6952
	ctx.r4.s64 = ctx.r11.s64 + -6952;
	// bl 0x82801d78
	ctx.lr = 0x827C7110;
	sub_82801D78(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C711C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c71ac
	if (ctx.cr0.eq) goto loc_827C71AC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x827c71ac
	if (!ctx.cr6.eq) goto loc_827C71AC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C7160;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r4,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r4.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827c7198
	if (ctx.cr0.eq) goto loc_827C7198;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c7198
	if (!ctx.cr6.eq) goto loc_827C7198;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c7198
	if (ctx.cr0.eq) goto loc_827C7198;
loc_827C7188:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82804670
	ctx.lr = 0x827C7194;
	sub_82804670(ctx, base);
	// b 0x827c7278
	goto loc_827C7278;
loc_827C7198:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x827c71ac
	if (ctx.cr0.eq) goto loc_827C71AC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827c7278
	if (ctx.cr6.eq) goto loc_827C7278;
loc_827C71AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C71B8;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c7260
	if (ctx.cr0.eq) goto loc_827C7260;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6936
	ctx.r4.s64 = ctx.r11.s64 + -6936;
	// bl 0x82801d78
	ctx.lr = 0x827C71D0;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C71DC;
	sub_82801F80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x827c723c
	if (ctx.cr0.eq) goto loc_827C723C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827c723c
	if (!ctx.cr6.eq) goto loc_827C723C;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x827c7188
	goto loc_827C7188;
loc_827C723C:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827c7260
	if (ctx.cr0.eq) goto loc_827C7260;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7260
	if (!ctx.cr6.eq) goto loc_827C7260;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827C725C;
	sub_82801F28(ctx, base);
	// b 0x827c7278
	goto loc_827C7278;
loc_827C7260:
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
loc_827C7278:
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

__attribute__((alias("__imp__sub_827C7290"))) PPC_WEAK_FUNC(sub_827C7290);
PPC_FUNC_IMPL(__imp__sub_827C7290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// bl 0x82801d78
	ctx.lr = 0x827C72B0;
	sub_82801D78(ctx, base);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C72BC;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c737c
	if (ctx.cr0.eq) goto loc_827C737C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x827c737c
	if (!ctx.cr6.eq) goto loc_827C737C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C7300;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c737c
	if (ctx.cr0.eq) goto loc_827C737C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827c737c
	if (!ctx.cr6.eq) goto loc_827C737C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827c737c
	if (ctx.cr0.eq) goto loc_827C737C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
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
	ctx.lr = 0x827C7378;
	sub_82804670(ctx, base);
	// b 0x827c73d0
	goto loc_827C73D0;
loc_827C737C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c73b8
	if (!ctx.cr6.lt) goto loc_827C73B8;
loc_827C738C:
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
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c738c
	if (ctx.cr6.lt) goto loc_827C738C;
loc_827C73B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C73D0;
	sub_82802168(ctx, base);
loc_827C73D0:
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

__attribute__((alias("__imp__sub_827C73E8"))) PPC_WEAK_FUNC(sub_827C73E8);
PPC_FUNC_IMPL(__imp__sub_827C73E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C73F0;
	__savegprlr_27(ctx, base);
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
	// bge cr6,0x827c7934
	if (!ctx.cr6.lt) goto loc_827C7934;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c7934
	if (ctx.cr6.eq) goto loc_827C7934;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827c7920
	if (!ctx.cr6.eq) goto loc_827C7920;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-7004
	ctx.r4.s64 = ctx.r11.s64 + -7004;
	// bl 0x82801d78
	ctx.lr = 0x827C7428;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7434;
	sub_82801F80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x82801f80
	ctx.lr = 0x827C7464;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c74c0
	if (ctx.cr0.eq) goto loc_827C74C0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x827c74c0
	if (!ctx.cr6.eq) goto loc_827C74C0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C74A8;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c7948
	if (ctx.cr0.eq) goto loc_827C7948;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c7948
	if (!ctx.cr6.eq) goto loc_827C7948;
loc_827C74C0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c74fc
	if (!ctx.cr6.lt) goto loc_827C74FC;
loc_827C74D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c74d4
	if (ctx.cr6.lt) goto loc_827C74D4;
loc_827C74FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802090
	ctx.lr = 0x827C7530;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c7850
	if (ctx.cr0.eq) goto loc_827C7850;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// addi r30,r11,-13100
	ctx.r30.s64 = ctx.r11.s64 + -13100;
	// addi r29,r10,-6952
	ctx.r29.s64 = ctx.r10.s64 + -6952;
	// addi r27,r9,-4956
	ctx.r27.s64 = ctx.r9.s64 + -4956;
loc_827C7550:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C755C;
	sub_82801960(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C7568;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827c75fc
	if (ctx.cr0.eq) goto loc_827C75FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C757C;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7588;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7734
	if (ctx.cr0.eq) goto loc_827C7734;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c7734
	if (!ctx.cr6.eq) goto loc_827C7734;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_827C75DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827C75F8;
	sub_82804670(ctx, base);
	// b 0x827c7948
	goto loc_827C7948;
loc_827C75FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// bl 0x82801f80
	ctx.lr = 0x827C7628;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7948
	if (ctx.cr0.eq) goto loc_827C7948;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c7948
	if (!ctx.cr6.eq) goto loc_827C7948;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C7650;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C765C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7734
	if (ctx.cr0.eq) goto loc_827C7734;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7734
	if (!ctx.cr6.eq) goto loc_827C7734;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x82801f80
	ctx.lr = 0x827C76A4;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c76bc
	if (ctx.cr0.eq) goto loc_827C76BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827c785c
	if (ctx.cr6.eq) goto loc_827C785C;
loc_827C76BC:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c7734
	if (ctx.cr0.eq) goto loc_827C7734;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c7734
	if (!ctx.cr6.eq) goto loc_827C7734;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c7734
	if (ctx.cr0.eq) goto loc_827C7734;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x827c75dc
	goto loc_827C75DC;
loc_827C7720:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C7734:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c7720
	if (ctx.cr6.lt) goto loc_827C7720;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801d78
	ctx.lr = 0x827C7760;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C776C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c781c
	if (ctx.cr0.eq) goto loc_827C781C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c781c
	if (!ctx.cr6.eq) goto loc_827C781C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c781c
	if (ctx.cr0.eq) goto loc_827C781C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827C77EC;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7948
	if (ctx.cr0.eq) goto loc_827C7948;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827c7948
	if (!ctx.cr6.eq) goto loc_827C7948;
	// b 0x827c781c
	goto loc_827C781C;
loc_827C7808:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C781C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c7808
	if (ctx.cr6.lt) goto loc_827C7808;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802090
	ctx.lr = 0x827C7848;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c7550
	if (!ctx.cr0.eq) goto loc_827C7550;
loc_827C7850:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x827c793c
	goto loc_827C793C;
loc_827C785C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827C7868;
	sub_82801CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82802018
	ctx.lr = 0x827C7878;
	sub_82802018(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4948
	ctx.r4.s64 = ctx.r11.s64 + -4948;
	// bl 0x82801d78
	ctx.lr = 0x827C7888;
	sub_82801D78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C78B0;
	sub_82802168(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C78BC;
	sub_828019B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827C78C4;
	sub_82802238(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// bl 0x828019b8
	ctx.lr = 0x827C7910;
	sub_828019B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c6fd0
	ctx.lr = 0x827C791C;
	sub_827C6FD0(ctx, base);
	// b 0x827c7948
	goto loc_827C7948;
loc_827C7920:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7934
	if (!ctx.cr6.eq) goto loc_827C7934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c70f0
	ctx.lr = 0x827C7930;
	sub_827C70F0(ctx, base);
	// b 0x827c7948
	goto loc_827C7948;
loc_827C7934:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_827C793C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C7948:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7958"))) PPC_WEAK_FUNC(sub_827C7958);
PPC_FUNC_IMPL(__imp__sub_827C7958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C7960;
	__savegprlr_27(ctx, base);
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
	// bge cr6,0x827c7cc8
	if (!ctx.cr6.lt) goto loc_827C7CC8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c7cc8
	if (ctx.cr6.eq) goto loc_827C7CC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827c7cb8
	if (!ctx.cr6.eq) goto loc_827C7CB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82802090
	ctx.lr = 0x827C7994;
	sub_82802090(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-13080
	ctx.r30.s64 = ctx.r11.s64 + -13080;
	// addi r29,r10,-6944
	ctx.r29.s64 = ctx.r10.s64 + -6944;
	// addi r28,r9,-4940
	ctx.r28.s64 = ctx.r9.s64 + -4940;
loc_827C79B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7c88
	if (ctx.cr0.eq) goto loc_827C7C88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7c88
	if (!ctx.cr6.eq) goto loc_827C7C88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C79D4;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827c7a84
	if (ctx.cr0.eq) goto loc_827C7A84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C79E8;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C79F4;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c79b0
	if (ctx.cr0.eq) goto loc_827C79B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c79b0
	if (!ctx.cr6.eq) goto loc_827C79B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
loc_827C7A70:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82804670
	ctx.lr = 0x827C7A80;
	sub_82804670(ctx, base);
	// b 0x827c7cc8
	goto loc_827C7CC8;
loc_827C7A84:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C7A8C;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7A98;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c7b08
	if (ctx.cr0.eq) goto loc_827C7B08;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x827c7b08
	if (!ctx.cr6.eq) goto loc_827C7B08;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C7ADC;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7b04
	if (ctx.cr0.eq) goto loc_827C7B04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c7b04
	if (!ctx.cr6.eq) goto loc_827C7B04;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x827c7c2c
	if (!ctx.cr0.eq) goto loc_827C7C2C;
loc_827C7B04:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C7B08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801d78
	ctx.lr = 0x827C7B20;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7B2C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r8,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r8.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827c7bf0
	if (ctx.cr0.eq) goto loc_827C7BF0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c7bf0
	if (!ctx.cr6.eq) goto loc_827C7BF0;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x827c7bf0
	if (ctx.cr0.eq) goto loc_827C7BF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x82804670
	ctx.lr = 0x827C7BC4;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r8,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r8.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827c7bf0
	if (ctx.cr0.eq) goto loc_827C7BF0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827c7bf0
	if (!ctx.cr6.eq) goto loc_827C7BF0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827C7BE8;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c7cc8
	if (!ctx.cr0.eq) goto loc_827C7CC8;
loc_827C7BF0:
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C7C00;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c7c1c
	if (!ctx.cr0.eq) goto loc_827C7C1C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C7C1C:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C7C28;
	sub_82801960(ctx, base);
	// b 0x827c79b0
	goto loc_827C79B0;
loc_827C7C2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// b 0x827c7a70
	goto loc_827C7A70;
loc_827C7C74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C7C88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c7c74
	if (ctx.cr6.lt) goto loc_827C7C74;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827c6fd0
	ctx.lr = 0x827C7CB4;
	sub_827C6FD0(ctx, base);
	// b 0x827c7cc8
	goto loc_827C7CC8;
loc_827C7CB8:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7cc8
	if (!ctx.cr6.eq) goto loc_827C7CC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c7290
	ctx.lr = 0x827C7CC8;
	sub_827C7290(ctx, base);
loc_827C7CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7CD8"))) PPC_WEAK_FUNC(sub_827C7CD8);
PPC_FUNC_IMPL(__imp__sub_827C7CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827c7d78
	if (!ctx.cr6.lt) goto loc_827C7D78;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c7d78
	if (ctx.cr6.eq) goto loc_827C7D78;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827c7d78
	if (!ctx.cr6.eq) goto loc_827C7D78;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4932
	ctx.r4.s64 = ctx.r11.s64 + -4932;
	// bl 0x82801d78
	ctx.lr = 0x827C7D1C;
	sub_82801D78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7D28;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c7d78
	if (ctx.cr0.eq) goto loc_827C7D78;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c7d78
	if (!ctx.cr6.eq) goto loc_827C7D78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C7D4C;
	sub_828019B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82804670
	ctx.lr = 0x827C7D70;
	sub_82804670(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827c7d90
	goto loc_827C7D90;
loc_827C7D78:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4924
	ctx.r4.s64 = ctx.r11.s64 + -4924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c2530
	ctx.lr = 0x827C7D8C;
	sub_827C2530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C7D90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C7DA8"))) PPC_WEAK_FUNC(sub_827C7DA8);
PPC_FUNC_IMPL(__imp__sub_827C7DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801ab8
	ctx.lr = 0x827C7DCC;
	sub_82801AB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c7e90
	if (ctx.cr0.eq) goto loc_827C7E90;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// b 0x827c7e78
	goto loc_827C7E78;
loc_827C7DF8:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C7E04;
	sub_82801960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C7E10;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C7E1C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c7e34
	if (ctx.cr0.eq) goto loc_827C7E34;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x827c7ec0
	if (ctx.cr6.eq) goto loc_827C7EC0;
loc_827C7E34:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c7e70
	if (!ctx.cr6.lt) goto loc_827C7E70;
loc_827C7E44:
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
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c7e44
	if (ctx.cr6.lt) goto loc_827C7E44;
loc_827C7E70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_827C7E78:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827C7E88;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c7df8
	if (!ctx.cr0.eq) goto loc_827C7DF8;
loc_827C7E90:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-4884
	ctx.r4.s64 = ctx.r11.s64 + -4884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c2530
	ctx.lr = 0x827C7EA4;
	sub_827C2530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C7EA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827C7EC0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
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
	ctx.lr = 0x827C7F14;
	sub_82804670(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827c7ea8
	goto loc_827C7EA8;
}

__attribute__((alias("__imp__sub_827C7F20"))) PPC_WEAK_FUNC(sub_827C7F20);
PPC_FUNC_IMPL(__imp__sub_827C7F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4832
	ctx.r4.s64 = ctx.r11.s64 + -4832;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F30"))) PPC_WEAK_FUNC(sub_827C7F30);
PPC_FUNC_IMPL(__imp__sub_827C7F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4824
	ctx.r4.s64 = ctx.r11.s64 + -4824;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F40"))) PPC_WEAK_FUNC(sub_827C7F40);
PPC_FUNC_IMPL(__imp__sub_827C7F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4816
	ctx.r4.s64 = ctx.r11.s64 + -4816;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F50"))) PPC_WEAK_FUNC(sub_827C7F50);
PPC_FUNC_IMPL(__imp__sub_827C7F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4808
	ctx.r4.s64 = ctx.r11.s64 + -4808;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F60"))) PPC_WEAK_FUNC(sub_827C7F60);
PPC_FUNC_IMPL(__imp__sub_827C7F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4800
	ctx.r4.s64 = ctx.r11.s64 + -4800;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F70"))) PPC_WEAK_FUNC(sub_827C7F70);
PPC_FUNC_IMPL(__imp__sub_827C7F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4796
	ctx.r4.s64 = ctx.r11.s64 + -4796;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F80"))) PPC_WEAK_FUNC(sub_827C7F80);
PPC_FUNC_IMPL(__imp__sub_827C7F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-18696
	ctx.r4.s64 = ctx.r11.s64 + -18696;
	// b 0x827c7da8
	sub_827C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C7F90"))) PPC_WEAK_FUNC(sub_827C7F90);
PPC_FUNC_IMPL(__imp__sub_827C7F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C7F98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827C7FA8;
	sub_82801CB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-7032
	ctx.r4.s64 = ctx.r10.s64 + -7032;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82801d78
	ctx.lr = 0x827C7FC0;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827C7FCC;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,2
	ctx.r29.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C7FF4;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82802090
	ctx.lr = 0x827C8000;
	sub_82802090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// bl 0x827c22a8
	ctx.lr = 0x827C801C;
	sub_827C22A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c80e0
	if (ctx.cr0.eq) goto loc_827C80E0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-6964
	ctx.r4.s64 = ctx.r11.s64 + -6964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8038;
	sub_82801D10(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C8044;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c805c
	if (ctx.cr0.eq) goto loc_827C805C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x827c8074
	if (ctx.cr6.eq) goto loc_827C8074;
loc_827C805C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,14648
	ctx.r4.s64 = ctx.r11.s64 + 14648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C8074;
	sub_82801E40(ctx, base);
loc_827C8074:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82804670
	ctx.lr = 0x827C80A8;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-5
	ctx.r4.s64 = -5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C80E0;
	sub_82802168(ctx, base);
loc_827C80E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C80F8"))) PPC_WEAK_FUNC(sub_827C80F8);
PPC_FUNC_IMPL(__imp__sub_827C80F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82802090
	ctx.lr = 0x827C8118;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c8218
	if (ctx.cr0.eq) goto loc_827C8218;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C812C;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827C8138;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c8218
	if (ctx.cr0.eq) goto loc_827C8218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C8148;
	sub_82801BB0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,25588
	ctx.r10.s64 = ctx.r10.s64 + 25588;
loc_827C8154:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827c8178
	if (ctx.cr0.eq) goto loc_827C8178;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827c8154
	if (ctx.cr6.eq) goto loc_827C8154;
loc_827C8178:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827c8188
	if (!ctx.cr0.eq) goto loc_827C8188;
loc_827C8180:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827c8338
	goto loc_827C8338;
loc_827C8188:
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-7052
	ctx.r10.s64 = ctx.r10.s64 + -7052;
loc_827C8194:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827c81b8
	if (ctx.cr0.eq) goto loc_827C81B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827c8194
	if (ctx.cr6.eq) goto loc_827C8194;
loc_827C81B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827c81d8
	if (ctx.cr0.eq) goto loc_827C81D8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-29932
	ctx.r4.s64 = ctx.r11.s64 + -29932;
	// bl 0x82a4e930
	ctx.lr = 0x827C81D0;
	sub_82A4E930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c8218
	if (!ctx.cr0.eq) goto loc_827C8218;
loc_827C81D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C8204;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827C8210;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c8180
	if (!ctx.cr0.eq) goto loc_827C8180;
loc_827C8218:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827c8234
	goto loc_827C8234;
loc_827C8220:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C8234:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c8220
	if (ctx.cr6.lt) goto loc_827C8220;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-26056
	ctx.r4.s64 = ctx.r10.s64 + -26056;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801d78
	ctx.lr = 0x827C8264;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827C8270;
	sub_82801F28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c82b8
	if (ctx.cr0.eq) goto loc_827C82B8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c82b8
	if (!ctx.cr6.eq) goto loc_827C82B8;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82804670
	ctx.lr = 0x827C82B4;
	sub_82804670(ctx, base);
	// b 0x827c8180
	goto loc_827C8180;
loc_827C82B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c82f0
	if (!ctx.cr6.lt) goto loc_827C82F0;
loc_827C82C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c82c8
	if (ctx.cr6.lt) goto loc_827C82C8;
loc_827C82F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802090
	ctx.lr = 0x827C8308;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c8334
	if (ctx.cr0.eq) goto loc_827C8334;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C831C;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827C8328;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x827c8338
	if (!ctx.cr0.eq) goto loc_827C8338;
loc_827C8334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C8338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8350"))) PPC_WEAK_FUNC(sub_827C8350);
PPC_FUNC_IMPL(__imp__sub_827C8350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-6936
	ctx.r4.s64 = ctx.r11.s64 + -6936;
	// bl 0x82801d78
	ctx.lr = 0x827C8370;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// bl 0x82801e40
	ctx.lr = 0x827C8384;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8390;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6928
	ctx.r4.s64 = ctx.r11.s64 + -6928;
	// bl 0x82801d78
	ctx.lr = 0x827C83A0;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,31064
	ctx.r4.s64 = ctx.r11.s64 + 31064;
	// bl 0x82801e40
	ctx.lr = 0x827C83B4;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C83C0;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4792
	ctx.r4.s64 = ctx.r11.s64 + -4792;
	// bl 0x82801d78
	ctx.lr = 0x827C83D0;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32544
	ctx.r4.s64 = ctx.r11.s64 + 32544;
	// bl 0x82801e40
	ctx.lr = 0x827C83E4;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C83F0;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4784
	ctx.r4.s64 = ctx.r11.s64 + -4784;
	// bl 0x82801d78
	ctx.lr = 0x827C8400;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32560
	ctx.r4.s64 = ctx.r11.s64 + 32560;
	// bl 0x82801e40
	ctx.lr = 0x827C8414;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8420;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4776
	ctx.r4.s64 = ctx.r11.s64 + -4776;
	// bl 0x82801d78
	ctx.lr = 0x827C8430;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x82801e40
	ctx.lr = 0x827C8444;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8450;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4768
	ctx.r4.s64 = ctx.r11.s64 + -4768;
	// bl 0x82801d78
	ctx.lr = 0x827C8460;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32592
	ctx.r4.s64 = ctx.r11.s64 + 32592;
	// bl 0x82801e40
	ctx.lr = 0x827C8474;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8480;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4760
	ctx.r4.s64 = ctx.r11.s64 + -4760;
	// bl 0x82801d78
	ctx.lr = 0x827C8490;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32608
	ctx.r4.s64 = ctx.r11.s64 + 32608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C84A4;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C84B0;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4752
	ctx.r4.s64 = ctx.r11.s64 + -4752;
	// bl 0x82801d78
	ctx.lr = 0x827C84C0;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32624
	ctx.r4.s64 = ctx.r11.s64 + 32624;
	// bl 0x82801e40
	ctx.lr = 0x827C84D4;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C84E0;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4744
	ctx.r4.s64 = ctx.r11.s64 + -4744;
	// bl 0x82801d78
	ctx.lr = 0x827C84F0;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32640
	ctx.r4.s64 = ctx.r11.s64 + 32640;
	// bl 0x82801e40
	ctx.lr = 0x827C8504;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8510;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4736
	ctx.r4.s64 = ctx.r11.s64 + -4736;
	// bl 0x82801d78
	ctx.lr = 0x827C8520;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,31960
	ctx.r4.s64 = ctx.r11.s64 + 31960;
	// bl 0x82801e40
	ctx.lr = 0x827C8534;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8540;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4728
	ctx.r4.s64 = ctx.r11.s64 + -4728;
	// bl 0x82801d78
	ctx.lr = 0x827C8550;
	sub_82801D78(ctx, base);
	// lis r11,-32132
	ctx.r11.s64 = -2105802752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// bl 0x82801e40
	ctx.lr = 0x827C8564;
	sub_82801E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// bl 0x82802168
	ctx.lr = 0x827C8570;
	sub_82802168(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4720
	ctx.r4.s64 = ctx.r11.s64 + -4720;
	// bl 0x82801d78
	ctx.lr = 0x827C8580;
	sub_82801D78(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-32520
	ctx.r4.s64 = ctx.r11.s64 + -32520;
	// bl 0x82801e40
	ctx.lr = 0x827C8594;
	sub_82801E40(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C85A0;
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

__attribute__((alias("__imp__sub_827C85B8"))) PPC_WEAK_FUNC(sub_827C85B8);
PPC_FUNC_IMPL(__imp__sub_827C85B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C85C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827c85f0
	if (ctx.cr6.eq) goto loc_827C85F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
loc_827C85F0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-4708
	ctx.r4.s64 = ctx.r11.s64 + -4708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828031d8
	ctx.lr = 0x827C8604;
	sub_828031D8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r10,r11,-4704
	ctx.r10.s64 = ctx.r11.s64 + -4704;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_827C8610:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827c8634
	if (ctx.cr0.eq) goto loc_827C8634;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827c8610
	if (ctx.cr6.eq) goto loc_827C8610;
loc_827C8634:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827c865c
	if (!ctx.cr0.eq) goto loc_827C865C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x827c865c
	if (!ctx.cr0.eq) goto loc_827C865C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-4696
	ctx.r4.s64 = ctx.r11.s64 + -4696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827C865C;
	sub_827C87A8(ctx, base);
loc_827C865C:
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x827c8674
	if (!ctx.cr6.eq) goto loc_827C8674;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r6,r11,-4664
	ctx.r6.s64 = ctx.r11.s64 + -4664;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
loc_827C8674:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-4660
	ctx.r4.s64 = ctx.r11.s64 + -4660;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827C868C;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827C8690"))) PPC_WEAK_FUNC(sub_827C8690);
PPC_FUNC_IMPL(__imp__sub_827C8690) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r6,r11,17724
	ctx.r6.s64 = ctx.r11.s64 + 17724;
	// addi r8,r10,-11500
	ctx.r8.s64 = ctx.r10.s64 + -11500;
	// bne cr6,0x827c86cc
	if (!ctx.cr6.eq) goto loc_827C86CC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x827c86d4
	goto loc_827C86D4;
loc_827C86CC:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_827C86D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828017c0
	ctx.lr = 0x827C86E0;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c86fc
	if (ctx.cr0.eq) goto loc_827C86FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827c86fc
	if (ctx.cr6.eq) goto loc_827C86FC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
loc_827C86FC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4628
	ctx.r4.s64 = ctx.r11.s64 + -4628;
	// bl 0x82801dc0
	ctx.lr = 0x827C870C;
	sub_82801DC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827C871C;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827C8720"))) PPC_WEAK_FUNC(sub_827C8720);
PPC_FUNC_IMPL(__imp__sub_827C8720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82802c40
	ctx.lr = 0x827C873C;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c877c
	if (ctx.cr0.eq) goto loc_827C877C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-25812
	ctx.r4.s64 = ctx.r11.s64 + -25812;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828031d8
	ctx.lr = 0x827C8758;
	sub_828031D8(ctx, base);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x827c877c
	if (!ctx.cr6.gt) goto loc_827C877C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-4608
	ctx.r4.s64 = ctx.r11.s64 + -4608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827C8778;
	sub_82801DC0(ctx, base);
	// b 0x827c8790
	goto loc_827C8790;
loc_827C877C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8790;
	sub_82801D10(ctx, base);
loc_827C8790:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C87A8"))) PPC_WEAK_FUNC(sub_827C87A8);
PPC_FUNC_IMPL(__imp__sub_827C87A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x827c8720
	ctx.lr = 0x827C87F0;
	sub_827C8720(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c880c
	if (ctx.cr6.lt) goto loc_827C880C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82809030
	ctx.lr = 0x827C880C;
	sub_82809030(ctx, base);
loc_827C880C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82807c40
	ctx.lr = 0x827C881C;
	sub_82807C40(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802508
	ctx.lr = 0x827C8828;
	sub_82802508(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82803a18
	ctx.lr = 0x827C8830;
	sub_82803A18(ctx, base);
}

__attribute__((alias("__imp__sub_827C8830"))) PPC_WEAK_FUNC(sub_827C8830);
PPC_FUNC_IMPL(__imp__sub_827C8830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82801d78
	ctx.lr = 0x827C8850;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C885C;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c8874
	if (ctx.cr0.eq) goto loc_827C8874;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827c887c
	if (ctx.cr6.eq) goto loc_827C887C;
loc_827C8874:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827c88fc
	goto loc_827C88FC;
loc_827C887C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C8888;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C8894;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C88C0;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// bl 0x82801d78
	ctx.lr = 0x827C88EC;
	sub_82801D78(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C88F8;
	sub_82802168(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827C88FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8918"))) PPC_WEAK_FUNC(sub_827C8918);
PPC_FUNC_IMPL(__imp__sub_827C8918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82802090
	ctx.lr = 0x827C8938;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c89bc
	if (ctx.cr0.eq) goto loc_827C89BC;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C894C;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C8958;
	sub_82801BB0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c89b0
	if (ctx.cr0.eq) goto loc_827C89B0;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r10,r10,-3412
	ctx.r10.s64 = ctx.r10.s64 + -3412;
loc_827C8968:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827c898c
	if (ctx.cr0.eq) goto loc_827C898C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827c8968
	if (ctx.cr6.eq) goto loc_827C8968;
loc_827C898C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827c89b0
	if (!ctx.cr0.eq) goto loc_827C89B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801cb8
	ctx.lr = 0x827C89AC;
	sub_82801CB8(ctx, base);
	// b 0x827c89c0
	goto loc_827C89C0;
loc_827C89B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C89BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C89C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C89D8"))) PPC_WEAK_FUNC(sub_827C89D8);
PPC_FUNC_IMPL(__imp__sub_827C89D8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x828017c0
	ctx.lr = 0x827C89EC;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c8a00
	if (ctx.cr0.eq) goto loc_827C8A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827c8a10
	if (!ctx.cr6.eq) goto loc_827C8A10;
loc_827C8A00:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r5,r11,-4580
	ctx.r5.s64 = ctx.r11.s64 + -4580;
	// bl 0x827c85b8
	ctx.lr = 0x827C8A10;
	sub_827C85B8(ctx, base);
loc_827C8A10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8A20"))) PPC_WEAK_FUNC(sub_827C8A20);
PPC_FUNC_IMPL(__imp__sub_827C8A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C8A28;
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
	// bl 0x82801bb0
	ctx.lr = 0x827C8A3C;
	sub_82801BB0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x827c8a54
	if (!ctx.cr0.eq) goto loc_827C8A54;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827C8A54;
	sub_827C8690(ctx, base);
loc_827C8A54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827c8a6c
	if (ctx.cr6.eq) goto loc_827C8A6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801c50
	ctx.lr = 0x827C8A68;
	sub_82801C50(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_827C8A6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C8A78"))) PPC_WEAK_FUNC(sub_827C8A78);
PPC_FUNC_IMPL(__imp__sub_827C8A78) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x828017c0
	ctx.lr = 0x827C8A90;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c8aa4
	if (ctx.cr0.eq) goto loc_827C8AA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827c8ae8
	if (ctx.cr6.gt) goto loc_827C8AE8;
loc_827C8AA4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827c8ae0
	if (ctx.cr6.eq) goto loc_827C8AE0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827c8ad8
	if (ctx.cr6.eq) goto loc_827C8AD8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_827C8AB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827c8ab8
	if (!ctx.cr6.eq) goto loc_827C8AB8;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x827c8adc
	goto loc_827C8ADC;
loc_827C8AD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827C8ADC:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_827C8AE0:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x827c8af4
	goto loc_827C8AF4;
loc_827C8AE8:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827C8AF4;
	sub_827C8A20(ctx, base);
loc_827C8AF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8B08"))) PPC_WEAK_FUNC(sub_827C8B08);
PPC_FUNC_IMPL(__imp__sub_827C8B08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82801b00
	ctx.lr = 0x827C8B2C;
	sub_82801B00(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x827c8b64
	if (!ctx.cr6.eq) goto loc_827C8B64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C8B4C;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c8b64
	if (!ctx.cr0.eq) goto loc_827C8B64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827C8B64;
	sub_827C8690(ctx, base);
loc_827C8B64:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_827C8B88"))) PPC_WEAK_FUNC(sub_827C8B88);
PPC_FUNC_IMPL(__imp__sub_827C8B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x82801d78
	ctx.lr = 0x827C8BA0;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C8BAC;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c8bd4
	if (ctx.cr0.eq) goto loc_827C8BD4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c8bd4
	if (!ctx.cr6.eq) goto loc_827C8BD4;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827c8be4
	goto loc_827C8BE4;
loc_827C8BD4:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C8BE0;
	sub_82801960(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827C8BE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8BF8"))) PPC_WEAK_FUNC(sub_827C8BF8);
PPC_FUNC_IMPL(__imp__sub_827C8BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C8C00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c8c94
	if (ctx.cr6.eq) goto loc_827C8C94;
	// bl 0x82801d78
	ctx.lr = 0x827C8C20;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827C8C2C;
	sub_82801F28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c8c88
	if (ctx.cr0.eq) goto loc_827C8C88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c8c88
	if (!ctx.cr6.eq) goto loc_827C8C88;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C8C50;
	sub_82802018(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C8C5C;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802118
	ctx.lr = 0x827C8C88;
	sub_82802118(ctx, base);
loc_827C8C88:
	// subfic r4,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C8C94;
	sub_828019B8(ctx, base);
loc_827C8C94:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c8d18
	if (ctx.cr6.eq) goto loc_827C8D18;
	// subfic r30,r29,-3
	ctx.xer.ca = ctx.r29.u32 <= 4294967293;
	ctx.r30.s64 = -3 - ctx.r29.s64;
loc_827C8CA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C8CAC;
	sub_82801D78(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x827c8cec
	if (!ctx.cr6.gt) goto loc_827C8CEC;
	// subfic r4,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r29.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_827C8CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801738
	ctx.lr = 0x827C8CC4;
	sub_82801738(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x827c8cbc
	if (!ctx.cr0.eq) goto loc_827C8CBC;
loc_827C8CEC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801e40
	ctx.lr = 0x827C8CFC;
	sub_82801E40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827C8D08;
	sub_82802118(ctx, base);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827c8ca4
	if (!ctx.cr6.eq) goto loc_827C8CA4;
loc_827C8D18:
	// subfic r4,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C8D24;
	sub_82801900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C8D30"))) PPC_WEAK_FUNC(sub_827C8D30);
PPC_FUNC_IMPL(__imp__sub_827C8D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827C8D50;
	sub_82801FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c8e04
	if (ctx.cr0.eq) goto loc_827C8E04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827c8e04
	if (!ctx.cr6.eq) goto loc_827C8E04;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827C8D74;
	sub_82802018(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x82802238
	ctx.lr = 0x827C8DA0;
	sub_82802238(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-7064
	ctx.r4.s64 = ctx.r11.s64 + -7064;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8DB4;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-6992
	ctx.r4.s64 = ctx.r11.s64 + -6992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8DC8;
	sub_82801D10(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C8DD4;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
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
	// bl 0x828021d0
	ctx.lr = 0x827C8E04;
	sub_828021D0(ctx, base);
loc_827C8E04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C8E18"))) PPC_WEAK_FUNC(sub_827C8E18);
PPC_FUNC_IMPL(__imp__sub_827C8E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C8E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x827c8e50
	if (ctx.cr6.gt) goto loc_827C8E50;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_827C8E50:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-4708
	ctx.r28.s64 = ctx.r11.s64 + -4708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8E68;
	sub_82801D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827C8E74;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827C8E80;
	sub_82801B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x827c8eac
	if (!ctx.cr6.eq) goto loc_827C8EAC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C8EA0;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c8eac
	if (!ctx.cr0.eq) goto loc_827C8EAC;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_827C8EAC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C8EB8;
	sub_82801900(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827c8f0c
	if (ctx.cr6.lt) goto loc_827C8F0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82801d10
	ctx.lr = 0x827C8ECC;
	sub_82801D10(ctx, base);
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// li r11,3
	ctx.r11.s64 = 3;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C8F08;
	sub_82802168(ctx, base);
	// b 0x827c8f84
	goto loc_827C8F84;
loc_827C8F0C:
	// bl 0x827c8d30
	ctx.lr = 0x827C8F10;
	sub_827C8D30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801738
	ctx.lr = 0x827C8F1C;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
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
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// bl 0x82802168
	ctx.lr = 0x827C8F78;
	sub_82802168(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C8F84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C8F90"))) PPC_WEAK_FUNC(sub_827C8F90);
PPC_FUNC_IMPL(__imp__sub_827C8F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-4708
	ctx.r4.s64 = ctx.r11.s64 + -4708;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C8FB8;
	sub_82801D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801f80
	ctx.lr = 0x827C8FC4;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827C8FD0;
	sub_82801B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827c8ffc
	if (!ctx.cr6.eq) goto loc_827C8FFC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C8FF0;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c8ffc
	if (!ctx.cr0.eq) goto loc_827C8FFC;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_827C8FFC:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C9008;
	sub_82801900(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x827c9018
	if (ctx.cr6.lt) goto loc_827C9018;
loc_827C9010:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x827c90ec
	goto loc_827C90EC;
loc_827C9018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8d30
	ctx.lr = 0x827C9020;
	sub_827C8D30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801738
	ctx.lr = 0x827C902C;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x82801f80
	ctx.lr = 0x827C905C;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827C9068;
	sub_82801B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827c9094
	if (!ctx.cr6.eq) goto loc_827C9094;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C9088;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c9094
	if (!ctx.cr0.eq) goto loc_827C9094;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_827C9094:
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C90A0;
	sub_82801900(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x827c9010
	if (!ctx.cr6.lt) goto loc_827C9010;
	// li r5,1
	ctx.r5.s64 = 1;
loc_827C90AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827C90B8;
	sub_82801FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c90d0
	if (ctx.cr0.eq) goto loc_827C90D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827c90dc
	if (ctx.cr6.eq) goto loc_827C90DC;
loc_827C90D0:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x827c90ac
	goto loc_827C90AC;
loc_827C90DC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r5,-1
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C90EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9108"))) PPC_WEAK_FUNC(sub_827C9108);
PPC_FUNC_IMPL(__imp__sub_827C9108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic. r5,r11,-12
	ctx.xer.ca = ctx.r11.u32 > 11;
	ctx.r5.s64 = ctx.r11.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x827c9138
	if (!ctx.cr0.eq) goto loc_827C9138;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827c915c
	goto loc_827C915C;
loc_827C9138:
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C9148;
	sub_82801D10(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827C915C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9178"))) PPC_WEAK_FUNC(sub_827C9178);
PPC_FUNC_IMPL(__imp__sub_827C9178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C9180;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827c9208
	if (!ctx.cr6.gt) goto loc_827C9208;
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82801c50
	ctx.lr = 0x827C91A8;
	sub_82801C50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,-2
	ctx.r30.s64 = -2;
loc_827C91B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82801c50
	ctx.lr = 0x827C91BC;
	sub_82801C50(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x827c91d8
	if (!ctx.cr6.lt) goto loc_827C91D8;
	// cmplw cr6,r27,r3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x827c91ec
	if (!ctx.cr6.gt) goto loc_827C91EC;
loc_827C91D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827c91b0
	if (ctx.cr6.lt) goto loc_827C91B0;
loc_827C91EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82802508
	ctx.lr = 0x827C91F8;
	sub_82802508(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_827C9208:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9210"))) PPC_WEAK_FUNC(sub_827C9210);
PPC_FUNC_IMPL(__imp__sub_827C9210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C9218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827c9280
	if (ctx.cr6.eq) goto loc_827C9280;
	// addi r28,r31,524
	ctx.r28.s64 = ctx.r31.s64 + 524;
loc_827C9234:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x827c925c
	if (ctx.cr6.lt) goto loc_827C925C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827C924C;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c925c
	if (ctx.cr0.eq) goto loc_827C925C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9178
	ctx.lr = 0x827C925C;
	sub_827C9178(ctx, base);
loc_827C925C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x827c9234
	if (!ctx.cr6.eq) goto loc_827C9234;
loc_827C9280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9288"))) PPC_WEAK_FUNC(sub_827C9288);
PPC_FUNC_IMPL(__imp__sub_827C9288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C9290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82801c50
	ctx.lr = 0x827C92A8;
	sub_82801C50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r11,r11,524
	ctx.r11.s64 = ctx.r11.s64 + 524;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827c92f8
	if (ctx.cr6.gt) goto loc_827C92F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C92CC;
	sub_82801BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x827C92DC;
	sub_82A4EA80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x827c9328
	goto loc_827C9328;
loc_827C92F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827C9300;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c9314
	if (ctx.cr0.eq) goto loc_827C9314;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C9314;
	sub_828019B8(ctx, base);
loc_827C9314:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x827c9178
	ctx.lr = 0x827C9328;
	sub_827C9178(ctx, base);
loc_827C9328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9330"))) PPC_WEAK_FUNC(sub_827C9330);
PPC_FUNC_IMPL(__imp__sub_827C9330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827C9338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a52520
	ctx.lr = 0x827C934C;
	sub_82A52520(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c937c
	if (!ctx.cr0.eq) goto loc_827C937C;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52038
	ctx.lr = 0x827C936C;
	sub_82A52038(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x827c9380
	if (!ctx.cr0.eq) goto loc_827C9380;
loc_827C937C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827C9380:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9388"))) PPC_WEAK_FUNC(sub_827C9388);
PPC_FUNC_IMPL(__imp__sub_827C9388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C9390;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827c93d0
	if (!ctx.cr6.eq) goto loc_827C93D0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-4544
	ctx.r4.s64 = ctx.r11.s64 + -4544;
	// bl 0x82801d10
	ctx.lr = 0x827C93C8;
	sub_82801D10(ctx, base);
	// bl 0x82a52050
	ctx.lr = 0x827C93CC;
	sub_82A52050(ctx, base);
	// b 0x827c93f0
	goto loc_827C93F0;
loc_827C93D0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4536
	ctx.r4.s64 = ctx.r11.s64 + -4536;
	// bl 0x82801dc0
	ctx.lr = 0x827C93E0;
	sub_82801DC0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,20984
	ctx.r4.s64 = ctx.r11.s64 + 20984;
	// bl 0x82a509f8
	ctx.lr = 0x827C93F0;
	sub_82A509F8(ctx, base);
loc_827C93F0:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827c9448
	if (!ctx.cr6.eq) goto loc_827C9448;
loc_827C93FC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C9408;
	sub_82801BB0(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// bl 0x82a52350
	ctx.lr = 0x827C9410;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827C9418;
	sub_82A52488(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4564
	ctx.r4.s64 = ctx.r11.s64 + -4564;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827C9430;
	sub_82801DC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C943C;
	sub_82801960(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_827C9440:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827C9448:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a51a68
	ctx.lr = 0x827C9450;
	sub_82A51A68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a527a8
	ctx.lr = 0x827C9458;
	sub_82A527A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a4e848
	ctx.lr = 0x827C9460;
	sub_82A4E848(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c94ac
	if (!ctx.cr0.eq) goto loc_827C94AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4e8a8
	ctx.lr = 0x827C9470;
	sub_82A4E8A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c94ac
	if (!ctx.cr0.eq) goto loc_827C94AC;
	// bl 0x82a52050
	ctx.lr = 0x827C947C;
	sub_82A52050(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827c94ac
	if (ctx.cr6.eq) goto loc_827C94AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a50e70
	ctx.lr = 0x827C9490;
	sub_82A50E70(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-4532
	ctx.r4.s64 = ctx.r11.s64 + -4532;
	// bl 0x82a509f8
	ctx.lr = 0x827C94A0;
	sub_82A509F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c93fc
	if (ctx.cr0.eq) goto loc_827C93FC;
loc_827C94AC:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C94B8;
	sub_82801BB0(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-27856
	ctx.r4.s64 = ctx.r11.s64 + -27856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828023b0
	ctx.lr = 0x827C94D0;
	sub_828023B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82a52578
	ctx.lr = 0x827C94DC;
	sub_82A52578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a52050
	ctx.lr = 0x827C94E4;
	sub_82A52050(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827c94f8
	if (ctx.cr6.eq) goto loc_827C94F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a50e70
	ctx.lr = 0x827C94F8;
	sub_82A50E70(ctx, base);
loc_827C94F8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x827c9550
	if (ctx.cr6.eq) goto loc_827C9550;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801900
	ctx.lr = 0x827C950C;
	sub_82801900(ctx, base);
	// bl 0x82801bb0
	ctx.lr = 0x827C9510;
	sub_82801BB0(ctx, base);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// bl 0x82a52350
	ctx.lr = 0x827C9518;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827C9520;
	sub_82A52488(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-4564
	ctx.r4.s64 = ctx.r11.s64 + -4564;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827C9538;
	sub_82801DC0(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
loc_827C953C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801960
	ctx.lr = 0x827C9548;
	sub_82801960(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// b 0x827c9440
	goto loc_827C9440;
loc_827C9550:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x827c953c
	goto loc_827C953C;
}

__attribute__((alias("__imp__sub_827C9558"))) PPC_WEAK_FUNC(sub_827C9558);
PPC_FUNC_IMPL(__imp__sub_827C9558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827c956c
	if (!ctx.cr6.eq) goto loc_827C956C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_827C956C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9580"))) PPC_WEAK_FUNC(sub_827C9580);
PPC_FUNC_IMPL(__imp__sub_827C9580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827C9588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827c95b0
	if (!ctx.cr6.eq) goto loc_827C95B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x828022c8
	ctx.lr = 0x827C95A8;
	sub_828022C8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827c9640
	if (ctx.cr0.eq) goto loc_827C9640;
loc_827C95B0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4528
	ctx.r4.s64 = ctx.r11.s64 + -4528;
	// bl 0x82801d78
	ctx.lr = 0x827C95C0;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827C95CC;
	sub_82801F28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c9608
	if (ctx.cr0.eq) goto loc_827C9608;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c9608
	if (!ctx.cr6.eq) goto loc_827C9608;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C95F0;
	sub_828019B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82804670
	ctx.lr = 0x827C9604;
	sub_82804670(ctx, base);
	// b 0x827c9640
	goto loc_827C9640;
loc_827C9608:
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C9614;
	sub_82801BB0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,16464
	ctx.r28.s64 = ctx.r11.s64 + 16464;
	// bl 0x82a52050
	ctx.lr = 0x827C9624;
	sub_82A52050(ctx, base);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a515d0
	ctx.lr = 0x827C9634;
	sub_82A515D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C9640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9650"))) PPC_WEAK_FUNC(sub_827C9650);
PPC_FUNC_IMPL(__imp__sub_827C9650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x827C9658;
	__savegprlr_20(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-4384
	ctx.r5.s64 = ctx.r11.s64 + -4384;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827C9674;
	sub_827C8A78(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827C9684;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827c96e0
	if (ctx.cr0.eq) goto loc_827C96E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// bl 0x82801b00
	ctx.lr = 0x827C969C;
	sub_82801B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82802c40
	ctx.lr = 0x827C96B4;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827c974c
	if (!ctx.cr0.eq) goto loc_827C974C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C96D8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
loc_827C96E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c991c
	if (!ctx.cr6.lt) goto loc_827C991C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c991c
	if (ctx.cr6.eq) goto loc_827C991C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827c991c
	if (!ctx.cr6.eq) goto loc_827C991C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r11,-4376
	ctx.r4.s64 = ctx.r11.s64 + -4376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827C9718;
	sub_82801DC0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C9724;
	sub_82801BB0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
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
loc_827C974C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828031d8
	ctx.lr = 0x827C975C;
	sub_828031D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827c9778
	if (!ctx.cr0.eq) goto loc_827C9778;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-4344
	ctx.r5.s64 = ctx.r11.s64 + -4344;
	// bl 0x827c85b8
	ctx.lr = 0x827C9778;
	sub_827C85B8(ctx, base);
loc_827C9778:
	// bl 0x82802018
	ctx.lr = 0x827C977C;
	sub_82802018(ctx, base);
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb. r21,r11
	ctx.r21.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x827c9914
	if (ctx.cr0.eq) goto loc_827C9914;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// lis r4,-32218
	ctx.r4.s64 = -2111438848;
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// addi r26,r11,-4264
	ctx.r26.s64 = ctx.r11.s64 + -4264;
	// addi r25,r10,-4276
	ctx.r25.s64 = ctx.r10.s64 + -4276;
	// addi r24,r9,-2488
	ctx.r24.s64 = ctx.r9.s64 + -2488;
	// addi r23,r8,-4284
	ctx.r23.s64 = ctx.r8.s64 + -4284;
	// addi r22,r7,-4296
	ctx.r22.s64 = ctx.r7.s64 + -4296;
	// addi r30,r6,-4304
	ctx.r30.s64 = ctx.r6.s64 + -4304;
	// addi r29,r5,-4316
	ctx.r29.s64 = ctx.r5.s64 + -4316;
	// addi r28,r4,-4328
	ctx.r28.s64 = ctx.r4.s64 + -4328;
	// addi r27,r3,-1896
	ctx.r27.s64 = ctx.r3.s64 + -1896;
loc_827C97D0:
	// cmpwi cr6,r21,83
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 83, ctx.xer);
	// beq cr6,0x827c9880
	if (ctx.cr6.eq) goto loc_827C9880;
	// cmpwi cr6,r21,102
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 102, ctx.xer);
	// beq cr6,0x827c984c
	if (ctx.cr6.eq) goto loc_827C984C;
	// cmpwi cr6,r21,108
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 108, ctx.xer);
	// beq cr6,0x827c9838
	if (ctx.cr6.eq) goto loc_827C9838;
	// cmpwi cr6,r21,110
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 110, ctx.xer);
	// beq cr6,0x827c9804
	if (ctx.cr6.eq) goto loc_827C9804;
	// cmpwi cr6,r21,117
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 117, ctx.xer);
	// bne cr6,0x827c9904
	if (!ctx.cr6.eq) goto loc_827C9904;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x827c9840
	goto loc_827C9840;
loc_827C9804:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C9814;
	sub_82801D78(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C9820;
	sub_82801D78(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C982C;
	sub_82802168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r21,136(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// b 0x827c98e4
	goto loc_827C98E4;
loc_827C9838:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_827C9840:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd8c8
	ctx.lr = 0x827C9848;
	sub_827CD8C8(ctx, base);
	// b 0x827c9904
	goto loc_827C9904;
loc_827C984C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827C985C;
	sub_82801D10(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// b 0x827c98f8
	goto loc_827C98F8;
loc_827C9880:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r21,144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C9890;
	sub_82801D78(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C989C;
	sub_82801D78(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C98A8;
	sub_82802168(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C98B4;
	sub_82801D78(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C98C0;
	sub_82801D78(ctx, base);
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C98CC;
	sub_82802168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x827cd8c8
	ctx.lr = 0x827C98DC;
	sub_827CD8C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r21,140(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_827C98E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C98EC;
	sub_82801D78(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C98F8;
	sub_82801D78(ctx, base);
loc_827C98F8:
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827C9904;
	sub_82802168(ctx, base);
loc_827C9904:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// extsb. r21,r11
	ctx.r21.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne 0x827c97d0
	if (!ctx.cr0.eq) goto loc_827C97D0;
loc_827C9914:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827c96d8
	goto loc_827C96D8;
loc_827C991C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4372
	ctx.r5.s64 = ctx.r11.s64 + -4372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827C9930;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827C9930"))) PPC_WEAK_FUNC(sub_827C9930);
PPC_FUNC_IMPL(__imp__sub_827C9930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// bl 0x827c8b08
	ctx.lr = 0x827C9954;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82802c40
	ctx.lr = 0x827C996C;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827c9988
	if (!ctx.cr0.eq) goto loc_827C9988;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4256
	ctx.r5.s64 = ctx.r11.s64 + -4256;
	// bl 0x827c85b8
	ctx.lr = 0x827C9988;
	sub_827C85B8(ctx, base);
loc_827C9988:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827c8b08
	ctx.lr = 0x827C9990;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82802cc0
	ctx.lr = 0x827C99A8;
	sub_82802CC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827c99d4
	if (ctx.cr0.eq) goto loc_827C99D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C99B8;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x827c99e4
	goto loc_827C99E4;
loc_827C99D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827C99E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9A08"))) PPC_WEAK_FUNC(sub_827C9A08);
PPC_FUNC_IMPL(__imp__sub_827C9A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// bl 0x827c8b08
	ctx.lr = 0x827C9A2C;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82802c40
	ctx.lr = 0x827C9A44;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827c9a60
	if (!ctx.cr0.eq) goto loc_827C9A60;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-4256
	ctx.r5.s64 = ctx.r11.s64 + -4256;
	// bl 0x827c85b8
	ctx.lr = 0x827C9A60;
	sub_827C85B8(ctx, base);
loc_827C9A60:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x827c89d8
	ctx.lr = 0x827C9A68;
	sub_827C89D8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827C9A74;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82802e40
	ctx.lr = 0x827C9A8C;
	sub_82802E40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C9A98;
	sub_82801D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9AB8"))) PPC_WEAK_FUNC(sub_827C9AB8);
PPC_FUNC_IMPL(__imp__sub_827C9AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827C9ADC;
	sub_827C8B08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x827c9b0c
	if (!ctx.cr6.lt) goto loc_827C9B0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9b0c
	if (ctx.cr6.eq) goto loc_827C9B0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x827c9b1c
	if (ctx.cr6.eq) goto loc_827C9B1C;
loc_827C9B0C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827C9B1C;
	sub_827C8690(ctx, base);
loc_827C9B1C:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x827c9b50
	if (!ctx.cr6.lt) goto loc_827C9B50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9b50
	if (ctx.cr6.eq) goto loc_827C9B50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c9b50
	if (!ctx.cr6.eq) goto loc_827C9B50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827c9b50
	if (ctx.cr0.eq) goto loc_827C9B50;
loc_827C9B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827c9bdc
	goto loc_827C9BDC;
loc_827C9B50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827c9b94
	if (ctx.cr6.eq) goto loc_827C9B94;
	// bl 0x82802678
	ctx.lr = 0x827C9B68;
	sub_82802678(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827c9bbc
	if (ctx.cr0.eq) goto loc_827C9BBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827c9bbc
	goto loc_827C9BBC;
loc_827C9B94:
	// bl 0x82802678
	ctx.lr = 0x827C9B98;
	sub_82802678(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827c9bbc
	if (ctx.cr0.eq) goto loc_827C9BBC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r7,-8
	ctx.r11.s64 = ctx.r7.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,-8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_827C9BBC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827c9b48
	if (ctx.cr6.eq) goto loc_827C9B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827C9BCC;
	sub_82801D78(ctx, base);
	// subfic r4,r30,-1
	ctx.xer.ca = ctx.r30.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827C9BD8;
	sub_828019B8(ctx, base);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
loc_827C9BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9BF8"))) PPC_WEAK_FUNC(sub_827C9BF8);
PPC_FUNC_IMPL(__imp__sub_827C9BF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827c9ab8
	sub_827C9AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9C00"))) PPC_WEAK_FUNC(sub_827C9C00);
PPC_FUNC_IMPL(__imp__sub_827C9C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827C9C1C;
	sub_827C89D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9ab8
	ctx.lr = 0x827C9C28;
	sub_827C9AB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9C40"))) PPC_WEAK_FUNC(sub_827C9C40);
PPC_FUNC_IMPL(__imp__sub_827C9C40) {
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
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,20442
	ctx.r10.s64 = ctx.r10.s64 + 20442;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C9C88;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827c9d1c
	if (ctx.cr0.eq) goto loc_827C9D1C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827c9d1c
	if (!ctx.cr6.eq) goto loc_827C9D1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-4236
	ctx.r10.s64 = ctx.r10.s64 + -4236;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82801d78
	ctx.lr = 0x827C9CBC;
	sub_82801D78(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827c9cf0
	if (ctx.cr6.lt) goto loc_827C9CF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
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
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x827c9cfc
	goto loc_827C9CFC;
loc_827C9CF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827C9CFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x82804670
	ctx.lr = 0x827C9D18;
	sub_82804670(ctx, base);
	// b 0x827c9d20
	goto loc_827C9D20;
loc_827C9D1C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827C9D20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827C9D38"))) PPC_WEAK_FUNC(sub_827C9D38);
PPC_FUNC_IMPL(__imp__sub_827C9D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827C9D40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bge cr6,0x827c9d6c
	if (!ctx.cr6.lt) goto loc_827C9D6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9d6c
	if (ctx.cr6.eq) goto loc_827C9D6C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x827c9dbc
	if (ctx.cr6.gt) goto loc_827C9DBC;
loc_827C9D6C:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x827c9d90
	goto loc_827C9D90;
loc_827C9D74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
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
loc_827C9D90:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827c9d74
	if (ctx.cr6.lt) goto loc_827C9D74;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// b 0x827c9ef0
	goto loc_827C9EF0;
loc_827C9DBC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827C9DC8;
	sub_82801BB0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x827c9de0
	if (!ctx.cr0.eq) goto loc_827C9DE0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827C9DE0;
	sub_827C8690(ctx, base);
loc_827C9DE0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c9e08
	if (!ctx.cr6.lt) goto loc_827C9E08;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9e08
	if (ctx.cr6.eq) goto loc_827C9E08;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827c9e14
	if (ctx.cr6.gt) goto loc_827C9E14;
loc_827C9E08:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827c9e20
	goto loc_827C9E20;
loc_827C9E14:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827C9E20;
	sub_827C8B08(ctx, base);
loc_827C9E20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827c9e50
	if (!ctx.cr6.lt) goto loc_827C9E50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9e50
	if (ctx.cr6.eq) goto loc_827C9E50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827c9e60
	if (ctx.cr6.eq) goto loc_827C9E60;
loc_827C9E50:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827C9E60;
	sub_827C8690(ctx, base);
loc_827C9E60:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827C9E74;
	sub_82A4CA90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c9e80
	if (ctx.cr0.eq) goto loc_827C9E80;
	// li r30,1
	ctx.r30.s64 = 1;
loc_827C9E80:
	// li r4,114
	ctx.r4.s64 = 114;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827C9E8C;
	sub_82A4CA90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c9e98
	if (ctx.cr0.eq) goto loc_827C9E98;
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
loc_827C9E98:
	// li r4,108
	ctx.r4.s64 = 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827C9EA4;
	sub_82A4CA90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827c9eb0
	if (ctx.cr0.eq) goto loc_827C9EB0;
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
loc_827C9EB0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x827c9ebc
	if (!ctx.cr6.gt) goto loc_827C9EBC;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
loc_827C9EBC:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-25536
	ctx.r11.s64 = ctx.r11.s64 + -25536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9ed8
	if (ctx.cr6.eq) goto loc_827C9ED8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x827c9ee0
	if (!ctx.cr6.eq) goto loc_827C9EE0;
loc_827C9ED8:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827C9EE0:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r10.u8);
loc_827C9EF0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r29,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r29.u8);
	// addi r10,r10,20442
	ctx.r10.s64 = ctx.r10.s64 + 20442;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827C9F44;
	sub_82802168(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827C9F50"))) PPC_WEAK_FUNC(sub_827C9F50);
PPC_FUNC_IMPL(__imp__sub_827C9F50) {
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
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lbz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827c9f9c
	if (ctx.cr6.eq) goto loc_827C9F9C;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827c9f9c
	if (ctx.cr6.eq) goto loc_827C9F9C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r11,-4216
	ctx.r4.s64 = ctx.r11.s64 + -4216;
	// bl 0x82801d10
	ctx.lr = 0x827C9F98;
	sub_82801D10(ctx, base);
	// b 0x827c9fcc
	goto loc_827C9FCC;
loc_827C9F9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,20442
	ctx.r10.s64 = ctx.r10.s64 + 20442;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827C9FCC;
	sub_82801F80(ctx, base);
loc_827C9FCC:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x827c9fe4
	if (ctx.cr0.eq) goto loc_827C9FE4;
	// li r10,99
	ctx.r10.s64 = 99;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_827C9FE4:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827c9ffc
	if (ctx.cr0.eq) goto loc_827C9FFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,114
	ctx.r9.s64 = 114;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827C9FFC:
	// rlwinm. r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827ca014
	if (ctx.cr0.eq) goto loc_827CA014;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,108
	ctx.r9.s64 = 108;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CA014:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x82801d78
	ctx.lr = 0x827CA02C;
	sub_82801D78(ctx, base);
	// lwa r10,52(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 52));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CA078"))) PPC_WEAK_FUNC(sub_827CA078);
PPC_FUNC_IMPL(__imp__sub_827CA078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CA080;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a52050
	ctx.lr = 0x827CA08C;
	sub_82A52050(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// addi r29,r11,-4200
	ctx.r29.s64 = ctx.r11.s64 + -4200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a52898
	ctx.lr = 0x827CA0A0;
	sub_82A52898(ctx, base);
	// bl 0x82a52050
	ctx.lr = 0x827CA0A4;
	sub_82A52050(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a50a08
	ctx.lr = 0x827CA0B4;
	sub_82A50A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827ca1a8
	if (ctx.cr0.eq) goto loc_827CA1A8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r11,-4188
	ctx.r30.s64 = ctx.r11.s64 + -4188;
loc_827CA0C4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_827CA0CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827ca0f0
	if (ctx.cr0.eq) goto loc_827CA0F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ca0cc
	if (ctx.cr6.eq) goto loc_827CA0CC;
loc_827CA0F0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827ca1a8
	if (ctx.cr0.eq) goto loc_827CA1A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827CA100:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827ca100
	if (!ctx.cr6.eq) goto loc_827CA100;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27304
	ctx.r4.s64 = ctx.r10.s64 + -27304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828023b0
	ctx.lr = 0x827CA13C;
	sub_828023B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9580
	ctx.lr = 0x827CA148;
	sub_827C9580(ctx, base);
	// b 0x827ca164
	goto loc_827CA164;
loc_827CA14C:
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
loc_827CA164:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ca14c
	if (ctx.cr6.lt) goto loc_827CA14C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a52050
	ctx.lr = 0x827CA180;
	sub_82A52050(ctx, base);
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a52898
	ctx.lr = 0x827CA18C;
	sub_82A52898(ctx, base);
	// bl 0x82a52050
	ctx.lr = 0x827CA190;
	sub_82A52050(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,250
	ctx.r4.s64 = 250;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a50a08
	ctx.lr = 0x827CA1A0;
	sub_82A50A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827ca0c4
	if (!ctx.cr0.eq) goto loc_827CA0C4;
loc_827CA1A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA1B8"))) PPC_WEAK_FUNC(sub_827CA1B8);
PPC_FUNC_IMPL(__imp__sub_827CA1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x827CA1C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827ca1f4
	if (!ctx.cr0.eq) goto loc_827CA1F4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// b 0x827ca214
	goto loc_827CA214;
loc_827CA1F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801a70
	ctx.lr = 0x827CA1FC;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ca42c
	if (ctx.cr0.eq) goto loc_827CA42C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,15576
	ctx.r4.s64 = ctx.r11.s64 + 15576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827CA214:
	// bl 0x82801d10
	ctx.lr = 0x827CA218;
	sub_82801D10(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,-25844
	ctx.r4.s64 = ctx.r11.s64 + -25844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CA22C;
	sub_82801D10(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802c40
	ctx.lr = 0x827CA23C;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ca414
	if (ctx.cr0.eq) goto loc_827CA414;
	// lis r5,-32218
	ctx.r5.s64 = -2111438848;
	// lis r4,-32218
	ctx.r4.s64 = -2111438848;
	// lis r3,-32218
	ctx.r3.s64 = -2111438848;
	// lis r6,-32218
	ctx.r6.s64 = -2111438848;
	// lis r7,-32218
	ctx.r7.s64 = -2111438848;
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r24,r5,-25760
	ctx.r24.s64 = ctx.r5.s64 + -25760;
	// addi r23,r4,-25764
	ctx.r23.s64 = ctx.r4.s64 + -25764;
	// addi r22,r3,-25780
	ctx.r22.s64 = ctx.r3.s64 + -25780;
	// addi r21,r6,-25800
	ctx.r21.s64 = ctx.r6.s64 + -25800;
	// addi r26,r7,-25804
	ctx.r26.s64 = ctx.r7.s64 + -25804;
	// addi r29,r8,-25808
	ctx.r29.s64 = ctx.r8.s64 + -25808;
	// addi r28,r9,-25812
	ctx.r28.s64 = ctx.r9.s64 + -25812;
	// addi r27,r10,-25816
	ctx.r27.s64 = ctx.r10.s64 + -25816;
	// addi r25,r11,-25824
	ctx.r25.s64 = ctx.r11.s64 + -25824;
loc_827CA28C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r20,12
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 12, ctx.xer);
	// ble cr6,0x827ca300
	if (!ctx.cr6.gt) goto loc_827CA300;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827ca300
	if (ctx.cr6.eq) goto loc_827CA300;
	// addi r30,r20,10
	ctx.r30.s64 = ctx.r20.s64 + 10;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802c40
	ctx.lr = 0x827CA2B4;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827ca2c4
	if (!ctx.cr0.eq) goto loc_827CA2C4;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// b 0x827ca2f8
	goto loc_827CA2F8;
loc_827CA2C4:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CA2D4;
	sub_82801D10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x827ca2e4
	goto loc_827CA2E4;
loc_827CA2DC:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r4,r20,10
	ctx.r4.s64 = ctx.r20.s64 + 10;
loc_827CA2E4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802c40
	ctx.lr = 0x827CA2F0;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827ca2dc
	if (!ctx.cr0.eq) goto loc_827CA2DC;
loc_827CA2F8:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827ca3fc
	goto loc_827CA3FC;
loc_827CA300:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CA310;
	sub_82801D10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828031d8
	ctx.lr = 0x827CA320;
	sub_828031D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CA330;
	sub_82801DC0(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x827ca348
	if (!ctx.cr6.gt) goto loc_827CA348;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CA348;
	sub_82801DC0(ctx, base);
loc_827CA348:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// blt cr6,0x827ca388
	if (ctx.cr6.lt) goto loc_827CA388;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// ble cr6,0x827ca374
	if (!ctx.cr6.gt) goto loc_827CA374;
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// ble cr6,0x827ca388
	if (!ctx.cr6.gt) goto loc_827CA388;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x827ca388
	if (ctx.cr6.gt) goto loc_827CA388;
loc_827CA374:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CA384;
	sub_82801DC0(ctx, base);
	// b 0x827ca3e4
	goto loc_827CA3E4;
loc_827CA388:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bne cr6,0x827ca3ac
	if (!ctx.cr6.eq) goto loc_827CA3AC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CA3A8;
	sub_82801DC0(ctx, base);
	// b 0x827ca3e4
	goto loc_827CA3E4;
loc_827CA3AC:
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// beq cr6,0x827ca3d4
	if (ctx.cr6.eq) goto loc_827CA3D4;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x827ca3d4
	if (ctx.cr6.eq) goto loc_827CA3D4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CA3D0;
	sub_82801DC0(ctx, base);
	// b 0x827ca3e4
	goto loc_827CA3E4;
loc_827CA3D4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CA3E4;
	sub_82801D10(ctx, base);
loc_827CA3E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// bl 0x82802508
	ctx.lr = 0x827CA3FC;
	sub_82802508(ctx, base);
loc_827CA3FC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802c40
	ctx.lr = 0x827CA40C;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827ca28c
	if (!ctx.cr0.eq) goto loc_827CA28C;
loc_827CA414:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// bl 0x82802508
	ctx.lr = 0x827CA42C;
	sub_82802508(ctx, base);
loc_827CA42C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA438"))) PPC_WEAK_FUNC(sub_827CA438);
PPC_FUNC_IMPL(__imp__sub_827CA438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-10512
	ctx.r5.s64 = ctx.r11.s64 + -10512;
	// addi r4,r10,-4508
	ctx.r4.s64 = ctx.r10.s64 + -4508;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8bf8
	ctx.lr = 0x827CA464;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4180
	ctx.r4.s64 = ctx.r11.s64 + -4180;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x82801d10
	ctx.lr = 0x827CA478;
	sub_82801D10(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-24136
	ctx.r4.s64 = ctx.r11.s64 + -24136;
	// bl 0x82801e40
	ctx.lr = 0x827CA48C;
	sub_82801E40(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827CA498;
	sub_82802118(ctx, base);
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

__attribute__((alias("__imp__sub_827CA4B0"))) PPC_WEAK_FUNC(sub_827CA4B0);
PPC_FUNC_IMPL(__imp__sub_827CA4B0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA4D0;
	sub_827C8A20(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_827CA518"))) PPC_WEAK_FUNC(sub_827CA518);
PPC_FUNC_IMPL(__imp__sub_827CA518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CA520;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA534;
	sub_827C8A20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CA544;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827ca564
	if (ctx.cr6.lt) goto loc_827CA564;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x827ca56c
	goto loc_827CA56C;
loc_827CA564:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_827CA56C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ca594
	if (!ctx.cr6.lt) goto loc_827CA594;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ca594
	if (ctx.cr6.eq) goto loc_827CA594;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827ca5a0
	if (ctx.cr6.gt) goto loc_827CA5A0;
loc_827CA594:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827ca5ac
	goto loc_827CA5AC;
loc_827CA5A0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CA5AC;
	sub_827C8B08(ctx, base);
loc_827CA5AC:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x827ca5c8
	if (!ctx.cr6.lt) goto loc_827CA5C8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CA5C8:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x827ca5d4
	if (!ctx.cr6.lt) goto loc_827CA5D4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_827CA5D4:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x827ca5e0
	if (!ctx.cr6.gt) goto loc_827CA5E0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827CA5E0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bgt cr6,0x827ca600
	if (ctx.cr6.gt) goto loc_827CA600;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// b 0x827ca60c
	goto loc_827CA60C;
loc_827CA600:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
loc_827CA60C:
	// bl 0x82801d10
	ctx.lr = 0x827CA610;
	sub_82801D10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA620"))) PPC_WEAK_FUNC(sub_827CA620);
PPC_FUNC_IMPL(__imp__sub_827CA620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CA628;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA63C;
	sub_827C8A20(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827ca6ac
	if (ctx.cr6.eq) goto loc_827CA6AC;
loc_827CA660:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ca684
	if (ctx.cr6.lt) goto loc_827CA684;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA674;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ca684
	if (ctx.cr0.eq) goto loc_827CA684;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9178
	ctx.lr = 0x827CA684;
	sub_827C9178(ctx, base);
loc_827CA684:
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x82a50f88
	ctx.lr = 0x827CA68C;
	sub_82A50F88(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x827ca660
	if (ctx.cr6.lt) goto loc_827CA660;
loc_827CA6AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA6B4;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827CA6C0;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA6D0"))) PPC_WEAK_FUNC(sub_827CA6D0);
PPC_FUNC_IMPL(__imp__sub_827CA6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CA6D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA6EC;
	sub_827C8A20(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827ca75c
	if (ctx.cr6.eq) goto loc_827CA75C;
loc_827CA710:
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ca734
	if (ctx.cr6.lt) goto loc_827CA734;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA724;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ca734
	if (ctx.cr0.eq) goto loc_827CA734;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9178
	ctx.lr = 0x827CA734;
	sub_827C9178(ctx, base);
loc_827CA734:
	// lbzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x82a52ac0
	ctx.lr = 0x827CA73C;
	sub_82A52AC0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x827ca710
	if (ctx.cr6.lt) goto loc_827CA710;
loc_827CA75C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA764;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827CA770;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA780"))) PPC_WEAK_FUNC(sub_827CA780);
PPC_FUNC_IMPL(__imp__sub_827CA780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CA788;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA79C;
	sub_827C8A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CA7AC;
	sub_827C8B08(ctx, base);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r10,0
	ctx.r10.s64 = 0;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x827ca7e0
	goto loc_827CA7E0;
loc_827CA7D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x827c9210
	ctx.lr = 0x827CA7E0;
	sub_827C9210(ctx, base);
loc_827CA7E0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bgt cr6,0x827ca7d0
	if (ctx.cr6.gt) goto loc_827CA7D0;
	// bl 0x827c9108
	ctx.lr = 0x827CA7F0;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827CA7FC;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA808"))) PPC_WEAK_FUNC(sub_827CA808);
PPC_FUNC_IMPL(__imp__sub_827CA808) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CA82C;
	sub_827C8A20(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ca858
	if (!ctx.cr6.lt) goto loc_827CA858;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ca858
	if (ctx.cr6.eq) goto loc_827CA858;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827ca864
	if (ctx.cr6.gt) goto loc_827CA864;
loc_827CA858:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827ca870
	goto loc_827CA870;
loc_827CA864:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CA870;
	sub_827C8B08(ctx, base);
loc_827CA870:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x827ca894
	if (!ctx.cr6.lt) goto loc_827CA894;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_827CA894:
	// ble cr6,0x827ca8dc
	if (!ctx.cr6.gt) goto loc_827CA8DC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827ca8dc
	if (ctx.cr6.gt) goto loc_827CA8DC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827ca8e0
	goto loc_827CA8E0;
loc_827CA8DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CA8E0:
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

__attribute__((alias("__imp__sub_827CA8F8"))) PPC_WEAK_FUNC(sub_827CA8F8);
PPC_FUNC_IMPL(__imp__sub_827CA8F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CA900;
	__savegprlr_28(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r28,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x827ca9a4
	if (ctx.cr6.lt) goto loc_827CA9A4;
loc_827CA938:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CA944;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827ca9c4
	if (!ctx.cr6.eq) goto loc_827CA9C4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ca984
	if (ctx.cr6.lt) goto loc_827CA984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA974;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ca984
	if (ctx.cr0.eq) goto loc_827CA984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9178
	ctx.lr = 0x827CA984;
	sub_827C9178(ctx, base);
loc_827CA984:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stb r29,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r29.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ble cr6,0x827ca938
	if (!ctx.cr6.gt) goto loc_827CA938;
loc_827CA9A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CA9AC;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827CA9B8;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827CA9C4:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-4092
	ctx.r5.s64 = ctx.r11.s64 + -4092;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CA9D8;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827CA9D8"))) PPC_WEAK_FUNC(sub_827CA9D8);
PPC_FUNC_IMPL(__imp__sub_827CA9D8) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x827c9210
	ctx.lr = 0x827CA9EC;
	sub_827C9210(ctx, base);
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

__attribute__((alias("__imp__sub_827CAA00"))) PPC_WEAK_FUNC(sub_827CAA00);
PPC_FUNC_IMPL(__imp__sub_827CAA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827caa34
	if (!ctx.cr6.lt) goto loc_827CAA34;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827caa34
	if (ctx.cr6.eq) goto loc_827CAA34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827caa40
	if (ctx.cr6.eq) goto loc_827CAA40;
loc_827CAA34:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8690
	ctx.lr = 0x827CAA40;
	sub_827C8690(ctx, base);
loc_827CAA40:
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827caadc
	if (!ctx.cr6.eq) goto loc_827CAADC;
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x827caadc
	if (!ctx.cr0.eq) goto loc_827CAADC;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x827caadc
	if (!ctx.cr0.eq) goto loc_827CAADC;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r10,-22056
	ctx.r11.s64 = ctx.r10.s64 + -22056;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82809510
	ctx.lr = 0x827CAAA0;
	sub_82809510(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828092a0
	ctx.lr = 0x827CAAB0;
	sub_828092A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827c9108
	ctx.lr = 0x827CAAB8;
	sub_827C9108(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82802508
	ctx.lr = 0x827CAAC4;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827CAADC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-4076
	ctx.r4.s64 = ctx.r11.s64 + -4076;
	// bl 0x827c87a8
	ctx.lr = 0x827CAAE8;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CAAE8"))) PPC_WEAK_FUNC(sub_827CAAE8);
PPC_FUNC_IMPL(__imp__sub_827CAAE8) {
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
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x827cab7c
	if (ctx.cr6.eq) goto loc_827CAB7C;
	// cmpwi cr6,r10,91
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 91, ctx.xer);
	// beq cr6,0x827cab18
	if (ctx.cr6.eq) goto loc_827CAB18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827cab60
	goto loc_827CAB60;
loc_827CAB18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// bne cr6,0x827cab28
	if (!ctx.cr6.eq) goto loc_827CAB28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CAB28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827cab70
	if (ctx.cr0.eq) goto loc_827CAB70;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827cab50
	if (!ctx.cr6.eq) goto loc_827CAB50;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cab50
	if (ctx.cr6.eq) goto loc_827CAB50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CAB50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// bne cr6,0x827cab28
	if (!ctx.cr6.eq) goto loc_827CAB28;
loc_827CAB5C:
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_827CAB60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827CAB70:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3960
	ctx.r4.s64 = ctx.r11.s64 + -3960;
	// b 0x827cab90
	goto loc_827CAB90;
loc_827CAB7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827cab5c
	if (!ctx.cr6.eq) goto loc_827CAB5C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3996
	ctx.r4.s64 = ctx.r11.s64 + -3996;
loc_827CAB90:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x827c87a8
	ctx.lr = 0x827CAB98;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CAB98"))) PPC_WEAK_FUNC(sub_827CAB98);
PPC_FUNC_IMPL(__imp__sub_827CAB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
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
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a50f88
	ctx.lr = 0x827CABBC;
	sub_82A50F88(ctx, base);
	// cmpwi cr6,r3,115
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 115, ctx.xer);
	// bgt cr6,0x827cac38
	if (ctx.cr6.gt) goto loc_827CAC38;
	// beq cr6,0x827cac2c
	if (ctx.cr6.eq) goto loc_827CAC2C;
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// beq cr6,0x827cac20
	if (ctx.cr6.eq) goto loc_827CAC20;
	// cmpwi cr6,r3,99
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 99, ctx.xer);
	// beq cr6,0x827cac14
	if (ctx.cr6.eq) goto loc_827CAC14;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// beq cr6,0x827cac08
	if (ctx.cr6.eq) goto loc_827CAC08;
	// cmpwi cr6,r3,108
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 108, ctx.xer);
	// beq cr6,0x827cabfc
	if (ctx.cr6.eq) goto loc_827CABFC;
	// cmpwi cr6,r3,112
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 112, ctx.xer);
	// bne cr6,0x827cac58
	if (!ctx.cr6.eq) goto loc_827CAC58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e868
	ctx.lr = 0x827CABF8;
	sub_82A4E868(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CABFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e7e8
	ctx.lr = 0x827CAC04;
	sub_82A4E7E8(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e808
	ctx.lr = 0x827CAC10;
	sub_82A4E808(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e8c8
	ctx.lr = 0x827CAC1C;
	sub_82A4E8C8(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e7a8
	ctx.lr = 0x827CAC28;
	sub_82A4E7A8(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e848
	ctx.lr = 0x827CAC34;
	sub_82A4E848(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC38:
	// cmpwi cr6,r3,117
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 117, ctx.xer);
	// beq cr6,0x827cac88
	if (ctx.cr6.eq) goto loc_827CAC88;
	// cmpwi cr6,r3,119
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 119, ctx.xer);
	// beq cr6,0x827cac7c
	if (ctx.cr6.eq) goto loc_827CAC7C;
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// beq cr6,0x827cac70
	if (ctx.cr6.eq) goto loc_827CAC70;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// beq cr6,0x827cac64
	if (ctx.cr6.eq) goto loc_827CAC64;
loc_827CAC58:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// b 0x827cacb0
	goto loc_827CACB0;
loc_827CAC64:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827cac94
	goto loc_827CAC94;
loc_827CAC70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e828
	ctx.lr = 0x827CAC78;
	sub_82A4E828(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e888
	ctx.lr = 0x827CAC84;
	sub_82A4E888(ctx, base);
	// b 0x827cac90
	goto loc_827CAC90;
loc_827CAC88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4e7c8
	ctx.lr = 0x827CAC90;
	sub_82A4E7C8(ctx, base);
loc_827CAC90:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_827CAC94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4e7e8
	ctx.lr = 0x827CAC9C;
	sub_82A4E7E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cacac
	if (ctx.cr0.eq) goto loc_827CACAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x827cacb4
	goto loc_827CACB4;
loc_827CACAC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
loc_827CACB0:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_827CACB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CACD0"))) PPC_WEAK_FUNC(sub_827CACD0);
PPC_FUNC_IMPL(__imp__sub_827CACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CACD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// bne cr6,0x827cad00
	if (!ctx.cr6.eq) goto loc_827CAD00;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_827CAD00:
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x827cad98
	if (!ctx.cr6.lt) goto loc_827CAD98;
	// addi r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 2;
loc_827CAD10:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x827cad44
	if (!ctx.cr6.eq) goto loc_827CAD44;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x827cab98
	ctx.lr = 0x827CAD34;
	sub_827CAB98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cad88
	if (ctx.cr0.eq) goto loc_827CAD88;
loc_827CAD3C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x827cada0
	goto loc_827CADA0;
loc_827CAD44:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x827cad7c
	if (!ctx.cr6.eq) goto loc_827CAD7C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x827cad7c
	if (!ctx.cr6.lt) goto loc_827CAD7C;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lbz r11,-2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bgt cr6,0x827cad88
	if (ctx.cr6.gt) goto loc_827CAD88;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827cad3c
	if (!ctx.cr6.gt) goto loc_827CAD3C;
	// b 0x827cad88
	goto loc_827CAD88;
loc_827CAD7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x827cad3c
	if (ctx.cr6.eq) goto loc_827CAD3C;
loc_827CAD88:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x827cad10
	if (ctx.cr6.lt) goto loc_827CAD10;
loc_827CAD98:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_827CADA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CADA8"))) PPC_WEAK_FUNC(sub_827CADA8);
PPC_FUNC_IMPL(__imp__sub_827CADA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827CADB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cae50
	if (!ctx.cr6.lt) goto loc_827CAE50;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_827CADD8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x827cae20
	if (ctx.cr6.eq) goto loc_827CAE20;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x827cae34
	if (ctx.cr6.eq) goto loc_827CAE34;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x827cae10
	if (ctx.cr6.eq) goto loc_827CAE10;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827cae2c
	goto loc_827CAE2C;
loc_827CAE10:
	// addi r5,r26,-1
	ctx.r5.s64 = ctx.r26.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827cacd0
	ctx.lr = 0x827CAE1C;
	sub_827CACD0(ctx, base);
	// b 0x827cae2c
	goto loc_827CAE2C;
loc_827CAE20:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x827cab98
	ctx.lr = 0x827CAE2C;
	sub_827CAB98(ctx, base);
loc_827CAE2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827cae48
	if (ctx.cr6.eq) goto loc_827CAE48;
loc_827CAE34:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cadd8
	if (ctx.cr6.lt) goto loc_827CADD8;
loc_827CAE48:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x827cae74
	if (ctx.cr6.lt) goto loc_827CAE74;
loc_827CAE50:
	// addi r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 1;
loc_827CAE54:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827caff0
	ctx.lr = 0x827CAE64;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cae78
	if (!ctx.cr0.eq) goto loc_827CAE78;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x827cae54
	if (!ctx.cr0.lt) goto loc_827CAE54;
loc_827CAE74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CAE78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CAE80"))) PPC_WEAK_FUNC(sub_827CAE80);
PPC_FUNC_IMPL(__imp__sub_827CAE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CAE88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// b 0x827caf10
	goto loc_827CAF10;
loc_827CAEA4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827caf2c
	if (!ctx.cr6.lt) goto loc_827CAF2C;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x827caef8
	if (ctx.cr6.eq) goto loc_827CAEF8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x827caf0c
	if (ctx.cr6.eq) goto loc_827CAF0C;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x827caee8
	if (ctx.cr6.eq) goto loc_827CAEE8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827caf04
	goto loc_827CAF04;
loc_827CAEE8:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827cacd0
	ctx.lr = 0x827CAEF4;
	sub_827CACD0(ctx, base);
	// b 0x827caf04
	goto loc_827CAF04;
loc_827CAEF8:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x827cab98
	ctx.lr = 0x827CAF04;
	sub_827CAB98(ctx, base);
loc_827CAF04:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827caf2c
	if (ctx.cr6.eq) goto loc_827CAF2C;
loc_827CAF0C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_827CAF10:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827caff0
	ctx.lr = 0x827CAF20;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827caea4
	if (ctx.cr0.eq) goto loc_827CAEA4;
	// b 0x827caf30
	goto loc_827CAF30;
loc_827CAF2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CAF30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CAF38"))) PPC_WEAK_FUNC(sub_827CAF38);
PPC_FUNC_IMPL(__imp__sub_827CAF38) {
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
	// addic. r11,r5,-49
	ctx.xer.ca = ctx.r5.u32 > 48;
	ctx.r11.s64 = ctx.r5.s64 + -49;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827cafe0
	if (ctx.cr0.lt) goto loc_827CAFE0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827cafe0
	if (!ctx.cr6.lt) goto loc_827CAFE0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827cafe0
	if (ctx.cr6.eq) goto loc_827CAFE0;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cafd8
	if (ctx.cr6.lt) goto loc_827CAFD8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// beq 0x827cafbc
	if (ctx.cr0.eq) goto loc_827CAFBC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827CAF9C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827cafbc
	if (!ctx.cr0.eq) goto loc_827CAFBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x827caf9c
	if (!ctx.cr6.eq) goto loc_827CAF9C;
loc_827CAFBC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827cafd8
	if (!ctx.cr0.eq) goto loc_827CAFD8;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_827CAFC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827CAFD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827cafc8
	goto loc_827CAFC8;
loc_827CAFE0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,-4044
	ctx.r4.s64 = ctx.r11.s64 + -4044;
	// bl 0x827c87a8
	ctx.lr = 0x827CAFF0;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CAFF0"))) PPC_WEAK_FUNC(sub_827CAFF0);
PPC_FUNC_IMPL(__imp__sub_827CAFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CAFF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x827cb29c
	goto loc_827CB29C;
loc_827CB00C:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x827cb1ac
	if (ctx.cr6.eq) goto loc_827CB1AC;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x827cb06c
	if (ctx.cr6.eq) goto loc_827CB06C;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x827cb2f4
	if (ctx.cr6.eq) goto loc_827CB2F4;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x827cb1b8
	if (!ctx.cr6.eq) goto loc_827CB1B8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x827cb05c
	if (ctx.cr0.lt) goto loc_827CB05C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
loc_827CB044:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x827cb2b4
	if (ctx.cr6.eq) goto loc_827CB2B4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x827cb044
	if (!ctx.cr0.lt) goto loc_827CB044;
loc_827CB05C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-4020
	ctx.r4.s64 = ctx.r11.s64 + -4020;
	// bl 0x827c87a8
	ctx.lr = 0x827CB06C;
	sub_827C87A8(ctx, base);
loc_827CB06C:
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x827cb128
	if (ctx.cr6.eq) goto loc_827CB128;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x827cb0b8
	if (ctx.cr6.eq) goto loc_827CB0B8;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82a4e808
	ctx.lr = 0x827CB08C;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cb1b8
	if (ctx.cr0.eq) goto loc_827CB1B8;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x827caf38
	ctx.lr = 0x827CB0A8;
	sub_827CAF38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827cb120
	if (ctx.cr0.eq) goto loc_827CB120;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x827cb29c
	goto loc_827CB29C;
loc_827CB0B8:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// addi r27,r29,2
	ctx.r27.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x827cb38c
	if (!ctx.cr6.eq) goto loc_827CB38C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827caae8
	ctx.lr = 0x827CB0D4;
	sub_827CAAE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x827cb0ec
	if (ctx.cr6.eq) goto loc_827CB0EC;
	// lbz r11,-1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
loc_827CB0EC:
	// addi r28,r29,-1
	ctx.r28.s64 = ctx.r29.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x827cacd0
	ctx.lr = 0x827CB100;
	sub_827CACD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cb120
	if (!ctx.cr0.eq) goto loc_827CB120;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x827cacd0
	ctx.lr = 0x827CB118;
	sub_827CACD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cb29c
	if (!ctx.cr0.eq) goto loc_827CB29C;
loc_827CB120:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827cb2ac
	goto loc_827CB2AC;
loc_827CB128:
	// lbz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// extsb. r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x827cb39c
	if (ctx.cr0.eq) goto loc_827CB39C;
	// lbz r11,3(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// extsb. r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827cb39c
	if (ctx.cr0.eq) goto loc_827CB39C;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x827cb120
	if (!ctx.cr6.eq) goto loc_827CB120;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x827cb18c
	goto loc_827CB18C;
loc_827CB15C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x827cb17c
	if (!ctx.cr6.eq) goto loc_827CB17C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827cb188
	if (!ctx.cr0.eq) goto loc_827CB188;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// b 0x827cb19c
	goto loc_827CB19C;
loc_827CB17C:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x827cb188
	if (!ctx.cr6.eq) goto loc_827CB188;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_827CB188:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CB18C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cb15c
	if (ctx.cr6.lt) goto loc_827CB15C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827CB19C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827cb120
	if (ctx.cr6.eq) goto loc_827CB120;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x827cb29c
	goto loc_827CB29C;
loc_827CB1AC:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cb3ac
	if (ctx.cr6.eq) goto loc_827CB3AC;
loc_827CB1B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827caae8
	ctx.lr = 0x827CB1C4;
	sub_827CAAE8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cb238
	if (!ctx.cr6.lt) goto loc_827CB238;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x827cb21c
	if (ctx.cr6.eq) goto loc_827CB21C;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x827cb230
	if (ctx.cr6.eq) goto loc_827CB230;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x827cb20c
	if (ctx.cr6.eq) goto loc_827CB20C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827cb228
	goto loc_827CB228;
loc_827CB20C:
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x827cacd0
	ctx.lr = 0x827CB218;
	sub_827CACD0(ctx, base);
	// b 0x827cb228
	goto loc_827CB228;
loc_827CB21C:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x827cab98
	ctx.lr = 0x827CB228;
	sub_827CAB98(ctx, base);
loc_827CB228:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827cb238
	if (ctx.cr6.eq) goto loc_827CB238;
loc_827CB230:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827cb23c
	goto loc_827CB23C;
loc_827CB238:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827CB23C:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x827cb3e8
	if (ctx.cr6.eq) goto loc_827CB3E8;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x827cb3d8
	if (ctx.cr6.eq) goto loc_827CB3D8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x827cb3c0
	if (ctx.cr6.eq) goto loc_827CB3C0;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// beq cr6,0x827cb278
	if (ctx.cr6.eq) goto loc_827CB278;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827cb120
	if (ctx.cr6.eq) goto loc_827CB120;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// b 0x827cb29c
	goto loc_827CB29C;
loc_827CB278:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827cb298
	if (ctx.cr6.eq) goto loc_827CB298;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827caff0
	ctx.lr = 0x827CB290;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cb2ac
	if (!ctx.cr0.eq) goto loc_827CB2AC;
loc_827CB298:
	// addi r29,r28,1
	ctx.r29.s64 = ctx.r28.s64 + 1;
loc_827CB29C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827cb00c
	if (!ctx.cr0.eq) goto loc_827CB00C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827CB2AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_827CB2B4:
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bl 0x827caff0
	ctx.lr = 0x827CB2E0;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cb2ac
	if (!ctx.cr0.eq) goto loc_827CB2AC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// b 0x827cb2ac
	goto loc_827CB2AC;
loc_827CB2F4:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bne cr6,0x827cb36c
	if (!ctx.cr6.eq) goto loc_827CB36C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x827cb320
	if (ctx.cr6.lt) goto loc_827CB320;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-3908
	ctx.r4.s64 = ctx.r11.s64 + -3908;
	// bl 0x827c87a8
	ctx.lr = 0x827CB320;
	sub_827C87A8(ctx, base);
loc_827CB320:
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 2;
loc_827CB328:
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x827caff0
	ctx.lr = 0x827CB354;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cb2ac
	if (!ctx.cr0.eq) goto loc_827CB2AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x827cb2ac
	goto loc_827CB2AC;
loc_827CB36C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x827cb384
	if (ctx.cr6.lt) goto loc_827CB384;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-3908
	ctx.r4.s64 = ctx.r11.s64 + -3908;
	// bl 0x827c87a8
	ctx.lr = 0x827CB384;
	sub_827C87A8(ctx, base);
loc_827CB384:
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x827cb328
	goto loc_827CB328;
loc_827CB38C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-3888
	ctx.r4.s64 = ctx.r11.s64 + -3888;
	// bl 0x827c87a8
	ctx.lr = 0x827CB39C;
	sub_827C87A8(ctx, base);
loc_827CB39C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-3928
	ctx.r4.s64 = ctx.r11.s64 + -3928;
	// bl 0x827c87a8
	ctx.lr = 0x827CB3AC;
	sub_827C87A8(ctx, base);
loc_827CB3AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827cb2ac
	if (ctx.cr6.eq) goto loc_827CB2AC;
	// b 0x827cb120
	goto loc_827CB120;
loc_827CB3C0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cae80
	ctx.lr = 0x827CB3D4;
	sub_827CAE80(ctx, base);
	// b 0x827cb2ac
	goto loc_827CB2AC;
loc_827CB3D8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827cb120
	if (ctx.cr6.eq) goto loc_827CB120;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// b 0x827cb3ec
	goto loc_827CB3EC;
loc_827CB3E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827CB3EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cada8
	ctx.lr = 0x827CB3FC;
	sub_827CADA8(ctx, base);
	// b 0x827cb2ac
	goto loc_827CB2AC;
}

__attribute__((alias("__imp__sub_827CB400"))) PPC_WEAK_FUNC(sub_827CB400);
PPC_FUNC_IMPL(__imp__sub_827CB400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CB408;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x827cb420
	if (!ctx.cr6.eq) goto loc_827CB420;
	// b 0x827cb4a8
	goto loc_827CB4A8;
loc_827CB420:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x827cb4a4
	if (ctx.cr6.gt) goto loc_827CB4A4;
	// addi r30,r6,-1
	ctx.r30.s64 = ctx.r6.s64 + -1;
	// subf. r31,r30,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827cb4a4
	if (ctx.cr0.eq) goto loc_827CB4A4;
loc_827CB434:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82a51a20
	ctx.lr = 0x827CB448;
	sub_82A51A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cb4a4
	if (ctx.cr0.eq) goto loc_827CB4A4;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x827cb48c
	if (ctx.cr0.eq) goto loc_827CB48C;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827CB46C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x827cb48c
	if (!ctx.cr0.eq) goto loc_827CB48C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x827cb46c
	if (!ctx.cr6.eq) goto loc_827CB46C;
loc_827CB48C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x827cb4b0
	if (ctx.cr0.eq) goto loc_827CB4B0;
	// subf r11,r9,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r9.s64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add. r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x827cb434
	if (!ctx.cr0.eq) goto loc_827CB434;
loc_827CB4A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB4A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827CB4B0:
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// b 0x827cb4a8
	goto loc_827CB4A8;
}

__attribute__((alias("__imp__sub_827CB4B8"))) PPC_WEAK_FUNC(sub_827CB4B8);
PPC_FUNC_IMPL(__imp__sub_827CB4B8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x827cb4ec
	if (!ctx.cr6.eq) goto loc_827CB4EC;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r10,-3852
	ctx.r4.s64 = ctx.r10.s64 + -3852;
	// bl 0x827c87a8
	ctx.lr = 0x827CB4EC;
	sub_827C87A8(ctx, base);
loc_827CB4EC:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r5,-2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -2, ctx.xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x827cb544
	if (!ctx.cr6.eq) goto loc_827CB544;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// b 0x827cb550
	goto loc_827CB550;
loc_827CB544:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82801d10
	ctx.lr = 0x827CB550;
	sub_82801D10(ctx, base);
loc_827CB550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CB560"))) PPC_WEAK_FUNC(sub_827CB560);
PPC_FUNC_IMPL(__imp__sub_827CB560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CB568;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82801850
	ctx.lr = 0x827CB588;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cb5a8
	if (!ctx.cr0.eq) goto loc_827CB5A8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-3908
	ctx.r5.s64 = ctx.r11.s64 + -3908;
	// addi r4,r10,-4600
	ctx.r4.s64 = ctx.r10.s64 + -4600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CB5A8;
	sub_827C87A8(ctx, base);
loc_827CB5A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827cb5d4
	if (!ctx.cr6.eq) goto loc_827CB5D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827cb5d4
	if (ctx.cr6.eq) goto loc_827CB5D4;
	// subf r5,r30,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r30.s64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CB5CC;
	sub_82801D10(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827cb600
	goto loc_827CB600;
loc_827CB5D4:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827cb5fc
	if (!ctx.cr6.gt) goto loc_827CB5FC;
loc_827CB5E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cb4b8
	ctx.lr = 0x827CB5EC;
	sub_827CB4B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827cb5e0
	if (ctx.cr6.lt) goto loc_827CB5E0;
loc_827CB5FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_827CB600:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CB608"))) PPC_WEAK_FUNC(sub_827CB608);
PPC_FUNC_IMPL(__imp__sub_827CB608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827CB610;
	__savegprlr_25(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CB624;
	sub_827C8A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CB638;
	sub_827C8A20(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cb664
	if (!ctx.cr6.lt) goto loc_827CB664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cb664
	if (ctx.cr6.eq) goto loc_827CB664;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cb670
	if (ctx.cr6.gt) goto loc_827CB670;
loc_827CB664:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cb67c
	goto loc_827CB67C;
loc_827CB670:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CB67C;
	sub_827C8B08(ctx, base);
loc_827CB67C:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x827cb69c
	if (!ctx.cr6.lt) goto loc_827CB69C;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CB69C:
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// bge 0x827cb6b0
	if (!ctx.cr0.lt) goto loc_827CB6B0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x827cb6bc
	goto loc_827CB6BC;
loc_827CB6B0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x827cb6bc
	if (!ctx.cr6.gt) goto loc_827CB6BC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_827CB6BC:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827CB6C8;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cb7e8
	if (!ctx.cr0.eq) goto loc_827CB7E8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,-3832
	ctx.r4.s64 = ctx.r11.s64 + -3832;
	// bl 0x82a52ad8
	ctx.lr = 0x827CB6E0;
	sub_82A52AD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cb7e8
	if (ctx.cr0.eq) goto loc_827CB7E8;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x827cb700
	if (!ctx.cr6.eq) goto loc_827CB700;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x827cb704
	goto loc_827CB704;
loc_827CB700:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_827CB704:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_827CB718:
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827caff0
	ctx.lr = 0x827CB72C;
	sub_827CAFF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cb76c
	if (!ctx.cr0.eq) goto loc_827CB76C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bge cr6,0x827cb74c
	if (!ctx.cr6.lt) goto loc_827CB74C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x827cb718
	if (ctx.cr6.eq) goto loc_827CB718;
loc_827CB74C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_827CB758:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CB764:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_827CB76C:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827cb560
	ctx.lr = 0x827CB7E0;
	sub_827CB560(ctx, base);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x827cb764
	goto loc_827CB764;
loc_827CB7E8:
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r4,r30,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r30.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r3,r30,r29
	ctx.r3.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x827cb400
	ctx.lr = 0x827CB800;
	sub_827CB400(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cb74c
	if (ctx.cr0.eq) goto loc_827CB74C;
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x827cb758
	goto loc_827CB758;
}

__attribute__((alias("__imp__sub_827CB868"))) PPC_WEAK_FUNC(sub_827CB868);
PPC_FUNC_IMPL(__imp__sub_827CB868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CB870;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CB880;
	sub_82801BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82801c50
	ctx.lr = 0x827CB890;
	sub_82801C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// bl 0x82801bb0
	ctx.lr = 0x827CB8A0;
	sub_82801BB0(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,-10004
	ctx.r4.s64 = -10004;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CB8C0;
	sub_82801B00(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827cb90c
	if (ctx.cr6.gt) goto loc_827CB90C;
loc_827CB8DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827caff0
	ctx.lr = 0x827CB8F4;
	sub_827CAFF0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x827cb918
	if (!ctx.cr0.eq) goto loc_827CB918;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827cb8dc
	if (!ctx.cr6.gt) goto loc_827CB8DC;
loc_827CB90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB910:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_827CB918:
	// subf r11,r30,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r30.s64;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x827cb928
	if (!ctx.cr6.eq) goto loc_827CB928;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_827CB928:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
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
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bge cr6,0x827cb974
	if (!ctx.cr6.lt) goto loc_827CB974;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827CB974:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827cb560
	ctx.lr = 0x827CB99C;
	sub_827CB560(ctx, base);
	// b 0x827cb910
	goto loc_827CB910;
}

__attribute__((alias("__imp__sub_827CB9A0"))) PPC_WEAK_FUNC(sub_827CB9A0);
PPC_FUNC_IMPL(__imp__sub_827CB9A0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CB9BC;
	sub_82801BB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827cb9d4
	if (!ctx.cr0.eq) goto loc_827CB9D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8690
	ctx.lr = 0x827CB9D4;
	sub_827C8690(ctx, base);
loc_827CB9D4:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82801bb0
	ctx.lr = 0x827CB9DC;
	sub_82801BB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cba0c
	if (!ctx.cr0.eq) goto loc_827CBA0C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CB9F4;
	sub_827C8690(ctx, base);
loc_827CB9F4:
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
loc_827CBA0C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cb9f4
	if (ctx.cr6.lt) goto loc_827CB9F4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lis r8,-32131
	ctx.r8.s64 = -2105737216;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r8,-18328
	ctx.r4.s64 = ctx.r8.s64 + -18328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801e40
	ctx.lr = 0x827CBA60;
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

__attribute__((alias("__imp__sub_827CBA78"))) PPC_WEAK_FUNC(sub_827CBA78);
PPC_FUNC_IMPL(__imp__sub_827CBA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CBA80;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827CBAA0;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbb90
	if (ctx.cr0.eq) goto loc_827CBB90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CBAB0;
	sub_82801BB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801c50
	ctx.lr = 0x827CBAC0;
	sub_82801C50(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x827cbc0c
	if (ctx.cr0.eq) goto loc_827CBC0C;
loc_827CBACC:
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bne cr6,0x827cbaec
	if (!ctx.cr6.eq) goto loc_827CBAEC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x82a4e808
	ctx.lr = 0x827CBAE4;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cbb30
	if (!ctx.cr0.eq) goto loc_827CBB30;
loc_827CBAEC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,524
	ctx.r10.s64 = ctx.r30.s64 + 524;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cbb14
	if (ctx.cr6.lt) goto loc_827CBB14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c9108
	ctx.lr = 0x827CBB04;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbb14
	if (ctx.cr0.eq) goto loc_827CBB14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c9178
	ctx.lr = 0x827CBB14;
	sub_827C9178(ctx, base);
loc_827CBB14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x827cbb70
	goto loc_827CBB70;
loc_827CBB30:
	// lbzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addic. r4,r11,-49
	ctx.xer.ca = ctx.r11.u32 > 48;
	ctx.r4.s64 = ctx.r11.s64 + -49;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x827cbb80
	if (ctx.cr0.lt) goto loc_827CBB80;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827cbb80
	if (!ctx.cr6.lt) goto loc_827CBB80;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827cbb80
	if (ctx.cr6.eq) goto loc_827CBB80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827cb4b8
	ctx.lr = 0x827CBB68;
	sub_827CB4B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c9288
	ctx.lr = 0x827CBB70;
	sub_827C9288(ctx, base);
loc_827CBB70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x827cbacc
	if (ctx.cr6.lt) goto loc_827CBACC;
	// b 0x827cbc0c
	goto loc_827CBC0C;
loc_827CBB80:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,-4044
	ctx.r4.s64 = ctx.r11.s64 + -4044;
	// bl 0x827c87a8
	ctx.lr = 0x827CBB90;
	sub_827C87A8(ctx, base);
loc_827CBB90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827cb560
	ctx.lr = 0x827CBBC4;
	sub_827CB560(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82804670
	ctx.lr = 0x827CBBE0;
	sub_82804670(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827CBBEC;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbc00
	if (ctx.cr0.eq) goto loc_827CBC00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c9288
	ctx.lr = 0x827CBBFC;
	sub_827C9288(ctx, base);
	// b 0x827cbc0c
	goto loc_827CBC0C;
loc_827CBC00:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CBC0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CBC18"))) PPC_WEAK_FUNC(sub_827CBC18);
PPC_FUNC_IMPL(__imp__sub_827CBC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827CBC20;
	__savegprlr_23(ctx, base);
	// stwu r1,-976(r1)
	ea = -976 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CBC34;
	sub_827C8A20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CBC44;
	sub_82801BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x827cbc5c
	if (!ctx.cr0.eq) goto loc_827CBC5C;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CBC5C;
	sub_827C8690(ctx, base);
loc_827CBC5C:
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bge cr6,0x827cbcb0
	if (!ctx.cr6.lt) goto loc_827CBCB0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cbcb0
	if (ctx.cr6.eq) goto loc_827CBCB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827cbcb0
	if (!ctx.cr6.gt) goto loc_827CBCB0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CBCB0;
	sub_827C8B08(ctx, base);
loc_827CBCB0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x827cbcd8
	if (!ctx.cr6.eq) goto loc_827CBCD8;
	// addi r24,r30,1
	ctx.r24.s64 = ctx.r30.s64 + 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x827cbcdc
	goto loc_827CBCDC;
loc_827CBCD8:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
loc_827CBCDC:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x827cbe5c
	if (ctx.cr6.lt) goto loc_827CBE5C;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827CBD04;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cbd2c
	if (!ctx.cr0.eq) goto loc_827CBD2C;
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827cbe5c
	if (!ctx.cr6.lt) goto loc_827CBE5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cbe5c
	if (ctx.cr6.eq) goto loc_827CBE5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827cbe5c
	if (!ctx.cr6.eq) goto loc_827CBE5C;
loc_827CBD2C:
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// add r10,r27,r29
	ctx.r10.u64 = ctx.r27.u64 + ctx.r29.u64;
	// stw r31,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r31.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r10.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r29.u32);
	// ble cr6,0x827cbdf8
	if (!ctx.cr6.gt) goto loc_827CBDF8;
loc_827CBD54:
	// stw r26,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r26.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x827caff0
	ctx.lr = 0x827CBD68;
	sub_827CAFF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827cbd98
	if (ctx.cr0.eq) goto loc_827CBD98;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x827cba78
	ctx.lr = 0x827CBD88;
	sub_827CBA78(ctx, base);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x827cbd98
	if (!ctx.cr6.gt) goto loc_827CBD98;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x827cbde8
	goto loc_827CBDE8;
loc_827CBD98:
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cbdf8
	if (!ctx.cr6.lt) goto loc_827CBDF8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,620
	ctx.r10.s64 = ctx.r1.s64 + 620;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cbdcc
	if (ctx.cr6.lt) goto loc_827CBDCC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CBDBC;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbdcc
	if (ctx.cr0.eq) goto loc_827CBDCC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9178
	ctx.lr = 0x827CBDCC;
	sub_827C9178(ctx, base);
loc_827CBDCC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_827CBDE8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x827cbdf8
	if (!ctx.cr6.eq) goto loc_827CBDF8;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x827cbd54
	if (ctx.cr6.lt) goto loc_827CBD54;
loc_827CBDF8:
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r5,r29,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r29.s64;
	// bl 0x827c9210
	ctx.lr = 0x827CBE0C;
	sub_827C9210(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827c9108
	ctx.lr = 0x827CBE14;
	sub_827C9108(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82802508
	ctx.lr = 0x827CBE20;
	sub_82802508(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,976
	ctx.r1.s64 = ctx.r1.s64 + 976;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
loc_827CBE5C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r5,r11,-3820
	ctx.r5.s64 = ctx.r11.s64 + -3820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CBE70;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827CBE70"))) PPC_WEAK_FUNC(sub_827CBE70);
PPC_FUNC_IMPL(__imp__sub_827CBE70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827CBE78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x827c8a20
	ctx.lr = 0x827CBE8C;
	sub_827C8A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r31,524
	ctx.r29.s64 = ctx.r31.s64 + 524;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827cbeb8
	if (ctx.cr6.lt) goto loc_827CBEB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827CBEA8;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbeb8
	if (ctx.cr0.eq) goto loc_827CBEB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9178
	ctx.lr = 0x827CBEB8;
	sub_827C9178(ctx, base);
loc_827CBEB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,34
	ctx.r26.s64 = 34;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827cbfa8
	if (ctx.cr6.eq) goto loc_827CBFA8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r27,r11,-3792
	ctx.r27.s64 = ctx.r11.s64 + -3792;
loc_827CBEE4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827cbf8c
	if (ctx.cr0.eq) goto loc_827CBF8C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x827cbf14
	if (ctx.cr6.eq) goto loc_827CBF14;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x827cbf14
	if (ctx.cr6.eq) goto loc_827CBF14;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x827cbf14
	if (ctx.cr6.eq) goto loc_827CBF14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x827cbf50
	goto loc_827CBF50;
loc_827CBF14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827cbf38
	if (ctx.cr6.lt) goto loc_827CBF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827CBF28;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbf38
	if (ctx.cr0.eq) goto loc_827CBF38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9178
	ctx.lr = 0x827CBF38;
	sub_827C9178(ctx, base);
loc_827CBF38:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,92
	ctx.r10.s64 = 92;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_827CBF50:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827cbf70
	if (ctx.cr6.lt) goto loc_827CBF70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827CBF60;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbf70
	if (ctx.cr0.eq) goto loc_827CBF70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9178
	ctx.lr = 0x827CBF70;
	sub_827C9178(ctx, base);
loc_827CBF70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x827cbf9c
	goto loc_827CBF9C;
loc_827CBF8C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9210
	ctx.lr = 0x827CBF9C;
	sub_827C9210(ctx, base);
loc_827CBF9C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x827cbee4
	if (!ctx.cr6.eq) goto loc_827CBEE4;
loc_827CBFA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x827cbfcc
	if (ctx.cr6.lt) goto loc_827CBFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9108
	ctx.lr = 0x827CBFBC;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cbfcc
	if (ctx.cr0.eq) goto loc_827CBFCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9178
	ctx.lr = 0x827CBFCC;
	sub_827C9178(ctx, base);
loc_827CBFCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CBFE8"))) PPC_WEAK_FUNC(sub_827CBFE8);
PPC_FUNC_IMPL(__imp__sub_827CBFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827CBFF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r11,-3784
	ctx.r30.s64 = ctx.r11.s64 + -3784;
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// b 0x827cc028
	goto loc_827CC028;
loc_827CC01C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
loc_827CC028:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827CC030;
	sub_82A4CA90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc01c
	if (!ctx.cr0.eq) goto loc_827CC01C;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a4e808
	ctx.lr = 0x827CC040;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc04c
	if (ctx.cr0.eq) goto loc_827CC04C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_827CC04C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a4e808
	ctx.lr = 0x827CC054;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc060
	if (ctx.cr0.eq) goto loc_827CC060;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_827CC060:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// bne cr6,0x827cc0a0
	if (!ctx.cr6.eq) goto loc_827CC0A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a4e808
	ctx.lr = 0x827CC080;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc08c
	if (ctx.cr0.eq) goto loc_827CC08C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_827CC08C:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a4e808
	ctx.lr = 0x827CC094;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc0a0
	if (ctx.cr0.eq) goto loc_827CC0A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_827CC0A0:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82a4e808
	ctx.lr = 0x827CC0A8;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc0c0
	if (ctx.cr0.eq) goto loc_827CC0C0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,-3776
	ctx.r4.s64 = ctx.r11.s64 + -3776;
	// bl 0x827c87a8
	ctx.lr = 0x827CC0C0;
	sub_827C87A8(ctx, base);
loc_827CC0C0:
	// subf r30,r29,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r29.s64;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x827cc0e0
	if (!ctx.cr6.gt) goto loc_827CC0E0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,-3728
	ctx.r4.s64 = ctx.r11.s64 + -3728;
	// bl 0x827c87a8
	ctx.lr = 0x827CC0E0;
	sub_827C87A8(ctx, base);
loc_827CC0E0:
	// li r11,37
	ctx.r11.s64 = 37;
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// bl 0x82a4e530
	ctx.lr = 0x827CC0F8;
	sub_82A4E530(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CC110"))) PPC_WEAK_FUNC(sub_827CC110);
PPC_FUNC_IMPL(__imp__sub_827CC110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CC118;
	__savegprlr_27(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x827c8a20
	ctx.lr = 0x827CC130;
	sub_827C8A20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// blt cr6,0x827cc17c
	if (ctx.cr6.lt) goto loc_827CC17C;
loc_827CC158:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827c9108
	ctx.lr = 0x827CC160;
	sub_827C9108(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82802508
	ctx.lr = 0x827CC16C;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_827CC178:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_827CC17C:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x827cc198
	if (!ctx.cr6.eq) goto loc_827CC198;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,37
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 37, ctx.xer);
	// bne cr6,0x827cc1dc
	if (!ctx.cr6.eq) goto loc_827CC1DC;
loc_827CC198:
	// addi r10,r1,668
	ctx.r10.s64 = ctx.r1.s64 + 668;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cc1bc
	if (ctx.cr6.lt) goto loc_827CC1BC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827c9108
	ctx.lr = 0x827CC1AC;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc1bc
	if (ctx.cr0.eq) goto loc_827CC1BC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827c9178
	ctx.lr = 0x827CC1BC;
	sub_827C9178(ctx, base);
loc_827CC1BC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// b 0x827cc318
	goto loc_827CC318;
loc_827CC1DC:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x82a4e808
	ctx.lr = 0x827CC1E8;
	sub_82A4E808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc1fc
	if (ctx.cr0.eq) goto loc_827CC1FC;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x827cc3a0
	if (ctx.cr6.eq) goto loc_827CC3A0;
loc_827CC1FC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x827cbfe8
	ctx.lr = 0x827CC214;
	sub_827CBFE8(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// bgt cr6,0x827cc29c
	if (ctx.cr6.gt) goto loc_827CC29C;
	// beq cr6,0x827cc280
	if (ctx.cr6.eq) goto loc_827CC280;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x827cc25c
	if (ctx.cr6.eq) goto loc_827CC25C;
	// cmpwi cr6,r11,71
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 71, ctx.xer);
	// beq cr6,0x827cc25c
	if (ctx.cr6.eq) goto loc_827CC25C;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x827cc2c4
	if (ctx.cr6.eq) goto loc_827CC2C4;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// ble cr6,0x827cc3b0
	if (!ctx.cr6.gt) goto loc_827CC3B0;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x827cc280
	if (!ctx.cr6.gt) goto loc_827CC280;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bgt cr6,0x827cc3b0
	if (ctx.cr6.gt) goto loc_827CC3B0;
loc_827CC25C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CC268;
	sub_827C8B08(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82a4cf58
	ctx.lr = 0x827CC27C;
	sub_82A4CF58(ctx, base);
	// b 0x827cc2e8
	goto loc_827CC2E8;
loc_827CC280:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CC28C;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x827cc2dc
	goto loc_827CC2DC;
loc_827CC29C:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x827cc2c4
	if (ctx.cr6.eq) goto loc_827CC2C4;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x827cc38c
	if (ctx.cr6.eq) goto loc_827CC38C;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x827cc324
	if (ctx.cr6.eq) goto loc_827CC324;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x827cc2c4
	if (ctx.cr6.eq) goto loc_827CC2C4;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// bne cr6,0x827cc3b0
	if (!ctx.cr6.eq) goto loc_827CC3B0;
loc_827CC2C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CC2D0;
	sub_827C8B08(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_827CC2DC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82a4cf58
	ctx.lr = 0x827CC2E8;
	sub_82A4CF58(ctx, base);
loc_827CC2E8:
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827CC2F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827cc2f0
	if (!ctx.cr6.eq) goto loc_827CC2F0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827c9210
	ctx.lr = 0x827CC318;
	sub_827C9210(ctx, base);
loc_827CC318:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x827cc178
	if (ctx.cr6.lt) goto loc_827CC178;
	// b 0x827cc158
	goto loc_827CC158;
loc_827CC324:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CC334;
	sub_827C8A20(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827cc2dc
	if (!ctx.cr6.eq) goto loc_827CC2DC;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x827cc2dc
	if (ctx.cr6.lt) goto loc_827CC2DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82801738
	ctx.lr = 0x827CC35C;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x827c9288
	ctx.lr = 0x827CC388;
	sub_827C9288(ctx, base);
	// b 0x827cc318
	goto loc_827CC318;
loc_827CC38C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827cbe70
	ctx.lr = 0x827CC39C;
	sub_827CBE70(ctx, base);
	// b 0x827cc318
	goto loc_827CC318;
loc_827CC3A0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3700
	ctx.r4.s64 = ctx.r11.s64 + -3700;
	// bl 0x827c87a8
	ctx.lr = 0x827CC3B0;
	sub_827C87A8(ctx, base);
loc_827CC3B0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3664
	ctx.r4.s64 = ctx.r11.s64 + -3664;
	// bl 0x827c87a8
	ctx.lr = 0x827CC3C0;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CC3C0"))) PPC_WEAK_FUNC(sub_827CC3C0);
PPC_FUNC_IMPL(__imp__sub_827CC3C0) {
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
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r5,r11,-10616
	ctx.r5.s64 = ctx.r11.s64 + -10616;
	// addi r4,r10,26532
	ctx.r4.s64 = ctx.r10.s64 + 26532;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x827c8bf8
	ctx.lr = 0x827CC3E4;
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

__attribute__((alias("__imp__sub_827CC3F8"))) PPC_WEAK_FUNC(sub_827CC3F8);
PPC_FUNC_IMPL(__imp__sub_827CC3F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x827cc450
	if (ctx.cr6.eq) goto loc_827CC450;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_827CC42C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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
loc_827CC450:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x827cc494
	if (ctx.cr6.eq) goto loc_827CC494;
	// bl 0x82a52350
	ctx.lr = 0x827CC470;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827CC478;
	sub_82A52488(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-3420
	ctx.r4.s64 = ctx.r11.s64 + -3420;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CC490;
	sub_82801DC0(ctx, base);
	// b 0x827cc4b4
	goto loc_827CC4B4;
loc_827CC494:
	// bl 0x82a52350
	ctx.lr = 0x827CC498;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827CC4A0;
	sub_82A52488(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CC4B4;
	sub_82801DC0(ctx, base);
loc_827CC4B4:
	// bl 0x82a52350
	ctx.lr = 0x827CC4B8;
	sub_82A52350(ctx, base);
	// lwa r11,0(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 0));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x827cc42c
	goto loc_827CC42C;
}

__attribute__((alias("__imp__sub_827CC4E0"))) PPC_WEAK_FUNC(sub_827CC4E0);
PPC_FUNC_IMPL(__imp__sub_827CC4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-3412
	ctx.r5.s64 = ctx.r11.s64 + -3412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8918
	ctx.lr = 0x827CC504;
	sub_827C8918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc528
	if (!ctx.cr0.eq) goto loc_827CC528;
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
	// b 0x827cc558
	goto loc_827CC558;
loc_827CC528:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cc548
	if (!ctx.cr6.eq) goto loc_827CC548;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r11,-3392
	ctx.r4.s64 = ctx.r11.s64 + -3392;
	// b 0x827cc554
	goto loc_827CC554;
loc_827CC548:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-3380
	ctx.r4.s64 = ctx.r11.s64 + -3380;
loc_827CC554:
	// bl 0x82801d10
	ctx.lr = 0x827CC558;
	sub_82801D10(ctx, base);
loc_827CC558:
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

__attribute__((alias("__imp__sub_827CC570"))) PPC_WEAK_FUNC(sub_827CC570);
PPC_FUNC_IMPL(__imp__sub_827CC570) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-3412
	ctx.r5.s64 = ctx.r11.s64 + -3412;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x827c8918
	ctx.lr = 0x827CC598;
	sub_827C8918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc5b4
	if (!ctx.cr0.eq) goto loc_827CC5B4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-3404
	ctx.r5.s64 = ctx.r11.s64 + -3404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CC5B4;
	sub_827C85B8(ctx, base);
loc_827CC5B4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827cc5d0
	if (!ctx.cr6.eq) goto loc_827CC5D0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3372
	ctx.r4.s64 = ctx.r11.s64 + -3372;
	// bl 0x827c87a8
	ctx.lr = 0x827CC5D0;
	sub_827C87A8(ctx, base);
loc_827CC5D0:
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

__attribute__((alias("__imp__sub_827CC5E8"))) PPC_WEAK_FUNC(sub_827CC5E8);
PPC_FUNC_IMPL(__imp__sub_827CC5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828025c0
	ctx.lr = 0x827CC608;
	sub_828025C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-3412
	ctx.r4.s64 = ctx.r10.s64 + -3412;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82801d78
	ctx.lr = 0x827CC624;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827CC630;
	sub_82801F80(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827CC63C;
	sub_82802238(ctx, base);
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

__attribute__((alias("__imp__sub_827CC658"))) PPC_WEAK_FUNC(sub_827CC658);
PPC_FUNC_IMPL(__imp__sub_827CC658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CC660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CC678;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc5e8
	ctx.lr = 0x827CC680;
	sub_827CC5E8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq cr6,0x827cc6c4
	if (ctx.cr6.eq) goto loc_827CC6C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CC698;
	sub_82801D78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-6
	ctx.r4.s64 = -6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802118
	ctx.lr = 0x827CC6C4;
	sub_82802118(ctx, base);
loc_827CC6C4:
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827CC6D0;
	sub_82802118(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CC6D8"))) PPC_WEAK_FUNC(sub_827CC6D8);
PPC_FUNC_IMPL(__imp__sub_827CC6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CC6F8;
	sub_827CC570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a52050
	ctx.lr = 0x827CC700;
	sub_82A52050(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x827cc760
	if (ctx.cr6.eq) goto loc_827CC760;
	// bl 0x82a52050
	ctx.lr = 0x827CC70C;
	sub_82A52050(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827cc760
	if (ctx.cr6.eq) goto loc_827CC760;
	// bl 0x82a52050
	ctx.lr = 0x827CC71C;
	sub_82A52050(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827cc760
	if (ctx.cr6.eq) goto loc_827CC760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a50e70
	ctx.lr = 0x827CC730;
	sub_82A50E70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cc740
	if (ctx.cr0.eq) goto loc_827CC740;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x827cc758
	goto loc_827CC758;
loc_827CC740:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82801cb8
	ctx.lr = 0x827CC750;
	sub_82801CB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_827CC758:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x827cc764
	goto loc_827CC764;
loc_827CC760:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CC764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CC780"))) PPC_WEAK_FUNC(sub_827CC780);
PPC_FUNC_IMPL(__imp__sub_827CC780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827cc7b8
	if (!ctx.cr6.lt) goto loc_827CC7B8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cc7b8
	if (ctx.cr6.eq) goto loc_827CC7B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x827cc800
	if (!ctx.cr6.eq) goto loc_827CC800;
loc_827CC7B8:
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x827cc7d0
	if (!ctx.cr6.lt) goto loc_827CC7D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827CC7D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cc800
	if (ctx.cr6.eq) goto loc_827CC800;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x827cc800
	if (!ctx.cr6.eq) goto loc_827CC800;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3340
	ctx.r4.s64 = ctx.r11.s64 + -3340;
	// bl 0x82801d78
	ctx.lr = 0x827CC7F4;
	sub_82801D78(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CC800;
	sub_82801F80(ctx, base);
loc_827CC800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc6d8
	ctx.lr = 0x827CC808;
	sub_827CC6D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827cc3f8
	ctx.lr = 0x827CC818;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CC830"))) PPC_WEAK_FUNC(sub_827CC830);
PPC_FUNC_IMPL(__imp__sub_827CC830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-3412
	ctx.r5.s64 = ctx.r11.s64 + -3412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8918
	ctx.lr = 0x827CC854;
	sub_827C8918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc870
	if (!ctx.cr0.eq) goto loc_827CC870;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-3404
	ctx.r5.s64 = ctx.r11.s64 + -3404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CC870;
	sub_827C85B8(ctx, base);
loc_827CC870:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cc884
	if (ctx.cr6.eq) goto loc_827CC884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc6d8
	ctx.lr = 0x827CC884;
	sub_827CC6D8(ctx, base);
loc_827CC884:
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

__attribute__((alias("__imp__sub_827CC8A0"))) PPC_WEAK_FUNC(sub_827CC8A0);
PPC_FUNC_IMPL(__imp__sub_827CC8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-3412
	ctx.r5.s64 = ctx.r11.s64 + -3412;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8918
	ctx.lr = 0x827CC8C4;
	sub_827C8918(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc8e0
	if (!ctx.cr0.eq) goto loc_827CC8E0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-3404
	ctx.r5.s64 = ctx.r11.s64 + -3404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CC8E0;
	sub_827C85B8(ctx, base);
loc_827CC8E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cc904
	if (!ctx.cr6.eq) goto loc_827CC904;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3332
	ctx.r4.s64 = ctx.r11.s64 + -3332;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82a4ea80
	ctx.lr = 0x827CC900;
	sub_82A4EA80(ctx, base);
	// b 0x827cc924
	goto loc_827CC924;
loc_827CC904:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827CC910;
	sub_82801CB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3324
	ctx.r4.s64 = ctx.r11.s64 + -3324;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a4cf58
	ctx.lr = 0x827CC924;
	sub_82A4CF58(ctx, base);
loc_827CC924:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3320
	ctx.r4.s64 = ctx.r11.s64 + -3320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CC938;
	sub_82801DC0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CC950"))) PPC_WEAK_FUNC(sub_827CC950);
PPC_FUNC_IMPL(__imp__sub_827CC950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CC958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CC968;
	sub_82801BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827cc980
	if (!ctx.cr0.eq) goto loc_827CC980;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8690
	ctx.lr = 0x827CC980;
	sub_827C8690(ctx, base);
loc_827CC980:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20984
	ctx.r5.s64 = ctx.r11.s64 + 20984;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827c8a78
	ctx.lr = 0x827CC994;
	sub_827C8A78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc5e8
	ctx.lr = 0x827CC9A0;
	sub_827CC5E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a509f8
	ctx.lr = 0x827CC9B0;
	sub_82A509F8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cc9d0
	if (!ctx.cr0.eq) goto loc_827CC9D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CC9CC;
	sub_827CC3F8(ctx, base);
	// b 0x827cc9d4
	goto loc_827CC9D4;
loc_827CC9D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CC9D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CC9E0"))) PPC_WEAK_FUNC(sub_827CC9E0);
PPC_FUNC_IMPL(__imp__sub_827CC9E0) {
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
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3308
	ctx.r4.s64 = ctx.r11.s64 + -3308;
	// bl 0x827c87a8
	ctx.lr = 0x827CC9F8;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CC9F8"))) PPC_WEAK_FUNC(sub_827CC9F8);
PPC_FUNC_IMPL(__imp__sub_827CC9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827cc5e8
	ctx.lr = 0x827CCA14;
	sub_827CC5E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a53d38
	ctx.lr = 0x827CCA1C;
	sub_82A53D38(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827cca3c
	if (!ctx.cr0.eq) goto loc_827CCA3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CCA38;
	sub_827CC3F8(ctx, base);
	// b 0x827cca40
	goto loc_827CCA40;
loc_827CCA3C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CCA40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CCA58"))) PPC_WEAK_FUNC(sub_827CCA58);
PPC_FUNC_IMPL(__imp__sub_827CCA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CCA60;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ccb50
	if (!ctx.cr6.lt) goto loc_827CCB50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ccb50
	if (ctx.cr6.eq) goto loc_827CCB50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ccb50
	if (!ctx.cr6.gt) goto loc_827CCB50;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82801bb0
	ctx.lr = 0x827CCA9C;
	sub_82801BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CCAAC;
	sub_82801D78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827ccb18
	if (ctx.cr6.eq) goto loc_827CCB18;
	// bl 0x827cc5e8
	ctx.lr = 0x827CCABC;
	sub_827CC5E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a509f8
	ctx.lr = 0x827CCACC;
	sub_82A509F8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827ccb44
	if (!ctx.cr0.eq) goto loc_827CCB44;
	// bl 0x82a52350
	ctx.lr = 0x827CCADC;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827CCAE4;
	sub_82A52488(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-3420
	ctx.r4.s64 = ctx.r11.s64 + -3420;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801dc0
	ctx.lr = 0x827CCAFC;
	sub_82801DC0(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CCB08;
	sub_82801BB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CCB18;
	sub_827C85B8(ctx, base);
loc_827CCB18:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827cc570
	ctx.lr = 0x827CCB20;
	sub_827CC570(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
loc_827CCB44:
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827CCB50;
	sub_82802168(ctx, base);
loc_827CCB50:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CCB5C;
	sub_82801D78(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CCB68;
	sub_82801F80(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CCB78"))) PPC_WEAK_FUNC(sub_827CCB78);
PPC_FUNC_IMPL(__imp__sub_827CCB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,20984
	ctx.r5.s64 = ctx.r11.s64 + 20984;
	// addi r4,r10,-3284
	ctx.r4.s64 = ctx.r10.s64 + -3284;
	// b 0x827cca58
	sub_827CCA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CCB90"))) PPC_WEAK_FUNC(sub_827CCB90);
PPC_FUNC_IMPL(__imp__sub_827CCB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-23076
	ctx.r5.s64 = ctx.r11.s64 + -23076;
	// addi r4,r10,-3340
	ctx.r4.s64 = ctx.r10.s64 + -3340;
	// b 0x827cca58
	sub_827CCA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CCBA8"))) PPC_WEAK_FUNC(sub_827CCBA8);
PPC_FUNC_IMPL(__imp__sub_827CCBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CCBC4;
	sub_827CC570(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3412
	ctx.r4.s64 = ctx.r11.s64 + -3412;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82801d10
	ctx.lr = 0x827CCBD8;
	sub_82801D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x82801f80
	ctx.lr = 0x827CCBE4;
	sub_82801F80(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r11,-11696
	ctx.r4.s64 = ctx.r11.s64 + -11696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
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
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801e40
	ctx.lr = 0x827CCC38;
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

__attribute__((alias("__imp__sub_827CCC50"))) PPC_WEAK_FUNC(sub_827CCC50);
PPC_FUNC_IMPL(__imp__sub_827CCC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CCC58;
	__savegprlr_29(ctx, base);
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
	// bge cr6,0x827ccc84
	if (!ctx.cr6.lt) goto loc_827CCC84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ccc84
	if (ctx.cr6.eq) goto loc_827CCC84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cccac
	if (ctx.cr6.gt) goto loc_827CCCAC;
loc_827CCC84:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3284
	ctx.r4.s64 = ctx.r11.s64 + -3284;
	// bl 0x82801d78
	ctx.lr = 0x827CCC94;
	sub_82801D78(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CCCA0;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ccba8
	ctx.lr = 0x827CCCA8;
	sub_827CCBA8(ctx, base);
	// b 0x827ccda0
	goto loc_827CCDA0;
loc_827CCCAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CCCB8;
	sub_82801BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827cccd0
	if (!ctx.cr0.eq) goto loc_827CCCD0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8690
	ctx.lr = 0x827CCCD0;
	sub_827C8690(ctx, base);
loc_827CCCD0:
	// bl 0x827cc5e8
	ctx.lr = 0x827CCCD4;
	sub_827CC5E8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,20984
	ctx.r4.s64 = ctx.r11.s64 + 20984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a509f8
	ctx.lr = 0x827CCCE8;
	sub_82A509F8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827ccd10
	if (!ctx.cr0.eq) goto loc_827CCD10;
	// bl 0x82a52350
	ctx.lr = 0x827CCCF8;
	sub_82A52350(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82a52488
	ctx.lr = 0x827CCD00;
	sub_82A52488(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CCD10;
	sub_827C85B8(ctx, base);
loc_827CCD10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r10,-3412
	ctx.r4.s64 = ctx.r10.s64 + -3412;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r30,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// bl 0x82801d10
	ctx.lr = 0x827CCD34;
	sub_82801D10(ctx, base);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CCD40;
	sub_82801F80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801738
	ctx.lr = 0x827CCD4C;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r8,-32131
	ctx.r8.s64 = -2105737216;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r8,-11696
	ctx.r4.s64 = ctx.r8.s64 + -11696;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801e40
	ctx.lr = 0x827CCD9C;
	sub_82801E40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CCDA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CCDA8"))) PPC_WEAK_FUNC(sub_827CCDA8);
PPC_FUNC_IMPL(__imp__sub_827CCDA8) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827CCDD4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9108
	ctx.lr = 0x827CCDE0;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ccdf0
	if (ctx.cr0.eq) goto loc_827CCDF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9178
	ctx.lr = 0x827CCDF0;
	sub_827C9178(ctx, base);
loc_827CCDF0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a50a08
	ctx.lr = 0x827CCE00;
	sub_82A50A08(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cce7c
	if (ctx.cr0.eq) goto loc_827CCE7C;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_827CCE10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827cce10
	if (!ctx.cr6.eq) goto loc_827CCE10;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r1,91
	ctx.r10.s64 = ctx.r1.s64 + 91;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x827ccdd4
	if (!ctx.cr6.eq) goto loc_827CCDD4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827c9108
	ctx.lr = 0x827CCE54;
	sub_827C9108(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82802508
	ctx.lr = 0x827CCE60;
	sub_82802508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CCE64:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827CCE7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9108
	ctx.lr = 0x827CCE84;
	sub_827C9108(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82802508
	ctx.lr = 0x827CCE90;
	sub_82802508(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801c50
	ctx.lr = 0x827CCEA4;
	sub_82801C50(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// b 0x827cce64
	goto loc_827CCE64;
}

__attribute__((alias("__imp__sub_827CCEB8"))) PPC_WEAK_FUNC(sub_827CCEB8);
PPC_FUNC_IMPL(__imp__sub_827CCEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827CCEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r30,512
	ctx.r30.s64 = 512;
loc_827CCEE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9108
	ctx.lr = 0x827CCEF0;
	sub_827C9108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827ccf00
	if (ctx.cr0.eq) goto loc_827CCF00;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9178
	ctx.lr = 0x827CCF00;
	sub_827C9178(ctx, base);
loc_827CCF00:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x827ccf0c
	if (!ctx.cr6.gt) goto loc_827CCF0C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_827CCF0C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a52038
	ctx.lr = 0x827CCF20;
	sub_82A52038(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x827ccf3c
	if (ctx.cr0.eq) goto loc_827CCF3C;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x827ccee8
	if (ctx.cr6.eq) goto loc_827CCEE8;
loc_827CCF3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827c9108
	ctx.lr = 0x827CCF44;
	sub_827C9108(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82802508
	ctx.lr = 0x827CCF50;
	sub_82802508(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x827ccf78
	if (ctx.cr6.eq) goto loc_827CCF78;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82801c50
	ctx.lr = 0x827CCF6C;
	sub_82801C50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x827ccf7c
	if (ctx.cr0.eq) goto loc_827CCF7C;
loc_827CCF78:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CCF7C:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CCF88"))) PPC_WEAK_FUNC(sub_827CCF88);
PPC_FUNC_IMPL(__imp__sub_827CCF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827CCF90;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x827ccff4
	if (!ctx.cr0.eq) goto loc_827CCFF4;
	// bl 0x827ccda8
	ctx.lr = 0x827CCFBC;
	sub_827CCDA8(ctx, base);
	// addi r28,r25,1
	ctx.r28.s64 = ctx.r25.s64 + 1;
loc_827CCFC0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827ccfe8
	if (!ctx.cr6.eq) goto loc_827CCFE8;
loc_827CCFC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CCFE8:
	// subf r3,r25,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r25.s64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_827CCFF4:
	// addi r4,r27,20
	ctx.r4.s64 = ctx.r27.s64 + 20;
	// bl 0x82801850
	ctx.lr = 0x827CCFFC;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cd01c
	if (!ctx.cr0.eq) goto loc_827CD01C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-3272
	ctx.r5.s64 = ctx.r11.s64 + -3272;
	// addi r4,r10,-4600
	ctx.r4.s64 = ctx.r10.s64 + -4600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CD01C;
	sub_827C87A8(ctx, base);
loc_827CD01C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r26,r11,-3276
	ctx.r26.s64 = ctx.r11.s64 + -3276;
loc_827CD02C:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x827ccfc8
	if (ctx.cr6.eq) goto loc_827CCFC8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828017c0
	ctx.lr = 0x827CD044;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cd0bc
	if (ctx.cr0.eq) goto loc_827CD0BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827cd0bc
	if (!ctx.cr6.eq) goto loc_827CD0BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CD060;
	sub_82801B00(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x827cd0ac
	if (!ctx.cr6.eq) goto loc_827CD0AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a51a68
	ctx.lr = 0x827CD07C;
	sub_82A51A68(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a527a8
	ctx.lr = 0x827CD088;
	sub_82A527A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CD098;
	sub_82801D10(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x827cd164
	goto loc_827CD164;
loc_827CD0AC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cceb8
	ctx.lr = 0x827CD0B8;
	sub_827CCEB8(ctx, base);
	// b 0x827cd164
	goto loc_827CD164;
loc_827CD0BC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CD0C8;
	sub_82801BB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cd19c
	if (ctx.cr0.eq) goto loc_827CD19C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x827cd19c
	if (!ctx.cr6.eq) goto loc_827CD19C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x827cd150
	if (ctx.cr6.eq) goto loc_827CD150;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x827cd140
	if (ctx.cr6.eq) goto loc_827CD140;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// bne cr6,0x827cd174
	if (!ctx.cr6.eq) goto loc_827CD174;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a53fa0
	ctx.lr = 0x827CD10C;
	sub_82A53FA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827cd138
	if (!ctx.cr6.eq) goto loc_827CD138;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827cd160
	goto loc_827CD160;
loc_827CD138:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827cd164
	goto loc_827CD164;
loc_827CD140:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ccda8
	ctx.lr = 0x827CD14C;
	sub_827CCDA8(ctx, base);
	// b 0x827cd164
	goto loc_827CD164;
loc_827CD150:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cceb8
	ctx.lr = 0x827CD160;
	sub_827CCEB8(ctx, base);
loc_827CD160:
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CD164:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x827cd02c
	if (!ctx.cr6.eq) goto loc_827CD02C;
	// b 0x827ccfc0
	goto loc_827CCFC0;
loc_827CD174:
	// cmpwi cr6,r11,119
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 119, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827cd190
	if (ctx.cr6.eq) goto loc_827CD190;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-3220
	ctx.r5.s64 = ctx.r11.s64 + -3220;
	// bl 0x827c85b8
	ctx.lr = 0x827CD190;
	sub_827C85B8(ctx, base);
loc_827CD190:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3252
	ctx.r4.s64 = ctx.r11.s64 + -3252;
	// bl 0x827c87a8
	ctx.lr = 0x827CD19C;
	sub_827C87A8(ctx, base);
loc_827CD19C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-4344
	ctx.r5.s64 = ctx.r11.s64 + -4344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CD1B0;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827CD1B0"))) PPC_WEAK_FUNC(sub_827CD1B0);
PPC_FUNC_IMPL(__imp__sub_827CD1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3284
	ctx.r4.s64 = ctx.r11.s64 + -3284;
	// bl 0x82801d78
	ctx.lr = 0x827CD1D0;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82801f80
	ctx.lr = 0x827CD1DC;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x827cc570
	ctx.lr = 0x827CD1E8;
	sub_827CC570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ccf88
	ctx.lr = 0x827CD1F8;
	sub_827CCF88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD210"))) PPC_WEAK_FUNC(sub_827CD210);
PPC_FUNC_IMPL(__imp__sub_827CD210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CD22C;
	sub_827CC570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x827ccf88
	ctx.lr = 0x827CD23C;
	sub_827CCF88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD250"))) PPC_WEAK_FUNC(sub_827CD250);
PPC_FUNC_IMPL(__imp__sub_827CD250) {
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
	// li r4,-10003
	ctx.r4.s64 = -10003;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827CD26C;
	sub_82801CB8(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x827cd288
	if (!ctx.cr6.eq) goto loc_827CD288;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3204
	ctx.r4.s64 = ctx.r11.s64 + -3204;
	// bl 0x827c87a8
	ctx.lr = 0x827CD288;
	sub_827C87A8(ctx, base);
loc_827CD288:
	// bl 0x827ccda8
	ctx.lr = 0x827CD28C;
	sub_827CCDA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cd29c
	if (ctx.cr0.eq) goto loc_827CD29C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827cd330
	goto loc_827CD330;
loc_827CD29C:
	// li r4,-10004
	ctx.r4.s64 = -10004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827CD2A8;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cd32c
	if (ctx.cr0.eq) goto loc_827CD32C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cd2e8
	if (!ctx.cr6.lt) goto loc_827CD2E8;
loc_827CD2C0:
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
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827cd2c0
	if (ctx.cr6.lt) goto loc_827CD2C0;
loc_827CD2E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bge cr6,0x827cd308
	if (!ctx.cr6.lt) goto loc_827CD308;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827CD308:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
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
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x827cc6d8
	ctx.lr = 0x827CD32C;
	sub_827CC6D8(ctx, base);
loc_827CD32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CD330:
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

__attribute__((alias("__imp__sub_827CD348"))) PPC_WEAK_FUNC(sub_827CD348);
PPC_FUNC_IMPL(__imp__sub_827CD348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827CD350;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addic. r28,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r28.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x827cd3e4
	if (ctx.cr0.eq) goto loc_827CD3E4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r26,r11,-3180
	ctx.r26.s64 = ctx.r11.s64 + -3180;
loc_827CD384:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// bl 0x828017c0
	ctx.lr = 0x827CD394;
	sub_828017C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827cd3fc
	if (ctx.cr0.eq) goto loc_827CD3FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827cd3fc
	if (!ctx.cr6.eq) goto loc_827CD3FC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827cd3d4
	if (ctx.cr6.eq) goto loc_827CD3D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CD3B8;
	sub_82801B00(ctx, base);
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a515d0
	ctx.lr = 0x827CD3CC;
	sub_82A515D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x827cd430
	if (ctx.cr0.gt) goto loc_827CD430;
loc_827CD3D4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827CD3D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x827cd384
	if (!ctx.cr6.eq) goto loc_827CD384;
loc_827CD3E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD3F4;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_827CD3FC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CD40C;
	sub_827C8A20(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827cd3d4
	if (ctx.cr6.eq) goto loc_827CD3D4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a54270
	ctx.lr = 0x827CD428;
	sub_82A54270(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827cd3d4
	if (!ctx.cr6.eq) goto loc_827CD3D4;
loc_827CD430:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827cd3d8
	goto loc_827CD3D8;
}

__attribute__((alias("__imp__sub_827CD438"))) PPC_WEAK_FUNC(sub_827CD438);
PPC_FUNC_IMPL(__imp__sub_827CD438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3340
	ctx.r4.s64 = ctx.r11.s64 + -3340;
	// bl 0x82801d78
	ctx.lr = 0x827CD458;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82801f80
	ctx.lr = 0x827CD464;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x827cc570
	ctx.lr = 0x827CD470;
	sub_827CC570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd348
	ctx.lr = 0x827CD480;
	sub_827CD348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD498"))) PPC_WEAK_FUNC(sub_827CD498);
PPC_FUNC_IMPL(__imp__sub_827CD498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CD4B4;
	sub_827CC570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x827cd348
	ctx.lr = 0x827CD4C4;
	sub_827CD348(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD4D8"))) PPC_WEAK_FUNC(sub_827CD4D8);
PPC_FUNC_IMPL(__imp__sub_827CD4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CD4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CD4F0;
	sub_827CC570(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r11,-3424
	ctx.r5.s64 = ctx.r11.s64 + -3424;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CD50C;
	sub_827C8A78(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-3160
	ctx.r7.s64 = ctx.r11.s64 + -3160;
	// lwz r11,-3160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3160);
	// b 0x827cd55c
	goto loc_827CD55C;
loc_827CD520:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827CD524:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x827cd548
	if (ctx.cr0.eq) goto loc_827CD548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827cd524
	if (ctx.cr6.eq) goto loc_827CD524;
loc_827CD548:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827cd59c
	if (ctx.cr0.eq) goto loc_827CD59C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
loc_827CD55C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cd520
	if (!ctx.cr6.eq) goto loc_827CD520;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_827CD568:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cd590
	if (!ctx.cr6.lt) goto loc_827CD590;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cd590
	if (ctx.cr6.eq) goto loc_827CD590;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cd5a4
	if (ctx.cr6.gt) goto loc_827CD5A4;
loc_827CD590:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cd5b0
	goto loc_827CD5B0;
loc_827CD59C:
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// b 0x827cd568
	goto loc_827CD568;
loc_827CD5A4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CD5B0;
	sub_827C8B08(ctx, base);
loc_827CD5B0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x827cd5cc
	if (!ctx.cr6.eq) goto loc_827CD5CC;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-3144
	ctx.r5.s64 = ctx.r11.s64 + -3144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CD5CC;
	sub_827C85B8(ctx, base);
loc_827CD5CC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r11,r11,-3172
	ctx.r11.s64 = ctx.r11.s64 + -3172;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82a54450
	ctx.lr = 0x827CD5F0;
	sub_82A54450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cd60c
	if (ctx.cr0.eq) goto loc_827CD60C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD608;
	sub_827CC3F8(ctx, base);
	// b 0x827cd648
	goto loc_827CD648;
loc_827CD60C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a54788
	ctx.lr = 0x827CD614;
	sub_82A54788(ctx, base);
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
loc_827CD648:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CD650"))) PPC_WEAK_FUNC(sub_827CD650);
PPC_FUNC_IMPL(__imp__sub_827CD650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-3340
	ctx.r4.s64 = ctx.r11.s64 + -3340;
	// bl 0x82801d78
	ctx.lr = 0x827CD670;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82801f80
	ctx.lr = 0x827CD67C;
	sub_82801F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x827cc570
	ctx.lr = 0x827CD688;
	sub_827CC570(ctx, base);
	// bl 0x82a54b78
	ctx.lr = 0x827CD68C;
	sub_82A54B78(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD6A0;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD6B8"))) PPC_WEAK_FUNC(sub_827CD6B8);
PPC_FUNC_IMPL(__imp__sub_827CD6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827cc570
	ctx.lr = 0x827CD6D4;
	sub_827CC570(ctx, base);
	// bl 0x82a54b78
	ctx.lr = 0x827CD6D8;
	sub_82A54B78(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD6EC;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD700"))) PPC_WEAK_FUNC(sub_827CD700);
PPC_FUNC_IMPL(__imp__sub_827CD700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CD720;
	sub_82801BB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x827cd738
	if (!ctx.cr0.eq) goto loc_827CD738;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CD738;
	sub_827C8690(ctx, base);
loc_827CD738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a54c78
	ctx.lr = 0x827CD740;
	sub_82A54C78(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD754;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD770"))) PPC_WEAK_FUNC(sub_827CD770);
PPC_FUNC_IMPL(__imp__sub_827CD770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CD790;
	sub_82801BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827cd7a8
	if (!ctx.cr0.eq) goto loc_827CD7A8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8690
	ctx.lr = 0x827CD7A8;
	sub_827C8690(ctx, base);
loc_827CD7A8:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82801bb0
	ctx.lr = 0x827CD7B0;
	sub_82801BB0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x827cd7c8
	if (!ctx.cr0.eq) goto loc_827CD7C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CD7C8;
	sub_827C8690(ctx, base);
loc_827CD7C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a54cc8
	ctx.lr = 0x827CD7D0;
	sub_82A54CC8(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x827cc3f8
	ctx.lr = 0x827CD7E4;
	sub_827CC3F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD800"))) PPC_WEAK_FUNC(sub_827CD800);
PPC_FUNC_IMPL(__imp__sub_827CD800) {
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a539c0
	ctx.lr = 0x827CD81C;
	sub_82A539C0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827cd838
	if (ctx.cr6.eq) goto loc_827CD838;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-3128
	ctx.r4.s64 = ctx.r11.s64 + -3128;
	// bl 0x827c87a8
	ctx.lr = 0x827CD838;
	sub_827C87A8(ctx, base);
loc_827CD838:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82801d78
	ctx.lr = 0x827CD840;
	sub_82801D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_827CD858"))) PPC_WEAK_FUNC(sub_827CD858);
PPC_FUNC_IMPL(__imp__sub_827CD858) {
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
	// bl 0x82a54d18
	ctx.lr = 0x827CD870;
	sub_82A54D18(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,3
	ctx.r11.s64 = 3;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16444(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16444);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_827CD8C8"))) PPC_WEAK_FUNC(sub_827CD8C8);
PPC_FUNC_IMPL(__imp__sub_827CD8C8) {
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
	// bl 0x82801d78
	ctx.lr = 0x827CD8E8;
	sub_82801D78(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827CD924;
	sub_82802168(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CD940"))) PPC_WEAK_FUNC(sub_827CD940);
PPC_FUNC_IMPL(__imp__sub_827CD940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CD948;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CD95C;
	sub_82801D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// bl 0x82801f28
	ctx.lr = 0x827CD968;
	sub_82801F28(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827CD974;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cd998
	if (ctx.cr0.eq) goto loc_827CD998;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CD988;
	sub_82801B00(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x827cd9b8
	goto loc_827CD9B8;
loc_827CD998:
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x827cd9b4
	if (!ctx.cr6.eq) goto loc_827CD9B4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-3076
	ctx.r4.s64 = ctx.r11.s64 + -3076;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CD9B4;
	sub_827C87A8(ctx, base);
loc_827CD9B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_827CD9B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CD9D0"))) PPC_WEAK_FUNC(sub_827CD9D0);
PPC_FUNC_IMPL(__imp__sub_827CD9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CD9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-3040
	ctx.r5.s64 = ctx.r11.s64 + -3040;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CD9F4;
	sub_827C8A78(ctx, base);
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
	// bge cr6,0x827cda20
	if (!ctx.cr6.lt) goto loc_827CDA20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cda20
	if (ctx.cr6.eq) goto loc_827CDA20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cda2c
	if (ctx.cr6.gt) goto loc_827CDA2C;
loc_827CDA20:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cda38
	goto loc_827CDA38;
loc_827CDA2C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CDA38;
	sub_827C8B08(ctx, base);
loc_827CDA38:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bne cr6,0x827cda5c
	if (!ctx.cr6.eq) goto loc_827CDA5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a53518
	ctx.lr = 0x827CDA58;
	sub_82A53518(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
loc_827CDA5C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x827cda78
	if (!ctx.cr6.eq) goto loc_827CDA78;
	// bl 0x82a52e48
	ctx.lr = 0x827CDA70;
	sub_82A52E48(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x827cda7c
	goto loc_827CDA7C;
loc_827CDA78:
	// bl 0x82a53218
	ctx.lr = 0x827CDA7C;
	sub_82A53218(ctx, base);
loc_827CDA7C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827cdaa4
	if (!ctx.cr6.eq) goto loc_827CDAA4;
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
	// b 0x827cdc08
	goto loc_827CDC08;
loc_827CDAA4:
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,-3036
	ctx.r10.s64 = ctx.r10.s64 + -3036;
loc_827CDAB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x827cdad4
	if (ctx.cr0.eq) goto loc_827CDAD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827cdab0
	if (ctx.cr6.eq) goto loc_827CDAB0;
loc_827CDAD4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827cdbe0
	if (!ctx.cr0.eq) goto loc_827CDBE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827CDAE4;
	sub_82802018(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-3032
	ctx.r4.s64 = ctx.r11.s64 + -3032;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDAF8;
	sub_827CD8C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,-3028
	ctx.r4.s64 = ctx.r11.s64 + -3028;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB0C;
	sub_827CD8C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-3024
	ctx.r4.s64 = ctx.r11.s64 + -3024;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB20;
	sub_827CD8C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,-3016
	ctx.r4.s64 = ctx.r11.s64 + -3016;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB34;
	sub_827CD8C8(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-3012
	ctx.r4.s64 = ctx.r10.s64 + -3012;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB4C;
	sub_827CD8C8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-3004
	ctx.r4.s64 = ctx.r10.s64 + -3004;
	// addi r5,r11,1900
	ctx.r5.s64 = ctx.r11.s64 + 1900;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB64;
	sub_827CD8C8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-2996
	ctx.r4.s64 = ctx.r10.s64 + -2996;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB7C;
	sub_827CD8C8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-2988
	ctx.r4.s64 = ctx.r10.s64 + -2988;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x827cd8c8
	ctx.lr = 0x827CDB94;
	sub_827CD8C8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2980
	ctx.r4.s64 = ctx.r11.s64 + -2980;
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x82801d78
	ctx.lr = 0x827CDBA8;
	sub_82801D78(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,-3
	ctx.r4.s64 = -3;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827CDBDC;
	sub_82802168(ctx, base);
	// b 0x827cdc08
	goto loc_827CDC08;
loc_827CDBE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a55c18
	ctx.lr = 0x827CDBF4;
	sub_82A55C18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827cdc14
	if (ctx.cr0.eq) goto loc_827CDC14;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82801d78
	ctx.lr = 0x827CDC08;
	sub_82801D78(ctx, base);
loc_827CDC08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_827CDC14:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-2972
	ctx.r4.s64 = ctx.r11.s64 + -2972;
	// bl 0x827c87a8
	ctx.lr = 0x827CDC20;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CDC20"))) PPC_WEAK_FUNC(sub_827CDC20);
PPC_FUNC_IMPL(__imp__sub_827CDC20) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cdc5c
	if (!ctx.cr6.lt) goto loc_827CDC5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cdc5c
	if (ctx.cr6.eq) goto loc_827CDC5C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x827cdc70
	if (ctx.cr6.gt) goto loc_827CDC70;
loc_827CDC5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a53518
	ctx.lr = 0x827CDC64;
	sub_82A53518(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x827cddcc
	goto loc_827CDDCC;
loc_827CDC70:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cdc8c
	if (!ctx.cr6.lt) goto loc_827CDC8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cdc8c
	if (ctx.cr6.eq) goto loc_827CDC8C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x827cdc9c
	if (ctx.cr6.eq) goto loc_827CDC9C;
loc_827CDC8C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CDC9C;
	sub_827C8690(ctx, base);
loc_827CDC9C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827cdcc0
	goto loc_827CDCC0;
loc_827CDCA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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
loc_827CDCC0:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cdca4
	if (ctx.cr6.lt) goto loc_827CDCA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-3032
	ctx.r4.s64 = ctx.r10.s64 + -3032;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDCEC;
	sub_827CD940(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-3028
	ctx.r4.s64 = ctx.r11.s64 + -3028;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDD04;
	sub_827CD940(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r11,-3024
	ctx.r4.s64 = ctx.r11.s64 + -3024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDD1C;
	sub_827CD940(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-3016
	ctx.r4.s64 = ctx.r11.s64 + -3016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDD34;
	sub_827CD940(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-3012
	ctx.r4.s64 = ctx.r11.s64 + -3012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDD4C;
	sub_827CD940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r10,-3004
	ctx.r4.s64 = ctx.r10.s64 + -3004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cd940
	ctx.lr = 0x827CDD68;
	sub_827CD940(ctx, base);
	// addi r11,r3,-1900
	ctx.r11.s64 = ctx.r3.s64 + -1900;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-2980
	ctx.r4.s64 = ctx.r10.s64 + -2980;
	// bl 0x82801d78
	ctx.lr = 0x827CDD80;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827CDD8C;
	sub_82801F28(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827CDD98;
	sub_82801B58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a53510
	ctx.lr = 0x827CDDB0;
	sub_82A53510(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bne cr6,0x827cddc8
	if (!ctx.cr6.eq) goto loc_827CDDC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x827cdde4
	goto loc_827CDDE4;
loc_827CDDC8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_827CDDCC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_827CDDE4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827CDE10"))) PPC_WEAK_FUNC(sub_827CDE10);
PPC_FUNC_IMPL(__imp__sub_827CDE10) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cde50
	if (!ctx.cr6.lt) goto loc_827CDE50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cde50
	if (ctx.cr6.eq) goto loc_827CDE50;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cde5c
	if (ctx.cr6.gt) goto loc_827CDE5C;
loc_827CDE50:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// b 0x827cde6c
	goto loc_827CDE6C;
loc_827CDE5C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CDE68;
	sub_827C8B08(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_827CDE6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CDE78;
	sub_827C8B08(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fctidz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82a52b68
	ctx.lr = 0x827CDE94;
	sub_82A52B68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827CDED0"))) PPC_WEAK_FUNC(sub_827CDED0);
PPC_FUNC_IMPL(__imp__sub_827CDED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CDED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CDEE8;
	sub_82801BB0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-3512
	ctx.r29.s64 = ctx.r11.s64 + -3512;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CDF08;
	sub_827C8A78(ctx, base);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2924
	ctx.r7.s64 = ctx.r10.s64 + -2924;
loc_827CDF18:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_827CDF1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x827cdf40
	if (ctx.cr0.eq) goto loc_827CDF40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827cdf1c
	if (ctx.cr6.eq) goto loc_827CDF1C;
loc_827CDF40:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827cdf60
	if (ctx.cr0.eq) goto loc_827CDF60;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cdf18
	if (!ctx.cr6.eq) goto loc_827CDF18;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_827CDF60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827cdfa0
	if (!ctx.cr6.eq) goto loc_827CDFA0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cdfa0
	if (!ctx.cr6.lt) goto loc_827CDFA0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cdfa0
	if (ctx.cr6.eq) goto loc_827CDFA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827cdfa0
	if (!ctx.cr6.gt) goto loc_827CDFA0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-2896
	ctx.r5.s64 = ctx.r11.s64 + -2896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CDFA0;
	sub_827C85B8(ctx, base);
loc_827CDFA0:
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x827cdfbc
	if (!ctx.cr6.eq) goto loc_827CDFBC;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-4344
	ctx.r5.s64 = ctx.r11.s64 + -4344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CDFBC;
	sub_827C85B8(ctx, base);
loc_827CDFBC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-2948
	ctx.r11.s64 = ctx.r11.s64 + -2948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82a55c28
	ctx.lr = 0x827CDFD4;
	sub_82A55C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CDFE0;
	sub_82801D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CDFF0"))) PPC_WEAK_FUNC(sub_827CDFF0);
PPC_FUNC_IMPL(__imp__sub_827CDFF0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ce020
	if (!ctx.cr6.lt) goto loc_827CE020;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ce020
	if (ctx.cr6.eq) goto loc_827CE020;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827ce02c
	if (ctx.cr6.gt) goto loc_827CE02C;
loc_827CE020:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827ce034
	goto loc_827CE034;
loc_827CE02C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8b08
	ctx.lr = 0x827CE034;
	sub_827C8B08(ctx, base);
loc_827CE034:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a4f310
	ctx.lr = 0x827CE044;
	sub_82A4F310(ctx, base);
}

__attribute__((alias("__imp__sub_827CE048"))) PPC_WEAK_FUNC(sub_827CE048);
PPC_FUNC_IMPL(__imp__sub_827CE048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CE050;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r31,r11,-10784
	ctx.r31.s64 = ctx.r11.s64 + -10784;
	// addi r4,r10,-2880
	ctx.r4.s64 = ctx.r10.s64 + -2880;
	// addi r5,r31,72
	ctx.r5.s64 = ctx.r31.s64 + 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x827c8bf8
	ctx.lr = 0x827CE074;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-3412
	ctx.r4.s64 = ctx.r11.s64 + -3412;
	// bl 0x827c8830
	ctx.lr = 0x827CE084;
	sub_827C8830(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-6936
	ctx.r4.s64 = ctx.r11.s64 + -6936;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82801d10
	ctx.lr = 0x827CE098;
	sub_82801D10(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827CE0C4;
	sub_82802168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827c8bf8
	ctx.lr = 0x827CE0D8;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-2876
	ctx.r4.s64 = ctx.r11.s64 + -2876;
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x827c8bf8
	ctx.lr = 0x827CE110;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r31,r11,-3284
	ctx.r31.s64 = ctx.r11.s64 + -3284;
	// addi r29,r10,-2872
	ctx.r29.s64 = ctx.r10.s64 + -2872;
	// bl 0x82a52050
	ctx.lr = 0x827CE124;
	sub_82A52050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x827cc658
	ctx.lr = 0x827CE138;
	sub_827CC658(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r31,r11,-3340
	ctx.r31.s64 = ctx.r11.s64 + -3340;
	// addi r29,r10,-2864
	ctx.r29.s64 = ctx.r10.s64 + -2864;
	// bl 0x82a52050
	ctx.lr = 0x827CE14C;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x827cc658
	ctx.lr = 0x827CE160;
	sub_827CC658(ctx, base);
	// bl 0x82a52050
	ctx.lr = 0x827CE164;
	sub_82A52050(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-2856
	ctx.r4.s64 = ctx.r11.s64 + -2856;
	// bl 0x82801d78
	ctx.lr = 0x827CE178;
	sub_82801D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827cc5e8
	ctx.lr = 0x827CE180;
	sub_827CC5E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bl 0x82802118
	ctx.lr = 0x827CE194;
	sub_82802118(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CE1A0"))) PPC_WEAK_FUNC(sub_827CE1A0);
PPC_FUNC_IMPL(__imp__sub_827CE1A0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE1BC;
	sub_827C8B08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE1F8"))) PPC_WEAK_FUNC(sub_827CE1F8);
PPC_FUNC_IMPL(__imp__sub_827CE1F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE214;
	sub_827C8B08(ctx, base);
	// bl 0x82a4e038
	ctx.lr = 0x827CE218;
	sub_82A4E038(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE250"))) PPC_WEAK_FUNC(sub_827CE250);
PPC_FUNC_IMPL(__imp__sub_827CE250) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE26C;
	sub_827C8B08(ctx, base);
	// bl 0x82a4e118
	ctx.lr = 0x827CE270;
	sub_82A4E118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE2A8"))) PPC_WEAK_FUNC(sub_827CE2A8);
PPC_FUNC_IMPL(__imp__sub_827CE2A8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE2C4;
	sub_827C8B08(ctx, base);
	// bl 0x82a56108
	ctx.lr = 0x827CE2C8;
	sub_82A56108(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE300"))) PPC_WEAK_FUNC(sub_827CE300);
PPC_FUNC_IMPL(__imp__sub_827CE300) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE31C;
	sub_827C8B08(ctx, base);
	// bl 0x82a4d488
	ctx.lr = 0x827CE320;
	sub_82A4D488(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE358"))) PPC_WEAK_FUNC(sub_827CE358);
PPC_FUNC_IMPL(__imp__sub_827CE358) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE374;
	sub_827C8B08(ctx, base);
	// bl 0x82a4d550
	ctx.lr = 0x827CE378;
	sub_82A4D550(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE3B0"))) PPC_WEAK_FUNC(sub_827CE3B0);
PPC_FUNC_IMPL(__imp__sub_827CE3B0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE3CC;
	sub_827C8B08(ctx, base);
	// bl 0x82a4e590
	ctx.lr = 0x827CE3D0;
	sub_82A4E590(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE408"))) PPC_WEAK_FUNC(sub_827CE408);
PPC_FUNC_IMPL(__imp__sub_827CE408) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE428;
	sub_827C8B08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE438;
	sub_827C8B08(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a4e678
	ctx.lr = 0x827CE440;
	sub_82A4E678(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE480"))) PPC_WEAK_FUNC(sub_827CE480);
PPC_FUNC_IMPL(__imp__sub_827CE480) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE49C;
	sub_827C8B08(ctx, base);
	// bl 0x82a4cba0
	ctx.lr = 0x827CE4A0;
	sub_82A4CBA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE4D8"))) PPC_WEAK_FUNC(sub_827CE4D8);
PPC_FUNC_IMPL(__imp__sub_827CE4D8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE4F4;
	sub_827C8B08(ctx, base);
	// bl 0x82a4cf18
	ctx.lr = 0x827CE4F8;
	sub_82A4CF18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE530"))) PPC_WEAK_FUNC(sub_827CE530);
PPC_FUNC_IMPL(__imp__sub_827CE530) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE550;
	sub_827C8B08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE560;
	sub_827C8B08(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a561e0
	ctx.lr = 0x827CE568;
	sub_82A561E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE5A8"))) PPC_WEAK_FUNC(sub_827CE5A8);
PPC_FUNC_IMPL(__imp__sub_827CE5A8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE5C4;
	sub_827C8B08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// fsqrts f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE600"))) PPC_WEAK_FUNC(sub_827CE600);
PPC_FUNC_IMPL(__imp__sub_827CE600) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE620;
	sub_827C8B08(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE630;
	sub_827C8B08(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82a4db00
	ctx.lr = 0x827CE638;
	sub_82A4DB00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE678"))) PPC_WEAK_FUNC(sub_827CE678);
PPC_FUNC_IMPL(__imp__sub_827CE678) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE694;
	sub_827C8B08(ctx, base);
	// bl 0x82a55c68
	ctx.lr = 0x827CE698;
	sub_82A55C68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE6D0"))) PPC_WEAK_FUNC(sub_827CE6D0);
PPC_FUNC_IMPL(__imp__sub_827CE6D0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE6EC;
	sub_827C8B08(ctx, base);
	// bl 0x82a55df8
	ctx.lr = 0x827CE6F0;
	sub_82A55DF8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE728"))) PPC_WEAK_FUNC(sub_827CE728);
PPC_FUNC_IMPL(__imp__sub_827CE728) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE744;
	sub_827C8B08(ctx, base);
	// bl 0x82a55e28
	ctx.lr = 0x827CE748;
	sub_82A55E28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE780"))) PPC_WEAK_FUNC(sub_827CE780);
PPC_FUNC_IMPL(__imp__sub_827CE780) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE79C;
	sub_827C8B08(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,20680(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20680);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE7E0"))) PPC_WEAK_FUNC(sub_827CE7E0);
PPC_FUNC_IMPL(__imp__sub_827CE7E0) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE7FC;
	sub_827C8B08(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,20672(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20672);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE840"))) PPC_WEAK_FUNC(sub_827CE840);
PPC_FUNC_IMPL(__imp__sub_827CE840) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE85C;
	sub_827C8B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a55fe0
	ctx.lr = 0x827CE864;
	sub_82A55FE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwa r9,80(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827CE8C8"))) PPC_WEAK_FUNC(sub_827CE8C8);
PPC_FUNC_IMPL(__imp__sub_827CE8C8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE8E8;
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
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827c8b08
	ctx.lr = 0x827CE900;
	sub_827C8B08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4f8e0
	ctx.lr = 0x827CE908;
	sub_82A4F8E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CE948"))) PPC_WEAK_FUNC(sub_827CE948);
PPC_FUNC_IMPL(__imp__sub_827CE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CE950;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x827c8b08
	ctx.lr = 0x827CE974;
	sub_827C8B08(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x827ce9a8
	if (ctx.cr6.lt) goto loc_827CE9A8;
loc_827CE984:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CE990;
	sub_827C8B08(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x827ce99c
	if (!ctx.cr6.lt) goto loc_827CE99C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_827CE99C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x827ce984
	if (!ctx.cr6.gt) goto loc_827CE984;
loc_827CE9A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CE9D8"))) PPC_WEAK_FUNC(sub_827CE9D8);
PPC_FUNC_IMPL(__imp__sub_827CE9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CE9E0;
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// bl 0x827c8b08
	ctx.lr = 0x827CEA04;
	sub_827C8B08(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x827cea38
	if (ctx.cr6.lt) goto loc_827CEA38;
loc_827CEA14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CEA20;
	sub_827C8B08(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x827cea2c
	if (!ctx.cr6.gt) goto loc_827CEA2C;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
loc_827CEA2C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x827cea14
	if (!ctx.cr6.gt) goto loc_827CEA14;
loc_827CEA38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CEA68"))) PPC_WEAK_FUNC(sub_827CEA68);
PPC_FUNC_IMPL(__imp__sub_827CEA68) {
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
	// bl 0x82a4cd78
	ctx.lr = 0x827CEA88;
	sub_82A4CD78(ctx, base);
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// divw r10,r3,r10
	ctx.r10.s32 = ctx.r3.s32 / ctx.r10.s32;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulli r10,r10,32767
	ctx.r10.s64 = ctx.r10.s64 * 32767;
	// lfs f0,16344(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16344);
	ctx.f0.f64 = double(temp.f32);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// extsw r9,r8
	ctx.r9.s64 = ctx.r8.s32;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blt cr6,0x827cec10
	if (ctx.cr6.lt) goto loc_827CEC10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827ceb94
	if (ctx.cr6.eq) goto loc_827CEB94;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x827ceaec
	if (ctx.cr6.lt) goto loc_827CEAEC;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-2684
	ctx.r4.s64 = ctx.r11.s64 + -2684;
	// bl 0x827c87a8
	ctx.lr = 0x827CEAEC;
	sub_827C87A8(ctx, base);
loc_827CEAEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8b08
	ctx.lr = 0x827CEAF4;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,2
	ctx.r4.s64 = 2;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x827c8b08
	ctx.lr = 0x827CEB0C;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x827ceb34
	if (!ctx.cr6.gt) goto loc_827CEB34;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-2704
	ctx.r5.s64 = ctx.r11.s64 + -2704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CEB34;
	sub_827C85B8(ctx, base);
loc_827CEB34:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x827CEB58;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_827CEB84:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x827cec1c
	goto loc_827CEC1C;
loc_827CEB94:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8b08
	ctx.lr = 0x827CEB9C;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x827cebc4
	if (!ctx.cr6.lt) goto loc_827CEBC4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-2704
	ctx.r5.s64 = ctx.r11.s64 + -2704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CEBC4;
	sub_827C85B8(ctx, base);
loc_827CEBC4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x827CEBE0;
	sub_82A4CF18(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x827ceb84
	goto loc_827CEB84;
loc_827CEC10:
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827CEC1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827CEC48"))) PPC_WEAK_FUNC(sub_827CEC48);
PPC_FUNC_IMPL(__imp__sub_827CEC48) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x827c8b08
	ctx.lr = 0x827CEC5C;
	sub_827C8B08(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a4cd48
	ctx.lr = 0x827CEC6C;
	sub_82A4CD48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CEC80"))) PPC_WEAK_FUNC(sub_827CEC80);
PPC_FUNC_IMPL(__imp__sub_827CEC80) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-11080
	ctx.r5.s64 = ctx.r11.s64 + -11080;
	// addi r4,r10,-2656
	ctx.r4.s64 = ctx.r10.s64 + -2656;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8bf8
	ctx.lr = 0x827CECAC;
	sub_827C8BF8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2648
	ctx.r4.s64 = ctx.r11.s64 + -2648;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82801d10
	ctx.lr = 0x827CECC0;
	sub_82801D10(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,-3
	ctx.r4.s64 = -3;
	// lfs f0,20252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20252);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802118
	ctx.lr = 0x827CECF0;
	sub_82802118(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2644
	ctx.r4.s64 = ctx.r11.s64 + -2644;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82801d10
	ctx.lr = 0x827CED04;
	sub_82801D10(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-6656
	ctx.r4.s64 = ctx.r11.s64 + -6656;
	// bl 0x82801e40
	ctx.lr = 0x827CED18;
	sub_82801E40(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827CED24;
	sub_82802118(ctx, base);
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

__attribute__((alias("__imp__sub_827CED40"))) PPC_WEAK_FUNC(sub_827CED40);
PPC_FUNC_IMPL(__imp__sub_827CED40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827CED48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r4,r10,-26056
	ctx.r4.s64 = ctx.r10.s64 + -26056;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r28,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
	// bl 0x82801d78
	ctx.lr = 0x827CED6C;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827CED78;
	sub_82801F28(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x827cee3c
	if (ctx.cr6.lt) goto loc_827CEE3C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r27,r11,-25692
	ctx.r27.s64 = ctx.r11.s64 + -25692;
loc_827CED8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x82801738
	ctx.lr = 0x827CEDB8;
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
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82804670
	ctx.lr = 0x827CEDE8;
	sub_82804670(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827CEDF4;
	sub_82801BB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x827cee5c
	if (ctx.cr0.eq) goto loc_827CEE5C;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x827cee14
	if (!ctx.cr6.gt) goto loc_827CEE14;
	// bl 0x82a52050
	ctx.lr = 0x827CEE08;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52898
	ctx.lr = 0x827CEE14;
	sub_82A52898(ctx, base);
loc_827CEE14:
	// bl 0x82a52050
	ctx.lr = 0x827CEE18;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a52898
	ctx.lr = 0x827CEE24;
	sub_82A52898(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x827ced8c
	if (!ctx.cr6.gt) goto loc_827CED8C;
loc_827CEE3C:
	// bl 0x82a52050
	ctx.lr = 0x827CEE40;
	sub_82A52050(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r3,r11,15576
	ctx.r3.s64 = ctx.r11.s64 + 15576;
	// bl 0x82a52898
	ctx.lr = 0x827CEE50;
	sub_82A52898(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_827CEE5C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25736
	ctx.r4.s64 = ctx.r11.s64 + -25736;
	// bl 0x827c87a8
	ctx.lr = 0x827CEE6C;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CEE70"))) PPC_WEAK_FUNC(sub_827CEE70);
PPC_FUNC_IMPL(__imp__sub_827CEE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827CEE78;
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
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ceea8
	if (!ctx.cr6.lt) goto loc_827CEEA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ceea8
	if (ctx.cr6.eq) goto loc_827CEEA8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827ceeb4
	if (ctx.cr6.gt) goto loc_827CEEB4;
loc_827CEEA8:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827ceec0
	goto loc_827CEEC0;
loc_827CEEB4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CEEC0;
	sub_827C8B08(ctx, base);
loc_827CEEC0:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x827cef28
	if (!ctx.cr6.eq) goto loc_827CEF28;
	// bl 0x827c89d8
	ctx.lr = 0x827CEEE0;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a20
	ctx.lr = 0x827CEEEC;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cef74
	if (ctx.cr0.eq) goto loc_827CEF74;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CEF00;
	sub_82801B00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_827CEF0C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827CEF10:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_827CEF28:
	// bl 0x82801bb0
	ctx.lr = 0x827CEF2C;
	sub_82801BB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x827cef44
	if (!ctx.cr0.eq) goto loc_827CEF44;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CEF44;
	sub_827C8690(ctx, base);
loc_827CEF44:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x827cefd0
	if (ctx.cr6.lt) goto loc_827CEFD0;
	// cmpwi cr6,r29,36
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 36, ctx.xer);
	// bgt cr6,0x827cefd0
	if (ctx.cr6.gt) goto loc_827CEFD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a56678
	ctx.lr = 0x827CEF64;
	sub_82A56678(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827cef88
	if (!ctx.cr6.eq) goto loc_827CEF88;
loc_827CEF74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827cef0c
	goto loc_827CEF0C;
loc_827CEF80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_827CEF88:
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82a4e848
	ctx.lr = 0x827CEF90;
	sub_82A4E848(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cef80
	if (!ctx.cr0.eq) goto loc_827CEF80;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cef74
	if (!ctx.cr6.eq) goto loc_827CEF74;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x827cef10
	goto loc_827CEF10;
loc_827CEFD0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-2396
	ctx.r5.s64 = ctx.r11.s64 + -2396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CEFE4;
	sub_827C85B8(ctx, base);
}

__attribute__((alias("__imp__sub_827CEFE8"))) PPC_WEAK_FUNC(sub_827CEFE8);
PPC_FUNC_IMPL(__imp__sub_827CEFE8) {
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cf028
	if (!ctx.cr6.lt) goto loc_827CF028;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf028
	if (ctx.cr6.eq) goto loc_827CF028;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cf034
	if (ctx.cr6.gt) goto loc_827CF034;
loc_827CF028:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cf040
	goto loc_827CF040;
loc_827CF034:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CF040;
	sub_827C8B08(ctx, base);
loc_827CF040:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x827c89d8
	ctx.lr = 0x827CF058;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801a70
	ctx.lr = 0x827CF064;
	sub_82801A70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cf0b4
	if (ctx.cr0.eq) goto loc_827CF0B4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827cf0b4
	if (ctx.cr6.eq) goto loc_827CF0B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8720
	ctx.lr = 0x827CF080;
	sub_827C8720(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,2
	ctx.r4.s64 = 2;
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
	// bl 0x82802508
	ctx.lr = 0x827CF0B0;
	sub_82802508(ctx, base);
	// b 0x827cf0d8
	goto loc_827CF0D8;
loc_827CF0B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
loc_827CF0D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82803a18
	ctx.lr = 0x827CF0E0;
	sub_82803A18(ctx, base);
}

__attribute__((alias("__imp__sub_827CF0E0"))) PPC_WEAK_FUNC(sub_827CF0E0);
PPC_FUNC_IMPL(__imp__sub_827CF0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF0FC;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827CF108;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cf12c
	if (!ctx.cr0.eq) goto loc_827CF12C;
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
	// b 0x827cf150
	goto loc_827CF150;
loc_827CF12C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827CF138;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cf150
	if (ctx.cr0.eq) goto loc_827CF150;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2376
	ctx.r4.s64 = ctx.r11.s64 + -2376;
	// bl 0x827c8b88
	ctx.lr = 0x827CF150;
	sub_827C8B88(ctx, base);
loc_827CF150:
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

__attribute__((alias("__imp__sub_827CF168"))) PPC_WEAK_FUNC(sub_827CF168);
PPC_FUNC_IMPL(__imp__sub_827CF168) {
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
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827cf198
	if (!ctx.cr6.lt) goto loc_827CF198;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827cf1a0
	if (!ctx.cr6.eq) goto loc_827CF1A0;
loc_827CF198:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x827cf1a4
	goto loc_827CF1A4;
loc_827CF1A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827CF1A4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827cf1c0
	if (!ctx.cr6.lt) goto loc_827CF1C0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cf1c0
	if (ctx.cr6.eq) goto loc_827CF1C0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827cf1d0
	if (ctx.cr6.eq) goto loc_827CF1D0;
loc_827CF1C0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CF1D0;
	sub_827C8690(ctx, base);
loc_827CF1D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827cf1f4
	if (ctx.cr6.eq) goto loc_827CF1F4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cf1f4
	if (ctx.cr6.eq) goto loc_827CF1F4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r5,r11,-2364
	ctx.r5.s64 = ctx.r11.s64 + -2364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827CF1F4;
	sub_827C85B8(ctx, base);
loc_827CF1F4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827CF200;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cf248
	if (ctx.cr0.eq) goto loc_827CF248;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2376
	ctx.r4.s64 = ctx.r11.s64 + -2376;
	// bl 0x827c8b88
	ctx.lr = 0x827CF218;
	sub_827C8B88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cf248
	if (ctx.cr0.eq) goto loc_827CF248;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2340
	ctx.r4.s64 = ctx.r11.s64 + -2340;
	// bl 0x827c87a8
	ctx.lr = 0x827CF230;
	sub_827C87A8(ctx, base);
loc_827CF230:
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
loc_827CF248:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cf230
	if (ctx.cr6.lt) goto loc_827CF230;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802238
	ctx.lr = 0x827CF274;
	sub_82802238(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_827CF290"))) PPC_WEAK_FUNC(sub_827CF290);
PPC_FUNC_IMPL(__imp__sub_827CF290) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// bge cr6,0x827cf31c
	if (!ctx.cr6.lt) goto loc_827CF31C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf300
	if (ctx.cr6.eq) goto loc_827CF300;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827cf300
	if (!ctx.cr6.eq) goto loc_827CF300;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
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
loc_827CF2E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827CF300:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cf31c
	if (!ctx.cr6.lt) goto loc_827CF31C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf31c
	if (ctx.cr6.eq) goto loc_827CF31C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cf328
	if (ctx.cr6.gt) goto loc_827CF328;
loc_827CF31C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cf334
	goto loc_827CF334;
loc_827CF328:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CF334;
	sub_827C8B08(ctx, base);
loc_827CF334:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x827cf35c
	if (!ctx.cr6.lt) goto loc_827CF35C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-2304
	ctx.r5.s64 = ctx.r11.s64 + -2304;
	// bl 0x827c85b8
	ctx.lr = 0x827CF35C;
	sub_827C85B8(ctx, base);
loc_827CF35C:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82802c40
	ctx.lr = 0x827CF368;
	sub_82802C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827cf384
	if (!ctx.cr0.eq) goto loc_827CF384;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-2276
	ctx.r5.s64 = ctx.r11.s64 + -2276;
	// bl 0x827c85b8
	ctx.lr = 0x827CF384;
	sub_827C85B8(ctx, base);
loc_827CF384:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-2260
	ctx.r4.s64 = ctx.r11.s64 + -2260;
	// bl 0x828031d8
	ctx.lr = 0x827CF394;
	sub_828031D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827cf2e8
	if (ctx.cr0.eq) goto loc_827CF2E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827cf2e8
	if (!ctx.cr6.eq) goto loc_827CF2E8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-2256
	ctx.r4.s64 = ctx.r11.s64 + -2256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CF3C0;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CF3C0"))) PPC_WEAK_FUNC(sub_827CF3C0);
PPC_FUNC_IMPL(__imp__sub_827CF3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x827cf3f8
	if (!ctx.cr6.eq) goto loc_827CF3F8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x827cf3fc
	if (ctx.cr0.eq) goto loc_827CF3FC;
loc_827CF3F8:
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
loc_827CF3FC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,-32218
	ctx.r8.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r8,-2204
	ctx.r4.s64 = ctx.r8.s64 + -2204;
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
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801d10
	ctx.lr = 0x827CF42C;
	sub_82801D10(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CF438;
	sub_82801F80(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827cf44c
	if (!ctx.cr0.eq) goto loc_827CF44C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x827cf450
	goto loc_827CF450;
loc_827CF44C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827CF450:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF470"))) PPC_WEAK_FUNC(sub_827CF470);
PPC_FUNC_IMPL(__imp__sub_827CF470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x827cf290
	ctx.lr = 0x827CF488;
	sub_827CF290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cf3c0
	ctx.lr = 0x827CF490;
	sub_827CF3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cf4a4
	if (!ctx.cr0.eq) goto loc_827CF4A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CF4A4:
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

__attribute__((alias("__imp__sub_827CF4C0"))) PPC_WEAK_FUNC(sub_827CF4C0);
PPC_FUNC_IMPL(__imp__sub_827CF4C0) {
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
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cf4fc
	if (!ctx.cr6.lt) goto loc_827CF4FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf4fc
	if (ctx.cr6.eq) goto loc_827CF4FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cf50c
	if (ctx.cr6.eq) goto loc_827CF50C;
loc_827CF4FC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CF50C;
	sub_827C8690(ctx, base);
loc_827CF50C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cf290
	ctx.lr = 0x827CF514;
	sub_827CF290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827cf3c0
	ctx.lr = 0x827CF51C;
	sub_827CF3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827cf534
	if (ctx.cr0.eq) goto loc_827CF534;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-2196
	ctx.r4.s64 = ctx.r11.s64 + -2196;
	// bl 0x827c87a8
	ctx.lr = 0x827CF534;
	sub_827C87A8(ctx, base);
loc_827CF534:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801a20
	ctx.lr = 0x827CF568;
	sub_82801A20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cf5c4
	if (ctx.cr0.eq) goto loc_827CF5C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CF57C;
	sub_82801B00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x827cf5c4
	if (!ctx.cr6.eq) goto loc_827CF5C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CF5AC:
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
loc_827CF5C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,-16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x827cf604
	if (!ctx.cr6.eq) goto loc_827CF604;
	// lwz r10,-12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x827cf604
	if (!ctx.cr0.eq) goto loc_827CF604;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x827cf5ac
	goto loc_827CF5AC;
loc_827CF604:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2148
	ctx.r4.s64 = ctx.r11.s64 + -2148;
	// bl 0x827c87a8
	ctx.lr = 0x827CF614;
	sub_827C87A8(ctx, base);
}

__attribute__((alias("__imp__sub_827CF618"))) PPC_WEAK_FUNC(sub_827CF618);
PPC_FUNC_IMPL(__imp__sub_827CF618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF634;
	sub_827C89D8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF640;
	sub_827C89D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827cf658
	if (!ctx.cr6.lt) goto loc_827CF658;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_827CF658:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827cf668
	if (ctx.cr6.lt) goto loc_827CF668;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827CF668:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827cf684
	if (ctx.cr6.eq) goto loc_827CF684;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf684
	if (ctx.cr6.eq) goto loc_827CF684;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82807b30
	ctx.lr = 0x827CF680;
	sub_82807B30(ctx, base);
	// b 0x827cf688
	goto loc_827CF688;
loc_827CF684:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CF688:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF6C8"))) PPC_WEAK_FUNC(sub_827CF6C8);
PPC_FUNC_IMPL(__imp__sub_827CF6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827cf700
	if (!ctx.cr6.lt) goto loc_827CF700;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf700
	if (ctx.cr6.eq) goto loc_827CF700;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cf710
	if (ctx.cr6.eq) goto loc_827CF710;
loc_827CF700:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CF710;
	sub_827C8690(ctx, base);
loc_827CF710:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF71C;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CF728;
	sub_82801F80(ctx, base);
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

__attribute__((alias("__imp__sub_827CF740"))) PPC_WEAK_FUNC(sub_827CF740);
PPC_FUNC_IMPL(__imp__sub_827CF740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827cf778
	if (!ctx.cr6.lt) goto loc_827CF778;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf778
	if (ctx.cr6.eq) goto loc_827CF778;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cf788
	if (ctx.cr6.eq) goto loc_827CF788;
loc_827CF778:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CF788;
	sub_827C8690(ctx, base);
loc_827CF788:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF794;
	sub_827C89D8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF7A0;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802168
	ctx.lr = 0x827CF7AC;
	sub_82802168(ctx, base);
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

__attribute__((alias("__imp__sub_827CF7C8"))) PPC_WEAK_FUNC(sub_827CF7C8);
PPC_FUNC_IMPL(__imp__sub_827CF7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r11,22,10,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r8,r8,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF840"))) PPC_WEAK_FUNC(sub_827CF840);
PPC_FUNC_IMPL(__imp__sub_827CF840) {
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
	// bge cr6,0x827cf878
	if (!ctx.cr6.lt) goto loc_827CF878;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf878
	if (ctx.cr6.eq) goto loc_827CF878;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827cf884
	if (ctx.cr6.gt) goto loc_827CF884;
loc_827CF878:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// b 0x827cf890
	goto loc_827CF890;
loc_827CF884:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8b08
	ctx.lr = 0x827CF890;
	sub_827C8B08(ctx, base);
loc_827CF890:
	// lis r10,63
	ctx.r10.s64 = 4128768;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827cf8bc
	if (!ctx.cr6.gt) goto loc_827CF8BC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x827cf8c8
	goto loc_827CF8C8;
loc_827CF8BC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_827CF8C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cf8e4
	if (ctx.cr6.lt) goto loc_827CF8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82809030
	ctx.lr = 0x827CF8E4;
	sub_82809030(ctx, base);
loc_827CF8E4:
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

__attribute__((alias("__imp__sub_827CF900"))) PPC_WEAK_FUNC(sub_827CF900);
PPC_FUNC_IMPL(__imp__sub_827CF900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CF91C;
	sub_827C89D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cf940
	if (!ctx.cr6.lt) goto loc_827CF940;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf940
	if (ctx.cr6.eq) goto loc_827CF940;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x827cf94c
	if (!ctx.cr6.eq) goto loc_827CF94C;
loc_827CF940:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,17724
	ctx.r4.s64 = ctx.r11.s64 + 17724;
	// b 0x827cf95c
	goto loc_827CF95C;
loc_827CF94C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11500
	ctx.r10.s64 = ctx.r10.s64 + -11500;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_827CF95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827CF964;
	sub_82801D78(ctx, base);
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

__attribute__((alias("__imp__sub_827CF980"))) PPC_WEAK_FUNC(sub_827CF980);
PPC_FUNC_IMPL(__imp__sub_827CF980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827cf9bc
	if (!ctx.cr6.lt) goto loc_827CF9BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cf9bc
	if (ctx.cr6.eq) goto loc_827CF9BC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x827cf9cc
	if (ctx.cr6.eq) goto loc_827CF9CC;
loc_827CF9BC:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CF9CC;
	sub_827C8690(ctx, base);
loc_827CF9CC:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x827cf9f0
	goto loc_827CF9F0;
loc_827CF9D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
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
loc_827CF9F0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cf9d4
	if (ctx.cr6.lt) goto loc_827CF9D4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828024a8
	ctx.lr = 0x827CFA14;
	sub_828024A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827cfa24
	if (ctx.cr0.eq) goto loc_827CFA24;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x827cfa3c
	goto loc_827CFA3C;
loc_827CFA24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827CFA3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CFA58"))) PPC_WEAK_FUNC(sub_827CFA58);
PPC_FUNC_IMPL(__imp__sub_827CFA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827cfa90
	if (!ctx.cr6.lt) goto loc_827CFA90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cfa90
	if (ctx.cr6.eq) goto loc_827CFA90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cfaa0
	if (ctx.cr6.eq) goto loc_827CFAA0;
loc_827CFA90:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CFAA0;
	sub_827C8690(ctx, base);
loc_827CFAA0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-2092
	ctx.r4.s64 = ctx.r11.s64 + -2092;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CFAB4;
	sub_82801D10(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CFAC0;
	sub_82801F80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CFB10"))) PPC_WEAK_FUNC(sub_827CFB10);
PPC_FUNC_IMPL(__imp__sub_827CFB10) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801b00
	ctx.lr = 0x827CFB30;
	sub_82801B00(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cfb54
	if (!ctx.cr6.lt) goto loc_827CFB54;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cfb54
	if (ctx.cr6.eq) goto loc_827CFB54;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x827cfb64
	if (ctx.cr6.eq) goto loc_827CFB64;
loc_827CFB54:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CFB64;
	sub_827C8690(ctx, base);
loc_827CFB64:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x827cfbf8
	if (!ctx.cr6.eq) goto loc_827CFBF8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827cfb94
	if (!ctx.cr6.lt) goto loc_827CFB94;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827cfb94
	if (ctx.cr6.eq) goto loc_827CFB94;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x827cfbf8
	if (!ctx.cr6.eq) goto loc_827CFBF8;
loc_827CFB94:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,-2084
	ctx.r4.s64 = ctx.r11.s64 + -2084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827CFBA8;
	sub_82801D10(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827CFBB4;
	sub_82801F80(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x827cfc58
	goto loc_827CFC58;
loc_827CFBF8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82801fc8
	ctx.lr = 0x827CFC34;
	sub_82801FC8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827cfc48
	if (!ctx.cr0.eq) goto loc_827CFC48;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x827cfc4c
	goto loc_827CFC4C;
loc_827CFC48:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827CFC4C:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
loc_827CFC58:
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

__attribute__((alias("__imp__sub_827CFC70"))) PPC_WEAK_FUNC(sub_827CFC70);
PPC_FUNC_IMPL(__imp__sub_827CFC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a20
	ctx.lr = 0x827CFC94;
	sub_827C8A20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x827c8a78
	ctx.lr = 0x827CFCAC;
	sub_827C8A78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-27304
	ctx.r4.s64 = ctx.r10.s64 + -27304;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828023b0
	ctx.lr = 0x827CFCD0;
	sub_828023B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cfce0
	if (!ctx.cr0.eq) goto loc_827CFCE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827cfd08
	goto loc_827CFD08;
loc_827CFCE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x828019b8
	ctx.lr = 0x827CFD04;
	sub_828019B8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_827CFD08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CFD20"))) PPC_WEAK_FUNC(sub_827CFD20);
PPC_FUNC_IMPL(__imp__sub_827CFD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CFD44;
	sub_827C8A78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9388
	ctx.lr = 0x827CFD50;
	sub_827C9388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cfd60
	if (!ctx.cr0.eq) goto loc_827CFD60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827cfd88
	goto loc_827CFD88;
loc_827CFD60:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
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
	// bl 0x828019b8
	ctx.lr = 0x827CFD84;
	sub_828019B8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
loc_827CFD88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CFDA0"))) PPC_WEAK_FUNC(sub_827CFDA0);
PPC_FUNC_IMPL(__imp__sub_827CFDA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CFDC8;
	sub_827C8A78(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// bl 0x827c9388
	ctx.lr = 0x827CFDE4;
	sub_827C9388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827cfdf4
	if (ctx.cr0.eq) goto loc_827CFDF4;
	// bl 0x82803a18
	ctx.lr = 0x827CFDF4;
	sub_82803A18(ctx, base);
loc_827CFDF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82804670
	ctx.lr = 0x827CFE04;
	sub_82804670(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subf r3,r30,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CFE30"))) PPC_WEAK_FUNC(sub_827CFE30);
PPC_FUNC_IMPL(__imp__sub_827CFE30) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CFE4C;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827CFE58;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cfea4
	if (!ctx.cr0.eq) goto loc_827CFEA4;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2076
	ctx.r5.s64 = ctx.r11.s64 + -2076;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8a78
	ctx.lr = 0x827CFE78;
	sub_827C8A78(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21020
	ctx.r4.s64 = ctx.r11.s64 + 21020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CFE8C;
	sub_827C87A8(ctx, base);
loc_827CFE8C:
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
loc_827CFEA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827cfe8c
	if (ctx.cr6.lt) goto loc_827CFE8C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827CFEE0"))) PPC_WEAK_FUNC(sub_827CFEE0);
PPC_FUNC_IMPL(__imp__sub_827CFEE0) {
	PPC_FUNC_PROLOGUE();
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
	// bge cr6,0x827cff1c
	if (!ctx.cr6.lt) goto loc_827CFF1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cff1c
	if (ctx.cr6.eq) goto loc_827CFF1C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827cff2c
	if (ctx.cr6.eq) goto loc_827CFF2C;
loc_827CFF1C:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827CFF2C;
	sub_827C8690(ctx, base);
loc_827CFF2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8f90
	ctx.lr = 0x827CFF38;
	sub_827C8F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801850
	ctx.lr = 0x827CFF48;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827cff68
	if (!ctx.cr0.eq) goto loc_827CFF68;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-2056
	ctx.r5.s64 = ctx.r11.s64 + -2056;
	// addi r4,r10,-4600
	ctx.r4.s64 = ctx.r10.s64 + -4600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827CFF68;
	sub_827C87A8(ctx, base);
loc_827CFF68:
	// li r5,1
	ctx.r5.s64 = 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// blt cr6,0x827cff8c
	if (ctx.cr6.lt) goto loc_827CFF8C;
loc_827CFF74:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801fc8
	ctx.lr = 0x827CFF80;
	sub_82801FC8(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x827cff74
	if (!ctx.cr6.gt) goto loc_827CFF74;
loc_827CFF8C:
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

__attribute__((alias("__imp__sub_827CFFA8"))) PPC_WEAK_FUNC(sub_827CFFA8);
PPC_FUNC_IMPL(__imp__sub_827CFFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827CFFC4;
	sub_827C89D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x828022c8
	ctx.lr = 0x827CFFE8;
	sub_828022C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828019b8
	ctx.lr = 0x827D0018;
	sub_828019B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0040"))) PPC_WEAK_FUNC(sub_827D0040);
PPC_FUNC_IMPL(__imp__sub_827D0040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827D005C;
	sub_827C89D8(ctx, base);
	// b 0x827d0078
	goto loc_827D0078;
loc_827D0060:
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
loc_827D0078:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d0060
	if (ctx.cr6.lt) goto loc_827D0060;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828019b8
	ctx.lr = 0x827D00A4;
	sub_828019B8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828022c8
	ctx.lr = 0x827D00B8;
	sub_828022C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0120"))) PPC_WEAK_FUNC(sub_827D0120);
PPC_FUNC_IMPL(__imp__sub_827D0120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827c89d8
	ctx.lr = 0x827D013C;
	sub_827C89D8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827D0148;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d01ac
	if (ctx.cr0.eq) goto loc_827D01AC;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4720
	ctx.r4.s64 = ctx.r11.s64 + -4720;
	// bl 0x827c8b88
	ctx.lr = 0x827D0160;
	sub_827C8B88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d01ac
	if (ctx.cr0.eq) goto loc_827D01AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801738
	ctx.lr = 0x827D0174;
	sub_82801738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
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
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x82804670
	ctx.lr = 0x827D01A8;
	sub_82804670(ctx, base);
	// b 0x827d02d0
	goto loc_827D02D0;
loc_827D01AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d02c4
	if (!ctx.cr6.lt) goto loc_827D02C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d02c4
	if (ctx.cr6.eq) goto loc_827D02C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bgt cr6,0x827d02c4
	if (ctx.cr6.gt) goto loc_827D02C4;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-29696
	ctx.r12.s64 = ctx.r12.s64 + -29696;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32131
	ctx.r12.s64 = -2105737216;
	// addi r12,r12,504
	ctx.r12.s64 = ctx.r12.s64 + 504;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_827D03A0;
	case 1:
		goto loc_827D022C;
	case 2:
		goto loc_827D0350;
	case 3:
		goto loc_827D01F8;
	case 4:
		goto loc_827D020C;
	case 5:
		goto loc_827D0258;
	case 6:
		goto loc_827D02E8;
	case 7:
		goto loc_827D0350;
	case 8:
		goto loc_827D036C;
	default:
		__builtin_unreachable();
	}
loc_827D01F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D0204;
	sub_82801BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d02c8
	goto loc_827D02C8;
loc_827D020C:
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
	// b 0x827d02d0
	goto loc_827D02D0;
loc_827D022C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827D0238;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d024c
	if (ctx.cr0.eq) goto loc_827D024C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,26460
	ctx.r4.s64 = ctx.r11.s64 + 26460;
	// b 0x827d02c8
	goto loc_827D02C8;
loc_827D024C:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r11,24408
	ctx.r4.s64 = ctx.r11.s64 + 24408;
	// b 0x827d02c8
	goto loc_827D02C8;
loc_827D0258:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d0268
	if (!ctx.cr6.lt) goto loc_827D0268;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d0270
	if (!ctx.cr6.eq) goto loc_827D0270;
loc_827D0268:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827d02b4
	goto loc_827D02B4;
loc_827D0270:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827d02a4
	if (ctx.cr6.eq) goto loc_827D02A4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827d029c
	if (ctx.cr6.eq) goto loc_827D029C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x827d029c
	if (ctx.cr6.eq) goto loc_827D029C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x827d02a4
	if (ctx.cr6.eq) goto loc_827D02A4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x827d0268
	if (!ctx.cr6.eq) goto loc_827D0268;
loc_827D029C:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d02b4
	goto loc_827D02B4;
loc_827D02A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827D02B0;
	sub_82801CB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_827D02B4:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-2032
	ctx.r4.s64 = ctx.r11.s64 + -2032;
loc_827D02BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a4cf58
	ctx.lr = 0x827D02C4;
	sub_82A4CF58(ctx, base);
loc_827D02C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_827D02C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D02D0;
	sub_82801D78(ctx, base);
loc_827D02D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_827D02E8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d02f8
	if (!ctx.cr6.lt) goto loc_827D02F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d0300
	if (!ctx.cr6.eq) goto loc_827D0300;
loc_827D02F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x827d0344
	goto loc_827D0344;
loc_827D0300:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827d0334
	if (ctx.cr6.eq) goto loc_827D0334;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x827d032c
	if (ctx.cr6.eq) goto loc_827D032C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x827d032c
	if (ctx.cr6.eq) goto loc_827D032C;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x827d0334
	if (ctx.cr6.eq) goto loc_827D0334;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x827d02f8
	if (!ctx.cr6.eq) goto loc_827D02F8;
loc_827D032C:
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d0344
	goto loc_827D0344;
loc_827D0334:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827D0340;
	sub_82801CB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_827D0344:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-2020
	ctx.r4.s64 = ctx.r11.s64 + -2020;
	// b 0x827d02bc
	goto loc_827D02BC;
loc_827D0350:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801cb8
	ctx.lr = 0x827D035C;
	sub_82801CB8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-2004
	ctx.r4.s64 = ctx.r11.s64 + -2004;
	// b 0x827d02bc
	goto loc_827D02BC;
loc_827D036C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d0390
	if (!ctx.cr6.lt) goto loc_827D0390;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d0390
	if (ctx.cr6.eq) goto loc_827D0390;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x827d0390
	if (!ctx.cr6.eq) goto loc_827D0390;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d0394
	goto loc_827D0394;
loc_827D0390:
	// li r5,0
	ctx.r5.s64 = 0;
loc_827D0394:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r4,r11,-1988
	ctx.r4.s64 = ctx.r11.s64 + -1988;
	// b 0x827d02bc
	goto loc_827D02BC;
loc_827D03A0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-1976
	ctx.r4.s64 = ctx.r11.s64 + -1976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827D03B4;
	sub_82801D10(ctx, base);
	// b 0x827d02d0
	goto loc_827D02D0;
}

__attribute__((alias("__imp__sub_827D03B8"))) PPC_WEAK_FUNC(sub_827D03B8);
PPC_FUNC_IMPL(__imp__sub_827D03B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// b 0x827d03e8
	goto loc_827D03E8;
loc_827D03D0:
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
loc_827D03E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d03d0
	if (ctx.cr6.lt) goto loc_827D03D0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828025c0
	ctx.lr = 0x827D0414;
	sub_828025C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827D0420;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d0508
	if (ctx.cr0.eq) goto loc_827D0508;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d049c
	if (!ctx.cr6.lt) goto loc_827D049C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d049c
	if (ctx.cr6.eq) goto loc_827D049C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827d049c
	if (!ctx.cr6.eq) goto loc_827D049C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802018
	ctx.lr = 0x827D0454;
	sub_82802018(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827D0498;
	sub_82802168(ctx, base);
	// b 0x827d04fc
	goto loc_827D04FC;
loc_827D049C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827D04A8;
	sub_82802090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827d04dc
	if (ctx.cr0.eq) goto loc_827D04DC;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f80
	ctx.lr = 0x827D04BC;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827D04C8;
	sub_82801B58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x827d04f0
	if (!ctx.cr0.eq) goto loc_827D04F0;
loc_827D04DC:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1972
	ctx.r5.s64 = ctx.r11.s64 + -1972;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c85b8
	ctx.lr = 0x827D04F0;
	sub_827C85B8(ctx, base);
loc_827D04F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802090
	ctx.lr = 0x827D04FC;
	sub_82802090(ctx, base);
loc_827D04FC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802238
	ctx.lr = 0x827D0508;
	sub_82802238(ctx, base);
loc_827D0508:
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

__attribute__((alias("__imp__sub_827D0520"))) PPC_WEAK_FUNC(sub_827D0520);
PPC_FUNC_IMPL(__imp__sub_827D0520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x827D0528;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D0538;
	sub_82801BB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827d0550
	if (!ctx.cr0.eq) goto loc_827D0550;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c8690
	ctx.lr = 0x827D0550;
	sub_827C8690(ctx, base);
loc_827D0550:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x827d056c
	goto loc_827D056C;
loc_827D0558:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D056C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d0558
	if (ctx.cr6.lt) goto loc_827D0558;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-1888
	ctx.r4.s64 = ctx.r10.s64 + -1888;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801d78
	ctx.lr = 0x827D059C;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827D05A8;
	sub_82801F28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d05d0
	if (!ctx.cr6.lt) goto loc_827D05D0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d05d0
	if (ctx.cr6.eq) goto loc_827D05D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x827d05e0
	if (ctx.cr6.eq) goto loc_827D05E0;
loc_827D05D0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1880
	ctx.r4.s64 = ctx.r11.s64 + -1880;
	// bl 0x827c87a8
	ctx.lr = 0x827D05E0;
	sub_827C87A8(ctx, base);
loc_827D05E0:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,-1944
	ctx.r26.s64 = ctx.r11.s64 + -1944;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D05F4;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827D0600;
	sub_82801F28(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D060C;
	sub_82801BB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r24,r10,-1932
	ctx.r24.s64 = ctx.r10.s64 + -1932;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bne 0x827d0630
	if (!ctx.cr0.eq) goto loc_827D0630;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_827D0630:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82801f80
	ctx.lr = 0x827D065C;
	sub_82801F80(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b58
	ctx.lr = 0x827D0668;
	sub_82801B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d09d0
	if (!ctx.cr0.eq) goto loc_827D09D0;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x827d068c
	goto loc_827D068C;
loc_827D0678:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D068C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d0678
	if (ctx.cr6.lt) goto loc_827D0678;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d081c
	if (ctx.cr0.eq) goto loc_827D081C;
	// cmpwi cr6,r11,59
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 59, ctx.xer);
	// bne cr6,0x827d06c8
	if (!ctx.cr6.eq) goto loc_827D06C8;
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
loc_827D06C8:
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827D06D4;
	sub_82A4CA90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x827d0700
	if (!ctx.cr0.eq) goto loc_827D0700;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827D06E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d06e0
	if (!ctx.cr6.eq) goto loc_827D06E0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827D0700:
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d10
	ctx.lr = 0x827D0710;
	sub_82801D10(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d081c
	if (ctx.cr6.eq) goto loc_827D081C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D0728;
	sub_82801BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// b 0x827d0780
	goto loc_827D0780;
loc_827D0734:
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82801850
	ctx.lr = 0x827D073C;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x827d0808
	if (ctx.cr0.eq) goto loc_827D0808;
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d10
	ctx.lr = 0x827D0754;
	sub_82801D10(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
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
loc_827D0780:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ca90
	ctx.lr = 0x827D078C;
	sub_82A4CA90(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x827d0734
	if (!ctx.cr0.eq) goto loc_827D0734;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D07A0;
	sub_82801D78(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802508
	ctx.lr = 0x827D07AC;
	sub_82802508(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D07B8;
	sub_82801BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827c9388
	ctx.lr = 0x827D07C4;
	sub_827C9388(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827d068c
	if (ctx.cr6.eq) goto loc_827D068C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827d0880
	if (ctx.cr6.eq) goto loc_827D0880;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82801bb0
	ctx.lr = 0x827D07E0;
	sub_82801BB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D07F0;
	sub_82801BB0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1792
	ctx.r4.s64 = ctx.r11.s64 + -1792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827D0808;
	sub_827C87A8(ctx, base);
loc_827D0808:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// lis r10,-32218
	ctx.r10.s64 = -2111438848;
	// addi r5,r11,-1924
	ctx.r5.s64 = ctx.r11.s64 + -1924;
	// addi r4,r10,-4600
	ctx.r4.s64 = ctx.r10.s64 + -4600;
	// bl 0x827c87a8
	ctx.lr = 0x827D081C;
	sub_827C87A8(ctx, base);
loc_827D081C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D0828;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827D0834;
	sub_82801F28(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D0840;
	sub_82801BB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x827d085c
	if (!ctx.cr0.eq) goto loc_827D085C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_827D085C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801bb0
	ctx.lr = 0x827D0868;
	sub_82801BB0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1836
	ctx.r4.s64 = ctx.r11.s64 + -1836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x827c87a8
	ctx.lr = 0x827D0880;
	sub_827C87A8(ctx, base);
loc_827D0880:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// addi r30,r11,-1852
	ctx.r30.s64 = ctx.r11.s64 + -1852;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D0890;
	sub_82801D78(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801f28
	ctx.lr = 0x827D089C;
	sub_82801F28(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827D08A8;
	sub_828019B8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
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
	// bl 0x82801d78
	ctx.lr = 0x827D08D8;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827D08E4;
	sub_828019B8(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827D08F0;
	sub_82802118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x82804670
	ctx.lr = 0x827D0904;
	sub_82804670(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827D0910;
	sub_828019B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801d78
	ctx.lr = 0x827D091C;
	sub_82801D78(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828019b8
	ctx.lr = 0x827D0928;
	sub_828019B8(ctx, base);
	// li r4,-10001
	ctx.r4.s64 = -10001;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802118
	ctx.lr = 0x827D0934;
	sub_82802118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d0984
	if (ctx.cr0.eq) goto loc_827D0984;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d0984
	if (!ctx.cr6.eq) goto loc_827D0984;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_827D0984:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802168
	ctx.lr = 0x827D09D0;
	sub_82802168(ctx, base);
loc_827D09D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D09E0"))) PPC_WEAK_FUNC(sub_827D09E0);
PPC_FUNC_IMPL(__imp__sub_827D09E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827D09E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82801850
	ctx.lr = 0x827D0A04;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d0a1c
	if (!ctx.cr0.eq) goto loc_827D0A1C;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1760
	ctx.r4.s64 = ctx.r11.s64 + -1760;
	// bl 0x827c87a8
	ctx.lr = 0x827D0A1C;
	sub_827C87A8(ctx, base);
loc_827D0A1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x827d0a70
	if (!ctx.cr6.gt) goto loc_827D0A70;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D0A3C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bne 0x827d0a3c
	if (!ctx.cr0.eq) goto loc_827D0A3C;
loc_827D0A70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828048f8
	ctx.lr = 0x827D0A7C;
	sub_828048F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d0b14
	if (!ctx.cr0.eq) goto loc_827D0B14;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82801850
	ctx.lr = 0x827D0AA0;
	sub_82801850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827d0ab8
	if (!ctx.cr0.eq) goto loc_827D0AB8;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-1728
	ctx.r4.s64 = ctx.r11.s64 + -1728;
	// bl 0x827c87a8
	ctx.lr = 0x827D0AB8;
	sub_827C87A8(ctx, base);
loc_827D0AB8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// ble cr6,0x827d0b0c
	if (!ctx.cr6.gt) goto loc_827D0B0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D0AD8:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bne 0x827d0ad8
	if (!ctx.cr0.eq) goto loc_827D0AD8;
loc_827D0B0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x827d0b44
	goto loc_827D0B44;
loc_827D0B14:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
loc_827D0B44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D0B50"))) PPC_WEAK_FUNC(sub_827D0B50);
PPC_FUNC_IMPL(__imp__sub_827D0B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bge cr6,0x827d0b90
	if (!ctx.cr6.lt) goto loc_827D0B90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d0b90
	if (ctx.cr6.eq) goto loc_827D0B90;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x827d0b90
	if (!ctx.cr6.eq) goto loc_827D0B90;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d0b94
	goto loc_827D0B94;
loc_827D0B90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D0B94:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x827d0bb0
	if (!ctx.cr6.eq) goto loc_827D0BB0;
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-1700
	ctx.r5.s64 = ctx.r11.s64 + -1700;
	// bl 0x827c85b8
	ctx.lr = 0x827D0BB0;
	sub_827C85B8(ctx, base);
loc_827D0BB0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x827d09e0
	ctx.lr = 0x827D0BC0;
	sub_827D09E0(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x827d0bfc
	if (!ctx.cr0.lt) goto loc_827D0BFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828019b8
	ctx.lr = 0x827D0BF4;
	sub_828019B8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x827d0c24
	goto loc_827D0C24;
loc_827D0BFC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r4,r7,-1
	ctx.xer.ca = ctx.r7.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r7.s64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x828019b8
	ctx.lr = 0x827D0C20;
	sub_828019B8(ctx, base);
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
loc_827D0C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

