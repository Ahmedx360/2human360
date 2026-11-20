#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8270B438"))) PPC_WEAK_FUNC(sub_8270B438);
PPC_FUNC_IMPL(__imp__sub_8270B438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,26312
	ctx.r11.s64 = ctx.r11.s64 + 26312;
	// addi r10,r10,27352
	ctx.r10.s64 = ctx.r10.s64 + 27352;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x8270B474;
	sub_829C36C0(ctx, base);
	// lwz r3,1528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270b49c
	if (ctx.cr6.eq) goto loc_8270B49C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
loc_8270B49C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r10,r10,12036
	ctx.r10.s64 = ctx.r10.s64 + 12036;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x8270B4C8;
	sub_829BC9E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270B4E0"))) PPC_WEAK_FUNC(sub_8270B4E0);
PPC_FUNC_IMPL(__imp__sub_8270B4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270B4E8;
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
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8270b558
	if (ctx.cr6.eq) goto loc_8270B558;
	// lwz r10,1444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8270b558
	if (ctx.cr6.eq) goto loc_8270B558;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8270b558
	if (!ctx.cr6.eq) goto loc_8270B558;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b558
	if (!ctx.cr6.eq) goto loc_8270B558;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f390
	ctx.lr = 0x8270B550;
	sub_8242F390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_8270B558:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828adf18
	ctx.lr = 0x8270B56C;
	sub_828ADF18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B578"))) PPC_WEAK_FUNC(sub_8270B578);
PPC_FUNC_IMPL(__imp__sub_8270B578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270B580;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r4,-21
	ctx.r11.s64 = ctx.r4.s64 + -21;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// stw r4,1524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1524, ctx.r4.u32);
	// bgt cr6,0x8270b794
	if (ctx.cr6.gt) goto loc_8270B794;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30576
	ctx.r12.s64 = ctx.r12.s64 + -30576;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32143
	ctx.r12.s64 = -2106523648;
	// addi r12,r12,-18996
	ctx.r12.s64 = ctx.r12.s64 + -18996;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8270B5CC;
	case 1:
		goto loc_8270B5F0;
	case 2:
		goto loc_8270B608;
	case 3:
		goto loc_8270B620;
	case 4:
		goto loc_8270B638;
	case 5:
		goto loc_8270B794;
	case 6:
		goto loc_8270B794;
	case 7:
		goto loc_8270B6F8;
	case 8:
		goto loc_8270B6E0;
	case 9:
		goto loc_8270B6C8;
	case 10:
		goto loc_8270B650;
	case 11:
		goto loc_8270B724;
	case 12:
		goto loc_8270B750;
	default:
		__builtin_unreachable();
	}
loc_8270B5CC:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B5D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f5888
	ctx.lr = 0x8270B5E0;
	sub_823F5888(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B5E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270B5E8:
	// stw r3,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r3.u32);
	// b 0x8270b794
	goto loc_8270B794;
loc_8270B5F0:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B5F8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f5ef0
	ctx.lr = 0x8270B604;
	sub_823F5EF0(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B608:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B610;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f5528
	ctx.lr = 0x8270B61C;
	sub_823F5528(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B620:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B628;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f51c8
	ctx.lr = 0x8270B634;
	sub_823F51C8(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B638:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B640;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f4ee0
	ctx.lr = 0x8270B64C;
	sub_823F4EE0(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B650:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B658;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270b78c
	if (ctx.cr0.eq) goto loc_8270B78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1190
	ctx.lr = 0x8270B668;
	sub_823F1190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r7,31
	ctx.r7.s64 = 31;
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// lfs f0,19304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19304);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r8,-25800
	ctx.r11.s64 = ctx.r8.s64 + -25800;
	// lfs f13,19300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19300);
	ctx.f13.f64 = double(temp.f32);
	// li r8,44
	ctx.r8.s64 = 44;
	// lfs f0,19296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19296);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// b 0x8270b790
	goto loc_8270B790;
loc_8270B6C8:
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82833108
	ctx.lr = 0x8270B6D0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f4b40
	ctx.lr = 0x8270B6DC;
	sub_823F4B40(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B6E0:
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82833108
	ctx.lr = 0x8270B6E8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270b5e4
	if (ctx.cr0.eq) goto loc_8270B5E4;
	// bl 0x823f1d88
	ctx.lr = 0x8270B6F4;
	sub_823F1D88(ctx, base);
	// b 0x8270b5e8
	goto loc_8270B5E8;
loc_8270B6F8:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B700;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270b78c
	if (ctx.cr0.eq) goto loc_8270B78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1190
	ctx.lr = 0x8270B710;
	sub_823F1190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,28
	ctx.r10.s64 = 28;
	// addi r11,r11,-26112
	ctx.r11.s64 = ctx.r11.s64 + -26112;
	// li r9,38
	ctx.r9.s64 = 38;
	// b 0x8270b778
	goto loc_8270B778;
loc_8270B724:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B72C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270b78c
	if (ctx.cr0.eq) goto loc_8270B78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1190
	ctx.lr = 0x8270B73C;
	sub_823F1190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-26632
	ctx.r11.s64 = ctx.r11.s64 + -26632;
	// li r9,18
	ctx.r9.s64 = 18;
	// b 0x8270b778
	goto loc_8270B778;
loc_8270B750:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270B758;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270b78c
	if (ctx.cr0.eq) goto loc_8270B78C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1190
	ctx.lr = 0x8270B768;
	sub_823F1190(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,-26944
	ctx.r11.s64 = ctx.r11.s64 + -26944;
	// li r9,10
	ctx.r9.s64 = 10;
loc_8270B778:
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// b 0x8270b790
	goto loc_8270B790;
loc_8270B78C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8270B790:
	// stw r11,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r11.u32);
loc_8270B794:
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b7b8
	if (ctx.cr6.eq) goto loc_8270B7B8;
	// stfs f31,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// stw r29,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r29.u32);
loc_8270B7B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B7C8"))) PPC_WEAK_FUNC(sub_8270B7C8);
PPC_FUNC_IMPL(__imp__sub_8270B7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1440);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r4.u32);
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270B7E0"))) PPC_WEAK_FUNC(sub_8270B7E0);
PPC_FUNC_IMPL(__imp__sub_8270B7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828ae598
	ctx.lr = 0x8270B7F8;
	sub_828AE598(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// bl 0x8242f390
	ctx.lr = 0x8270B810;
	sub_8242F390(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270B828"))) PPC_WEAK_FUNC(sub_8270B828);
PPC_FUNC_IMPL(__imp__sub_8270B828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8270b894
	if (ctx.cr0.eq) goto loc_8270B894;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8270b894
	if (!ctx.cr6.eq) goto loc_8270B894;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b894
	if (!ctx.cr6.eq) goto loc_8270B894;
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270b894
	if (!ctx.cr6.eq) goto loc_8270B894;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f390
	ctx.lr = 0x8270B88C;
	sub_8242F390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_8270B894:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270B8A8"))) PPC_WEAK_FUNC(sub_8270B8A8);
PPC_FUNC_IMPL(__imp__sub_8270B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270b8d4
	if (ctx.cr6.eq) goto loc_8270B8D4;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8270B8D4:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270b8f8
	if (!ctx.cr0.eq) goto loc_8270B8F8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f390
	ctx.lr = 0x8270B8F0;
	sub_8242F390(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_8270B8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270B910"))) PPC_WEAK_FUNC(sub_8270B910);
PPC_FUNC_IMPL(__imp__sub_8270B910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8270B918;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,1528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270b948
	if (ctx.cr6.eq) goto loc_8270B948;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271d1c8
	ctx.lr = 0x8270B948;
	sub_8271D1C8(ctx, base);
loc_8270B948:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8270B968;
	sub_8281D960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8270b9b8
	if (ctx.cr6.eq) goto loc_8270B9B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8270B9A8;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1532(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1532);
	// bl 0x829c3740
	ctx.lr = 0x8270B9B8;
	sub_829C3740(ctx, base);
loc_8270B9B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B9C8"))) PPC_WEAK_FUNC(sub_8270B9C8);
PPC_FUNC_IMPL(__imp__sub_8270B9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270B9D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270ba00
	if (ctx.cr6.eq) goto loc_8270BA00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8270ba04
	goto loc_8270BA04;
loc_8270BA00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270BA04:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270ba28
	if (ctx.cr6.eq) goto loc_8270BA28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1820);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270BA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270BA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270BA30"))) PPC_WEAK_FUNC(sub_8270BA30);
PPC_FUNC_IMPL(__imp__sub_8270BA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270BA38;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwa r11,1448(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1448));
	// lfs f0,1512(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r10,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r10.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,1448
	ctx.r12.s64 = 1448;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// bl 0x828ae3f0
	ctx.lr = 0x8270BA7C;
	sub_828AE3F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270BA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270baa4
	if (!ctx.cr6.eq) goto loc_8270BAA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x8270BAA4;
	sub_829C3628(ctx, base);
loc_8270BAA4:
	// lwz r5,1444(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8270bb10
	if (ctx.cr6.eq) goto loc_8270BB10;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270bb10
	if (ctx.cr6.eq) goto loc_8270BB10;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x8270BAC8;
	sub_82978BC0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-28874
	ctx.r4.s64 = -1892286464;
	// lfs f12,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// ori r4,r4,34311
	ctx.r4.u64 = ctx.r4.u64 | 34311;
	// lfs f0,18380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82979140
	ctx.lr = 0x8270BB10;
	sub_82979140(ctx, base);
loc_8270BB10:
	// lfs f30,1508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-25264
	ctx.r4.s64 = ctx.r11.s64 + -25264;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x829c80b8
	ctx.lr = 0x8270BB34;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8270bbcc
	if (!ctx.cr0.eq) goto loc_8270BBCC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8270bb54
	if (!ctx.cr6.eq) goto loc_8270BB54;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8270BB54:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823f61b8
	ctx.lr = 0x8270BB5C;
	sub_823F61B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270BB70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8270BB7C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270bbb8
	if (ctx.cr0.eq) goto loc_8270BBB8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x8270bbbc
	goto loc_8270BBBC;
loc_8270BBB8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8270BBBC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8270BBC8;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8270BBCC:
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
	ctx.lr = 0x8270BBE8;
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

__attribute__((alias("__imp__sub_8270BBF8"))) PPC_WEAK_FUNC(sub_8270BBF8);
PPC_FUNC_IMPL(__imp__sub_8270BBF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8270BC00;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270bc30
	if (ctx.cr6.eq) goto loc_8270BC30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270bc30
	if (ctx.cr6.eq) goto loc_8270BC30;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270bd60
	if (!ctx.cr6.eq) goto loc_8270BD60;
loc_8270BC30:
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// li r30,256
	ctx.r30.s64 = 256;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270bc44
	if (ctx.cr6.eq) goto loc_8270BC44;
	// li r30,258
	ctx.r30.s64 = 258;
loc_8270BC44:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r29,1460(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lwz r28,1516(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r27,r7,16512
	ctx.r27.u64 = ctx.r7.u64 | 16512;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270BCAC;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r29,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82708268
	ctx.lr = 0x8270BCE4;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270bd10
	if (ctx.cr6.eq) goto loc_8270BD10;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270BD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270bd14
	goto loc_8270BD14;
loc_8270BD10:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270BD14:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r29,1484(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// ld r28,1472(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r30,1480(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82331120
	ctx.lr = 0x8270BD60;
	sub_82331120(ctx, base);
loc_8270BD60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270BD70"))) PPC_WEAK_FUNC(sub_8270BD70);
PPC_FUNC_IMPL(__imp__sub_8270BD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x8270BD78;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1504(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270bed0
	if (ctx.cr6.eq) goto loc_8270BED0;
	// lwz r11,1492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270bed0
	if (ctx.cr6.eq) goto loc_8270BED0;
	// lfs f0,1500(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1500);
	ctx.f0.f64 = double(temp.f32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,1460(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,1504(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1504, ctx.r26.u32);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fadds f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ble cr6,0x8270bed0
	if (!ctx.cr6.gt) goto loc_8270BED0;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r25,r10,12904
	ctx.r25.s64 = ctx.r10.s64 + 12904;
loc_8270BDE4:
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// lwzx r29,r10,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8270bebc
	if (ctx.cr6.eq) goto loc_8270BEBC;
	// lfs f13,624(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r28,620
	ctx.r30.s64 = ctx.r28.s64 + 620;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82895f78
	ctx.lr = 0x8270BE34;
	sub_82895F78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270be44
	if (ctx.cr0.eq) goto loc_8270BE44;
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_8270BE44:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8270beb8
	if (!ctx.cr6.lt) goto loc_8270BEB8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x8270BE54;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270bea8
	if (ctx.cr0.eq) goto loc_8270BEA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r21,0(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r20,4(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r22,80(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82833180
	ctx.lr = 0x8270BE78;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r21,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
	// stw r20,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r20.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x8270beac
	goto loc_8270BEAC;
loc_8270BEA8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8270BEAC:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8270BEB8;
	sub_82833A30(ctx, base);
loc_8270BEB8:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
loc_8270BEBC:
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8270bde4
	if (ctx.cr6.lt) goto loc_8270BDE4;
loc_8270BED0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270BEE0"))) PPC_WEAK_FUNC(sub_8270BEE0);
PPC_FUNC_IMPL(__imp__sub_8270BEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8270bf30
	ctx.lr = 0x8270BF00;
	sub_8270BF30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270bf14
	if (ctx.cr6.eq) goto loc_8270BF14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8270BF14;
	sub_82333B08(ctx, base);
loc_8270BF14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270BF30"))) PPC_WEAK_FUNC(sub_8270BF30);
PPC_FUNC_IMPL(__imp__sub_8270BF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23600
	ctx.r31.s64 = ctx.r11.s64 + 23600;
	// lwz r11,-19424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8270bf78
	if (!ctx.cr0.eq) goto loc_8270BF78;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,12984
	ctx.r9.s64 = ctx.r9.s64 + 12984;
	// stw r11,-19424(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19424, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30072
	ctx.r3.s64 = ctx.r11.s64 + 30072;
	// bl 0x82a4c758
	ctx.lr = 0x8270BF78;
	sub_82A4C758(ctx, base);
loc_8270BF78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270BF90"))) PPC_WEAK_FUNC(sub_8270BF90);
PPC_FUNC_IMPL(__imp__sub_8270BF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23596(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23596);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8270bfd0
	if (!ctx.cr0.eq) goto loc_8270BFD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,23596(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23596, ctx.r11.u32);
	// addi r3,r9,12856
	ctx.r3.s64 = ctx.r9.s64 + 12856;
	// bl 0x82816528
	ctx.lr = 0x8270BFC8;
	sub_82816528(ctx, base);
	// stw r3,23592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23592, ctx.r3.u32);
	// b 0x8270bfd4
	goto loc_8270BFD4;
loc_8270BFD0:
	// lwz r3,23592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23592);
loc_8270BFD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270BFE8"))) PPC_WEAK_FUNC(sub_8270BFE8);
PPC_FUNC_IMPL(__imp__sub_8270BFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8270bf30
	ctx.lr = 0x8270C008;
	sub_8270BF30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270C01C;
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

__attribute__((alias("__imp__sub_8270C038"))) PPC_WEAK_FUNC(sub_8270C038);
PPC_FUNC_IMPL(__imp__sub_8270C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270c070
	if (ctx.cr6.eq) goto loc_8270C070;
	// bl 0x8270bf30
	ctx.lr = 0x8270C060;
	sub_8270BF30(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270c070
	if (!ctx.cr6.eq) goto loc_8270C070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270c07c
	goto loc_8270C07C;
loc_8270C070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8270C07C;
	sub_82333C70(ctx, base);
loc_8270C07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C098"))) PPC_WEAK_FUNC(sub_8270C098);
PPC_FUNC_IMPL(__imp__sub_8270C098) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270bf30
	sub_8270BF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270C0A0"))) PPC_WEAK_FUNC(sub_8270C0A0);
PPC_FUNC_IMPL(__imp__sub_8270C0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x8270C0BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270c12c
	if (ctx.cr0.eq) goto loc_8270C12C;
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
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,12904
	ctx.r9.s64 = ctx.r9.s64 + 12904;
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
	// b 0x8270c130
	goto loc_8270C130;
loc_8270C12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270C130:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C148"))) PPC_WEAK_FUNC(sub_8270C148);
PPC_FUNC_IMPL(__imp__sub_8270C148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,12856
	ctx.r3.s64 = ctx.r11.s64 + 12856;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C158"))) PPC_WEAK_FUNC(sub_8270C158);
PPC_FUNC_IMPL(__imp__sub_8270C158) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17132
	ctx.r3.s64 = ctx.r11.s64 + -17132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C168"))) PPC_WEAK_FUNC(sub_8270C168);
PPC_FUNC_IMPL(__imp__sub_8270C168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270c1a0
	if (ctx.cr6.eq) goto loc_8270C1A0;
	// bl 0x823aea40
	ctx.lr = 0x8270C190;
	sub_823AEA40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270c1a0
	if (!ctx.cr6.eq) goto loc_8270C1A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270c1ac
	goto loc_8270C1AC;
loc_8270C1A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270C1AC;
	sub_824001E8(ctx, base);
loc_8270C1AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C1C8"))) PPC_WEAK_FUNC(sub_8270C1C8);
PPC_FUNC_IMPL(__imp__sub_8270C1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aea40
	sub_823AEA40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270C1D0"))) PPC_WEAK_FUNC(sub_8270C1D0);
PPC_FUNC_IMPL(__imp__sub_8270C1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1632
	ctx.r3.s64 = 1632;
	// bl 0x82833108
	ctx.lr = 0x8270C1EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270c200
	if (ctx.cr0.eq) goto loc_8270C200;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270c268
	ctx.lr = 0x8270C1FC;
	sub_8270C268(ctx, base);
	// b 0x8270c204
	goto loc_8270C204;
loc_8270C200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270C204:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C218"))) PPC_WEAK_FUNC(sub_8270C218);
PPC_FUNC_IMPL(__imp__sub_8270C218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823aea40
	ctx.lr = 0x8270C238;
	sub_823AEA40(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270c24c
	if (ctx.cr6.eq) goto loc_8270C24C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270C24C;
	sub_82400188(ctx, base);
loc_8270C24C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C268"))) PPC_WEAK_FUNC(sub_8270C268);
PPC_FUNC_IMPL(__imp__sub_8270C268) {
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
	// bl 0x823fffc8
	ctx.lr = 0x8270C288;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,13024
	ctx.r11.s64 = ctx.r11.s64 + 13024;
	// addi r10,r10,14068
	ctx.r10.s64 = ctx.r10.s64 + 14068;
	// addi r9,r9,14120
	ctx.r9.s64 = ctx.r9.s64 + 14120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1556
	ctx.r3.s64 = ctx.r31.s64 + 1556;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1556
	ctx.r4.s64 = ctx.r30.s64 + 1556;
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8270C2C0;
	sub_82873B58(ctx, base);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lfs f0,1604(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lfs f0,1608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// lfs f0,1612(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
	// lfs f0,1616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270C340"))) PPC_WEAK_FUNC(sub_8270C340);
PPC_FUNC_IMPL(__imp__sub_8270C340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,1556
	ctx.r3.s64 = ctx.r31.s64 + 1556;
	// bl 0x8239d768
	ctx.lr = 0x8270C364;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270b438
	ctx.lr = 0x8270C36C;
	sub_8270B438(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8270c37c
	if (ctx.cr0.eq) goto loc_8270C37C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8270C37C;
	sub_82332DB8(ctx, base);
loc_8270C37C:
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

__attribute__((alias("__imp__sub_8270C398"))) PPC_WEAK_FUNC(sub_8270C398);
PPC_FUNC_IMPL(__imp__sub_8270C398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270C3A0;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270ba30
	ctx.lr = 0x8270C3B4;
	sub_8270BA30(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// bl 0x82438430
	ctx.lr = 0x8270C3C0;
	sub_82438430(ctx, base);
	// lwz r10,2536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2536);
	// lfs f30,1604(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r11,-13736
	ctx.r4.s64 = ctx.r11.s64 + -13736;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r10,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c80b8
	ctx.lr = 0x8270C3EC;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8270c484
	if (!ctx.cr0.eq) goto loc_8270C484;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8270c40c
	if (!ctx.cr6.eq) goto loc_8270C40C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8270C40C:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823aea40
	ctx.lr = 0x8270C414;
	sub_823AEA40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270C428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8270C434;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270c470
	if (ctx.cr0.eq) goto loc_8270C470;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x8270c474
	goto loc_8270C474;
loc_8270C470:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8270C474:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8270C480;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8270C484:
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
	ctx.lr = 0x8270C4A0;
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

__attribute__((alias("__imp__sub_8270C4B0"))) PPC_WEAK_FUNC(sub_8270C4B0);
PPC_FUNC_IMPL(__imp__sub_8270C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270C4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,18
	ctx.r7.s64 = 1179648;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,13004
	ctx.r3.s64 = ctx.r8.s64 + 13004;
	// lfs f13,18368(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18368);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// ori r29,r7,1544
	ctx.r29.u64 = ctx.r7.u64 | 1544;
	// lwz r30,1624(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270C514;
	sub_82816528(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x8270C550;
	sub_82708268(ctx, base);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270C560"))) PPC_WEAK_FUNC(sub_8270C560);
PPC_FUNC_IMPL(__imp__sub_8270C560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8270C568;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x8270C5A0;
	sub_824090E0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stfs f30,1604(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stw r28,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r28.u32);
	// stfs f31,1612(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
	// stw r29,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r29.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r27.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// lfs f0,23784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23784);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r10.u32);
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// beq 0x8270c630
	if (ctx.cr0.eq) goto loc_8270C630;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f0,7004(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lfs f0,6708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6708);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lfs f0,7596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f31.f64));
	// stfs f0,1612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
loc_8270C630:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8270c658
	if (ctx.cr6.eq) goto loc_8270C658;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,1588
	ctx.r4.s64 = ctx.r31.s64 + 1588;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270C658;
	sub_823CF190(ctx, base);
loc_8270C658:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8270C670"))) PPC_WEAK_FUNC(sub_8270C670);
PPC_FUNC_IMPL(__imp__sub_8270C670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x8270C678;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a61740
	ctx.lr = 0x8270C680;
	__savefpr_26(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r31.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r9,660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// lwz r8,664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// addi r26,r30,620
	ctx.r26.s64 = ctx.r30.s64 + 620;
	// stw r31,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r31.u32);
	// lfs f27,908(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f27.f64 = double(temp.f32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r31.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// stfs f31,328(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r31,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r31.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stfs f31,344(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r31,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r31.u32);
	// stfs f31,400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stfs f31,404(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// stfs f31,408(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// stfs f31,412(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// lwz r28,1552(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stfs f31,416(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// stfs f27,320(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82817bb8
	ctx.lr = 0x8270C734;
	sub_82817BB8(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// ld r9,320(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r27,328(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// li r24,100
	ctx.r24.s64 = 100;
	// ld r25,336(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 336);
	// lfs f1,1612(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	ctx.f1.f64 = double(temp.f32);
	// lwz r23,344(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f4,20252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20252);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,424(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r19,8(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r20,r1,448
	ctx.r20.s64 = ctx.r1.s64 + 448;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// ld r22,620(r30)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r21,628(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r29,1016(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1016);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// ld r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// ld r6,408(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// ld r7,416(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// stb r31,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r31.u8);
	// std r9,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r9.u64);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// std r25,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r25.u64);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r23.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stb r11,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r11.u8);
	// stb r31,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r31.u8);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r31.u8);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// std r22,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r22.u64);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r19,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8270C7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270ca34
	if (!ctx.cr6.gt) goto loc_8270CA34;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lfs f26,16668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f26.f64 = double(temp.f32);
loc_8270C818:
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x8281d960
	ctx.lr = 0x8270C824;
	sub_8281D960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lfs f13,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// addi r28,r29,620
	ctx.r28.s64 = ctx.r29.s64 + 620;
	// lfs f11,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f13,344(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stfs f12,336(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r10,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r10.u32);
	// stw r9,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r9.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f27
	ctx.cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// bne cr6,0x8270c8b0
	if (!ctx.cr6.eq) goto loc_8270C8B0;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// lfs f30,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// lfs f29,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f29.f64 = double(temp.f32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// lfs f28,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f28.f64 = double(temp.f32);
	// b 0x8270c8dc
	goto loc_8270C8DC;
loc_8270C8B0:
	// fcmpu cr6,f11,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f26.f64);
	// bge cr6,0x8270c8c8
	if (!ctx.cr6.lt) goto loc_8270C8C8;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// b 0x8270c8dc
	goto loc_8270C8DC;
loc_8270C8C8:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f27,f11
	ctx.f11.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f29,f0,f11
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f28,f13,f11
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_8270C8DC:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82817bb8
	ctx.lr = 0x8270C8E8;
	sub_82817BB8(ctx, base);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,1608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f28,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// fmadds f30,f12,f30,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f0.f64));
	// bl 0x82a4e118
	ctx.lr = 0x8270C908;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x8270ca20
	if (ctx.cr6.lt) goto loc_8270CA20;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8270c924
	if (ctx.cr6.eq) goto loc_8270C924;
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8270c928
	goto loc_8270C928;
loc_8270C924:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8270C928:
	// lwz r9,1572(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// addi r27,r30,1556
	ctx.r27.s64 = ctx.r30.s64 + 1556;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8270c95c
	if (!ctx.cr6.gt) goto loc_8270C95C;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_8270C940:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8270c960
	if (ctx.cr6.eq) goto loc_8270C960;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8270c940
	if (ctx.cr6.lt) goto loc_8270C940;
loc_8270C95C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8270C960:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8270ca20
	if (!ctx.cr6.eq) goto loc_8270CA20;
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r10,1440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r3,r10,104
	ctx.r3.s64 = ctx.r10.s64 + 104;
	// lwzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// stw r10,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r10.u32);
	// stw r9,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r9.u32);
	// bl 0x824cac78
	ctx.lr = 0x8270C998;
	sub_824CAC78(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8270c9a8
	if (ctx.cr6.eq) goto loc_8270C9A8;
	// lwz r8,80(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8270c9ac
	goto loc_8270C9AC;
loc_8270C9A8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8270C9AC:
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8270c9e0
	if (!ctx.cr6.gt) goto loc_8270C9E0;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
loc_8270C9C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8270c9ec
	if (ctx.cr6.eq) goto loc_8270C9EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8270c9c4
	if (ctx.cr6.lt) goto loc_8270C9C4;
loc_8270C9E0:
	// addi r4,r1,364
	ctx.r4.s64 = ctx.r1.s64 + 364;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x8270C9EC;
	sub_82410060(ctx, base);
loc_8270C9EC:
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r31.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r31.u32);
	// ld r9,472(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// lwz r5,1588(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8270CA20;
	sub_8282B1E0(ctx, base);
loc_8270CA20:
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8270c818
	if (ctx.cr6.lt) goto loc_8270C818;
loc_8270CA34:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82400f38
	ctx.lr = 0x8270CA3C;
	sub_82400F38(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400f38
	ctx.lr = 0x8270CA44;
	sub_82400F38(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82a6178c
	ctx.lr = 0x8270CA50;
	__restfpr_26(ctx, base);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CA58"))) PPC_WEAK_FUNC(sub_8270CA58);
PPC_FUNC_IMPL(__imp__sub_8270CA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8270CA60;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r31,1620(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1620);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270cba4
	if (ctx.cr6.eq) goto loc_8270CBA4;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
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
	ctx.lr = 0x8270CAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270cabc
	if (!ctx.cr6.gt) goto loc_8270CABC;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x8270cb90
	goto loc_8270CB90;
loc_8270CABC:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270cb5c
	if (!ctx.cr6.eq) goto loc_8270CB5C;
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
	ctx.lr = 0x8270CAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270cb3c
	if (!ctx.cr6.gt) goto loc_8270CB3C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8270CAF8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8270cb28
	if (!ctx.cr6.eq) goto loc_8270CB28;
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
	ctx.lr = 0x8270CB20;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8270CB28:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8270caf8
	if (ctx.cr6.lt) goto loc_8270CAF8;
loc_8270CB3C:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270CB5C:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270cb90
	if (!ctx.cr0.eq) goto loc_8270CB90;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270cb90
	if (ctx.cr0.eq) goto loc_8270CB90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8270CB90;
	sub_82410060(ctx, base);
loc_8270CB90:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270CBA4:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r26,1164(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CBC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270cbe4
	if (!ctx.cr6.gt) goto loc_8270CBE4;
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// b 0x8270ccb8
	goto loc_8270CCB8;
loc_8270CBE4:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270cc84
	if (!ctx.cr6.eq) goto loc_8270CC84;
	// lwz r28,1160(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CC08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r29,r27,948
	ctx.r29.s64 = ctx.r27.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270cc64
	if (!ctx.cr6.gt) goto loc_8270CC64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8270CC20:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8270cc50
	if (!ctx.cr6.eq) goto loc_8270CC50;
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
	ctx.lr = 0x8270CC48;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8270CC50:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8270cc20
	if (ctx.cr6.lt) goto loc_8270CC20;
loc_8270CC64:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CC84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270CC84:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270ccb8
	if (!ctx.cr0.eq) goto loc_8270CCB8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270ccb8
	if (ctx.cr0.eq) goto loc_8270CCB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8270CCB8;
	sub_82410060(ctx, base);
loc_8270CCB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270CCCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CCD8"))) PPC_WEAK_FUNC(sub_8270CCD8);
PPC_FUNC_IMPL(__imp__sub_8270CCD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270c218
	sub_8270C218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CCE0"))) PPC_WEAK_FUNC(sub_8270CCE0);
PPC_FUNC_IMPL(__imp__sub_8270CCE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8270c340
	sub_8270C340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CCE8"))) PPC_WEAK_FUNC(sub_8270CCE8);
PPC_FUNC_IMPL(__imp__sub_8270CCE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270c340
	sub_8270C340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CCF0"))) PPC_WEAK_FUNC(sub_8270CCF0);
PPC_FUNC_IMPL(__imp__sub_8270CCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17232
	ctx.r3.s64 = ctx.r11.s64 + -17232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CD00"))) PPC_WEAK_FUNC(sub_8270CD00);
PPC_FUNC_IMPL(__imp__sub_8270CD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270cd38
	if (ctx.cr6.eq) goto loc_8270CD38;
	// bl 0x823ae448
	ctx.lr = 0x8270CD28;
	sub_823AE448(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270cd38
	if (!ctx.cr6.eq) goto loc_8270CD38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270cd44
	goto loc_8270CD44;
loc_8270CD38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270CD44;
	sub_824001E8(ctx, base);
loc_8270CD44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CD60"))) PPC_WEAK_FUNC(sub_8270CD60);
PPC_FUNC_IMPL(__imp__sub_8270CD60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ae448
	sub_823AE448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CD68"))) PPC_WEAK_FUNC(sub_8270CD68);
PPC_FUNC_IMPL(__imp__sub_8270CD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270CD88;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270cdc8
	if (ctx.cr0.eq) goto loc_8270CDC8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270CD9C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,14144
	ctx.r11.s64 = ctx.r11.s64 + 14144;
	// addi r10,r10,15184
	ctx.r10.s64 = ctx.r10.s64 + 15184;
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
	// b 0x8270cdcc
	goto loc_8270CDCC;
loc_8270CDC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270CDCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CDE8"))) PPC_WEAK_FUNC(sub_8270CDE8);
PPC_FUNC_IMPL(__imp__sub_8270CDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae448
	ctx.lr = 0x8270CE08;
	sub_823AE448(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270ce1c
	if (ctx.cr6.eq) goto loc_8270CE1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270CE1C;
	sub_82400188(ctx, base);
loc_8270CE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CE38"))) PPC_WEAK_FUNC(sub_8270CE38);
PPC_FUNC_IMPL(__imp__sub_8270CE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8270CE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x8270CE50;
	sub_8270B320(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lfs f13,16624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16624);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,-27300(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27300);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r7,14144
	ctx.r7.s64 = ctx.r7.s64 + 14144;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,23700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23700);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r6,15184
	ctx.r9.s64 = ctx.r6.s64 + 15184;
	// addi r10,r10,18524
	ctx.r10.s64 = ctx.r10.s64 + 18524;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,25
	ctx.r6.s64 = 25;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// li r4,71
	ctx.r4.s64 = 71;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,1500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1500, temp.u32);
	// stw r6,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// stfs f13,1488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r4,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r4.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r5,8840
	ctx.r5.s64 = 579338240;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r3,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r8.u32);
	// ori r5,r5,39024
	ctx.r5.u64 = ctx.r5.u64 | 39024;
	// stw r27,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r27.u32);
	// stw r29,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r29.u32);
	// stw r28,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r28.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270CF24;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CF30"))) PPC_WEAK_FUNC(sub_8270CF30);
PPC_FUNC_IMPL(__imp__sub_8270CF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270CF4C;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270cf5c
	if (ctx.cr0.eq) goto loc_8270CF5C;
	// lwz r11,6528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6528);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
loc_8270CF5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x8270CF64;
	sub_8270BA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CF78"))) PPC_WEAK_FUNC(sub_8270CF78);
PPC_FUNC_IMPL(__imp__sub_8270CF78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270cde8
	sub_8270CDE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CF80"))) PPC_WEAK_FUNC(sub_8270CF80);
PPC_FUNC_IMPL(__imp__sub_8270CF80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x826c31c8
	sub_826C31C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270CF88"))) PPC_WEAK_FUNC(sub_8270CF88);
PPC_FUNC_IMPL(__imp__sub_8270CF88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CF98"))) PPC_WEAK_FUNC(sub_8270CF98);
PPC_FUNC_IMPL(__imp__sub_8270CF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270cfd0
	if (ctx.cr6.eq) goto loc_8270CFD0;
	// bl 0x823adec0
	ctx.lr = 0x8270CFC0;
	sub_823ADEC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270cfd0
	if (!ctx.cr6.eq) goto loc_8270CFD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270cfdc
	goto loc_8270CFDC;
loc_8270CFD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270CFDC;
	sub_824001E8(ctx, base);
loc_8270CFDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CFF8"))) PPC_WEAK_FUNC(sub_8270CFF8);
PPC_FUNC_IMPL(__imp__sub_8270CFF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823adec0
	sub_823ADEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D000"))) PPC_WEAK_FUNC(sub_8270D000);
PPC_FUNC_IMPL(__imp__sub_8270D000) {
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
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x82833108
	ctx.lr = 0x8270D020;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270d078
	if (ctx.cr0.eq) goto loc_8270D078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270D034;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,15240
	ctx.r11.s64 = ctx.r11.s64 + 15240;
	// addi r10,r10,16284
	ctx.r10.s64 = ctx.r10.s64 + 16284;
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
	// lfs f0,1552(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lfs f0,1556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// b 0x8270d07c
	goto loc_8270D07C;
loc_8270D078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270D07C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D098"))) PPC_WEAK_FUNC(sub_8270D098);
PPC_FUNC_IMPL(__imp__sub_8270D098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adec0
	ctx.lr = 0x8270D0B8;
	sub_823ADEC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270d0cc
	if (ctx.cr6.eq) goto loc_8270D0CC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270D0CC;
	sub_82400188(ctx, base);
loc_8270D0CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D0E8"))) PPC_WEAK_FUNC(sub_8270D0E8);
PPC_FUNC_IMPL(__imp__sub_8270D0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1552(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1552, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D0F0"))) PPC_WEAK_FUNC(sub_8270D0F0);
PPC_FUNC_IMPL(__imp__sub_8270D0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270D0F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x8270D108;
	sub_8270B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r3,-32220
	ctx.r3.s64 = -2111569920;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f13,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,18524
	ctx.r3.s64 = ctx.r3.s64 + 18524;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// stw r10,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r10.u32);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// lfs f13,23700(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23700);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// stfs f13,1500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1500, temp.u32);
	// addi r5,r5,15240
	ctx.r5.s64 = ctx.r5.s64 + 15240;
	// stfs f12,1488(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// addi r4,r4,16284
	ctx.r4.s64 = ctx.r4.s64 + 16284;
	// lfs f11,24000(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24000);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lfs f10,20416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20416);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stfs f11,1552(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// stfs f10,1508(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-8252
	ctx.r5.s64 = -540803072;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r5,r5,47664
	ctx.r5.u64 = ctx.r5.u64 | 47664;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
	// stw r3,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r3.u32);
	// stw r8,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r8.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r29,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r29.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270D20C;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D218"))) PPC_WEAK_FUNC(sub_8270D218);
PPC_FUNC_IMPL(__imp__sub_8270D218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8270D220;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8270D254;
	sub_8281D960(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8270D258;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270d2fc
	if (ctx.cr0.eq) goto loc_8270D2FC;
	// lwz r11,2824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// lwz r11,2208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2208);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// lwz r11,4192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e9ed0
	ctx.lr = 0x8270D28C;
	sub_824E9ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8270d2fc
	if (!ctx.cr0.eq) goto loc_8270D2FC;
	// lwz r11,3896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// lwz r11,6080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// lwz r11,2576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270d2fc
	if (!ctx.cr6.eq) goto loc_8270D2FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270D2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8270d2fc
	if (!ctx.cr0.eq) goto loc_8270D2FC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,1552(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8270d2f0
	if (!ctx.cr6.eq) goto loc_8270D2F0;
	// lfs f0,696(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1552, temp.u32);
loc_8270D2F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,1552(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1552);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f0838
	ctx.lr = 0x8270D2FC;
	sub_824F0838(ctx, base);
loc_8270D2FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8270b910
	ctx.lr = 0x8270D310;
	sub_8270B910(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D318"))) PPC_WEAK_FUNC(sub_8270D318);
PPC_FUNC_IMPL(__imp__sub_8270D318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270D320;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270d350
	if (ctx.cr6.eq) goto loc_8270D350;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270d350
	if (ctx.cr6.eq) goto loc_8270D350;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270d468
	if (!ctx.cr6.eq) goto loc_8270D468;
loc_8270D350:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r29,r7,128
	ctx.r29.u64 = ctx.r7.u64 | 128;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270D3B4;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x8270D3EC;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d418
	if (ctx.cr6.eq) goto loc_8270D418;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270D410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270d41c
	goto loc_8270D41C;
loc_8270D418:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270D41C:
	// lwz r30,1484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r29,1472(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,1480(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8270D468;
	sub_82331120(ctx, base);
loc_8270D468:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D478"))) PPC_WEAK_FUNC(sub_8270D478);
PPC_FUNC_IMPL(__imp__sub_8270D478) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270d098
	sub_8270D098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D480"))) PPC_WEAK_FUNC(sub_8270D480);
PPC_FUNC_IMPL(__imp__sub_8270D480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17772
	ctx.r3.s64 = ctx.r11.s64 + -17772;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D490"))) PPC_WEAK_FUNC(sub_8270D490);
PPC_FUNC_IMPL(__imp__sub_8270D490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270d4c8
	if (ctx.cr6.eq) goto loc_8270D4C8;
	// bl 0x823acb98
	ctx.lr = 0x8270D4B8;
	sub_823ACB98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270d4c8
	if (!ctx.cr6.eq) goto loc_8270D4C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270d4d4
	goto loc_8270D4D4;
loc_8270D4C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270D4D4;
	sub_824001E8(ctx, base);
loc_8270D4D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D4F0"))) PPC_WEAK_FUNC(sub_8270D4F0);
PPC_FUNC_IMPL(__imp__sub_8270D4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823acb98
	sub_823ACB98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D4F8"))) PPC_WEAK_FUNC(sub_8270D4F8);
PPC_FUNC_IMPL(__imp__sub_8270D4F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270D518;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270d558
	if (ctx.cr0.eq) goto loc_8270D558;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270D52C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,16336
	ctx.r11.s64 = ctx.r11.s64 + 16336;
	// addi r10,r10,17376
	ctx.r10.s64 = ctx.r10.s64 + 17376;
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
	// b 0x8270d55c
	goto loc_8270D55C;
loc_8270D558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270D55C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D578"))) PPC_WEAK_FUNC(sub_8270D578);
PPC_FUNC_IMPL(__imp__sub_8270D578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823acb98
	ctx.lr = 0x8270D598;
	sub_823ACB98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270d5ac
	if (ctx.cr6.eq) goto loc_8270D5AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270D5AC;
	sub_82400188(ctx, base);
loc_8270D5AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D5C8"))) PPC_WEAK_FUNC(sub_8270D5C8);
PPC_FUNC_IMPL(__imp__sub_8270D5C8) {
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
	// bl 0x8270b320
	ctx.lr = 0x8270D5E4;
	sub_8270B320(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,16336
	ctx.r11.s64 = ctx.r11.s64 + 16336;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,17376
	ctx.r10.s64 = ctx.r10.s64 + 17376;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,7223
	ctx.r5.s64 = 473366528;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,12832
	ctx.r5.u64 = ctx.r5.u64 | 12832;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270D634;
	sub_823CF190(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r9,1710
	ctx.r9.s64 = 1710;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r9,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,19200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r8,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r8.u32);
	// stw r9,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8270D690"))) PPC_WEAK_FUNC(sub_8270D690);
PPC_FUNC_IMPL(__imp__sub_8270D690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270D698;
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f30,-27300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27300);
	ctx.f30.f64 = double(temp.f32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8270d6d4
	if (ctx.cr6.eq) goto loc_8270D6D4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8270D6CC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8270D6D0;
	sub_82409C40(ctx, base);
	// b 0x8270d6d8
	goto loc_8270D6D8;
loc_8270D6D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270D6D8:
	// lwz r3,1412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// bl 0x824090e0
	ctx.lr = 0x8270D6E0;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270d6f8
	if (ctx.cr0.eq) goto loc_8270D6F8;
	// lfs f0,7684(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7684);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f30,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f30.f64));
	// lfs f13,7688(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7688);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f30,f13,f0,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
loc_8270D6F8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f0,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,-17772
	ctx.r3.s64 = ctx.r7.s64 + -17772;
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270D754;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,128
	ctx.r5.s64 = 128;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x8270D78C;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270d7b8
	if (ctx.cr6.eq) goto loc_8270D7B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270D7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270d7bc
	goto loc_8270D7BC;
loc_8270D7B8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270D7BC:
	// lwz r30,1484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r29,1472(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r28,1480(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8270D808;
	sub_82331120(ctx, base);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f30,432(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 432, temp.u32);
	// lwz r10,1440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r11,560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 560, ctx.r11.u32);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x82331e80
	ctx.lr = 0x8270D824;
	sub_82331E80(ctx, base);
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

__attribute__((alias("__imp__sub_8270D838"))) PPC_WEAK_FUNC(sub_8270D838);
PPC_FUNC_IMPL(__imp__sub_8270D838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270d578
	sub_8270D578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D840"))) PPC_WEAK_FUNC(sub_8270D840);
PPC_FUNC_IMPL(__imp__sub_8270D840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17464
	ctx.r3.s64 = ctx.r11.s64 + -17464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D850"))) PPC_WEAK_FUNC(sub_8270D850);
PPC_FUNC_IMPL(__imp__sub_8270D850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270d888
	if (ctx.cr6.eq) goto loc_8270D888;
	// bl 0x823ad9b8
	ctx.lr = 0x8270D878;
	sub_823AD9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270d888
	if (!ctx.cr6.eq) goto loc_8270D888;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270d894
	goto loc_8270D894;
loc_8270D888:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270D894;
	sub_824001E8(ctx, base);
loc_8270D894:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D8B0"))) PPC_WEAK_FUNC(sub_8270D8B0);
PPC_FUNC_IMPL(__imp__sub_8270D8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270D8D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270d910
	if (ctx.cr0.eq) goto loc_8270D910;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270D8E4;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,17432
	ctx.r11.s64 = ctx.r11.s64 + 17432;
	// addi r10,r10,18472
	ctx.r10.s64 = ctx.r10.s64 + 18472;
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
	// b 0x8270d914
	goto loc_8270D914;
loc_8270D910:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270D914:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D930"))) PPC_WEAK_FUNC(sub_8270D930);
PPC_FUNC_IMPL(__imp__sub_8270D930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad9b8
	ctx.lr = 0x8270D950;
	sub_823AD9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270d964
	if (ctx.cr6.eq) goto loc_8270D964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270D964;
	sub_82400188(ctx, base);
loc_8270D964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D980"))) PPC_WEAK_FUNC(sub_8270D980);
PPC_FUNC_IMPL(__imp__sub_8270D980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17436
	ctx.r3.s64 = ctx.r11.s64 + -17436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D990"))) PPC_WEAK_FUNC(sub_8270D990);
PPC_FUNC_IMPL(__imp__sub_8270D990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270d9c8
	if (ctx.cr6.eq) goto loc_8270D9C8;
	// bl 0x823adaf8
	ctx.lr = 0x8270D9B8;
	sub_823ADAF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270d9c8
	if (!ctx.cr6.eq) goto loc_8270D9C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270d9d4
	goto loc_8270D9D4;
loc_8270D9C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270D9D4;
	sub_824001E8(ctx, base);
loc_8270D9D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D9F0"))) PPC_WEAK_FUNC(sub_8270D9F0);
PPC_FUNC_IMPL(__imp__sub_8270D9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823adaf8
	sub_823ADAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270D9F8"))) PPC_WEAK_FUNC(sub_8270D9F8);
PPC_FUNC_IMPL(__imp__sub_8270D9F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270DA18;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270da58
	if (ctx.cr0.eq) goto loc_8270DA58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270DA2C;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,18552
	ctx.r11.s64 = ctx.r11.s64 + 18552;
	// addi r10,r10,19592
	ctx.r10.s64 = ctx.r10.s64 + 19592;
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
	// b 0x8270da5c
	goto loc_8270DA5C;
loc_8270DA58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270DA5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DA78"))) PPC_WEAK_FUNC(sub_8270DA78);
PPC_FUNC_IMPL(__imp__sub_8270DA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adaf8
	ctx.lr = 0x8270DA98;
	sub_823ADAF8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270daac
	if (ctx.cr6.eq) goto loc_8270DAAC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270DAAC;
	sub_82400188(ctx, base);
loc_8270DAAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DAC8"))) PPC_WEAK_FUNC(sub_8270DAC8);
PPC_FUNC_IMPL(__imp__sub_8270DAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17408
	ctx.r3.s64 = ctx.r11.s64 + -17408;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DAD8"))) PPC_WEAK_FUNC(sub_8270DAD8);
PPC_FUNC_IMPL(__imp__sub_8270DAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270db10
	if (ctx.cr6.eq) goto loc_8270DB10;
	// bl 0x823adc38
	ctx.lr = 0x8270DB00;
	sub_823ADC38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270db10
	if (!ctx.cr6.eq) goto loc_8270DB10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270db1c
	goto loc_8270DB1C;
loc_8270DB10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270DB1C;
	sub_824001E8(ctx, base);
loc_8270DB1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DB38"))) PPC_WEAK_FUNC(sub_8270DB38);
PPC_FUNC_IMPL(__imp__sub_8270DB38) {
	PPC_FUNC_PROLOGUE();
	// b 0x823adc38
	sub_823ADC38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270DB40"))) PPC_WEAK_FUNC(sub_8270DB40);
PPC_FUNC_IMPL(__imp__sub_8270DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270DB60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270dba0
	if (ctx.cr0.eq) goto loc_8270DBA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270DB74;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,19648
	ctx.r11.s64 = ctx.r11.s64 + 19648;
	// addi r10,r10,20688
	ctx.r10.s64 = ctx.r10.s64 + 20688;
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
	// b 0x8270dba4
	goto loc_8270DBA4;
loc_8270DBA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270DBA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DBC0"))) PPC_WEAK_FUNC(sub_8270DBC0);
PPC_FUNC_IMPL(__imp__sub_8270DBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823adc38
	ctx.lr = 0x8270DBE0;
	sub_823ADC38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270dbf4
	if (ctx.cr6.eq) goto loc_8270DBF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270DBF4;
	sub_82400188(ctx, base);
loc_8270DBF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DC10"))) PPC_WEAK_FUNC(sub_8270DC10);
PPC_FUNC_IMPL(__imp__sub_8270DC10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17380
	ctx.r3.s64 = ctx.r11.s64 + -17380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DC20"))) PPC_WEAK_FUNC(sub_8270DC20);
PPC_FUNC_IMPL(__imp__sub_8270DC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270dc58
	if (ctx.cr6.eq) goto loc_8270DC58;
	// bl 0x823add78
	ctx.lr = 0x8270DC48;
	sub_823ADD78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270dc58
	if (!ctx.cr6.eq) goto loc_8270DC58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270dc64
	goto loc_8270DC64;
loc_8270DC58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8270d850
	ctx.lr = 0x8270DC64;
	sub_8270D850(ctx, base);
loc_8270DC64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DC80"))) PPC_WEAK_FUNC(sub_8270DC80);
PPC_FUNC_IMPL(__imp__sub_8270DC80) {
	PPC_FUNC_PROLOGUE();
	// b 0x823add78
	sub_823ADD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270DC88"))) PPC_WEAK_FUNC(sub_8270DC88);
PPC_FUNC_IMPL(__imp__sub_8270DC88) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad9b8
	sub_823AD9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270DC90"))) PPC_WEAK_FUNC(sub_8270DC90);
PPC_FUNC_IMPL(__imp__sub_8270DC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270DCB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270dcf0
	if (ctx.cr0.eq) goto loc_8270DCF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270DCC4;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,20744
	ctx.r11.s64 = ctx.r11.s64 + 20744;
	// addi r10,r10,21788
	ctx.r10.s64 = ctx.r10.s64 + 21788;
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
	// b 0x8270dcf4
	goto loc_8270DCF4;
loc_8270DCF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270DCF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DD10"))) PPC_WEAK_FUNC(sub_8270DD10);
PPC_FUNC_IMPL(__imp__sub_8270DD10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823add78
	ctx.lr = 0x8270DD30;
	sub_823ADD78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270dd40
	if (!ctx.cr6.eq) goto loc_8270DD40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270dd58
	goto loc_8270DD58;
loc_8270DD40:
	// bl 0x823ad9b8
	ctx.lr = 0x8270DD44;
	sub_823AD9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270dd58
	if (ctx.cr6.eq) goto loc_8270DD58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270DD58;
	sub_82400188(ctx, base);
loc_8270DD58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DD70"))) PPC_WEAK_FUNC(sub_8270DD70);
PPC_FUNC_IMPL(__imp__sub_8270DD70) {
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
	// bl 0x8270b320
	ctx.lr = 0x8270DD8C;
	sub_8270B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r10,r10,17432
	ctx.r10.s64 = ctx.r10.s64 + 17432;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,18472
	ctx.r11.s64 = ctx.r9.s64 + 18472;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r4,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r4.u32);
	// lis r5,15859
	ctx.r5.s64 = 1039335424;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// ori r5,r5,3822
	ctx.r5.u64 = ctx.r5.u64 | 3822;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270DE08;
	sub_823CF190(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r9,40
	ctx.r9.s64 = 40;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r9,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r8,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r8.u32);
	// stw r9,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8270DE60"))) PPC_WEAK_FUNC(sub_8270DE60);
PPC_FUNC_IMPL(__imp__sub_8270DE60) {
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
	// bl 0x8270b320
	ctx.lr = 0x8270DE7C;
	sub_8270B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r10,r10,18552
	ctx.r10.s64 = ctx.r10.s64 + 18552;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,19592
	ctx.r11.s64 = ctx.r9.s64 + 19592;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r4,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r4.u32);
	// lis r5,17861
	ctx.r5.s64 = 1170538496;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// ori r5,r5,60548
	ctx.r5.u64 = ctx.r5.u64 | 60548;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270DEF8;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8270DF10"))) PPC_WEAK_FUNC(sub_8270DF10);
PPC_FUNC_IMPL(__imp__sub_8270DF10) {
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
	// bl 0x8270b320
	ctx.lr = 0x8270DF2C;
	sub_8270B320(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,19648
	ctx.r11.s64 = ctx.r9.s64 + 19648;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r7,18524
	ctx.r7.s64 = ctx.r7.s64 + 18524;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,20688
	ctx.r8.s64 = ctx.r8.s64 + 20688;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// lis r5,-8252
	ctx.r5.s64 = -540803072;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// stw r4,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r4.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// ori r5,r5,47664
	ctx.r5.u64 = ctx.r5.u64 | 47664;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270DFB4;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8270DFD0"))) PPC_WEAK_FUNC(sub_8270DFD0);
PPC_FUNC_IMPL(__imp__sub_8270DFD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270dd70
	ctx.lr = 0x8270DFE8;
	sub_8270DD70(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,20744
	ctx.r11.s64 = ctx.r11.s64 + 20744;
	// addi r10,r10,21788
	ctx.r10.s64 = ctx.r10.s64 + 21788;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,-19204
	ctx.r5.s64 = -1258553344;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,63856
	ctx.r5.u64 = ctx.r5.u64 | 63856;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270E030;
	sub_823CF190(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r7,250
	ctx.r7.s64 = 250;
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,16816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r7.u32);
	// lfs f13,20408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20408);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,20404(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20404);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r5,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r5.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
	// stw r8,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r8.u32);
	// stw r7,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r7.u32);
	// stw r6,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_8270E0C0"))) PPC_WEAK_FUNC(sub_8270E0C0);
PPC_FUNC_IMPL(__imp__sub_8270E0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8270E0C8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,256
	ctx.r29.s64 = 256;
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270e0e8
	if (ctx.cr6.eq) goto loc_8270E0E8;
	// li r29,258
	ctx.r29.s64 = 258;
loc_8270E0E8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,-17380
	ctx.r3.s64 = ctx.r11.s64 + -17380;
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r28,r7,16449
	ctx.r28.u64 = ctx.r7.u64 | 16449;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270E14C;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x8270E184;
	sub_82708268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f0,32708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270e1c8
	if (ctx.cr6.eq) goto loc_8270E1C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270E1C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270e1cc
	goto loc_8270E1CC;
loc_8270E1C8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270E1CC:
	// ld r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r26,700
	ctx.r26.s64 = 700;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82331120
	ctx.lr = 0x8270E218;
	sub_82331120(ctx, base);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// stw r30,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r30.u32);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x82331e80
	ctx.lr = 0x8270E228;
	sub_82331E80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E238"))) PPC_WEAK_FUNC(sub_8270E238);
PPC_FUNC_IMPL(__imp__sub_8270E238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270dd10
	sub_8270DD10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E240"))) PPC_WEAK_FUNC(sub_8270E240);
PPC_FUNC_IMPL(__imp__sub_8270E240) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270dbc0
	sub_8270DBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E248"))) PPC_WEAK_FUNC(sub_8270E248);
PPC_FUNC_IMPL(__imp__sub_8270E248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270d930
	sub_8270D930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E250"))) PPC_WEAK_FUNC(sub_8270E250);
PPC_FUNC_IMPL(__imp__sub_8270E250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270da78
	sub_8270DA78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E258"))) PPC_WEAK_FUNC(sub_8270E258);
PPC_FUNC_IMPL(__imp__sub_8270E258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17904
	ctx.r3.s64 = ctx.r11.s64 + -17904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E268"))) PPC_WEAK_FUNC(sub_8270E268);
PPC_FUNC_IMPL(__imp__sub_8270E268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270e2a0
	if (ctx.cr6.eq) goto loc_8270E2A0;
	// bl 0x823ac690
	ctx.lr = 0x8270E290;
	sub_823AC690(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270e2a0
	if (!ctx.cr6.eq) goto loc_8270E2A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270e2ac
	goto loc_8270E2AC;
loc_8270E2A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270E2AC;
	sub_824001E8(ctx, base);
loc_8270E2AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E2C8"))) PPC_WEAK_FUNC(sub_8270E2C8);
PPC_FUNC_IMPL(__imp__sub_8270E2C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac690
	sub_823AC690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E2D0"))) PPC_WEAK_FUNC(sub_8270E2D0);
PPC_FUNC_IMPL(__imp__sub_8270E2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270E2F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270e330
	if (ctx.cr0.eq) goto loc_8270E330;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270E304;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,21920
	ctx.r11.s64 = ctx.r11.s64 + 21920;
	// addi r10,r10,22960
	ctx.r10.s64 = ctx.r10.s64 + 22960;
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
	// b 0x8270e334
	goto loc_8270E334;
loc_8270E330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270E334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E350"))) PPC_WEAK_FUNC(sub_8270E350);
PPC_FUNC_IMPL(__imp__sub_8270E350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac690
	ctx.lr = 0x8270E370;
	sub_823AC690(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270e384
	if (ctx.cr6.eq) goto loc_8270E384;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270E384;
	sub_82400188(ctx, base);
loc_8270E384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E3A0"))) PPC_WEAK_FUNC(sub_8270E3A0);
PPC_FUNC_IMPL(__imp__sub_8270E3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17876
	ctx.r3.s64 = ctx.r11.s64 + -17876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E3B0"))) PPC_WEAK_FUNC(sub_8270E3B0);
PPC_FUNC_IMPL(__imp__sub_8270E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270e3e8
	if (ctx.cr6.eq) goto loc_8270E3E8;
	// bl 0x823ac7d0
	ctx.lr = 0x8270E3D8;
	sub_823AC7D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270e3e8
	if (!ctx.cr6.eq) goto loc_8270E3E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270e3f4
	goto loc_8270E3F4;
loc_8270E3E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270E3F4;
	sub_823608E8(ctx, base);
loc_8270E3F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E410"))) PPC_WEAK_FUNC(sub_8270E410);
PPC_FUNC_IMPL(__imp__sub_8270E410) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac7d0
	sub_823AC7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E418"))) PPC_WEAK_FUNC(sub_8270E418);
PPC_FUNC_IMPL(__imp__sub_8270E418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270E438;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270e478
	if (ctx.cr0.eq) goto loc_8270E478;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270E44C;
	sub_82360A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,23016
	ctx.r11.s64 = ctx.r11.s64 + 23016;
	// addi r10,r10,24068
	ctx.r10.s64 = ctx.r10.s64 + 24068;
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
	// b 0x8270e47c
	goto loc_8270E47C;
loc_8270E478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270E47C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E498"))) PPC_WEAK_FUNC(sub_8270E498);
PPC_FUNC_IMPL(__imp__sub_8270E498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac7d0
	ctx.lr = 0x8270E4B8;
	sub_823AC7D0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270e4c8
	if (!ctx.cr6.eq) goto loc_8270E4C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270e4e0
	goto loc_8270E4E0;
loc_8270E4C8:
	// bl 0x823ab588
	ctx.lr = 0x8270E4CC;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270e4e0
	if (ctx.cr6.eq) goto loc_8270E4E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270E4E0;
	sub_82400188(ctx, base);
loc_8270E4E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E4F8"))) PPC_WEAK_FUNC(sub_8270E4F8);
PPC_FUNC_IMPL(__imp__sub_8270E4F8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x8270E518;
	sub_8270B320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r10,r10,21920
	ctx.r10.s64 = ctx.r10.s64 + 21920;
	// lfs f0,24008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,22960
	ctx.r11.s64 = ctx.r9.s64 + 22960;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,18524
	ctx.r8.s64 = ctx.r8.s64 + 18524;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r5,-22106
	ctx.r5.s64 = -1448738816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// ori r5,r5,60403
	ctx.r5.u64 = ctx.r5.u64 | 60403;
	// stw r6,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r3.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270E58C;
	sub_823CF190(ctx, base);
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

__attribute__((alias("__imp__sub_8270E5A8"))) PPC_WEAK_FUNC(sub_8270E5A8);
PPC_FUNC_IMPL(__imp__sub_8270E5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// bl 0x828ae3f0
	ctx.lr = 0x8270E5C8;
	sub_828AE3F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270E5DC;
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

__attribute__((alias("__imp__sub_8270E5F0"))) PPC_WEAK_FUNC(sub_8270E5F0);
PPC_FUNC_IMPL(__imp__sub_8270E5F0) {
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
	// bl 0x8270f370
	ctx.lr = 0x8270E60C;
	sub_8270F370(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r10,r10,23016
	ctx.r10.s64 = ctx.r10.s64 + 23016;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,24068
	ctx.r11.s64 = ctx.r9.s64 + 24068;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r8,24120
	ctx.r8.s64 = ctx.r8.s64 + 24120;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// addi r3,r11,21840
	ctx.r3.s64 = ctx.r11.s64 + 21840;
	// stw r6,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r6.u32);
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// stw r5,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r5.u32);
	// stw r7,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r7.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8270E67C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x823cf190
	ctx.lr = 0x8270E694;
	sub_823CF190(ctx, base);
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

__attribute__((alias("__imp__sub_8270E6B0"))) PPC_WEAK_FUNC(sub_8270E6B0);
PPC_FUNC_IMPL(__imp__sub_8270E6B0) {
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
	// bl 0x8270f5b0
	ctx.lr = 0x8270E6CC;
	sub_8270F5B0(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270E6D4;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8270e724
	if (ctx.cr0.eq) goto loc_8270E724;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270e724
	if (!ctx.cr6.gt) goto loc_8270E724;
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270E700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271dab0
	ctx.lr = 0x8270E710;
	sub_8271DAB0(ctx, base);
	// stw r3,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r3.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x8270E720;
	sub_8271DB88(ctx, base);
	// stfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_8270E724:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E740"))) PPC_WEAK_FUNC(sub_8270E740);
PPC_FUNC_IMPL(__imp__sub_8270E740) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270e498
	sub_8270E498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E748"))) PPC_WEAK_FUNC(sub_8270E748);
PPC_FUNC_IMPL(__imp__sub_8270E748) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270e350
	sub_8270E350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E750"))) PPC_WEAK_FUNC(sub_8270E750);
PPC_FUNC_IMPL(__imp__sub_8270E750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17836
	ctx.r3.s64 = ctx.r11.s64 + -17836;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E760"))) PPC_WEAK_FUNC(sub_8270E760);
PPC_FUNC_IMPL(__imp__sub_8270E760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270e798
	if (ctx.cr6.eq) goto loc_8270E798;
	// bl 0x823ac918
	ctx.lr = 0x8270E788;
	sub_823AC918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270e798
	if (!ctx.cr6.eq) goto loc_8270E798;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270e7a4
	goto loc_8270E7A4;
loc_8270E798:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270E7A4;
	sub_823608E8(ctx, base);
loc_8270E7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E7C0"))) PPC_WEAK_FUNC(sub_8270E7C0);
PPC_FUNC_IMPL(__imp__sub_8270E7C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac918
	sub_823AC918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E7C8"))) PPC_WEAK_FUNC(sub_8270E7C8);
PPC_FUNC_IMPL(__imp__sub_8270E7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270E7E8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270e828
	if (ctx.cr0.eq) goto loc_8270E828;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270E7FC;
	sub_82360A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,24144
	ctx.r11.s64 = ctx.r11.s64 + 24144;
	// addi r10,r10,25196
	ctx.r10.s64 = ctx.r10.s64 + 25196;
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
	// b 0x8270e82c
	goto loc_8270E82C;
loc_8270E828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270E82C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E848"))) PPC_WEAK_FUNC(sub_8270E848);
PPC_FUNC_IMPL(__imp__sub_8270E848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac918
	ctx.lr = 0x8270E868;
	sub_823AC918(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270e878
	if (!ctx.cr6.eq) goto loc_8270E878;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270e890
	goto loc_8270E890;
loc_8270E878:
	// bl 0x823ab588
	ctx.lr = 0x8270E87C;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270e890
	if (ctx.cr6.eq) goto loc_8270E890;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270E890;
	sub_82400188(ctx, base);
loc_8270E890:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E8A8"))) PPC_WEAK_FUNC(sub_8270E8A8);
PPC_FUNC_IMPL(__imp__sub_8270E8A8) {
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
	// bl 0x8270f370
	ctx.lr = 0x8270E8C0;
	sub_8270F370(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,24144
	ctx.r11.s64 = ctx.r9.s64 + 24144;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r7,24120
	ctx.r7.s64 = ctx.r7.s64 + 24120;
	// lfs f0,-25080(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,25196
	ctx.r8.s64 = ctx.r8.s64 + 25196;
	// li r10,30
	ctx.r10.s64 = 30;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lis r5,-22106
	ctx.r5.s64 = -1448738816;
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r9,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// ori r5,r5,60403
	ctx.r5.u64 = ctx.r5.u64 | 60403;
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270E948;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8270E960"))) PPC_WEAK_FUNC(sub_8270E960);
PPC_FUNC_IMPL(__imp__sub_8270E960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270E968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270E978;
	sub_824BA060(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270ea0c
	if (ctx.cr0.eq) goto loc_8270EA0C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,10564
	ctx.r29.s64 = ctx.r11.s64 + 10564;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,1572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270E9A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r3.u32);
	// lwz r11,6136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270e9f0
	if (!ctx.cr6.gt) goto loc_8270E9F0;
	// lwz r11,6132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270E9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1556, ctx.r3.u32);
	// lwz r11,6132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271dab0
	ctx.lr = 0x8270E9D8;
	sub_8271DAB0(ctx, base);
	// stw r3,1560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1560, ctx.r3.u32);
	// lwz r11,6132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x8270E9E8;
	sub_8271DB88(ctx, base);
	// stfs f1,1564(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1564, temp.u32);
	// b 0x8270ea0c
	goto loc_8270EA0C;
loc_8270E9F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270EA08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1560, ctx.r3.u32);
loc_8270EA0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8270f5b0
	ctx.lr = 0x8270EA14;
	sub_8270F5B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EA20"))) PPC_WEAK_FUNC(sub_8270EA20);
PPC_FUNC_IMPL(__imp__sub_8270EA20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270e848
	sub_8270E848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EA28"))) PPC_WEAK_FUNC(sub_8270EA28);
PPC_FUNC_IMPL(__imp__sub_8270EA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EA38"))) PPC_WEAK_FUNC(sub_8270EA38);
PPC_FUNC_IMPL(__imp__sub_8270EA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270ea70
	if (ctx.cr6.eq) goto loc_8270EA70;
	// bl 0x823ad878
	ctx.lr = 0x8270EA60;
	sub_823AD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270ea70
	if (!ctx.cr6.eq) goto loc_8270EA70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270ea7c
	goto loc_8270EA7C;
loc_8270EA70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270EA7C;
	sub_824001E8(ctx, base);
loc_8270EA7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EA98"))) PPC_WEAK_FUNC(sub_8270EA98);
PPC_FUNC_IMPL(__imp__sub_8270EA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad878
	sub_823AD878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EAA0"))) PPC_WEAK_FUNC(sub_8270EAA0);
PPC_FUNC_IMPL(__imp__sub_8270EAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1552
	ctx.r3.s64 = 1552;
	// bl 0x82833108
	ctx.lr = 0x8270EAC0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270eb00
	if (ctx.cr0.eq) goto loc_8270EB00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270EAD4;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,25248
	ctx.r11.s64 = ctx.r11.s64 + 25248;
	// addi r10,r10,26288
	ctx.r10.s64 = ctx.r10.s64 + 26288;
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
	// b 0x8270eb04
	goto loc_8270EB04;
loc_8270EB00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270EB04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EB20"))) PPC_WEAK_FUNC(sub_8270EB20);
PPC_FUNC_IMPL(__imp__sub_8270EB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad878
	ctx.lr = 0x8270EB40;
	sub_823AD878(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270eb54
	if (ctx.cr6.eq) goto loc_8270EB54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270EB54;
	sub_82400188(ctx, base);
loc_8270EB54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EB70"))) PPC_WEAK_FUNC(sub_8270EB70);
PPC_FUNC_IMPL(__imp__sub_8270EB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8270EB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x8270EB88;
	sub_8270B320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f13,24020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f12,-32616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lfs f0,23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23752);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,26288
	ctx.r11.s64 = ctx.r11.s64 + 26288;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r7,25248
	ctx.r9.s64 = ctx.r7.s64 + 25248;
	// lfs f0,-11456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,18524
	ctx.r10.s64 = ctx.r10.s64 + 18524;
	// li r8,200
	ctx.r8.s64 = 200;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r3,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r3.u32);
	// stw r4,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r4.u32);
	// stfs f0,1488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r6,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r6.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r5,4332
	ctx.r5.s64 = 283901952;
	// stw r8,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r8.u32);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// stw r26,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r26.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r27,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r27.u32);
	// ori r5,r5,10322
	ctx.r5.u64 = ctx.r5.u64 | 10322;
	// stw r29,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r29.u32);
	// stw r28,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r28.u32);
	// stw r30,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r30.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270EC54;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EC60"))) PPC_WEAK_FUNC(sub_8270EC60);
PPC_FUNC_IMPL(__imp__sub_8270EC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270EC68;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270ec98
	if (ctx.cr6.eq) goto loc_8270EC98;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270ec98
	if (ctx.cr6.eq) goto loc_8270EC98;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270edb4
	if (!ctx.cr6.eq) goto loc_8270EDB4;
loc_8270EC98:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f0,1452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,6980
	ctx.r3.s64 = ctx.r11.s64 + 6980;
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r29,r7,16448
	ctx.r29.u64 = ctx.r7.u64 | 16448;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270ECFC;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x8270ED34;
	sub_82708268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270ed64
	if (ctx.cr6.eq) goto loc_8270ED64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270ED5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270ed68
	goto loc_8270ED68;
loc_8270ED64:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270ED68:
	// lwz r30,1484(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r29,1472(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r28,1480(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8270EDB4;
	sub_82331120(ctx, base);
loc_8270EDB4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EDC0"))) PPC_WEAK_FUNC(sub_8270EDC0);
PPC_FUNC_IMPL(__imp__sub_8270EDC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270eb20
	sub_8270EB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EDC8"))) PPC_WEAK_FUNC(sub_8270EDC8);
PPC_FUNC_IMPL(__imp__sub_8270EDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18128
	ctx.r3.s64 = ctx.r11.s64 + -18128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EDD8"))) PPC_WEAK_FUNC(sub_8270EDD8);
PPC_FUNC_IMPL(__imp__sub_8270EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270ee10
	if (ctx.cr6.eq) goto loc_8270EE10;
	// bl 0x823abc48
	ctx.lr = 0x8270EE00;
	sub_823ABC48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270ee10
	if (!ctx.cr6.eq) goto loc_8270EE10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270ee1c
	goto loc_8270EE1C;
loc_8270EE10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82360e90
	ctx.lr = 0x8270EE1C;
	sub_82360E90(ctx, base);
loc_8270EE1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EE38"))) PPC_WEAK_FUNC(sub_8270EE38);
PPC_FUNC_IMPL(__imp__sub_8270EE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x823abc48
	sub_823ABC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EE40"))) PPC_WEAK_FUNC(sub_8270EE40);
PPC_FUNC_IMPL(__imp__sub_8270EE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x823abb08
	sub_823ABB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EE48"))) PPC_WEAK_FUNC(sub_8270EE48);
PPC_FUNC_IMPL(__imp__sub_8270EE48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x8270EE68;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270eea8
	if (ctx.cr0.eq) goto loc_8270EEA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360f98
	ctx.lr = 0x8270EE7C;
	sub_82360F98(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,26616
	ctx.r11.s64 = ctx.r11.s64 + 26616;
	// addi r10,r10,27668
	ctx.r10.s64 = ctx.r10.s64 + 27668;
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
	// b 0x8270eeac
	goto loc_8270EEAC;
loc_8270EEA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270EEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EEC8"))) PPC_WEAK_FUNC(sub_8270EEC8);
PPC_FUNC_IMPL(__imp__sub_8270EEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823abc48
	ctx.lr = 0x8270EEE8;
	sub_823ABC48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270eefc
	if (ctx.cr6.eq) goto loc_8270EEFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82360f38
	ctx.lr = 0x8270EEFC;
	sub_82360F38(ctx, base);
loc_8270EEFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EF18"))) PPC_WEAK_FUNC(sub_8270EF18);
PPC_FUNC_IMPL(__imp__sub_8270EF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18080
	ctx.r3.s64 = ctx.r11.s64 + -18080;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EF28"))) PPC_WEAK_FUNC(sub_8270EF28);
PPC_FUNC_IMPL(__imp__sub_8270EF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270ef60
	if (ctx.cr6.eq) goto loc_8270EF60;
	// bl 0x823ac0c0
	ctx.lr = 0x8270EF50;
	sub_823AC0C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270ef60
	if (!ctx.cr6.eq) goto loc_8270EF60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270ef6c
	goto loc_8270EF6C;
loc_8270EF60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270EF6C;
	sub_823608E8(ctx, base);
loc_8270EF6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EF88"))) PPC_WEAK_FUNC(sub_8270EF88);
PPC_FUNC_IMPL(__imp__sub_8270EF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac0c0
	sub_823AC0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EF90"))) PPC_WEAK_FUNC(sub_8270EF90);
PPC_FUNC_IMPL(__imp__sub_8270EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270EFB0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270eff0
	if (ctx.cr0.eq) goto loc_8270EFF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270EFC4;
	sub_82360A00(ctx, base);
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
	// b 0x8270eff4
	goto loc_8270EFF4;
loc_8270EFF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270EFF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F010"))) PPC_WEAK_FUNC(sub_8270F010);
PPC_FUNC_IMPL(__imp__sub_8270F010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac0c0
	ctx.lr = 0x8270F030;
	sub_823AC0C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270f040
	if (!ctx.cr6.eq) goto loc_8270F040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270f058
	goto loc_8270F058;
loc_8270F040:
	// bl 0x823ab588
	ctx.lr = 0x8270F044;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270f058
	if (ctx.cr6.eq) goto loc_8270F058;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270F058;
	sub_82400188(ctx, base);
loc_8270F058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F070"))) PPC_WEAK_FUNC(sub_8270F070);
PPC_FUNC_IMPL(__imp__sub_8270F070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-18036
	ctx.r3.s64 = ctx.r11.s64 + -18036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F080"))) PPC_WEAK_FUNC(sub_8270F080);
PPC_FUNC_IMPL(__imp__sub_8270F080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270f0b8
	if (ctx.cr6.eq) goto loc_8270F0B8;
	// bl 0x823ac260
	ctx.lr = 0x8270F0A8;
	sub_823AC260(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270f0b8
	if (!ctx.cr6.eq) goto loc_8270F0B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270f0c4
	goto loc_8270F0C4;
loc_8270F0B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270F0C4;
	sub_823608E8(ctx, base);
loc_8270F0C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F0E0"))) PPC_WEAK_FUNC(sub_8270F0E0);
PPC_FUNC_IMPL(__imp__sub_8270F0E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac260
	sub_823AC260(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F0E8"))) PPC_WEAK_FUNC(sub_8270F0E8);
PPC_FUNC_IMPL(__imp__sub_8270F0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270F108;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270f148
	if (ctx.cr0.eq) goto loc_8270F148;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270F11C;
	sub_82360A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,28824
	ctx.r11.s64 = ctx.r11.s64 + 28824;
	// addi r10,r10,29876
	ctx.r10.s64 = ctx.r10.s64 + 29876;
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
	// b 0x8270f14c
	goto loc_8270F14C;
loc_8270F148:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270F14C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F168"))) PPC_WEAK_FUNC(sub_8270F168);
PPC_FUNC_IMPL(__imp__sub_8270F168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac260
	ctx.lr = 0x8270F188;
	sub_823AC260(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270f198
	if (!ctx.cr6.eq) goto loc_8270F198;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270f1b0
	goto loc_8270F1B0;
loc_8270F198:
	// bl 0x823ab588
	ctx.lr = 0x8270F19C;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270f1b0
	if (ctx.cr6.eq) goto loc_8270F1B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270F1B0;
	sub_82400188(ctx, base);
loc_8270F1B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F1C8"))) PPC_WEAK_FUNC(sub_8270F1C8);
PPC_FUNC_IMPL(__imp__sub_8270F1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17992
	ctx.r3.s64 = ctx.r11.s64 + -17992;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F1D8"))) PPC_WEAK_FUNC(sub_8270F1D8);
PPC_FUNC_IMPL(__imp__sub_8270F1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8270f210
	if (ctx.cr6.eq) goto loc_8270F210;
	// bl 0x823ac3d8
	ctx.lr = 0x8270F200;
	sub_823AC3D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270f210
	if (!ctx.cr6.eq) goto loc_8270F210;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270f21c
	goto loc_8270F21C;
loc_8270F210:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270F21C;
	sub_823608E8(ctx, base);
loc_8270F21C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F238"))) PPC_WEAK_FUNC(sub_8270F238);
PPC_FUNC_IMPL(__imp__sub_8270F238) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ac3d8
	sub_823AC3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F240"))) PPC_WEAK_FUNC(sub_8270F240);
PPC_FUNC_IMPL(__imp__sub_8270F240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270F260;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270f2a0
	if (ctx.cr0.eq) goto loc_8270F2A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270F274;
	sub_82360A00(ctx, base);
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
	// b 0x8270f2a4
	goto loc_8270F2A4;
loc_8270F2A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270F2A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F2C0"))) PPC_WEAK_FUNC(sub_8270F2C0);
PPC_FUNC_IMPL(__imp__sub_8270F2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ac3d8
	ctx.lr = 0x8270F2E0;
	sub_823AC3D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270f2f0
	if (!ctx.cr6.eq) goto loc_8270F2F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270f308
	goto loc_8270F308;
loc_8270F2F0:
	// bl 0x823ab588
	ctx.lr = 0x8270F2F4;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270f308
	if (ctx.cr6.eq) goto loc_8270F308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270F308;
	sub_82400188(ctx, base);
loc_8270F308:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F320"))) PPC_WEAK_FUNC(sub_8270F320);
PPC_FUNC_IMPL(__imp__sub_8270F320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8270f6b8
	ctx.lr = 0x8270F340;
	sub_8270F6B8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8270f350
	if (ctx.cr0.eq) goto loc_8270F350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8270F350;
	sub_82332DB8(ctx, base);
loc_8270F350:
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

__attribute__((alias("__imp__sub_8270F370"))) PPC_WEAK_FUNC(sub_8270F370);
PPC_FUNC_IMPL(__imp__sub_8270F370) {
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
	// bl 0x8270b320
	ctx.lr = 0x8270F38C;
	sub_8270B320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,16800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r9,25184
	ctx.r9.s64 = ctx.r9.s64 + 25184;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r8,26236
	ctx.r8.s64 = ctx.r8.s64 + 26236;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r7,24120
	ctx.r7.s64 = ctx.r7.s64 + 24120;
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// stw r6,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r6.u32);
	// stw r4,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r4.u32);
	// stw r5,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8270F410"))) PPC_WEAK_FUNC(sub_8270F410);
PPC_FUNC_IMPL(__imp__sub_8270F410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8270F418;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// addi r3,r8,668
	ctx.r3.s64 = ctx.r8.s64 + 668;
	// lwz r10,1452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,1516(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// ori r29,r7,8
	ctx.r29.u64 = ctx.r7.u64 | 8;
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r28,r6,128
	ctx.r28.u64 = ctx.r6.u64 | 128;
	// bl 0x82816528
	ctx.lr = 0x8270F490;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x8270F4C8;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x8270f500
	if (ctx.cr6.eq) goto loc_8270F500;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270F4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270f504
	goto loc_8270F504;
loc_8270F500:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270F504:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x8270F550;
	sub_82331120(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F560"))) PPC_WEAK_FUNC(sub_8270F560);
PPC_FUNC_IMPL(__imp__sub_8270F560) {
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
	// lwz r11,1552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8270f59c
	if (!ctx.cr6.eq) goto loc_8270F59C;
	// lwz r3,1556(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270f594
	if (ctx.cr6.eq) goto loc_8270F594;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271d1c8
	ctx.lr = 0x8270F594;
	sub_8271D1C8(ctx, base);
loc_8270F594:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270f5a0
	goto loc_8270F5A0;
loc_8270F59C:
	// bl 0x8270b910
	ctx.lr = 0x8270F5A0;
	sub_8270B910(ctx, base);
loc_8270F5A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F5B0"))) PPC_WEAK_FUNC(sub_8270F5B0);
PPC_FUNC_IMPL(__imp__sub_8270F5B0) {
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
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270F5CC;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270f5f4
	if (ctx.cr0.eq) goto loc_8270F5F4;
	// lwz r11,6528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270f5e4
	if (!ctx.cr6.gt) goto loc_8270F5E4;
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
loc_8270F5E4:
	// lwz r11,6516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6516);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lfs f0,6524(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6524);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8270f610
	goto loc_8270F610;
loc_8270F5F4:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x8270F5FC;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270f614
	if (ctx.cr0.eq) goto loc_8270F614;
	// lwz r11,8460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8460);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lfs f0,8464(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8464);
	ctx.f0.f64 = double(temp.f32);
loc_8270F610:
	// stfs f0,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_8270F614:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270f634
	if (ctx.cr6.eq) goto loc_8270F634;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270F630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8270f638
	goto loc_8270F638;
loc_8270F634:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270F638:
	// bl 0x824ba060
	ctx.lr = 0x8270F63C;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270f67c
	if (ctx.cr0.eq) goto loc_8270F67C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,6520(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8270f67c
	if (!ctx.cr6.gt) goto loc_8270F67C;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// stw r10,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r10.u32);
loc_8270F67C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x8270F684;
	sub_8270BA30(ctx, base);
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

__attribute__((alias("__imp__sub_8270F698"))) PPC_WEAK_FUNC(sub_8270F698);
PPC_FUNC_IMPL(__imp__sub_8270F698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270f6b0
	if (ctx.cr6.eq) goto loc_8270F6B0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8270F6B0:
	// b 0x8270b8a8
	sub_8270B8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F6B8"))) PPC_WEAK_FUNC(sub_8270F6B8);
PPC_FUNC_IMPL(__imp__sub_8270F6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,25184
	ctx.r11.s64 = ctx.r11.s64 + 25184;
	// lwz r3,1556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// addi r10,r10,26236
	ctx.r10.s64 = ctx.r10.s64 + 26236;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x8270f710
	if (ctx.cr6.eq) goto loc_8270F710;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270F710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270F710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270b438
	ctx.lr = 0x8270F718;
	sub_8270B438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F730"))) PPC_WEAK_FUNC(sub_8270F730);
PPC_FUNC_IMPL(__imp__sub_8270F730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270F738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270f370
	ctx.lr = 0x8270F744;
	sub_8270F370(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,29696
	ctx.r11.s64 = ctx.r11.s64 + 29696;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,30748
	ctx.r10.s64 = ctx.r10.s64 + 30748;
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
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8270F78C;
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
	ctx.lr = 0x8270F7A4;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F7B0"))) PPC_WEAK_FUNC(sub_8270F7B0);
PPC_FUNC_IMPL(__imp__sub_8270F7B0) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,20416
	ctx.r30.s64 = ctx.r11.s64 + 20416;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// lfs f0,17792(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 17792);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// bl 0x8270f5b0
	ctx.lr = 0x8270F7E4;
	sub_8270F5B0(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270F7EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270f808
	if (ctx.cr0.eq) goto loc_8270F808;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lfs f1,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825137d0
	ctx.lr = 0x8270F804;
	sub_825137D0(ctx, base);
	// b 0x8270f80c
	goto loc_8270F80C;
loc_8270F808:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270F80C:
	// bl 0x82505910
	ctx.lr = 0x8270F810;
	sub_82505910(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lfs f0,1584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stfs f0,248(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 248, temp.u32);
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8270f844
	if (ctx.cr6.eq) goto loc_8270F844;
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// lwz r9,1556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stw r11,84(r9)
	PPC_STORE_U32(ctx.r9.u32 + 84, ctx.r11.u32);
	// stw r10,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r10.u32);
loc_8270F844:
	// lwz r10,1592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8270f860
	if (ctx.cr6.eq) goto loc_8270F860;
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lfs f0,1588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
loc_8270F860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F878"))) PPC_WEAK_FUNC(sub_8270F878);
PPC_FUNC_IMPL(__imp__sub_8270F878) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270f730
	ctx.lr = 0x8270F890;
	sub_8270F730(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r8,27668
	ctx.r10.s64 = ctx.r8.s64 + 27668;
	// addi r9,r9,26616
	ctx.r9.s64 = ctx.r9.s64 + 26616;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r7,24120
	ctx.r8.s64 = ctx.r7.s64 + 24120;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8270f8fc
	if (ctx.cr6.eq) goto loc_8270F8FC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,24228
	ctx.r5.s64 = ctx.r11.s64 + 24228;
	// addi r4,r10,11572
	ctx.r4.s64 = ctx.r10.s64 + 11572;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8270F8F8;
	sub_828C5740(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8270F8FC:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,8208
	ctx.r9.s64 = 8208;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r9.u32);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stw r8,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r8.u32);
	// stw r10,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8270F940"))) PPC_WEAK_FUNC(sub_8270F940);
PPC_FUNC_IMPL(__imp__sub_8270F940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270F948;
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
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x8270F95C;
	sub_824090E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270fa44
	if (ctx.cr0.eq) goto loc_8270FA44;
	// lwz r10,8964(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8964);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8270f980
	if (ctx.cr6.eq) goto loc_8270F980;
	// lwz r9,3340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lwz r11,2092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2092);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8270F980:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,10380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 10380);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x825f51a0
	ctx.lr = 0x8270F9B4;
	sub_825F51A0(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r4,61
	ctx.r4.s64 = 61;
	// stw r11,1448(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1448, ctx.r11.u32);
	// lfs f31,8464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8464);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2004);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270F9D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,10392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 10392);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r9.u32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,1588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1588, temp.u32);
	// lwz r11,8964(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8964);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fa18
	if (ctx.cr6.eq) goto loc_8270FA18;
	// lwz r10,3340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lwz r11,2092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2092);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8270FA18:
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// lfs f0,10388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 10388);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1600
	ctx.r10.s64 = 1600;
	// stw r9,1596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1596, ctx.r9.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.f0.u32);
loc_8270FA44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8270f7b0
	ctx.lr = 0x8270FA4C;
	sub_8270F7B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FA58"))) PPC_WEAK_FUNC(sub_8270FA58);
PPC_FUNC_IMPL(__imp__sub_8270FA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270FA60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270f370
	ctx.lr = 0x8270FA6C;
	sub_8270F370(ctx, base);
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r11,r11,26312
	ctx.r11.s64 = ctx.r11.s64 + 26312;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,27364
	ctx.r10.s64 = ctx.r10.s64 + 27364;
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
	// addi r3,r11,26412
	ctx.r3.s64 = ctx.r11.s64 + 26412;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8270FAB4;
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
	ctx.lr = 0x8270FACC;
	sub_823CF190(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FAE8"))) PPC_WEAK_FUNC(sub_8270FAE8);
PPC_FUNC_IMPL(__imp__sub_8270FAE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,10
	ctx.r10.s64 = 10;
	// lfs f0,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// bl 0x8270f5b0
	ctx.lr = 0x8270FB14;
	sub_8270F5B0(ctx, base);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270fb28
	if (!ctx.cr6.eq) goto loc_8270FB28;
	// lfs f0,1572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_8270FB28:
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270FB30;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270fb50
	if (ctx.cr0.eq) goto loc_8270FB50;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lfs f2,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82513860
	ctx.lr = 0x8270FB4C;
	sub_82513860(ctx, base);
	// b 0x8270fb54
	goto loc_8270FB54;
loc_8270FB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270FB54:
	// bl 0x82505910
	ctx.lr = 0x8270FB58;
	sub_82505910(ctx, base);
	// lwz r10,1568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8270fb78
	if (!ctx.cr6.eq) goto loc_8270FB78;
	// lfs f0,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
loc_8270FB78:
	// lwz r10,1556(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270FB98"))) PPC_WEAK_FUNC(sub_8270FB98);
PPC_FUNC_IMPL(__imp__sub_8270FB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270FBA0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// addi r3,r7,668
	ctx.r3.s64 = ctx.r7.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270FC08;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,128
	ctx.r5.s64 = 128;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x8270FC40;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270fc78
	if (ctx.cr6.eq) goto loc_8270FC78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270FC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270fc7c
	goto loc_8270FC7C;
loc_8270FC78:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270FC7C:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x8270FCC8;
	sub_82331120(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FCD8"))) PPC_WEAK_FUNC(sub_8270FCD8);
PPC_FUNC_IMPL(__imp__sub_8270FCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270FCE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,20416
	ctx.r29.s64 = ctx.r11.s64 + 20416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// lfs f0,17820(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// bl 0x8270f5b0
	ctx.lr = 0x8270FD04;
	sub_8270F5B0(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270FD0C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// beq 0x8270fd48
	if (ctx.cr0.eq) goto loc_8270FD48;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// bl 0x82505970
	ctx.lr = 0x8270FD30;
	sub_82505970(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-24656
	ctx.r11.s64 = ctx.r11.s64 + -24656;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8270fd4c
	goto loc_8270FD4C;
loc_8270FD48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270FD4C:
	// bl 0x82505910
	ctx.lr = 0x8270FD50;
	sub_82505910(ctx, base);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FD60"))) PPC_WEAK_FUNC(sub_8270FD60);
PPC_FUNC_IMPL(__imp__sub_8270FD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270FD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8270f5b0
	ctx.lr = 0x8270FD74;
	sub_8270F5B0(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270FD7C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq 0x8270fdbc
	if (ctx.cr0.eq) goto loc_8270FDBC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f1,1564(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1560(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82505970
	ctx.lr = 0x8270FDA4;
	sub_82505970(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-24968
	ctx.r11.s64 = ctx.r11.s64 + -24968;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8270fdc0
	goto loc_8270FDC0;
loc_8270FDBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270FDC0:
	// bl 0x82505910
	ctx.lr = 0x8270FDC4;
	sub_82505910(ctx, base);
	// stw r3,1556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1556, ctx.r3.u32);
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FDD8"))) PPC_WEAK_FUNC(sub_8270FDD8);
PPC_FUNC_IMPL(__imp__sub_8270FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8270f5b0
	ctx.lr = 0x8270FDF0;
	sub_8270F5B0(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x8270FDF8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270fe08
	if (ctx.cr0.eq) goto loc_8270FE08;
	// bl 0x823f40f0
	ctx.lr = 0x8270FE04;
	sub_823F40F0(ctx, base);
	// b 0x8270fe0c
	goto loc_8270FE0C;
loc_8270FE08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270FE0C:
	// bl 0x82505910
	ctx.lr = 0x8270FE10;
	sub_82505910(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270FE30"))) PPC_WEAK_FUNC(sub_8270FE30);
PPC_FUNC_IMPL(__imp__sub_8270FE30) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,26516
	ctx.r3.s64 = ctx.r10.s64 + 26516;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8270FE60;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x8270FE78;
	sub_823CF190(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270FE80;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8270ffc8
	if (ctx.cr0.eq) goto loc_8270FFC8;
	// lwz r11,6528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6528);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270ffc8
	if (!ctx.cr6.gt) goto loc_8270FFC8;
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270FEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r30,6516(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6516);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x8270FED0;
	sub_8271DB88(ctx, base);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// stfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r30.u32);
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ffc8
	if (ctx.cr6.eq) goto loc_8270FFC8;
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,26564
	ctx.r3.s64 = ctx.r10.s64 + 26564;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x8270FF0C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82979140
	ctx.lr = 0x8270FF20;
	sub_82979140(ctx, base);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,26576
	ctx.r3.s64 = ctx.r10.s64 + 26576;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8270FF44;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82979140
	ctx.lr = 0x8270FF58;
	sub_82979140(ctx, base);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,26588
	ctx.r3.s64 = ctx.r10.s64 + 26588;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8270FF7C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82979140
	ctx.lr = 0x8270FF90;
	sub_82979140(ctx, base);
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,26600
	ctx.r3.s64 = ctx.r10.s64 + 26600;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8270FFB4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82979140
	ctx.lr = 0x8270FFC8;
	sub_82979140(ctx, base);
loc_8270FFC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270f5b0
	ctx.lr = 0x8270FFD0;
	sub_8270F5B0(ctx, base);
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

__attribute__((alias("__imp__sub_8270FFE8"))) PPC_WEAK_FUNC(sub_8270FFE8);
PPC_FUNC_IMPL(__imp__sub_8270FFE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270f320
	sub_8270F320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FFF0"))) PPC_WEAK_FUNC(sub_8270FFF0);
PPC_FUNC_IMPL(__imp__sub_8270FFF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270f168
	sub_8270F168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270FFF8"))) PPC_WEAK_FUNC(sub_8270FFF8);
PPC_FUNC_IMPL(__imp__sub_8270FFF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270f2c0
	sub_8270F2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710000"))) PPC_WEAK_FUNC(sub_82710000);
PPC_FUNC_IMPL(__imp__sub_82710000) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270eec8
	sub_8270EEC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710008"))) PPC_WEAK_FUNC(sub_82710008);
PPC_FUNC_IMPL(__imp__sub_82710008) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270f010
	sub_8270F010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710010"))) PPC_WEAK_FUNC(sub_82710010);
PPC_FUNC_IMPL(__imp__sub_82710010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710020"))) PPC_WEAK_FUNC(sub_82710020);
PPC_FUNC_IMPL(__imp__sub_82710020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82710058
	if (ctx.cr6.eq) goto loc_82710058;
	// bl 0x823ad738
	ctx.lr = 0x82710048;
	sub_823AD738(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710058
	if (!ctx.cr6.eq) goto loc_82710058;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82710064
	goto loc_82710064;
loc_82710058:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x82710064;
	sub_823608E8(ctx, base);
loc_82710064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710080"))) PPC_WEAK_FUNC(sub_82710080);
PPC_FUNC_IMPL(__imp__sub_82710080) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad738
	sub_823AD738(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710088"))) PPC_WEAK_FUNC(sub_82710088);
PPC_FUNC_IMPL(__imp__sub_82710088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x827100A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827100e8
	if (ctx.cr0.eq) goto loc_827100E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x827100BC;
	sub_82360A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,31032
	ctx.r11.s64 = ctx.r11.s64 + 31032;
	// addi r10,r10,32084
	ctx.r10.s64 = ctx.r10.s64 + 32084;
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
	// b 0x827100ec
	goto loc_827100EC;
loc_827100E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827100EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710108"))) PPC_WEAK_FUNC(sub_82710108);
PPC_FUNC_IMPL(__imp__sub_82710108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad738
	ctx.lr = 0x82710128;
	sub_823AD738(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710138
	if (!ctx.cr6.eq) goto loc_82710138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82710150
	goto loc_82710150;
loc_82710138:
	// bl 0x823ab588
	ctx.lr = 0x8271013C;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82710150
	if (ctx.cr6.eq) goto loc_82710150;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x82710150;
	sub_82400188(ctx, base);
loc_82710150:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710168"))) PPC_WEAK_FUNC(sub_82710168);
PPC_FUNC_IMPL(__imp__sub_82710168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82710170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270f5b0
	ctx.lr = 0x8271017C;
	sub_8270F5B0(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// bl 0x824ba060
	ctx.lr = 0x8271018C;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x827101e0
	if (ctx.cr0.eq) goto loc_827101E0;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827101e0
	if (!ctx.cr6.gt) goto loc_827101E0;
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827101B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271dab0
	ctx.lr = 0x827101CC;
	sub_8271DAB0(ctx, base);
	// stw r3,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r3.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x827101DC;
	sub_8271DB88(ctx, base);
	// stfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_827101E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827101E8"))) PPC_WEAK_FUNC(sub_827101E8);
PPC_FUNC_IMPL(__imp__sub_827101E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827101F0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r29,r7,128
	ctx.r29.u64 = ctx.r7.u64 | 128;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82710260;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x82710298;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827102d0
	if (ctx.cr6.eq) goto loc_827102D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827102C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x827102d4
	goto loc_827102D4;
loc_827102D0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_827102D4:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82710320;
	sub_82331120(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710330"))) PPC_WEAK_FUNC(sub_82710330);
PPC_FUNC_IMPL(__imp__sub_82710330) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82710108
	sub_82710108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710338"))) PPC_WEAK_FUNC(sub_82710338);
PPC_FUNC_IMPL(__imp__sub_82710338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17716
	ctx.r3.s64 = ctx.r11.s64 + -17716;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710348"))) PPC_WEAK_FUNC(sub_82710348);
PPC_FUNC_IMPL(__imp__sub_82710348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82710380
	if (ctx.cr6.eq) goto loc_82710380;
	// bl 0x823ace88
	ctx.lr = 0x82710370;
	sub_823ACE88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710380
	if (!ctx.cr6.eq) goto loc_82710380;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271038c
	goto loc_8271038C;
loc_82710380:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x8271038C;
	sub_8233ECC8(ctx, base);
loc_8271038C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827103A8"))) PPC_WEAK_FUNC(sub_827103A8);
PPC_FUNC_IMPL(__imp__sub_827103A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ace88
	sub_823ACE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827103B0"))) PPC_WEAK_FUNC(sub_827103B0);
PPC_FUNC_IMPL(__imp__sub_827103B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3232
	ctx.r3.s64 = 3232;
	// bl 0x82833108
	ctx.lr = 0x827103D0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82710420
	if (ctx.cr0.eq) goto loc_82710420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x827103E4;
	sub_8233EDC0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,32176
	ctx.r11.s64 = ctx.r11.s64 + 32176;
	// addi r10,r10,-32168
	ctx.r10.s64 = ctx.r10.s64 + -32168;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// stw r11,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r11.u32);
	// lwz r11,3220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3220);
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
	// b 0x82710424
	goto loc_82710424;
loc_82710420:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82710424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710440"))) PPC_WEAK_FUNC(sub_82710440);
PPC_FUNC_IMPL(__imp__sub_82710440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ace88
	ctx.lr = 0x82710460;
	sub_823ACE88(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710470
	if (!ctx.cr6.eq) goto loc_82710470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82710488
	goto loc_82710488;
loc_82710470:
	// bl 0x82394fc8
	ctx.lr = 0x82710474;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82710488
	if (ctx.cr6.eq) goto loc_82710488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x82710488;
	sub_8233EBA0(ctx, base);
loc_82710488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827104A0"))) PPC_WEAK_FUNC(sub_827104A0);
PPC_FUNC_IMPL(__imp__sub_827104A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827104b0
	if (ctx.cr6.eq) goto loc_827104B0;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// b 0x827104b4
	goto loc_827104B4;
loc_827104B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827104B4:
	// stw r11,3220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3220, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827104C0"))) PPC_WEAK_FUNC(sub_827104C0);
PPC_FUNC_IMPL(__imp__sub_827104C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,32136
	ctx.r3.s64 = ctx.r11.s64 + 32136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827104D0"))) PPC_WEAK_FUNC(sub_827104D0);
PPC_FUNC_IMPL(__imp__sub_827104D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82710508
	if (ctx.cr6.eq) goto loc_82710508;
	// bl 0x827112b8
	ctx.lr = 0x827104F8;
	sub_827112B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710508
	if (!ctx.cr6.eq) goto loc_82710508;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82710514
	goto loc_82710514;
loc_82710508:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82710514;
	sub_82333C70(ctx, base);
loc_82710514:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710530"))) PPC_WEAK_FUNC(sub_82710530);
PPC_FUNC_IMPL(__imp__sub_82710530) {
	PPC_FUNC_PROLOGUE();
	// b 0x827112b8
	sub_827112B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710538"))) PPC_WEAK_FUNC(sub_82710538);
PPC_FUNC_IMPL(__imp__sub_82710538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x82710554;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827105ac
	if (ctx.cr0.eq) goto loc_827105AC;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-32112
	ctx.r9.s64 = ctx.r9.s64 + -32112;
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
	// b 0x827105b0
	goto loc_827105B0;
loc_827105AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827105B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827105C8"))) PPC_WEAK_FUNC(sub_827105C8);
PPC_FUNC_IMPL(__imp__sub_827105C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827112b8
	ctx.lr = 0x827105E8;
	sub_827112B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827105fc
	if (ctx.cr6.eq) goto loc_827105FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827105FC;
	sub_82333B08(ctx, base);
loc_827105FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82710618"))) PPC_WEAK_FUNC(sub_82710618);
PPC_FUNC_IMPL(__imp__sub_82710618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82710620;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x82710630;
	sub_8270B320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f0,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// lfs f13,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,16648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16648);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,20184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20184);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r8,9504
	ctx.r8.s64 = ctx.r8.s64 + 9504;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r5,10544
	ctx.r5.s64 = ctx.r5.s64 + 10544;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r4,18524
	ctx.r4.s64 = ctx.r4.s64 + 18524;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r3,-12696
	ctx.r3.s64 = -832045056;
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r4.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r30,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// lfs f13,-28788(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r3,6717
	ctx.r3.u64 = ctx.r3.u64 | 6717;
	// lfs f12,32708(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32708);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-25080(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25080);
	ctx.f11.f64 = double(temp.f32);
	// stw r3,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r3.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,696(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f12,1560(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f11,1552(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r28,132(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,136(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r10.u32);
	// stw r9,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r9.u32);
	// stw r8,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r8.u32);
	// stw r7,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r7.u32);
	// stw r6,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r6.u32);
	// stw r5,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r5.u32);
	// stw r4,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r4.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r29,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r29.u32);
	// stw r28,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r28.u32);
	// stw r27,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r27.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// stw r10,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r10.u32);
	// stw r9,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r9.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710788"))) PPC_WEAK_FUNC(sub_82710788);
PPC_FUNC_IMPL(__imp__sub_82710788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r5,1652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x827107BC;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x827107C4;
	sub_8270BA30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827107D8"))) PPC_WEAK_FUNC(sub_827107D8);
PPC_FUNC_IMPL(__imp__sub_827107D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827107E0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82710ae4
	if (!ctx.cr6.eq) goto loc_82710AE4;
	// lwz r30,1568(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// bl 0x82a4ea80
	ctx.lr = 0x8271080C;
	sub_82A4EA80(ctx, base);
	// lfs f11,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,1584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f12.f64 = double(temp.f32);
	// li r5,28
	ctx.r5.s64 = 28;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8271084C;
	sub_82A4EA80(ctx, base);
	// lfs f0,1592(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f13,1596(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f12,1588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stw r10,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r10.u32);
	// stw r9,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r9.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r29,r31,1588
	ctx.r29.s64 = ctx.r31.s64 + 1588;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r11.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r10.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r9,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r9.u32);
	// lwz r30,1572(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82710ae4
	if (ctx.cr6.eq) goto loc_82710AE4;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x827108CC;
	sub_82A4EA80(ctx, base);
	// lfs f11,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,1584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f12.f64 = double(temp.f32);
	// li r5,28
	ctx.r5.s64 = 28;
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8271090C;
	sub_82A4EA80(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r10.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stw r9,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r9.u32);
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r11.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 324, ctx.r10.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r9.u32);
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// bl 0x82a4ea80
	ctx.lr = 0x82710980;
	sub_82A4EA80(ctx, base);
	// lfs f31,1560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827109b0
	if (!ctx.cr6.lt) goto loc_827109B0;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// bl 0x82a4ea80
	ctx.lr = 0x827109A4;
	sub_82A4EA80(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82710ae4
	if (ctx.cr6.lt) goto loc_82710AE4;
loc_827109B0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r10.u32);
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
	ctx.lr = 0x827109E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827109fc
	if (!ctx.cr6.gt) goto loc_827109FC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82710ad0
	goto loc_82710AD0;
loc_827109FC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82710a9c
	if (!ctx.cr6.eq) goto loc_82710A9C;
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
	ctx.lr = 0x82710A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82710a7c
	if (!ctx.cr6.gt) goto loc_82710A7C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82710A38:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82710a68
	if (!ctx.cr6.eq) goto loc_82710A68;
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
	ctx.lr = 0x82710A60;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82710A68:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82710a38
	if (ctx.cr6.lt) goto loc_82710A38;
loc_82710A7C:
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
	ctx.lr = 0x82710A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82710A9C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82710ad0
	if (!ctx.cr0.eq) goto loc_82710AD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82710ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82710ad0
	if (ctx.cr0.eq) goto loc_82710AD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82710AD0;
	sub_82410060(ctx, base);
loc_82710AD0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82710AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82710AE4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710AF0"))) PPC_WEAK_FUNC(sub_82710AF0);
PPC_FUNC_IMPL(__imp__sub_82710AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82710AF8;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82710b2c
	if (ctx.cr6.eq) goto loc_82710B2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82710B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82710b30
	goto loc_82710B30;
loc_82710B2C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82710B30:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r4,26666
	ctx.r4.s64 = 1747582976;
	// lwz r9,1608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1612);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,1600(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1600);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// ori r4,r4,18444
	ctx.r4.u64 = ctx.r4.u64 | 18444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82710cb8
	ctx.lr = 0x82710B88;
	sub_82710CB8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,1644(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r28,1632(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1632);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r27,1640(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// lfs f3,1552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// stw r3,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r3.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82331120
	ctx.lr = 0x82710BE0;
	sub_82331120(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r8,1604(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r11,-25224
	ctx.r3.s64 = ctx.r11.s64 + -25224;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r9,1600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// lwz r29,1620(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r28,1608(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82710C20;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x82710cb8
	ctx.lr = 0x82710C58;
	sub_82710CB8(ctx, base);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lfs f3,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f3.f64 = double(temp.f32);
	// ld r5,1632(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1632);
	// lfs f1,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f1.f64 = double(temp.f32);
	// lwz r29,1640(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82710CA8;
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

__attribute__((alias("__imp__sub_82710CB8"))) PPC_WEAK_FUNC(sub_82710CB8);
PPC_FUNC_IMPL(__imp__sub_82710CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82710CC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// std r10,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r10.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x824113a0
	ctx.lr = 0x82710CE4;
	sub_824113A0(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x82710D1C;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82710d54
	if (ctx.cr0.eq) goto loc_82710D54;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r9,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r9.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// stw r6,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
loc_82710D54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82710D60"))) PPC_WEAK_FUNC(sub_82710D60);
PPC_FUNC_IMPL(__imp__sub_82710D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82710D68;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61744
	ctx.lr = 0x82710D70;
	__savefpr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x829c35d8
	ctx.lr = 0x82710D90;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,620
	ctx.r11.s64 = ctx.r3.s64 + 620;
	// bne 0x82710da0
	if (!ctx.cr0.eq) goto loc_82710DA0;
	// addi r11,r31,1632
	ctx.r11.s64 = ctx.r31.s64 + 1632;
loc_82710DA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r30,r31,1932
	ctx.r30.s64 = ctx.r31.s64 + 1932;
	// addi r28,r31,1920
	ctx.r28.s64 = ctx.r31.s64 + 1920;
	// stw r10,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r10.u32);
	// lfs f11,912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r10.u32);
	// lwz r10,1932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// lwz r9,1936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,1940(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,1924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,1928(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,1932(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,1936(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1936);
	ctx.f10.f64 = double(temp.f32);
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// fsubs f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f3,1920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1920);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fmuls f9,f2,f2
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f12,f4,f3
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f13,f8,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f13
	ctx.f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsqrts f28,f0
	ctx.f28.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f31,f11
	ctx.cr6.compare(ctx.f31.f64, ctx.f11.f64);
	// bge cr6,0x82710ef8
	if (!ctx.cr6.lt) goto loc_82710EF8;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x82710E64;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82710eac
	if (ctx.cr0.eq) goto loc_82710EAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r23,3220(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3220);
	// bl 0x82833180
	ctx.lr = 0x82710E7C;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r24,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r24.u32);
	// addi r11,r11,-32112
	ctx.r11.s64 = ctx.r11.s64 + -32112;
	// stw r23,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r23.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r9,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r9.u32);
	// b 0x82710eb0
	goto loc_82710EB0;
loc_82710EAC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82710EB0:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82710EC0;
	sub_82833A30(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82710EC8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82710ee8
	if (ctx.cr0.eq) goto loc_82710EE8;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x824f7c50
	ctx.lr = 0x82710EE0;
	sub_824F7C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82710eec
	goto loc_82710EEC;
loc_82710EE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82710EEC:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82710EF8;
	sub_82833A30(ctx, base);
loc_82710EF8:
	// lwz r11,1956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82710f30
	if (!ctx.cr6.eq) goto loc_82710F30;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82710f30
	if (ctx.cr6.lt) goto loc_82710F30;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// stw r10,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r10.u32);
	// stw r9,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r9.u32);
	// b 0x82710fa8
	goto loc_82710FA8;
loc_82710F30:
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,1944(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// lwz r8,1948(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f0,f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fsqrts f28,f0
	ctx.f28.f64 = double(float(sqrt(ctx.f0.f64)));
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
loc_82710FA8:
	// lfs f0,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fmadds f13,f0,f27,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64 + ctx.f13.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f12,3192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,23784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23784);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f28.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,3184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	ctx.f13.f64 = double(temp.f32);
	// fabs f30,f0
	ctx.f30.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadds f0,f13,f30,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x82710FE8;
	sub_82A4E038(ctx, base);
	// lfs f0,3188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3188);
	ctx.f0.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f13,3196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3196);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x82711000;
	sub_82A4E038(ctx, base);
	// lfs f0,3176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3176);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,3180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,3168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f11,f30,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f1,f11,f29
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x8271102C;
	sub_82A4E038(ctx, base);
	// lfs f0,3164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3172(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3172);
	ctx.f13.f64 = double(temp.f32);
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x82711044;
	sub_82A4E038(ctx, base);
	// lfs f0,3152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,3156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1856);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f11,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f9,f12,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bge cr6,0x82711098
	if (!ctx.cr6.lt) goto loc_82711098;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x82711098
	if (ctx.cr6.eq) goto loc_82711098;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82711098:
	// lfs f13,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1860);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x827110fc
	if (!ctx.cr6.gt) goto loc_827110FC;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x827110fc
	if (ctx.cr6.eq) goto loc_827110FC;
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f13,f9,f31
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f13,f13,f31,f9
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fsel f0,f8,f31,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fneg f9,f13
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f13,f9,f11,f13
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f0,f8,f11,f0
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_827110FC:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,13868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82711120
	if (ctx.cr6.eq) goto loc_82711120;
	// lfs f0,3160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a4e038
	ctx.lr = 0x82711120;
	sub_82A4E038(ctx, base);
loc_82711120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r31,3200
	ctx.r5.s64 = ctx.r31.s64 + 3200;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271115C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f27.f64));
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61790
	ctx.lr = 0x827111DC;
	__restfpr_27(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827111E0"))) PPC_WEAK_FUNC(sub_827111E0);
PPC_FUNC_IMPL(__imp__sub_827111E0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824395b8
	ctx.lr = 0x827111F4;
	sub_824395B8(ctx, base);
	// lis r4,-27335
	ctx.r4.s64 = -1791426560;
	// ori r4,r4,29187
	ctx.r4.u64 = ctx.r4.u64 | 29187;
	// bl 0x824f2770
	ctx.lr = 0x82711200;
	sub_824F2770(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711210"))) PPC_WEAK_FUNC(sub_82711210);
PPC_FUNC_IMPL(__imp__sub_82711210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23580);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82711250
	if (!ctx.cr0.eq) goto loc_82711250;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,23580(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23580, ctx.r11.u32);
	// addi r3,r9,32136
	ctx.r3.s64 = ctx.r9.s64 + 32136;
	// bl 0x82816528
	ctx.lr = 0x82711248;
	sub_82816528(ctx, base);
	// stw r3,23576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23576, ctx.r3.u32);
	// b 0x82711254
	goto loc_82711254;
loc_82711250:
	// lwz r3,23576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23576);
loc_82711254:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711268"))) PPC_WEAK_FUNC(sub_82711268);
PPC_FUNC_IMPL(__imp__sub_82711268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827112b8
	ctx.lr = 0x82711288;
	sub_827112B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271129C;
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

__attribute__((alias("__imp__sub_827112B8"))) PPC_WEAK_FUNC(sub_827112B8);
PPC_FUNC_IMPL(__imp__sub_827112B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23584
	ctx.r31.s64 = ctx.r11.s64 + 23584;
	// lwz r11,23588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23588);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82711300
	if (!ctx.cr0.eq) goto loc_82711300;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32032
	ctx.r9.s64 = ctx.r9.s64 + -32032;
	// stw r11,23588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23588, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30096
	ctx.r3.s64 = ctx.r11.s64 + 30096;
	// bl 0x82a4c758
	ctx.lr = 0x82711300;
	sub_82A4C758(ctx, base);
loc_82711300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711318"))) PPC_WEAK_FUNC(sub_82711318);
PPC_FUNC_IMPL(__imp__sub_82711318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82710440
	sub_82710440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711320"))) PPC_WEAK_FUNC(sub_82711320);
PPC_FUNC_IMPL(__imp__sub_82711320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17172
	ctx.r3.s64 = ctx.r11.s64 + -17172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711330"))) PPC_WEAK_FUNC(sub_82711330);
PPC_FUNC_IMPL(__imp__sub_82711330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82711368
	if (ctx.cr6.eq) goto loc_82711368;
	// bl 0x823ae720
	ctx.lr = 0x82711358;
	sub_823AE720(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82711368
	if (!ctx.cr6.eq) goto loc_82711368;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82711374
	goto loc_82711374;
loc_82711368:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x82711374;
	sub_824001E8(ctx, base);
loc_82711374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711390"))) PPC_WEAK_FUNC(sub_82711390);
PPC_FUNC_IMPL(__imp__sub_82711390) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ae720
	sub_823AE720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711398"))) PPC_WEAK_FUNC(sub_82711398);
PPC_FUNC_IMPL(__imp__sub_82711398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x827113B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827113c8
	if (ctx.cr0.eq) goto loc_827113C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82711430
	ctx.lr = 0x827113C4;
	sub_82711430(ctx, base);
	// b 0x827113cc
	goto loc_827113CC;
loc_827113C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827113CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827113E0"))) PPC_WEAK_FUNC(sub_827113E0);
PPC_FUNC_IMPL(__imp__sub_827113E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ae720
	ctx.lr = 0x82711400;
	sub_823AE720(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82711414
	if (ctx.cr6.eq) goto loc_82711414;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x82711414;
	sub_82400188(ctx, base);
loc_82711414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711430"))) PPC_WEAK_FUNC(sub_82711430);
PPC_FUNC_IMPL(__imp__sub_82711430) {
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
	// bl 0x823fffc8
	ctx.lr = 0x82711450;
	sub_823FFFC8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r11,-31944
	ctx.r11.s64 = ctx.r11.s64 + -31944;
	// addi r10,r10,-30896
	ctx.r10.s64 = ctx.r10.s64 + -30896;
	// addi r9,r9,-30844
	ctx.r9.s64 = ctx.r9.s64 + -30844;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lwz r11,1556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lfs f0,1604(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711510"))) PPC_WEAK_FUNC(sub_82711510);
PPC_FUNC_IMPL(__imp__sub_82711510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82711518;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// li r7,-1
	ctx.r7.s64 = -1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x823cf190
	ctx.lr = 0x82711564;
	sub_823CF190(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stfs f31,1604(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r6,228(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r27,280(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r26,252(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r25,300(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r29,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r29.u32);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r28,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r28.u32);
	// stw r10,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r10.u32);
	// stw r9,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r9.u32);
	// stw r8,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r8.u32);
	// stw r7,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r7.u32);
	// stw r6,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r6.u32);
	// stw r5,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r5.u32);
	// stw r4,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r4.u32);
	// stw r3,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r3.u32);
	// stw r27,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r27.u32);
	// stw r26,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r26.u32);
	// stw r25,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r25.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827115E0"))) PPC_WEAK_FUNC(sub_827115E0);
PPC_FUNC_IMPL(__imp__sub_827115E0) {
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
	// bl 0x8270ba30
	ctx.lr = 0x827115F8;
	sub_8270BA30(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,1604(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82711638
	if (!ctx.cr6.gt) goto loc_82711638;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22504
	ctx.r11.s64 = ctx.r11.s64 + -22504;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82711a40
	ctx.lr = 0x82711634;
	sub_82711A40(ctx, base);
	// b 0x8271164c
	goto loc_8271164C;
loc_82711638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8271164C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8271164C:
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

__attribute__((alias("__imp__sub_82711660"))) PPC_WEAK_FUNC(sub_82711660);
PPC_FUNC_IMPL(__imp__sub_82711660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82711668;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f29,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// lwz r30,1576(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// bl 0x824090e0
	ctx.lr = 0x82711694;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827116e8
	if (ctx.cr0.eq) goto loc_827116E8;
	// lwa r11,1576(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 1576));
	// lfs f12,7596(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	ctx.f12.f64 = double(temp.f32);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// fadds f31,f12,f29
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,7004(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6708);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f0.u64);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_827116E8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f13,1568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// lfs f11,1552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r10,-17172
	ctx.r3.s64 = ctx.r10.s64 + -17172;
	// lfs f10,1556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,1560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lwz r29,1596(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r28,r9,4232
	ctx.r28.u64 = ctx.r9.u64 | 4232;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8271175C;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x82711798;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827117c4
	if (ctx.cr6.eq) goto loc_827117C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827117BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x827117c8
	goto loc_827117C8;
loc_827117C4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_827117C8:
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r29,1580(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1580);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r28,1588(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// lwz r9,1608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x82711810;
	sub_82331120(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_82711828"))) PPC_WEAK_FUNC(sub_82711828);
PPC_FUNC_IMPL(__imp__sub_82711828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bc7b8
	ctx.lr = 0x82711840;
	sub_829BC7B8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r31,1216
	ctx.r4.s64 = ctx.r31.s64 + 1216;
	// addi r5,r11,-32012
	ctx.r5.s64 = ctx.r11.s64 + -32012;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8271185C;
	sub_824F5EE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711870"))) PPC_WEAK_FUNC(sub_82711870);
PPC_FUNC_IMPL(__imp__sub_82711870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c4e48
	ctx.lr = 0x8271188C;
	sub_829C4E48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827118bc
	if (!ctx.cr6.eq) goto loc_827118BC;
	// addi r11,r31,1612
	ctx.r11.s64 = ctx.r31.s64 + 1612;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x827118B0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_827118BC:
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

__attribute__((alias("__imp__sub_827118D8"))) PPC_WEAK_FUNC(sub_827118D8);
PPC_FUNC_IMPL(__imp__sub_827118D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827118E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x827118F0;
	sub_829C5148(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82711974
	if (!ctx.cr6.eq) goto loc_82711974;
	// addi r30,r31,1612
	ctx.r30.s64 = ctx.r31.s64 + 1612;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82711918;
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
	ctx.lr = 0x8271193C;
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
	ctx.lr = 0x82711950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82711974
	if (!ctx.cr0.eq) goto loc_82711974;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82711968;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82711974:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711980"))) PPC_WEAK_FUNC(sub_82711980);
PPC_FUNC_IMPL(__imp__sub_82711980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c63e8
	ctx.lr = 0x827119A0;
	sub_829C63E8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-31968
	ctx.r3.s64 = ctx.r11.s64 + -31968;
	// bl 0x82816528
	ctx.lr = 0x827119AC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x827119e0
	if (!ctx.cr6.eq) goto loc_827119E0;
	// lwz r11,1444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827119e0
	if (!ctx.cr6.eq) goto loc_827119E0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r5,1612(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x827119E0;
	sub_823CF190(ctx, base);
loc_827119E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827119F8"))) PPC_WEAK_FUNC(sub_827119F8);
PPC_FUNC_IMPL(__imp__sub_827119F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,656(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// bl 0x8281bb18
	ctx.lr = 0x82711A24;
	sub_8281BB18(ctx, base);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x8281d6f8
	ctx.lr = 0x82711A2C;
	sub_8281D6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711A40"))) PPC_WEAK_FUNC(sub_82711A40);
PPC_FUNC_IMPL(__imp__sub_82711A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82711A48;
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
	ctx.lr = 0x82711A6C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82711b04
	if (!ctx.cr0.eq) goto loc_82711B04;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82711a8c
	if (!ctx.cr6.eq) goto loc_82711A8C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82711A8C:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823ae720
	ctx.lr = 0x82711A94;
	sub_823AE720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82711AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82711AB4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82711af0
	if (ctx.cr0.eq) goto loc_82711AF0;
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
	// b 0x82711af4
	goto loc_82711AF4;
loc_82711AF0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82711AF4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82711B00;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82711B04:
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
	ctx.lr = 0x82711B20;
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

__attribute__((alias("__imp__sub_82711B30"))) PPC_WEAK_FUNC(sub_82711B30);
PPC_FUNC_IMPL(__imp__sub_82711B30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827113e0
	sub_827113E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711B38"))) PPC_WEAK_FUNC(sub_82711B38);
PPC_FUNC_IMPL(__imp__sub_82711B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17548
	ctx.r3.s64 = ctx.r11.s64 + -17548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711B48"))) PPC_WEAK_FUNC(sub_82711B48);
PPC_FUNC_IMPL(__imp__sub_82711B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82711b80
	if (ctx.cr6.eq) goto loc_82711B80;
	// bl 0x823ad598
	ctx.lr = 0x82711B70;
	sub_823AD598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82711b80
	if (!ctx.cr6.eq) goto loc_82711B80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82711b8c
	goto loc_82711B8C;
loc_82711B80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361418
	ctx.lr = 0x82711B8C;
	sub_82361418(ctx, base);
loc_82711B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711BA8"))) PPC_WEAK_FUNC(sub_82711BA8);
PPC_FUNC_IMPL(__imp__sub_82711BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ad598
	sub_823AD598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711BB0"))) PPC_WEAK_FUNC(sub_82711BB0);
PPC_FUNC_IMPL(__imp__sub_82711BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x82711BD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82711c10
	if (ctx.cr0.eq) goto loc_82711C10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x82711BE4;
	sub_82360A00(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-30816
	ctx.r11.s64 = ctx.r11.s64 + -30816;
	// addi r10,r10,-29760
	ctx.r10.s64 = ctx.r10.s64 + -29760;
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
	// b 0x82711c14
	goto loc_82711C14;
loc_82711C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82711C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711C30"))) PPC_WEAK_FUNC(sub_82711C30);
PPC_FUNC_IMPL(__imp__sub_82711C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ad598
	ctx.lr = 0x82711C50;
	sub_823AD598(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82711c64
	if (ctx.cr6.eq) goto loc_82711C64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823614f8
	ctx.lr = 0x82711C64;
	sub_823614F8(ctx, base);
loc_82711C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711C80"))) PPC_WEAK_FUNC(sub_82711C80);
PPC_FUNC_IMPL(__imp__sub_82711C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82711d98
	sub_82711D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711C88"))) PPC_WEAK_FUNC(sub_82711C88);
PPC_FUNC_IMPL(__imp__sub_82711C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x8270f370
	ctx.lr = 0x82711CA0;
	sub_8270F370(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,-31120
	ctx.r11.s64 = ctx.r11.s64 + -31120;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-30064
	ctx.r10.s64 = ctx.r10.s64 + -30064;
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
	// lis r5,-23248
	ctx.r5.s64 = -1523580928;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,15270
	ctx.r5.u64 = ctx.r5.u64 | 15270;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82711CF0;
	sub_823CF190(ctx, base);
	// lis r11,1440
	ctx.r11.s64 = 94371840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,53920
	ctx.r11.u64 = ctx.r11.u64 | 53920;
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82711D18"))) PPC_WEAK_FUNC(sub_82711D18);
PPC_FUNC_IMPL(__imp__sub_82711D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82711D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// bl 0x8270f5b0
	ctx.lr = 0x82711D34;
	sub_8270F5B0(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x82711D3C;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82711d90
	if (ctx.cr0.eq) goto loc_82711D90;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82711d90
	if (!ctx.cr6.gt) goto loc_82711D90;
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82711D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271dab0
	ctx.lr = 0x82711D7C;
	sub_8271DAB0(ctx, base);
	// stw r3,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r3.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x82711D8C;
	sub_8271DB88(ctx, base);
	// stfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_82711D90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82711D98"))) PPC_WEAK_FUNC(sub_82711D98);
PPC_FUNC_IMPL(__imp__sub_82711D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82711DA0;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r28,r11,668
	ctx.r28.s64 = ctx.r11.s64 + 668;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lfs f0,1452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// lfs f13,1456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lwz r27,1460(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r31,r30,1452
	ctx.r31.s64 = ctx.r30.s64 + 1452;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ori r29,r11,16512
	ctx.r29.u64 = ctx.r11.u64 | 16512;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82711E18;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,152(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82708268
	ctx.lr = 0x82711E50;
	sub_82708268(ctx, base);
	// stw r3,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r3.u32);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82711e78
	if (ctx.cr6.eq) goto loc_82711E78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82711E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82711e7c
	goto loc_82711E7C;
loc_82711E78:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82711E7C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r27,1484(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// ld r26,1472(r30)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r25,1480(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1448(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x82331120
	ctx.lr = 0x82711ECC;
	sub_82331120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82711F18;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rldicr r10,r31,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x82711F50;
	sub_82708268(ctx, base);
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r3,1552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1552, ctx.r3.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x82711f88
	if (ctx.cr6.eq) goto loc_82711F88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82711F80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82711f8c
	goto loc_82711F8C;
loc_82711F88:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82711F8C:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82711FD0;
	sub_82331120(ctx, base);
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

__attribute__((alias("__imp__sub_82711FE0"))) PPC_WEAK_FUNC(sub_82711FE0);
PPC_FUNC_IMPL(__imp__sub_82711FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x824ba060
	ctx.lr = 0x82711FFC;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82712014
	if (ctx.cr0.eq) goto loc_82712014;
	// lwz r10,3424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r11,3340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3340);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82712014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712030"))) PPC_WEAK_FUNC(sub_82712030);
PPC_FUNC_IMPL(__imp__sub_82712030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82712038;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// addi r3,r11,668
	ctx.r3.s64 = ctx.r11.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ori r29,r7,16512
	ctx.r29.u64 = ctx.r7.u64 | 16512;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x827120A8;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x827120E0;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82712118
	if (ctx.cr6.eq) goto loc_82712118;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82712110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8271211c
	goto loc_8271211C;
loc_82712118:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8271211C:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82712168;
	sub_82331120(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712178"))) PPC_WEAK_FUNC(sub_82712178);
PPC_FUNC_IMPL(__imp__sub_82712178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82712180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,20416
	ctx.r29.s64 = ctx.r11.s64 + 20416;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// lfs f0,17820(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1564(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// bl 0x82711d18
	ctx.lr = 0x827121A4;
	sub_82711D18(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x827121AC;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// beq 0x827121e8
	if (ctx.cr0.eq) goto loc_827121E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// bl 0x82505970
	ctx.lr = 0x827121D0;
	sub_82505970(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r28,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-24552
	ctx.r11.s64 = ctx.r11.s64 + -24552;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x827121ec
	goto loc_827121EC;
loc_827121E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827121EC:
	// bl 0x82505910
	ctx.lr = 0x827121F0;
	sub_82505910(ctx, base);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r28,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712200"))) PPC_WEAK_FUNC(sub_82712200);
PPC_FUNC_IMPL(__imp__sub_82712200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82712208;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// addi r3,r7,668
	ctx.r3.s64 = ctx.r7.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82712270;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,16512
	ctx.r5.s64 = 16512;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x827122A8;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827122e0
	if (ctx.cr6.eq) goto loc_827122E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827122D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x827122e4
	goto loc_827122E4;
loc_827122E0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_827122E4:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,1448(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x82712330;
	sub_82331120(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712340"))) PPC_WEAK_FUNC(sub_82712340);
PPC_FUNC_IMPL(__imp__sub_82712340) {
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
	// bl 0x82711d18
	ctx.lr = 0x82712358;
	sub_82711D18(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x82712360;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82712380
	if (ctx.cr0.eq) goto loc_82712380;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,1560(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lfs f2,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825138f0
	ctx.lr = 0x8271237C;
	sub_825138F0(ctx, base);
	// b 0x82712384
	goto loc_82712384;
loc_82712380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82712384:
	// bl 0x82505910
	ctx.lr = 0x82712388;
	sub_82505910(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8271239C;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827123b0
	if (ctx.cr0.eq) goto loc_827123B0;
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// lwz r10,6516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6516);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_827123B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827123C8"))) PPC_WEAK_FUNC(sub_827123C8);
PPC_FUNC_IMPL(__imp__sub_827123C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x827123D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r11,r31,1452
	ctx.r11.s64 = ctx.r31.s64 + 1452;
	// addi r3,r7,668
	ctx.r3.s64 = ctx.r7.s64 + 668;
	// lwz r9,1452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lfs f0,1452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lfs f13,1456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r30,1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82712438;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,16512
	ctx.r5.s64 = 16512;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x82712470;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827124a8
	if (ctx.cr6.eq) goto loc_827124A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827124A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x827124ac
	goto loc_827124AC;
loc_827124A8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_827124AC:
	// ld r30,160(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x827124F8;
	sub_82331120(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712508"))) PPC_WEAK_FUNC(sub_82712508);
PPC_FUNC_IMPL(__imp__sub_82712508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// li r31,20
	ctx.r31.s64 = 20;
	// bl 0x824ba060
	ctx.lr = 0x82712524;
	sub_824BA060(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82712550
	if (ctx.cr0.eq) goto loc_82712550;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r10,10564
	ctx.r4.s64 = ctx.r10.s64 + 10564;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82712544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82712550
	if (!ctx.cr0.eq) goto loc_82712550;
	// li r31,20
	ctx.r31.s64 = 20;
loc_82712550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712568"))) PPC_WEAK_FUNC(sub_82712568);
PPC_FUNC_IMPL(__imp__sub_82712568) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82711c30
	sub_82711C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712570"))) PPC_WEAK_FUNC(sub_82712570);
PPC_FUNC_IMPL(__imp__sub_82712570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82712578;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82712594
	if (!ctx.cr6.eq) goto loc_82712594;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8271273c
	goto loc_8271273C;
loc_82712594:
	// lwz r10,2040(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// ori r10,r10,2050
	ctx.r10.u64 = ctx.r10.u64 | 2050;
	// stw r10,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r10.u32);
	// lwz r11,1692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827125b8
	if (!ctx.cr6.eq) goto loc_827125B8;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x827125c8
	goto loc_827125C8;
loc_827125B8:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_827125C8:
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29708
	ctx.r4.s64 = ctx.r11.s64 + -29708;
	// lwz r5,13872(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13872);
	// bl 0x82816c30
	ctx.lr = 0x827125E0;
	sub_82816C30(ctx, base);
	// lwz r11,13872(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13872);
	// addi r30,r31,2108
	ctx.r30.s64 = ctx.r31.s64 + 2108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,13872(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13872, ctx.r11.u32);
	// bl 0x8281d960
	ctx.lr = 0x827125F8;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827126a0
	if (ctx.cr0.eq) goto loc_827126A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8281dc68
	ctx.lr = 0x82712608;
	sub_8281DC68(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r28,140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x8271263c
	if (!ctx.cr6.eq) goto loc_8271263C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8271263C:
	// bl 0x824113a0
	ctx.lr = 0x82712640;
	sub_824113A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828165a8
	ctx.lr = 0x8271264C;
	sub_828165A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r28,2044(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// lwz r31,2040(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// bl 0x828165a8
	ctx.lr = 0x82712660;
	sub_828165A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8281d960
	ctx.lr = 0x8271266C;
	sub_8281D960(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x829c87d0
	ctx.lr = 0x8271269C;
	sub_829C87D0(ctx, base);
	// b 0x8271272c
	goto loc_8271272C;
loc_827126A0:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x827126d0
	if (!ctx.cr6.eq) goto loc_827126D0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_827126D0:
	// bl 0x824113a0
	ctx.lr = 0x827126D4;
	sub_824113A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x828165a8
	ctx.lr = 0x827126E4;
	sub_828165A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,2044(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// lwz r25,2040(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// bl 0x828165a8
	ctx.lr = 0x827126F8;
	sub_828165A8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,2072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x829c87d0
	ctx.lr = 0x8271272C;
	sub_829C87D0(ctx, base);
loc_8271272C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82712738;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8271273C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712748"))) PPC_WEAK_FUNC(sub_82712748);
PPC_FUNC_IMPL(__imp__sub_82712748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82712750;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x82712940
	if (ctx.cr6.eq) goto loc_82712940;
	// addi r29,r30,2108
	ctx.r29.s64 = ctx.r30.s64 + 2108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281d960
	ctx.lr = 0x82712770;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82712864
	if (ctx.cr0.eq) goto loc_82712864;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8281dc68
	ctx.lr = 0x82712780;
	sub_8281DC68(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82712864
	if (ctx.cr0.eq) goto loc_82712864;
	// lwz r11,592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,452(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x827127C4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x827127C8;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827127d8
	if (ctx.cr0.eq) goto loc_827127D8;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x827127dc
	goto loc_827127DC;
loc_827127D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827127DC:
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r30,r29,600
	ctx.r30.s64 = ctx.r29.s64 + 600;
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,416(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8271280C;
	sub_82A4EA80(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8271281C;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8271282C;
	sub_82A4EA80(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f12,500(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r10,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r10.u32);
	// stw r9,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r9.u32);
	// stw r8,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r8.u32);
	// b 0x8271293c
	goto loc_8271293C;
loc_82712864:
	// lwz r11,2048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// lwz r10,2068(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2068);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// lwz r11,2052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2052);
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// lwz r11,2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// lwz r11,2076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2076);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,2072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827128a0
	if (ctx.cr6.eq) goto loc_827128A0;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827128a4
	goto loc_827128A4;
loc_827128A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827128A4:
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// lwz r11,2056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2056);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,2060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2060);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,2064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lfs f0,2100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,2084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2084);
	// lfs f13,2104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,2080(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2080);
	// lwz r9,2092(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// lwz r11,2088(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,2096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82712908;
	sub_82A4EA80(ctx, base);
	// lwz r11,2080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2080);
	// lwz r10,2084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2084);
	// lfs f0,2104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,2088(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2088);
	// lfs f13,2100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,2092(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2092);
	// lfs f12,2096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,492(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f0,500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r10,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r10.u32);
	// stw r9,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r9.u32);
	// stw r8,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r8.u32);
loc_8271293C:
	// stfs f13,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
loc_82712940:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712948"))) PPC_WEAK_FUNC(sub_82712948);
PPC_FUNC_IMPL(__imp__sub_82712948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-29668
	ctx.r3.s64 = ctx.r11.s64 + -29668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712958"))) PPC_WEAK_FUNC(sub_82712958);
PPC_FUNC_IMPL(__imp__sub_82712958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82712990
	if (ctx.cr6.eq) goto loc_82712990;
	// bl 0x82712f98
	ctx.lr = 0x82712980;
	sub_82712F98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82712990
	if (!ctx.cr6.eq) goto loc_82712990;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8271299c
	goto loc_8271299C;
loc_82712990:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82713c80
	ctx.lr = 0x8271299C;
	sub_82713C80(ctx, base);
loc_8271299C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827129B8"))) PPC_WEAK_FUNC(sub_827129B8);
PPC_FUNC_IMPL(__imp__sub_827129B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82712f98
	sub_82712F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827129C0"))) PPC_WEAK_FUNC(sub_827129C0);
PPC_FUNC_IMPL(__imp__sub_827129C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82713b38
	sub_82713B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827129C8"))) PPC_WEAK_FUNC(sub_827129C8);
PPC_FUNC_IMPL(__imp__sub_827129C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x827129E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827129f8
	if (ctx.cr0.eq) goto loc_827129F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712a70
	ctx.lr = 0x827129F4;
	sub_82712A70(ctx, base);
	// b 0x827129fc
	goto loc_827129FC;
loc_827129F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827129FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712A10"))) PPC_WEAK_FUNC(sub_82712A10);
PPC_FUNC_IMPL(__imp__sub_82712A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82712f98
	ctx.lr = 0x82712A30;
	sub_82712F98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82712a40
	if (!ctx.cr6.eq) goto loc_82712A40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82712a58
	goto loc_82712A58;
loc_82712A40:
	// bl 0x82713b38
	ctx.lr = 0x82712A44;
	sub_82713B38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82712a58
	if (ctx.cr6.eq) goto loc_82712A58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82713970
	ctx.lr = 0x82712A58;
	sub_82713970(ctx, base);
loc_82712A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712A70"))) PPC_WEAK_FUNC(sub_82712A70);
PPC_FUNC_IMPL(__imp__sub_82712A70) {
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
	// bl 0x827130d8
	ctx.lr = 0x82712A90;
	sub_827130D8(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29640
	ctx.r11.s64 = ctx.r11.s64 + -29640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
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
	// lfs f0,1636(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// lfs f0,1640(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712B50"))) PPC_WEAK_FUNC(sub_82712B50);
PPC_FUNC_IMPL(__imp__sub_82712B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82713070
	ctx.lr = 0x82712B70;
	sub_82713070(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82712b80
	if (ctx.cr0.eq) goto loc_82712B80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82712B80;
	sub_82332DB8(ctx, base);
loc_82712B80:
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

__attribute__((alias("__imp__sub_82712BA0"))) PPC_WEAK_FUNC(sub_82712BA0);
PPC_FUNC_IMPL(__imp__sub_82712BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829146b0
	ctx.lr = 0x82712BB8;
	sub_829146B0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29640
	ctx.r10.s64 = ctx.r10.s64 + -29640;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lis r5,-29723
	ctx.r5.s64 = -1947926528;
	// stw r9,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r9.u32);
	// addi r4,r31,1656
	ctx.r4.s64 = ctx.r31.s64 + 1656;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,21796
	ctx.r5.u64 = ctx.r5.u64 | 21796;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82712C00;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712C18"))) PPC_WEAK_FUNC(sub_82712C18);
PPC_FUNC_IMPL(__imp__sub_82712C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82712C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r26,340(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82712d18
	if (ctx.cr6.eq) goto loc_82712D18;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8281dc68
	ctx.lr = 0x82712C48;
	sub_8281DC68(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82712d18
	if (ctx.cr0.eq) goto loc_82712D18;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwimi r11,r10,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,8,15,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x10000) | (ctx.r11.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,13024(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lwz r4,448(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82712C88;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82712C8C;
	sub_82333A20(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// addi r29,r30,476
	ctx.r29.s64 = ctx.r30.s64 + 476;
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82712CC4;
	sub_82A4EA80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r10,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r10.u32);
	// stw r9,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82712CEC;
	sub_82A4EA80(ctx, base);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82712D04;
	sub_82A4EA80(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// b 0x82712d6c
	goto loc_82712D6C;
loc_82712D18:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r6,1928
	ctx.r6.s64 = 1928;
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r28,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r28.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r6.u32);
	// stfs f0,1636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1636, temp.u32);
	// stw r27,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r27.u32);
	// stfs f0,1640(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1640, temp.u32);
	// stw r29,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r29.u32);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r9,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r9.u32);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r8,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r8.u32);
	// stw r7,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r7.u32);
	// stw r5,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r5.u32);
loc_82712D6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1572, ctx.r11.u8);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712D98"))) PPC_WEAK_FUNC(sub_82712D98);
PPC_FUNC_IMPL(__imp__sub_82712D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82712DA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829148e0
	ctx.lr = 0x82712DAC;
	sub_829148E0(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82712ea8
	if (!ctx.cr6.gt) goto loc_82712EA8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82712DC0:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82712df8
	if (ctx.cr6.eq) goto loc_82712DF8;
	// bl 0x82437d78
	ctx.lr = 0x82712DD4;
	sub_82437D78(ctx, base);
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
	ctx.lr = 0x82712DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82712dfc
	if (!ctx.cr0.eq) goto loc_82712DFC;
loc_82712DF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82712DFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82712e94
	if (ctx.cr6.eq) goto loc_82712E94;
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r10,2040(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2040, ctx.r10.u32);
	// lwz r10,1588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// stw r10,2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2044, ctx.r10.u32);
	// lwz r10,1592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// stw r10,2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2048, ctx.r10.u32);
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// stw r10,2052(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2052, ctx.r10.u32);
	// lwz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// stw r10,2072(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2072, ctx.r10.u32);
	// lwz r10,1600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// stw r10,2056(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2056, ctx.r10.u32);
	// lwz r10,1604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stw r10,2060(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2060, ctx.r10.u32);
	// lwz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stw r10,2064(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2064, ctx.r10.u32);
	// lwz r10,1620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stw r10,2076(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2076, ctx.r10.u32);
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r9,1628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r8,1632(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// stw r10,2080(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2080, ctx.r10.u32);
	// stw r9,2084(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2084, ctx.r9.u32);
	// stw r8,2088(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2088, ctx.r8.u32);
	// lfs f0,1636(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2100(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2100, temp.u32);
	// lfs f0,1640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 2104, temp.u32);
	// lwz r10,1644(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r9,1648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// lwz r8,1652(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// stw r10,2108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2108, ctx.r10.u32);
	// stw r9,2112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2112, ctx.r9.u32);
	// stw r8,2116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2116, ctx.r8.u32);
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// stw r10,2068(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2068, ctx.r10.u32);
loc_82712E94:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82712dc0
	if (ctx.cr6.lt) goto loc_82712DC0;
loc_82712EA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82712EB0"))) PPC_WEAK_FUNC(sub_82712EB0);
PPC_FUNC_IMPL(__imp__sub_82712EB0) {
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
	ctx.lr = 0x82712EC4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82712ed8
	if (ctx.cr0.eq) goto loc_82712ED8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82712ba0
	ctx.lr = 0x82712ED4;
	sub_82712BA0(ctx, base);
	// b 0x82712edc
	goto loc_82712EDC;
loc_82712ED8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82712EDC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712EF0"))) PPC_WEAK_FUNC(sub_82712EF0);
PPC_FUNC_IMPL(__imp__sub_82712EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,23564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23564);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82712f30
	if (!ctx.cr0.eq) goto loc_82712F30;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23564, ctx.r11.u32);
	// addi r3,r9,-29668
	ctx.r3.s64 = ctx.r9.s64 + -29668;
	// bl 0x82816528
	ctx.lr = 0x82712F28;
	sub_82816528(ctx, base);
	// stw r3,23560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23560, ctx.r3.u32);
	// b 0x82712f34
	goto loc_82712F34;
loc_82712F30:
	// lwz r3,23560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23560);
loc_82712F34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712F48"))) PPC_WEAK_FUNC(sub_82712F48);
PPC_FUNC_IMPL(__imp__sub_82712F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82712f98
	ctx.lr = 0x82712F68;
	sub_82712F98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82712F7C;
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

__attribute__((alias("__imp__sub_82712F98"))) PPC_WEAK_FUNC(sub_82712F98);
PPC_FUNC_IMPL(__imp__sub_82712F98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,23568
	ctx.r31.s64 = ctx.r11.s64 + 23568;
	// lwz r11,23572(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23572);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82712fe0
	if (!ctx.cr0.eq) goto loc_82712FE0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29340
	ctx.r9.s64 = ctx.r9.s64 + -29340;
	// stw r11,23572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23572, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x82a4c758
	ctx.lr = 0x82712FE0;
	sub_82A4C758(ctx, base);
loc_82712FE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82712FF8"))) PPC_WEAK_FUNC(sub_82712FF8);
PPC_FUNC_IMPL(__imp__sub_82712FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713010"))) PPC_WEAK_FUNC(sub_82713010);
PPC_FUNC_IMPL(__imp__sub_82713010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// lfs f0,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713038"))) PPC_WEAK_FUNC(sub_82713038);
PPC_FUNC_IMPL(__imp__sub_82713038) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713040"))) PPC_WEAK_FUNC(sub_82713040);
PPC_FUNC_IMPL(__imp__sub_82713040) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82713068
	if (!ctx.cr6.eq) goto loc_82713068;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82713068
	if (!ctx.cr6.eq) goto loc_82713068;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82713068:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82713070"))) PPC_WEAK_FUNC(sub_82713070);
PPC_FUNC_IMPL(__imp__sub_82713070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r30,1392
	ctx.r31.s64 = ctx.r30.s64 + 1392;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8249d938
	ctx.lr = 0x82713094;
	sub_8249D938(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8249d9b8
	ctx.lr = 0x8271309C;
	sub_8249D9B8(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8269b988
	ctx.lr = 0x827130A4;
	sub_8269B988(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8249d938
	ctx.lr = 0x827130AC;
	sub_8249D938(ctx, base);
	// addi r3,r30,584
	ctx.r3.s64 = ctx.r30.s64 + 584;
	// bl 0x8297b500
	ctx.lr = 0x827130B4;
	sub_8297B500(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82977778
	ctx.lr = 0x827130BC;
	sub_82977778(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827130D8"))) PPC_WEAK_FUNC(sub_827130D8);
PPC_FUNC_IMPL(__imp__sub_827130D8) {
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
	// bl 0x827131c0
	ctx.lr = 0x827130F8;
	sub_827131C0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28528
	ctx.r10.s64 = ctx.r10.s64 + -28528;
	// addic. r4,r30,584
	ctx.xer.ca = ctx.r30.u32 > 4294966711;
	ctx.r4.s64 = ctx.r30.s64 + 584;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// lwz r10,576(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	// stw r10,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r10.u32);
	// lwz r10,580(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// stw r10,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r10.u32);
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// stw r11,1388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1388, ctx.r11.u32);
	// beq 0x82713130
	if (ctx.cr0.eq) goto loc_82713130;
	// bl 0x8297b368
	ctx.lr = 0x82713130;
	sub_8297B368(ctx, base);
loc_82713130:
	// addi r4,r30,1392
	ctx.r4.s64 = ctx.r30.s64 + 1392;
	// addi r3,r31,1392
	ctx.r3.s64 = ctx.r31.s64 + 1392;
	// bl 0x8249da38
	ctx.lr = 0x8271313C;
	sub_8249DA38(ctx, base);
	// lwz r11,1524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r11.u32);
	// ld r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1528);
	// std r11,1528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1528, ctx.r11.u64);
	// lfs f0,1536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// lfs f0,1540(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// lfs f0,1544(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// lwz r11,1548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lwz r11,1556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lfs f0,1560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lbz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1572);
	// stb r11,1572(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1572, ctx.r11.u8);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827131C0"))) PPC_WEAK_FUNC(sub_827131C0);
PPC_FUNC_IMPL(__imp__sub_827131C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x827131C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82713428
	ctx.lr = 0x827131D8;
	sub_82713428(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,-28824
	ctx.r11.s64 = ctx.r11.s64 + -28824;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,372
	ctx.r11.s64 = ctx.r31.s64 + 372;
	// addi r4,r30,376
	ctx.r4.s64 = ctx.r30.s64 + 376;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8271320C;
	sub_82A4EA80(ctx, base);
	// addi r11,r30,412
	ctx.r11.s64 = ctx.r30.s64 + 412;
	// li r28,1
	ctx.r28.s64 = 1;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r27,r10,412
	ctx.r27.s64 = ctx.r10.s64 + 412;
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
loc_82713230:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x82873b58
	ctx.lr = 0x8271323C;
	sub_82873B58(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x82713230
	if (!ctx.cr0.lt) goto loc_82713230;
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// addi r4,r30,464
	ctx.r4.s64 = ctx.r30.s64 + 464;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x8271325C;
	sub_82873B58(ctx, base);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,496
	ctx.r29.s64 = ctx.r31.s64 + 496;
	// rlwimi r10,r9,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// addi r27,r30,496
	ctx.r27.s64 = ctx.r30.s64 + 496;
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// lwz r9,488(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwimi r9,r10,0,1,1
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,2,2
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,3,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,4,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,5,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x4000000) | (ctx.r9.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,6,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x2000000) | (ctx.r9.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,7,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1000000) | (ctx.r9.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// rlwimi r9,r10,0,8,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r9,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r9.u32);
	// lwz r10,492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r28,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r28.u32);
	// stw r28,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r28.u32);
	// stw r28,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r28.u32);
	// stw r28,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r28.u32);
	// beq cr6,0x827133a8
	if (ctx.cr6.eq) goto loc_827133A8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827133a8
	if (!ctx.cr6.gt) goto loc_827133A8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82713350
	if (ctx.cr0.eq) goto loc_82713350;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82713350;
	sub_82332C38(ctx, base);
loc_82713350:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827133a8
	if (!ctx.cr6.gt) goto loc_827133A8;
loc_82713360:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x82713374;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82713394
	if (ctx.cr0.eq) goto loc_82713394;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82713394;
	sub_82A4EA80(ctx, base);
loc_82713394:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82713360
	if (ctx.cr6.lt) goto loc_82713360;
loc_827133A8:
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lwz r11,540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lfs f0,544(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// lfs f0,552(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// lfs f0,556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lfs f0,560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	// stw r11,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// lfs f0,568(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// lfs f0,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82713428"))) PPC_WEAK_FUNC(sub_82713428);
PPC_FUNC_IMPL(__imp__sub_82713428) {
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
	// bl 0x82713558
	ctx.lr = 0x82713448;
	sub_82713558(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r11,r11,-29280
	ctx.r11.s64 = ctx.r11.s64 + -29280;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// li r5,128
	ctx.r5.s64 = 128;
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
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// ld r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 104);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// ld r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 112);
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827134F0;
	sub_82A4EA80(ctx, base);
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// addi r4,r30,280
	ctx.r4.s64 = ctx.r30.s64 + 280;
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// lfs f0,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x8271350C;
	sub_82873B58(ctx, base);
	// addi r4,r30,304
	ctx.r4.s64 = ctx.r30.s64 + 304;
	// addi r3,r31,304
	ctx.r3.s64 = ctx.r31.s64 + 304;
	// bl 0x82873b58
	ctx.lr = 0x82713518;
	sub_82873B58(ctx, base);
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r30,336
	ctx.r4.s64 = ctx.r30.s64 + 336;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82713538;
	sub_82A4EA80(ctx, base);
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

__attribute__((alias("__imp__sub_82713558"))) PPC_WEAK_FUNC(sub_82713558);
PPC_FUNC_IMPL(__imp__sub_82713558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-28984
	ctx.r10.s64 = ctx.r10.s64 + -28984;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

