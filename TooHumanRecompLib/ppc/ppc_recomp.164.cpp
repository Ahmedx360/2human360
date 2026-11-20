#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_829F6C88"))) PPC_WEAK_FUNC(sub_829F6C88);
PPC_FUNC_IMPL(__imp__sub_829F6C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829F6C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829f2a88
	ctx.lr = 0x829F6CB0;
	sub_829F2A88(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x829f2b18
	ctx.lr = 0x829F6CC4;
	sub_829F2B18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829f6d14
	if (!ctx.cr6.eq) goto loc_829F6D14;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829f6da0
	if (ctx.cr6.eq) goto loc_829F6DA0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_829F6CE0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F6CFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829f6ce0
	if (ctx.cr6.lt) goto loc_829F6CE0;
	// b 0x829f6da0
	goto loc_829F6DA0;
loc_829F6D14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x829f6db0
	ctx.lr = 0x829F6D20;
	sub_829F6DB0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x829f6d70
	if (ctx.cr6.eq) goto loc_829F6D70;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_829F6D34:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829f6d44
	if (ctx.cr6.eq) goto loc_829F6D44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829eea88
	ctx.lr = 0x829F6D44;
	sub_829EEA88(ctx, base);
loc_829F6D44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F6D5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829f6d34
	if (ctx.cr6.lt) goto loc_829F6D34;
loc_829F6D70:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x829f6bb0
	ctx.lr = 0x829F6DA0;
	sub_829F6BB0(ctx, base);
loc_829F6DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F6DB0"))) PPC_WEAK_FUNC(sub_829F6DB0);
PPC_FUNC_IMPL(__imp__sub_829F6DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-2456
	ctx.r11.s64 = ctx.r11.s64 + -2456;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x829f6de8
	if (!ctx.cr6.eq) goto loc_829F6DE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829f6df0
	goto loc_829F6DF0;
loc_829F6DE8:
	// rlwinm r3,r30,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82765d00
	ctx.lr = 0x829F6DF0;
	sub_82765D00(ctx, base);
loc_829F6DF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F6E20"))) PPC_WEAK_FUNC(sub_829F6E20);
PPC_FUNC_IMPL(__imp__sub_829F6E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f31,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lfs f1,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f5,f13,f12,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmuls f2,f10,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f30,f10,f12
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f29,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f4,f10,f11,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fnmsubs f5,f9,f11,f5
	ctx.f5.f64 = double(float(-(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// fmsubs f2,f9,f12,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fmadds f7,f9,f7,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmadds f12,f6,f12,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fnmsubs f10,f10,f8,f5
	ctx.f10.f64 = double(float(-(ctx.f10.f64 * ctx.f8.f64 - ctx.f5.f64)));
	// fmadds f4,f8,f6,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fnmsubs f7,f11,f6,f7
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f6.f64 - ctx.f7.f64)));
	// fnmsubs f12,f8,f9,f12
	ctx.f12.f64 = double(float(-(ctx.f8.f64 * ctx.f9.f64 - ctx.f12.f64)));
	// fmuls f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f10.f64));
	// fmadds f11,f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fmuls f6,f29,f12
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// fmuls f5,f31,f12
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f4,f1,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f13,f8,f13,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f9,f31,f11,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmsubs f8,f3,f10,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f6.f64));
	// fmsubs f7,f1,f10,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmadds f10,f31,f10,f4
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f12,f3,f12,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fnmsubs f9,f1,f11,f8
	ctx.f9.f64 = double(float(-(ctx.f1.f64 * ctx.f11.f64 - ctx.f8.f64)));
	// fmadds f8,f29,f13,f7
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fnmsubs f10,f29,f11,f10
	ctx.f10.f64 = double(float(-(ctx.f29.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fnmsubs f12,f1,f13,f12
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// fnmsubs f12,f31,f13,f9
	ctx.f12.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// fmadds f12,f3,f11,f8
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// fmadds f13,f3,f13,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,-36(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F6FA0"))) PPC_WEAK_FUNC(sub_829F6FA0);
PPC_FUNC_IMPL(__imp__sub_829F6FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829F6FA8;
	__savegprlr_28(ctx, base);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lwz r5,44(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r31,r4,32
	ctx.r31.s64 = ctx.r4.s64 + 32;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f0,908(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lfs f8,17872(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17872);
	ctx.f8.f64 = double(temp.f32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// lfs f12,-52(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-60(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f9,f10,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// blt cr6,0x829f7018
	if (ctx.cr6.lt) goto loc_829F7018;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829F7018:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829f7068
	if (!ctx.cr0.eq) goto loc_829F7068;
	// fsqrts f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x829f7044
	if (!ctx.cr6.lt) goto loc_829F7044;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// b 0x829f7064
	goto loc_829F7064;
loc_829F7044:
	// fdivs f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,-60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_829F7064:
	// stfs f0,-52(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
loc_829F7068:
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f0,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r6,48(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,52(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r28,56(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r29.u32);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F70E0"))) PPC_WEAK_FUNC(sub_829F70E0);
PPC_FUNC_IMPL(__imp__sub_829F70E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7108
	if (!ctx.cr6.eq) goto loc_829F7108;
	// bl 0x829f71a8
	ctx.lr = 0x829F7104;
	sub_829F71A8(ctx, base);
	// stw r3,13492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13492, ctx.r3.u32);
loc_829F7108:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7120"))) PPC_WEAK_FUNC(sub_829F7120);
PPC_FUNC_IMPL(__imp__sub_829F7120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7148
	if (!ctx.cr6.eq) goto loc_829F7148;
	// bl 0x829f71a8
	ctx.lr = 0x829F7144;
	sub_829F71A8(ctx, base);
	// stw r3,13492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13492, ctx.r3.u32);
loc_829F7148:
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

__attribute__((alias("__imp__sub_829F7160"))) PPC_WEAK_FUNC(sub_829F7160);
PPC_FUNC_IMPL(__imp__sub_829F7160) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82765d00
	ctx.lr = 0x829F7174;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f7190
	if (ctx.cr0.eq) goto loc_829F7190;
	// bl 0x829ed638
	ctx.lr = 0x829F7180;
	sub_829ED638(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,-2432
	ctx.r11.s64 = ctx.r11.s64 + -2432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829f7194
	goto loc_829F7194;
loc_829F7190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829F7194:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F71A8"))) PPC_WEAK_FUNC(sub_829F71A8);
PPC_FUNC_IMPL(__imp__sub_829F71A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F71B0;
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
	ctx.lr = 0x829F71C4;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f7224
	if (ctx.cr0.eq) goto loc_829F7224;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2452
	ctx.r4.s64 = ctx.r11.s64 + -2452;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F71E0;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13432);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f7200
	if (!ctx.cr6.eq) goto loc_829F7200;
	// bl 0x829ed598
	ctx.lr = 0x829F71F8;
	sub_829ED598(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13432, ctx.r6.u32);
loc_829F7200:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,104
	ctx.r7.s64 = 104;
	// addi r8,r11,29024
	ctx.r8.s64 = ctx.r11.s64 + 29024;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F721C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f7228
	goto loc_829F7228;
loc_829F7224:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F7228:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f7238
	if (ctx.cr0.eq) goto loc_829F7238;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F7238;
	sub_829EF5F8(ctx, base);
loc_829F7238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F7248"))) PPC_WEAK_FUNC(sub_829F7248);
PPC_FUNC_IMPL(__imp__sub_829F7248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-2432
	ctx.r11.s64 = ctx.r11.s64 + -2432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829ed6f8
	ctx.lr = 0x829F7274;
	sub_829ED6F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f7284
	if (ctx.cr0.eq) goto loc_829F7284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F7284;
	sub_82765D70(ctx, base);
loc_829F7284:
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

__attribute__((alias("__imp__sub_829F72A0"))) PPC_WEAK_FUNC(sub_829F72A0);
PPC_FUNC_IMPL(__imp__sub_829F72A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82765d00
	ctx.lr = 0x829F72C0;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f72e0
	if (ctx.cr0.eq) goto loc_829F72E0;
	// bl 0x829ed638
	ctx.lr = 0x829F72CC;
	sub_829ED638(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2432
	ctx.r11.s64 = ctx.r11.s64 + -2432;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829f72e4
	goto loc_829F72E4;
loc_829F72E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F72E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F72FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_829F7318"))) PPC_WEAK_FUNC(sub_829F7318);
PPC_FUNC_IMPL(__imp__sub_829F7318) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x829ed750
	sub_829ED750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F7324"))) PPC_WEAK_FUNC(sub_829F7324);
PPC_FUNC_IMPL(__imp__sub_829F7324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7328"))) PPC_WEAK_FUNC(sub_829F7328);
PPC_FUNC_IMPL(__imp__sub_829F7328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,31308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31308);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829f737c
	if (!ctx.cr6.eq) goto loc_829F737C;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// beq cr6,0x829f737c
	if (ctx.cr6.eq) goto loc_829F737C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829f7374
	if (ctx.cr6.lt) goto loc_829F7374;
	// beq cr6,0x829f736c
	if (ctx.cr6.eq) goto loc_829F736C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x829f737c
	if (!ctx.cr6.lt) goto loc_829F737C;
	// b 0x829f7378
	goto loc_829F7378;
loc_829F736C:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x829f7378
	goto loc_829F7378;
loc_829F7374:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_829F7378:
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_829F737C:
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x829f7394
	if (!ctx.cr6.eq) goto loc_829F7394;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_829F7394:
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F73A0"))) PPC_WEAK_FUNC(sub_829F73A0);
PPC_FUNC_IMPL(__imp__sub_829F73A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829edb90
	ctx.lr = 0x829F73BC;
	sub_829EDB90(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f73d4
	if (!ctx.cr6.eq) goto loc_829F73D4;
	// bl 0x829f71a8
	ctx.lr = 0x829F73D0;
	sub_829F71A8(ctx, base);
	// stw r3,13492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13492, ctx.r3.u32);
loc_829F73D4:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829F73E8;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7400"))) PPC_WEAK_FUNC(sub_829F7400);
PPC_FUNC_IMPL(__imp__sub_829F7400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829F7408;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829f7430
	if (ctx.cr6.eq) goto loc_829F7430;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x829f7434
	if (!ctx.cr6.eq) goto loc_829F7434;
loc_829F7430:
	// li r11,1
	ctx.r11.s64 = 1;
loc_829F7434:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f7538
	if (ctx.cr0.eq) goto loc_829F7538;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829f2b18
	ctx.lr = 0x829F7450;
	sub_829F2B18(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x829f7530
	if (ctx.cr6.eq) goto loc_829F7530;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x829f747c
	if (!ctx.cr6.lt) goto loc_829F747C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x829f7480
	goto loc_829F7480;
loc_829F747C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_829F7480:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829f7490
	if (ctx.cr6.eq) goto loc_829F7490;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x829f7658
	goto loc_829F7658;
loc_829F7490:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8286dac0
	ctx.lr = 0x829F749C;
	sub_8286DAC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// bl 0x829ee2c0
	ctx.lr = 0x829F74AC;
	sub_829EE2C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x829f2b18
	ctx.lr = 0x829F74B4;
	sub_829F2B18(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F74C4;
	sub_829F3700(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef570
	ctx.lr = 0x829F74CC;
	sub_829EF570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F74D8;
	sub_829F3898(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829f7630
	if (ctx.cr6.eq) goto loc_829F7630;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829f74f8
	if (ctx.cr6.eq) goto loc_829F74F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F74F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_829F74F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829f7630
	if (ctx.cr6.eq) goto loc_829F7630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F7518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829f26d0
	ctx.lr = 0x829F752C;
	sub_829F26D0(ctx, base);
	// b 0x829f7630
	goto loc_829F7630;
loc_829F7530:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x829f7658
	goto loc_829F7658;
loc_829F7538:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829f7644
	if (ctx.cr6.eq) goto loc_829F7644;
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829f757c
	if (ctx.cr6.eq) goto loc_829F757C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_829F7560:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829f763c
	if (ctx.cr6.eq) goto loc_829F763C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829f7560
	if (ctx.cr6.lt) goto loc_829F7560;
loc_829F757C:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_829F7580:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829f26d0
	ctx.lr = 0x829F7588;
	sub_829F26D0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829f2b18
	ctx.lr = 0x829F7598;
	sub_829F2B18(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x829f7658
	if (!ctx.cr6.eq) goto loc_829F7658;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F75B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f75cc
	if (!ctx.cr6.eq) goto loc_829F75CC;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r11,-6032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6032);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_829F75CC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x8287eba8
	ctx.lr = 0x829F75E0;
	sub_8287EBA8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F75F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x829ee2c0
	ctx.lr = 0x829F7610;
	sub_829EE2C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829f2b18
	ctx.lr = 0x829F7618;
	sub_829F2B18(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F7630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829F7630:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F7638;
	sub_829EF5F8(ctx, base);
	// b 0x829f7658
	goto loc_829F7658;
loc_829F763C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x829f7580
	goto loc_829F7580;
loc_829F7644:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829f2b18
	ctx.lr = 0x829F7658;
	sub_829F2B18(ctx, base);
loc_829F7658:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F7668"))) PPC_WEAK_FUNC(sub_829F7668);
PPC_FUNC_IMPL(__imp__sub_829F7668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7690
	if (!ctx.cr6.eq) goto loc_829F7690;
	// bl 0x829f7e60
	ctx.lr = 0x829F768C;
	sub_829F7E60(ctx, base);
	// stw r3,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r3.u32);
loc_829F7690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F76A8"))) PPC_WEAK_FUNC(sub_829F76A8);
PPC_FUNC_IMPL(__imp__sub_829F76A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13496(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f76d0
	if (!ctx.cr6.eq) goto loc_829F76D0;
	// bl 0x829f7e60
	ctx.lr = 0x829F76CC;
	sub_829F7E60(ctx, base);
	// stw r3,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r3.u32);
loc_829F76D0:
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

__attribute__((alias("__imp__sub_829F76E8"))) PPC_WEAK_FUNC(sub_829F76E8);
PPC_FUNC_IMPL(__imp__sub_829F76E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F76F0"))) PPC_WEAK_FUNC(sub_829F76F0);
PPC_FUNC_IMPL(__imp__sub_829F76F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F76F8"))) PPC_WEAK_FUNC(sub_829F76F8);
PPC_FUNC_IMPL(__imp__sub_829F76F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7708"))) PPC_WEAK_FUNC(sub_829F7708);
PPC_FUNC_IMPL(__imp__sub_829F7708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mulli r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7720"))) PPC_WEAK_FUNC(sub_829F7720);
PPC_FUNC_IMPL(__imp__sub_829F7720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7748
	if (!ctx.cr6.eq) goto loc_829F7748;
	// bl 0x829f8860
	ctx.lr = 0x829F7744;
	sub_829F8860(ctx, base);
	// stw r3,13504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13504, ctx.r3.u32);
loc_829F7748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7760"))) PPC_WEAK_FUNC(sub_829F7760);
PPC_FUNC_IMPL(__imp__sub_829F7760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7788
	if (!ctx.cr6.eq) goto loc_829F7788;
	// bl 0x829f8860
	ctx.lr = 0x829F7784;
	sub_829F8860(ctx, base);
	// stw r3,13504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13504, ctx.r3.u32);
loc_829F7788:
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

__attribute__((alias("__imp__sub_829F77A0"))) PPC_WEAK_FUNC(sub_829F77A0);
PPC_FUNC_IMPL(__imp__sub_829F77A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mulli r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 * 20;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F77B0"))) PPC_WEAK_FUNC(sub_829F77B0);
PPC_FUNC_IMPL(__imp__sub_829F77B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mulli r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F77C8"))) PPC_WEAK_FUNC(sub_829F77C8);
PPC_FUNC_IMPL(__imp__sub_829F77C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f77f0
	if (!ctx.cr6.eq) goto loc_829F77F0;
	// bl 0x829f89a0
	ctx.lr = 0x829F77EC;
	sub_829F89A0(ctx, base);
	// stw r3,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r3.u32);
loc_829F77F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7808"))) PPC_WEAK_FUNC(sub_829F7808);
PPC_FUNC_IMPL(__imp__sub_829F7808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13508(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13508);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7830
	if (!ctx.cr6.eq) goto loc_829F7830;
	// bl 0x829f89a0
	ctx.lr = 0x829F782C;
	sub_829F89A0(ctx, base);
	// stw r3,13508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13508, ctx.r3.u32);
loc_829F7830:
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

__attribute__((alias("__imp__sub_829F7848"))) PPC_WEAK_FUNC(sub_829F7848);
PPC_FUNC_IMPL(__imp__sub_829F7848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7870
	if (!ctx.cr6.eq) goto loc_829F7870;
	// bl 0x829f8c20
	ctx.lr = 0x829F786C;
	sub_829F8C20(ctx, base);
	// stw r3,13512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13512, ctx.r3.u32);
loc_829F7870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7888"))) PPC_WEAK_FUNC(sub_829F7888);
PPC_FUNC_IMPL(__imp__sub_829F7888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f78b0
	if (!ctx.cr6.eq) goto loc_829F78B0;
	// bl 0x829f8c20
	ctx.lr = 0x829F78AC;
	sub_829F8C20(ctx, base);
	// stw r3,13512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13512, ctx.r3.u32);
loc_829F78B0:
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

__attribute__((alias("__imp__sub_829F78C8"))) PPC_WEAK_FUNC(sub_829F78C8);
PPC_FUNC_IMPL(__imp__sub_829F78C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f78f0
	if (!ctx.cr6.eq) goto loc_829F78F0;
	// bl 0x829f8e98
	ctx.lr = 0x829F78EC;
	sub_829F8E98(ctx, base);
	// stw r3,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r3.u32);
loc_829F78F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7908"))) PPC_WEAK_FUNC(sub_829F7908);
PPC_FUNC_IMPL(__imp__sub_829F7908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7930
	if (!ctx.cr6.eq) goto loc_829F7930;
	// bl 0x829f8e98
	ctx.lr = 0x829F792C;
	sub_829F8E98(ctx, base);
	// stw r3,13516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13516, ctx.r3.u32);
loc_829F7930:
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

__attribute__((alias("__imp__sub_829F7948"))) PPC_WEAK_FUNC(sub_829F7948);
PPC_FUNC_IMPL(__imp__sub_829F7948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7970
	if (!ctx.cr6.eq) goto loc_829F7970;
	// bl 0x829f90d0
	ctx.lr = 0x829F796C;
	sub_829F90D0(ctx, base);
	// stw r3,13520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13520, ctx.r3.u32);
loc_829F7970:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7988"))) PPC_WEAK_FUNC(sub_829F7988);
PPC_FUNC_IMPL(__imp__sub_829F7988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13520(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f79b0
	if (!ctx.cr6.eq) goto loc_829F79B0;
	// bl 0x829f90d0
	ctx.lr = 0x829F79AC;
	sub_829F90D0(ctx, base);
	// stw r3,13520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13520, ctx.r3.u32);
loc_829F79B0:
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

__attribute__((alias("__imp__sub_829F79C8"))) PPC_WEAK_FUNC(sub_829F79C8);
PPC_FUNC_IMPL(__imp__sub_829F79C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f79f0
	if (!ctx.cr6.eq) goto loc_829F79F0;
	// bl 0x829f9360
	ctx.lr = 0x829F79EC;
	sub_829F9360(ctx, base);
	// stw r3,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r3.u32);
loc_829F79F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7A08"))) PPC_WEAK_FUNC(sub_829F7A08);
PPC_FUNC_IMPL(__imp__sub_829F7A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7a30
	if (!ctx.cr6.eq) goto loc_829F7A30;
	// bl 0x829f9360
	ctx.lr = 0x829F7A2C;
	sub_829F9360(ctx, base);
	// stw r3,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r3.u32);
loc_829F7A30:
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

__attribute__((alias("__imp__sub_829F7A48"))) PPC_WEAK_FUNC(sub_829F7A48);
PPC_FUNC_IMPL(__imp__sub_829F7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7a70
	if (!ctx.cr6.eq) goto loc_829F7A70;
	// bl 0x829f94a8
	ctx.lr = 0x829F7A6C;
	sub_829F94A8(ctx, base);
	// stw r3,13528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13528, ctx.r3.u32);
loc_829F7A70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7A88"))) PPC_WEAK_FUNC(sub_829F7A88);
PPC_FUNC_IMPL(__imp__sub_829F7A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7ab0
	if (!ctx.cr6.eq) goto loc_829F7AB0;
	// bl 0x829f94a8
	ctx.lr = 0x829F7AAC;
	sub_829F94A8(ctx, base);
	// stw r3,13528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13528, ctx.r3.u32);
loc_829F7AB0:
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

__attribute__((alias("__imp__sub_829F7AC8"))) PPC_WEAK_FUNC(sub_829F7AC8);
PPC_FUNC_IMPL(__imp__sub_829F7AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7af0
	if (!ctx.cr6.eq) goto loc_829F7AF0;
	// bl 0x829f9610
	ctx.lr = 0x829F7AEC;
	sub_829F9610(ctx, base);
	// stw r3,13532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13532, ctx.r3.u32);
loc_829F7AF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7B08"))) PPC_WEAK_FUNC(sub_829F7B08);
PPC_FUNC_IMPL(__imp__sub_829F7B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7b30
	if (!ctx.cr6.eq) goto loc_829F7B30;
	// bl 0x829f9610
	ctx.lr = 0x829F7B2C;
	sub_829F9610(ctx, base);
	// stw r3,13532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13532, ctx.r3.u32);
loc_829F7B30:
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

__attribute__((alias("__imp__sub_829F7B48"))) PPC_WEAK_FUNC(sub_829F7B48);
PPC_FUNC_IMPL(__imp__sub_829F7B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7b70
	if (!ctx.cr6.eq) goto loc_829F7B70;
	// bl 0x829f9770
	ctx.lr = 0x829F7B6C;
	sub_829F9770(ctx, base);
	// stw r3,13536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13536, ctx.r3.u32);
loc_829F7B70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7B88"))) PPC_WEAK_FUNC(sub_829F7B88);
PPC_FUNC_IMPL(__imp__sub_829F7B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7bb0
	if (!ctx.cr6.eq) goto loc_829F7BB0;
	// bl 0x829f9770
	ctx.lr = 0x829F7BAC;
	sub_829F9770(ctx, base);
	// stw r3,13536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13536, ctx.r3.u32);
loc_829F7BB0:
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

__attribute__((alias("__imp__sub_829F7BC8"))) PPC_WEAK_FUNC(sub_829F7BC8);
PPC_FUNC_IMPL(__imp__sub_829F7BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7bf0
	if (!ctx.cr6.eq) goto loc_829F7BF0;
	// bl 0x829f99a0
	ctx.lr = 0x829F7BEC;
	sub_829F99A0(ctx, base);
	// stw r3,13540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13540, ctx.r3.u32);
loc_829F7BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7C08"))) PPC_WEAK_FUNC(sub_829F7C08);
PPC_FUNC_IMPL(__imp__sub_829F7C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7c30
	if (!ctx.cr6.eq) goto loc_829F7C30;
	// bl 0x829f99a0
	ctx.lr = 0x829F7C2C;
	sub_829F99A0(ctx, base);
	// stw r3,13540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13540, ctx.r3.u32);
loc_829F7C30:
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

__attribute__((alias("__imp__sub_829F7C48"))) PPC_WEAK_FUNC(sub_829F7C48);
PPC_FUNC_IMPL(__imp__sub_829F7C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7c70
	if (!ctx.cr6.eq) goto loc_829F7C70;
	// bl 0x829f9bd8
	ctx.lr = 0x829F7C6C;
	sub_829F9BD8(ctx, base);
	// stw r3,13544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13544, ctx.r3.u32);
loc_829F7C70:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7C88"))) PPC_WEAK_FUNC(sub_829F7C88);
PPC_FUNC_IMPL(__imp__sub_829F7C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7cb0
	if (!ctx.cr6.eq) goto loc_829F7CB0;
	// bl 0x829f9bd8
	ctx.lr = 0x829F7CAC;
	sub_829F9BD8(ctx, base);
	// stw r3,13544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13544, ctx.r3.u32);
loc_829F7CB0:
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

__attribute__((alias("__imp__sub_829F7CC8"))) PPC_WEAK_FUNC(sub_829F7CC8);
PPC_FUNC_IMPL(__imp__sub_829F7CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7cf0
	if (!ctx.cr6.eq) goto loc_829F7CF0;
	// bl 0x829f9d38
	ctx.lr = 0x829F7CEC;
	sub_829F9D38(ctx, base);
	// stw r3,13548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13548, ctx.r3.u32);
loc_829F7CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7D08"))) PPC_WEAK_FUNC(sub_829F7D08);
PPC_FUNC_IMPL(__imp__sub_829F7D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13548);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829f7d30
	if (!ctx.cr6.eq) goto loc_829F7D30;
	// bl 0x829f9d38
	ctx.lr = 0x829F7D2C;
	sub_829F9D38(ctx, base);
	// stw r3,13548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13548, ctx.r3.u32);
loc_829F7D30:
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

__attribute__((alias("__imp__sub_829F7D48"))) PPC_WEAK_FUNC(sub_829F7D48);
PPC_FUNC_IMPL(__imp__sub_829F7D48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7D50"))) PPC_WEAK_FUNC(sub_829F7D50);
PPC_FUNC_IMPL(__imp__sub_829F7D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7D58"))) PPC_WEAK_FUNC(sub_829F7D58);
PPC_FUNC_IMPL(__imp__sub_829F7D58) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x829f65e8
	ctx.lr = 0x829F7D7C;
	sub_829F65E8(ctx, base);
	// b 0x829f7dac
	goto loc_829F7DAC;
loc_829F7D80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829f7da0
	if (ctx.cr0.eq) goto loc_829F7DA0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_829F7DA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_829F7DAC:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829f7d80
	if (ctx.cr6.lt) goto loc_829F7D80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829f7df4
	if (ctx.cr6.eq) goto loc_829F7DF4;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82765d00
	ctx.lr = 0x829F7DD8;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f7dec
	if (ctx.cr0.eq) goto loc_829F7DEC;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x829fb200
	ctx.lr = 0x829F7DE8;
	sub_829FB200(ctx, base);
	// b 0x829f7df0
	goto loc_829F7DF0;
loc_829F7DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829F7DF0:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_829F7DF4:
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

__attribute__((alias("__imp__sub_829F7E10"))) PPC_WEAK_FUNC(sub_829F7E10);
PPC_FUNC_IMPL(__imp__sub_829F7E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829f7e44
	if (ctx.cr6.eq) goto loc_829F7E44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F7E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829F7E44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ef5f8
	ctx.lr = 0x829F7E4C;
	sub_829EF5F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7E60"))) PPC_WEAK_FUNC(sub_829F7E60);
PPC_FUNC_IMPL(__imp__sub_829F7E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F7E68;
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
	ctx.lr = 0x829F7E7C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f7edc
	if (ctx.cr0.eq) goto loc_829F7EDC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2380
	ctx.r4.s64 = ctx.r11.s64 + -2380;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F7E98;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13444);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f7eb8
	if (!ctx.cr6.eq) goto loc_829F7EB8;
	// bl 0x829f0460
	ctx.lr = 0x829F7EB0;
	sub_829F0460(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r6.u32);
loc_829F7EB8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,52
	ctx.r7.s64 = 52;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F7ED4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f7ee0
	goto loc_829F7EE0;
loc_829F7EDC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F7EE0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f7ef0
	if (ctx.cr0.eq) goto loc_829F7EF0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F7EF0;
	sub_829EF5F8(ctx, base);
loc_829F7EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F7F00"))) PPC_WEAK_FUNC(sub_829F7F00);
PPC_FUNC_IMPL(__imp__sub_829F7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829f0500
	ctx.lr = 0x829F7F18;
	sub_829F0500(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-1724
	ctx.r11.s64 = ctx.r11.s64 + -1724;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8286dac0
	ctx.lr = 0x829F7F30;
	sub_8286DAC0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F7F68"))) PPC_WEAK_FUNC(sub_829F7F68);
PPC_FUNC_IMPL(__imp__sub_829F7F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f7fb8
	ctx.lr = 0x829F7F88;
	sub_829F7FB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f7f98
	if (ctx.cr0.eq) goto loc_829F7F98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F7F98;
	sub_82765D70(ctx, base);
loc_829F7F98:
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

__attribute__((alias("__imp__sub_829F7FB8"))) PPC_WEAK_FUNC(sub_829F7FB8);
PPC_FUNC_IMPL(__imp__sub_829F7FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,-1724
	ctx.r11.s64 = ctx.r11.s64 + -1724;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F7FE0;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x829ef5f8
	ctx.lr = 0x829F7FE8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f0680
	ctx.lr = 0x829F7FF0;
	sub_829F0680(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8008"))) PPC_WEAK_FUNC(sub_829F8008);
PPC_FUNC_IMPL(__imp__sub_829F8008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829F8010;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f8774
	if (!ctx.cr6.eq) goto loc_829F8774;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,13496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f803c
	if (!ctx.cr6.eq) goto loc_829F803C;
	// bl 0x829f7e60
	ctx.lr = 0x829F8038;
	sub_829F7E60(ctx, base);
	// stw r3,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r3.u32);
loc_829F803C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x829F8044;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x829f8070
	if (ctx.cr0.eq) goto loc_829F8070;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,13500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13500, ctx.r3.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829f8078
	goto loc_829F8078;
loc_829F8070:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r11,13500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13500, ctx.r11.u32);
loc_829F8078:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13504);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f8090
	if (!ctx.cr6.eq) goto loc_829F8090;
	// bl 0x829f8860
	ctx.lr = 0x829F808C;
	sub_829F8860(ctx, base);
	// stw r3,13504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13504, ctx.r3.u32);
loc_829F8090:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f80a8
	if (!ctx.cr6.eq) goto loc_829F80A8;
	// bl 0x829f89a0
	ctx.lr = 0x829F80A4;
	sub_829F89A0(ctx, base);
	// stw r3,13508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13508, ctx.r3.u32);
loc_829F80A8:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F80B0;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f80c4
	if (ctx.cr0.eq) goto loc_829F80C4;
	// bl 0x829f8a40
	ctx.lr = 0x829F80BC;
	sub_829F8A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f80c8
	goto loc_829F80C8;
loc_829F80C4:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F80C8:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r4,r11,-9572
	ctx.r4.s64 = ctx.r11.s64 + -9572;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8292c7c0
	ctx.lr = 0x829F80E0;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F80F0;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F80FC;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F8104;
	sub_829F3898(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x829ef5f8
	ctx.lr = 0x829F810C;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F8114;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f812c
	if (!ctx.cr6.eq) goto loc_829F812C;
	// bl 0x829f8c20
	ctx.lr = 0x829F8128;
	sub_829F8C20(ctx, base);
	// stw r3,13512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13512, ctx.r3.u32);
loc_829F812C:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F8134;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f8148
	if (ctx.cr0.eq) goto loc_829F8148;
	// bl 0x829f8cc0
	ctx.lr = 0x829F8140;
	sub_829F8CC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f814c
	goto loc_829F814C;
loc_829F8148:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F814C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2368
	ctx.r4.s64 = ctx.r11.s64 + -2368;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8160;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8170;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F817C;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F8184;
	sub_829F3898(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ef5f8
	ctx.lr = 0x829F818C;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F8194;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f81ac
	if (!ctx.cr6.eq) goto loc_829F81AC;
	// bl 0x829f8e98
	ctx.lr = 0x829F81A8;
	sub_829F8E98(ctx, base);
	// stw r3,13516(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13516, ctx.r3.u32);
loc_829F81AC:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F81B4;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f81c8
	if (ctx.cr0.eq) goto loc_829F81C8;
	// bl 0x829f8f38
	ctx.lr = 0x829F81C0;
	sub_829F8F38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f81cc
	goto loc_829F81CC;
loc_829F81C8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F81CC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2356
	ctx.r4.s64 = ctx.r11.s64 + -2356;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292c7c0
	ctx.lr = 0x829F81E0;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F81F0;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F81FC;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F8204;
	sub_829F3898(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x829ef5f8
	ctx.lr = 0x829F820C;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F8214;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f822c
	if (!ctx.cr6.eq) goto loc_829F822C;
	// bl 0x829f90d0
	ctx.lr = 0x829F8228;
	sub_829F90D0(ctx, base);
	// stw r3,13520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13520, ctx.r3.u32);
loc_829F822C:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F8234;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f8248
	if (ctx.cr0.eq) goto loc_829F8248;
	// bl 0x829f9170
	ctx.lr = 0x829F8240;
	sub_829F9170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f824c
	goto loc_829F824C;
loc_829F8248:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F824C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2348
	ctx.r4.s64 = ctx.r11.s64 + -2348;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8260;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8270;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F827C;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F8284;
	sub_829F3898(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x829ef5f8
	ctx.lr = 0x829F828C;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F8294;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f82ac
	if (!ctx.cr6.eq) goto loc_829F82AC;
	// bl 0x829f9360
	ctx.lr = 0x829F82A8;
	sub_829F9360(ctx, base);
	// stw r3,13524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13524, ctx.r3.u32);
loc_829F82AC:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F82B4;
	sub_82765D00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r11,-1672
	ctx.r28.s64 = ctx.r11.s64 + -1672;
	// beq 0x829f8300
	if (ctx.cr0.eq) goto loc_829F8300;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F82CC;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// addi r4,r10,-2024
	ctx.r4.s64 = ctx.r10.s64 + -2024;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F82EC;
	sub_8292C7C0(ctx, base);
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// b 0x829f8304
	goto loc_829F8304;
loc_829F8300:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F8304:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2336
	ctx.r4.s64 = ctx.r11.s64 + -2336;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8318;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8328;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F8334;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F833C;
	sub_829F3898(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8344;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F834C;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f8364
	if (!ctx.cr6.eq) goto loc_829F8364;
	// bl 0x829f94a8
	ctx.lr = 0x829F8360;
	sub_829F94A8(ctx, base);
	// stw r3,13528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13528, ctx.r3.u32);
loc_829F8364:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F836C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f83b0
	if (ctx.cr0.eq) goto loc_829F83B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F837C;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1356
	ctx.r11.s64 = ctx.r11.s64 + -1356;
	// addi r4,r10,-1996
	ctx.r4.s64 = ctx.r10.s64 + -1996;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F839C;
	sub_8292C7C0(ctx, base);
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// b 0x829f83b4
	goto loc_829F83B4;
loc_829F83B0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F83B4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2328
	ctx.r4.s64 = ctx.r11.s64 + -2328;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F83C8;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F83D8;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F83E4;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F83EC;
	sub_829F3898(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F83F4;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F83FC;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f8414
	if (!ctx.cr6.eq) goto loc_829F8414;
	// bl 0x829f9610
	ctx.lr = 0x829F8410;
	sub_829F9610(ctx, base);
	// stw r3,13532(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13532, ctx.r3.u32);
loc_829F8414:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F841C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f8460
	if (ctx.cr0.eq) goto loc_829F8460;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F842C;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1304
	ctx.r11.s64 = ctx.r11.s64 + -1304;
	// addi r4,r10,-1964
	ctx.r4.s64 = ctx.r10.s64 + -1964;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F844C;
	sub_8292C7C0(ctx, base);
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// b 0x829f8464
	goto loc_829F8464;
loc_829F8460:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F8464:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2320
	ctx.r4.s64 = ctx.r11.s64 + -2320;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8478;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8488;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F8494;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F849C;
	sub_829F3898(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ef5f8
	ctx.lr = 0x829F84A4;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F84AC;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13536);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f84c4
	if (!ctx.cr6.eq) goto loc_829F84C4;
	// bl 0x829f9770
	ctx.lr = 0x829F84C0;
	sub_829F9770(ctx, base);
	// stw r3,13536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13536, ctx.r3.u32);
loc_829F84C4:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F84CC;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f84e0
	if (ctx.cr0.eq) goto loc_829F84E0;
	// bl 0x829f9810
	ctx.lr = 0x829F84D8;
	sub_829F9810(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f84e4
	goto loc_829F84E4;
loc_829F84E0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F84E4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2308
	ctx.r4.s64 = ctx.r11.s64 + -2308;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8292c7c0
	ctx.lr = 0x829F84F8;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8508;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F8514;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F851C;
	sub_829F3898(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8524;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F852C;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f8544
	if (!ctx.cr6.eq) goto loc_829F8544;
	// bl 0x829f99a0
	ctx.lr = 0x829F8540;
	sub_829F99A0(ctx, base);
	// stw r3,13540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13540, ctx.r3.u32);
loc_829F8544:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F854C;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f8560
	if (ctx.cr0.eq) goto loc_829F8560;
	// bl 0x829f9a40
	ctx.lr = 0x829F8558;
	sub_829F9A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f8564
	goto loc_829F8564;
loc_829F8560:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F8564:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2296
	ctx.r4.s64 = ctx.r11.s64 + -2296;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8578;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8588;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F8594;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F859C;
	sub_829F3898(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x829ef5f8
	ctx.lr = 0x829F85A4;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F85AC;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f85c4
	if (!ctx.cr6.eq) goto loc_829F85C4;
	// bl 0x829f9bd8
	ctx.lr = 0x829F85C0;
	sub_829F9BD8(ctx, base);
	// stw r3,13544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13544, ctx.r3.u32);
loc_829F85C4:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F85CC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f8610
	if (ctx.cr0.eq) goto loc_829F8610;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F85DC;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// addi r4,r10,-1816
	ctx.r4.s64 = ctx.r10.s64 + -1816;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F85FC;
	sub_8292C7C0(ctx, base);
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// b 0x829f8614
	goto loc_829F8614;
loc_829F8610:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F8614:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2284
	ctx.r4.s64 = ctx.r11.s64 + -2284;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8628;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8638;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F8644;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F864C;
	sub_829F3898(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8654;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F865C;
	sub_829F8810(ctx, base);
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F8664;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f86a8
	if (ctx.cr0.eq) goto loc_829F86A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F8674;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1668
	ctx.r11.s64 = ctx.r11.s64 + -1668;
	// addi r4,r10,-2228
	ctx.r4.s64 = ctx.r10.s64 + -2228;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8694;
	sub_8292C7C0(ctx, base);
	// stw r28,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r28.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// b 0x829f86ac
	goto loc_829F86AC;
loc_829F86A8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F86AC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2276
	ctx.r4.s64 = ctx.r11.s64 + -2276;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292c7c0
	ctx.lr = 0x829F86C0;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F86D0;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F86DC;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F86E4;
	sub_829F3898(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x829ef5f8
	ctx.lr = 0x829F86EC;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F86F4;
	sub_829F8810(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829f870c
	if (!ctx.cr6.eq) goto loc_829F870C;
	// bl 0x829f9d38
	ctx.lr = 0x829F8708;
	sub_829F9D38(ctx, base);
	// stw r3,13548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13548, ctx.r3.u32);
loc_829F870C:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82765d00
	ctx.lr = 0x829F8714;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829f8728
	if (ctx.cr0.eq) goto loc_829F8728;
	// bl 0x829f9dd8
	ctx.lr = 0x829F8720;
	sub_829F9DD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x829f872c
	goto loc_829F872C;
loc_829F8728:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_829F872C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2260
	ctx.r4.s64 = ctx.r11.s64 + -2260;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8740;
	sub_8292C7C0(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829F8750;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0760
	ctx.lr = 0x829F875C;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829F8764;
	sub_829F3898(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x829ef5f8
	ctx.lr = 0x829F876C;
	sub_829EF5F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f8810
	ctx.lr = 0x829F8774;
	sub_829F8810(ctx, base);
loc_829F8774:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8780"))) PPC_WEAK_FUNC(sub_829F8780);
PPC_FUNC_IMPL(__imp__sub_829F8780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829F8788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,13500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829f87f4
	if (ctx.cr6.eq) goto loc_829F87F4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x829f87f4
	if (!ctx.cr6.gt) goto loc_829F87F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_829F87B4:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F87CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829f3698
	ctx.lr = 0x829F87D4;
	sub_829F3698(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,13500(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13500);
	// bne 0x829f8800
	if (!ctx.cr0.eq) goto loc_829F8800;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829f87b4
	if (ctx.cr6.lt) goto loc_829F87B4;
loc_829F87F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829F87F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_829F8800:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x829f87f8
	goto loc_829F87F8;
}

__attribute__((alias("__imp__sub_829F8810"))) PPC_WEAK_FUNC(sub_829F8810);
PPC_FUNC_IMPL(__imp__sub_829F8810) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829f884c
	if (ctx.cr6.eq) goto loc_829F884C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829F8838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x829f8780
	ctx.lr = 0x829F883C;
	sub_829F8780(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,13500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	// bl 0x829fa360
	ctx.lr = 0x829F884C;
	sub_829FA360(ctx, base);
loc_829F884C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8860"))) PPC_WEAK_FUNC(sub_829F8860);
PPC_FUNC_IMPL(__imp__sub_829F8860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F8868;
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
	ctx.lr = 0x829F887C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f88dc
	if (ctx.cr0.eq) goto loc_829F88DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2244
	ctx.r4.s64 = ctx.r11.s64 + -2244;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8898;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f88b8
	if (!ctx.cr6.eq) goto loc_829F88B8;
	// bl 0x829f7e60
	ctx.lr = 0x829F88B0;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F88B8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F88D4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f88e0
	goto loc_829F88E0;
loc_829F88DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F88E0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f88f0
	if (ctx.cr0.eq) goto loc_829F88F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F88F0;
	sub_829EF5F8(ctx, base);
loc_829F88F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8900"))) PPC_WEAK_FUNC(sub_829F8900);
PPC_FUNC_IMPL(__imp__sub_829F8900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f8950
	ctx.lr = 0x829F8920;
	sub_829F8950(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8930
	if (ctx.cr0.eq) goto loc_829F8930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F8930;
	sub_82765D70(ctx, base);
loc_829F8930:
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

__attribute__((alias("__imp__sub_829F8950"))) PPC_WEAK_FUNC(sub_829F8950);
PPC_FUNC_IMPL(__imp__sub_829F8950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1668
	ctx.r11.s64 = ctx.r11.s64 + -1668;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F8978;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8980;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F8988;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F89A0"))) PPC_WEAK_FUNC(sub_829F89A0);
PPC_FUNC_IMPL(__imp__sub_829F89A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F89A8;
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
	ctx.lr = 0x829F89BC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f8a1c
	if (ctx.cr0.eq) goto loc_829F8A1C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2180
	ctx.r4.s64 = ctx.r11.s64 + -2180;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F89D8;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f89f8
	if (!ctx.cr6.eq) goto loc_829F89F8;
	// bl 0x829f7e60
	ctx.lr = 0x829F89F0;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F89F8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F8A14;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f8a20
	goto loc_829F8A20;
loc_829F8A1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F8A20:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8a30
	if (ctx.cr0.eq) goto loc_829F8A30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8A30;
	sub_829EF5F8(ctx, base);
loc_829F8A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8A40"))) PPC_WEAK_FUNC(sub_829F8A40);
PPC_FUNC_IMPL(__imp__sub_829F8A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F8A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829f7f00
	ctx.lr = 0x829F8A54;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1616
	ctx.r11.s64 = ctx.r11.s64 + -1616;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-2164
	ctx.r4.s64 = ctx.r10.s64 + -2164;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8A78;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x829fa168
	ctx.lr = 0x829F8AA4;
	sub_829FA168(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2148
	ctx.r4.s64 = ctx.r11.s64 + -2148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8AB8;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F8AC4;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F8ADC;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8AE4;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8AEC;
	sub_829EF5F8(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-18688
	ctx.r4.s64 = ctx.r11.s64 + -18688;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8B00;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F8B0C;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F8B24;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8B2C;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8B34;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8B40"))) PPC_WEAK_FUNC(sub_829F8B40);
PPC_FUNC_IMPL(__imp__sub_829F8B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f8b90
	ctx.lr = 0x829F8B60;
	sub_829F8B90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8b70
	if (ctx.cr0.eq) goto loc_829F8B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F8B70;
	sub_82765D70(ctx, base);
loc_829F8B70:
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

__attribute__((alias("__imp__sub_829F8B90"))) PPC_WEAK_FUNC(sub_829F8B90);
PPC_FUNC_IMPL(__imp__sub_829F8B90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1616
	ctx.r11.s64 = ctx.r11.s64 + -1616;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F8BB8;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8BC0;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F8BC8;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8BE0"))) PPC_WEAK_FUNC(sub_829F8BE0);
PPC_FUNC_IMPL(__imp__sub_829F8BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829f8bfc
	if (!ctx.cr6.eq) goto loc_829F8BFC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_829F8BFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8C20"))) PPC_WEAK_FUNC(sub_829F8C20);
PPC_FUNC_IMPL(__imp__sub_829F8C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F8C28;
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
	ctx.lr = 0x829F8C3C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f8c9c
	if (ctx.cr0.eq) goto loc_829F8C9C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2144
	ctx.r4.s64 = ctx.r11.s64 + -2144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8C58;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f8c78
	if (!ctx.cr6.eq) goto loc_829F8C78;
	// bl 0x829f7e60
	ctx.lr = 0x829F8C70;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F8C78:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F8C94;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f8ca0
	goto loc_829F8CA0;
loc_829F8C9C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F8CA0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8cb0
	if (ctx.cr0.eq) goto loc_829F8CB0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8CB0;
	sub_829EF5F8(ctx, base);
loc_829F8CB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8CC0"))) PPC_WEAK_FUNC(sub_829F8CC0);
PPC_FUNC_IMPL(__imp__sub_829F8CC0) {
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
	// bl 0x829f7f00
	ctx.lr = 0x829F8CDC;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1564
	ctx.r11.s64 = ctx.r11.s64 + -1564;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-2124
	ctx.r4.s64 = ctx.r10.s64 + -2124;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8D00;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r9,-18684
	ctx.r4.s64 = ctx.r9.s64 + -18684;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8D34;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F8D40;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F8D58;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8D60;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8D68;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_829F8D88"))) PPC_WEAK_FUNC(sub_829F8D88);
PPC_FUNC_IMPL(__imp__sub_829F8D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f8dd8
	ctx.lr = 0x829F8DA8;
	sub_829F8DD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8db8
	if (ctx.cr0.eq) goto loc_829F8DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F8DB8;
	sub_82765D70(ctx, base);
loc_829F8DB8:
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

__attribute__((alias("__imp__sub_829F8DD8"))) PPC_WEAK_FUNC(sub_829F8DD8);
PPC_FUNC_IMPL(__imp__sub_829F8DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1564
	ctx.r11.s64 = ctx.r11.s64 + -1564;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F8E00;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8E08;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F8E10;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8E28"))) PPC_WEAK_FUNC(sub_829F8E28);
PPC_FUNC_IMPL(__imp__sub_829F8E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x829f8e6c
	if (!ctx.cr6.eq) goto loc_829F8E6C;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829f8e4c
	if (ctx.cr6.lt) goto loc_829F8E4C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829F8E4C:
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x829f8e88
	goto loc_829F8E88;
loc_829F8E6C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829f8e78
	if (ctx.cr6.lt) goto loc_829F8E78;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829F8E78:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_829F8E88:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F8E98"))) PPC_WEAK_FUNC(sub_829F8E98);
PPC_FUNC_IMPL(__imp__sub_829F8E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F8EA0;
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
	ctx.lr = 0x829F8EB4;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f8f14
	if (ctx.cr0.eq) goto loc_829F8F14;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2108
	ctx.r4.s64 = ctx.r11.s64 + -2108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8ED0;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f8ef0
	if (!ctx.cr6.eq) goto loc_829F8EF0;
	// bl 0x829f7e60
	ctx.lr = 0x829F8EE8;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F8EF0:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F8F0C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f8f18
	goto loc_829F8F18;
loc_829F8F14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F8F18:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f8f28
	if (ctx.cr0.eq) goto loc_829F8F28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8F28;
	sub_829EF5F8(ctx, base);
loc_829F8F28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F8F38"))) PPC_WEAK_FUNC(sub_829F8F38);
PPC_FUNC_IMPL(__imp__sub_829F8F38) {
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
	// bl 0x829f7f00
	ctx.lr = 0x829F8F54;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-2092
	ctx.r4.s64 = ctx.r10.s64 + -2092;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8F78;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r9,-18684
	ctx.r4.s64 = ctx.r9.s64 + -18684;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x8292c7c0
	ctx.lr = 0x829F8FAC;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F8FB8;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F8FD0;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8FD8;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F8FE0;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_829F9000"))) PPC_WEAK_FUNC(sub_829F9000);
PPC_FUNC_IMPL(__imp__sub_829F9000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9050
	ctx.lr = 0x829F9020;
	sub_829F9050(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9030
	if (ctx.cr0.eq) goto loc_829F9030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9030;
	sub_82765D70(ctx, base);
loc_829F9030:
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

__attribute__((alias("__imp__sub_829F9050"))) PPC_WEAK_FUNC(sub_829F9050);
PPC_FUNC_IMPL(__imp__sub_829F9050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1512
	ctx.r11.s64 = ctx.r11.s64 + -1512;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9078;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9080;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9088;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F90A0"))) PPC_WEAK_FUNC(sub_829F90A0);
PPC_FUNC_IMPL(__imp__sub_829F90A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829f90c4
	if (!ctx.cr6.eq) goto loc_829F90C4;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
loc_829F90C4:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F90D0"))) PPC_WEAK_FUNC(sub_829F90D0);
PPC_FUNC_IMPL(__imp__sub_829F90D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F90D8;
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
	ctx.lr = 0x829F90EC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f914c
	if (ctx.cr0.eq) goto loc_829F914C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2076
	ctx.r4.s64 = ctx.r11.s64 + -2076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9108;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f9128
	if (!ctx.cr6.eq) goto loc_829F9128;
	// bl 0x829f7e60
	ctx.lr = 0x829F9120;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F9128:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F9144;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9150
	goto loc_829F9150;
loc_829F914C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9150:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9160
	if (ctx.cr0.eq) goto loc_829F9160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9160;
	sub_829EF5F8(ctx, base);
loc_829F9160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9170"))) PPC_WEAK_FUNC(sub_829F9170);
PPC_FUNC_IMPL(__imp__sub_829F9170) {
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
	// bl 0x829f7f00
	ctx.lr = 0x829F918C;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1460
	ctx.r11.s64 = ctx.r11.s64 + -1460;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-2060
	ctx.r4.s64 = ctx.r10.s64 + -2060;
	// bl 0x8292c7c0
	ctx.lr = 0x829F91B0;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r9,-32218
	ctx.r9.s64 = -2111438848;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r9,-18684
	ctx.r4.s64 = ctx.r9.s64 + -18684;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x8292c7c0
	ctx.lr = 0x829F91E4;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F91F0;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F9208;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9210;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9218;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_829F9238"))) PPC_WEAK_FUNC(sub_829F9238);
PPC_FUNC_IMPL(__imp__sub_829F9238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9288
	ctx.lr = 0x829F9258;
	sub_829F9288(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9268
	if (ctx.cr0.eq) goto loc_829F9268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9268;
	sub_82765D70(ctx, base);
loc_829F9268:
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

__attribute__((alias("__imp__sub_829F9288"))) PPC_WEAK_FUNC(sub_829F9288);
PPC_FUNC_IMPL(__imp__sub_829F9288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1460
	ctx.r11.s64 = ctx.r11.s64 + -1460;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F92B0;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F92B8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F92C0;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F92D8"))) PPC_WEAK_FUNC(sub_829F92D8);
PPC_FUNC_IMPL(__imp__sub_829F92D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bne cr6,0x829f932c
	if (!ctx.cr6.eq) goto loc_829F932C;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829f9308
	if (ctx.cr6.lt) goto loc_829F9308;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829F9308:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x829f934c
	goto loc_829F934C;
loc_829F932C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x829f9338
	if (ctx.cr6.lt) goto loc_829F9338;
	// li r11,1
	ctx.r11.s64 = 1;
loc_829F9338:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_829F934C:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9360"))) PPC_WEAK_FUNC(sub_829F9360);
PPC_FUNC_IMPL(__imp__sub_829F9360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9368;
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
	ctx.lr = 0x829F937C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f93dc
	if (ctx.cr0.eq) goto loc_829F93DC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2040
	ctx.r4.s64 = ctx.r11.s64 + -2040;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9398;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f93b8
	if (!ctx.cr6.eq) goto loc_829F93B8;
	// bl 0x829f7e60
	ctx.lr = 0x829F93B0;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F93B8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F93D4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f93e0
	goto loc_829F93E0;
loc_829F93DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F93E0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f93f0
	if (ctx.cr0.eq) goto loc_829F93F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F93F0;
	sub_829EF5F8(ctx, base);
loc_829F93F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9400"))) PPC_WEAK_FUNC(sub_829F9400);
PPC_FUNC_IMPL(__imp__sub_829F9400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9450
	ctx.lr = 0x829F9420;
	sub_829F9450(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9430
	if (ctx.cr0.eq) goto loc_829F9430;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9430;
	sub_82765D70(ctx, base);
loc_829F9430:
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

__attribute__((alias("__imp__sub_829F9450"))) PPC_WEAK_FUNC(sub_829F9450);
PPC_FUNC_IMPL(__imp__sub_829F9450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9478;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9480;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9488;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F94A0"))) PPC_WEAK_FUNC(sub_829F94A0);
PPC_FUNC_IMPL(__imp__sub_829F94A0) {
	PPC_FUNC_PROLOGUE();
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F94A8"))) PPC_WEAK_FUNC(sub_829F94A8);
PPC_FUNC_IMPL(__imp__sub_829F94A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F94B0;
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
	ctx.lr = 0x829F94C4;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f9524
	if (ctx.cr0.eq) goto loc_829F9524;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2012
	ctx.r4.s64 = ctx.r11.s64 + -2012;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F94E0;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f9500
	if (!ctx.cr6.eq) goto loc_829F9500;
	// bl 0x829f7e60
	ctx.lr = 0x829F94F8;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F9500:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F951C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9528
	goto loc_829F9528;
loc_829F9524:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9528:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9538
	if (ctx.cr0.eq) goto loc_829F9538;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9538;
	sub_829EF5F8(ctx, base);
loc_829F9538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9548"))) PPC_WEAK_FUNC(sub_829F9548);
PPC_FUNC_IMPL(__imp__sub_829F9548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9598
	ctx.lr = 0x829F9568;
	sub_829F9598(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9578
	if (ctx.cr0.eq) goto loc_829F9578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9578;
	sub_82765D70(ctx, base);
loc_829F9578:
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

__attribute__((alias("__imp__sub_829F9598"))) PPC_WEAK_FUNC(sub_829F9598);
PPC_FUNC_IMPL(__imp__sub_829F9598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1356
	ctx.r11.s64 = ctx.r11.s64 + -1356;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F95C0;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F95C8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F95D0;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F95E8"))) PPC_WEAK_FUNC(sub_829F95E8);
PPC_FUNC_IMPL(__imp__sub_829F95E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9610"))) PPC_WEAK_FUNC(sub_829F9610);
PPC_FUNC_IMPL(__imp__sub_829F9610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9618;
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
	ctx.lr = 0x829F962C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f968c
	if (ctx.cr0.eq) goto loc_829F968C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1984
	ctx.r4.s64 = ctx.r11.s64 + -1984;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9648;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f9668
	if (!ctx.cr6.eq) goto loc_829F9668;
	// bl 0x829f7e60
	ctx.lr = 0x829F9660;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F9668:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F9684;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9690
	goto loc_829F9690;
loc_829F968C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9690:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f96a0
	if (ctx.cr0.eq) goto loc_829F96A0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F96A0;
	sub_829EF5F8(ctx, base);
loc_829F96A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F96B0"))) PPC_WEAK_FUNC(sub_829F96B0);
PPC_FUNC_IMPL(__imp__sub_829F96B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9700
	ctx.lr = 0x829F96D0;
	sub_829F9700(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f96e0
	if (ctx.cr0.eq) goto loc_829F96E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F96E0;
	sub_82765D70(ctx, base);
loc_829F96E0:
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

__attribute__((alias("__imp__sub_829F9700"))) PPC_WEAK_FUNC(sub_829F9700);
PPC_FUNC_IMPL(__imp__sub_829F9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1304
	ctx.r11.s64 = ctx.r11.s64 + -1304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9728;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9730;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9738;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9750"))) PPC_WEAK_FUNC(sub_829F9750);
PPC_FUNC_IMPL(__imp__sub_829F9750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x829f9764
	if (!ctx.cr6.gt) goto loc_829F9764;
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_829F9764:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9770"))) PPC_WEAK_FUNC(sub_829F9770);
PPC_FUNC_IMPL(__imp__sub_829F9770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9778;
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
	ctx.lr = 0x829F978C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f97ec
	if (ctx.cr0.eq) goto loc_829F97EC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1924
	ctx.r4.s64 = ctx.r11.s64 + -1924;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F97A8;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f97c8
	if (!ctx.cr6.eq) goto loc_829F97C8;
	// bl 0x829f7e60
	ctx.lr = 0x829F97C0;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F97C8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F97E4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f97f0
	goto loc_829F97F0;
loc_829F97EC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F97F0:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9800
	if (ctx.cr0.eq) goto loc_829F9800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9800;
	sub_829EF5F8(ctx, base);
loc_829F9800:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9810"))) PPC_WEAK_FUNC(sub_829F9810);
PPC_FUNC_IMPL(__imp__sub_829F9810) {
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
	// bl 0x829f7f00
	ctx.lr = 0x829F982C;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1252
	ctx.r11.s64 = ctx.r11.s64 + -1252;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-1904
	ctx.r4.s64 = ctx.r10.s64 + -1904;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9850;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r9,-1896
	ctx.r4.s64 = ctx.r9.s64 + -1896;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9884;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9890;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F98A8;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F98B0;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F98B8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_829F98D8"))) PPC_WEAK_FUNC(sub_829F98D8);
PPC_FUNC_IMPL(__imp__sub_829F98D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9928
	ctx.lr = 0x829F98F8;
	sub_829F9928(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9908
	if (ctx.cr0.eq) goto loc_829F9908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9908;
	sub_82765D70(ctx, base);
loc_829F9908:
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

__attribute__((alias("__imp__sub_829F9928"))) PPC_WEAK_FUNC(sub_829F9928);
PPC_FUNC_IMPL(__imp__sub_829F9928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1252
	ctx.r11.s64 = ctx.r11.s64 + -1252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9950;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9958;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9960;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9978"))) PPC_WEAK_FUNC(sub_829F9978);
PPC_FUNC_IMPL(__imp__sub_829F9978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829f9990
	if (!ctx.cr6.gt) goto loc_829F9990;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_829F9990:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F99A0"))) PPC_WEAK_FUNC(sub_829F99A0);
PPC_FUNC_IMPL(__imp__sub_829F99A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F99A8;
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
	ctx.lr = 0x829F99BC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f9a1c
	if (ctx.cr0.eq) goto loc_829F9A1C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1892
	ctx.r4.s64 = ctx.r11.s64 + -1892;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F99D8;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f99f8
	if (!ctx.cr6.eq) goto loc_829F99F8;
	// bl 0x829f7e60
	ctx.lr = 0x829F99F0;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F99F8:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F9A14;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9a20
	goto loc_829F9A20;
loc_829F9A1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9A20:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9a30
	if (ctx.cr0.eq) goto loc_829F9A30;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9A30;
	sub_829EF5F8(ctx, base);
loc_829F9A30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9A40"))) PPC_WEAK_FUNC(sub_829F9A40);
PPC_FUNC_IMPL(__imp__sub_829F9A40) {
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
	// bl 0x829f7f00
	ctx.lr = 0x829F9A5C;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-1872
	ctx.r4.s64 = ctx.r10.s64 + -1872;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9A80;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r4,r9,-1852
	ctx.r4.s64 = ctx.r9.s64 + -1852;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9AB4;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9AC0;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F9AD8;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9AE0;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9AE8;
	sub_829EF5F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_829F9B10"))) PPC_WEAK_FUNC(sub_829F9B10);
PPC_FUNC_IMPL(__imp__sub_829F9B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9b60
	ctx.lr = 0x829F9B30;
	sub_829F9B60(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9b40
	if (ctx.cr0.eq) goto loc_829F9B40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9B40;
	sub_82765D70(ctx, base);
loc_829F9B40:
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

__attribute__((alias("__imp__sub_829F9B60"))) PPC_WEAK_FUNC(sub_829F9B60);
PPC_FUNC_IMPL(__imp__sub_829F9B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1200
	ctx.r11.s64 = ctx.r11.s64 + -1200;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9B88;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9B90;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9B98;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9BB0"))) PPC_WEAK_FUNC(sub_829F9BB0);
PPC_FUNC_IMPL(__imp__sub_829F9BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829f9bc8
	if (!ctx.cr6.gt) goto loc_829F9BC8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_829F9BC8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9BD8"))) PPC_WEAK_FUNC(sub_829F9BD8);
PPC_FUNC_IMPL(__imp__sub_829F9BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9BE0;
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
	ctx.lr = 0x829F9BF4;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f9c54
	if (ctx.cr0.eq) goto loc_829F9C54;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1832
	ctx.r4.s64 = ctx.r11.s64 + -1832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9C10;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f9c30
	if (!ctx.cr6.eq) goto loc_829F9C30;
	// bl 0x829f7e60
	ctx.lr = 0x829F9C28;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F9C30:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F9C4C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9c58
	goto loc_829F9C58;
loc_829F9C54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9C58:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9c68
	if (ctx.cr0.eq) goto loc_829F9C68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9C68;
	sub_829EF5F8(ctx, base);
loc_829F9C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9C78"))) PPC_WEAK_FUNC(sub_829F9C78);
PPC_FUNC_IMPL(__imp__sub_829F9C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9cc8
	ctx.lr = 0x829F9C98;
	sub_829F9CC8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9ca8
	if (ctx.cr0.eq) goto loc_829F9CA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9CA8;
	sub_82765D70(ctx, base);
loc_829F9CA8:
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

__attribute__((alias("__imp__sub_829F9CC8"))) PPC_WEAK_FUNC(sub_829F9CC8);
PPC_FUNC_IMPL(__imp__sub_829F9CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1148
	ctx.r11.s64 = ctx.r11.s64 + -1148;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9CF0;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9CF8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9D00;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9D18"))) PPC_WEAK_FUNC(sub_829F9D18);
PPC_FUNC_IMPL(__imp__sub_829F9D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r3,16(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829f9d28
	if (ctx.cr6.eq) goto loc_829F9D28;
	// b 0x829fb280
	sub_829FB280(ctx, base);
	return;
loc_829F9D28:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829F9D38"))) PPC_WEAK_FUNC(sub_829F9D38);
PPC_FUNC_IMPL(__imp__sub_829F9D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9D40;
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
	ctx.lr = 0x829F9D54;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829f9db4
	if (ctx.cr0.eq) goto loc_829F9DB4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1788
	ctx.r4.s64 = ctx.r11.s64 + -1788;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9D70;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13496(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13496);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829f9d90
	if (!ctx.cr6.eq) goto loc_829F9D90;
	// bl 0x829f7e60
	ctx.lr = 0x829F9D88;
	sub_829F7E60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13496, ctx.r6.u32);
loc_829F9D90:
	// lis r11,-32097
	ctx.r11.s64 = -2103508992;
	// li r7,84
	ctx.r7.s64 = 84;
	// addi r8,r11,-12152
	ctx.r8.s64 = ctx.r11.s64 + -12152;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829F9DAC;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829f9db8
	goto loc_829F9DB8;
loc_829F9DB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829F9DB8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9dc8
	if (ctx.cr0.eq) goto loc_829F9DC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9DC8;
	sub_829EF5F8(ctx, base);
loc_829F9DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829F9DD8"))) PPC_WEAK_FUNC(sub_829F9DD8);
PPC_FUNC_IMPL(__imp__sub_829F9DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829F9DE0;
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
	// bl 0x829f7f00
	ctx.lr = 0x829F9DF4;
	sub_829F7F00(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1096
	ctx.r11.s64 = ctx.r11.s64 + -1096;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r10,-1764
	ctx.r4.s64 = ctx.r10.s64 + -1764;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9E18;
	sub_8292C7C0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1672
	ctx.r10.s64 = ctx.r10.s64 + -1672;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x829fa168
	ctx.lr = 0x829F9E44;
	sub_829FA168(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-2148
	ctx.r4.s64 = ctx.r11.s64 + -2148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9E58;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9E64;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F9E7C;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9E84;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9E8C;
	sub_829EF5F8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1752
	ctx.r4.s64 = ctx.r11.s64 + -1752;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9EA0;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9EAC;
	sub_8287EBA8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x829fa230
	ctx.lr = 0x829F9EC4;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9ECC;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9ED4;
	sub_829EF5F8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1744
	ctx.r4.s64 = ctx.r11.s64 + -1744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9EE8;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9EF4;
	sub_8287EBA8(ctx, base);
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fa230
	ctx.lr = 0x829F9F04;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9F0C;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9F14;
	sub_829EF5F8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-1736
	ctx.r4.s64 = ctx.r11.s64 + -1736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8292c7c0
	ctx.lr = 0x829F9F28;
	sub_8292C7C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8287eba8
	ctx.lr = 0x829F9F34;
	sub_8287EBA8(ctx, base);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fa230
	ctx.lr = 0x829F9F44;
	sub_829FA230(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9F4C;
	sub_829EF5F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9F54;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_829F9F68"))) PPC_WEAK_FUNC(sub_829F9F68);
PPC_FUNC_IMPL(__imp__sub_829F9F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f9fb8
	ctx.lr = 0x829F9F88;
	sub_829F9FB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829f9f98
	if (ctx.cr0.eq) goto loc_829F9F98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829F9F98;
	sub_82765D70(ctx, base);
loc_829F9F98:
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

__attribute__((alias("__imp__sub_829F9FB8"))) PPC_WEAK_FUNC(sub_829F9FB8);
PPC_FUNC_IMPL(__imp__sub_829F9FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// addi r11,r11,-1096
	ctx.r11.s64 = ctx.r11.s64 + -1096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829F9FE0;
	sub_829FA0A0(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x829ef5f8
	ctx.lr = 0x829F9FE8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f7fb8
	ctx.lr = 0x829F9FF0;
	sub_829F7FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA008"))) PPC_WEAK_FUNC(sub_829FA008);
PPC_FUNC_IMPL(__imp__sub_829FA008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x829fa070
	if (!ctx.cr6.eq) goto loc_829FA070;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829fa038
	if (!ctx.cr6.gt) goto loc_829FA038;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgt cr6,0x829fa04c
	if (ctx.cr6.gt) goto loc_829FA04C;
loc_829FA038:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829fa068
	if (ctx.cr6.gt) goto loc_829FA068;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x829fa068
	if (!ctx.cr6.lt) goto loc_829FA068;
loc_829FA04C:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f13,f0,f12
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_829FA068:
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_829FA070:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x829fa098
	if (!ctx.cr6.gt) goto loc_829FA098;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_829FA098:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA0A0"))) PPC_WEAK_FUNC(sub_829FA0A0);
PPC_FUNC_IMPL(__imp__sub_829FA0A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FA0A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r9,r9,-1672
	ctx.r9.s64 = ctx.r9.s64 + -1672;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x829fa0f4
	if (ctx.cr6.eq) goto loc_829FA0F4;
loc_829FA0D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fa0e8
	if (ctx.cr6.eq) goto loc_829FA0E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef5f8
	ctx.lr = 0x829FA0E8;
	sub_829EF5F8(ctx, base);
loc_829FA0E8:
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x829fa0d8
	if (!ctx.cr6.eq) goto loc_829FA0D8;
loc_829FA0F4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82765d70
	ctx.lr = 0x829FA0FC;
	sub_82765D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA118"))) PPC_WEAK_FUNC(sub_829FA118);
PPC_FUNC_IMPL(__imp__sub_829FA118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829fa0a0
	ctx.lr = 0x829FA138;
	sub_829FA0A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fa148
	if (ctx.cr0.eq) goto loc_829FA148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x829FA148;
	sub_82332DB8(ctx, base);
loc_829FA148:
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

__attribute__((alias("__imp__sub_829FA168"))) PPC_WEAK_FUNC(sub_829FA168);
PPC_FUNC_IMPL(__imp__sub_829FA168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829FA170;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fa224
	if (!ctx.cr6.gt) goto loc_829FA224;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x829fa1a4
	if (!ctx.cr6.eq) goto loc_829FA1A4;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x829fa1b0
	goto loc_829FA1B0;
loc_829FA1A4:
	// mulli r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 * 20;
	// bl 0x82765d00
	ctx.lr = 0x829FA1AC;
	sub_82765D00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_829FA1B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829fa1f8
	if (!ctx.cr6.gt) goto loc_829FA1F8;
loc_829FA1C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// add. r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x829fa1e8
	if (ctx.cr0.eq) goto loc_829FA1E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8287eba8
	ctx.lr = 0x829FA1E0;
	sub_8287EBA8(ctx, base);
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
loc_829FA1E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829fa1c0
	if (ctx.cr6.lt) goto loc_829FA1C0;
loc_829FA1F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829FA224;
	sub_829FA0A0(ctx, base);
loc_829FA224:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA230"))) PPC_WEAK_FUNC(sub_829FA230);
PPC_FUNC_IMPL(__imp__sub_829FA230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x829FA238;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829fa328
	if (ctx.cr6.lt) goto loc_829FA328;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// beq cr6,0x829fa264
	if (ctx.cr6.eq) goto loc_829FA264;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_829FA264:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r11,r11,-1672
	ctx.r11.s64 = ctx.r11.s64 + -1672;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x829fa280
	if (!ctx.cr6.eq) goto loc_829FA280;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x829fa28c
	goto loc_829FA28C;
loc_829FA280:
	// mulli r3,r26,20
	ctx.r3.s64 = ctx.r26.s64 * 20;
	// bl 0x82765d00
	ctx.lr = 0x829FA288;
	sub_82765D00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_829FA28C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x829fa2d4
	if (!ctx.cr6.gt) goto loc_829FA2D4;
loc_829FA29C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// add. r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x829fa2c4
	if (ctx.cr0.eq) goto loc_829FA2C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8287eba8
	ctx.lr = 0x829FA2BC;
	sub_8287EBA8(ctx, base);
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
loc_829FA2C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829fa29c
	if (ctx.cr6.lt) goto loc_829FA29C;
loc_829FA2D4:
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// add. r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x829fa2f4
	if (ctx.cr0.eq) goto loc_829FA2F4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8287eba8
	ctx.lr = 0x829FA2EC;
	sub_8287EBA8(ctx, base);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
loc_829FA2F4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x829fa0a0
	ctx.lr = 0x829FA324;
	sub_829FA0A0(ctx, base);
	// b 0x829fa358
	goto loc_829FA358;
loc_829FA328:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fa34c
	if (ctx.cr0.eq) goto loc_829FA34C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8287eba8
	ctx.lr = 0x829FA344;
	sub_8287EBA8(ctx, base);
	// lfs f0,16(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
loc_829FA34C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_829FA358:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA360"))) PPC_WEAK_FUNC(sub_829FA360);
PPC_FUNC_IMPL(__imp__sub_829FA360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FA368;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r31,13500(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13500);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829fa43c
	if (ctx.cr6.lt) goto loc_829FA43C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// beq cr6,0x829fa398
	if (ctx.cr6.eq) goto loc_829FA398;
	// rlwinm r30,r10,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_829FA398:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x829fa3b4
	if (!ctx.cr6.eq) goto loc_829FA3B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fa3bc
	goto loc_829FA3BC;
loc_829FA3B4:
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82765d00
	ctx.lr = 0x829FA3BC;
	sub_82765D00(ctx, base);
loc_829FA3BC:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x829fa3f4
	if (!ctx.cr6.gt) goto loc_829FA3F4;
loc_829FA3CC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x829fa3e4
	if (ctx.cr0.eq) goto loc_829FA3E4;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_829FA3E4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829fa3cc
	if (ctx.cr6.lt) goto loc_829FA3CC;
loc_829FA3F4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x829fa408
	if (ctx.cr0.eq) goto loc_829FA408;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_829FA408:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x829FA438;
	sub_829EF5F8(ctx, base);
	// b 0x829fa460
	goto loc_829FA460;
loc_829FA43C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fa454
	if (ctx.cr0.eq) goto loc_829FA454;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_829FA454:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_829FA460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA468"))) PPC_WEAK_FUNC(sub_829FA468);
PPC_FUNC_IMPL(__imp__sub_829FA468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FA470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fa4a0
	if (ctx.cr6.eq) goto loc_829FA4A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FA49C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x829fa4a4
	goto loc_829FA4A4;
loc_829FA4A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FA4A4:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fa63c
	if (ctx.cr0.eq) goto loc_829FA63C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829fa5b4
	if (!ctx.cr6.eq) goto loc_829FA5B4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fa528
	if (!ctx.cr6.eq) goto loc_829FA528;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829fa528
	if (ctx.cr6.eq) goto loc_829FA528;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_829FA4D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
loc_829FA4DC:
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// lbzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stbx r7,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829fa4dc
	if (ctx.cr6.lt) goto loc_829FA4DC;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x829fa4d4
	if (!ctx.cr0.eq) goto loc_829FA4D4;
loc_829FA528:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FA544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fa63c
	if (!ctx.cr6.eq) goto loc_829FA63C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829fa63c
	if (ctx.cr6.eq) goto loc_829FA63C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829FA55C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
loc_829FA564:
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829fa564
	if (ctx.cr6.lt) goto loc_829FA564;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x829fa55c
	if (!ctx.cr0.eq) goto loc_829FA55C;
	// b 0x829fa63c
	goto loc_829FA63C;
loc_829FA5B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FA5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fa63c
	if (!ctx.cr6.eq) goto loc_829FA63C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829fa63c
	if (ctx.cr6.eq) goto loc_829FA63C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_829FA5E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
loc_829FA5F0:
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829fa5f0
	if (ctx.cr6.lt) goto loc_829FA5F0;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x829fa5e8
	if (!ctx.cr0.eq) goto loc_829FA5E8;
loc_829FA63C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA648"))) PPC_WEAK_FUNC(sub_829FA648);
PPC_FUNC_IMPL(__imp__sub_829FA648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fa670
	if (!ctx.cr6.eq) goto loc_829FA670;
	// bl 0x829fa728
	ctx.lr = 0x829FA66C;
	sub_829FA728(ctx, base);
	// stw r3,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r3.u32);
loc_829FA670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA688"))) PPC_WEAK_FUNC(sub_829FA688);
PPC_FUNC_IMPL(__imp__sub_829FA688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fa6b0
	if (!ctx.cr6.eq) goto loc_829FA6B0;
	// bl 0x829fa728
	ctx.lr = 0x829FA6AC;
	sub_829FA728(ctx, base);
	// stw r3,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r3.u32);
loc_829FA6B0:
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

__attribute__((alias("__imp__sub_829FA6C8"))) PPC_WEAK_FUNC(sub_829FA6C8);
PPC_FUNC_IMPL(__imp__sub_829FA6C8) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82765d00
	ctx.lr = 0x829FA6DC;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fa710
	if (ctx.cr0.eq) goto loc_829FA710;
	// bl 0x829ed638
	ctx.lr = 0x829FA6E8;
	sub_829ED638(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1024
	ctx.r10.s64 = ctx.r10.s64 + -1024;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r9,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r9.u8);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// b 0x829fa714
	goto loc_829FA714;
loc_829FA710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FA714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA728"))) PPC_WEAK_FUNC(sub_829FA728);
PPC_FUNC_IMPL(__imp__sub_829FA728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FA730;
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
	ctx.lr = 0x829FA744;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fa7a4
	if (ctx.cr0.eq) goto loc_829FA7A4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-1044
	ctx.r4.s64 = ctx.r11.s64 + -1044;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FA760;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13412(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fa780
	if (!ctx.cr6.eq) goto loc_829FA780;
	// bl 0x829ea658
	ctx.lr = 0x829FA778;
	sub_829EA658(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r6.u32);
loc_829FA780:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r8,r11,-22840
	ctx.r8.s64 = ctx.r11.s64 + -22840;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FA79C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fa7a8
	goto loc_829FA7A8;
loc_829FA7A4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FA7A8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fa7b8
	if (ctx.cr0.eq) goto loc_829FA7B8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FA7B8;
	sub_829EF5F8(ctx, base);
loc_829FA7B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FA7C8"))) PPC_WEAK_FUNC(sub_829FA7C8);
PPC_FUNC_IMPL(__imp__sub_829FA7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82765d00
	ctx.lr = 0x829FA7E8;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fa820
	if (ctx.cr0.eq) goto loc_829FA820;
	// bl 0x829ed638
	ctx.lr = 0x829FA7F4;
	sub_829ED638(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1024
	ctx.r10.s64 = ctx.r10.s64 + -1024;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r9,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r9.u8);
	// stb r11,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r11.u8);
	// b 0x829fa824
	goto loc_829FA824;
loc_829FA820:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FA824:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FA83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_829FA858"))) PPC_WEAK_FUNC(sub_829FA858);
PPC_FUNC_IMPL(__imp__sub_829FA858) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA860"))) PPC_WEAK_FUNC(sub_829FA860);
PPC_FUNC_IMPL(__imp__sub_829FA860) {
	PPC_FUNC_PROLOGUE();
	// stb r4,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA868"))) PPC_WEAK_FUNC(sub_829FA868);
PPC_FUNC_IMPL(__imp__sub_829FA868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829edae0
	ctx.lr = 0x829FA880;
	sub_829EDAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA8A0"))) PPC_WEAK_FUNC(sub_829FA8A0);
PPC_FUNC_IMPL(__imp__sub_829FA8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ea910
	ctx.lr = 0x829FA8BC;
	sub_829EA910(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fa8d4
	if (!ctx.cr6.eq) goto loc_829FA8D4;
	// bl 0x829fa728
	ctx.lr = 0x829FA8D0;
	sub_829FA728(ctx, base);
	// stw r3,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r3.u32);
loc_829FA8D4:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FA8E8;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA900"))) PPC_WEAK_FUNC(sub_829FA900);
PPC_FUNC_IMPL(__imp__sub_829FA900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fa928
	if (!ctx.cr6.eq) goto loc_829FA928;
	// bl 0x829faa00
	ctx.lr = 0x829FA924;
	sub_829FAA00(ctx, base);
	// stw r3,13556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13556, ctx.r3.u32);
loc_829FA928:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FA940"))) PPC_WEAK_FUNC(sub_829FA940);
PPC_FUNC_IMPL(__imp__sub_829FA940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13556(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fa968
	if (!ctx.cr6.eq) goto loc_829FA968;
	// bl 0x829faa00
	ctx.lr = 0x829FA964;
	sub_829FAA00(ctx, base);
	// stw r3,13556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13556, ctx.r3.u32);
loc_829FA968:
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

__attribute__((alias("__imp__sub_829FA980"))) PPC_WEAK_FUNC(sub_829FA980);
PPC_FUNC_IMPL(__imp__sub_829FA980) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82765d00
	ctx.lr = 0x829FA998;
	sub_82765D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829fa9e4
	if (ctx.cr0.eq) goto loc_829FA9E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f0500
	ctx.lr = 0x829FA9A8;
	sub_829F0500(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-948
	ctx.r10.s64 = ctx.r10.s64 + -948;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x829eb508
	ctx.lr = 0x829FA9D4;
	sub_829EB508(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x829fa9e8
	goto loc_829FA9E8;
loc_829FA9E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FA9E8:
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

__attribute__((alias("__imp__sub_829FAA00"))) PPC_WEAK_FUNC(sub_829FAA00);
PPC_FUNC_IMPL(__imp__sub_829FAA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FAA08;
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
	ctx.lr = 0x829FAA1C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829faa7c
	if (ctx.cr0.eq) goto loc_829FAA7C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-960
	ctx.r4.s64 = ctx.r11.s64 + -960;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FAA38;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13444);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829faa58
	if (!ctx.cr6.eq) goto loc_829FAA58;
	// bl 0x829f0460
	ctx.lr = 0x829FAA50;
	sub_829F0460(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r6.u32);
loc_829FAA58:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r8,r11,-22144
	ctx.r8.s64 = ctx.r11.s64 + -22144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FAA74;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829faa80
	goto loc_829FAA80;
loc_829FAA7C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FAA80:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829faa90
	if (ctx.cr0.eq) goto loc_829FAA90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FAA90;
	sub_829EF5F8(ctx, base);
loc_829FAA90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FAAA0"))) PPC_WEAK_FUNC(sub_829FAAA0);
PPC_FUNC_IMPL(__imp__sub_829FAAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829faaf0
	ctx.lr = 0x829FAAC0;
	sub_829FAAF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829faad0
	if (ctx.cr0.eq) goto loc_829FAAD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829FAAD0;
	sub_82765D70(ctx, base);
loc_829FAAD0:
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

__attribute__((alias("__imp__sub_829FAAF0"))) PPC_WEAK_FUNC(sub_829FAAF0);
PPC_FUNC_IMPL(__imp__sub_829FAAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// addi r11,r11,-948
	ctx.r11.s64 = ctx.r11.s64 + -948;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x829fac90
	ctx.lr = 0x829FAB20;
	sub_829FAC90(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fab38
	if (ctx.cr6.eq) goto loc_829FAB38;
	// bl 0x82765d70
	ctx.lr = 0x829FAB30;
	sub_82765D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829FAB38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829f0680
	ctx.lr = 0x829FAB40;
	sub_829F0680(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FAB58"))) PPC_WEAK_FUNC(sub_829FAB58);
PPC_FUNC_IMPL(__imp__sub_829FAB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FAB60;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x829f0848
	ctx.lr = 0x829FAB70;
	sub_829F0848(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r3,13556(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13556);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fab88
	if (!ctx.cr6.eq) goto loc_829FAB88;
	// bl 0x829faa00
	ctx.lr = 0x829FAB84;
	sub_829FAA00(ctx, base);
	// stw r3,13556(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13556, ctx.r3.u32);
loc_829FAB88:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FAB9C;
	sub_829F2A88(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bl 0x829f2a88
	ctx.lr = 0x829FABB4;
	sub_829F2A88(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x829f2b18
	ctx.lr = 0x829FABC8;
	sub_829F2B18(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829fac30
	if (!ctx.cr6.eq) goto loc_829FAC30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829eb478
	ctx.lr = 0x829FABE0;
	sub_829EB478(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829eb508
	ctx.lr = 0x829FABEC;
	sub_829EB508(ctx, base);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x829fac20
	goto loc_829FAC20;
loc_829FABF4:
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r28.u16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f2a88
	ctx.lr = 0x829FAC04;
	sub_829F2A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FAC10;
	sub_829F2BA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x829eb508
	ctx.lr = 0x829FAC20;
	sub_829EB508(ctx, base);
loc_829FAC20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829fabf4
	if (!ctx.cr6.eq) goto loc_829FABF4;
	// b 0x829fac88
	goto loc_829FAC88;
loc_829FAC30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fac90
	ctx.lr = 0x829FAC38;
	sub_829FAC90(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fac88
	if (ctx.cr6.eq) goto loc_829FAC88;
loc_829FAC48:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fad00
	ctx.lr = 0x829FAC54;
	sub_829FAD00(ctx, base);
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x829f2a88
	ctx.lr = 0x829FAC6C;
	sub_829F2A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FAC78;
	sub_829F2BA8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829fac48
	if (ctx.cr6.lt) goto loc_829FAC48;
loc_829FAC88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FAC90"))) PPC_WEAK_FUNC(sub_829FAC90);
PPC_FUNC_IMPL(__imp__sub_829FAC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829face8
	if (ctx.cr6.eq) goto loc_829FACE8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x829faccc
	goto loc_829FACCC;
loc_829FACBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82765d70
	ctx.lr = 0x829FACC8;
	sub_82765D70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_829FACCC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x829facbc
	if (!ctx.cr6.eq) goto loc_829FACBC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82765d70
	ctx.lr = 0x829FACDC;
	sub_82765D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_829FACE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FAD00"))) PPC_WEAK_FUNC(sub_829FAD00);
PPC_FUNC_IMPL(__imp__sub_829FAD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FAD08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829eb508
	ctx.lr = 0x829FAD20;
	sub_829EB508(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82765d00
	ctx.lr = 0x829FAD30;
	sub_82765D00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// beq 0x829fad4c
	if (ctx.cr0.eq) goto loc_829FAD4C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_829FAD4C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FAD70"))) PPC_WEAK_FUNC(sub_829FAD70);
PPC_FUNC_IMPL(__imp__sub_829FAD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fad98
	if (!ctx.cr6.eq) goto loc_829FAD98;
	// bl 0x829fae38
	ctx.lr = 0x829FAD94;
	sub_829FAE38(ctx, base);
	// stw r3,13560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13560, ctx.r3.u32);
loc_829FAD98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FADB0"))) PPC_WEAK_FUNC(sub_829FADB0);
PPC_FUNC_IMPL(__imp__sub_829FADB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fadd8
	if (!ctx.cr6.eq) goto loc_829FADD8;
	// bl 0x829fae38
	ctx.lr = 0x829FADD4;
	sub_829FAE38(ctx, base);
	// stw r3,13560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13560, ctx.r3.u32);
loc_829FADD8:
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

__attribute__((alias("__imp__sub_829FADF0"))) PPC_WEAK_FUNC(sub_829FADF0);
PPC_FUNC_IMPL(__imp__sub_829FADF0) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82765d00
	ctx.lr = 0x829FAE04;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fae20
	if (ctx.cr0.eq) goto loc_829FAE20;
	// bl 0x829ed638
	ctx.lr = 0x829FAE10;
	sub_829ED638(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829fae24
	goto loc_829FAE24;
loc_829FAE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FAE24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FAE38"))) PPC_WEAK_FUNC(sub_829FAE38);
PPC_FUNC_IMPL(__imp__sub_829FAE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FAE40;
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
	ctx.lr = 0x829FAE54;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829faeb4
	if (ctx.cr0.eq) goto loc_829FAEB4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-916
	ctx.r4.s64 = ctx.r11.s64 + -916;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FAE70;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13432);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fae90
	if (!ctx.cr6.eq) goto loc_829FAE90;
	// bl 0x829ed598
	ctx.lr = 0x829FAE88;
	sub_829ED598(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13432, ctx.r6.u32);
loc_829FAE90:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,104
	ctx.r7.s64 = 104;
	// addi r8,r11,-21008
	ctx.r8.s64 = ctx.r11.s64 + -21008;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FAEAC;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829faeb8
	goto loc_829FAEB8;
loc_829FAEB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FAEB8:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829faec8
	if (ctx.cr0.eq) goto loc_829FAEC8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FAEC8;
	sub_829EF5F8(ctx, base);
loc_829FAEC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FAED8"))) PPC_WEAK_FUNC(sub_829FAED8);
PPC_FUNC_IMPL(__imp__sub_829FAED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829ed6f8
	ctx.lr = 0x829FAF04;
	sub_829ED6F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829faf14
	if (ctx.cr0.eq) goto loc_829FAF14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829FAF14;
	sub_82765D70(ctx, base);
loc_829FAF14:
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

__attribute__((alias("__imp__sub_829FAF30"))) PPC_WEAK_FUNC(sub_829FAF30);
PPC_FUNC_IMPL(__imp__sub_829FAF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82765d00
	ctx.lr = 0x829FAF50;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829faf70
	if (ctx.cr0.eq) goto loc_829FAF70;
	// bl 0x829ed638
	ctx.lr = 0x829FAF5C;
	sub_829ED638(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-900
	ctx.r11.s64 = ctx.r11.s64 + -900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x829faf74
	goto loc_829FAF74;
loc_829FAF70:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FAF74:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FAF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_829FAFA8"))) PPC_WEAK_FUNC(sub_829FAFA8);
PPC_FUNC_IMPL(__imp__sub_829FAFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829edb90
	ctx.lr = 0x829FAFC4;
	sub_829EDB90(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13560);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fafdc
	if (!ctx.cr6.eq) goto loc_829FAFDC;
	// bl 0x829fae38
	ctx.lr = 0x829FAFD8;
	sub_829FAE38(ctx, base);
	// stw r3,13560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13560, ctx.r3.u32);
loc_829FAFDC:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FAFF0;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB008"))) PPC_WEAK_FUNC(sub_829FB008);
PPC_FUNC_IMPL(__imp__sub_829FB008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fb030
	if (!ctx.cr6.eq) goto loc_829FB030;
	// bl 0x829fb0f8
	ctx.lr = 0x829FB02C;
	sub_829FB0F8(ctx, base);
	// stw r3,13564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13564, ctx.r3.u32);
loc_829FB030:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB048"))) PPC_WEAK_FUNC(sub_829FB048);
PPC_FUNC_IMPL(__imp__sub_829FB048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fb070
	if (!ctx.cr6.eq) goto loc_829FB070;
	// bl 0x829fb0f8
	ctx.lr = 0x829FB06C;
	sub_829FB0F8(ctx, base);
	// stw r3,13564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13564, ctx.r3.u32);
loc_829FB070:
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

__attribute__((alias("__imp__sub_829FB088"))) PPC_WEAK_FUNC(sub_829FB088);
PPC_FUNC_IMPL(__imp__sub_829FB088) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82765d00
	ctx.lr = 0x829FB09C;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fb0e0
	if (ctx.cr0.eq) goto loc_829FB0E0;
	// bl 0x829f0500
	ctx.lr = 0x829FB0A8;
	sub_829F0500(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-836
	ctx.r10.s64 = ctx.r10.s64 + -836;
	// addi r9,r9,-3216
	ctx.r9.s64 = ctx.r9.s64 + -3216;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x829fb0e4
	goto loc_829FB0E4;
loc_829FB0E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FB0E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB0F8"))) PPC_WEAK_FUNC(sub_829FB0F8);
PPC_FUNC_IMPL(__imp__sub_829FB0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FB100;
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
	ctx.lr = 0x829FB114;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fb174
	if (ctx.cr0.eq) goto loc_829FB174;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-848
	ctx.r4.s64 = ctx.r11.s64 + -848;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FB130;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13444(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13444);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fb150
	if (!ctx.cr6.eq) goto loc_829FB150;
	// bl 0x829f0460
	ctx.lr = 0x829FB148;
	sub_829F0460(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r6.u32);
loc_829FB150:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,44
	ctx.r7.s64 = 44;
	// addi r8,r11,-20344
	ctx.r8.s64 = ctx.r11.s64 + -20344;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FB16C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fb178
	goto loc_829FB178;
loc_829FB174:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FB178:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fb188
	if (ctx.cr0.eq) goto loc_829FB188;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FB188;
	sub_829EF5F8(ctx, base);
loc_829FB188:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB198"))) PPC_WEAK_FUNC(sub_829FB198);
PPC_FUNC_IMPL(__imp__sub_829FB198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x829FB1C8;
	sub_829EF5F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829f0680
	ctx.lr = 0x829FB1D0;
	sub_829F0680(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fb1e0
	if (ctx.cr0.eq) goto loc_829FB1E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829FB1E0;
	sub_82765D70(ctx, base);
loc_829FB1E0:
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

__attribute__((alias("__imp__sub_829FB200"))) PPC_WEAK_FUNC(sub_829FB200);
PPC_FUNC_IMPL(__imp__sub_829FB200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f05b0
	ctx.lr = 0x829FB220;
	sub_829F05B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// bne cr6,0x829fb230
	if (!ctx.cr6.eq) goto loc_829FB230;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829FB230:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r10,r10,-836
	ctx.r10.s64 = ctx.r10.s64 + -836;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x829fb478
	ctx.lr = 0x829FB250;
	sub_829FB478(ctx, base);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB280"))) PPC_WEAK_FUNC(sub_829FB280);
PPC_FUNC_IMPL(__imp__sub_829FB280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x829fb3ec
	if (ctx.cr6.eq) goto loc_829FB3EC;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x829fb2e8
	if (!ctx.cr6.gt) goto loc_829FB2E8;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mulli r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 * 20;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// lfs f13,-20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829fb2e0
	if (ctx.cr6.lt) goto loc_829FB2E0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// b 0x829fb3ec
	goto loc_829FB3EC;
loc_829FB2E0:
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x829fb2f0
	if (!ctx.cr6.eq) goto loc_829FB2F0;
loc_829FB2E8:
	// lfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// b 0x829fb3ec
	goto loc_829FB3EC;
loc_829FB2F0:
	// addic. r9,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x829fb324
	if (ctx.cr0.eq) goto loc_829FB324;
loc_829FB2FC:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x829fb314
	if (ctx.cr6.gt) goto loc_829FB314;
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829fb324
	if (ctx.cr6.lt) goto loc_829FB324;
loc_829FB314:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829fb2fc
	if (ctx.cr6.lt) goto loc_829FB2FC;
loc_829FB324:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// beq cr6,0x829fb340
	if (ctx.cr6.eq) goto loc_829FB340;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// b 0x829fb348
	goto loc_829FB348;
loc_829FB340:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r10,-20
	ctx.r11.s64 = ctx.r10.s64 + -20;
loc_829FB348:
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x829fb3c0
	if (!ctx.cr6.eq) goto loc_829FB3C0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r9,-11456
	ctx.r8.s64 = ctx.r9.s64 + -11456;
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-11456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-15844(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15844);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fdivs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fmsubs f13,f10,f13,f7
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmsubs f10,f11,f0,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fnmsubs f0,f8,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fadds f13,f10,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// fsubs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f1,f0,f12,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// b 0x829fb3ec
	goto loc_829FB3EC;
loc_829FB3C0:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x829fb3ec
	if (!ctx.cr6.eq) goto loc_829FB3EC;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmadds f1,f0,f11,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f12.f64));
loc_829FB3EC:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f1,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB400"))) PPC_WEAK_FUNC(sub_829FB400);
PPC_FUNC_IMPL(__imp__sub_829FB400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FB408;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829f0848
	ctx.lr = 0x829FB418;
	sub_829F0848(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r3,13564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13564);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fb430
	if (!ctx.cr6.eq) goto loc_829FB430;
	// bl 0x829fb0f8
	ctx.lr = 0x829FB42C;
	sub_829FB0F8(ctx, base);
	// stw r3,13564(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13564, ctx.r3.u32);
loc_829FB430:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FB444;
	sub_829F2A88(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x829f2b18
	ctx.lr = 0x829FB458;
	sub_829F2B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x829fb520
	ctx.lr = 0x829FB464;
	sub_829FB520(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB478"))) PPC_WEAK_FUNC(sub_829FB478);
PPC_FUNC_IMPL(__imp__sub_829FB478) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x829fb6b8
	ctx.lr = 0x829FB49C;
	sub_829FB6B8(ctx, base);
	// b 0x829fb4f0
	goto loc_829FB4F0;
loc_829FB4A0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x829fb4e4
	if (ctx.cr0.eq) goto loc_829FB4E4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_829FB4E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_829FB4F0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x829fb4a0
	if (ctx.cr6.lt) goto loc_829FB4A0;
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

__attribute__((alias("__imp__sub_829FB520"))) PPC_WEAK_FUNC(sub_829FB520);
PPC_FUNC_IMPL(__imp__sub_829FB520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829FB528;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829f2a88
	ctx.lr = 0x829FB54C;
	sub_829F2A88(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x829f2b18
	ctx.lr = 0x829FB560;
	sub_829F2B18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x829fb5e0
	if (!ctx.cr6.eq) goto loc_829FB5E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fb6a8
	if (ctx.cr6.eq) goto loc_829FB6A8;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_829FB580:
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x829f2a88
	ctx.lr = 0x829FB598;
	sub_829F2A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// addi r23,r31,4
	ctx.r23.s64 = ctx.r31.s64 + 4;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB5B0;
	sub_829F2BA8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB5B8;
	sub_829F2BA8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB5C0;
	sub_829F2BA8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB5C8;
	sub_829F2BA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829fb580
	if (ctx.cr6.lt) goto loc_829FB580;
	// b 0x829fb6a8
	goto loc_829FB6A8;
loc_829FB5E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x829fb6b8
	ctx.lr = 0x829FB5EC;
	sub_829FB6B8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x829fb678
	if (ctx.cr6.eq) goto loc_829FB678;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r31,r29,12
	ctx.r31.s64 = ctx.r29.s64 + 12;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_829FB60C:
	// addic. r11,r31,-12
	ctx.xer.ca = ctx.r31.u32 > 11;
	ctx.r11.s64 = ctx.r31.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fb628
	if (ctx.cr0.eq) goto loc_829FB628;
	// stfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stfs f31,-8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_829FB628:
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829f2a88
	ctx.lr = 0x829FB638;
	sub_829F2A88(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r25,r31,-4
	ctx.r25.s64 = ctx.r31.s64 + -4;
	// addi r24,r31,-8
	ctx.r24.s64 = ctx.r31.s64 + -8;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB64C;
	sub_829F2BA8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB654;
	sub_829F2BA8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB65C;
	sub_829F2BA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829f2ba8
	ctx.lr = 0x829FB664;
	sub_829F2BA8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x829fb60c
	if (ctx.cr6.lt) goto loc_829FB60C;
loc_829FB678:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x829FB6A8;
	sub_829EF5F8(ctx, base);
loc_829FB6A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB6B8"))) PPC_WEAK_FUNC(sub_829FB6B8);
PPC_FUNC_IMPL(__imp__sub_829FB6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-3216
	ctx.r11.s64 = ctx.r11.s64 + -3216;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x829fb6f0
	if (!ctx.cr6.eq) goto loc_829FB6F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fb6f8
	goto loc_829FB6F8;
loc_829FB6F0:
	// mulli r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 * 20;
	// bl 0x82765d00
	ctx.lr = 0x829FB6F8;
	sub_82765D00(ctx, base);
loc_829FB6F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB728"))) PPC_WEAK_FUNC(sub_829FB728);
PPC_FUNC_IMPL(__imp__sub_829FB728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fb750
	if (!ctx.cr6.eq) goto loc_829FB750;
	// bl 0x829fb7e0
	ctx.lr = 0x829FB74C;
	sub_829FB7E0(ctx, base);
	// stw r3,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r3.u32);
loc_829FB750:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB768"))) PPC_WEAK_FUNC(sub_829FB768);
PPC_FUNC_IMPL(__imp__sub_829FB768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fb790
	if (!ctx.cr6.eq) goto loc_829FB790;
	// bl 0x829fb7e0
	ctx.lr = 0x829FB78C;
	sub_829FB7E0(ctx, base);
	// stw r3,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r3.u32);
loc_829FB790:
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

__attribute__((alias("__imp__sub_829FB7A8"))) PPC_WEAK_FUNC(sub_829FB7A8);
PPC_FUNC_IMPL(__imp__sub_829FB7A8) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82765d00
	ctx.lr = 0x829FB7BC;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fb7cc
	if (ctx.cr0.eq) goto loc_829FB7CC;
	// bl 0x829fb880
	ctx.lr = 0x829FB7C8;
	sub_829FB880(ctx, base);
	// b 0x829fb7d0
	goto loc_829FB7D0;
loc_829FB7CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FB7D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FB7E0"))) PPC_WEAK_FUNC(sub_829FB7E0);
PPC_FUNC_IMPL(__imp__sub_829FB7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FB7E8;
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
	ctx.lr = 0x829FB7FC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fb85c
	if (ctx.cr0.eq) goto loc_829FB85C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-804
	ctx.r4.s64 = ctx.r11.s64 + -804;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FB818;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13552);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fb838
	if (!ctx.cr6.eq) goto loc_829FB838;
	// bl 0x829fa728
	ctx.lr = 0x829FB830;
	sub_829FA728(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13552, ctx.r6.u32);
loc_829FB838:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,116
	ctx.r7.s64 = 116;
	// addi r8,r11,-18520
	ctx.r8.s64 = ctx.r11.s64 + -18520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FB854;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fb860
	goto loc_829FB860;
loc_829FB85C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FB860:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fb870
	if (ctx.cr0.eq) goto loc_829FB870;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FB870;
	sub_829EF5F8(ctx, base);
loc_829FB870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB880"))) PPC_WEAK_FUNC(sub_829FB880);
PPC_FUNC_IMPL(__imp__sub_829FB880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FB888;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829ed638
	ctx.lr = 0x829FB894;
	sub_829ED638(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,-768
	ctx.r10.s64 = ctx.r10.s64 + -768;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// bl 0x829ed2a0
	ctx.lr = 0x829FB8C4;
	sub_829ED2A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r4,r11,-780
	ctx.r4.s64 = ctx.r11.s64 + -780;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FB8DC;
	sub_8292C7C0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829FB8EC;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829f0760
	ctx.lr = 0x829FB8F8;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829FB900;
	sub_829F3898(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FB908;
	sub_829EF5F8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,21968
	ctx.r4.s64 = ctx.r11.s64 + 21968;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292c7c0
	ctx.lr = 0x829FB91C;
	sub_8292C7C0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829fb934
	if (!ctx.cr6.eq) goto loc_829FB934;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8287e760
	ctx.lr = 0x829FB934;
	sub_8287E760(ctx, base);
loc_829FB934:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ef5f8
	ctx.lr = 0x829FB93C;
	sub_829EF5F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829eda40
	ctx.lr = 0x829FB948;
	sub_829EDA40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ed4c0
	ctx.lr = 0x829FB950;
	sub_829ED4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB960"))) PPC_WEAK_FUNC(sub_829FB960);
PPC_FUNC_IMPL(__imp__sub_829FB960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82765d00
	ctx.lr = 0x829FB980;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fb994
	if (ctx.cr0.eq) goto loc_829FB994;
	// bl 0x829fb880
	ctx.lr = 0x829FB98C;
	sub_829FB880(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fb998
	goto loc_829FB998;
loc_829FB994:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FB998:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FB9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_829FB9D0"))) PPC_WEAK_FUNC(sub_829FB9D0);
PPC_FUNC_IMPL(__imp__sub_829FB9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x829ea788
	sub_829EA788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FB9D8"))) PPC_WEAK_FUNC(sub_829FB9D8);
PPC_FUNC_IMPL(__imp__sub_829FB9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829fa8a0
	ctx.lr = 0x829FB9F4;
	sub_829FA8A0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13568);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fba0c
	if (!ctx.cr6.eq) goto loc_829FBA0C;
	// bl 0x829fb7e0
	ctx.lr = 0x829FBA08;
	sub_829FB7E0(ctx, base);
	// stw r3,13568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13568, ctx.r3.u32);
loc_829FBA0C:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FBA20;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBA38"))) PPC_WEAK_FUNC(sub_829FBA38);
PPC_FUNC_IMPL(__imp__sub_829FBA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fba60
	if (!ctx.cr6.eq) goto loc_829FBA60;
	// bl 0x829fbb08
	ctx.lr = 0x829FBA5C;
	sub_829FBB08(ctx, base);
	// stw r3,13572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13572, ctx.r3.u32);
loc_829FBA60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBA78"))) PPC_WEAK_FUNC(sub_829FBA78);
PPC_FUNC_IMPL(__imp__sub_829FBA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbaa0
	if (!ctx.cr6.eq) goto loc_829FBAA0;
	// bl 0x829fbb08
	ctx.lr = 0x829FBA9C;
	sub_829FBB08(ctx, base);
	// stw r3,13572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13572, ctx.r3.u32);
loc_829FBAA0:
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

__attribute__((alias("__imp__sub_829FBAB8"))) PPC_WEAK_FUNC(sub_829FBAB8);
PPC_FUNC_IMPL(__imp__sub_829FBAB8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82765d00
	ctx.lr = 0x829FBACC;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fbaf0
	if (ctx.cr0.eq) goto loc_829FBAF0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-692
	ctx.r10.s64 = ctx.r10.s64 + -692;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x829fbaf4
	goto loc_829FBAF4;
loc_829FBAF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FBAF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBB08"))) PPC_WEAK_FUNC(sub_829FBB08);
PPC_FUNC_IMPL(__imp__sub_829FBB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FBB10;
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
	ctx.lr = 0x829FBB24;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fbb84
	if (ctx.cr0.eq) goto loc_829FBB84;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-704
	ctx.r4.s64 = ctx.r11.s64 + -704;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FBB40;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13468(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13468);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fbb60
	if (!ctx.cr6.eq) goto loc_829FBB60;
	// bl 0x829f3f58
	ctx.lr = 0x829FBB58;
	sub_829F3F58(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13468, ctx.r6.u32);
loc_829FBB60:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r8,r11,-17736
	ctx.r8.s64 = ctx.r11.s64 + -17736;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FBB7C;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fbb88
	goto loc_829FBB88;
loc_829FBB84:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FBB88:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fbb98
	if (ctx.cr0.eq) goto loc_829FBB98;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FBB98;
	sub_829EF5F8(ctx, base);
loc_829FBB98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FBBA8"))) PPC_WEAK_FUNC(sub_829FBBA8);
PPC_FUNC_IMPL(__imp__sub_829FBBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829f3ff8
	ctx.lr = 0x829FBBC4;
	sub_829F3FF8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13572);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbbdc
	if (!ctx.cr6.eq) goto loc_829FBBDC;
	// bl 0x829fbb08
	ctx.lr = 0x829FBBD8;
	sub_829FBB08(ctx, base);
	// stw r3,13572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13572, ctx.r3.u32);
loc_829FBBDC:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FBBF0;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBC08"))) PPC_WEAK_FUNC(sub_829FBC08);
PPC_FUNC_IMPL(__imp__sub_829FBC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbc30
	if (!ctx.cr6.eq) goto loc_829FBC30;
	// bl 0x829fbcc0
	ctx.lr = 0x829FBC2C;
	sub_829FBCC0(ctx, base);
	// stw r3,13576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13576, ctx.r3.u32);
loc_829FBC30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBC48"))) PPC_WEAK_FUNC(sub_829FBC48);
PPC_FUNC_IMPL(__imp__sub_829FBC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbc70
	if (!ctx.cr6.eq) goto loc_829FBC70;
	// bl 0x829fbcc0
	ctx.lr = 0x829FBC6C;
	sub_829FBCC0(ctx, base);
	// stw r3,13576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13576, ctx.r3.u32);
loc_829FBC70:
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

__attribute__((alias("__imp__sub_829FBC88"))) PPC_WEAK_FUNC(sub_829FBC88);
PPC_FUNC_IMPL(__imp__sub_829FBC88) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82765d00
	ctx.lr = 0x829FBC9C;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fbcac
	if (ctx.cr0.eq) goto loc_829FBCAC;
	// bl 0x829fbd60
	ctx.lr = 0x829FBCA8;
	sub_829FBD60(ctx, base);
	// b 0x829fbcb0
	goto loc_829FBCB0;
loc_829FBCAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FBCB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBCC0"))) PPC_WEAK_FUNC(sub_829FBCC0);
PPC_FUNC_IMPL(__imp__sub_829FBCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FBCC8;
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
	ctx.lr = 0x829FBCDC;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fbd3c
	if (ctx.cr0.eq) goto loc_829FBD3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-664
	ctx.r4.s64 = ctx.r11.s64 + -664;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FBCF8;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13412(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13412);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fbd18
	if (!ctx.cr6.eq) goto loc_829FBD18;
	// bl 0x829ea658
	ctx.lr = 0x829FBD10;
	sub_829EA658(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13412, ctx.r6.u32);
loc_829FBD18:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,112
	ctx.r7.s64 = 112;
	// addi r8,r11,-17272
	ctx.r8.s64 = ctx.r11.s64 + -17272;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FBD34;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fbd40
	goto loc_829FBD40;
loc_829FBD3C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FBD40:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fbd50
	if (ctx.cr0.eq) goto loc_829FBD50;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FBD50;
	sub_829EF5F8(ctx, base);
loc_829FBD50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FBD60"))) PPC_WEAK_FUNC(sub_829FBD60);
PPC_FUNC_IMPL(__imp__sub_829FBD60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FBD68;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829ed638
	ctx.lr = 0x829FBD74;
	sub_829ED638(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-624
	ctx.r10.s64 = ctx.r10.s64 + -624;
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// bl 0x829ed2a0
	ctx.lr = 0x829FBDA0;
	sub_829ED2A0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,-1
	ctx.r30.s64 = -1;
	// addi r4,r11,-644
	ctx.r4.s64 = ctx.r11.s64 + -644;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FBDB8;
	sub_8292C7C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3700
	ctx.lr = 0x829FBDC8;
	sub_829F3700(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829f0760
	ctx.lr = 0x829FBDD4;
	sub_829F0760(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829f3898
	ctx.lr = 0x829FBDDC;
	sub_829F3898(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FBDE4;
	sub_829EF5F8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,21968
	ctx.r4.s64 = ctx.r11.s64 + 21968;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8292c7c0
	ctx.lr = 0x829FBDF8;
	sub_8292C7C0(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x829fbe10
	if (!ctx.cr6.eq) goto loc_829FBE10;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8287e760
	ctx.lr = 0x829FBE10;
	sub_8287E760(ctx, base);
loc_829FBE10:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829ef5f8
	ctx.lr = 0x829FBE18;
	sub_829EF5F8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829eda40
	ctx.lr = 0x829FBE24;
	sub_829EDA40(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x829ed4c0
	ctx.lr = 0x829FBE2C;
	sub_829ED4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FBE38"))) PPC_WEAK_FUNC(sub_829FBE38);
PPC_FUNC_IMPL(__imp__sub_829FBE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829ea9c0
	ctx.lr = 0x829FBE64;
	sub_829EA9C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fbe74
	if (ctx.cr0.eq) goto loc_829FBE74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829FBE74;
	sub_82765D70(ctx, base);
loc_829FBE74:
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

__attribute__((alias("__imp__sub_829FBE90"))) PPC_WEAK_FUNC(sub_829FBE90);
PPC_FUNC_IMPL(__imp__sub_829FBE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82765d00
	ctx.lr = 0x829FBEB0;
	sub_82765D00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fbec4
	if (ctx.cr0.eq) goto loc_829FBEC4;
	// bl 0x829fbd60
	ctx.lr = 0x829FBEBC;
	sub_829FBD60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fbec8
	goto loc_829FBEC8;
loc_829FBEC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FBEC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FBEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_829FBF00"))) PPC_WEAK_FUNC(sub_829FBF00);
PPC_FUNC_IMPL(__imp__sub_829FBF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829edae0
	ctx.lr = 0x829FBF18;
	sub_829EDAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBF38"))) PPC_WEAK_FUNC(sub_829FBF38);
PPC_FUNC_IMPL(__imp__sub_829FBF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829ea910
	ctx.lr = 0x829FBF54;
	sub_829EA910(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbf6c
	if (!ctx.cr6.eq) goto loc_829FBF6C;
	// bl 0x829fbcc0
	ctx.lr = 0x829FBF68;
	sub_829FBCC0(ctx, base);
	// stw r3,13576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13576, ctx.r3.u32);
loc_829FBF6C:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FBF80;
	sub_829F2A88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBF98"))) PPC_WEAK_FUNC(sub_829FBF98);
PPC_FUNC_IMPL(__imp__sub_829FBF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fbfc0
	if (!ctx.cr6.eq) goto loc_829FBFC0;
	// bl 0x829fc080
	ctx.lr = 0x829FBFBC;
	sub_829FC080(ctx, base);
	// stw r3,13580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13580, ctx.r3.u32);
loc_829FBFC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FBFD8"))) PPC_WEAK_FUNC(sub_829FBFD8);
PPC_FUNC_IMPL(__imp__sub_829FBFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,13580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fc000
	if (!ctx.cr6.eq) goto loc_829FC000;
	// bl 0x829fc080
	ctx.lr = 0x829FBFFC;
	sub_829FC080(ctx, base);
	// stw r3,13580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13580, ctx.r3.u32);
loc_829FC000:
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

__attribute__((alias("__imp__sub_829FC018"))) PPC_WEAK_FUNC(sub_829FC018);
PPC_FUNC_IMPL(__imp__sub_829FC018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82765d00
	ctx.lr = 0x829FC030;
	sub_82765D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x829fc064
	if (ctx.cr0.eq) goto loc_829FC064;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-548
	ctx.r10.s64 = ctx.r10.s64 + -548;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8286dac0
	ctx.lr = 0x829FC05C;
	sub_8286DAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829fc068
	goto loc_829FC068;
loc_829FC064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FC068:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FC080"))) PPC_WEAK_FUNC(sub_829FC080);
PPC_FUNC_IMPL(__imp__sub_829FC080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FC088;
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
	ctx.lr = 0x829FC09C;
	sub_82765D00(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x829fc0fc
	if (ctx.cr0.eq) goto loc_829FC0FC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-560
	ctx.r4.s64 = ctx.r11.s64 + -560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292c7c0
	ctx.lr = 0x829FC0B8;
	sub_8292C7C0(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r6,13572(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13572);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829fc0d8
	if (!ctx.cr6.eq) goto loc_829FC0D8;
	// bl 0x829fbb08
	ctx.lr = 0x829FC0D0;
	sub_829FBB08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,13572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13572, ctx.r6.u32);
loc_829FC0D8:
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// li r7,28
	ctx.r7.s64 = 28;
	// addi r8,r11,-16360
	ctx.r8.s64 = ctx.r11.s64 + -16360;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ef4d0
	ctx.lr = 0x829FC0F4;
	sub_829EF4D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x829fc100
	goto loc_829FC100;
loc_829FC0FC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_829FC100:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fc110
	if (ctx.cr0.eq) goto loc_829FC110;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ef5f8
	ctx.lr = 0x829FC110;
	sub_829EF5F8(ctx, base);
loc_829FC110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FC120"))) PPC_WEAK_FUNC(sub_829FC120);
PPC_FUNC_IMPL(__imp__sub_829FC120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829fc170
	ctx.lr = 0x829FC140;
	sub_829FC170(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x829fc150
	if (ctx.cr0.eq) goto loc_829FC150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82765d70
	ctx.lr = 0x829FC150;
	sub_82765D70(ctx, base);
loc_829FC150:
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

__attribute__((alias("__imp__sub_829FC170"))) PPC_WEAK_FUNC(sub_829FC170);
PPC_FUNC_IMPL(__imp__sub_829FC170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// addi r11,r11,-548
	ctx.r11.s64 = ctx.r11.s64 + -548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x829ef5f8
	ctx.lr = 0x829FC198;
	sub_829EF5F8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r11,r11,-3144
	ctx.r11.s64 = ctx.r11.s64 + -3144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FC1B8"))) PPC_WEAK_FUNC(sub_829FC1B8);
PPC_FUNC_IMPL(__imp__sub_829FC1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FC1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x829fbba8
	ctx.lr = 0x829FC1D0;
	sub_829FBBA8(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,13580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13580);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fc1e8
	if (!ctx.cr6.eq) goto loc_829FC1E8;
	// bl 0x829fc080
	ctx.lr = 0x829FC1E4;
	sub_829FC080(ctx, base);
	// stw r3,13580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13580, ctx.r3.u32);
loc_829FC1E8:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x829f2a88
	ctx.lr = 0x829FC1FC;
	sub_829F2A88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// bl 0x829ee2c0
	ctx.lr = 0x829FC208;
	sub_829EE2C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FC210"))) PPC_WEAK_FUNC(sub_829FC210);
PPC_FUNC_IMPL(__imp__sub_829FC210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x829FC218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// rlwinm r10,r6,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// mullw r9,r24,r6
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r6.s32);
	// lbz r11,11832(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11832);
	// lbz r25,12528(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12528);
	// stb r10,12528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12528, ctx.r10.u8);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// rlwinm r23,r9,30,2,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829fc260
	if (ctx.cr6.eq) goto loc_829FC260;
	// lwz r11,12696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fc260
	if (ctx.cr6.eq) goto loc_829FC260;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_829FC260:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// rldicr r11,r11,0,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x829fc2a0
	if (ctx.cr6.eq) goto loc_829FC2A0;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FC29C;
	sub_82747D80(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_829FC2A0:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x829fc2c0
	if (ctx.cr6.eq) goto loc_829FC2C0;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FC2BC;
	sub_82747D80(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_829FC2C0:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x829fc3a0
	if (ctx.cr6.eq) goto loc_829FC3A0;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc2e4
	if (ctx.cr6.eq) goto loc_829FC2E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82748b08
	ctx.lr = 0x829FC2E0;
	sub_82748B08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC2E4:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc308
	if (ctx.cr6.eq) goto loc_829FC308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747650
	ctx.lr = 0x829FC304;
	sub_82747650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC308:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc328
	if (ctx.cr6.eq) goto loc_829FC328;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC328;
	sub_827479E8(ctx, base);
loc_829FC328:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc348
	if (ctx.cr6.eq) goto loc_829FC348;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC348;
	sub_827479E8(ctx, base);
loc_829FC348:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc374
	if (ctx.cr6.eq) goto loc_829FC374;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC374;
	sub_827479E8(ctx, base);
loc_829FC374:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc39c
	if (ctx.cr6.eq) goto loc_829FC39C;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC39C;
	sub_827479E8(ctx, base);
loc_829FC39C:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_829FC3A0:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x829fc3f0
	if (ctx.cr6.eq) goto loc_829FC3F0;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc3c0
	if (ctx.cr6.eq) goto loc_829FC3C0;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747c28
	ctx.lr = 0x829FC3C0;
	sub_82747C28(ctx, base);
loc_829FC3C0:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc3ec
	if (ctx.cr6.eq) goto loc_829FC3EC;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC3EC;
	sub_827479E8(ctx, base);
loc_829FC3EC:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_829FC3F0:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x829fc48c
	if (ctx.cr6.eq) goto loc_829FC48C;
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc418
	if (ctx.cr6.eq) goto loc_829FC418;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC418;
	sub_827479E8(ctx, base);
loc_829FC418:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc440
	if (ctx.cr6.eq) goto loc_829FC440;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC440;
	sub_827479E8(ctx, base);
loc_829FC440:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc460
	if (ctx.cr6.eq) goto loc_829FC460;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747aa8
	ctx.lr = 0x829FC460;
	sub_82747AA8(ctx, base);
loc_829FC460:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc488
	if (ctx.cr6.eq) goto loc_829FC488;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC488;
	sub_827479E8(ctx, base);
loc_829FC488:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_829FC48C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r25,12528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12528, ctx.r25.u8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fc4ac
	if (!ctx.cr6.gt) goto loc_829FC4AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x829FC4A8;
	sub_82746938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC4AC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745bb8
	ctx.lr = 0x829FC4BC;
	sub_82745BB8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x829fc4d0
	if (!ctx.cr0.eq) goto loc_829FC4D0;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fc6a0
	goto loc_829FC6A0;
loc_829FC4D0:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,18618
	ctx.r8.u64 = ctx.r11.u64 | 18618;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r28,3
	ctx.r11.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r4,2
	ctx.r10.u64 = ctx.r4.u64 | 2;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// rlwimi r10,r23,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r23.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// ori r8,r8,20480
	ctx.r8.u64 = ctx.r8.u64 | 20480;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r10,12122(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12122);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r29,r10,23
	ctx.r29.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r29,r29,0,26,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x829fc5b8
	if (!ctx.cr0.eq) goto loc_829FC5B8;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// clrlwi r10,r22,26
	ctx.r10.u64 = ctx.r22.u32 & 0x3F;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x829fc684
	goto loc_829FC684;
loc_829FC5B8:
	// lwz r11,13256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = ctx.r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829fc5d8
	if (!ctx.cr6.gt) goto loc_829FC5D8;
	// bl 0x82745730
	ctx.lr = 0x829FC5D4;
	sub_82745730(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829FC5D8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// rlwinm r6,r24,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r22,26
	ctx.r7.u64 = ctx.r22.u32 & 0x3F;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r29,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_829FC684:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stw r11,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r11.u32);
	// stw r28,13448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13448, ctx.r28.u32);
	// stw r23,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r23.u32);
loc_829FC6A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FC6A8"))) PPC_WEAK_FUNC(sub_829FC6A8);
PPC_FUNC_IMPL(__imp__sub_829FC6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829FC6B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x829fc210
	ctx.lr = 0x829FC6CC;
	sub_829FC210(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fc6e8
	if (ctx.cr0.eq) goto loc_829FC6E8;
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x829FC6E0;
	sub_82A4EA80(ctx, base);
	// lwz r11,13444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13444);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_829FC6E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FC6F0"))) PPC_WEAK_FUNC(sub_829FC6F0);
PPC_FUNC_IMPL(__imp__sub_829FC6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x829FC6F8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// lbz r11,11832(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11832);
	// rlwinm r22,r10,31,1,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r25,12528(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12528);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stb r9,12528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12528, ctx.r9.u8);
	// beq cr6,0x829fc740
	if (ctx.cr6.eq) goto loc_829FC740;
	// lwz r11,12696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fc740
	if (ctx.cr6.eq) goto loc_829FC740;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_829FC740:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x829fc774
	if (ctx.cr6.eq) goto loc_829FC774;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FC770;
	sub_82747D80(ctx, base);
	// std r23,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r23.u64);
loc_829FC774:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x829fc794
	if (ctx.cr6.eq) goto loc_829FC794;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FC790;
	sub_82747D80(ctx, base);
	// std r23,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r23.u64);
loc_829FC794:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x829fc874
	if (ctx.cr6.eq) goto loc_829FC874;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc7b8
	if (ctx.cr6.eq) goto loc_829FC7B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82748b08
	ctx.lr = 0x829FC7B4;
	sub_82748B08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC7B8:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc7dc
	if (ctx.cr6.eq) goto loc_829FC7DC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747650
	ctx.lr = 0x829FC7D8;
	sub_82747650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC7DC:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc7fc
	if (ctx.cr6.eq) goto loc_829FC7FC;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC7FC;
	sub_827479E8(ctx, base);
loc_829FC7FC:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc81c
	if (ctx.cr6.eq) goto loc_829FC81C;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC81C;
	sub_827479E8(ctx, base);
loc_829FC81C:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc848
	if (ctx.cr6.eq) goto loc_829FC848;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC848;
	sub_827479E8(ctx, base);
loc_829FC848:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc870
	if (ctx.cr6.eq) goto loc_829FC870;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC870;
	sub_827479E8(ctx, base);
loc_829FC870:
	// std r23,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r23.u64);
loc_829FC874:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x829fc8c4
	if (ctx.cr6.eq) goto loc_829FC8C4;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc894
	if (ctx.cr6.eq) goto loc_829FC894;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747c28
	ctx.lr = 0x829FC894;
	sub_82747C28(ctx, base);
loc_829FC894:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc8c0
	if (ctx.cr6.eq) goto loc_829FC8C0;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC8C0;
	sub_827479E8(ctx, base);
loc_829FC8C0:
	// std r23,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r23.u64);
loc_829FC8C4:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x829fc960
	if (ctx.cr6.eq) goto loc_829FC960;
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc8ec
	if (ctx.cr6.eq) goto loc_829FC8EC;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC8EC;
	sub_827479E8(ctx, base);
loc_829FC8EC:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc914
	if (ctx.cr6.eq) goto loc_829FC914;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC914;
	sub_827479E8(ctx, base);
loc_829FC914:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc934
	if (ctx.cr6.eq) goto loc_829FC934;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747aa8
	ctx.lr = 0x829FC934;
	sub_82747AA8(ctx, base);
loc_829FC934:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fc95c
	if (ctx.cr6.eq) goto loc_829FC95C;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FC95C;
	sub_827479E8(ctx, base);
loc_829FC95C:
	// std r23,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r23.u64);
loc_829FC960:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stb r25,12528(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12528, ctx.r25.u8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fc980
	if (!ctx.cr6.gt) goto loc_829FC980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x829FC97C;
	sub_82746938(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FC980:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745bb8
	ctx.lr = 0x829FC990;
	sub_82745BB8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745bb8
	ctx.lr = 0x829FC9A4;
	sub_82745BB8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x829fcbb0
	if (ctx.cr6.eq) goto loc_829FCBB0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x829fcbb0
	if (ctx.cr6.eq) goto loc_829FCBB0;
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// ori r8,r11,18618
	ctx.r8.u64 = ctx.r11.u64 | 18618;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// rlwinm r11,r25,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r25,3
	ctx.r11.u64 = ctx.r25.u32 & 0x1FFFFFFF;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r8,r4,98
	ctx.r8.u64 = ctx.r4.u64 | 98;
	// ori r4,r11,3
	ctx.r4.u64 = ctx.r11.u64 | 3;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r20,r11,20480
	ctx.r20.u64 = ctx.r11.u64 | 20480;
	// rlwinm r11,r24,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 12) & 0xFFF;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// clrlwi r10,r24,3
	ctx.r10.u64 = ctx.r24.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r26,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r26,8
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFFFF;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// ori r28,r9,4
	ctx.r28.u64 = ctx.r9.u64 | 4;
	// oris r27,r11,16384
	ctx.r27.u64 = ctx.r11.u64 | 1073741824;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r20,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// stwu r19,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// stwu r23,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r30.u32 = ea;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbz r10,12122(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12122);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r26,r10,23
	ctx.r26.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r26,r26,0,26,23
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x829fcab4
	if (!ctx.cr0.eq) goto loc_829FCAB4;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// b 0x829fcb78
	goto loc_829FCB78;
loc_829FCAB4:
	// lwz r11,13256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = ctx.r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829fcad4
	if (!ctx.cr6.gt) goto loc_829FCAD4;
	// bl 0x82745730
	ctx.lr = 0x829FCAD0;
	sub_82745730(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829FCAD4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r5.u32 = ea;
	// stwu r27,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_829FCB78:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// std r10,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r10.u64);
	// stw r11,13444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13444, ctx.r11.u32);
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// stw r25,13448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13448, ctx.r25.u32);
	// stw r24,13452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13452, ctx.r24.u32);
	// stw r9,13456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13456, ctx.r9.u32);
	// stw r22,13460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13460, ctx.r22.u32);
	// b 0x829fcbc8
	goto loc_829FCBC8;
loc_829FCBB0:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_829FCBC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FCBD0"))) PPC_WEAK_FUNC(sub_829FCBD0);
PPC_FUNC_IMPL(__imp__sub_829FCBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x829FCBD8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x829fcc1c
	if (ctx.cr6.eq) goto loc_829FCC1C;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x82747d80
	ctx.lr = 0x829FCC18;
	sub_82747D80(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_829FCC1C:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x829fcc3c
	if (ctx.cr6.eq) goto loc_829FCC3C;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FCC38;
	sub_82747D80(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_829FCC3C:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x829fcd1c
	if (ctx.cr6.eq) goto loc_829FCD1C;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcc60
	if (ctx.cr6.eq) goto loc_829FCC60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82748b08
	ctx.lr = 0x829FCC5C;
	sub_82748B08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FCC60:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcc84
	if (ctx.cr6.eq) goto loc_829FCC84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747650
	ctx.lr = 0x829FCC80;
	sub_82747650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FCC84:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcca4
	if (ctx.cr6.eq) goto loc_829FCCA4;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCCA4;
	sub_827479E8(ctx, base);
loc_829FCCA4:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fccc4
	if (ctx.cr6.eq) goto loc_829FCCC4;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCCC4;
	sub_827479E8(ctx, base);
loc_829FCCC4:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fccf0
	if (ctx.cr6.eq) goto loc_829FCCF0;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCCF0;
	sub_827479E8(ctx, base);
loc_829FCCF0:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcd18
	if (ctx.cr6.eq) goto loc_829FCD18;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCD18;
	sub_827479E8(ctx, base);
loc_829FCD18:
	// std r26,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_829FCD1C:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x829fcd6c
	if (ctx.cr6.eq) goto loc_829FCD6C;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcd3c
	if (ctx.cr6.eq) goto loc_829FCD3C;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747c28
	ctx.lr = 0x829FCD3C;
	sub_82747C28(ctx, base);
loc_829FCD3C:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcd68
	if (ctx.cr6.eq) goto loc_829FCD68;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCD68;
	sub_827479E8(ctx, base);
loc_829FCD68:
	// std r26,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_829FCD6C:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x829fce08
	if (ctx.cr6.eq) goto loc_829FCE08;
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcd94
	if (ctx.cr6.eq) goto loc_829FCD94;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCD94;
	sub_827479E8(ctx, base);
loc_829FCD94:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcdbc
	if (ctx.cr6.eq) goto loc_829FCDBC;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCDBC;
	sub_827479E8(ctx, base);
loc_829FCDBC:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fcddc
	if (ctx.cr6.eq) goto loc_829FCDDC;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747aa8
	ctx.lr = 0x829FCDDC;
	sub_82747AA8(ctx, base);
loc_829FCDDC:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fce04
	if (ctx.cr6.eq) goto loc_829FCE04;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FCE04;
	sub_827479E8(ctx, base);
loc_829FCE04:
	// std r26,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_829FCE08:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r26,r31,12122
	ctx.r26.s64 = ctx.r31.s64 + 12122;
	// addi r27,r11,-2784
	ctx.r27.s64 = ctx.r11.s64 + -2784;
loc_829FCE14:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fce2c
	if (!ctx.cr6.gt) goto loc_829FCE2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x829FCE2C;
	sub_82746938(ctx, base);
loc_829FCE2C:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r24,65535
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 65535, ctx.xer);
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ble cr6,0x829fce68
	if (!ctx.cr6.gt) goto loc_829FCE68;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_829FCE68:
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// rlwimi r11,r10,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r28,r11,23
	ctx.r28.u64 = ctx.r11.u32 & 0x1FF;
	// rlwinm r28,r28,0,26,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x829fcec4
	if (!ctx.cr0.eq) goto loc_829FCEC4;
	// lis r11,-16383
	ctx.r11.s64 = -1073676288;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// clrlwi r9,r25,26
	ctx.r9.u64 = ctx.r25.u32 & 0x3F;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x829fcf90
	goto loc_829FCF90;
loc_829FCEC4:
	// lwz r11,13256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = ctx.r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829fcee4
	if (!ctx.cr6.gt) goto loc_829FCEE4;
	// bl 0x82745730
	ctx.lr = 0x829FCEE0;
	sub_82745730(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829FCEE4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// clrlwi r6,r25,26
	ctx.r6.u64 = ctx.r25.u32 & 0x3F;
	// rlwinm r7,r29,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_829FCF90:
	// subf. r10,r29,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x829fcfb8
	if (ctx.cr0.eq) goto loc_829FCFB8;
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 + ctx.r23.u64;
	// b 0x829fce14
	goto loc_829FCE14;
loc_829FCFB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FCFC0"))) PPC_WEAK_FUNC(sub_829FCFC0);
PPC_FUNC_IMPL(__imp__sub_829FCFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x829FCFC8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// beq cr6,0x829fd00c
	if (ctx.cr6.eq) goto loc_829FD00C;
	// addi r6,r31,1920
	ctx.r6.s64 = ctx.r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x82747d80
	ctx.lr = 0x829FD008;
	sub_82747D80(ctx, base);
	// std r17,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r17.u64);
loc_829FD00C:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x829fd02c
	if (ctx.cr6.eq) goto loc_829FD02C;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747d80
	ctx.lr = 0x829FD028;
	sub_82747D80(ctx, base);
	// std r17,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r17.u64);
loc_829FD02C:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x829fd10c
	if (ctx.cr6.eq) goto loc_829FD10C;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd050
	if (ctx.cr6.eq) goto loc_829FD050;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82748b08
	ctx.lr = 0x829FD04C;
	sub_82748B08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FD050:
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd074
	if (ctx.cr6.eq) goto loc_829FD074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747650
	ctx.lr = 0x829FD070;
	sub_82747650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_829FD074:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd094
	if (ctx.cr6.eq) goto loc_829FD094;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD094;
	sub_827479E8(ctx, base);
loc_829FD094:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd0b4
	if (ctx.cr6.eq) goto loc_829FD0B4;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD0B4;
	sub_827479E8(ctx, base);
loc_829FD0B4:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd0e0
	if (ctx.cr6.eq) goto loc_829FD0E0;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD0E0;
	sub_827479E8(ctx, base);
loc_829FD0E0:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd108
	if (ctx.cr6.eq) goto loc_829FD108;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD108;
	sub_827479E8(ctx, base);
loc_829FD108:
	// std r17,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r17.u64);
loc_829FD10C:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x829fd15c
	if (ctx.cr6.eq) goto loc_829FD15C;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd12c
	if (ctx.cr6.eq) goto loc_829FD12C;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747c28
	ctx.lr = 0x829FD12C;
	sub_82747C28(ctx, base);
loc_829FD12C:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd158
	if (ctx.cr6.eq) goto loc_829FD158;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD158;
	sub_827479E8(ctx, base);
loc_829FD158:
	// std r17,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r17.u64);
loc_829FD15C:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x829fd1f8
	if (ctx.cr6.eq) goto loc_829FD1F8;
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd184
	if (ctx.cr6.eq) goto loc_829FD184;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD184;
	sub_827479E8(ctx, base);
loc_829FD184:
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd1ac
	if (ctx.cr6.eq) goto loc_829FD1AC;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD1AC;
	sub_827479E8(ctx, base);
loc_829FD1AC:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd1cc
	if (ctx.cr6.eq) goto loc_829FD1CC;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82747aa8
	ctx.lr = 0x829FD1CC;
	sub_82747AA8(ctx, base);
loc_829FD1CC:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x829fd1f4
	if (ctx.cr6.eq) goto loc_829FD1F4;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x829FD1F4;
	sub_827479E8(ctx, base);
loc_829FD1F4:
	// std r17,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r17.u64);
loc_829FD1F8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r24,12436(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12436);
	// addi r23,r31,12122
	ctx.r23.s64 = ctx.r31.s64 + 12122;
	// clrlwi r22,r18,26
	ctx.r22.u64 = ctx.r18.u32 & 0x3F;
	// addi r20,r11,-2784
	ctx.r20.s64 = ctx.r11.s64 + -2784;
loc_829FD20C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fd224
	if (!ctx.cr6.gt) goto loc_829FD224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x829FD224;
	sub_82746938(ctx, base);
loc_829FD224:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 65535, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ble cr6,0x829fd264
	if (!ctx.cr6.gt) goto loc_829FD264;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// twllei r11,0
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_829FD264:
	// lbz r8,12187(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// subfic r9,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// lbzx r4,r23,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r8.u32);
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// addi r5,r9,512
	ctx.r5.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r8,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r8,r5,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// rlwinm r11,r6,1,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	ctx.r26.u64 = ctx.r4.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// or r30,r7,r22
	ctx.r30.u64 = ctx.r7.u64 | ctx.r22.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x829fd2ec
	if (ctx.cr0.eq) goto loc_829FD2EC;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	ctx.r30.u64 = ctx.r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_829FD2EC:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x829fd31c
	if (!ctx.cr0.eq) goto loc_829FD31C;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + ctx.r25.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r25.u32 = ea;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// b 0x829fd3e0
	goto loc_829FD3E0;
loc_829FD31C:
	// lwz r11,13256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = ctx.r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829fd33c
	if (!ctx.cr6.gt) goto loc_829FD33C;
	// bl 0x82745730
	ctx.lr = 0x829FD338;
	sub_82745730(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829FD33C:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_829FD3E0:
	// subf. r10,r27,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x829fd408
	if (ctx.cr0.eq) goto loc_829FD408;
	// addi r9,r20,4
	ctx.r9.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 + ctx.r21.u64;
	// b 0x829fd20c
	goto loc_829FD20C;
loc_829FD408:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD410"))) PPC_WEAK_FUNC(sub_829FD410);
PPC_FUNC_IMPL(__imp__sub_829FD410) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fd524
	if (ctx.cr6.eq) goto loc_829FD524;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fd524
	if (ctx.cr6.eq) goto loc_829FD524;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829fd454
	if (!ctx.cr6.eq) goto loc_829FD454;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x829fd524
	if (ctx.cr6.gt) goto loc_829FD524;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-31888
	ctx.r11.s64 = ctx.r11.s64 + -31888;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_829FD454:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fd480
	if (!ctx.cr6.eq) goto loc_829FD480;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x829fd524
	if (ctx.cr6.gt) goto loc_829FD524;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-31888
	ctx.r11.s64 = ctx.r11.s64 + -31888;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_829FD480:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829fd4ec
	if (ctx.cr6.eq) goto loc_829FD4EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829fd4bc
	if (ctx.cr6.eq) goto loc_829FD4BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x829fd524
	if (!ctx.cr6.eq) goto loc_829FD524;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x829fd524
	if (!ctx.cr6.eq) goto loc_829FD524;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-31888
	ctx.r9.s64 = ctx.r11.s64 + -31888;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_829FD4BC:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x829fd4cc
	if (ctx.cr6.eq) goto loc_829FD4CC;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x829fd524
	if (!ctx.cr6.eq) goto loc_829FD524;
loc_829FD4CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-31888
	ctx.r11.s64 = ctx.r11.s64 + -31888;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,-96
	ctx.r9.s64 = ctx.r11.s64 + -96;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_829FD4EC:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x829fd504
	if (ctx.cr6.eq) goto loc_829FD504;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x829fd504
	if (ctx.cr6.eq) goto loc_829FD504;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x829fd524
	if (!ctx.cr6.eq) goto loc_829FD524;
loc_829FD504:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-31888
	ctx.r11.s64 = ctx.r11.s64 + -31888;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r9,r11,-144
	ctx.r9.s64 = ctx.r11.s64 + -144;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_829FD524:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FD530"))) PPC_WEAK_FUNC(sub_829FD530);
PPC_FUNC_IMPL(__imp__sub_829FD530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD558;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD578;
	sub_8312E73C(ctx, base);
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

__attribute__((alias("__imp__sub_829FD598"))) PPC_WEAK_FUNC(sub_829FD598);
PPC_FUNC_IMPL(__imp__sub_829FD598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD5C0;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD5E0;
	sub_8312E73C(ctx, base);
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

__attribute__((alias("__imp__sub_829FD600"))) PPC_WEAK_FUNC(sub_829FD600);
PPC_FUNC_IMPL(__imp__sub_829FD600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829FD608;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8312e74c
	ctx.lr = 0x829FD630;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD660;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD670"))) PPC_WEAK_FUNC(sub_829FD670);
PPC_FUNC_IMPL(__imp__sub_829FD670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FD678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD694;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD6B8;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD6C8"))) PPC_WEAK_FUNC(sub_829FD6C8);
PPC_FUNC_IMPL(__imp__sub_829FD6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FD6D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD6EC;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD710;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD720"))) PPC_WEAK_FUNC(sub_829FD720);
PPC_FUNC_IMPL(__imp__sub_829FD720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FD728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD744;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD768;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD778"))) PPC_WEAK_FUNC(sub_829FD778);
PPC_FUNC_IMPL(__imp__sub_829FD778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FD780;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-12168
	ctx.r27.s64 = ctx.r11.s64 + -12168;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8312e74c
	ctx.lr = 0x829FD7A4;
	sub_8312E74C(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x829FD7B4;
	sub_82A4EA80(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FD7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x829fd80c
	if (ctx.cr6.lt) goto loc_829FD80C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a061c0
	ctx.lr = 0x829FD7E8;
	sub_82A061C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// std r9,52(r31)
	PPC_STORE_U64(ctx.r31.u32 + 52, ctx.r9.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FD808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_829FD80C:
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD814;
	sub_8312E73C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD820"))) PPC_WEAK_FUNC(sub_829FD820);
PPC_FUNC_IMPL(__imp__sub_829FD820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829FD828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8312e74c
	ctx.lr = 0x829FD848;
	sub_8312E74C(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD870;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD880"))) PPC_WEAK_FUNC(sub_829FD880);
PPC_FUNC_IMPL(__imp__sub_829FD880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD8A8;
	sub_8312E74C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a05e30
	ctx.lr = 0x829FD8B0;
	sub_82A05E30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD8BC;
	sub_8312E73C(ctx, base);
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

__attribute__((alias("__imp__sub_829FD8D8"))) PPC_WEAK_FUNC(sub_829FD8D8);
PPC_FUNC_IMPL(__imp__sub_829FD8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FD8E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD8FC;
	sub_8312E74C(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a05820
	ctx.lr = 0x829FD908;
	sub_82A05820(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD914;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD920"))) PPC_WEAK_FUNC(sub_829FD920);
PPC_FUNC_IMPL(__imp__sub_829FD920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FD928;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD944;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD95C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD968;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD978"))) PPC_WEAK_FUNC(sub_829FD978);
PPC_FUNC_IMPL(__imp__sub_829FD978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FD9A0;
	sub_8312E74C(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FD9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FD9C0;
	sub_8312E73C(ctx, base);
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

__attribute__((alias("__imp__sub_829FD9E0"))) PPC_WEAK_FUNC(sub_829FD9E0);
PPC_FUNC_IMPL(__imp__sub_829FD9E0) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDA10;
	sub_8312E74C(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stfs f31,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 140, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FDA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDA34;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_829FDA58"))) PPC_WEAK_FUNC(sub_829FDA58);
PPC_FUNC_IMPL(__imp__sub_829FDA58) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDA88;
	sub_8312E74C(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FDAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDAAC;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_829FDAD0"))) PPC_WEAK_FUNC(sub_829FDAD0);
PPC_FUNC_IMPL(__imp__sub_829FDAD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829fdad8
	sub_829FDAD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDAD8"))) PPC_WEAK_FUNC(sub_829FDAD8);
PPC_FUNC_IMPL(__imp__sub_829FDAD8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12168
	ctx.r30.s64 = ctx.r11.s64 + -12168;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDB00;
	sub_8312E74C(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fdb30
	if (ctx.cr6.eq) goto loc_829FDB30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FDB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDB28;
	sub_8312E73C(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fdba4
	goto loc_829FDBA4;
loc_829FDB30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829fdb4c
	if (!ctx.cr6.eq) goto loc_829FDB4C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_829FDB4C:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r10,-2476
	ctx.r10.s64 = ctx.r10.s64 + -2476;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829fdb80
	if (!ctx.cr6.lt) goto loc_829FDB80;
loc_829FDB68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fdb80
	if (!ctx.cr6.eq) goto loc_829FDB80;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x829fdb68
	if (ctx.cr6.lt) goto loc_829FDB68;
loc_829FDB80:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FDB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDBA0;
	sub_8312E73C(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829FDBA4:
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

__attribute__((alias("__imp__sub_829FDBC0"))) PPC_WEAK_FUNC(sub_829FDBC0);
PPC_FUNC_IMPL(__imp__sub_829FDBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// ori r9,r11,6144
	ctx.r9.u64 = ctx.r11.u64 | 6144;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r5,r8,13584
	ctx.r5.s64 = ctx.r8.s64 + 13584;
	// lwbrx r11,0,r9
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stw r11,10528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10528, ctx.r11.u32);
	// b 0x82a03a30
	sub_82A03A30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDBE8"))) PPC_WEAK_FUNC(sub_829FDBE8);
PPC_FUNC_IMPL(__imp__sub_829FDBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDC0C;
	sub_8312E74C(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fdc2c
	if (!ctx.cr6.eq) goto loc_829FDC2C;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDC24;
	sub_8312E73C(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fdc4c
	goto loc_829FDC4C;
loc_829FDC2C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FDC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDC48;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829FDC4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDC68"))) PPC_WEAK_FUNC(sub_829FDC68);
PPC_FUNC_IMPL(__imp__sub_829FDC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FDC70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDC8C;
	sub_8312E74C(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a052e8
	ctx.lr = 0x829FDC9C;
	sub_82A052E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x829fdcb0
	if (ctx.cr6.lt) goto loc_829FDCB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_829FDCB0:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDCB8;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDCC8"))) PPC_WEAK_FUNC(sub_829FDCC8);
PPC_FUNC_IMPL(__imp__sub_829FDCC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FDCD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x829FDCEC;
	sub_8312E74C(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a075b0
	ctx.lr = 0x829FDCFC;
	sub_82A075B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x829fdd10
	if (ctx.cr6.lt) goto loc_829FDD10;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_829FDD10:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x829FDD18;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDD28"))) PPC_WEAK_FUNC(sub_829FDD28);
PPC_FUNC_IMPL(__imp__sub_829FDD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-464
	ctx.r9.s64 = ctx.r11.s64 + -464;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x829fdd60
	if (ctx.cr6.eq) goto loc_829FDD60;
	// lis r4,24962
	ctx.r4.s64 = 1635909632;
	// bl 0x82a45ee8
	ctx.lr = 0x829FDD5C;
	sub_82A45EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829FDD60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDD78"))) PPC_WEAK_FUNC(sub_829FDD78);
PPC_FUNC_IMPL(__imp__sub_829FDD78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829FDD94"))) PPC_WEAK_FUNC(sub_829FDD94);
PPC_FUNC_IMPL(__imp__sub_829FDD94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDD98"))) PPC_WEAK_FUNC(sub_829FDD98);
PPC_FUNC_IMPL(__imp__sub_829FDD98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDDA0"))) PPC_WEAK_FUNC(sub_829FDDA0);
PPC_FUNC_IMPL(__imp__sub_829FDDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDDB0"))) PPC_WEAK_FUNC(sub_829FDDB0);
PPC_FUNC_IMPL(__imp__sub_829FDDB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FDDC0"))) PPC_WEAK_FUNC(sub_829FDDC0);
PPC_FUNC_IMPL(__imp__sub_829FDDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a084c8
	sub_82A084C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDDC8"))) PPC_WEAK_FUNC(sub_829FDDC8);
PPC_FUNC_IMPL(__imp__sub_829FDDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FDDD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FDDE0;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fde08
	if (ctx.cr6.eq) goto loc_829FDE08;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829fde24
	if (ctx.cr6.eq) goto loc_829FDE24;
loc_829FDE08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FDE10;
	sub_8312E89C(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// b 0x829fde28
	goto loc_829FDE28;
loc_829FDE24:
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
loc_829FDE28:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x829fde50
	if (ctx.cr6.eq) goto loc_829FDE50;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fdea0
	if (!ctx.cr6.eq) goto loc_829FDEA0;
loc_829FDE50:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fde90
	if (ctx.cr6.eq) goto loc_829FDE90;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829fde90
	if (!ctx.cr6.eq) goto loc_829FDE90;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fde90
	if (!ctx.cr0.eq) goto loc_829FDE90;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8312e8ac
	ctx.lr = 0x829FDE88;
	sub_8312E8AC(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FDE90;
	sub_8312F16C(ctx, base);
loc_829FDE90:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_829FDEA0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x829fdeb8
	if (ctx.cr6.eq) goto loc_829FDEB8;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_829FDEB8:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fdef8
	if (ctx.cr6.eq) goto loc_829FDEF8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829fdef8
	if (!ctx.cr6.eq) goto loc_829FDEF8;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fdef8
	if (!ctx.cr0.eq) goto loc_829FDEF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8312e8ac
	ctx.lr = 0x829FDEF0;
	sub_8312E8AC(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FDEF8;
	sub_8312F16C(ctx, base);
loc_829FDEF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDF08"))) PPC_WEAK_FUNC(sub_829FDF08);
PPC_FUNC_IMPL(__imp__sub_829FDF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829FDF10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FDF24;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fdf4c
	if (ctx.cr6.eq) goto loc_829FDF4C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829fdf60
	if (ctx.cr6.eq) goto loc_829FDF60;
loc_829FDF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FDF54;
	sub_8312E89C(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r26.u8);
loc_829FDF60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// clrlwi r9,r27,24
	ctx.r9.u64 = ctx.r27.u32 & 0xFF;
	// lbz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// andc r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stb r6,156(r30)
	PPC_STORE_U8(ctx.r30.u32 + 156, ctx.r6.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fdfcc
	if (ctx.cr6.eq) goto loc_829FDFCC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829fdfcc
	if (!ctx.cr6.eq) goto loc_829FDFCC;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fdfcc
	if (!ctx.cr0.eq) goto loc_829FDFCC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x8312e8ac
	ctx.lr = 0x829FDFC4;
	sub_8312E8AC(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FDFCC;
	sub_8312F16C(ctx, base);
loc_829FDFCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDFD8"))) PPC_WEAK_FUNC(sub_829FDFD8);
PPC_FUNC_IMPL(__imp__sub_829FDFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829FDFE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FDFEC;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fe014
	if (ctx.cr6.eq) goto loc_829FE014;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829fe028
	if (ctx.cr6.eq) goto loc_829FE028;
loc_829FE014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FE01C;
	sub_8312E89C(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_829FE028:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829fe04c
	if (!ctx.cr6.eq) goto loc_829FE04C;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x829fe060
	goto loc_829FE060;
loc_829FE04C:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fe078
	if (ctx.cr6.eq) goto loc_829FE078;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_829FE060:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_829FE078:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fe0c0
	if (ctx.cr6.eq) goto loc_829FE0C0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829fe0c0
	if (!ctx.cr6.eq) goto loc_829FE0C0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fe0c0
	if (!ctx.cr0.eq) goto loc_829FE0C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8312e8ac
	ctx.lr = 0x829FE0B8;
	sub_8312E8AC(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FE0C0;
	sub_8312F16C(ctx, base);
loc_829FE0C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE0D0"))) PPC_WEAK_FUNC(sub_829FE0D0);
PPC_FUNC_IMPL(__imp__sub_829FE0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FE0D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FE0E8;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fe110
	if (ctx.cr6.eq) goto loc_829FE110;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829fe124
	if (ctx.cr6.eq) goto loc_829FE124;
loc_829FE110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FE118;
	sub_8312E89C(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_829FE124:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829fe1ac
	if (ctx.cr6.eq) goto loc_829FE1AC;
	// clrlwi r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829fe18c
	if (!ctx.cr6.eq) goto loc_829FE18C;
	// rlwinm r9,r10,0,27,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// rlwinm r9,r9,0,30,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829fe18c
	if (!ctx.cr6.eq) goto loc_829FE18C;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829fe1ac
	if (!ctx.cr6.eq) goto loc_829FE1AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// sth r9,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r9.u16);
	// b 0x829fe1a8
	goto loc_829FE1A8;
loc_829FE18C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FE1A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_829FE1AC:
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fe1f4
	if (ctx.cr6.eq) goto loc_829FE1F4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x829fe1f4
	if (!ctx.cr6.eq) goto loc_829FE1F4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fe1f4
	if (!ctx.cr0.eq) goto loc_829FE1F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8312e8ac
	ctx.lr = 0x829FE1EC;
	sub_8312E8AC(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FE1F4;
	sub_8312F16C(ctx, base);
loc_829FE1F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE200"))) PPC_WEAK_FUNC(sub_829FE200);
PPC_FUNC_IMPL(__imp__sub_829FE200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x829FE208;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FE214;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r30,r13
	ctx.r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fe23c
	if (ctx.cr6.eq) goto loc_829FE23C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x829fe254
	if (ctx.cr6.eq) goto loc_829FE254;
loc_829FE23C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FE244;
	sub_8312E89C(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_829FE254:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x829fe2a0
	if (ctx.cr6.eq) goto loc_829FE2A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829fe2a0
	if (ctx.cr6.eq) goto loc_829FE2A0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_829FE2A0:
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fe2e4
	if (ctx.cr6.eq) goto loc_829FE2E4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829fe2e4
	if (!ctx.cr6.eq) goto loc_829FE2E4;
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829fe2e4
	if (!ctx.cr0.eq) goto loc_829FE2E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x8312e8ac
	ctx.lr = 0x829FE2DC;
	sub_8312E8AC(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FE2E4;
	sub_8312F16C(ctx, base);
loc_829FE2E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE2F0"))) PPC_WEAK_FUNC(sub_829FE2F0);
PPC_FUNC_IMPL(__imp__sub_829FE2F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe32c
	if (ctx.cr6.lt) goto loc_829FE32C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_829FE32C:
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

__attribute__((alias("__imp__sub_829FE340"))) PPC_WEAK_FUNC(sub_829FE340);
PPC_FUNC_IMPL(__imp__sub_829FE340) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe378
	if (ctx.cr6.lt) goto loc_829FE378;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_829FE378:
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

__attribute__((alias("__imp__sub_829FE390"))) PPC_WEAK_FUNC(sub_829FE390);
PPC_FUNC_IMPL(__imp__sub_829FE390) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe3cc
	if (ctx.cr6.lt) goto loc_829FE3CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_829FE3CC:
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

__attribute__((alias("__imp__sub_829FE3E0"))) PPC_WEAK_FUNC(sub_829FE3E0);
PPC_FUNC_IMPL(__imp__sub_829FE3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fe414
	if (ctx.cr6.eq) goto loc_829FE414;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x829FE414;
	sub_82A4EA80(ctx, base);
loc_829FE414:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x829fe428
	if (ctx.cr6.eq) goto loc_829FE428;
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_829FE428:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE440"))) PPC_WEAK_FUNC(sub_829FE440);
PPC_FUNC_IMPL(__imp__sub_829FE440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE450"))) PPC_WEAK_FUNC(sub_829FE450);
PPC_FUNC_IMPL(__imp__sub_829FE450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE460"))) PPC_WEAK_FUNC(sub_829FE460);
PPC_FUNC_IMPL(__imp__sub_829FE460) {
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
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a55c68
	ctx.lr = 0x829FE47C;
	sub_82A55C68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,16736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16736);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE4A8"))) PPC_WEAK_FUNC(sub_829FE4A8);
PPC_FUNC_IMPL(__imp__sub_829FE4A8) {
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
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f1,16728(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16728);
	// bl 0x82a4db00
	ctx.lr = 0x829FE4CC;
	sub_82A4DB00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_829FE4F0"))) PPC_WEAK_FUNC(sub_829FE4F0);
PPC_FUNC_IMPL(__imp__sub_829FE4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE500"))) PPC_WEAK_FUNC(sub_829FE500);
PPC_FUNC_IMPL(__imp__sub_829FE500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE510"))) PPC_WEAK_FUNC(sub_829FE510);
PPC_FUNC_IMPL(__imp__sub_829FE510) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x829fe538
	if (ctx.cr6.gt) goto loc_829FE538;
	// lbz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 * 120;
	// addi r10,r11,276
	ctx.r10.s64 = ctx.r11.s64 + 276;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_829FE538:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x829fe564
	if (!ctx.cr6.eq) goto loc_829FE564;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// mulli r11,r9,120
	ctx.r11.s64 = ctx.r9.s64 * 120;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,312
	ctx.r8.s64 = ctx.r11.s64 + 312;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_829FE564:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE570"))) PPC_WEAK_FUNC(sub_829FE570);
PPC_FUNC_IMPL(__imp__sub_829FE570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FE578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x829fe5ec
	if (ctx.cr6.gt) goto loc_829FE5EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,276
	ctx.r4.s64 = 276;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fe5dc
	if (ctx.cr6.eq) goto loc_829FE5DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a0bdd0
	ctx.lr = 0x829FE5C0;
	sub_82A0BDD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fe5dc
	if (ctx.cr6.eq) goto loc_829FE5DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829FE5DC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829FE5EC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x829fe68c
	if (!ctx.cr6.eq) goto loc_829FE68C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,312
	ctx.r4.s64 = 312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fe62c
	if (ctx.cr6.eq) goto loc_829FE62C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a08ab0
	ctx.lr = 0x829FE620;
	sub_82A08AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x829fe640
	if (!ctx.cr6.eq) goto loc_829FE640;
loc_829FE62C:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829FE640:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x829fe66c
	if (ctx.cr6.lt) goto loc_829FE66C;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829FE66C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FE680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_829FE68C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE6A0"))) PPC_WEAK_FUNC(sub_829FE6A0);
PPC_FUNC_IMPL(__imp__sub_829FE6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829fe6f8
	ctx.lr = 0x829FE6C0;
	sub_829FE6F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fe6dc
	if (ctx.cr6.eq) goto loc_829FE6DC;
	// lis r4,24962
	ctx.r4.s64 = 1635909632;
	// bl 0x82a45ee8
	ctx.lr = 0x829FE6D8;
	sub_82A45EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_829FE6DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE6F8"))) PPC_WEAK_FUNC(sub_829FE6F8);
PPC_FUNC_IMPL(__imp__sub_829FE6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r11,-416
	ctx.r8.s64 = ctx.r11.s64 + -416;
	// addi r7,r10,-376
	ctx.r7.s64 = ctx.r10.s64 + -376;
	// addi r6,r9,240
	ctx.r6.s64 = ctx.r9.s64 + 240;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82a110c8
	ctx.lr = 0x829FE744;
	sub_82A110C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a110c8
	ctx.lr = 0x829FE74C;
	sub_82A110C8(ctx, base);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// addi r4,r5,-464
	ctx.r4.s64 = ctx.r5.s64 + -464;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE770"))) PPC_WEAK_FUNC(sub_829FE770);
PPC_FUNC_IMPL(__imp__sub_829FE770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FE778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82a08570
	ctx.lr = 0x829FE788;
	sub_82A08570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829fe7c0
	if (ctx.cr6.eq) goto loc_829FE7C0;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fe7c0
	if (ctx.cr6.eq) goto loc_829FE7C0;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FE7C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FE7C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE7D0"))) PPC_WEAK_FUNC(sub_829FE7D0);
PPC_FUNC_IMPL(__imp__sub_829FE7D0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x829fe834
	if (!ctx.cr6.eq) goto loc_829FE834;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x829fe834
	if (!ctx.cr6.eq) goto loc_829FE834;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x829fe810
	if (!ctx.cr6.eq) goto loc_829FE810;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE810:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x829fe8b8
	if (!ctx.cr6.eq) goto loc_829FE8B8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 + 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE834:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe860
	if (!ctx.cr6.eq) goto loc_829FE860;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fe860
	if (!ctx.cr6.eq) goto loc_829FE860;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE860:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829fe88c
	if (!ctx.cr6.eq) goto loc_829FE88C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fe88c
	if (!ctx.cr6.eq) goto loc_829FE88C;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE88C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x829fe8b8
	if (!ctx.cr6.eq) goto loc_829FE8B8;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829fe8b8
	if (!ctx.cr6.eq) goto loc_829FE8B8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE8B8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE8C8"))) PPC_WEAK_FUNC(sub_829FE8C8);
PPC_FUNC_IMPL(__imp__sub_829FE8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x829fe92c
	if (!ctx.cr6.eq) goto loc_829FE92C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x829fe92c
	if (!ctx.cr6.eq) goto loc_829FE92C;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// bne cr6,0x829fe908
	if (!ctx.cr6.eq) goto loc_829FE908;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE908:
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bne cr6,0x829fe9b0
	if (!ctx.cr6.eq) goto loc_829FE9B0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE92C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe958
	if (!ctx.cr6.eq) goto loc_829FE958;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fe958
	if (!ctx.cr6.eq) goto loc_829FE958;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE958:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829fe984
	if (!ctx.cr6.eq) goto loc_829FE984;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fe984
	if (!ctx.cr6.eq) goto loc_829FE984;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE984:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x829fe9b0
	if (!ctx.cr6.eq) goto loc_829FE9B0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829fe9b0
	if (!ctx.cr6.eq) goto loc_829FE9B0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_829FE9B0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE9C0"))) PPC_WEAK_FUNC(sub_829FE9C0);
PPC_FUNC_IMPL(__imp__sub_829FE9C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829fe9d4
	if (ctx.cr6.eq) goto loc_829FE9D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x829fe9d8
	goto loc_829FE9D8;
loc_829FE9D4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_829FE9D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x829fe9f0
	if (ctx.cr6.eq) goto loc_829FE9F0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
loc_829FE9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE9F8"))) PPC_WEAK_FUNC(sub_829FE9F8);
PPC_FUNC_IMPL(__imp__sub_829FE9F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x829fe6a0
	sub_829FE6A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEA00"))) PPC_WEAK_FUNC(sub_829FEA00);
PPC_FUNC_IMPL(__imp__sub_829FEA00) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEA18"))) PPC_WEAK_FUNC(sub_829FEA18);
PPC_FUNC_IMPL(__imp__sub_829FEA18) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addic. r3,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// bne 0x829fea50
	if (!ctx.cr0.eq) goto loc_829FEA50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x829FEA4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FEA50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEA60"))) PPC_WEAK_FUNC(sub_829FEA60);
PPC_FUNC_IMPL(__imp__sub_829FEA60) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEA78"))) PPC_WEAK_FUNC(sub_829FEA78);
PPC_FUNC_IMPL(__imp__sub_829FEA78) {
	PPC_FUNC_PROLOGUE();
	// li r11,28
	ctx.r11.s64 = 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEA88"))) PPC_WEAK_FUNC(sub_829FEA88);
PPC_FUNC_IMPL(__imp__sub_829FEA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FEA90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829feb38
	if (ctx.cr6.eq) goto loc_829FEB38;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-444
	ctx.r9.s64 = ctx.r11.s64 + -444;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r5,r8,-280
	ctx.r5.s64 = ctx.r8.s64 + -280;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r4,r7,-236
	ctx.r4.s64 = ctx.r7.s64 + -236;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x829feb48
	if (ctx.cr6.lt) goto loc_829FEB48;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_829FEB38:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_829FEB48:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEB68"))) PPC_WEAK_FUNC(sub_829FEB68);
PPC_FUNC_IMPL(__imp__sub_829FEB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829feb98
	ctx.lr = 0x829FEB80;
	sub_829FEB98(ctx, base);
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

__attribute__((alias("__imp__sub_829FEB98"))) PPC_WEAK_FUNC(sub_829FEB98);
PPC_FUNC_IMPL(__imp__sub_829FEB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FEBA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// addi r5,r10,-280
	ctx.r5.s64 = ctx.r10.s64 + -280;
	// li r11,6144
	ctx.r11.s64 = 6144;
	// addi r4,r7,-236
	ctx.r4.s64 = ctx.r7.s64 + -236;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lis r3,-31961
	ctx.r3.s64 = -2094596096;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,3588(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3588, ctx.r11.u32);
	// addi r10,r3,-26272
	ctx.r10.s64 = ctx.r3.s64 + -26272;
loc_829FEBDC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x829fec00
	if (!ctx.cr6.eq) goto loc_829FEC00;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829febdc
	if (!ctx.cr0.eq) goto loc_829FEBDC;
	// b 0x829fec08
	goto loc_829FEC08;
loc_829FEC00:
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_829FEC08:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fec24
	if (ctx.cr6.eq) goto loc_829FEC24;
	// bl 0x8312f17c
	ctx.lr = 0x829FEC18;
	sub_8312F17C(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fec24
	if (ctx.cr6.lt) goto loc_829FEC24;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_829FEC24:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r11,-464
	ctx.r10.s64 = ctx.r11.s64 + -464;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEC38"))) PPC_WEAK_FUNC(sub_829FEC38);
PPC_FUNC_IMPL(__imp__sub_829FEC38) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r11,3588(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3588, ctx.r11.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_829FEC58"))) PPC_WEAK_FUNC(sub_829FEC58);
PPC_FUNC_IMPL(__imp__sub_829FEC58) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// bne cr6,0x829fec7c
	if (!ctx.cr6.eq) goto loc_829FEC7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829FEC7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x829FECA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8312f19c
	ctx.lr = 0x829FECB0;
	sub_8312F19C(ctx, base);
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

__attribute__((alias("__imp__sub_829FECC8"))) PPC_WEAK_FUNC(sub_829FECC8);
PPC_FUNC_IMPL(__imp__sub_829FECC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x829FECD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fed08
	if (ctx.cr6.eq) goto loc_829FED08;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8312f17c
	ctx.lr = 0x829FECF8;
	sub_8312F17C(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fed28
	if (ctx.cr6.lt) goto loc_829FED28;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829FED08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829fed28
	if (ctx.cr6.eq) goto loc_829FED28;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8312f18c
	ctx.lr = 0x829FED28;
	sub_8312F18C(ctx, base);
loc_829FED28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FED30"))) PPC_WEAK_FUNC(sub_829FED30);
PPC_FUNC_IMPL(__imp__sub_829FED30) {
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
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26272
	ctx.r10.s64 = ctx.r10.s64 + -26272;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// beq cr6,0x829fede0
	if (ctx.cr6.eq) goto loc_829FEDE0;
	// li r9,6144
	ctx.r9.s64 = 6144;
loc_829FED58:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829fed58
	if (!ctx.cr0.eq) goto loc_829FED58;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829fedd4
	if (ctx.cr6.eq) goto loc_829FEDD4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// bne cr6,0x829fed9c
	if (!ctx.cr6.eq) goto loc_829FED9C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x829feda0
	goto loc_829FEDA0;
loc_829FED9C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_829FEDA0:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x829fede0
	if (ctx.cr6.gt) goto loc_829FEDE0;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x82a4ea80
	ctx.lr = 0x829FEDC0;
	sub_82A4EA80(ctx, base);
	// lwsync 
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829FEDD4:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r10,3588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3588);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_829FEDE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEDF0"))) PPC_WEAK_FUNC(sub_829FEDF0);
PPC_FUNC_IMPL(__imp__sub_829FEDF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x829feb68
	sub_829FEB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEDF8"))) PPC_WEAK_FUNC(sub_829FEDF8);
PPC_FUNC_IMPL(__imp__sub_829FEDF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,47792
	ctx.r11.u64 = ctx.r11.u64 | 47792;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEE10"))) PPC_WEAK_FUNC(sub_829FEE10);
PPC_FUNC_IMPL(__imp__sub_829FEE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x829FEE18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r4,r4,47792
	ctx.r4.u64 = ctx.r4.u64 | 47792;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829feee4
	if (ctx.cr6.eq) goto loc_829FEEE4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-444
	ctx.r9.s64 = ctx.r11.s64 + -444;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r6,r8,-188
	ctx.r6.s64 = ctx.r8.s64 + -188;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r7,-156
	ctx.r3.s64 = ctx.r7.s64 + -156;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x829ff0b8
	ctx.lr = 0x829FEE94;
	sub_829FF0B8(ctx, base);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r9,r11,47776
	ctx.r9.u64 = ctx.r11.u64 | 47776;
	// ori r8,r10,47784
	ctx.r8.u64 = ctx.r10.u64 | 47784;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stdx r11,r31,r9
	PPC_STORE_U64(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stdx r11,r31,r8
	PPC_STORE_U64(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x829feef4
	if (ctx.cr6.lt) goto loc_829FEEF4;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_829FEEE4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_829FEEF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x829FEF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEF18"))) PPC_WEAK_FUNC(sub_829FEF18);
PPC_FUNC_IMPL(__imp__sub_829FEF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x829FEF20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8312f15c
	ctx.lr = 0x829FEF34;
	sub_8312F15C(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-6024
	ctx.r31.s64 = ctx.r11.s64 + -6024;
	// mr r29,r13
	ctx.r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fef5c
	if (ctx.cr6.eq) goto loc_829FEF5C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x829fef70
	if (ctx.cr6.eq) goto loc_829FEF70;
loc_829FEF5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e89c
	ctx.lr = 0x829FEF64;
	sub_8312E89C(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r28.u8);
loc_829FEF70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fefa4
	if (ctx.cr6.eq) goto loc_829FEFA4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,16356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f12,92(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
loc_829FEFA4:
	// lbz r11,189(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 189);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fefc8
	if (ctx.cr6.eq) goto loc_829FEFC8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a0d9b8
	ctx.lr = 0x829FEFC4;
	sub_82A0D9B8(ctx, base);
	// b 0x829fefe4
	goto loc_829FEFE4;
loc_829FEFC8:
	// lbz r11,190(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 190);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fefe4
	if (ctx.cr6.eq) goto loc_829FEFE4;
	// addi r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cff8
	ctx.lr = 0x829FEFE4;
	sub_82A0CFF8(ctx, base);
loc_829FEFE4:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// stb r10,190(r30)
	PPC_STORE_U8(ctx.r30.u32 + 190, ctx.r10.u8);
	// stb r10,188(r30)
	PPC_STORE_U8(ctx.r30.u32 + 188, ctx.r10.u8);
	// stb r10,189(r30)
	PPC_STORE_U8(ctx.r30.u32 + 189, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ff03c
	if (ctx.cr6.eq) goto loc_829FF03C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x829ff03c
	if (!ctx.cr6.eq) goto loc_829FF03C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x829ff03c
	if (!ctx.cr0.eq) goto loc_829FF03C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lbz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x8312e8ac
	ctx.lr = 0x829FF034;
	sub_8312E8AC(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312f16c
	ctx.lr = 0x829FF03C;
	sub_8312F16C(ctx, base);
loc_829FF03C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x829ff9a0
	ctx.lr = 0x829FF058;
	sub_829FF9A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF060"))) PPC_WEAK_FUNC(sub_829FF060);
PPC_FUNC_IMPL(__imp__sub_829FF060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,-188
	ctx.r9.s64 = ctx.r11.s64 + -188;
	// addi r8,r10,-156
	ctx.r8.s64 = ctx.r10.s64 + -156;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r8,r5,-192
	ctx.r8.s64 = ctx.r5.s64 + -192;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// addi r9,r6,-196
	ctx.r9.s64 = ctx.r6.s64 + -196;
	// addi r6,r4,-464
	ctx.r6.s64 = ctx.r4.s64 + -464;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,-52(r5)
	PPC_STORE_U32(ctx.r5.u32 + -52, ctx.r9.u32);
	// stw r8,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

