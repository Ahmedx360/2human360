#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8289FF60"))) PPC_WEAK_FUNC(sub_8289FF60);
PPC_FUNC_IMPL(__imp__sub_8289FF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8289FF68;
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f13,1548(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1548);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1552(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1552);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x828a0000
	if (!ctx.cr6.lt) goto loc_828A0000;
	// lwz r30,1748(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1748);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8289ffe8
	if (ctx.cr6.eq) goto loc_8289FFE8;
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8289ffe8
	if (!ctx.cr6.gt) goto loc_8289FFE8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8289FFAC:
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289FFCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8289ffec
	if (!ctx.cr0.eq) goto loc_8289FFEC;
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8289ffac
	if (ctx.cr6.lt) goto loc_8289FFAC;
loc_8289FFE8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8289FFEC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828a0000
	if (ctx.cr6.eq) goto loc_828A0000;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f1.f64 = double(temp.f32);
	// b 0x828a0004
	goto loc_828A0004;
loc_828A0000:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_828A0004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0010"))) PPC_WEAK_FUNC(sub_828A0010);
PPC_FUNC_IMPL(__imp__sub_828A0010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0020"))) PPC_WEAK_FUNC(sub_828A0020);
PPC_FUNC_IMPL(__imp__sub_828A0020) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1748(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A0050"))) PPC_WEAK_FUNC(sub_828A0050);
PPC_FUNC_IMPL(__imp__sub_828A0050) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0058"))) PPC_WEAK_FUNC(sub_828A0058);
PPC_FUNC_IMPL(__imp__sub_828A0058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A0060;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r11,r11,-30580
	ctx.r11.s64 = ctx.r11.s64 + -30580;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-30596
	ctx.r3.s64 = ctx.r10.s64 + -30596;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x828A0098;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A00B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A00B8"))) PPC_WEAK_FUNC(sub_828A00B8);
PPC_FUNC_IMPL(__imp__sub_828A00B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a0104
	if (ctx.cr6.eq) goto loc_828A0104;
	// bl 0x828a0dc0
	ctx.lr = 0x828A00E0;
	sub_828A0DC0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A00F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x828a0108
	if (!ctx.cr0.eq) goto loc_828A0108;
loc_828A0104:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828A0108:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a0158
	if (ctx.cr6.eq) goto loc_828A0158;
	// lwz r31,1608(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x828a0158
	if (ctx.cr6.eq) goto loc_828A0158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A0128;
	sub_829C1F08(ctx, base);
	// bl 0x828aab40
	ctx.lr = 0x828A012C;
	sub_828AAB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a0144
	if (ctx.cr0.eq) goto loc_828A0144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828a0150
	goto loc_828A0150;
loc_828A0144:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
loc_828A0150:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A0158:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0170"))) PPC_WEAK_FUNC(sub_828A0170);
PPC_FUNC_IMPL(__imp__sub_828A0170) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A018C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A01A8"))) PPC_WEAK_FUNC(sub_828A01A8);
PPC_FUNC_IMPL(__imp__sub_828A01A8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A01D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A01F0"))) PPC_WEAK_FUNC(sub_828A01F0);
PPC_FUNC_IMPL(__imp__sub_828A01F0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a0244
	if (ctx.cr6.eq) goto loc_828A0244;
	// lwz r3,1748(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1748);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a0244
	if (ctx.cr6.eq) goto loc_828A0244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A0244:
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a03b8
	if (ctx.cr6.eq) goto loc_828A03B8;
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a03b8
	if (ctx.cr6.eq) goto loc_828A03B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A026C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a0298
	if (ctx.cr0.eq) goto loc_828A0298;
	// bl 0x828a06c8
	ctx.lr = 0x828A0278;
	sub_828A06C8(ctx, base);
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
	ctx.lr = 0x828A0290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a029c
	if (!ctx.cr0.eq) goto loc_828A029C;
loc_828A0298:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A029C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a03b8
	if (ctx.cr6.eq) goto loc_828A03B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A02BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,800(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x828A032C;
	sub_829C24C0(ctx, base);
	// lwz r4,1612(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a034c
	if (ctx.cr6.eq) goto loc_828A034C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A034C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A034C:
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a0360
	if (ctx.cr6.eq) goto loc_828A0360;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x828A0360;
	sub_829BD428(ctx, base);
loc_828A0360:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 800, ctx.r11.u32);
	// bl 0x829c1f88
	ctx.lr = 0x828A0370;
	sub_829C1F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a03cc
	if (ctx.cr0.eq) goto loc_828A03CC;
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a0398
	if (ctx.cr0.eq) goto loc_828A0398;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a0398
	if (ctx.cr6.eq) goto loc_828A0398;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a039c
	goto loc_828A039C;
loc_828A0398:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A039C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-6056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828a0728
	ctx.lr = 0x828A03B4;
	sub_828A0728(ctx, base);
	// b 0x828a03cc
	goto loc_828A03CC;
loc_828A03B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A03CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A03CC:
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

__attribute__((alias("__imp__sub_828A03E8"))) PPC_WEAK_FUNC(sub_828A03E8);
PPC_FUNC_IMPL(__imp__sub_828A03E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828A0404;
	sub_829C4E48(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a0440
	if (ctx.cr6.eq) goto loc_828A0440;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a0440
	if (!ctx.cr6.eq) goto loc_828A0440;
	// addi r11,r31,1492
	ctx.r11.s64 = ctx.r31.s64 + 1492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x828A0434;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_828A0440:
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

__attribute__((alias("__imp__sub_828A0460"))) PPC_WEAK_FUNC(sub_828A0460);
PPC_FUNC_IMPL(__imp__sub_828A0460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A0468;
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
	ctx.lr = 0x828A0478;
	sub_829C5148(ctx, base);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a0508
	if (ctx.cr6.eq) goto loc_828A0508;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a0508
	if (!ctx.cr6.eq) goto loc_828A0508;
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828A04AC;
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
	ctx.lr = 0x828A04D0;
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
	ctx.lr = 0x828A04E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a0508
	if (!ctx.cr0.eq) goto loc_828A0508;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x828A04FC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_828A0508:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0518"))) PPC_WEAK_FUNC(sub_828A0518);
PPC_FUNC_IMPL(__imp__sub_828A0518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A0520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828A0550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// bl 0x823fe7b8
	ctx.lr = 0x828A0558;
	sub_823FE7B8(ctx, base);
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
	ctx.lr = 0x828A0570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a057c
	if (!ctx.cr0.eq) goto loc_828A057C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A057C:
	// stw r31,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0588"))) PPC_WEAK_FUNC(sub_828A0588);
PPC_FUNC_IMPL(__imp__sub_828A0588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A05BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x828A05C8;
	sub_828DB368(ctx, base);
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

__attribute__((alias("__imp__sub_828A05E8"))) PPC_WEAK_FUNC(sub_828A05E8);
PPC_FUNC_IMPL(__imp__sub_828A05E8) {
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
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x828A05FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a060c
	if (ctx.cr0.eq) goto loc_828A060C;
	// bl 0x82951530
	ctx.lr = 0x828A0608;
	sub_82951530(ctx, base);
	// b 0x828a0610
	goto loc_828A0610;
loc_828A060C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A0610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0620"))) PPC_WEAK_FUNC(sub_828A0620);
PPC_FUNC_IMPL(__imp__sub_828A0620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26056);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a0660
	if (!ctx.cr0.eq) goto loc_828A0660;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26056(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26056, ctx.r11.u32);
	// addi r3,r9,-30612
	ctx.r3.s64 = ctx.r9.s64 + -30612;
	// bl 0x82816528
	ctx.lr = 0x828A0658;
	sub_82816528(ctx, base);
	// stw r3,-26060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26060, ctx.r3.u32);
	// b 0x828a0664
	goto loc_828A0664;
loc_828A0660:
	// lwz r3,-26060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26060);
loc_828A0664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0678"))) PPC_WEAK_FUNC(sub_828A0678);
PPC_FUNC_IMPL(__imp__sub_828A0678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a06c8
	ctx.lr = 0x828A0698;
	sub_828A06C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A06AC;
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

__attribute__((alias("__imp__sub_828A06C8"))) PPC_WEAK_FUNC(sub_828A06C8);
PPC_FUNC_IMPL(__imp__sub_828A06C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17484
	ctx.r31.s64 = ctx.r11.s64 + 17484;
	// lwz r11,17480(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17480);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a0710
	if (!ctx.cr0.eq) goto loc_828A0710;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30548
	ctx.r9.s64 = ctx.r9.s64 + -30548;
	// stw r11,17480(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17480, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16912
	ctx.r3.s64 = ctx.r11.s64 + -16912;
	// bl 0x82a4c758
	ctx.lr = 0x828A0710;
	sub_82A4C758(ctx, base);
loc_828A0710:
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

__attribute__((alias("__imp__sub_828A0728"))) PPC_WEAK_FUNC(sub_828A0728);
PPC_FUNC_IMPL(__imp__sub_828A0728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A0730;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r27,-6056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82833108
	ctx.lr = 0x828A0748;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a0760
	if (ctx.cr0.eq) goto loc_828A0760;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a0988
	ctx.lr = 0x828A0758;
	sub_828A0988(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828a0764
	goto loc_828A0764;
loc_828A0760:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A0764:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a082c
	if (ctx.cr6.eq) goto loc_828A082C;
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
	// beq cr6,0x828a082c
	if (ctx.cr6.eq) goto loc_828A082C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A07C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A07D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x828a082c
	if (!ctx.cr6.eq) goto loc_828A082C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a0820
	if (ctx.cr6.eq) goto loc_828A0820;
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
loc_828A0820:
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a08c0
	goto loc_828A08C0;
loc_828A082C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A084C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x828A0850;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A08A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x829e3c18
	ctx.lr = 0x828A08C0;
	sub_829E3C18(ctx, base);
loc_828A08C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A08C8"))) PPC_WEAK_FUNC(sub_828A08C8);
PPC_FUNC_IMPL(__imp__sub_828A08C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1116(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A08D8"))) PPC_WEAK_FUNC(sub_828A08D8);
PPC_FUNC_IMPL(__imp__sub_828A08D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a0dc0
	ctx.lr = 0x828A08F8;
	sub_828A0DC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a090c
	if (ctx.cr6.eq) goto loc_828A090C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x828A090C;
	sub_82339D80(ctx, base);
loc_828A090C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0928"))) PPC_WEAK_FUNC(sub_828A0928);
PPC_FUNC_IMPL(__imp__sub_828A0928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a0960
	if (ctx.cr6.eq) goto loc_828A0960;
	// bl 0x828a0dc0
	ctx.lr = 0x828A0950;
	sub_828A0DC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a0960
	if (!ctx.cr6.eq) goto loc_828A0960;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a096c
	goto loc_828A096C;
loc_828A0960:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x828A096C;
	sub_82339EE8(ctx, base);
loc_828A096C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0988"))) PPC_WEAK_FUNC(sub_828A0988);
PPC_FUNC_IMPL(__imp__sub_828A0988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// bl 0x823e9df8
	ctx.lr = 0x828A09C4;
	sub_823E9DF8(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// addi r10,r10,27600
	ctx.r10.s64 = ctx.r10.s64 + 27600;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r9,r9,-30496
	ctx.r9.s64 = ctx.r9.s64 + -30496;
	// addi r8,r8,-30320
	ctx.r8.s64 = ctx.r8.s64 + -30320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0A38"))) PPC_WEAK_FUNC(sub_828A0A38);
PPC_FUNC_IMPL(__imp__sub_828A0A38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-30528
	ctx.r3.s64 = ctx.r11.s64 + -30528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0A48"))) PPC_WEAK_FUNC(sub_828A0A48);
PPC_FUNC_IMPL(__imp__sub_828A0A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a0aa8
	ctx.lr = 0x828A0A68;
	sub_828A0AA8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828a0a78
	if (!ctx.cr6.eq) goto loc_828A0A78;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x828a0a90
	goto loc_828A0A90;
loc_828A0A78:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823fe368
	ctx.lr = 0x828A0A90;
	sub_823FE368(ctx, base);
loc_828A0A90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0AA8"))) PPC_WEAK_FUNC(sub_828A0AA8);
PPC_FUNC_IMPL(__imp__sub_828A0AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17472
	ctx.r31.s64 = ctx.r11.s64 + 17472;
	// lwz r11,17464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17464);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a0af0
	if (!ctx.cr0.eq) goto loc_828A0AF0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30268
	ctx.r9.s64 = ctx.r9.s64 + -30268;
	// stw r11,17464(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17464, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16888
	ctx.r3.s64 = ctx.r11.s64 + -16888;
	// bl 0x82a4c758
	ctx.lr = 0x828A0AF0;
	sub_82A4C758(ctx, base);
loc_828A0AF0:
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

__attribute__((alias("__imp__sub_828A0B08"))) PPC_WEAK_FUNC(sub_828A0B08);
PPC_FUNC_IMPL(__imp__sub_828A0B08) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x828A0B1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a0b30
	if (ctx.cr0.eq) goto loc_828A0B30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a0988
	ctx.lr = 0x828A0B2C;
	sub_828A0988(ctx, base);
	// b 0x828a0b34
	goto loc_828A0B34;
loc_828A0B30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A0B34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a0b48
	if (ctx.cr6.eq) goto loc_828A0B48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828A0B48:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0B58"))) PPC_WEAK_FUNC(sub_828A0B58);
PPC_FUNC_IMPL(__imp__sub_828A0B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26064);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a0b98
	if (!ctx.cr0.eq) goto loc_828A0B98;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26064, ctx.r11.u32);
	// addi r3,r9,-30528
	ctx.r3.s64 = ctx.r9.s64 + -30528;
	// bl 0x82816528
	ctx.lr = 0x828A0B90;
	sub_82816528(ctx, base);
	// stw r3,-26068(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26068, ctx.r3.u32);
	// b 0x828a0b9c
	goto loc_828A0B9C;
loc_828A0B98:
	// lwz r3,-26068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26068);
loc_828A0B9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0BB0"))) PPC_WEAK_FUNC(sub_828A0BB0);
PPC_FUNC_IMPL(__imp__sub_828A0BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a0aa8
	ctx.lr = 0x828A0BD0;
	sub_828A0AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A0BE4;
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

__attribute__((alias("__imp__sub_828A0C00"))) PPC_WEAK_FUNC(sub_828A0C00);
PPC_FUNC_IMPL(__imp__sub_828A0C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a0c38
	if (ctx.cr6.eq) goto loc_828A0C38;
	// bl 0x828a0aa8
	ctx.lr = 0x828A0C28;
	sub_828A0AA8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828a0c38
	if (!ctx.cr6.eq) goto loc_828A0C38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a0c50
	goto loc_828A0C50;
loc_828A0C38:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823fe538
	ctx.lr = 0x828A0C50;
	sub_823FE538(ctx, base);
loc_828A0C50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0C68"))) PPC_WEAK_FUNC(sub_828A0C68);
PPC_FUNC_IMPL(__imp__sub_828A0C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a0aa8
	sub_828A0AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0C70"))) PPC_WEAK_FUNC(sub_828A0C70);
PPC_FUNC_IMPL(__imp__sub_828A0C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x823fe3d8
	sub_823FE3D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0C78"))) PPC_WEAK_FUNC(sub_828A0C78);
PPC_FUNC_IMPL(__imp__sub_828A0C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x828A0C94;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a0cac
	if (ctx.cr0.eq) goto loc_828A0CAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x828a0cd8
	ctx.lr = 0x828A0CA8;
	sub_828A0CD8(ctx, base);
	// b 0x828a0cb0
	goto loc_828A0CB0;
loc_828A0CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A0CB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a0cc4
	if (ctx.cr6.eq) goto loc_828A0CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828A0CC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0CD8"))) PPC_WEAK_FUNC(sub_828A0CD8);
PPC_FUNC_IMPL(__imp__sub_828A0CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A0CE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828a0d20
	if (ctx.cr6.eq) goto loc_828A0D20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828A0D20:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x828A0D28;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828a0d38
	if (!ctx.cr6.eq) goto loc_828A0D38;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828a0d44
	goto loc_828A0D44;
loc_828A0D38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828A0D44:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r9,r9,27424
	ctx.r9.s64 = ctx.r9.s64 + 27424;
	// addi r8,r8,27600
	ctx.r8.s64 = ctx.r8.s64 + 27600;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r7,r7,-30496
	ctx.r7.s64 = ctx.r7.s64 + -30496;
	// addi r6,r6,-30320
	ctx.r6.s64 = ctx.r6.s64 + -30320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0DB0"))) PPC_WEAK_FUNC(sub_828A0DB0);
PPC_FUNC_IMPL(__imp__sub_828A0DB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// b 0x828a0518
	sub_828A0518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0DB8"))) PPC_WEAK_FUNC(sub_828A0DB8);
PPC_FUNC_IMPL(__imp__sub_828A0DB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a0a48
	sub_828A0A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0DC0"))) PPC_WEAK_FUNC(sub_828A0DC0);
PPC_FUNC_IMPL(__imp__sub_828A0DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17476
	ctx.r31.s64 = ctx.r11.s64 + 17476;
	// lwz r11,17468(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17468);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a0e08
	if (!ctx.cr0.eq) goto loc_828A0E08;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-30248
	ctx.r9.s64 = ctx.r9.s64 + -30248;
	// stw r11,17468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17468, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16864
	ctx.r3.s64 = ctx.r11.s64 + -16864;
	// bl 0x82a4c758
	ctx.lr = 0x828A0E08;
	sub_82A4C758(ctx, base);
loc_828A0E08:
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

__attribute__((alias("__imp__sub_828A0E20"))) PPC_WEAK_FUNC(sub_828A0E20);
PPC_FUNC_IMPL(__imp__sub_828A0E20) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x828A0E34;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a0e54
	if (ctx.cr0.eq) goto loc_828A0E54;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-30580
	ctx.r11.s64 = ctx.r10.s64 + -30580;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x828a0e58
	goto loc_828A0E58;
loc_828A0E54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A0E58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0E68"))) PPC_WEAK_FUNC(sub_828A0E68);
PPC_FUNC_IMPL(__imp__sub_828A0E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,17488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17488);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828a0eb0
	if (!ctx.cr6.eq) goto loc_828A0EB0;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25228
	ctx.r3.s64 = ctx.r10.s64 + -25228;
	// bl 0x82a4c7d8
	ctx.lr = 0x828A0E9C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x828A0EA4;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x828A0EAC;
	sub_82816528(ctx, base);
	// stw r3,17488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17488, ctx.r3.u32);
loc_828A0EB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0EC8"))) PPC_WEAK_FUNC(sub_828A0EC8);
PPC_FUNC_IMPL(__imp__sub_828A0EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-30228
	ctx.r3.s64 = ctx.r11.s64 + -30228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0ED8"))) PPC_WEAK_FUNC(sub_828A0ED8);
PPC_FUNC_IMPL(__imp__sub_828A0ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a0f10
	if (ctx.cr6.eq) goto loc_828A0F10;
	// bl 0x828a47b0
	ctx.lr = 0x828A0F00;
	sub_828A47B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828a0f10
	if (!ctx.cr6.eq) goto loc_828A0F10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a0f28
	goto loc_828A0F28;
loc_828A0F10:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234d398
	ctx.lr = 0x828A0F28;
	sub_8234D398(ctx, base);
loc_828A0F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0F40"))) PPC_WEAK_FUNC(sub_828A0F40);
PPC_FUNC_IMPL(__imp__sub_828A0F40) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a47b0
	sub_828A47B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A0F48"))) PPC_WEAK_FUNC(sub_828A0F48);
PPC_FUNC_IMPL(__imp__sub_828A0F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x828A0F64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a0f7c
	if (ctx.cr0.eq) goto loc_828A0F7C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x828a1010
	ctx.lr = 0x828A0F78;
	sub_828A1010(ctx, base);
	// b 0x828a0f80
	goto loc_828A0F80;
loc_828A0F7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A0F80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a0f98
	if (ctx.cr6.eq) goto loc_828A0F98;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_828A0F98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A0FB0"))) PPC_WEAK_FUNC(sub_828A0FB0);
PPC_FUNC_IMPL(__imp__sub_828A0FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a47b0
	ctx.lr = 0x828A0FD0;
	sub_828A47B0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828a0fe0
	if (!ctx.cr6.eq) goto loc_828A0FE0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// b 0x828a0ff8
	goto loc_828A0FF8;
loc_828A0FE0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8234d468
	ctx.lr = 0x828A0FF8;
	sub_8234D468(ctx, base);
loc_828A0FF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1010"))) PPC_WEAK_FUNC(sub_828A1010);
PPC_FUNC_IMPL(__imp__sub_828A1010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A1018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,14108
	ctx.r11.s64 = ctx.r11.s64 + 14108;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828a1068
	if (ctx.cr6.eq) goto loc_828A1068;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
loc_828A1068:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82404518
	ctx.lr = 0x828A1070;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828a1080
	if (!ctx.cr6.eq) goto loc_828A1080;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x828a1090
	goto loc_828A1090;
loc_828A1080:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_828A1090:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r9,r9,27424
	ctx.r9.s64 = ctx.r9.s64 + 27424;
	// addi r8,r8,27600
	ctx.r8.s64 = ctx.r8.s64 + 27600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x828a10d4
	if (!ctx.cr6.eq) goto loc_828A10D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828a10e4
	goto loc_828A10E4;
loc_828A10D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_828A10E4:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r31,76
	ctx.r11.s64 = ctx.r31.s64 + 76;
	// addi r10,r10,13144
	ctx.r10.s64 = ctx.r10.s64 + 13144;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,13216
	ctx.r8.s64 = ctx.r7.s64 + 13216;
	// addi r7,r6,13392
	ctx.r7.s64 = ctx.r6.s64 + 13392;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r10,-29952
	ctx.r5.s64 = ctx.r10.s64 + -29952;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r6,r6,-29944
	ctx.r6.s64 = ctx.r6.s64 + -29944;
	// addi r30,r10,-29768
	ctx.r30.s64 = ctx.r10.s64 + -29768;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r4,13144
	ctx.r4.s64 = ctx.r4.s64 + 13144;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1190"))) PPC_WEAK_FUNC(sub_828A1190);
PPC_FUNC_IMPL(__imp__sub_828A1190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-30192
	ctx.r3.s64 = ctx.r11.s64 + -30192;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A11A0"))) PPC_WEAK_FUNC(sub_828A11A0);
PPC_FUNC_IMPL(__imp__sub_828A11A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a11d8
	if (ctx.cr6.eq) goto loc_828A11D8;
	// bl 0x828a48b8
	ctx.lr = 0x828A11C8;
	sub_828A48B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a11d8
	if (!ctx.cr6.eq) goto loc_828A11D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a11e4
	goto loc_828A11E4;
loc_828A11D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828A11E4;
	sub_82333C70(ctx, base);
loc_828A11E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1200"))) PPC_WEAK_FUNC(sub_828A1200);
PPC_FUNC_IMPL(__imp__sub_828A1200) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a48b8
	sub_828A48B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1208"))) PPC_WEAK_FUNC(sub_828A1208);
PPC_FUNC_IMPL(__imp__sub_828A1208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828A1224;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a128c
	if (ctx.cr0.eq) goto loc_828A128C;
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
	// addi r9,r9,-29696
	ctx.r9.s64 = ctx.r9.s64 + -29696;
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
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// b 0x828a1290
	goto loc_828A1290;
loc_828A128C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A1290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A12A8"))) PPC_WEAK_FUNC(sub_828A12A8);
PPC_FUNC_IMPL(__imp__sub_828A12A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a48b8
	ctx.lr = 0x828A12C8;
	sub_828A48B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a12dc
	if (ctx.cr6.eq) goto loc_828A12DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828A12DC;
	sub_82333B08(ctx, base);
loc_828A12DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A12F8"))) PPC_WEAK_FUNC(sub_828A12F8);
PPC_FUNC_IMPL(__imp__sub_828A12F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A1300;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825aab30
	ctx.lr = 0x828A1310;
	sub_825AAB30(ctx, base);
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82648380
	ctx.lr = 0x828A1318;
	sub_82648380(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a138c
	if (ctx.cr0.eq) goto loc_828A138C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x829c1f08
	ctx.lr = 0x828A1330;
	sub_829C1F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a1358
	if (ctx.cr0.eq) goto loc_828A1358;
	// bl 0x823e99e0
	ctx.lr = 0x828A133C;
	sub_823E99E0(ctx, base);
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
	ctx.lr = 0x828A1354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a135c
	goto loc_828A135C;
loc_828A1358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A135C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x828a1378
	if (ctx.cr6.eq) goto loc_828A1378;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a1384
	goto loc_828A1384;
loc_828A1378:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1260);
loc_828A1384:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A138C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A138C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1398"))) PPC_WEAK_FUNC(sub_828A1398);
PPC_FUNC_IMPL(__imp__sub_828A1398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-30152
	ctx.r3.s64 = ctx.r11.s64 + -30152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A13A8"))) PPC_WEAK_FUNC(sub_828A13A8);
PPC_FUNC_IMPL(__imp__sub_828A13A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a13e0
	if (ctx.cr6.eq) goto loc_828A13E0;
	// bl 0x828a49c0
	ctx.lr = 0x828A13D0;
	sub_828A49C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a13e0
	if (!ctx.cr6.eq) goto loc_828A13E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a13ec
	goto loc_828A13EC;
loc_828A13E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828A13EC;
	sub_82333C70(ctx, base);
loc_828A13EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1408"))) PPC_WEAK_FUNC(sub_828A1408);
PPC_FUNC_IMPL(__imp__sub_828A1408) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a49c0
	sub_828A49C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1410"))) PPC_WEAK_FUNC(sub_828A1410);
PPC_FUNC_IMPL(__imp__sub_828A1410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828A142C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a1494
	if (ctx.cr0.eq) goto loc_828A1494;
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
	// addi r9,r9,-29592
	ctx.r9.s64 = ctx.r9.s64 + -29592;
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
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// b 0x828a1498
	goto loc_828A1498;
loc_828A1494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A1498:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A14B0"))) PPC_WEAK_FUNC(sub_828A14B0);
PPC_FUNC_IMPL(__imp__sub_828A14B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a49c0
	ctx.lr = 0x828A14D0;
	sub_828A49C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a14e4
	if (ctx.cr6.eq) goto loc_828A14E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828A14E4;
	sub_82333B08(ctx, base);
loc_828A14E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1500"))) PPC_WEAK_FUNC(sub_828A1500);
PPC_FUNC_IMPL(__imp__sub_828A1500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A1508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825aab30
	ctx.lr = 0x828A1518;
	sub_825AAB30(ctx, base);
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// bl 0x82648380
	ctx.lr = 0x828A1520;
	sub_82648380(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a1594
	if (ctx.cr0.eq) goto loc_828A1594;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r29,28(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x829c1f08
	ctx.lr = 0x828A1538;
	sub_829C1F08(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a1560
	if (ctx.cr0.eq) goto loc_828A1560;
	// bl 0x823e99e0
	ctx.lr = 0x828A1544;
	sub_823E99E0(ctx, base);
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
	ctx.lr = 0x828A155C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a1564
	goto loc_828A1564;
loc_828A1560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A1564:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x828a1580
	if (ctx.cr6.eq) goto loc_828A1580;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x828a158c
	goto loc_828A158C;
loc_828A1580:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
loc_828A158C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A1594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A1594:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A15A0"))) PPC_WEAK_FUNC(sub_828A15A0);
PPC_FUNC_IMPL(__imp__sub_828A15A0) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-15332
	ctx.r31.s64 = ctx.r11.s64 + -15332;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x828A15D8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a1604
	if (ctx.cr0.eq) goto loc_828A1604;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_828A1604:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828a1628
	if (ctx.cr6.eq) goto loc_828A1628;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x828A1628;
	sub_82332C38(ctx, base);
loc_828A1628:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_828A1640"))) PPC_WEAK_FUNC(sub_828A1640);
PPC_FUNC_IMPL(__imp__sub_828A1640) {
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
	// addi r11,r11,-15332
	ctx.r11.s64 = ctx.r11.s64 + -15332;
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
	// ble cr6,0x828a16ac
	if (!ctx.cr6.gt) goto loc_828A16AC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A167C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a169c
	if (ctx.cr6.eq) goto loc_828A169C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a167c
	if (ctx.cr6.lt) goto loc_828A167C;
	// b 0x828a16ac
	goto loc_828A16AC;
loc_828A169C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_828A16AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a16d4
	if (ctx.cr6.eq) goto loc_828A16D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828A16CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a16d8
	goto loc_828A16D8;
loc_828A16D4:
	// bl 0x8289fab0
	ctx.lr = 0x828A16D8;
	sub_8289FAB0(ctx, base);
loc_828A16D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A16E8"))) PPC_WEAK_FUNC(sub_828A16E8);
PPC_FUNC_IMPL(__imp__sub_828A16E8) {
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
	// addi r11,r11,-15332
	ctx.r11.s64 = ctx.r11.s64 + -15332;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a1748
	if (!ctx.cr6.gt) goto loc_828A1748;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A1714:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a1734
	if (ctx.cr6.eq) goto loc_828A1734;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a1714
	if (ctx.cr6.lt) goto loc_828A1714;
	// b 0x828a1748
	goto loc_828A1748;
loc_828A1734:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a1750
	if (!ctx.cr6.eq) goto loc_828A1750;
loc_828A1748:
	// bl 0x8289fb58
	ctx.lr = 0x828A174C;
	sub_8289FB58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_828A1750:
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

__attribute__((alias("__imp__sub_828A1768"))) PPC_WEAK_FUNC(sub_828A1768);
PPC_FUNC_IMPL(__imp__sub_828A1768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-15332
	ctx.r11.s64 = ctx.r11.s64 + -15332;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a17e8
	if (!ctx.cr6.gt) goto loc_828A17E8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A17A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828a17c4
	if (ctx.cr6.eq) goto loc_828A17C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a17a4
	if (ctx.cr6.lt) goto loc_828A17A4;
	// b 0x828a17e8
	goto loc_828A17E8;
loc_828A17C4:
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
	ctx.lr = 0x828A17E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828a17f4
	if (!ctx.cr0.eq) goto loc_828A17F4;
loc_828A17E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289fbd8
	ctx.lr = 0x828A17F4;
	sub_8289FBD8(ctx, base);
loc_828A17F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1810"))) PPC_WEAK_FUNC(sub_828A1810);
PPC_FUNC_IMPL(__imp__sub_828A1810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A1828;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A182C;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a1840
	if (ctx.cr0.eq) goto loc_828A1840;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x828a184c
	goto loc_828A184C;
loc_828A1840:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1332);
loc_828A184C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A1854;
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

__attribute__((alias("__imp__sub_828A1868"))) PPC_WEAK_FUNC(sub_828A1868);
PPC_FUNC_IMPL(__imp__sub_828A1868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A1880;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A1884;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a1898
	if (ctx.cr0.eq) goto loc_828A1898;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x828a18a4
	goto loc_828A18A4;
loc_828A1898:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1336);
loc_828A18A4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A18AC;
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

__attribute__((alias("__imp__sub_828A18C0"))) PPC_WEAK_FUNC(sub_828A18C0);
PPC_FUNC_IMPL(__imp__sub_828A18C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A18D8;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A18DC;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a18f0
	if (ctx.cr0.eq) goto loc_828A18F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x828a18fc
	goto loc_828A18FC;
loc_828A18F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
loc_828A18FC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A1904;
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

__attribute__((alias("__imp__sub_828A1918"))) PPC_WEAK_FUNC(sub_828A1918);
PPC_FUNC_IMPL(__imp__sub_828A1918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x828A1920;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8289fc80
	ctx.lr = 0x828A192C;
	sub_8289FC80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r10,10352
	ctx.r10.s64 = ctx.r10.s64 + 10352;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r9,r9,10404
	ctx.r9.s64 = ctx.r9.s64 + 10404;
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r9.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r20,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r20.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r31,1644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1644, ctx.r31.u32);
	// addi r21,r30,1636
	ctx.r21.s64 = ctx.r30.s64 + 1636;
	// stw r31,1648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1648, ctx.r31.u32);
	// addi r29,r30,1660
	ctx.r29.s64 = ctx.r30.s64 + 1660;
	// stw r31,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r31.u32);
	// addi r28,r30,1684
	ctx.r28.s64 = ctx.r30.s64 + 1684;
	// stw r31,1656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1656, ctx.r31.u32);
	// addi r27,r30,1708
	ctx.r27.s64 = ctx.r30.s64 + 1708;
	// stw r31,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r31.u32);
	// lfd f0,20160(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20160);
	// stw r20,1664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1664, ctx.r20.u32);
	// addi r26,r30,1732
	ctx.r26.s64 = ctx.r30.s64 + 1732;
	// stw r31,1668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1668, ctx.r31.u32);
	// addi r25,r30,1756
	ctx.r25.s64 = ctx.r30.s64 + 1756;
	// stw r31,1672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1672, ctx.r31.u32);
	// addi r24,r30,1780
	ctx.r24.s64 = ctx.r30.s64 + 1780;
	// stw r31,1676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1676, ctx.r31.u32);
	// addi r23,r30,1804
	ctx.r23.s64 = ctx.r30.s64 + 1804;
	// stw r31,1680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1680, ctx.r31.u32);
	// addi r22,r30,1828
	ctx.r22.s64 = ctx.r30.s64 + 1828;
	// stw r31,1660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1660, ctx.r31.u32);
	// stw r11,1688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1688, ctx.r11.u32);
	// stw r31,1692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1692, ctx.r31.u32);
	// stw r31,1696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1696, ctx.r31.u32);
	// stw r31,1700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1700, ctx.r31.u32);
	// stw r31,1704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1704, ctx.r31.u32);
	// stw r31,1684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1684, ctx.r31.u32);
	// stw r11,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r11.u32);
	// stw r31,1716(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1716, ctx.r31.u32);
	// stw r31,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r31.u32);
	// stw r31,1724(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1724, ctx.r31.u32);
	// stw r31,1728(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1728, ctx.r31.u32);
	// stw r31,1708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1708, ctx.r31.u32);
	// stw r11,1736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1736, ctx.r11.u32);
	// stw r31,1740(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1740, ctx.r31.u32);
	// stw r31,1744(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1744, ctx.r31.u32);
	// stw r31,1748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1748, ctx.r31.u32);
	// stw r31,1752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1752, ctx.r31.u32);
	// stw r31,1732(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1732, ctx.r31.u32);
	// stw r11,1760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1760, ctx.r11.u32);
	// stw r31,1764(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1764, ctx.r31.u32);
	// stw r31,1768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1768, ctx.r31.u32);
	// stw r31,1772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1772, ctx.r31.u32);
	// stw r31,1776(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1776, ctx.r31.u32);
	// stw r31,1756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1756, ctx.r31.u32);
	// stw r11,1784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1784, ctx.r11.u32);
	// stw r31,1788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1788, ctx.r31.u32);
	// stw r31,1792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1792, ctx.r31.u32);
	// stw r31,1796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1796, ctx.r31.u32);
	// stw r31,1800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1800, ctx.r31.u32);
	// stw r31,1780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1780, ctx.r31.u32);
	// stw r11,1808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1808, ctx.r11.u32);
	// stw r31,1812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1812, ctx.r31.u32);
	// stw r31,1816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1816, ctx.r31.u32);
	// stw r31,1820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1820, ctx.r31.u32);
	// stw r31,1824(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1824, ctx.r31.u32);
	// stw r31,1804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1804, ctx.r31.u32);
	// stw r11,1832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1832, ctx.r11.u32);
	// stw r31,1836(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1836, ctx.r31.u32);
	// stw r31,1840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1840, ctx.r31.u32);
	// stw r31,1844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1844, ctx.r31.u32);
	// stw r31,1848(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1848, ctx.r31.u32);
	// stw r31,1828(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1828, ctx.r31.u32);
	// lfs f13,1548(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1548);
	ctx.f13.f64 = double(temp.f32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,1548(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1548, temp.u32);
	// stw r20,1520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1520, ctx.r20.u32);
	// stw r20,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r20.u32);
	// bl 0x828a06c8
	ctx.lr = 0x828A1A7C;
	sub_828A06C8(ctx, base);
	// stw r3,1608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1608, ctx.r3.u32);
	// stb r31,1632(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1632, ctx.r31.u8);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,1652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1652, ctx.r31.u32);
	// beq cr6,0x828a1aa8
	if (ctx.cr6.eq) goto loc_828A1AA8;
	// stw r31,20(r21)
	PPC_STORE_U32(ctx.r21.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1AA8;
	sub_82332C38(ctx, base);
loc_828A1AA8:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1acc
	if (ctx.cr6.eq) goto loc_828A1ACC;
	// stw r31,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1ACC;
	sub_82332C38(ctx, base);
loc_828A1ACC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1af0
	if (ctx.cr6.eq) goto loc_828A1AF0;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1AF0;
	sub_82332C38(ctx, base);
loc_828A1AF0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1b14
	if (ctx.cr6.eq) goto loc_828A1B14;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1B14;
	sub_82332C38(ctx, base);
loc_828A1B14:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1b38
	if (ctx.cr6.eq) goto loc_828A1B38;
	// stw r31,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1B38;
	sub_82332C38(ctx, base);
loc_828A1B38:
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r31,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1b5c
	if (ctx.cr6.eq) goto loc_828A1B5C;
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1B5C;
	sub_82332C38(ctx, base);
loc_828A1B5C:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// stw r31,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1b80
	if (ctx.cr6.eq) goto loc_828A1B80;
	// stw r31,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1B80;
	sub_82332C38(ctx, base);
loc_828A1B80:
	// lwz r11,20(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// stw r31,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1ba4
	if (ctx.cr6.eq) goto loc_828A1BA4;
	// stw r31,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1BA4;
	sub_82332C38(ctx, base);
loc_828A1BA4:
	// lwz r11,20(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// stw r31,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1bc8
	if (ctx.cr6.eq) goto loc_828A1BC8;
	// stw r31,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A1BC8;
	sub_82332C38(ctx, base);
loc_828A1BC8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,1852(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1852);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f10,1856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f9,1904(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1904);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,1204(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1204);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r31,1872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1872, ctx.r31.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r20,1876(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1876, ctx.r20.u32);
	// lfd f13,20152(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20152);
	// stw r31,1880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1880, ctx.r31.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadd f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 + ctx.f13.f64;
	// lfd f12,16672(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16672);
	// fadd f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 + ctx.f13.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadd f9,f9,f12
	ctx.f9.f64 = ctx.f9.f64 + ctx.f12.f64;
	// stfs f0,1896(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1896, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,17996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16768(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16768);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,1884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1884, ctx.r31.u32);
	// stfs f13,1892(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1892, temp.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f12,1900(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1900, temp.u32);
	// stw r31,1888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1888, ctx.r31.u32);
	// stw r20,1028(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1028, ctx.r20.u32);
	// stw r31,1060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1060, ctx.r31.u32);
	// stw r20,1016(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1016, ctx.r20.u32);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,1852(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1852, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,1856(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1856, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,1904(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1904, temp.u32);
	// stw r20,956(r30)
	PPC_STORE_U32(ctx.r30.u32 + 956, ctx.r20.u32);
	// stw r11,1864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1864, ctx.r11.u32);
	// stw r10,1860(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1860, ctx.r10.u32);
	// stw r5,1868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1868, ctx.r5.u32);
	// bne cr6,0x828a1c88
	if (!ctx.cr6.eq) goto loc_828A1C88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3628
	ctx.lr = 0x828A1C88;
	sub_829C3628(ctx, base);
loc_828A1C88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1C98"))) PPC_WEAK_FUNC(sub_828A1C98);
PPC_FUNC_IMPL(__imp__sub_828A1C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A1CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,8960
	ctx.r11.s64 = ctx.r11.s64 + 8960;
	// addi r10,r10,10352
	ctx.r10.s64 = ctx.r10.s64 + 10352;
	// addi r9,r9,10404
	ctx.r9.s64 = ctx.r9.s64 + 10404;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829c36c0
	ctx.lr = 0x828A1CD0;
	sub_829C36C0(ctx, base);
	// addi r30,r31,1828
	ctx.r30.s64 = ctx.r31.s64 + 1828;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828A1CEC;
	sub_82332CA8(ctx, base);
	// lwz r3,1840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a1cfc
	if (ctx.cr6.eq) goto loc_828A1CFC;
	// bl 0x82332db8
	ctx.lr = 0x828A1CFC;
	sub_82332DB8(ctx, base);
loc_828A1CFC:
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,1804
	ctx.r3.s64 = ctx.r31.s64 + 1804;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x8239d768
	ctx.lr = 0x828A1D14;
	sub_8239D768(ctx, base);
	// addi r3,r31,1780
	ctx.r3.s64 = ctx.r31.s64 + 1780;
	// bl 0x8239d768
	ctx.lr = 0x828A1D1C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x8239d768
	ctx.lr = 0x828A1D24;
	sub_8239D768(ctx, base);
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x8239d768
	ctx.lr = 0x828A1D2C;
	sub_8239D768(ctx, base);
	// addi r30,r31,1708
	ctx.r30.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1724(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828A1D48;
	sub_82332CA8(ctx, base);
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a1d58
	if (ctx.cr6.eq) goto loc_828A1D58;
	// bl 0x82332db8
	ctx.lr = 0x828A1D58;
	sub_82332DB8(ctx, base);
loc_828A1D58:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bl 0x8239d768
	ctx.lr = 0x828A1D6C;
	sub_8239D768(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x82339860
	ctx.lr = 0x828A1D74;
	sub_82339860(ctx, base);
	// addi r3,r31,1636
	ctx.r3.s64 = ctx.r31.s64 + 1636;
	// bl 0x82339860
	ctx.lr = 0x828A1D7C;
	sub_82339860(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289fdd8
	ctx.lr = 0x828A1D84;
	sub_8289FDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1D90"))) PPC_WEAK_FUNC(sub_828A1D90);
PPC_FUNC_IMPL(__imp__sub_828A1D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8284c7e8
	ctx.lr = 0x828A1DAC;
	sub_8284C7E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3330
	ctx.lr = 0x828A1DB4;
	sub_829C3330(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,29548
	ctx.r3.s64 = ctx.r11.s64 + 29548;
	// bl 0x828165a8
	ctx.lr = 0x828A1DC0;
	sub_828165A8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r3.u32);
	// beq 0x828a1de4
	if (ctx.cr0.eq) goto loc_828A1DE4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a1de4
	if (ctx.cr6.eq) goto loc_828A1DE4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a1de8
	goto loc_828A1DE8;
loc_828A1DE4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A1DE8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// bl 0x82816528
	ctx.lr = 0x828A1DF4;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,29568
	ctx.r3.s64 = ctx.r11.s64 + 29568;
	// bl 0x82816528
	ctx.lr = 0x828A1E04;
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
	ctx.lr = 0x828A1E18;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// bl 0x82816528
	ctx.lr = 0x828A1E24;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x828A1E34;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828A1E44;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26652
	ctx.r3.s64 = ctx.r11.s64 + -26652;
	// bl 0x82816528
	ctx.lr = 0x828A1E50;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x828A1E60;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828A1E70;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26624
	ctx.r3.s64 = ctx.r11.s64 + -26624;
	// bl 0x82816528
	ctx.lr = 0x828A1E7C;
	sub_82816528(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-23268
	ctx.r3.s64 = ctx.r11.s64 + -23268;
	// bl 0x82816528
	ctx.lr = 0x828A1E8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828A1E9C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-23300
	ctx.r3.s64 = ctx.r11.s64 + -23300;
	// bl 0x82816528
	ctx.lr = 0x828A1EA8;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-30104
	ctx.r3.s64 = ctx.r11.s64 + -30104;
	// bl 0x82816528
	ctx.lr = 0x828A1EB8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828A1EC8;
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

__attribute__((alias("__imp__sub_828A1EE0"))) PPC_WEAK_FUNC(sub_828A1EE0);
PPC_FUNC_IMPL(__imp__sub_828A1EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A1EE8;
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
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828a1f5c
	if (!ctx.cr6.eq) goto loc_828A1F5C;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828a1f5c
	if (ctx.cr6.eq) goto loc_828A1F5C;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a1f3c
	if (ctx.cr6.eq) goto loc_828A1F3C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A1F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A1F3C:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a1f5c
	if (ctx.cr6.eq) goto loc_828A1F5C;
	// lwz r10,1780(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a1f5c
	if (!ctx.cr6.eq) goto loc_828A1F5C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1780, ctx.r10.u32);
loc_828A1F5C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284cab8
	ctx.lr = 0x828A1F70;
	sub_8284CAB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A1F78"))) PPC_WEAK_FUNC(sub_828A1F78);
PPC_FUNC_IMPL(__imp__sub_828A1F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828a2998
	ctx.lr = 0x828A1F90;
	sub_828A2998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289ff08
	ctx.lr = 0x828A1F98;
	sub_8289FF08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A1FB0"))) PPC_WEAK_FUNC(sub_828A1FB0);
PPC_FUNC_IMPL(__imp__sub_828A1FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828a2998
	ctx.lr = 0x828A1FC8;
	sub_828A2998(ctx, base);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a1fec
	if (ctx.cr6.eq) goto loc_828A1FEC;
	// lwz r11,800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x828a1ff0
	goto loc_828A1FF0;
loc_828A1FEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828A1FF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a2004
	if (ctx.cr6.eq) goto loc_828A2004;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1780, ctx.r10.u32);
loc_828A2004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2018"))) PPC_WEAK_FUNC(sub_828A2018);
PPC_FUNC_IMPL(__imp__sub_828A2018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828A2020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,1876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a2134
	if (ctx.cr6.eq) goto loc_828A2134;
	// bl 0x828a2998
	ctx.lr = 0x828A2048;
	sub_828A2998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2998
	ctx.lr = 0x828A2050;
	sub_828A2998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f88
	ctx.lr = 0x828A2058;
	sub_829C1F88(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r27,-31944
	ctx.r27.s64 = -2093481984;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,29548
	ctx.r28.s64 = ctx.r11.s64 + 29548;
	// beq 0x828a20b8
	if (ctx.cr0.eq) goto loc_828A20B8;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a208c
	if (ctx.cr0.eq) goto loc_828A208C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a208c
	if (ctx.cr6.eq) goto loc_828A208C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a2090
	goto loc_828A2090;
loc_828A208C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_828A2090:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r30,-6056(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x828A209C;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x828A20B8;
	sub_829E3FD0(ctx, base);
loc_828A20B8:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a01f0
	ctx.lr = 0x828A20D8;
	sub_828A01F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f88
	ctx.lr = 0x828A20E0;
	sub_829C1F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a2134
	if (ctx.cr0.eq) goto loc_828A2134;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a2108
	if (ctx.cr0.eq) goto loc_828A2108;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a2108
	if (ctx.cr6.eq) goto loc_828A2108;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a210c
	goto loc_828A210C;
loc_828A2108:
	// li r30,0
	ctx.r30.s64 = 0;
loc_828A210C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,-6056(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x828A2118;
	sub_828165A8(ctx, base);
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
	ctx.lr = 0x828A2134;
	sub_829E3FD0(ctx, base);
loc_828A2134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2140"))) PPC_WEAK_FUNC(sub_828A2140);
PPC_FUNC_IMPL(__imp__sub_828A2140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A2148;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1492(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a21b4
	if (ctx.cr6.eq) goto loc_828A21B4;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a21a4
	if (ctx.cr6.lt) goto loc_828A21A4;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x828A218C;
	sub_823327E0(ctx, base);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828A21A4;
	sub_82A455D0(ctx, base);
loc_828A21A4:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_828A21B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A21C0"))) PPC_WEAK_FUNC(sub_828A21C0);
PPC_FUNC_IMPL(__imp__sub_828A21C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61744
	ctx.lr = 0x828A21D4;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1772(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1772);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r5.u64);
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a2210
	if (ctx.cr6.eq) goto loc_828A2210;
	// lbz r11,1632(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1632);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1768(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1768);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f29,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x828a222c
	if (!ctx.cr6.eq) goto loc_828A222C;
loc_828A2210:
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x828a2314
	goto loc_828A2314;
loc_828A222C:
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f97d8
	ctx.lr = 0x828A2238;
	sub_824F97D8(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x828A223C;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f31,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,16388(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16388);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f2,16728(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16728);
	// fmsubs f28,f0,f30,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a4db00
	ctx.lr = 0x828A2274;
	sub_82A4DB00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsqrts f27,f0
	ctx.f27.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82a4cd78
	ctx.lr = 0x828A2284;
	sub_82A4CD78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fmuls f4,f28,f29
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmsubs f5,f5,f30,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f11,f5,f27
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmuls f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x828A2314;
	sub_82817280(ctx, base);
loc_828A2314:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61790
	ctx.lr = 0x828A2324;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2338"))) PPC_WEAK_FUNC(sub_828A2338);
PPC_FUNC_IMPL(__imp__sub_828A2338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A2340;
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
	// bl 0x828a0058
	ctx.lr = 0x828A2354;
	sub_828A0058(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x828a2370
	if (!ctx.cr6.eq) goto loc_828A2370;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a2370
	if (ctx.cr6.eq) goto loc_828A2370;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a29f0
	ctx.lr = 0x828A2370;
	sub_828A29F0(ctx, base);
loc_828A2370:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2378"))) PPC_WEAK_FUNC(sub_828A2378);
PPC_FUNC_IMPL(__imp__sub_828A2378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,1904(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2380"))) PPC_WEAK_FUNC(sub_828A2380);
PPC_FUNC_IMPL(__imp__sub_828A2380) {
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
	// lwz r11,1492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a23b8
	if (ctx.cr6.eq) goto loc_828A23B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,1060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A23B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a23e4
	goto loc_828A23E4;
loc_828A23B8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A23C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a23dc
	if (!ctx.cr0.eq) goto loc_828A23DC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f1.f64 = double(temp.f32);
	// b 0x828a23e4
	goto loc_828A23E4;
loc_828A23DC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
loc_828A23E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A23F8"))) PPC_WEAK_FUNC(sub_828A23F8);
PPC_FUNC_IMPL(__imp__sub_828A23F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a241c
	if (!ctx.cr6.gt) goto loc_828A241C;
	// lbz r11,1632(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// lwz r10,1648(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_828A241C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2428"))) PPC_WEAK_FUNC(sub_828A2428);
PPC_FUNC_IMPL(__imp__sub_828A2428) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828a2448
	if (!ctx.cr6.eq) goto loc_828A2448;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x828a2464
	if (ctx.cr6.lt) goto loc_828A2464;
loc_828A2448:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x828a2464
	if (!ctx.cr6.eq) goto loc_828A2464;
	// lwz r11,756(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// blr 
	return;
loc_828A2464:
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2470"))) PPC_WEAK_FUNC(sub_828A2470);
PPC_FUNC_IMPL(__imp__sub_828A2470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A2478;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828a25b4
	if (ctx.cr6.eq) goto loc_828A25B4;
	// lwz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a25b4
	if (!ctx.cr6.gt) goto loc_828A25B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d3c58
	ctx.lr = 0x828A24B8;
	sub_824D3C58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a25b4
	if (ctx.cr0.eq) goto loc_828A25B4;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x824d5a20
	ctx.lr = 0x828A24C8;
	sub_824D5A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a25b4
	if (ctx.cr0.eq) goto loc_828A25B4;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// bl 0x824d5a20
	ctx.lr = 0x828A24D8;
	sub_824D5A20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A24EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a25b4
	if (ctx.cr0.eq) goto loc_828A25B4;
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a25b4
	if (ctx.cr0.eq) goto loc_828A25B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a25b4
	if (ctx.cr0.eq) goto loc_828A25B4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a255c
	if (ctx.cr6.eq) goto loc_828A255C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a255c
	if (ctx.cr0.eq) goto loc_828A255C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828a2578
	if (ctx.cr6.eq) goto loc_828A2578;
loc_828A255C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r5,112(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x8282d4b0
	ctx.lr = 0x828A256C;
	sub_8282D4B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x828A2578;
	sub_82412B58(ctx, base);
loc_828A2578:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a25b4
	if (ctx.cr6.eq) goto loc_828A25B4;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,18112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lfs f2,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A25B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A25B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A25C0"))) PPC_WEAK_FUNC(sub_828A25C0);
PPC_FUNC_IMPL(__imp__sub_828A25C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1748(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1748);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a25f8
	if (!ctx.cr6.gt) goto loc_828A25F8;
	// lwz r11,1744(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828a25f0
	if (ctx.cr6.gt) goto loc_828A25F0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16552(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16552);
loc_828A25F0:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_828A25F8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16552(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2608"))) PPC_WEAK_FUNC(sub_828A2608);
PPC_FUNC_IMPL(__imp__sub_828A2608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A2610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A263C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a268c
	if (!ctx.cr0.eq) goto loc_828A268C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32118
	ctx.r10.s64 = -2104885248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,1888(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1888);
	// addi r10,r10,6336
	ctx.r10.s64 = ctx.r10.s64 + 6336;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82664430
	ctx.lr = 0x828A268C;
	sub_82664430(ctx, base);
loc_828A268C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2698"))) PPC_WEAK_FUNC(sub_828A2698);
PPC_FUNC_IMPL(__imp__sub_828A2698) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1856(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828a26c0
	if (ctx.cr6.gt) goto loc_828A26C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
loc_828A26C0:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6160
	ctx.r11.s64 = ctx.r11.s64 + 6160;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82664430
	ctx.lr = 0x828A26EC;
	sub_82664430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2700"))) PPC_WEAK_FUNC(sub_828A2700);
PPC_FUNC_IMPL(__imp__sub_828A2700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A2718;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A271C;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a2730
	if (ctx.cr0.eq) goto loc_828A2730;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// b 0x828a273c
	goto loc_828A273C;
loc_828A2730:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1344);
loc_828A273C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2744;
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

__attribute__((alias("__imp__sub_828A2758"))) PPC_WEAK_FUNC(sub_828A2758);
PPC_FUNC_IMPL(__imp__sub_828A2758) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1852(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x828a2780
	if (ctx.cr6.gt) goto loc_828A2780;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,16356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
loc_828A2780:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6248
	ctx.r11.s64 = ctx.r11.s64 + 6248;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82664430
	ctx.lr = 0x828A27AC;
	sub_82664430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A27C0"))) PPC_WEAK_FUNC(sub_828A27C0);
PPC_FUNC_IMPL(__imp__sub_828A27C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A27D8;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A27DC;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a27f0
	if (ctx.cr0.eq) goto loc_828A27F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x828a27fc
	goto loc_828A27FC;
loc_828A27F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
loc_828A27FC:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2804;
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

__attribute__((alias("__imp__sub_828A2818"))) PPC_WEAK_FUNC(sub_828A2818);
PPC_FUNC_IMPL(__imp__sub_828A2818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A2834;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2838;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a284c
	if (ctx.cr0.eq) goto loc_828A284C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x828a2858
	goto loc_828A2858;
loc_828A284C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
loc_828A2858:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x828a28cc
	if (!ctx.cr6.eq) goto loc_828A28CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f88
	ctx.lr = 0x828A2870;
	sub_829C1F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a28cc
	if (ctx.cr0.eq) goto loc_828A28CC;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a2898
	if (ctx.cr0.eq) goto loc_828A2898;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a2898
	if (ctx.cr6.eq) goto loc_828A2898;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a289c
	goto loc_828A289C;
loc_828A2898:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A289C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r3,r10,-30084
	ctx.r3.s64 = ctx.r10.s64 + -30084;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x828A28B0;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x828A28CC;
	sub_829E3FD0(ctx, base);
loc_828A28CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A28E8"))) PPC_WEAK_FUNC(sub_828A28E8);
PPC_FUNC_IMPL(__imp__sub_828A28E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f88
	ctx.lr = 0x828A2904;
	sub_829C1F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a2960
	if (ctx.cr0.eq) goto loc_828A2960;
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a292c
	if (ctx.cr0.eq) goto loc_828A292C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a292c
	if (ctx.cr6.eq) goto loc_828A292C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a2930
	goto loc_828A2930;
loc_828A292C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A2930:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r3,r10,-30052
	ctx.r3.s64 = ctx.r10.s64 + -30052;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x828A2944;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x828A2960;
	sub_829E3FD0(ctx, base);
loc_828A2960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2978"))) PPC_WEAK_FUNC(sub_828A2978);
PPC_FUNC_IMPL(__imp__sub_828A2978) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,800(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r5,1632(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1632);
	// b 0x82893210
	sub_82893210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2990"))) PPC_WEAK_FUNC(sub_828A2990);
PPC_FUNC_IMPL(__imp__sub_828A2990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2998"))) PPC_WEAK_FUNC(sub_828A2998);
PPC_FUNC_IMPL(__imp__sub_828A2998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A29B0;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A29B4;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a29c8
	if (ctx.cr0.eq) goto loc_828A29C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x828a29d4
	goto loc_828A29D4;
loc_828A29C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
loc_828A29D4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A29DC;
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

__attribute__((alias("__imp__sub_828A29F0"))) PPC_WEAK_FUNC(sub_828A29F0);
PPC_FUNC_IMPL(__imp__sub_828A29F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f88
	ctx.lr = 0x828A2A08;
	sub_829C1F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a2a74
	if (ctx.cr0.eq) goto loc_828A2A74;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a2a5c
	if (!ctx.cr6.eq) goto loc_828A2A5C;
loc_828A2A1C:
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a2a3c
	if (ctx.cr0.eq) goto loc_828A2A3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a2a3c
	if (ctx.cr6.eq) goto loc_828A2A3C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a2a40
	goto loc_828A2A40;
loc_828A2A3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A2A40:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-6056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828a4a78
	ctx.lr = 0x828A2A58;
	sub_828A4A78(ctx, base);
	// b 0x828a2a74
	goto loc_828A2A74;
loc_828A2A5C:
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a2a1c
	if (ctx.cr6.eq) goto loc_828A2A1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x829114d8
	ctx.lr = 0x828A2A74;
	sub_829114D8(ctx, base);
loc_828A2A74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2A88"))) PPC_WEAK_FUNC(sub_828A2A88);
PPC_FUNC_IMPL(__imp__sub_828A2A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A2AA8;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2AAC;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2ac4
	if (ctx.cr0.eq) goto loc_828A2AC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828a2ad0
	goto loc_828A2AD0;
loc_828A2AC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
loc_828A2AD0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2AD8;
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

__attribute__((alias("__imp__sub_828A2AF0"))) PPC_WEAK_FUNC(sub_828A2AF0);
PPC_FUNC_IMPL(__imp__sub_828A2AF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A2AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a2ba0
	if (!ctx.cr6.eq) goto loc_828A2BA0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x828a2b68
	if (!ctx.cr6.lt) goto loc_828A2B68;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29492
	ctx.r11.s64 = ctx.r11.s64 + -29492;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-30016
	ctx.r3.s64 = ctx.r10.s64 + -30016;
	// bl 0x82816528
	ctx.lr = 0x828A2B44;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x828A2B5C;
	sub_8282C950(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_828A2B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A2B70;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2B74;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2b8c
	if (ctx.cr0.eq) goto loc_828A2B8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a2b98
	goto loc_828A2B98;
loc_828A2B8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
loc_828A2B98:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A2BA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2BA8"))) PPC_WEAK_FUNC(sub_828A2BA8);
PPC_FUNC_IMPL(__imp__sub_828A2BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a2bdc
	if (ctx.cr6.eq) goto loc_828A2BDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a2be0
	goto loc_828A2BE0;
loc_828A2BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A2BE0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828a2bf0
	if (!ctx.cr6.eq) goto loc_828A2BF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c47f0
	ctx.lr = 0x828A2BF0;
	sub_829C47F0(ctx, base);
loc_828A2BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2C08"))) PPC_WEAK_FUNC(sub_828A2C08);
PPC_FUNC_IMPL(__imp__sub_828A2C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a2c64
	if (!ctx.cr6.eq) goto loc_828A2C64;
	// bl 0x829c1f08
	ctx.lr = 0x828A2C34;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2C38;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2c50
	if (ctx.cr0.eq) goto loc_828A2C50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a2c5c
	goto loc_828A2C5C;
loc_828A2C50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
loc_828A2C5C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A2C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A2C80"))) PPC_WEAK_FUNC(sub_828A2C80);
PPC_FUNC_IMPL(__imp__sub_828A2C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A2CA0;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2CA4;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2cbc
	if (ctx.cr0.eq) goto loc_828A2CBC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x828a2cc8
	goto loc_828A2CC8;
loc_828A2CBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
loc_828A2CC8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2CD0;
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

__attribute__((alias("__imp__sub_828A2CE8"))) PPC_WEAK_FUNC(sub_828A2CE8);
PPC_FUNC_IMPL(__imp__sub_828A2CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A2D08;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2D0C;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2d24
	if (ctx.cr0.eq) goto loc_828A2D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x828a2d30
	goto loc_828A2D30;
loc_828A2D24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
loc_828A2D30:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2D38;
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

__attribute__((alias("__imp__sub_828A2D50"))) PPC_WEAK_FUNC(sub_828A2D50);
PPC_FUNC_IMPL(__imp__sub_828A2D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A2D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1492(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	// clrlwi r29,r4,24
	ctx.r29.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a2dc4
	if (ctx.cr6.eq) goto loc_828A2DC4;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a2db4
	if (ctx.cr6.lt) goto loc_828A2DB4;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x828A2D9C;
	sub_823327E0(ctx, base);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828A2DB4;
	sub_82A455D0(ctx, base);
loc_828A2DB4:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_828A2DC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A2DD0"))) PPC_WEAK_FUNC(sub_828A2DD0);
PPC_FUNC_IMPL(__imp__sub_828A2DD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A2DF0;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2DF4;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2e0c
	if (ctx.cr0.eq) goto loc_828A2E0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x828a2e18
	goto loc_828A2E18;
loc_828A2E0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
loc_828A2E18:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2E20;
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

__attribute__((alias("__imp__sub_828A2E38"))) PPC_WEAK_FUNC(sub_828A2E38);
PPC_FUNC_IMPL(__imp__sub_828A2E38) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A2E58;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2E5C;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2e74
	if (ctx.cr0.eq) goto loc_828A2E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x828a2e80
	goto loc_828A2E80;
loc_828A2E74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
loc_828A2E80:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x828a2ed4
	if (!ctx.cr6.lt) goto loc_828A2ED4;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29492
	ctx.r11.s64 = ctx.r11.s64 + -29492;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-29984
	ctx.r3.s64 = ctx.r10.s64 + -29984;
	// bl 0x82816528
	ctx.lr = 0x828A2EBC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282c950
	ctx.lr = 0x828A2ED4;
	sub_8282C950(ctx, base);
loc_828A2ED4:
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

__attribute__((alias("__imp__sub_828A2EF0"))) PPC_WEAK_FUNC(sub_828A2EF0);
PPC_FUNC_IMPL(__imp__sub_828A2EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829c1f08
	ctx.lr = 0x828A2F10;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2F14;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq 0x828a2f2c
	if (ctx.cr0.eq) goto loc_828A2F2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x828a2f38
	goto loc_828A2F38;
loc_828A2F2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
loc_828A2F38:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2F40;
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

__attribute__((alias("__imp__sub_828A2F58"))) PPC_WEAK_FUNC(sub_828A2F58);
PPC_FUNC_IMPL(__imp__sub_828A2F58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A2F70"))) PPC_WEAK_FUNC(sub_828A2F70);
PPC_FUNC_IMPL(__imp__sub_828A2F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A2F78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a3014
	if (ctx.cr6.eq) goto loc_828A3014;
	// lwz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828a3014
	if (!ctx.cr6.gt) goto loc_828A3014;
	// li r28,0
	ctx.r28.s64 = 0;
loc_828A2FA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a2fb4
	if (ctx.cr6.eq) goto loc_828A2FB4;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// b 0x828a2fb8
	goto loc_828A2FB8;
loc_828A2FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828A2FB8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a2ffc
	if (ctx.cr6.eq) goto loc_828A2FFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x829c1f08
	ctx.lr = 0x828A2FCC;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A2FD0;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq 0x828a2fe8
	if (ctx.cr0.eq) goto loc_828A2FE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x828a2ff4
	goto loc_828A2FF4;
loc_828A2FE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1300);
loc_828A2FF4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A2FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A2FFC:
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r10,1424(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828a2fa0
	if (ctx.cr6.lt) goto loc_828A2FA0;
loc_828A3014:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A3020"))) PPC_WEAK_FUNC(sub_828A3020);
PPC_FUNC_IMPL(__imp__sub_828A3020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,1700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828a30bc
	if (!ctx.cr6.lt) goto loc_828A30BC;
	// lwz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a30bc
	if (ctx.cr6.eq) goto loc_828A30BC;
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x828a30bc
	if (ctx.cr6.eq) goto loc_828A30BC;
	// bl 0x828a30d8
	ctx.lr = 0x828A3070;
	sub_828A30D8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a3090
	if (ctx.cr0.eq) goto loc_828A3090;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a3090
	if (ctx.cr6.eq) goto loc_828A3090;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x828a3094
	goto loc_828A3094;
loc_828A3090:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A3094:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a30bc
	if (ctx.cr6.eq) goto loc_828A30BC;
	// lwz r10,1696(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-6056(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x829e3fd0
	ctx.lr = 0x828A30BC;
	sub_829E3FD0(ctx, base);
loc_828A30BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A30D8"))) PPC_WEAK_FUNC(sub_828A30D8);
PPC_FUNC_IMPL(__imp__sub_828A30D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// stb r4,1632(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1632, ctx.r4.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r10,1765(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1765);
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r3,1780(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stb r4,1765(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1765, ctx.r4.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lfs f0,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,964(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 964, temp.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A3138"))) PPC_WEAK_FUNC(sub_828A3138);
PPC_FUNC_IMPL(__imp__sub_828A3138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A3140"))) PPC_WEAK_FUNC(sub_828A3140);
PPC_FUNC_IMPL(__imp__sub_828A3140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829c1f08
	ctx.lr = 0x828A3158;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A315C;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a3170
	if (ctx.cr0.eq) goto loc_828A3170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x828a317c
	goto loc_828A317C;
loc_828A3170:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
loc_828A317C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3184;
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

__attribute__((alias("__imp__sub_828A3198"))) PPC_WEAK_FUNC(sub_828A3198);
PPC_FUNC_IMPL(__imp__sub_828A3198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A31A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a31c8
	if (!ctx.cr6.eq) goto loc_828A31C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,1632(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// lwz r11,1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A31C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A31C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A31DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// lwz r10,1672(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1672);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x828a3214
	if (ctx.cr6.lt) goto loc_828A3214;
	// beq cr6,0x828a3208
	if (ctx.cr6.eq) goto loc_828A3208;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x828a3228
	if (!ctx.cr6.lt) goto loc_828A3228;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1364);
	// b 0x828a321c
	goto loc_828A321C;
loc_828A3208:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// b 0x828a321c
	goto loc_828A321C;
loc_828A3214:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1360);
loc_828A321C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A3228:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828A3230;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a3298
	if (ctx.cr0.eq) goto loc_828A3298;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a324c
	if (ctx.cr6.eq) goto loc_828A324C;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x828a3250
	goto loc_828A3250;
loc_828A324C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_828A3250:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lbz r27,1632(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// bl 0x82833180
	ctx.lr = 0x828A3260;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stb r27,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r27.u8);
	// b 0x828a329c
	goto loc_828A329C;
loc_828A3298:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828A329C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A32AC;
	sub_82833A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A32B8"))) PPC_WEAK_FUNC(sub_828A32B8);
PPC_FUNC_IMPL(__imp__sub_828A32B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,800(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,1152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3304;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a21c0
	ctx.lr = 0x828A3320;
	sub_828A21C0(ctx, base);
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

__attribute__((alias("__imp__sub_828A3340"))) PPC_WEAK_FUNC(sub_828A3340);
PPC_FUNC_IMPL(__imp__sub_828A3340) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r5.u64);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r7,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r7.u64);
	// std r8,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r8.u64);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r8,223
	ctx.r8.s64 = 223;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82825330
	ctx.lr = 0x828A3414;
	sub_82825330(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a3438
	if (!ctx.cr6.eq) goto loc_828A3438;
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
loc_828A3438:
	// lfs f13,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lfs f1,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// bl 0x82332e18
	ctx.lr = 0x828A34AC;
	sub_82332E18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A34E0"))) PPC_WEAK_FUNC(sub_828A34E0);
PPC_FUNC_IMPL(__imp__sub_828A34E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A34E8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61748
	ctx.lr = 0x828A34F0;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,60
	ctx.r8.s64 = 60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lfs f28,1892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	ctx.f28.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f0,1700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fadds f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fadds f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828a32b8
	ctx.lr = 0x828A3570;
	sub_828A32B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82817bb8
	ctx.lr = 0x828A357C;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r6,r30,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadds f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a3340
	ctx.lr = 0x828A35D4;
	sub_828A3340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828A35E4;
	sub_82A4EA80(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a3614
	if (!ctx.cr6.eq) goto loc_828A3614;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a3614
	if (ctx.cr6.eq) goto loc_828A3614;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 148);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r5,1632(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// bl 0x828934b0
	ctx.lr = 0x828A3614;
	sub_828934B0(ctx, base);
loc_828A3614:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332ca8
	ctx.lr = 0x828A362C;
	sub_82332CA8(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a363c
	if (ctx.cr6.eq) goto loc_828A363C;
	// bl 0x82332db8
	ctx.lr = 0x828A363C;
	sub_82332DB8(ctx, base);
loc_828A363C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61794
	ctx.lr = 0x828A3648;
	__restfpr_28(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A3650"))) PPC_WEAK_FUNC(sub_828A3650);
PPC_FUNC_IMPL(__imp__sub_828A3650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A3658;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61748
	ctx.lr = 0x828A3660;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828a3890
	if (!ctx.cr6.eq) goto loc_828A3890;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,1700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// fadds f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x828a38a8
	ctx.lr = 0x828A36C8;
	sub_828A38A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bne cr6,0x828a3708
	if (!ctx.cr6.eq) goto loc_828A3708;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x828a3708
	if (!ctx.cr6.eq) goto loc_828A3708;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x828a37ec
	if (ctx.cr6.eq) goto loc_828A37EC;
loc_828A3708:
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f28,1892(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1892);
	ctx.f28.f64 = double(temp.f32);
	// rldicr r6,r29,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a32b8
	ctx.lr = 0x828A3728;
	sub_828A32B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82817bb8
	ctx.lr = 0x828A3734;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldicr r6,r29,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadds f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a3340
	ctx.lr = 0x828A378C;
	sub_828A3340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828A379C;
	sub_82A4EA80(ctx, base);
	// lfs f11,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x828A37DC;
	sub_82332E18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x828a381c
	goto loc_828A381C;
loc_828A37EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a32b8
	ctx.lr = 0x828A3804;
	sub_828A32B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82817bb8
	ctx.lr = 0x828A3810;
	sub_82817BB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_828A381C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a3890
	if (ctx.cr6.eq) goto loc_828A3890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A384C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a3888
	if (ctx.cr0.eq) goto loc_828A3888;
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
	ctx.lr = 0x828A386C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r30,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A3888:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828a3894
	goto loc_828A3894;
loc_828A3890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A3894:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61794
	ctx.lr = 0x828A38A0;
	__restfpr_28(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A38A8"))) PPC_WEAK_FUNC(sub_828A38A8);
PPC_FUNC_IMPL(__imp__sub_828A38A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A38B0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,800(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x828a39b0
	if (ctx.cr6.eq) goto loc_828A39B0;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824f97d8
	ctx.lr = 0x828A38F8;
	sub_824F97D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f11,1868(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f12,1864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,1860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1860);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f12,f6,f12,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f5,f10,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfs f5,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f7,f4,f10,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f7.f64));
	// lfs f8,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f29,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f29.f64 = double(temp.f32);
	// fadds f13,f29,f13
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// fadds f30,f30,f2
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// fadds f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fmadds f12,f3,f10,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f10,f1,f11,f9
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f11,f31,f11,f7
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f5,f0,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f4,f0,f11
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 + ctx.f12.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x828a39cc
	goto loc_828A39CC;
loc_828A39B0:
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,624(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r9,628(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
loc_828A39CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_828A39E0"))) PPC_WEAK_FUNC(sub_828A39E0);
PPC_FUNC_IMPL(__imp__sub_828A39E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,1872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1872, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A39F8"))) PPC_WEAK_FUNC(sub_828A39F8);
PPC_FUNC_IMPL(__imp__sub_828A39F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A3A18"))) PPC_WEAK_FUNC(sub_828A3A18);
PPC_FUNC_IMPL(__imp__sub_828A3A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A3A20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r10,1884(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828a3b70
	if (!ctx.cr6.eq) goto loc_828A3B70;
	// lwz r10,800(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a3adc
	if (ctx.cr6.eq) goto loc_828A3ADC;
	// lwz r10,-72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// lwz r9,800(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	// lwz r9,1780(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1780);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828a3adc
	if (!ctx.cr6.eq) goto loc_828A3ADC;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x828A3A88;
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
	ctx.lr = 0x828A3AB0;
	sub_829E3FD0(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
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
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a3b70
	goto loc_828A3B70;
loc_828A3ADC:
	// lwz r10,1492(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a3b70
	if (ctx.cr6.eq) goto loc_828A3B70;
	// lwz r10,-72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// lwz r9,1492(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1492);
	// lwz r9,1456(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828a3b70
	if (!ctx.cr6.eq) goto loc_828A3B70;
	// lwz r31,1492(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a3b70
	if (ctx.cr6.eq) goto loc_828A3B70;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a3b60
	if (ctx.cr6.lt) goto loc_828A3B60;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x828A3B48;
	sub_823327E0(ctx, base);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828A3B60;
	sub_82A455D0(ctx, base);
loc_828A3B60:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_828A3B70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A3B78"))) PPC_WEAK_FUNC(sub_828A3B78);
PPC_FUNC_IMPL(__imp__sub_828A3B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A3BA0"))) PPC_WEAK_FUNC(sub_828A3BA0);
PPC_FUNC_IMPL(__imp__sub_828A3BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x828a3bec
	if (ctx.cr6.eq) goto loc_828A3BEC;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// b 0x828a3c18
	goto loc_828A3C18;
loc_828A3BEC:
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne 0x828a3c24
	if (!ctx.cr0.eq) goto loc_828A3C24;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
loc_828A3C18:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a3cb0
	goto loc_828A3CB0;
loc_828A3C24:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1492(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a3cb0
	if (ctx.cr6.eq) goto loc_828A3CB0;
	// lwz r10,1884(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1884);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828a3cb0
	if (!ctx.cr6.eq) goto loc_828A3CB0;
	// lwz r8,1424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1424);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x828a3cb0
	if (!ctx.cr6.gt) goto loc_828A3CB0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_828A3C54:
	// lwz r10,1492(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1492);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a3c6c
	if (ctx.cr6.eq) goto loc_828A3C6C;
	// lwz r10,1420(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1420);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x828a3c70
	goto loc_828A3C70;
loc_828A3C6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_828A3C70:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828a3c8c
	if (!ctx.cr6.eq) goto loc_828A3C8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x828a3c54
	if (ctx.cr6.lt) goto loc_828A3C54;
	// b 0x828a3cb0
	goto loc_828A3CB0;
loc_828A3C8C:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A3CB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A3CC8"))) PPC_WEAK_FUNC(sub_828A3CC8);
PPC_FUNC_IMPL(__imp__sub_828A3CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r10,800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a3da0
	if (ctx.cr6.eq) goto loc_828A3DA0;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a3d40
	if (ctx.cr6.eq) goto loc_828A3D40;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// rlwinm r10,r30,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x828a3d44
	goto loc_828A3D44;
loc_828A3D40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828A3D44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a3da0
	if (ctx.cr6.eq) goto loc_828A3DA0;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a3da0
	if (ctx.cr0.eq) goto loc_828A3DA0;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3DA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A3DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A3DB8"))) PPC_WEAK_FUNC(sub_828A3DB8);
PPC_FUNC_IMPL(__imp__sub_828A3DB8) {
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
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3DE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828A3DF8"))) PPC_WEAK_FUNC(sub_828A3DF8);
PPC_FUNC_IMPL(__imp__sub_828A3DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r30,-64(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a3e48
	if (ctx.cr6.eq) goto loc_828A3E48;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// b 0x828a3f18
	goto loc_828A3F18;
loc_828A3E48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A3E50;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A3E54;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a3e68
	if (ctx.cr0.eq) goto loc_828A3E68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x828a3e74
	goto loc_828A3E74;
loc_828A3E68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
loc_828A3E74:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a3e9c
	if (ctx.cr6.eq) goto loc_828A3E9C;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a3140
	ctx.lr = 0x828A3E98;
	sub_828A3140(ctx, base);
	// b 0x828a3f20
	goto loc_828A3F20;
loc_828A3E9C:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x828A3EB0;
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
	ctx.lr = 0x828A3ED8;
	sub_829E3FD0(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a3f20
	if (!ctx.cr0.eq) goto loc_828A3F20;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
loc_828A3F18:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A3F20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A3F20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A3F38"))) PPC_WEAK_FUNC(sub_828A3F38);
PPC_FUNC_IMPL(__imp__sub_828A3F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828a3140
	ctx.lr = 0x828A3F60;
	sub_828A3140(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// bl 0x828a2608
	ctx.lr = 0x828A3F78;
	sub_828A2608(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A3F90"))) PPC_WEAK_FUNC(sub_828A3F90);
PPC_FUNC_IMPL(__imp__sub_828A3F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828A3F98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a3ff4
	if (ctx.cr6.eq) goto loc_828A3FF4;
	// lbz r11,1764(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1764);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a3ff4
	if (ctx.cr0.eq) goto loc_828A3FF4;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// stb r27,1764(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1764, ctx.r27.u8);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,964(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 964, temp.u32);
	// bl 0x828932c8
	ctx.lr = 0x828A3FF4;
	sub_828932C8(ctx, base);
loc_828A3FF4:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,800(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a4014
	if (ctx.cr6.eq) goto loc_828A4014;
	// bl 0x828933d0
	ctx.lr = 0x828A4014;
	sub_828933D0(ctx, base);
loc_828A4014:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a412c
	if (ctx.cr6.eq) goto loc_828A412C;
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a412c
	if (ctx.cr6.eq) goto loc_828A412C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a412c
	if (ctx.cr0.eq) goto loc_828A412C;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828A4088;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a411c
	if (ctx.cr0.eq) goto loc_828A411C;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,800(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a40b4
	if (ctx.cr6.eq) goto loc_828A40B4;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x828a40b8
	goto loc_828A40B8;
loc_828A40B4:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_828A40B8:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828a40c8
	if (ctx.cr0.eq) goto loc_828A40C8;
	// lwz r29,80(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// b 0x828a40cc
	goto loc_828A40CC;
loc_828A40C8:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_828A40CC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r25,1632(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// bl 0x82833180
	ctx.lr = 0x828A40E8;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-29592
	ctx.r11.s64 = ctx.r11.s64 + -29592;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// stb r25,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r25.u8);
	// b 0x828a4120
	goto loc_828A4120;
loc_828A411C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_828A4120:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A412C;
	sub_82833A30(ctx, base);
loc_828A412C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4138"))) PPC_WEAK_FUNC(sub_828A4138);
PPC_FUNC_IMPL(__imp__sub_828A4138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r4,1632(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a418c
	if (ctx.cr0.eq) goto loc_828A418C;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a418c
	if (ctx.cr6.eq) goto loc_828A418C;
	// lbz r10,1632(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x828a4190
	goto loc_828A4190;
loc_828A418C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A4190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A41A8"))) PPC_WEAK_FUNC(sub_828A41A8);
PPC_FUNC_IMPL(__imp__sub_828A41A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A41B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x829c44d0
	ctx.lr = 0x828A41D4;
	sub_829C44D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a41e4
	if (ctx.cr0.eq) goto loc_828A41E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a423c
	goto loc_828A423C;
loc_828A41E4:
	// lwz r3,800(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x828a4238
	if (ctx.cr6.eq) goto loc_828A4238;
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a4238
	if (ctx.cr6.eq) goto loc_828A4238;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rldicr r7,r27,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A421C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a4238
	if (ctx.cr0.eq) goto loc_828A4238;
	// lwz r11,800(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x828a423c
	if (ctx.cr6.eq) goto loc_828A423C;
loc_828A4238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A423C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4248"))) PPC_WEAK_FUNC(sub_828A4248);
PPC_FUNC_IMPL(__imp__sub_828A4248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A427C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1872, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A42A8"))) PPC_WEAK_FUNC(sub_828A42A8);
PPC_FUNC_IMPL(__imp__sub_828A42A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r4,r11,6248
	ctx.r4.s64 = ctx.r11.s64 + 6248;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
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

__attribute__((alias("__imp__sub_828A42D8"))) PPC_WEAK_FUNC(sub_828A42D8);
PPC_FUNC_IMPL(__imp__sub_828A42D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a4330
	if (ctx.cr6.eq) goto loc_828A4330;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A432C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a436c
	goto loc_828A436C;
loc_828A4330:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x828A4344;
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
	ctx.lr = 0x828A436C;
	sub_829E3FD0(ctx, base);
loc_828A436C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4388"))) PPC_WEAK_FUNC(sub_828A4388);
PPC_FUNC_IMPL(__imp__sub_828A4388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A43BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1872, ctx.r10.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c1f08
	ctx.lr = 0x828A43EC;
	sub_829C1F08(ctx, base);
	// bl 0x828a4a20
	ctx.lr = 0x828A43F0;
	sub_828A4A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a4404
	if (ctx.cr0.eq) goto loc_828A4404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x828a4410
	goto loc_828A4410;
loc_828A4404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
loc_828A4410:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4418;
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

__attribute__((alias("__imp__sub_828A4430"))) PPC_WEAK_FUNC(sub_828A4430);
PPC_FUNC_IMPL(__imp__sub_828A4430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r3,1492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A446C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a44dc
	if (!ctx.cr0.eq) goto loc_828A44DC;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a2998
	ctx.lr = 0x828A4488;
	sub_828A2998(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r3,1492(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// bl 0x82911390
	ctx.lr = 0x828A44A0;
	sub_82911390(ctx, base);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29548
	ctx.r3.s64 = ctx.r10.s64 + 29548;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x828A44B4;
	sub_828165A8(ctx, base);
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
	ctx.lr = 0x828A44DC;
	sub_829E3FD0(ctx, base);
loc_828A44DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A44F8"))) PPC_WEAK_FUNC(sub_828A44F8);
PPC_FUNC_IMPL(__imp__sub_828A44F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r4,r11,6160
	ctx.r4.s64 = ctx.r11.s64 + 6160;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
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

__attribute__((alias("__imp__sub_828A4528"))) PPC_WEAK_FUNC(sub_828A4528);
PPC_FUNC_IMPL(__imp__sub_828A4528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828a29f0
	sub_828A29F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4540"))) PPC_WEAK_FUNC(sub_828A4540);
PPC_FUNC_IMPL(__imp__sub_828A4540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A4548;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,27720
	ctx.r30.s64 = ctx.r11.s64 + 27720;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c80b8
	ctx.lr = 0x828A457C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828a4608
	if (!ctx.cr0.eq) goto loc_828A4608;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x828a47b0
	ctx.lr = 0x828A458C;
	sub_828A47B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A45A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x828A45AC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a45f4
	if (ctx.cr0.eq) goto loc_828A45F4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r27,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r27.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// addi r10,r10,-17680
	ctx.r10.s64 = ctx.r10.s64 + -17680;
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// b 0x828a45f8
	goto loc_828A45F8;
loc_828A45F4:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_828A45F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x828A4604;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_828A4608:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4630"))) PPC_WEAK_FUNC(sub_828A4630);
PPC_FUNC_IMPL(__imp__sub_828A4630) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r4,r11,27720
	ctx.r4.s64 = ctx.r11.s64 + 27720;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
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

__attribute__((alias("__imp__sub_828A4660"))) PPC_WEAK_FUNC(sub_828A4660);
PPC_FUNC_IMPL(__imp__sub_828A4660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a0518
	ctx.lr = 0x828A468C;
	sub_828A0518(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265b998
	ctx.lr = 0x828A4694;
	sub_8265B998(ctx, base);
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

__attribute__((alias("__imp__sub_828A46B0"))) PPC_WEAK_FUNC(sub_828A46B0);
PPC_FUNC_IMPL(__imp__sub_828A46B0) {
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82833108
	ctx.lr = 0x828A46C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a46d8
	if (ctx.cr0.eq) goto loc_828A46D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a4c30
	ctx.lr = 0x828A46D4;
	sub_828A4C30(ctx, base);
	// b 0x828a46dc
	goto loc_828A46DC;
loc_828A46D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A46DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a46f4
	if (ctx.cr6.eq) goto loc_828A46F4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_828A46F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4708"))) PPC_WEAK_FUNC(sub_828A4708);
PPC_FUNC_IMPL(__imp__sub_828A4708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4748
	if (!ctx.cr0.eq) goto loc_828A4748;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26072(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26072, ctx.r11.u32);
	// addi r3,r9,-30228
	ctx.r3.s64 = ctx.r9.s64 + -30228;
	// bl 0x82816528
	ctx.lr = 0x828A4740;
	sub_82816528(ctx, base);
	// stw r3,-26076(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26076, ctx.r3.u32);
	// b 0x828a474c
	goto loc_828A474C;
loc_828A4748:
	// lwz r3,-26076(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26076);
loc_828A474C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4760"))) PPC_WEAK_FUNC(sub_828A4760);
PPC_FUNC_IMPL(__imp__sub_828A4760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a47b0
	ctx.lr = 0x828A4780;
	sub_828A47B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4794;
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

__attribute__((alias("__imp__sub_828A47B0"))) PPC_WEAK_FUNC(sub_828A47B0);
PPC_FUNC_IMPL(__imp__sub_828A47B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17520
	ctx.r31.s64 = ctx.r11.s64 + 17520;
	// lwz r11,17516(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17516);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a47f8
	if (!ctx.cr0.eq) goto loc_828A47F8;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29716
	ctx.r9.s64 = ctx.r9.s64 + -29716;
	// stw r11,17516(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17516, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16680
	ctx.r3.s64 = ctx.r11.s64 + -16680;
	// bl 0x82a4c758
	ctx.lr = 0x828A47F8;
	sub_82A4C758(ctx, base);
loc_828A47F8:
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

__attribute__((alias("__imp__sub_828A4810"))) PPC_WEAK_FUNC(sub_828A4810);
PPC_FUNC_IMPL(__imp__sub_828A4810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4850
	if (!ctx.cr0.eq) goto loc_828A4850;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26080(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26080, ctx.r11.u32);
	// addi r3,r9,-30192
	ctx.r3.s64 = ctx.r9.s64 + -30192;
	// bl 0x82816528
	ctx.lr = 0x828A4848;
	sub_82816528(ctx, base);
	// stw r3,-26084(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26084, ctx.r3.u32);
	// b 0x828a4854
	goto loc_828A4854;
loc_828A4850:
	// lwz r3,-26084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26084);
loc_828A4854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4868"))) PPC_WEAK_FUNC(sub_828A4868);
PPC_FUNC_IMPL(__imp__sub_828A4868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a48b8
	ctx.lr = 0x828A4888;
	sub_828A48B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A489C;
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

__attribute__((alias("__imp__sub_828A48B8"))) PPC_WEAK_FUNC(sub_828A48B8);
PPC_FUNC_IMPL(__imp__sub_828A48B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17504
	ctx.r31.s64 = ctx.r11.s64 + 17504;
	// lwz r11,17500(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17500);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4900
	if (!ctx.cr0.eq) goto loc_828A4900;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29616
	ctx.r9.s64 = ctx.r9.s64 + -29616;
	// stw r11,17500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17500, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16704
	ctx.r3.s64 = ctx.r11.s64 + -16704;
	// bl 0x82a4c758
	ctx.lr = 0x828A4900;
	sub_82A4C758(ctx, base);
loc_828A4900:
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

__attribute__((alias("__imp__sub_828A4918"))) PPC_WEAK_FUNC(sub_828A4918);
PPC_FUNC_IMPL(__imp__sub_828A4918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26088);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4958
	if (!ctx.cr0.eq) goto loc_828A4958;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26088(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26088, ctx.r11.u32);
	// addi r3,r9,-30152
	ctx.r3.s64 = ctx.r9.s64 + -30152;
	// bl 0x82816528
	ctx.lr = 0x828A4950;
	sub_82816528(ctx, base);
	// stw r3,-26092(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26092, ctx.r3.u32);
	// b 0x828a495c
	goto loc_828A495C;
loc_828A4958:
	// lwz r3,-26092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26092);
loc_828A495C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4970"))) PPC_WEAK_FUNC(sub_828A4970);
PPC_FUNC_IMPL(__imp__sub_828A4970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a49c0
	ctx.lr = 0x828A4990;
	sub_828A49C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A49A4;
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

__attribute__((alias("__imp__sub_828A49C0"))) PPC_WEAK_FUNC(sub_828A49C0);
PPC_FUNC_IMPL(__imp__sub_828A49C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17512
	ctx.r31.s64 = ctx.r11.s64 + 17512;
	// lwz r11,17508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17508);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4a08
	if (!ctx.cr0.eq) goto loc_828A4A08;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29512
	ctx.r9.s64 = ctx.r9.s64 + -29512;
	// stw r11,17508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17508, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16728
	ctx.r3.s64 = ctx.r11.s64 + -16728;
	// bl 0x82a4c758
	ctx.lr = 0x828A4A08;
	sub_82A4C758(ctx, base);
loc_828A4A08:
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

__attribute__((alias("__imp__sub_828A4A20"))) PPC_WEAK_FUNC(sub_828A4A20);
PPC_FUNC_IMPL(__imp__sub_828A4A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828a4a5c
	if (ctx.cr6.eq) goto loc_828A4A5C;
	// bl 0x8239d0b0
	ctx.lr = 0x828A4A40;
	sub_8239D0B0(ctx, base);
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
	ctx.lr = 0x828A4A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a4a60
	goto loc_828A4A60;
loc_828A4A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A4A60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4A78"))) PPC_WEAK_FUNC(sub_828A4A78);
PPC_FUNC_IMPL(__imp__sub_828A4A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A4A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r28,-6056(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82833108
	ctx.lr = 0x828A4A98;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a4ab0
	if (ctx.cr0.eq) goto loc_828A4AB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a4c30
	ctx.lr = 0x828A4AA8;
	sub_828A4C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x828a4ab4
	goto loc_828A4AB4;
loc_828A4AB0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A4AB4:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a4b84
	if (ctx.cr6.eq) goto loc_828A4B84;
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
	// beq cr6,0x828a4b84
	if (ctx.cr6.eq) goto loc_828A4B84;
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
	ctx.lr = 0x828A4B14;
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
	ctx.lr = 0x828A4B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x828a4b84
	if (!ctx.cr6.eq) goto loc_828A4B84;
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
	ctx.lr = 0x828A4B58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a4b78
	if (ctx.cr6.eq) goto loc_828A4B78;
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
loc_828A4B78:
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a4c24
	goto loc_828A4C24;
loc_828A4B84:
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
	ctx.lr = 0x828A4BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x828A4BA8;
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
	ctx.lr = 0x828A4BE0;
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
	ctx.lr = 0x828A4C04;
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
	ctx.lr = 0x828A4C24;
	sub_829E3C18(ctx, base);
loc_828A4C24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4C30"))) PPC_WEAK_FUNC(sub_828A4C30);
PPC_FUNC_IMPL(__imp__sub_828A4C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,14108
	ctx.r11.s64 = ctx.r11.s64 + 14108;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// addi r30,r31,68
	ctx.r30.s64 = ctx.r31.s64 + 68;
	// bl 0x823e9df8
	ctx.lr = 0x828A4C78;
	sub_823E9DF8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// addi r10,r10,27600
	ctx.r10.s64 = ctx.r10.s64 + 27600;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x823d5640
	ctx.lr = 0x828A4CB0;
	sub_823D5640(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-29952
	ctx.r11.s64 = ctx.r11.s64 + -29952;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r11,-29768
	ctx.r8.s64 = ctx.r11.s64 + -29768;
	// addi r9,r9,13144
	ctx.r9.s64 = ctx.r9.s64 + 13144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4D20"))) PPC_WEAK_FUNC(sub_828A4D20);
PPC_FUNC_IMPL(__imp__sub_828A4D20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a0fb0
	sub_828A0FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4D28"))) PPC_WEAK_FUNC(sub_828A4D28);
PPC_FUNC_IMPL(__imp__sub_828A4D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17492
	ctx.r31.s64 = ctx.r11.s64 + 17492;
	// lwz r11,17496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17496);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a4d70
	if (!ctx.cr0.eq) goto loc_828A4D70;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-29460
	ctx.r9.s64 = ctx.r9.s64 + -29460;
	// stw r11,17496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17496, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16656
	ctx.r3.s64 = ctx.r11.s64 + -16656;
	// bl 0x82a4c758
	ctx.lr = 0x828A4D70;
	sub_82A4C758(ctx, base);
loc_828A4D70:
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

__attribute__((alias("__imp__sub_828A4D88"))) PPC_WEAK_FUNC(sub_828A4D88);
PPC_FUNC_IMPL(__imp__sub_828A4D88) {
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
	// bl 0x82333900
	ctx.lr = 0x828A4D9C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a4dc0
	if (ctx.cr0.eq) goto loc_828A4DC0;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29492
	ctx.r10.s64 = ctx.r10.s64 + -29492;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// b 0x828a4dc4
	goto loc_828A4DC4;
loc_828A4DC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A4DC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4DD8"))) PPC_WEAK_FUNC(sub_828A4DD8);
PPC_FUNC_IMPL(__imp__sub_828A4DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a4e10
	if (ctx.cr6.eq) goto loc_828A4E10;
	// bl 0x828a4d28
	ctx.lr = 0x828A4E00;
	sub_828A4D28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a4e10
	if (!ctx.cr6.eq) goto loc_828A4E10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a4e1c
	goto loc_828A4E1C;
loc_828A4E10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82339ee8
	ctx.lr = 0x828A4E1C;
	sub_82339EE8(ctx, base);
loc_828A4E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4E38"))) PPC_WEAK_FUNC(sub_828A4E38);
PPC_FUNC_IMPL(__imp__sub_828A4E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a4d28
	ctx.lr = 0x828A4E58;
	sub_828A4D28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a4e6c
	if (ctx.cr6.eq) goto loc_828A4E6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x828A4E6C;
	sub_82339D80(ctx, base);
loc_828A4E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4E88"))) PPC_WEAK_FUNC(sub_828A4E88);
PPC_FUNC_IMPL(__imp__sub_828A4E88) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A4EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_828A4EC8"))) PPC_WEAK_FUNC(sub_828A4EC8);
PPC_FUNC_IMPL(__imp__sub_828A4EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r3,17524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828a4f10
	if (!ctx.cr6.eq) goto loc_828A4F10;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-25192
	ctx.r3.s64 = ctx.r10.s64 + -25192;
	// bl 0x82a4c7d8
	ctx.lr = 0x828A4EFC;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x828A4F04;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x828A4F0C;
	sub_82816528(ctx, base);
	// stw r3,17524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17524, ctx.r3.u32);
loc_828A4F10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4F28"))) PPC_WEAK_FUNC(sub_828A4F28);
PPC_FUNC_IMPL(__imp__sub_828A4F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,6972
	ctx.r3.s64 = ctx.r11.s64 + 6972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4F38"))) PPC_WEAK_FUNC(sub_828A4F38);
PPC_FUNC_IMPL(__imp__sub_828A4F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a4f70
	if (ctx.cr6.eq) goto loc_828A4F70;
	// bl 0x824101a8
	ctx.lr = 0x828A4F60;
	sub_824101A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a4f70
	if (!ctx.cr6.eq) goto loc_828A4F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a4f7c
	goto loc_828A4F7C;
loc_828A4F70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236fb58
	ctx.lr = 0x828A4F7C;
	sub_8236FB58(ctx, base);
loc_828A4F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4F98"))) PPC_WEAK_FUNC(sub_828A4F98);
PPC_FUNC_IMPL(__imp__sub_828A4F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x824101a8
	sub_824101A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A4FA0"))) PPC_WEAK_FUNC(sub_828A4FA0);
PPC_FUNC_IMPL(__imp__sub_828A4FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828A4FBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a4fd0
	if (ctx.cr0.eq) goto loc_828A4FD0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828a5038
	ctx.lr = 0x828A4FCC;
	sub_828A5038(ctx, base);
	// b 0x828a4fd4
	goto loc_828A4FD4;
loc_828A4FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A4FD4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A4FE8"))) PPC_WEAK_FUNC(sub_828A4FE8);
PPC_FUNC_IMPL(__imp__sub_828A4FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x824101a8
	ctx.lr = 0x828A5008;
	sub_824101A8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a501c
	if (ctx.cr6.eq) goto loc_828A501C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x828A501C;
	sub_8236FC08(ctx, base);
loc_828A501C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5038"))) PPC_WEAK_FUNC(sub_828A5038);
PPC_FUNC_IMPL(__imp__sub_828A5038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8236fc68
	ctx.lr = 0x828A5058;
	sub_8236FC68(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// addi r10,r10,-28344
	ctx.r10.s64 = ctx.r10.s64 + -28344;
	// addi r9,r9,-28292
	ctx.r9.s64 = ctx.r9.s64 + -28292;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,1476
	ctx.r4.s64 = ctx.r30.s64 + 1476;
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x828A5090;
	sub_82873B58(ctx, base);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// addi r4,r30,1500
	ctx.r4.s64 = ctx.r30.s64 + 1500;
	// bl 0x82873b58
	ctx.lr = 0x828A509C;
	sub_82873B58(ctx, base);
	// addi r3,r31,1528
	ctx.r3.s64 = ctx.r31.s64 + 1528;
	// addi r4,r30,1528
	ctx.r4.s64 = ctx.r30.s64 + 1528;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828A50AC;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// addi r4,r30,1560
	ctx.r4.s64 = ctx.r30.s64 + 1560;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828A50BC;
	sub_82A4EA80(ctx, base);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A50F8"))) PPC_WEAK_FUNC(sub_828A50F8);
PPC_FUNC_IMPL(__imp__sub_828A50F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a61c0
	ctx.lr = 0x828A5118;
	sub_828A61C0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a5128
	if (ctx.cr0.eq) goto loc_828A5128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828A5128;
	sub_82332DB8(ctx, base);
loc_828A5128:
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

__attribute__((alias("__imp__sub_828A5148"))) PPC_WEAK_FUNC(sub_828A5148);
PPC_FUNC_IMPL(__imp__sub_828A5148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-2432
	ctx.r3.s64 = ctx.r11.s64 + -2432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5158"))) PPC_WEAK_FUNC(sub_828A5158);
PPC_FUNC_IMPL(__imp__sub_828A5158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a5190
	if (ctx.cr6.eq) goto loc_828A5190;
	// bl 0x82872b80
	ctx.lr = 0x828A5180;
	sub_82872B80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a5190
	if (!ctx.cr6.eq) goto loc_828A5190;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a519c
	goto loc_828A519C;
loc_828A5190:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236fb58
	ctx.lr = 0x828A519C;
	sub_8236FB58(ctx, base);
loc_828A519C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A51B8"))) PPC_WEAK_FUNC(sub_828A51B8);
PPC_FUNC_IMPL(__imp__sub_828A51B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82872b80
	sub_82872B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A51C0"))) PPC_WEAK_FUNC(sub_828A51C0);
PPC_FUNC_IMPL(__imp__sub_828A51C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828A51E0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a522c
	if (ctx.cr0.eq) goto loc_828A522C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fc68
	ctx.lr = 0x828A51F4;
	sub_8236FC68(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// addi r10,r10,-27216
	ctx.r10.s64 = ctx.r10.s64 + -27216;
	// addi r9,r9,-27164
	ctx.r9.s64 = ctx.r9.s64 + -27164;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1472
	ctx.r4.s64 = ctx.r30.s64 + 1472;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x82873b58
	ctx.lr = 0x828A5224;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828a5230
	goto loc_828A5230;
loc_828A522C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A5230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5248"))) PPC_WEAK_FUNC(sub_828A5248);
PPC_FUNC_IMPL(__imp__sub_828A5248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82872b80
	ctx.lr = 0x828A5268;
	sub_82872B80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a527c
	if (ctx.cr6.eq) goto loc_828A527C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x828A527C;
	sub_8236FC08(ctx, base);
loc_828A527C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5298"))) PPC_WEAK_FUNC(sub_828A5298);
PPC_FUNC_IMPL(__imp__sub_828A5298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a8050
	ctx.lr = 0x828A52B8;
	sub_828A8050(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a52c8
	if (ctx.cr0.eq) goto loc_828A52C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828A52C8;
	sub_82332DB8(ctx, base);
loc_828A52C8:
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

__attribute__((alias("__imp__sub_828A52E8"))) PPC_WEAK_FUNC(sub_828A52E8);
PPC_FUNC_IMPL(__imp__sub_828A52E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r3,r11,-2400
	ctx.r3.s64 = ctx.r11.s64 + -2400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A52F8"))) PPC_WEAK_FUNC(sub_828A52F8);
PPC_FUNC_IMPL(__imp__sub_828A52F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a5330
	if (ctx.cr6.eq) goto loc_828A5330;
	// bl 0x82872cc0
	ctx.lr = 0x828A5320;
	sub_82872CC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a5330
	if (!ctx.cr6.eq) goto loc_828A5330;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a533c
	goto loc_828A533C;
loc_828A5330:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236fb58
	ctx.lr = 0x828A533C;
	sub_8236FB58(ctx, base);
loc_828A533C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5358"))) PPC_WEAK_FUNC(sub_828A5358);
PPC_FUNC_IMPL(__imp__sub_828A5358) {
	PPC_FUNC_PROLOGUE();
	// b 0x82872cc0
	sub_82872CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A5360"))) PPC_WEAK_FUNC(sub_828A5360);
PPC_FUNC_IMPL(__imp__sub_828A5360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x828A5380;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a53d4
	if (ctx.cr0.eq) goto loc_828A53D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fc68
	ctx.lr = 0x828A5394;
	sub_8236FC68(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,-27136
	ctx.r11.s64 = ctx.r11.s64 + -27136;
	// addi r10,r10,-26088
	ctx.r10.s64 = ctx.r10.s64 + -26088;
	// addi r9,r9,-26036
	ctx.r9.s64 = ctx.r9.s64 + -26036;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1472
	ctx.r4.s64 = ctx.r30.s64 + 1472;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x82873b58
	ctx.lr = 0x828A53C4;
	sub_82873B58(ctx, base);
	// lwz r11,1496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// b 0x828a53d8
	goto loc_828A53D8;
loc_828A53D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A53D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A53F0"))) PPC_WEAK_FUNC(sub_828A53F0);
PPC_FUNC_IMPL(__imp__sub_828A53F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82872cc0
	ctx.lr = 0x828A5410;
	sub_82872CC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a5424
	if (ctx.cr6.eq) goto loc_828A5424;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8236fc08
	ctx.lr = 0x828A5424;
	sub_8236FC08(ctx, base);
loc_828A5424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5440"))) PPC_WEAK_FUNC(sub_828A5440);
PPC_FUNC_IMPL(__imp__sub_828A5440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a8290
	ctx.lr = 0x828A5460;
	sub_828A8290(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a5470
	if (ctx.cr0.eq) goto loc_828A5470;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828A5470;
	sub_82332DB8(ctx, base);
loc_828A5470:
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

__attribute__((alias("__imp__sub_828A5490"))) PPC_WEAK_FUNC(sub_828A5490);
PPC_FUNC_IMPL(__imp__sub_828A5490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-29440
	ctx.r3.s64 = ctx.r11.s64 + -29440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A54A0"))) PPC_WEAK_FUNC(sub_828A54A0);
PPC_FUNC_IMPL(__imp__sub_828A54A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x828a54d8
	if (ctx.cr6.eq) goto loc_828A54D8;
	// bl 0x828a8718
	ctx.lr = 0x828A54C8;
	sub_828A8718(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828a54d8
	if (!ctx.cr6.eq) goto loc_828A54D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a54e4
	goto loc_828A54E4;
loc_828A54D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x828A54E4;
	sub_82333C70(ctx, base);
loc_828A54E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5500"))) PPC_WEAK_FUNC(sub_828A5500);
PPC_FUNC_IMPL(__imp__sub_828A5500) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a8718
	sub_828A8718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A5508"))) PPC_WEAK_FUNC(sub_828A5508);
PPC_FUNC_IMPL(__imp__sub_828A5508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828A5524;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a558c
	if (ctx.cr0.eq) goto loc_828A558C;
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
	// addi r9,r9,-26008
	ctx.r9.s64 = ctx.r9.s64 + -26008;
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
	// b 0x828a5590
	goto loc_828A5590;
loc_828A558C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A5590:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A55A8"))) PPC_WEAK_FUNC(sub_828A55A8);
PPC_FUNC_IMPL(__imp__sub_828A55A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a8718
	ctx.lr = 0x828A55C8;
	sub_828A8718(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828a55dc
	if (ctx.cr6.eq) goto loc_828A55DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x828A55DC;
	sub_82333B08(ctx, base);
loc_828A55DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A55F8"))) PPC_WEAK_FUNC(sub_828A55F8);
PPC_FUNC_IMPL(__imp__sub_828A55F8) {
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
	// addi r11,r11,-15308
	ctx.r11.s64 = ctx.r11.s64 + -15308;
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
	// ble cr6,0x828a5664
	if (!ctx.cr6.gt) goto loc_828A5664;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A5634:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a5654
	if (ctx.cr6.eq) goto loc_828A5654;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a5634
	if (ctx.cr6.lt) goto loc_828A5634;
	// b 0x828a5664
	goto loc_828A5664;
loc_828A5654:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_828A5664:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a568c
	if (ctx.cr6.eq) goto loc_828A568C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828A5684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a5690
	goto loc_828A5690;
loc_828A568C:
	// bl 0x829bc030
	ctx.lr = 0x828A5690;
	sub_829BC030(ctx, base);
loc_828A5690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A56A0"))) PPC_WEAK_FUNC(sub_828A56A0);
PPC_FUNC_IMPL(__imp__sub_828A56A0) {
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
	// addi r11,r11,-15308
	ctx.r11.s64 = ctx.r11.s64 + -15308;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a5700
	if (!ctx.cr6.gt) goto loc_828A5700;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A56CC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a56ec
	if (ctx.cr6.eq) goto loc_828A56EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a56cc
	if (ctx.cr6.lt) goto loc_828A56CC;
	// b 0x828a5700
	goto loc_828A5700;
loc_828A56EC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a5708
	if (!ctx.cr6.eq) goto loc_828A5708;
loc_828A5700:
	// bl 0x829bc0e0
	ctx.lr = 0x828A5704;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_828A5708:
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

__attribute__((alias("__imp__sub_828A5720"))) PPC_WEAK_FUNC(sub_828A5720);
PPC_FUNC_IMPL(__imp__sub_828A5720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-15308
	ctx.r11.s64 = ctx.r11.s64 + -15308;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a57a0
	if (!ctx.cr6.gt) goto loc_828A57A0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A575C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828a577c
	if (ctx.cr6.eq) goto loc_828A577C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a575c
	if (ctx.cr6.lt) goto loc_828A575C;
	// b 0x828a57a0
	goto loc_828A57A0;
loc_828A577C:
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
	ctx.lr = 0x828A5798;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828a57ac
	if (!ctx.cr0.eq) goto loc_828A57AC;
loc_828A57A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x828A57AC;
	sub_829BC140(ctx, base);
loc_828A57AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A57C8"))) PPC_WEAK_FUNC(sub_828A57C8);
PPC_FUNC_IMPL(__imp__sub_828A57C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	ctx.lr = 0x828A57E0;
	sub_829BC540(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
	// addi r10,r10,15032
	ctx.r10.s64 = ctx.r10.s64 + 15032;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1420
	ctx.r11.s64 = ctx.r31.s64 + 1420;
	// stw r8,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x828A581C;
	sub_8312E7DC(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r10,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5860"))) PPC_WEAK_FUNC(sub_828A5860);
PPC_FUNC_IMPL(__imp__sub_828A5860) {
	PPC_FUNC_PROLOGUE();
	// b 0x829bd978
	sub_829BD978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A5868"))) PPC_WEAK_FUNC(sub_828A5868);
PPC_FUNC_IMPL(__imp__sub_828A5868) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// addi r5,r31,656
	ctx.r5.s64 = ctx.r31.s64 + 656;
	// addi r4,r31,684
	ctx.r4.s64 = ctx.r31.s64 + 684;
	// bl 0x826c1e08
	ctx.lr = 0x828A589C;
	sub_826C1E08(ctx, base);
	// addi r30,r31,496
	ctx.r30.s64 = ctx.r31.s64 + 496;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828A58B0;
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
loc_828A58C4:
	// mulli r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 * 24;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,244(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x828a58ec
	if (ctx.cr6.gt) goto loc_828A58EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// blt cr6,0x828a58c4
	if (ctx.cr6.lt) goto loc_828A58C4;
loc_828A58EC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x828a5940
	if (!ctx.cr6.lt) goto loc_828A5940;
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
	// beq cr6,0x828a592c
	if (ctx.cr6.eq) goto loc_828A592C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A592C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A592C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e7850
	ctx.lr = 0x828A5938;
	sub_827E7850(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x828a58ec
	goto loc_828A58EC;
loc_828A5940:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829be2e8
	ctx.lr = 0x828A594C;
	sub_829BE2E8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_828A5968"))) PPC_WEAK_FUNC(sub_828A5968);
PPC_FUNC_IMPL(__imp__sub_828A5968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828a59a0
	if (ctx.cr0.eq) goto loc_828A59A0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x828a59cc
	goto loc_828A59CC;
loc_828A59A0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828a59b4
	if (ctx.cr0.eq) goto loc_828A59B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x828a59cc
	goto loc_828A59CC;
loc_828A59B4:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a5a00
	if (ctx.cr0.eq) goto loc_828A5A00;
	// lwz r10,1472(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_828A59CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828a59ec
	if (ctx.cr6.eq) goto loc_828A59EC;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x828a5a00
	if (!ctx.cr6.eq) goto loc_828A5A00;
loc_828A59EC:
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a5a00
	if (ctx.cr6.eq) goto loc_828A5A00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82914b18
	ctx.lr = 0x828A5A00;
	sub_82914B18(ctx, base);
loc_828A5A00:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a5a28
	ctx.lr = 0x828A5A0C;
	sub_828A5A28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5A28"))) PPC_WEAK_FUNC(sub_828A5A28);
PPC_FUNC_IMPL(__imp__sub_828A5A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A5A4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x828a5a68
	if (ctx.cr6.eq) goto loc_828A5A68;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x828a5a7c
	if (!ctx.cr6.eq) goto loc_828A5A7C;
loc_828A5A68:
	// lwz r3,832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a5a7c
	if (ctx.cr6.eq) goto loc_828A5A7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82914b18
	ctx.lr = 0x828A5A7C;
	sub_82914B18(ctx, base);
loc_828A5A7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5A90"))) PPC_WEAK_FUNC(sub_828A5A90);
PPC_FUNC_IMPL(__imp__sub_828A5A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r4.u64);
	// lfs f13,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// std r5,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r5.u64);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,1456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// lfs f11,368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f13,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// beq cr6,0x828a5af8
	if (ctx.cr6.eq) goto loc_828A5AF8;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_828A5AF8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x828a5ba0
	if (!ctx.cr6.lt) goto loc_828A5BA0;
	// lwz r3,1456(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// rldicr r6,r7,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828A5B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_828A5BA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5BB0"))) PPC_WEAK_FUNC(sub_828A5BB0);
PPC_FUNC_IMPL(__imp__sub_828A5BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A5BB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x828A5BCC;
	sub_829BCBF0(ctx, base);
	// lfs f0,912(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,916(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 916);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// lfs f0,920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// lwz r11,136(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lwz r11,140(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a5e24
	if (ctx.cr6.eq) goto loc_828A5E24;
	// li r3,448
	ctx.r3.s64 = 448;
	// bl 0x82833108
	ctx.lr = 0x828A5C1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a5c30
	if (ctx.cr0.eq) goto loc_828A5C30;
	// bl 0x8294e0b8
	ctx.lr = 0x828A5C28;
	sub_8294E0B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x828a5c34
	goto loc_828A5C34;
loc_828A5C30:
	// li r29,0
	ctx.r29.s64 = 0;
loc_828A5C34:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,140(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// bl 0x82846fb0
	ctx.lr = 0x828A5C40;
	sub_82846FB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r29,368
	ctx.r28.s64 = ctx.r29.s64 + 368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828A5C94;
	sub_82A4EA80(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,656
	ctx.r4.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8258d438
	ctx.lr = 0x828A5CA4;
	sub_8258D438(ctx, base);
	// lfs f0,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f0,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vmrglw v9,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vmrghw v10,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r10,r10,17456
	ctx.r10.s64 = ctx.r10.s64 + 17456;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v6,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum4fp128 v9,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v4,v0,v6
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v8,v0,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v5,v0,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v3,v7,v6
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v2,v13,v6
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v6,v0,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v1,v0,v10
	simde_mm_store_ps(ctx.v1.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v31,v0,v12
	simde_mm_store_ps(ctx.v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v0,v0,v11
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v30,v13,v10
	simde_mm_store_ps(ctx.v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum4fp128 v5,v13,v12
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v13,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v0,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vmsum4fp128 v10,v7,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v6,v1,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmsum4fp128 v12,v7,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vmsum4fp128 v11,v7,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// vmrghw v8,v8,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// vmrghw v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v0,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v30.u32)));
	// stvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v10,v10,v3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827f0528
	ctx.lr = 0x828A5DEC;
	sub_827F0528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828A5DFC;
	sub_82A4EA80(ctx, base);
	// stw r26,440(r29)
	PPC_STORE_U32(ctx.r29.u32 + 440, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82950da0
	ctx.lr = 0x828A5E08;
	sub_82950DA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r29.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A5E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A5E24:
	// lwz r11,148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lwz r11,152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 152);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A5E40"))) PPC_WEAK_FUNC(sub_828A5E40);
PPC_FUNC_IMPL(__imp__sub_828A5E40) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A5E60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5E80"))) PPC_WEAK_FUNC(sub_828A5E80);
PPC_FUNC_IMPL(__imp__sub_828A5E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a5bb0
	ctx.lr = 0x828A5EA0;
	sub_828A5BB0(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5EC0"))) PPC_WEAK_FUNC(sub_828A5EC0);
PPC_FUNC_IMPL(__imp__sub_828A5EC0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x828a5ee4
	if (ctx.cr6.eq) goto loc_828A5EE4;
	// andi. r11,r6,191
	ctx.r11.u64 = ctx.r6.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a5ee4
	if (ctx.cr0.eq) goto loc_828A5EE4;
	// lwz r11,836(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_828A5EE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A5EF0"))) PPC_WEAK_FUNC(sub_828A5EF0);
PPC_FUNC_IMPL(__imp__sub_828A5EF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a5bb0
	sub_828A5BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A5EF8"))) PPC_WEAK_FUNC(sub_828A5EF8);
PPC_FUNC_IMPL(__imp__sub_828A5EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x828A5F00;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828a5bb0
	ctx.lr = 0x828A5F14;
	sub_828A5BB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stw r11,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// stw r11,1596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1596, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// stw r11,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x828A5F38;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x828A5F4C;
	sub_82846E98(ctx, base);
	// lwz r29,156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r27,-31946
	ctx.r27.s64 = -2093613056;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// add r28,r11,r23
	ctx.r28.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828a5fa8
	if (ctx.cr6.eq) goto loc_828A5FA8;
	// addi r25,r30,1476
	ctx.r25.s64 = ctx.r30.s64 + 1476;
loc_828A5F70:
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x824f98d8
	ctx.lr = 0x828A5F7C;
	sub_824F98D8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x828A5F90;
	sub_82410060(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,-1476(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1476);
	// bl 0x828a6578
	ctx.lr = 0x828A5F9C;
	sub_828A6578(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x828a5f70
	if (!ctx.cr0.eq) goto loc_828A5F70;
loc_828A5FA8:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r31,164(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a5ff8
	if (ctx.cr6.eq) goto loc_828A5FF8;
	// addi r26,r30,1500
	ctx.r26.s64 = ctx.r30.s64 + 1500;
loc_828A5FC0:
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x824f98d8
	ctx.lr = 0x828A5FCC;
	sub_824F98D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410060
	ctx.lr = 0x828A5FE0;
	sub_82410060(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-1476(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1476);
	// bl 0x828a6578
	ctx.lr = 0x828A5FEC;
	sub_828A6578(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x828a5fc0
	if (!ctx.cr0.eq) goto loc_828A5FC0;
loc_828A5FF8:
	// lwz r3,-1476(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1476);
	// bl 0x8312e74c
	ctx.lr = 0x828A6000;
	sub_8312E74C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828a6018
	ctx.lr = 0x828A6008;
	sub_828A6018(ctx, base);
	// lwz r3,-1476(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -1476);
	// bl 0x8312e73c
	ctx.lr = 0x828A6010;
	sub_8312E73C(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6018"))) PPC_WEAK_FUNC(sub_828A6018);
PPC_FUNC_IMPL(__imp__sub_828A6018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828A6020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// addi r30,r29,1528
	ctx.r30.s64 = ctx.r29.s64 + 1528;
	// addi r28,r29,1560
	ctx.r28.s64 = ctx.r29.s64 + 1560;
	// std r31,1528(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1528, ctx.r31.u64);
	// std r31,1536(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1536, ctx.r31.u64);
	// std r31,1544(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1544, ctx.r31.u64);
	// std r31,1552(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1552, ctx.r31.u64);
	// std r31,1560(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1560, ctx.r31.u64);
	// std r31,1568(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1568, ctx.r31.u64);
	// std r31,1576(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1576, ctx.r31.u64);
	// std r31,1584(r29)
	PPC_STORE_U64(ctx.r29.u32 + 1584, ctx.r31.u64);
	// lwz r26,-1476(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1476);
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a60b8
	if (ctx.cr6.eq) goto loc_828A60B8;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_828A6070:
	// lwz r11,1488(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1488);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x828a64e0
	ctx.lr = 0x828A6080;
	sub_828A64E0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_828A608C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x828a608c
	if (!ctx.cr0.eq) goto loc_828A608C;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x828a6070
	if (!ctx.cr0.eq) goto loc_828A6070;
loc_828A60B8:
	// lwz r11,1516(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a6110
	if (ctx.cr6.eq) goto loc_828A6110;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_828A60C8:
	// lwz r11,1512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1512);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x828a64e0
	ctx.lr = 0x828A60D8;
	sub_828A64E0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
	// li r10,4
	ctx.r10.s64 = 4;
loc_828A60E4:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x828a60e4
	if (!ctx.cr0.eq) goto loc_828A60E4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x828a60c8
	if (!ctx.cr0.eq) goto loc_828A60C8;
loc_828A6110:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6118"))) PPC_WEAK_FUNC(sub_828A6118);
PPC_FUNC_IMPL(__imp__sub_828A6118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x828a57c8
	ctx.lr = 0x828A6130;
	sub_828A57C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,-29392
	ctx.r11.s64 = ctx.r11.s64 + -29392;
	// addi r8,r9,-28292
	ctx.r8.s64 = ctx.r9.s64 + -28292;
	// addi r10,r10,-28344
	ctx.r10.s64 = ctx.r10.s64 + -28344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r9,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r9.u32);
	// stw r11,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r11.u32);
	// stw r11,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r11.u32);
	// stw r11,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r11.u32);
	// stw r11,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r11.u32);
	// stw r11,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r10,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r10.u32);
	// stw r8,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A61C0"))) PPC_WEAK_FUNC(sub_828A61C0);
PPC_FUNC_IMPL(__imp__sub_828A61C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r10,r10,-29392
	ctx.r10.s64 = ctx.r10.s64 + -29392;
	// addi r9,r9,-28344
	ctx.r9.s64 = ctx.r9.s64 + -28344;
	// addi r8,r8,-28292
	ctx.r8.s64 = ctx.r8.s64 + -28292;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// lwz r3,836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 836);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a6220
	if (ctx.cr6.eq) goto loc_828A6220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A6220:
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x8239d768
	ctx.lr = 0x828A6228;
	sub_8239D768(ctx, base);
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// bl 0x8239d768
	ctx.lr = 0x828A6230;
	sub_8239D768(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,15032
	ctx.r10.s64 = ctx.r10.s64 + 15032;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// addi r11,r8,-29556
	ctx.r11.s64 = ctx.r8.s64 + -29556;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828A6268;
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

__attribute__((alias("__imp__sub_828A6280"))) PPC_WEAK_FUNC(sub_828A6280);
PPC_FUNC_IMPL(__imp__sub_828A6280) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a5868
	sub_828A5868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6288"))) PPC_WEAK_FUNC(sub_828A6288);
PPC_FUNC_IMPL(__imp__sub_828A6288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8312e7dc
	ctx.lr = 0x828A62A4;
	sub_8312E7DC(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// sth r30,40(r31)
	PPC_STORE_U16(ctx.r31.u32 + 40, ctx.r30.u16);
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// sth r10,42(r31)
	PPC_STORE_U16(ctx.r31.u32 + 42, ctx.r10.u16);
	// ori r3,r3,45056
	ctx.r3.u64 = ctx.r3.u64 | 45056;
	// sth r9,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r9.u16);
	// bl 0x82a4fb98
	ctx.lr = 0x828A62D8;
	sub_82A4FB98(ctx, base);
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq 0x828a63a4
	if (ctx.cr0.eq) goto loc_828A63A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828A62F8:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x828a6390
	if (ctx.cr0.eq) goto loc_828A6390;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_828A6354:
	// stw r30,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r30.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r30,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r30.u32);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// std r30,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r30.u64);
	// std r30,40(r10)
	PPC_STORE_U64(ctx.r10.u32 + 40, ctx.r30.u64);
	// std r30,48(r10)
	PPC_STORE_U64(ctx.r10.u32 + 48, ctx.r30.u64);
	// std r30,56(r10)
	PPC_STORE_U64(ctx.r10.u32 + 56, ctx.r30.u64);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828a6354
	if (ctx.cr6.lt) goto loc_828A6354;
loc_828A6390:
	// lhz r10,42(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x828a62f8
	if (ctx.cr6.lt) goto loc_828A62F8;
loc_828A63A4:
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

__attribute__((alias("__imp__sub_828A63C0"))) PPC_WEAK_FUNC(sub_828A63C0);
PPC_FUNC_IMPL(__imp__sub_828A63C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x828A63C8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a6484
	if (ctx.cr0.eq) goto loc_828A6484;
	// li r25,0
	ctx.r25.s64 = 0;
loc_828A63E4:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828a6470
	if (ctx.cr6.eq) goto loc_828A6470;
loc_828A6404:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828a6458
	if (!ctx.cr6.gt) goto loc_828A6458;
	// addi r30,r24,72
	ctx.r30.s64 = ctx.r24.s64 + 72;
loc_828A6418:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a6438
	if (ctx.cr6.eq) goto loc_828A6438;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A6438:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a6418
	if (ctx.cr6.lt) goto loc_828A6418;
loc_828A6458:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a6468
	if (ctx.cr6.eq) goto loc_828A6468;
	// lwz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_828A6468:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x828a6404
	if (ctx.cr6.lt) goto loc_828A6404;
loc_828A6470:
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a63e4
	if (ctx.cr6.lt) goto loc_828A63E4;
loc_828A6484:
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a64d0
	if (ctx.cr0.eq) goto loc_828A64D0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_828A6498:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x828a64b4
	goto loc_828A64B4;
loc_828A64A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82a4fc60
	ctx.lr = 0x828A64B4;
	sub_82A4FC60(ctx, base);
loc_828A64B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828a64a8
	if (!ctx.cr6.eq) goto loc_828A64A8;
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a6498
	if (ctx.cr6.lt) goto loc_828A6498;
loc_828A64D0:
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// bl 0x82a4fc60
	ctx.lr = 0x828A64D8;
	sub_82A4FC60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A64E0"))) PPC_WEAK_FUNC(sub_828A64E0);
PPC_FUNC_IMPL(__imp__sub_828A64E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// srw r9,r4,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x828a6560
	if (ctx.cr6.eq) goto loc_828A6560;
loc_828A6514:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828a6548
	if (ctx.cr6.eq) goto loc_828A6548;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_828A6528:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x828a6568
	if (ctx.cr6.eq) goto loc_828A6568;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x828a6528
	if (ctx.cr6.lt) goto loc_828A6528;
loc_828A6548:
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a6558
	if (ctx.cr6.eq) goto loc_828A6558;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_828A6558:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x828a6514
	if (ctx.cr6.lt) goto loc_828A6514;
loc_828A6560:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_828A6568:
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A6578"))) PPC_WEAK_FUNC(sub_828A6578);
PPC_FUNC_IMPL(__imp__sub_828A6578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A6580;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,-1476(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1476);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312e74c
	ctx.lr = 0x828A6598;
	sub_8312E74C(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a64e0
	ctx.lr = 0x828A65A4;
	sub_828A64E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a65cc
	if (ctx.cr0.eq) goto loc_828A65CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
loc_828A65B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312e73c
	ctx.lr = 0x828A65C0;
	sub_8312E73C(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_828A65CC:
	// lhz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r26,1
	ctx.r26.s64 = 1;
	// srw r9,r28,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r27,r10,4,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// beq 0x828a661c
	if (ctx.cr0.eq) goto loc_828A661C;
	// lhz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
loc_828A6600:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x828a66c8
	if (ctx.cr6.lt) goto loc_828A66C8;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a6600
	if (!ctx.cr6.eq) goto loc_828A6600;
loc_828A661C:
	// lhz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// mulli r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 * 80;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82a4fb98
	ctx.lr = 0x828A662C;
	sub_82A4FB98(ctx, base);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// std r31,20(r3)
	PPC_STORE_U64(ctx.r3.u32 + 20, ctx.r31.u64);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// std r31,28(r3)
	PPC_STORE_U64(ctx.r3.u32 + 28, ctx.r31.u64);
	// std r31,36(r3)
	PPC_STORE_U64(ctx.r3.u32 + 36, ctx.r31.u64);
	// std r31,44(r3)
	PPC_STORE_U64(ctx.r3.u32 + 44, ctx.r31.u64);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// std r31,52(r3)
	PPC_STORE_U64(ctx.r3.u32 + 52, ctx.r31.u64);
	// std r31,60(r3)
	PPC_STORE_U64(ctx.r3.u32 + 60, ctx.r31.u64);
	// std r31,68(r3)
	PPC_STORE_U64(ctx.r3.u32 + 68, ctx.r31.u64);
	// std r31,76(r3)
	PPC_STORE_U64(ctx.r3.u32 + 76, ctx.r31.u64);
	// lhz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x828a66e8
	if (!ctx.cr6.gt) goto loc_828A66E8;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
loc_828A6688:
	// stw r31,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// std r31,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r31.u64);
	// std r31,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r31.u64);
	// std r31,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r31.u64);
	// std r31,56(r11)
	PPC_STORE_U64(ctx.r11.u32 + 56, ctx.r31.u64);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lhz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a6688
	if (ctx.cr6.lt) goto loc_828A6688;
	// b 0x828a66e8
	goto loc_828A66E8;
loc_828A66C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r28.u32);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_828A66E8:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r9,-15060
	ctx.r3.s64 = ctx.r9.s64 + -15060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// std r31,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r31.u64);
	// srawi r10,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 6;
	// std r31,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r31.u64);
	// std r31,24(r30)
	PPC_STORE_U64(ctx.r30.u32 + 24, ctx.r31.u64);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// std r31,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r31.u64);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// sld r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r26.u64 << (ctx.r9.u8 & 0x7F));
	// stdx r9,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// std r31,40(r30)
	PPC_STORE_U64(ctx.r30.u32 + 40, ctx.r31.u64);
	// std r31,48(r30)
	PPC_STORE_U64(ctx.r30.u32 + 48, ctx.r31.u64);
	// std r31,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r31.u64);
	// std r31,64(r30)
	PPC_STORE_U64(ctx.r30.u32 + 64, ctx.r31.u64);
	// bl 0x823928a0
	ctx.lr = 0x828A6760;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a6798
	if (ctx.cr0.eq) goto loc_828A6798;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a6798
	if (ctx.cr0.eq) goto loc_828A6798;
	// bl 0x82416348
	ctx.lr = 0x828A6784;
	sub_82416348(ctx, base);
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a67a0
	ctx.lr = 0x828A6798;
	sub_828A67A0(ctx, base);
loc_828A6798:
	// stw r26,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r26.u32);
	// b 0x828a65b8
	goto loc_828A65B8;
}

__attribute__((alias("__imp__sub_828A67A0"))) PPC_WEAK_FUNC(sub_828A67A0);
PPC_FUNC_IMPL(__imp__sub_828A67A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x828A67A8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r22,r11,-15060
	ctx.r22.s64 = ctx.r11.s64 + -15060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823928a0
	ctx.lr = 0x828A67D4;
	sub_823928A0(ctx, base);
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828a6924
	if (ctx.cr0.eq) goto loc_828A6924;
	// li r23,0
	ctx.r23.s64 = 0;
loc_828A67EC:
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,8(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x828a6910
	if (ctx.cr6.eq) goto loc_828A6910;
loc_828A680C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x828a68f8
	if (!ctx.cr6.gt) goto loc_828A68F8;
	// addi r31,r24,72
	ctx.r31.s64 = ctx.r24.s64 + 72;
loc_828A6820:
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x828A6834;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a6884
	if (ctx.cr0.eq) goto loc_828A6884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a6884
	if (ctx.cr0.eq) goto loc_828A6884;
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// addi r9,r31,-64
	ctx.r9.s64 = ctx.r31.s64 + -64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_828A6864:
	// ld r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x828a6864
	if (!ctx.cr0.eq) goto loc_828A6864;
loc_828A6884:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a68e0
	if (ctx.cr6.eq) goto loc_828A68E0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x828a68e0
	if (ctx.cr6.eq) goto loc_828A68E0;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A68AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a68e0
	if (ctx.cr0.eq) goto loc_828A68E0;
	// addi r11,r31,-32
	ctx.r11.s64 = ctx.r31.s64 + -32;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// li r10,4
	ctx.r10.s64 = 4;
loc_828A68C0:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x828a68c0
	if (!ctx.cr0.eq) goto loc_828A68C0;
loc_828A68E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a6820
	if (ctx.cr6.lt) goto loc_828A6820;
loc_828A68F8:
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828a6908
	if (ctx.cr6.eq) goto loc_828A6908;
	// lwz r24,4(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_828A6908:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x828a680c
	if (ctx.cr6.lt) goto loc_828A680C;
loc_828A6910:
	// lhz r11,42(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a67ec
	if (ctx.cr6.lt) goto loc_828A67EC;
loc_828A6924:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6930"))) PPC_WEAK_FUNC(sub_828A6930);
PPC_FUNC_IMPL(__imp__sub_828A6930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A6938;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,1472(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a695c
	if (!ctx.cr6.eq) goto loc_828A695C;
loc_828A6954:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828a6b6c
	goto loc_828A6B6C;
loc_828A695C:
	// lwz r11,1600(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a6994
	if (ctx.cr6.eq) goto loc_828A6994;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828a6994
	if (ctx.cr6.eq) goto loc_828A6994;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a6994
	if (ctx.cr0.eq) goto loc_828A6994;
loc_828A698C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a6b6c
	goto loc_828A6B6C;
loc_828A6994:
	// rlwinm. r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828a6954
	if (!ctx.cr0.eq) goto loc_828A6954;
	// rlwinm. r11,r31,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828a698c
	if (!ctx.cr0.eq) goto loc_828A698C;
	// rlwinm. r11,r31,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a69b8
	if (ctx.cr0.eq) goto loc_828A69B8;
	// lwz r11,1596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a698c
	if (!ctx.cr6.eq) goto loc_828A698C;
loc_828A69B8:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828a6b40
	if (ctx.cr6.eq) goto loc_828A6B40;
	// lwz r31,1348(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1348);
	// lis r30,-31946
	ctx.r30.s64 = -2093613056;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828a6a30
	if (!ctx.cr6.eq) goto loc_828A6A30;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A69E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828a6578
	ctx.lr = 0x828A69F8;
	sub_828A6578(ctx, base);
	// lwz r11,-1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a6a28
	if (ctx.cr6.eq) goto loc_828A6A28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8312e74c
	ctx.lr = 0x828A6A14;
	sub_8312E74C(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828a6018
	ctx.lr = 0x828A6A1C;
	sub_828A6018(ctx, base);
	// lwz r3,-1476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
	// bl 0x8312e73c
	ctx.lr = 0x828A6A24;
	sub_8312E73C(ctx, base);
	// lwz r11,-1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
loc_828A6A28:
	// stw r31,1348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1348, ctx.r31.u32);
	// b 0x828a6a34
	goto loc_828A6A34;
loc_828A6A30:
	// lwz r11,-1476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
loc_828A6A34:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8312e74c
	ctx.lr = 0x828A6A3C;
	sub_8312E74C(ctx, base);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// lwz r3,-1476(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1476);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// ld r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ld r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r6,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r6.u64);
	// std r5,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r5.u64);
	// std r4,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r4.u64);
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r30,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r30.u64);
	// std r31,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r31.u64);
	// bl 0x8312e73c
	ctx.lr = 0x828A6A94;
	sub_8312E73C(ctx, base);
	// lwz r11,1592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a6abc
	if (ctx.cr6.eq) goto loc_828A6ABC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a6b5c
	if (!ctx.cr0.eq) goto loc_828A6B5C;
loc_828A6ABC:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r11,r29,1560
	ctx.r11.s64 = ctx.r29.s64 + 1560;
loc_828A6ACC:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x828a6b5c
	if (!ctx.cr6.eq) goto loc_828A6B5C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x828a6acc
	if (ctx.cr6.lt) goto loc_828A6ACC;
loc_828A6AF4:
	// lwz r11,1492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a6b64
	if (ctx.cr6.eq) goto loc_828A6B64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x828a6b64
	if (ctx.cr6.eq) goto loc_828A6B64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r29,1528
	ctx.r11.s64 = ctx.r29.s64 + 1528;
loc_828A6B14:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x828a6b64
	if (!ctx.cr6.eq) goto loc_828A6B64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x828a6b14
	if (ctx.cr6.lt) goto loc_828A6B14;
	// b 0x828a6b68
	goto loc_828A6B68;
loc_828A6B40:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r8,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// b 0x828a6af4
	goto loc_828A6AF4;
loc_828A6B5C:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x828a6b68
	goto loc_828A6B68;
loc_828A6B64:
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
loc_828A6B68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_828A6B6C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6B78"))) PPC_WEAK_FUNC(sub_828A6B78);
PPC_FUNC_IMPL(__imp__sub_828A6B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A6B80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a6bf4
	if (ctx.cr6.eq) goto loc_828A6BF4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828a6bf4
	if (ctx.cr6.eq) goto loc_828A6BF4;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a6bf8
	if (!ctx.cr6.gt) goto loc_828A6BF8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A6BB4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,1488(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x828a6bdc
	if (!ctx.cr6.eq) goto loc_828A6BDC;
	// li r26,1
	ctx.r26.s64 = 1;
loc_828A6BDC:
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a6bb4
	if (ctx.cr6.lt) goto loc_828A6BB4;
	// b 0x828a6bf8
	goto loc_828A6BF8;
loc_828A6BF4:
	// li r26,1
	ctx.r26.s64 = 1;
loc_828A6BF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6C08"))) PPC_WEAK_FUNC(sub_828A6C08);
PPC_FUNC_IMPL(__imp__sub_828A6C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A6C10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828a6cc0
	if (ctx.cr6.eq) goto loc_828A6CC0;
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a6c54
	if (ctx.cr6.eq) goto loc_828A6C54;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a6c54
	if (ctx.cr0.eq) goto loc_828A6C54;
loc_828A6C4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a6cc4
	goto loc_828A6CC4;
loc_828A6C54:
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a6cc0
	if (!ctx.cr6.gt) goto loc_828A6CC0;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,-15060
	ctx.r28.s64 = ctx.r11.s64 + -15060;
loc_828A6C70:
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x828A6C88;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a6cac
	if (ctx.cr0.eq) goto loc_828A6CAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A6CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a6c4c
	if (!ctx.cr0.eq) goto loc_828A6C4C;
loc_828A6CAC:
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a6c70
	if (ctx.cr6.lt) goto loc_828A6C70;
loc_828A6CC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A6CC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6CD0"))) PPC_WEAK_FUNC(sub_828A6CD0);
PPC_FUNC_IMPL(__imp__sub_828A6CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,200(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 200);
	// stw r11,1476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1476, ctx.r11.u32);
	// lwz r11,204(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 204);
	// stw r11,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r11.u32);
	// lwz r11,208(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 208);
	// stw r11,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r11.u32);
	// lwz r11,212(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 212);
	// stw r11,1488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1488, ctx.r11.u32);
	// lfs f0,216(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1492, temp.u32);
	// lfs f0,220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1496, temp.u32);
	// lfs f0,224(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1500, temp.u32);
	// lwz r11,228(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 228);
	// stw r11,1504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1504, ctx.r11.u32);
	// lwz r11,232(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 232);
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// lfs f0,236(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
	// lfs f0,240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1516(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1516, temp.u32);
	// lfs f0,244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1520(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1520, temp.u32);
	// b 0x828a5bb0
	sub_828A5BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6D38"))) PPC_WEAK_FUNC(sub_828A6D38);
PPC_FUNC_IMPL(__imp__sub_828A6D38) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// stw r9,1712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1712, ctx.r9.u32);
	// lwz r9,204(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// stw r9,1716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1716, ctx.r9.u32);
	// lwz r10,208(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// stw r10,1720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1720, ctx.r10.u32);
	// b 0x828a6d60
	sub_828A6D60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6D60"))) PPC_WEAK_FUNC(sub_828A6D60);
PPC_FUNC_IMPL(__imp__sub_828A6D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A6D68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x828a5bb0
	ctx.lr = 0x828A6D7C;
	sub_828A5BB0(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,172
	ctx.r5.s64 = ctx.r30.s64 + 172;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// rlwinm r11,r11,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// bl 0x827f1758
	ctx.lr = 0x828A6E1C;
	sub_827F1758(ctx, base);
	// addi r5,r30,180
	ctx.r5.s64 = ctx.r30.s64 + 180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// bl 0x827f1758
	ctx.lr = 0x828A6E2C;
	sub_827F1758(ctx, base);
	// lwz r11,1516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r29,r31,1576
	ctx.r29.s64 = ctx.r31.s64 + 1576;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x828a6e54
	if (!ctx.cr6.gt) goto loc_828A6E54;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A6E54;
	sub_82332C38(ctx, base);
loc_828A6E54:
	// lwz r28,1516(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1516);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x828A6E6C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828A6E84;
	sub_82A455D0(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,-15060
	ctx.r27.s64 = ctx.r11.s64 + -15060;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a6ed4
	if (!ctx.cr6.gt) goto loc_828A6ED4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_828A6EA0:
	// lwz r11,1512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x828A6EB8;
	sub_823928A0(ctx, base);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a6ea0
	if (ctx.cr6.lt) goto loc_828A6EA0;
loc_828A6ED4:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r29,r31,1600
	ctx.r29.s64 = ctx.r31.s64 + 1600;
	// lwz r10,1620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x828a6efc
	if (!ctx.cr6.gt) goto loc_828A6EFC;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x828A6EFC;
	sub_82332C38(ctx, base);
loc_828A6EFC:
	// lwz r28,1540(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x828A6F14;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a455d0
	ctx.lr = 0x828A6F2C;
	sub_82A455D0(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a6f74
	if (!ctx.cr6.gt) goto loc_828A6F74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828A6F40:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823928a0
	ctx.lr = 0x828A6F58;
	sub_823928A0(ctx, base);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a6f40
	if (ctx.cr6.lt) goto loc_828A6F40;
loc_828A6F74:
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A6F98"))) PPC_WEAK_FUNC(sub_828A6F98);
PPC_FUNC_IMPL(__imp__sub_828A6F98) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,1408(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1408, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A6FB0"))) PPC_WEAK_FUNC(sub_828A6FB0);
PPC_FUNC_IMPL(__imp__sub_828A6FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1412, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A6FC0"))) PPC_WEAK_FUNC(sub_828A6FC0);
PPC_FUNC_IMPL(__imp__sub_828A6FC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A6FD0"))) PPC_WEAK_FUNC(sub_828A6FD0);
PPC_FUNC_IMPL(__imp__sub_828A6FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r4,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r4.u64);
	// std r5,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a702c
	if (ctx.cr6.eq) goto loc_828A702C;
	// addi r4,r11,368
	ctx.r4.s64 = ctx.r11.s64 + 368;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826b1388
	ctx.lr = 0x828A7004;
	sub_826B1388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828A7014;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827f0270
	ctx.lr = 0x828A7020;
	sub_827F0270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a702c
	if (ctx.cr0.eq) goto loc_828A702C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_828A702C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A7048"))) PPC_WEAK_FUNC(sub_828A7048);
PPC_FUNC_IMPL(__imp__sub_828A7048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r31,1420
	ctx.r30.s64 = ctx.r31.s64 + 1420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A707C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x824b99b0
	ctx.lr = 0x828A7088;
	sub_824B99B0(ctx, base);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A709C;
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

__attribute__((alias("__imp__sub_828A70B8"))) PPC_WEAK_FUNC(sub_828A70B8);
PPC_FUNC_IMPL(__imp__sub_828A70B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A70C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r28,r11,-15060
	ctx.r28.s64 = ctx.r11.s64 + -15060;
	// beq cr6,0x828a7180
	if (ctx.cr6.eq) goto loc_828A7180;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828a722c
	if (ctx.cr6.eq) goto loc_828A722C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823928a0
	ctx.lr = 0x828A70FC;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a7180
	if (ctx.cr0.eq) goto loc_828A7180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a7140
	if (ctx.cr0.eq) goto loc_828A7140;
	// bl 0x82333b68
	ctx.lr = 0x828A7120;
	sub_82333B68(ctx, base);
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
	ctx.lr = 0x828A7138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a7144
	if (!ctx.cr0.eq) goto loc_828A7144;
loc_828A7140:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A7144:
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828a7158
	if (ctx.cr6.eq) goto loc_828A7158;
	// lwz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// b 0x828a715c
	goto loc_828A715C;
loc_828A7158:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828A715C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A7180;
	sub_82833A30(ctx, base);
loc_828A7180:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828a722c
	if (ctx.cr6.eq) goto loc_828A722C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823928a0
	ctx.lr = 0x828A7198;
	sub_823928A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a722c
	if (ctx.cr0.eq) goto loc_828A722C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A71B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a71dc
	if (ctx.cr0.eq) goto loc_828A71DC;
	// bl 0x82333b68
	ctx.lr = 0x828A71BC;
	sub_82333B68(ctx, base);
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
	ctx.lr = 0x828A71D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a71e0
	if (!ctx.cr0.eq) goto loc_828A71E0;
loc_828A71DC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A71E0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828a71f0
	if (ctx.cr6.eq) goto loc_828A71F0;
	// lwz r5,80(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// b 0x828a71f4
	goto loc_828A71F4;
loc_828A71F0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_828A71F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828a7204
	if (ctx.cr6.eq) goto loc_828A7204;
	// lwz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// b 0x828a7208
	goto loc_828A7208;
loc_828A7204:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828A7208:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A721C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A722C;
	sub_82833A30(ctx, base);
loc_828A722C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7238"))) PPC_WEAK_FUNC(sub_828A7238);
PPC_FUNC_IMPL(__imp__sub_828A7238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A7240;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a726c
	if (ctx.cr6.eq) goto loc_828A726C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x828a7270
	goto loc_828A7270;
loc_828A726C:
	// li r28,0
	ctx.r28.s64 = 0;
loc_828A7270:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x828a7280
	if (!ctx.cr6.eq) goto loc_828A7280;
loc_828A7278:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828a73a0
	goto loc_828A73A0;
loc_828A7280:
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a72a8
	if (ctx.cr6.eq) goto loc_828A72A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A72A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a7278
	if (ctx.cr0.eq) goto loc_828A7278;
loc_828A72A8:
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a72d0
	if (ctx.cr6.eq) goto loc_828A72D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A72C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828a7278
	if (ctx.cr0.eq) goto loc_828A7278;
loc_828A72D0:
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a733c
	if (ctx.cr6.eq) goto loc_828A733C;
	// ble cr6,0x828a7278
	if (!ctx.cr6.gt) goto loc_828A7278;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A72E8:
	// lwz r11,1512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a7324
	if (ctx.cr6.eq) goto loc_828A7324;
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a7324
	if (ctx.cr6.eq) goto loc_828A7324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A731C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a739c
	if (!ctx.cr0.eq) goto loc_828A739C;
loc_828A7324:
	// lwz r11,1516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a72e8
	if (ctx.cr6.lt) goto loc_828A72E8;
	// b 0x828a7278
	goto loc_828A7278;
loc_828A733C:
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a739c
	if (!ctx.cr6.gt) goto loc_828A739C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_828A734C:
	// lwz r11,1536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a7388
	if (ctx.cr6.eq) goto loc_828A7388;
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a7388
	if (ctx.cr6.eq) goto loc_828A7388;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828a7278
	if (!ctx.cr0.eq) goto loc_828A7278;
loc_828A7388:
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a734c
	if (ctx.cr6.lt) goto loc_828A734C;
loc_828A739C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828A73A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A73A8"))) PPC_WEAK_FUNC(sub_828A73A8);
PPC_FUNC_IMPL(__imp__sub_828A73A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x828A73B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwz r25,1572(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A73D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a74c8
	if (!ctx.cr6.gt) goto loc_828A74C8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r24,r11,-26008
	ctx.r24.s64 = ctx.r11.s64 + -26008;
loc_828A73FC:
	// lwz r10,1560(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwzx r29,r26,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x829b9720
	ctx.lr = 0x828A7418;
	sub_829B9720(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82416348
	ctx.lr = 0x828A7420;
	sub_82416348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a74a0
	if (ctx.cr0.eq) goto loc_828A74A0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x828A7430;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828a7488
	if (ctx.cr0.eq) goto loc_828A7488;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x828a7448
	if (ctx.cr6.eq) goto loc_828A7448;
	// lwz r28,80(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + 80);
	// b 0x828a744c
	goto loc_828A744C;
loc_828A7448:
	// li r28,0
	ctx.r28.s64 = 0;
loc_828A744C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r19,80(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x828A7458;
	sub_82833180(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r19.u32);
	// ori r11,r11,47806
	ctx.r11.u64 = ctx.r11.u64 | 47806;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// b 0x828a748c
	goto loc_828A748C;
loc_828A7488:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828A748C:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x828A7498;
	sub_82833A30(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x828a74b4
	goto loc_828A74B4;
loc_828A74A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x828a74b4
	if (!ctx.cr6.eq) goto loc_828A74B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1548
	ctx.r3.s64 = ctx.r30.s64 + 1548;
	// bl 0x8254f1a8
	ctx.lr = 0x828A74B4;
	sub_8254F1A8(ctx, base);
loc_828A74B4:
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a73fc
	if (ctx.cr6.lt) goto loc_828A73FC;
loc_828A74C8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A74DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A74E8"))) PPC_WEAK_FUNC(sub_828A74E8);
PPC_FUNC_IMPL(__imp__sub_828A74E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A74F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,1420
	ctx.r30.s64 = ctx.r31.s64 + 1420;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7560
	if (ctx.cr6.eq) goto loc_828A7560;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a7558
	if (!ctx.cr6.eq) goto loc_828A7558;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828a76f4
	goto loc_828A76F4;
loc_828A7558:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
loc_828A7560:
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x82410060
	ctx.lr = 0x828A756C;
	sub_82410060(ctx, base);
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r3,r29,1172
	ctx.r3.s64 = ctx.r29.s64 + 1172;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x828A7590;
	sub_82332D50(ctx, base);
	// lwz r11,1184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1184);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a75a8
	if (ctx.cr0.eq) goto loc_828A75A8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_828A75A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A75BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1488(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x828a70b8
	ctx.lr = 0x828A75CC;
	sub_828A70B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a73a8
	ctx.lr = 0x828A75DC;
	sub_828A73A8(ctx, base);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82409c40
	ctx.lr = 0x828A75E4;
	sub_82409C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a7604
	if (ctx.cr0.eq) goto loc_828A7604;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A7604:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a76f0
	if (ctx.cr6.eq) goto loc_828A76F0;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a76f0
	if (!ctx.cr6.gt) goto loc_828A76F0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_828A7628:
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,560(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 560);
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x828A7640;
	sub_8282B6B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a767c
	if (ctx.cr0.eq) goto loc_828A767C;
	// bl 0x827173e8
	ctx.lr = 0x828A764C;
	sub_827173E8(ctx, base);
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
	ctx.lr = 0x828A7664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x828a7674
	if (!ctx.cr0.eq) goto loc_828A7674;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A7674:
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// b 0x828a7680
	goto loc_828A7680;
loc_828A767C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A7680:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a76ac
	if (ctx.cr6.eq) goto loc_828A76AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A76A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_828A76AC:
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,560(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 560);
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x828A76C0;
	sub_8282B6B8(ctx, base);
	// bl 0x828a8778
	ctx.lr = 0x828A76C4;
	sub_828A8778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a76dc
	if (ctx.cr0.eq) goto loc_828A76DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828cf980
	ctx.lr = 0x828A76DC;
	sub_828CF980(ctx, base);
loc_828A76DC:
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a7628
	if (ctx.cr6.lt) goto loc_828A7628;
loc_828A76F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828A76F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7700"))) PPC_WEAK_FUNC(sub_828A7700);
PPC_FUNC_IMPL(__imp__sub_828A7700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A7708;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,1420
	ctx.r30.s64 = ctx.r31.s64 + 1420;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a77bc
	if (ctx.cr6.eq) goto loc_828A77BC;
	// lwz r11,1480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x828a77bc
	if (ctx.cr6.gt) goto loc_828A77BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7048
	ctx.lr = 0x828A775C;
	sub_828A7048(ctx, base);
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// addic. r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x828a77a4
	if (ctx.cr0.lt) goto loc_828A77A4;
	// lwz r10,1184(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1184);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_828A7774:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828a7790
	if (ctx.cr6.eq) goto loc_828A7790;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bge 0x828a7774
	if (!ctx.cr0.lt) goto loc_828A7774;
	// b 0x828a77a4
	goto loc_828A77A4;
loc_828A7790:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,1172
	ctx.r3.s64 = ctx.r29.s64 + 1172;
	// bl 0x82332ca8
	ctx.lr = 0x828A77A4;
	sub_82332CA8(ctx, base);
loc_828A77A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A77B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a7958
	goto loc_828A7958;
loc_828A77BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7048
	ctx.lr = 0x828A77C8;
	sub_828A7048(ctx, base);
	// lwz r11,1188(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1188);
	// addic. r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x828a7810
	if (ctx.cr0.lt) goto loc_828A7810;
	// lwz r11,1184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1184);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828A77E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x828a77fc
	if (ctx.cr6.eq) goto loc_828A77FC;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bge 0x828a77e0
	if (!ctx.cr0.lt) goto loc_828A77E0;
	// b 0x828a7810
	goto loc_828A7810;
loc_828A77FC:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r29,1172
	ctx.r3.s64 = ctx.r29.s64 + 1172;
	// bl 0x82332ca8
	ctx.lr = 0x828A7810;
	sub_82332CA8(ctx, base);
loc_828A7810:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// bl 0x828a70b8
	ctx.lr = 0x828A7834;
	sub_828A70B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a73a8
	ctx.lr = 0x828A7844;
	sub_828A73A8(ctx, base);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82409c40
	ctx.lr = 0x828A784C;
	sub_82409C40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a786c
	if (ctx.cr0.eq) goto loc_828A786C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A786C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A786C:
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7958
	if (ctx.cr6.eq) goto loc_828A7958;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a7958
	if (!ctx.cr6.gt) goto loc_828A7958;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_828A7890:
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,560(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 560);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x828A78A8;
	sub_8282B6B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a78e4
	if (ctx.cr0.eq) goto loc_828A78E4;
	// bl 0x82717568
	ctx.lr = 0x828A78B4;
	sub_82717568(ctx, base);
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
	ctx.lr = 0x828A78CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x828a78dc
	if (!ctx.cr0.eq) goto loc_828A78DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A78DC:
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// b 0x828a78e8
	goto loc_828A78E8;
loc_828A78E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A78E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a7914
	if (ctx.cr6.eq) goto loc_828A7914;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,13024(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_828A7914:
	// lwz r11,1388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r5,560(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 560);
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x828A7928;
	sub_8282B6B8(ctx, base);
	// bl 0x828a8778
	ctx.lr = 0x828A792C;
	sub_828A8778(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a7944
	if (ctx.cr0.eq) goto loc_828A7944;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828cfb48
	ctx.lr = 0x828A7944;
	sub_828CFB48(ctx, base);
loc_828A7944:
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a7890
	if (ctx.cr6.lt) goto loc_828A7890;
loc_828A7958:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7960"))) PPC_WEAK_FUNC(sub_828A7960);
PPC_FUNC_IMPL(__imp__sub_828A7960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,1496(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// b 0x828a70b8
	sub_828A70B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7978"))) PPC_WEAK_FUNC(sub_828A7978);
PPC_FUNC_IMPL(__imp__sub_828A7978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x829bdc10
	ctx.lr = 0x828A7994;
	sub_829BDC10(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,13024(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// bl 0x82332d50
	ctx.lr = 0x828A79B0;
	sub_82332D50(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a79c4
	if (ctx.cr0.eq) goto loc_828A79C4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_828A79C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A79E0"))) PPC_WEAK_FUNC(sub_828A79E0);
PPC_FUNC_IMPL(__imp__sub_828A79E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828A79E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r30,r11,360
	ctx.r30.s64 = ctx.r11.s64 + 360;
	// lwz r11,376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828a7a54
	if (!ctx.cr6.gt) goto loc_828A7A54;
	// li r29,0
	ctx.r29.s64 = 0;
loc_828A7A10:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828a7a40
	if (!ctx.cr6.eq) goto loc_828A7A40;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828A7A38;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_828A7A40:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a7a10
	if (ctx.cr6.lt) goto loc_828A7A10;
loc_828A7A54:
	// lwz r11,1640(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1640);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x828a7a94
	if (ctx.cr0.lt) goto loc_828A7A94;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_828A7A64:
	// lwz r11,1636(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1636);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828a7a88
	if (ctx.cr6.eq) goto loc_828A7A88;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A7A88:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bge 0x828a7a64
	if (!ctx.cr0.lt) goto loc_828A7A64;
loc_828A7A94:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 832);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a7ab8
	if (ctx.cr6.eq) goto loc_828A7AB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,1020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A7AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A7AB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829bd978
	ctx.lr = 0x828A7AC0;
	sub_829BD978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7AC8"))) PPC_WEAK_FUNC(sub_828A7AC8);
PPC_FUNC_IMPL(__imp__sub_828A7AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A7AD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x829bcbf0
	ctx.lr = 0x828A7AE4;
	sub_829BCBF0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x828A7B00;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82846e98
	ctx.lr = 0x828A7B14;
	sub_82846E98(ctx, base);
	// lwz r11,148(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82414568
	ctx.lr = 0x828A7B28;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x82400b48
	ctx.lr = 0x828A7B34;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828A7B3C;
	sub_82333960(ctx, base);
	// lwz r11,156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82414568
	ctx.lr = 0x828A7B4C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1432
	ctx.r3.s64 = ctx.r31.s64 + 1432;
	// bl 0x82400b48
	ctx.lr = 0x828A7B58;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828A7B60;
	sub_82333960(ctx, base);
	// lwz r10,160(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A7B78"))) PPC_WEAK_FUNC(sub_828A7B78);
PPC_FUNC_IMPL(__imp__sub_828A7B78) {
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
	// bl 0x829bdc10
	ctx.lr = 0x828A7B90;
	sub_829BDC10(ctx, base);
	// lwz r11,1204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a7ba4
	if (!ctx.cr6.eq) goto loc_828A7BA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x828A7BA4;
	sub_829C3628(ctx, base);
loc_828A7BA4:
	// lwz r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
	// stw r10,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r10.u32);
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A7BE8"))) PPC_WEAK_FUNC(sub_828A7BE8);
PPC_FUNC_IMPL(__imp__sub_828A7BE8) {
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
	// bl 0x829be2e8
	ctx.lr = 0x828A7C08;
	sub_829BE2E8(ctx, base);
	// lwz r11,1468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a7ce4
	if (!ctx.cr6.eq) goto loc_828A7CE4;
	// lwz r11,1476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a7ce4
	if (!ctx.cr6.eq) goto loc_828A7CE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7db8
	ctx.lr = 0x828A7C28;
	sub_828A7DB8(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// beq 0x828a7c8c
	if (ctx.cr0.eq) goto loc_828A7C8C;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,1480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x828a7c5c
	if (!ctx.cr6.eq) goto loc_828A7C5C;
	// stfs f31,1480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1480, temp.u32);
loc_828A7C5C:
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r9,788(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x828a7c98
	if (!ctx.cr6.eq) goto loc_828A7C98;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828a7c98
	if (ctx.cr6.eq) goto loc_828A7C98;
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x828a7c98
	if (!ctx.cr6.eq) goto loc_828A7C98;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x828a7c98
	goto loc_828A7C98;
loc_828A7C8C:
	// lfs f0,1484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,1484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1484, temp.u32);
loc_828A7C98:
	// lfs f0,1484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f13,1480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x828a7ce4
	if (!ctx.cr6.gt) goto loc_828A7CE4;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r10,788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x828a7ce4
	if (!ctx.cr6.eq) goto loc_828A7CE4;
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a7ce4
	if (ctx.cr6.eq) goto loc_828A7CE4;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x828a7ce4
	if (!ctx.cr6.eq) goto loc_828A7CE4;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_828A7CE4:
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

__attribute__((alias("__imp__sub_828A7D00"))) PPC_WEAK_FUNC(sub_828A7D00);
PPC_FUNC_IMPL(__imp__sub_828A7D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x829bd978
	ctx.lr = 0x828A7D18;
	sub_829BD978(ctx, base);
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828a7d2c
	if (!ctx.cr6.eq) goto loc_828A7D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7e90
	ctx.lr = 0x828A7D2C;
	sub_828A7E90(ctx, base);
loc_828A7D2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A7D40"))) PPC_WEAK_FUNC(sub_828A7D40);
PPC_FUNC_IMPL(__imp__sub_828A7D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// bl 0x824a2740
	ctx.lr = 0x828A7D5C;
	sub_824A2740(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828a7da4
	if (ctx.cr0.eq) goto loc_828A7DA4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828a7d90
	if (!ctx.cr0.eq) goto loc_828A7D90;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828a7d9c
	if (!ctx.cr0.eq) goto loc_828A7D9C;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a7d9c
	if (!ctx.cr6.eq) goto loc_828A7D9C;
loc_828A7D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7db8
	ctx.lr = 0x828A7D98;
	sub_828A7DB8(ctx, base);
	// b 0x828a7da4
	goto loc_828A7DA4;
loc_828A7D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a7e90
	ctx.lr = 0x828A7DA4;
	sub_828A7E90(ctx, base);
loc_828A7DA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A7DB8"))) PPC_WEAK_FUNC(sub_828A7DB8);
PPC_FUNC_IMPL(__imp__sub_828A7DB8) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828a7e78
	if (!ctx.cr6.eq) goto loc_828A7E78;
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7e10
	if (ctx.cr6.eq) goto loc_828A7E10;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828A7DFC;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// bl 0x829c3740
	ctx.lr = 0x828A7E0C;
	sub_829C3740(ctx, base);
	// b 0x828a7e68
	goto loc_828A7E68;
loc_828A7E10:
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a7e2c
	if (ctx.cr6.eq) goto loc_828A7E2C;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// b 0x828a7e30
	goto loc_828A7E30;
loc_828A7E2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828A7E30:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828a7e78
	if (ctx.cr6.eq) goto loc_828A7E78;
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7e48
	if (ctx.cr6.eq) goto loc_828A7E48;
	// lwz r30,1420(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
loc_828A7E48:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828A7E58;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c38b0
	ctx.lr = 0x828A7E68;
	sub_829C38B0(ctx, base);
loc_828A7E68:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
loc_828A7E78:
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

__attribute__((alias("__imp__sub_828A7E90"))) PPC_WEAK_FUNC(sub_828A7E90);
PPC_FUNC_IMPL(__imp__sub_828A7E90) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7f4c
	if (ctx.cr6.eq) goto loc_828A7F4C;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7ee8
	if (ctx.cr6.eq) goto loc_828A7EE8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828A7ED4;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// bl 0x829c3740
	ctx.lr = 0x828A7EE4;
	sub_829C3740(ctx, base);
	// b 0x828a7f40
	goto loc_828A7F40;
loc_828A7EE8:
	// lwz r10,1424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828a7f04
	if (ctx.cr6.eq) goto loc_828A7F04;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// b 0x828a7f08
	goto loc_828A7F08;
loc_828A7F04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_828A7F08:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x828a7f4c
	if (ctx.cr6.eq) goto loc_828A7F4C;
	// lwz r11,1448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828a7f20
	if (ctx.cr6.eq) goto loc_828A7F20;
	// lwz r30,1444(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
loc_828A7F20:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828A7F30;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c38b0
	ctx.lr = 0x828A7F40;
	sub_829C38B0(ctx, base);
loc_828A7F40:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
loc_828A7F4C:
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

__attribute__((alias("__imp__sub_828A7F68"))) PPC_WEAK_FUNC(sub_828A7F68);
PPC_FUNC_IMPL(__imp__sub_828A7F68) {
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
	// bl 0x828a57c8
	ctx.lr = 0x828A7F80;
	sub_828A57C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r10,-28264
	ctx.r10.s64 = ctx.r10.s64 + -28264;
	// addi r9,r9,-27216
	ctx.r9.s64 = ctx.r9.s64 + -27216;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-27164
	ctx.r8.s64 = ctx.r8.s64 + -27164;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r10.u32);
	// stw r9,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r9.u32);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8034
	if (ctx.cr6.eq) goto loc_828A8034;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8034
	if (ctx.cr6.eq) goto loc_828A8034;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,36420
	ctx.r9.u64 = ctx.r9.u64 | 36420;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8034
	if (ctx.cr6.eq) goto loc_828A8034;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ble cr6,0x828a802c
	if (!ctx.cr6.gt) goto loc_828A802C;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_828A8010:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x828a8034
	if (ctx.cr6.eq) goto loc_828A8034;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a8010
	if (ctx.cr6.lt) goto loc_828A8010;
loc_828A802C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x828A8034;
	sub_82410060(ctx, base);
loc_828A8034:
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

__attribute__((alias("__imp__sub_828A8050"))) PPC_WEAK_FUNC(sub_828A8050);
PPC_FUNC_IMPL(__imp__sub_828A8050) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r10,r10,-28264
	ctx.r10.s64 = ctx.r10.s64 + -28264;
	// addi r9,r9,-27216
	ctx.r9.s64 = ctx.r9.s64 + -27216;
	// addi r8,r8,-27164
	ctx.r8.s64 = ctx.r8.s64 + -27164;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// beq cr6,0x828a80cc
	if (ctx.cr6.eq) goto loc_828A80CC;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a80cc
	if (ctx.cr6.eq) goto loc_828A80CC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36420
	ctx.r10.u64 = ctx.r10.u64 | 36420;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a80cc
	if (ctx.cr6.eq) goto loc_828A80CC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824b99b0
	ctx.lr = 0x828A80CC;
	sub_824B99B0(ctx, base);
loc_828A80CC:
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x8239d768
	ctx.lr = 0x828A80D4;
	sub_8239D768(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,15032
	ctx.r10.s64 = ctx.r10.s64 + 15032;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// addi r11,r8,-29556
	ctx.r11.s64 = ctx.r8.s64 + -29556;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828A810C;
	sub_829BC9E8(ctx, base);
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

__attribute__((alias("__imp__sub_828A8120"))) PPC_WEAK_FUNC(sub_828A8120);
PPC_FUNC_IMPL(__imp__sub_828A8120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828A8128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828a5bb0
	ctx.lr = 0x828A813C;
	sub_828A5BB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x828A8148;
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
	ctx.lr = 0x828A815C;
	sub_82846E98(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828a81a0
	if (!ctx.cr6.gt) goto loc_828A81A0;
	// addi r28,r28,1472
	ctx.r28.s64 = ctx.r28.s64 + 1472;
loc_828A8178:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x828A818C;
	sub_82410060(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a8178
	if (ctx.cr6.lt) goto loc_828A8178;
loc_828A81A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A81A8"))) PPC_WEAK_FUNC(sub_828A81A8);
PPC_FUNC_IMPL(__imp__sub_828A81A8) {
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
	// bl 0x828a57c8
	ctx.lr = 0x828A81C0;
	sub_828A57C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r10,-27136
	ctx.r10.s64 = ctx.r10.s64 + -27136;
	// addi r9,r9,-26088
	ctx.r9.s64 = ctx.r9.s64 + -26088;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-26036
	ctx.r8.s64 = ctx.r8.s64 + -26036;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r10,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r10.u32);
	// stw r9,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r9.u32);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// stw r10,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r10.u32);
	// stw r10,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r10.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8274
	if (ctx.cr6.eq) goto loc_828A8274;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8274
	if (ctx.cr6.eq) goto loc_828A8274;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,36420
	ctx.r9.u64 = ctx.r9.u64 | 36420;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a8274
	if (ctx.cr6.eq) goto loc_828A8274;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ble cr6,0x828a826c
	if (!ctx.cr6.gt) goto loc_828A826C;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_828A8250:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x828a8274
	if (ctx.cr6.eq) goto loc_828A8274;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828a8250
	if (ctx.cr6.lt) goto loc_828A8250;
loc_828A826C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x828A8274;
	sub_82410060(ctx, base);
loc_828A8274:
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

__attribute__((alias("__imp__sub_828A8290"))) PPC_WEAK_FUNC(sub_828A8290);
PPC_FUNC_IMPL(__imp__sub_828A8290) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r10,r10,-27136
	ctx.r10.s64 = ctx.r10.s64 + -27136;
	// addi r9,r9,-26088
	ctx.r9.s64 = ctx.r9.s64 + -26088;
	// addi r8,r8,-26036
	ctx.r8.s64 = ctx.r8.s64 + -26036;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// beq cr6,0x828a830c
	if (ctx.cr6.eq) goto loc_828A830C;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a830c
	if (ctx.cr6.eq) goto loc_828A830C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,36420
	ctx.r10.u64 = ctx.r10.u64 | 36420;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828a830c
	if (ctx.cr6.eq) goto loc_828A830C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824b99b0
	ctx.lr = 0x828A830C;
	sub_824B99B0(ctx, base);
loc_828A830C:
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x8239d768
	ctx.lr = 0x828A8314;
	sub_8239D768(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,15032
	ctx.r10.s64 = ctx.r10.s64 + 15032;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// addi r11,r8,-29556
	ctx.r11.s64 = ctx.r8.s64 + -29556;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828A834C;
	sub_829BC9E8(ctx, base);
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

__attribute__((alias("__imp__sub_828A8360"))) PPC_WEAK_FUNC(sub_828A8360);
PPC_FUNC_IMPL(__imp__sub_828A8360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828A8368;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x828a5bb0
	ctx.lr = 0x828A837C;
	sub_828A5BB0(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x828A8388;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82846e98
	ctx.lr = 0x828A839C;
	sub_82846E98(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x828a83e0
	if (!ctx.cr6.gt) goto loc_828A83E0;
	// addi r26,r27,1472
	ctx.r26.s64 = ctx.r27.s64 + 1472;
loc_828A83B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x828A83CC;
	sub_82410060(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828a83b8
	if (ctx.cr6.lt) goto loc_828A83B8;
loc_828A83E0:
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// stw r11,1496(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1496, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A83F0"))) PPC_WEAK_FUNC(sub_828A83F0);
PPC_FUNC_IMPL(__imp__sub_828A83F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A83F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828a74e8
	ctx.lr = 0x828A8408;
	sub_828A74E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a842c
	if (ctx.cr6.eq) goto loc_828A842C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a8430
	goto loc_828A8430;
loc_828A842C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A8430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a844c
	if (ctx.cr6.eq) goto loc_828A844C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A844C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A844C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8458"))) PPC_WEAK_FUNC(sub_828A8458);
PPC_FUNC_IMPL(__imp__sub_828A8458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a7700
	ctx.lr = 0x828A8478;
	sub_828A7700(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828a8498
	if (ctx.cr6.eq) goto loc_828A8498;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828a849c
	goto loc_828A849C;
loc_828A8498:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A849C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828a84b8
	if (ctx.cr6.eq) goto loc_828A84B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A84B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A84B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A84D0"))) PPC_WEAK_FUNC(sub_828A84D0);
PPC_FUNC_IMPL(__imp__sub_828A84D0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// lwz r5,1496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x828a70b8
	ctx.lr = 0x828A850C;
	sub_828A70B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f12,1720(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,13024(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13024);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,1712(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lfs f13,1716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x828264e0
	ctx.lr = 0x828A85DC;
	sub_828264E0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_828A85F8"))) PPC_WEAK_FUNC(sub_828A85F8);
PPC_FUNC_IMPL(__imp__sub_828A85F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828A8600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82416348
	ctx.lr = 0x828A8610;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x828a8664
	if (ctx.cr0.eq) goto loc_828A8664;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828A862C;
	sub_829B9720(ctx, base);
	// bl 0x827dff28
	ctx.lr = 0x828A8630;
	sub_827DFF28(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x828A8644;
	sub_829B9720(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 880);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A8664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828A8664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8670"))) PPC_WEAK_FUNC(sub_828A8670);
PPC_FUNC_IMPL(__imp__sub_828A8670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// lwz r11,-26096(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26096);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a86b0
	if (!ctx.cr0.eq) goto loc_828A86B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26096(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26096, ctx.r11.u32);
	// addi r3,r9,-29440
	ctx.r3.s64 = ctx.r9.s64 + -29440;
	// bl 0x82816528
	ctx.lr = 0x828A86A8;
	sub_82816528(ctx, base);
	// stw r3,-26100(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26100, ctx.r3.u32);
	// b 0x828a86b4
	goto loc_828A86B4;
loc_828A86B0:
	// lwz r3,-26100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26100);
loc_828A86B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A86C8"))) PPC_WEAK_FUNC(sub_828A86C8);
PPC_FUNC_IMPL(__imp__sub_828A86C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828a8718
	ctx.lr = 0x828A86E8;
	sub_828A8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828A86FC;
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

__attribute__((alias("__imp__sub_828A8718"))) PPC_WEAK_FUNC(sub_828A8718);
PPC_FUNC_IMPL(__imp__sub_828A8718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// addi r31,r11,17532
	ctx.r31.s64 = ctx.r11.s64 + 17532;
	// lwz r11,17528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17528);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828a8760
	if (!ctx.cr0.eq) goto loc_828A8760;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25928
	ctx.r9.s64 = ctx.r9.s64 + -25928;
	// stw r11,17528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17528, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16520
	ctx.r3.s64 = ctx.r11.s64 + -16520;
	// bl 0x82a4c758
	ctx.lr = 0x828A8760;
	sub_82A4C758(ctx, base);
loc_828A8760:
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

__attribute__((alias("__imp__sub_828A8778"))) PPC_WEAK_FUNC(sub_828A8778);
PPC_FUNC_IMPL(__imp__sub_828A8778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
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
	// beq cr6,0x828a87bc
	if (ctx.cr6.eq) goto loc_828A87BC;
	// bl 0x82878bc0
	ctx.lr = 0x828A8798;
	sub_82878BC0(ctx, base);
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
	ctx.lr = 0x828A87B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x828a87c0
	if (!ctx.cr0.eq) goto loc_828A87C0;
loc_828A87BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828A87C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A87D8"))) PPC_WEAK_FUNC(sub_828A87D8);
PPC_FUNC_IMPL(__imp__sub_828A87D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x828a5298
	sub_828A5298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A87E0"))) PPC_WEAK_FUNC(sub_828A87E0);
PPC_FUNC_IMPL(__imp__sub_828A87E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a5440
	sub_828A5440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A87E8"))) PPC_WEAK_FUNC(sub_828A87E8);
PPC_FUNC_IMPL(__imp__sub_828A87E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a50f8
	sub_828A50F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A87F0"))) PPC_WEAK_FUNC(sub_828A87F0);
PPC_FUNC_IMPL(__imp__sub_828A87F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1024(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828A8800"))) PPC_WEAK_FUNC(sub_828A8800);
PPC_FUNC_IMPL(__imp__sub_828A8800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a5248
	sub_828A5248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8808"))) PPC_WEAK_FUNC(sub_828A8808);
PPC_FUNC_IMPL(__imp__sub_828A8808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a5298
	sub_828A5298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8810"))) PPC_WEAK_FUNC(sub_828A8810);
PPC_FUNC_IMPL(__imp__sub_828A8810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a53f0
	sub_828A53F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8818"))) PPC_WEAK_FUNC(sub_828A8818);
PPC_FUNC_IMPL(__imp__sub_828A8818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x828a5440
	sub_828A5440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8820"))) PPC_WEAK_FUNC(sub_828A8820);
PPC_FUNC_IMPL(__imp__sub_828A8820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x828a50f8
	sub_828A50F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8828"))) PPC_WEAK_FUNC(sub_828A8828);
PPC_FUNC_IMPL(__imp__sub_828A8828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x828a4fe8
	sub_828A4FE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828A8830"))) PPC_WEAK_FUNC(sub_828A8830);
PPC_FUNC_IMPL(__imp__sub_828A8830) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-15284
	ctx.r31.s64 = ctx.r11.s64 + -15284;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x828A8868;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828a8894
	if (ctx.cr0.eq) goto loc_828A8894;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_828A8894:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x828a88b8
	if (ctx.cr6.eq) goto loc_828A88B8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x828A88B8;
	sub_82332C38(ctx, base);
loc_828A88B8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_828A88D0"))) PPC_WEAK_FUNC(sub_828A88D0);
PPC_FUNC_IMPL(__imp__sub_828A88D0) {
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
	// addi r11,r11,-15284
	ctx.r11.s64 = ctx.r11.s64 + -15284;
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
	// ble cr6,0x828a893c
	if (!ctx.cr6.gt) goto loc_828A893C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A890C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a892c
	if (ctx.cr6.eq) goto loc_828A892C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a890c
	if (ctx.cr6.lt) goto loc_828A890C;
	// b 0x828a893c
	goto loc_828A893C;
loc_828A892C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_828A893C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828a8964
	if (ctx.cr6.eq) goto loc_828A8964;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828A895C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828a8968
	goto loc_828A8968;
loc_828A8964:
	// bl 0x829bc030
	ctx.lr = 0x828A8968;
	sub_829BC030(ctx, base);
loc_828A8968:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828A8978"))) PPC_WEAK_FUNC(sub_828A8978);
PPC_FUNC_IMPL(__imp__sub_828A8978) {
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
	// addi r11,r11,-15284
	ctx.r11.s64 = ctx.r11.s64 + -15284;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a89d8
	if (!ctx.cr6.gt) goto loc_828A89D8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A89A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x828a89c4
	if (ctx.cr6.eq) goto loc_828A89C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a89a4
	if (ctx.cr6.lt) goto loc_828A89A4;
	// b 0x828a89d8
	goto loc_828A89D8;
loc_828A89C4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828a89e0
	if (!ctx.cr6.eq) goto loc_828A89E0;
loc_828A89D8:
	// bl 0x829bc0e0
	ctx.lr = 0x828A89DC;
	sub_829BC0E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_828A89E0:
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

__attribute__((alias("__imp__sub_828A89F8"))) PPC_WEAK_FUNC(sub_828A89F8);
PPC_FUNC_IMPL(__imp__sub_828A89F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-15284
	ctx.r11.s64 = ctx.r11.s64 + -15284;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x828a8a78
	if (!ctx.cr6.gt) goto loc_828A8A78;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828A8A34:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x828a8a54
	if (ctx.cr6.eq) goto loc_828A8A54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x828a8a34
	if (ctx.cr6.lt) goto loc_828A8A34;
	// b 0x828a8a78
	goto loc_828A8A78;
loc_828A8A54:
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
	ctx.lr = 0x828A8A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x828a8a84
	if (!ctx.cr0.eq) goto loc_828A8A84;
loc_828A8A78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bc140
	ctx.lr = 0x828A8A84;
	sub_829BC140(ctx, base);
loc_828A8A84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

